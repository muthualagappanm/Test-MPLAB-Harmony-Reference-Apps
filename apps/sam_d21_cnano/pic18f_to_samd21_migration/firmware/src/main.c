/*******************************************************************************
  Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This file contains the "main" function for a project.

  Description:
    This file contains the "main" function for a project.  The
    "main" function calls the "SYS_Initialize" function to initialize the state
    machines of all modules in the system
 *******************************************************************************/

// *****************************************************************************
// *****************************************************************************
// Section: Included Files
// *****************************************************************************
// *****************************************************************************

#include <stddef.h>                     // Defines NULL
#include <stdbool.h>                    // Defines true
#include <stdlib.h>                     // Defines EXIT_FAILURE
#include "definitions.h"                // SYS function prototypes


// *****************************************************************************
// *****************************************************************************
// Section: Main Entry Point
// *****************************************************************************
// *****************************************************************************
#include <string.h>

void executeCommand(char *command)
{
    if(strcmp(command, "ON") == 0)
    {
        LED_Clear();
        printf("OK, LED ON.\r\n");
    }
    else if (strcmp(command, "OFF") == 0)
    {
        LED_Set();
        printf("OK, LED OFF.\r\n");
    } 
    else 
    {
        printf("Incorrect command.\r\n");
    }
}

static void EIC_User_Handler(uintptr_t context)
{
    uint8_t i = 0;
    
    while(i<4){
     LED_Toggle();
     SYSTICK_DelayMs(500);
     i++;
    }
}
uint8_t txData[]  = "SELF LOOPBACK DEMO FOR SPI!";
uint8_t rxData[sizeof(txData)];
int main ( void )
{
    /* Initialize all modules */
    SYS_Initialize ( NULL );
    uint8_t command[8] = {0};
    uint8_t welcomeData[]  = "Hello World\r\n";
    
    EIC_CallbackRegister(EIC_PIN_11,EIC_User_Handler, 0);
    SYSTICK_TimerStart();
    
    SERCOM5_USART_Write(&welcomeData[0],sizeof(welcomeData));
    
    SERCOM1_SPI_WriteRead(&txData[0], sizeof(txData), &rxData[0], sizeof(rxData));
    
        /* Compare received data with the transmitted data */
    if ((memcmp(txData, rxData, sizeof(txData)) == 0))
    {
        /* Pass: Received data is same as transmitted data */
        DMAC_ChannelTransfer(DMAC_CHANNEL_0, "Received SPI Valid Data\r\n", \
        (const void *)&(SERCOM5_REGS->USART_INT.SERCOM_DATA), \
        25);
    }
    else
    {       
        /* Fail: Received data is not same as transmitted data */
        DMAC_ChannelTransfer(DMAC_CHANNEL_0, "Received Invalid SPI Data\r\n", \
        (const void *)&(SERCOM5_REGS->USART_INT.SERCOM_DATA), \
        27);
    }
    DMAC_ChannelDisable(DMAC_CHANNEL_0);

    
    while ( true )
    {
        scanf("\r\n%s", command);
        executeCommand((char*)command);
    }

    /* Execution should not come here during normal operation */

    return ( EXIT_FAILURE );
}


/*******************************************************************************
 End of File
*/
