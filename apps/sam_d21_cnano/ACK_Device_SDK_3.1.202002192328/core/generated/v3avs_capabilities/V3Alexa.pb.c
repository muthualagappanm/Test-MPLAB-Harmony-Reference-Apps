/* Automatically generated nanopb constant definitions */
/* Generated by nanopb-0.3.9 at Fri Jul 26 13:57:08 2019. */

#include "V3Alexa.pb.h"

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif



const pb_field_t v3avs_capabilities_V3Alexa_fields[1] = {
    PB_LAST_FIELD
};

const pb_field_t v3avs_capabilities_V3Alexa_Directive_fields[4] = {
    PB_FIELD(  1, UENUM   , SINGULAR, STATIC  , FIRST, v3avs_capabilities_V3Alexa_Directive, directive_name, directive_name, 0),
    PB_ONEOF_FIELD(payload,   2, MESSAGE , ONEOF, STATIC  , OTHER, v3avs_capabilities_V3Alexa_Directive, report_state, directive_name, &v3avs_capabilities_V3Alexa_ReportState_fields),
    PB_ONEOF_FIELD(payload,   3, MESSAGE , ONEOF, STATIC  , UNION, v3avs_capabilities_V3Alexa_Directive, event_processed, directive_name, &v3avs_capabilities_V3Alexa_EventProcessed_fields),
    PB_LAST_FIELD
};

const pb_field_t v3avs_capabilities_V3Alexa_ReportState_fields[1] = {
    PB_LAST_FIELD
};

const pb_field_t v3avs_capabilities_V3Alexa_EventProcessed_fields[1] = {
    PB_LAST_FIELD
};

const pb_field_t v3avs_capabilities_V3Alexa_Event_fields[7] = {
    PB_FIELD(  1, UENUM   , SINGULAR, STATIC  , FIRST, v3avs_capabilities_V3Alexa_Event, name, name, 0),
    PB_ONEOF_FIELD(payload,   2, MESSAGE , ONEOF, STATIC  , OTHER, v3avs_capabilities_V3Alexa_Event, response, name, &v3avs_capabilities_V3Alexa_Response_fields),
    PB_ONEOF_FIELD(payload,   3, MESSAGE , ONEOF, STATIC  , UNION, v3avs_capabilities_V3Alexa_Event, error_response, name, &v3avs_capabilities_V3Alexa_ErrorResponse_fields),
    PB_ONEOF_FIELD(payload,   4, MESSAGE , ONEOF, STATIC  , UNION, v3avs_capabilities_V3Alexa_Event, state_report, name, &v3avs_capabilities_V3Alexa_StateReport_fields),
    PB_ONEOF_FIELD(payload,   5, MESSAGE , ONEOF, STATIC  , UNION, v3avs_capabilities_V3Alexa_Event, change_report, name, &v3avs_capabilities_V3Alexa_ChangeReport_fields),
    PB_FIELD( 30, MESSAGE , SINGULAR, STATIC  , OTHER, v3avs_capabilities_V3Alexa_Event, context, payload.change_report, &v3avs_capabilities_V3Alexa_Context_fields),
    PB_LAST_FIELD
};

const pb_field_t v3avs_capabilities_V3Alexa_Context_fields[2] = {
    PB_FIELD(  1, MESSAGE , REPEATED, CALLBACK, FIRST, v3avs_capabilities_V3Alexa_Context, properties, properties, &v3avs_capabilities_V3Alexa_Property_fields),
    PB_LAST_FIELD
};

const pb_field_t v3avs_capabilities_V3Alexa_Response_fields[1] = {
    PB_LAST_FIELD
};

const pb_field_t v3avs_capabilities_V3Alexa_ErrorResponse_fields[4] = {
    PB_FIELD(  1, UENUM   , SINGULAR, STATIC  , FIRST, v3avs_capabilities_V3Alexa_ErrorResponse, type, type, 0),
    PB_FIELD(  2, STRING  , SINGULAR, CALLBACK, OTHER, v3avs_capabilities_V3Alexa_ErrorResponse, message, type, 0),
    PB_FIELD(  3, BYTES   , SINGULAR, CALLBACK, OTHER, v3avs_capabilities_V3Alexa_ErrorResponse, payload, message, 0),
    PB_LAST_FIELD
};

