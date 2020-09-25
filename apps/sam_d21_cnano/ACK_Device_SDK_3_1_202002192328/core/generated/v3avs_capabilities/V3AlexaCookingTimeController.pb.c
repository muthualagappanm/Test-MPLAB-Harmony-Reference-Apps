#include "ack_user_config.h"
#if defined(ACK_COOKING_TIME_CONTROLLER)

/* Automatically generated nanopb constant definitions */
/* Generated by nanopb-0.3.9 at Tue Aug 27 15:16:09 2019. */

#include "V3AlexaCookingTimeController.pb.h"

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif



const pb_field_t v3avs_capabilities_V3AlexaCookingTimeController_fields[1] = {
    PB_LAST_FIELD
};

const pb_field_t v3avs_capabilities_V3AlexaCookingTimeController_Directive_fields[4] = {
    PB_FIELD(  1, UENUM   , SINGULAR, STATIC  , FIRST, v3avs_capabilities_V3AlexaCookingTimeController_Directive, directive_name, directive_name, 0),
    PB_ONEOF_FIELD(payload,   2, MESSAGE , ONEOF, STATIC  , OTHER, v3avs_capabilities_V3AlexaCookingTimeController_Directive, cook_by_time, directive_name, &v3avs_capabilities_V3AlexaCookingTimeController_CookByTime_fields),
    PB_ONEOF_FIELD(payload,   3, MESSAGE , ONEOF, STATIC  , UNION, v3avs_capabilities_V3AlexaCookingTimeController_Directive, adjust_cook_time, directive_name, &v3avs_capabilities_V3AlexaCookingTimeController_AdjustCookTime_fields),
    PB_LAST_FIELD
};

const pb_field_t v3avs_capabilities_V3AlexaCookingTimeController_Event_fields[1] = {
    PB_LAST_FIELD
};

const pb_field_t v3avs_capabilities_V3AlexaCookingTimeController_CookingPowerLevel_fields[4] = {
    PB_FIELD(  1, UENUM   , SINGULAR, STATIC  , FIRST, v3avs_capabilities_V3AlexaCookingTimeController_CookingPowerLevel, cooking_power_level_type, cooking_power_level_type, 0),
    PB_ONEOF_FIELD(payload,   2, MESSAGE , ONEOF, STATIC  , OTHER, v3avs_capabilities_V3AlexaCookingTimeController_CookingPowerLevel, enumerated_power_level, cooking_power_level_type, &v3avs_types_V3EnumeratedPowerLevel_fields),
    PB_ONEOF_FIELD(payload,   3, MESSAGE , ONEOF, STATIC  , UNION, v3avs_capabilities_V3AlexaCookingTimeController_CookingPowerLevel, integral_power_level, cooking_power_level_type, &v3avs_types_V3IntegralPowerLevel_fields),
    PB_LAST_FIELD
};

const pb_field_t v3avs_capabilities_V3AlexaCookingTimeController_CookByTime_fields[6] = {
    PB_FIELD(  1, MESSAGE , SINGULAR, STATIC  , FIRST, v3avs_capabilities_V3AlexaCookingTimeController_CookByTime, cook_time, cook_time, &v3avs_types_V3Duration_fields),
    PB_FIELD(  2, MESSAGE , SINGULAR, STATIC  , OTHER, v3avs_capabilities_V3AlexaCookingTimeController_CookByTime, cooking_mode, cook_time, &v3avs_types_V3CookingMode_fields),
    PB_FIELD(  3, MESSAGE , SINGULAR, STATIC  , OTHER, v3avs_capabilities_V3AlexaCookingTimeController_CookByTime, cooking_power_level, cooking_mode, &v3avs_capabilities_V3AlexaCookingTimeController_CookingPowerLevel_fields),
    PB_FIELD(  4, MESSAGE , SINGULAR, STATIC  , OTHER, v3avs_capabilities_V3AlexaCookingTimeController_CookByTime, food_item, cooking_power_level, &v3avs_types_V3FoodItem_fields),
    PB_FIELD(  5, MESSAGE , SINGULAR, STATIC  , OTHER, v3avs_capabilities_V3AlexaCookingTimeController_CookByTime, target_cooking_temperature, food_item, &v3avs_types_V3Temperature_fields),
    PB_LAST_FIELD
};

const pb_field_t v3avs_capabilities_V3AlexaCookingTimeController_AdjustCookTime_fields[2] = {
    PB_FIELD(  1, MESSAGE , SINGULAR, STATIC  , FIRST, v3avs_capabilities_V3AlexaCookingTimeController_AdjustCookTime, cook_time_delta, cook_time_delta, &v3avs_types_V3Duration_fields),
    PB_LAST_FIELD
};

const pb_field_t v3avs_capabilities_V3AlexaCookingTimeController_RequestedCookTimeProperty_fields[2] = {
    PB_FIELD(  1, MESSAGE , SINGULAR, STATIC  , FIRST, v3avs_capabilities_V3AlexaCookingTimeController_RequestedCookTimeProperty, requested_cook_time, requested_cook_time, &v3avs_types_V3Duration_fields),
    PB_LAST_FIELD
};

