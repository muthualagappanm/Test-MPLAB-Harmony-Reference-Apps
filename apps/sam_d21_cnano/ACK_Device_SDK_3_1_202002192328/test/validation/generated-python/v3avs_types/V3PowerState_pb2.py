# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: v3avs_types/V3PowerState.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()




DESCRIPTOR = _descriptor.FileDescriptor(
  name='v3avs_types/V3PowerState.proto',
  package='v3avs_types',
  syntax='proto3',
  serialized_pb=_b('\n\x1ev3avs_types/V3PowerState.proto\x12\x0bv3avs_types\"X\n\x0cV3PowerState\x12.\n\x05value\x18\x01 \x01(\x0e\x32\x1f.v3avs_types.V3PowerState.Value\"\x18\n\x05Value\x12\x06\n\x02ON\x10\x00\x12\x07\n\x03OFF\x10\x01\x42\x31\n#com.amazon.proto.avs.v3.v3avs_typesB\nPowerStateb\x06proto3')
)
_sym_db.RegisterFileDescriptor(DESCRIPTOR)



_V3POWERSTATE_VALUE = _descriptor.EnumDescriptor(
  name='Value',
  full_name='v3avs_types.V3PowerState.Value',
  filename=None,
  file=DESCRIPTOR,
  values=[
    _descriptor.EnumValueDescriptor(
      name='ON', index=0, number=0,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='OFF', index=1, number=1,
      options=None,
      type=None),
  ],
  containing_type=None,
  options=None,
  serialized_start=111,
  serialized_end=135,
)
_sym_db.RegisterEnumDescriptor(_V3POWERSTATE_VALUE)


_V3POWERSTATE = _descriptor.Descriptor(
  name='V3PowerState',
  full_name='v3avs_types.V3PowerState',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='value', full_name='v3avs_types.V3PowerState.value', index=0,
      number=1, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
    _V3POWERSTATE_VALUE,
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=47,
  serialized_end=135,
)

_V3POWERSTATE.fields_by_name['value'].enum_type = _V3POWERSTATE_VALUE
_V3POWERSTATE_VALUE.containing_type = _V3POWERSTATE
DESCRIPTOR.message_types_by_name['V3PowerState'] = _V3POWERSTATE

V3PowerState = _reflection.GeneratedProtocolMessageType('V3PowerState', (_message.Message,), dict(
  DESCRIPTOR = _V3POWERSTATE,
  __module__ = 'v3avs_types.V3PowerState_pb2'
  # @@protoc_insertion_point(class_scope:v3avs_types.V3PowerState)
  ))
_sym_db.RegisterMessage(V3PowerState)


DESCRIPTOR.has_options = True
DESCRIPTOR._options = _descriptor._ParseOptions(descriptor_pb2.FileOptions(), _b('\n#com.amazon.proto.avs.v3.v3avs_typesB\nPowerState'))
# @@protoc_insertion_point(module_scope)