const pb_field_t v3avs_capabilities_V3Alexa_Cause_fields[2] = {
    PB_FIELD(  1, UENUM   , SINGULAR, STATIC  , FIRST, v3avs_capabilities_V3Alexa_Cause, type, type, 0),
    PB_LAST_FIELD
};

const pb_field_t v3avs_capabilities_V3Alexa_Change_fields[3] = {
    PB_FIELD(  1, MESSAGE , SINGULAR, STATIC  , FIRST, v3avs_capabilities_V3Alexa_Change, cause, cause, &v3avs_capabilities_V3Alexa_Cause_fields),
    PB_FIELD(  2, MESSAGE , REPEATED, CALLBACK, OTHER, v3avs_capabilities_V3Alexa_Change, properties, cause, &v3avs_capabilities_V3Alexa_Property_fields),
    PB_LAST_FIELD
};

const pb_field_t v3avs_capabilities_V3Alexa_ChangeReport_fields[2] = {
    PB_FIELD(  1, MESSAGE , SINGULAR, STATIC  , FIRST, v3avs_capabilities_V3Alexa_ChangeReport, change, change, &v3avs_capabilities_V3Alexa_Change_fields),
    PB_LAST_FIELD
};

const pb_field_t v3avs_capabilities_V3Alexa_StateReport_fields[1] = {
    PB_LAST_FIELD
};

const pb_field_t v3avs_capabilities_V3Alexa_ValueOutOfRange_fields[5] = {
    PB_ONEOF_FIELD(minimumValue,   1, FLOAT   , ONEOF, STATIC  , FIRST, v3avs_capabilities_V3Alexa_ValueOutOfRange, minValue, minValue, 0),
    PB_ONEOF_FIELD(minimumValue,   2, MESSAGE , ONEOF, STATIC  , UNION, v3avs_capabilities_V3Alexa_ValueOutOfRange, minTemperature, minTemperature, &v3avs_types_V3Temperature_fields),
    PB_ONEOF_FIELD(maximumValue,  30, FLOAT   , ONEOF, STATIC  , OTHER, v3avs_capabilities_V3Alexa_ValueOutOfRange, maxValue, minimumValue.minTemperature, 0),
    PB_ONEOF_FIELD(maximumValue,  31, MESSAGE , ONEOF, STATIC  , UNION, v3avs_capabilities_V3Alexa_ValueOutOfRange, maxTemperature, minimumValue.minTemperature, &v3avs_types_V3Temperature_fields),
    PB_LAST_FIELD
};

const pb_field_t v3avs_capabilities_V3Alexa_NotSupportedInCurrentMode_fields[2] = {
    PB_FIELD(  1, UENUM   , SINGULAR, STATIC  , FIRST, v3avs_capabilities_V3Alexa_NotSupportedInCurrentMode, deviceMode, deviceMode, 0),
    PB_LAST_FIELD
};