const pb_field_t v3avs_capabilities_V3AlexaCookingTimeController_CookingPowerLevelProperty_fields[2] = {
    PB_FIELD(  1, MESSAGE , SINGULAR, STATIC  , FIRST, v3avs_capabilities_V3AlexaCookingTimeController_CookingPowerLevelProperty, power_level, power_level, &v3avs_capabilities_V3AlexaCookingTimeController_CookingPowerLevel_fields),
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
PB_STATIC_ASSERT((pb_membersize(v3avs_capabilities_V3AlexaCookingTimeController_Directive, payload.cook_by_time) < 65536 && pb_membersize(v3avs_capabilities_V3AlexaCookingTimeController_Directive, payload.adjust_cook_time) < 65536 && pb_membersize(v3avs_capabilities_V3AlexaCookingTimeController_CookingPowerLevel, payload.enumerated_power_level) < 65536 && pb_membersize(v3avs_capabilities_V3AlexaCookingTimeController_CookingPowerLevel, payload.integral_power_level) < 65536 && pb_membersize(v3avs_capabilities_V3AlexaCookingTimeController_CookByTime, cook_time) < 65536 && pb_membersize(v3avs_capabilities_V3AlexaCookingTimeController_CookByTime, cooking_mode) < 65536 && pb_membersize(v3avs_capabilities_V3AlexaCookingTimeController_CookByTime, cooking_power_level) < 65536 && pb_membersize(v3avs_capabilities_V3AlexaCookingTimeController_CookByTime, food_item) < 65536 && pb_membersize(v3avs_capabilities_V3AlexaCookingTimeController_CookByTime, target_cooking_temperature) < 65536 && pb_membersize(v3avs_capabilities_V3AlexaCookingTimeController_AdjustCookTime, cook_time_delta) < 65536 && pb_membersize(v3avs_capabilities_V3AlexaCookingTimeController_RequestedCookTimeProperty, requested_cook_time) < 65536 && pb_membersize(v3avs_capabilities_V3AlexaCookingTimeController_CookingPowerLevelProperty, power_level) < 65536), YOU_MUST_DEFINE_PB_FIELD_32BIT_FOR_MESSAGES_v3avs_capabilities_V3AlexaCookingTimeController_v3avs_capabilities_V3AlexaCookingTimeController_Directive_v3avs_capabilities_V3AlexaCookingTimeController_Event_v3avs_capabilities_V3AlexaCookingTimeController_CookingPowerLevel_v3avs_capabilities_V3AlexaCookingTimeController_CookByTime_v3avs_capabilities_V3AlexaCookingTimeController_AdjustCookTime_v3avs_capabilities_V3AlexaCookingTimeController_RequestedCookTimeProperty_v3avs_capabilities_V3AlexaCookingTimeController_CookingPowerLevelProperty)
#endif

#if !defined(PB_FIELD_16BIT) && !defined(PB_FIELD_32BIT)
/* If you get an error here, it means that you need to define PB_FIELD_16BIT
 * compile-time option. You can do that in pb.h or on compiler command line.
 *
 * The reason you need to do this is that some of your messages contain tag
 * numbers or field sizes that are larger than what can fit in the default
 * 8 bit descriptors.
 */
PB_STATIC_ASSERT((pb_membersize(v3avs_capabilities_V3AlexaCookingTimeController_Directive, payload.cook_by_time) < 256 && pb_membersize(v3avs_capabilities_V3AlexaCookingTimeController_Directive, payload.adjust_cook_time) < 256 && pb_membersize(v3avs_capabilities_V3AlexaCookingTimeController_CookingPowerLevel, payload.enumerated_power_level) < 256 && pb_membersize(v3avs_capabilities_V3AlexaCookingTimeController_CookingPowerLevel, payload.integral_power_level) < 256 && pb_membersize(v3avs_capabilities_V3AlexaCookingTimeController_CookByTime, cook_time) < 256 && pb_membersize(v3avs_capabilities_V3AlexaCookingTimeController_CookByTime, cooking_mode) < 256 && pb_membersize(v3avs_capabilities_V3AlexaCookingTimeController_CookByTime, cooking_power_level) < 256 && pb_membersize(v3avs_capabilities_V3AlexaCookingTimeController_CookByTime, food_item) < 256 && pb_membersize(v3avs_capabilities_V3AlexaCookingTimeController_CookByTime, target_cooking_temperature) < 256 && pb_membersize(v3avs_capabilities_V3AlexaCookingTimeController_AdjustCookTime, cook_time_delta) < 256 && pb_membersize(v3avs_capabilities_V3AlexaCookingTimeController_RequestedCookTimeProperty, requested_cook_time) < 256 && pb_membersize(v3avs_capabilities_V3AlexaCookingTimeController_CookingPowerLevelProperty, power_level) < 256), YOU_MUST_DEFINE_PB_FIELD_16BIT_FOR_MESSAGES_v3avs_capabilities_V3AlexaCookingTimeController_v3avs_capabilities_V3AlexaCookingTimeController_Directive_v3avs_capabilities_V3AlexaCookingTimeController_Event_v3avs_capabilities_V3AlexaCookingTimeController_CookingPowerLevel_v3avs_capabilities_V3AlexaCookingTimeController_CookByTime_v3avs_capabilities_V3AlexaCookingTimeController_AdjustCookTime_v3avs_capabilities_V3AlexaCookingTimeController_RequestedCookTimeProperty_v3avs_capabilities_V3AlexaCookingTimeController_CookingPowerLevelProperty)
#endif


/* @@protoc_insertion_point(eof) */

#endif