#include "ack_user_config.h"
#if defined(ACK_COOKING) || defined(ACK_COOKING_TIME_CONTROLLER)

/* Automatically generated nanopb header */
/* Generated by nanopb-0.3.9 at Tue Aug 27 15:16:16 2019. */

#ifndef PB_V3AVS_TYPES_V3ENUMERATEDPOWERLEVEL_PB_H_INCLUDED
#define PB_V3AVS_TYPES_V3ENUMERATEDPOWERLEVEL_PB_H_INCLUDED
#include <pb.h>

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Enum definitions */
typedef enum _v3avs_types_V3EnumeratedPowerLevel_Value {
    v3avs_types_V3EnumeratedPowerLevel_Value_NA = 0,
    v3avs_types_V3EnumeratedPowerLevel_Value_LOW = 1,
    v3avs_types_V3EnumeratedPowerLevel_Value_MED_LOW = 2,
    v3avs_types_V3EnumeratedPowerLevel_Value_MEDIUM = 3,
    v3avs_types_V3EnumeratedPowerLevel_Value_MED_HIGH = 4,
    v3avs_types_V3EnumeratedPowerLevel_Value_HIGH = 5
} v3avs_types_V3EnumeratedPowerLevel_Value;
#define _v3avs_types_V3EnumeratedPowerLevel_Value_MIN v3avs_types_V3EnumeratedPowerLevel_Value_NA
#define _v3avs_types_V3EnumeratedPowerLevel_Value_MAX v3avs_types_V3EnumeratedPowerLevel_Value_HIGH
#define _v3avs_types_V3EnumeratedPowerLevel_Value_ARRAYSIZE ((v3avs_types_V3EnumeratedPowerLevel_Value)(v3avs_types_V3EnumeratedPowerLevel_Value_HIGH+1))

/* Struct definitions */
typedef struct _v3avs_types_V3EnumeratedPowerLevel {
    v3avs_types_V3EnumeratedPowerLevel_Value value;
/* @@protoc_insertion_point(struct:v3avs_types_V3EnumeratedPowerLevel) */
} v3avs_types_V3EnumeratedPowerLevel;

/* Default values for struct fields */

/* Initializer values for message structs */
#define v3avs_types_V3EnumeratedPowerLevel_init_default {(v3avs_types_V3EnumeratedPowerLevel_Value)0}
#define v3avs_types_V3EnumeratedPowerLevel_init_zero {(v3avs_types_V3EnumeratedPowerLevel_Value)0}

/* Field tags (for use in manual encoding/decoding) */
#define v3avs_types_V3EnumeratedPowerLevel_value_tag 1

/* Struct field encoding specification for nanopb */
extern const pb_field_t v3avs_types_V3EnumeratedPowerLevel_fields[2];

/* Maximum encoded size of messages (where known) */
#define v3avs_types_V3EnumeratedPowerLevel_size  2

/* Message IDs (where set with "msgid" option) */
#ifdef PB_MSGID

#define V3ENUMERATEDPOWERLEVEL_MESSAGES \


#endif

#ifdef __cplusplus
} /* extern "C" */
#endif
/* @@protoc_insertion_point(eof) */

#endif

#endif