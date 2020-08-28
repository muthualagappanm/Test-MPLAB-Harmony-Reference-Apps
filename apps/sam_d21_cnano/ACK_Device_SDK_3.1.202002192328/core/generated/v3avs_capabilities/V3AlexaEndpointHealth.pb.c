/* Automatically generated nanopb constant definitions */
/* Generated by nanopb-0.3.9 at Mon Apr 22 10:31:10 2019. */

#include "V3AlexaEndpointHealth.pb.h"

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif



const pb_field_t v3avs_capabilities_V3AlexaEndpointHealth_fields[1] = {
    PB_LAST_FIELD
};

const pb_field_t v3avs_capabilities_V3AlexaEndpointHealth_Directive_fields[1] = {
    PB_LAST_FIELD
};

const pb_field_t v3avs_capabilities_V3AlexaEndpointHealth_Event_fields[1] = {
    PB_LAST_FIELD
};

const pb_field_t v3avs_capabilities_V3AlexaEndpointHealth_ConnectivityProperty_fields[2] = {
    PB_FIELD(  1, MESSAGE , SINGULAR, STATIC  , FIRST, v3avs_capabilities_V3AlexaEndpointHealth_ConnectivityProperty, connectivity, connectivity, &v3avs_types_V3Connectivity_fields),
    PB_LAST_FIELD
};



/* Check that field information fits in pb_field_t */
#if !defined(PB_FIELD_32BIT)
/* If you get an error here, it means that you need to define PB_FIELD_32BIT
 * compile-time option. You can do that in pb.h or on compiler command line.
 * 
 * The reason you need to do this is that some of your messages contain tag
 * numbers or field sizes that are larger than what can fit in 8 or 16 bit
 * field descriptors.
 */
PB_STATIC_ASSERT((pb_membersize(v3avs_capabilities_V3AlexaEndpointHealth_ConnectivityProperty, connectivity) < 65536), YOU_MUST_DEFINE_PB_FIELD_32BIT_FOR_MESSAGES_v3avs_capabilities_V3AlexaEndpointHealth_v3avs_capabilities_V3AlexaEndpointHealth_Directive_v3avs_capabilities_V3AlexaEndpointHealth_Event_v3avs_capabilities_V3AlexaEndpointHealth_ConnectivityProperty)
#endif

#if !defined(PB_FIELD_16BIT) && !defined(PB_FIELD_32BIT)
/* If you get an error here, it means that you need to define PB_FIELD_16BIT
 * compile-time option. You can do that in pb.h or on compiler command line.
 * 
 * The reason you need to do this is that some of your messages contain tag
 * numbers or field sizes that are larger than what can fit in the default
 * 8 bit descriptors.
 */
PB_STATIC_ASSERT((pb_membersize(v3avs_capabilities_V3AlexaEndpointHealth_ConnectivityProperty, connectivity) < 256), YOU_MUST_DEFINE_PB_FIELD_16BIT_FOR_MESSAGES_v3avs_capabilities_V3AlexaEndpointHealth_v3avs_capabilities_V3AlexaEndpointHealth_Directive_v3avs_capabilities_V3AlexaEndpointHealth_Event_v3avs_capabilities_V3AlexaEndpointHealth_ConnectivityProperty)
#endif


/* @@protoc_insertion_point(eof) */