const pb_field_t v3avs_capabilities_V3Alexa_Property_fields[7] = {
    PB_FIELD(  1, UENUM   , SINGULAR, STATIC  , FIRST, v3avs_capabilities_V3Alexa_Property, v3_namespace, v3_namespace, 0),
    PB_FIELD(  2, INT32   , SINGULAR, STATIC  , OTHER, v3avs_capabilities_V3Alexa_Property, name, v3_namespace, 0),
    PB_FIELD(  3, BYTES   , SINGULAR, CALLBACK, OTHER, v3avs_capabilities_V3Alexa_Property, value, name, 0),
    PB_FIELD(  4, UINT64  , SINGULAR, STATIC  , OTHER, v3avs_capabilities_V3Alexa_Property, time_of_sample, value, 0),
    PB_FIELD(  5, UINT32  , SINGULAR, STATIC  , OTHER, v3avs_capabilities_V3Alexa_Property, uncertainty_in_milliseconds, time_of_sample, 0),
    PB_FIELD(  6, UINT32  , SINGULAR, STATIC  , OTHER, v3avs_capabilities_V3Alexa_Property, instance, uncertainty_in_milliseconds, 0),
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
PB_STATIC_ASSERT((pb_membersize(v3avs_capabilities_V3Alexa_Directive, payload.report_state) < 65536 && pb_membersize(v3avs_capabilities_V3Alexa_Directive, payload.event_processed) < 65536 && pb_membersize(v3avs_capabilities_V3Alexa_Event, payload.response) < 65536 && pb_membersize(v3avs_capabilities_V3Alexa_Event, payload.error_response) < 65536 && pb_membersize(v3avs_capabilities_V3Alexa_Event, payload.state_report) < 65536 && pb_membersize(v3avs_capabilities_V3Alexa_Event, payload.change_report) < 65536 && pb_membersize(v3avs_capabilities_V3Alexa_Event, context) < 65536 && pb_membersize(v3avs_capabilities_V3Alexa_Change, cause) < 65536 && pb_membersize(v3avs_capabilities_V3Alexa_ChangeReport, change) < 65536 && pb_membersize(v3avs_capabilities_V3Alexa_ValueOutOfRange, minimumValue.minTemperature) < 65536 && pb_membersize(v3avs_capabilities_V3Alexa_ValueOutOfRange, maximumValue.maxTemperature) < 65536), YOU_MUST_DEFINE_PB_FIELD_32BIT_FOR_MESSAGES_v3avs_capabilities_V3Alexa_v3avs_capabilities_V3Alexa_Directive_v3avs_capabilities_V3Alexa_ReportState_v3avs_capabilities_V3Alexa_EventProcessed_v3avs_capabilities_V3Alexa_Event_v3avs_capabilities_V3Alexa_Context_v3avs_capabilities_V3Alexa_Response_v3avs_capabilities_V3Alexa_ErrorResponse_v3avs_capabilities_V3Alexa_Cause_v3avs_capabilities_V3Alexa_Change_v3avs_capabilities_V3Alexa_ChangeReport_v3avs_capabilities_V3Alexa_StateReport_v3avs_capabilities_V3Alexa_ValueOutOfRange_v3avs_capabilities_V3Alexa_NotSupportedInCurrentMode_v3avs_capabilities_V3Alexa_Property)
#endif

#if !defined(PB_FIELD_16BIT) && !defined(PB_FIELD_32BIT)
/* If you get an error here, it means that you need to define PB_FIELD_16BIT
 * compile-time option. You can do that in pb.h or on compiler command line.
 * 
 * The reason you need to do this is that some of your messages contain tag
 * numbers or field sizes that are larger than what can fit in the default
 * 8 bit descriptors.
 */
PB_STATIC_ASSERT((pb_membersize(v3avs_capabilities_V3Alexa_Directive, payload.report_state) < 256 && pb_membersize(v3avs_capabilities_V3Alexa_Directive, payload.event_processed) < 256 && pb_membersize(v3avs_capabilities_V3Alexa_Event, payload.response) < 256 && pb_membersize(v3avs_capabilities_V3Alexa_Event, payload.error_response) < 256 && pb_membersize(v3avs_capabilities_V3Alexa_Event, payload.state_report) < 256 && pb_membersize(v3avs_capabilities_V3Alexa_Event, payload.change_report) < 256 && pb_membersize(v3avs_capabilities_V3Alexa_Event, context) < 256 && pb_membersize(v3avs_capabilities_V3Alexa_Change, cause) < 256 && pb_membersize(v3avs_capabilities_V3Alexa_ChangeReport, change) < 256 && pb_membersize(v3avs_capabilities_V3Alexa_ValueOutOfRange, minimumValue.minTemperature) < 256 && pb_membersize(v3avs_capabilities_V3Alexa_ValueOutOfRange, maximumValue.maxTemperature) < 256), YOU_MUST_DEFINE_PB_FIELD_16BIT_FOR_MESSAGES_v3avs_capabilities_V3Alexa_v3avs_capabilities_V3Alexa_Directive_v3avs_capabilities_V3Alexa_ReportState_v3avs_capabilities_V3Alexa_EventProcessed_v3avs_capabilities_V3Alexa_Event_v3avs_capabilities_V3Alexa_Context_v3avs_capabilities_V3Alexa_Response_v3avs_capabilities_V3Alexa_ErrorResponse_v3avs_capabilities_V3Alexa_Cause_v3avs_capabilities_V3Alexa_Change_v3avs_capabilities_V3Alexa_ChangeReport_v3avs_capabilities_V3Alexa_StateReport_v3avs_capabilities_V3Alexa_ValueOutOfRange_v3avs_capabilities_V3Alexa_NotSupportedInCurrentMode_v3avs_capabilities_V3Alexa_Property)
#endif


/* @@protoc_insertion_point(eof) */