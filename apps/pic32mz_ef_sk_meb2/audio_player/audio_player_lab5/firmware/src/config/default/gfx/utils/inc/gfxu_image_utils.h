// DOM-IGNORE-BEGIN
/*******************************************************************************
* Copyright (C) 2020 Microchip Technology Inc. and its subsidiaries.
*
* Subject to your compliance with these terms, you may use Microchip software
* and any derivatives exclusively with Microchip products. It is your
* responsibility to comply with third party license terms applicable to your
* use of third party software (including open source software) that may
* accompany Microchip software.
*
* THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
* EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED
* WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A
* PARTICULAR PURPOSE.
*
* IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
* INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
* WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS
* BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE
* FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN
* ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
* THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
*******************************************************************************/
// DOM-IGNORE-END

/*******************************************************************************
 Module for Microchip Graphics Library - Graphics Utilities Library

  Company:
    Microchip Technology Inc.

  File Name:
    gfx_image_utils.h

  Summary:
    Image return utilities

  Description:
    Internal library use only
*******************************************************************************/

// DOM-IGNORE-BEGIN
#ifndef GFXU_IMAGE_UTILS_H
#define GFXU_IMAGE_UTILS_H
//DOM-IGNORE-END

#include "gfx/utils/inc/gfxu_image.h"

// DOM-IGNORE-BEGIN

// internal use only
uint32_t getRLEDataAtIndex(uint8_t* data,
                           uint32_t max,
                           uint32_t idx,
                           uint32_t* startBlock,
                           uint32_t* startOffset);

// internal use only                        
uint32_t getDiscreteValueAtIndex(uint32_t index, uint32_t value, GFX_ColorMode mode);

// internal use only
uint32_t getOffsetFromIndexAndBPP(uint32_t index, GFX_BitsPerPixel bpp);

// internal use only
GFX_Result convertColorAndSetDraw(uint32_t color, GFX_ColorMode mode);

// internal use only
void createDefaultMemIntf(GFXU_MemoryIntf* memIntf);

// DOM-IGNORE-END

#endif /* GFXU_IMAGE_UTILS_H */