# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: v3avs_capabilities/V3AlexaPowerController.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


from v3avs_types import V3PowerState_pb2 as v3avs__types_dot_V3PowerState__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='v3avs_capabilities/V3AlexaPowerController.proto',
  package='v3avs_capabilities',
  syntax='proto3',
  serialized_pb=_b('\n/v3avs_capabilities/V3AlexaPowerController.proto\x12\x12v3avs_capabilities\x1a\x1ev3avs_types/V3PowerState.proto\"\xc7\x03\n\x16V3AlexaPowerController\x1a\xf6\x01\n\tDirective\x12P\n\x0e\x64irective_name\x18\x01 \x01(\x0e\x32\x38.v3avs_capabilities.V3AlexaPowerController.DirectiveName\x12\x44\n\x07turn_on\x18\x02 \x01(\x0b\x32\x31.v3avs_capabilities.V3AlexaPowerController.TurnOnH\x00\x12\x46\n\x08turn_off\x18\x03 \x01(\x0b\x32\x32.v3avs_capabilities.V3AlexaPowerController.TurnOffH\x00\x42\t\n\x07payload\x1a\x07\n\x05\x45vent\x1a\x08\n\x06TurnOn\x1a\t\n\x07TurnOff\x1a\x44\n\x12PowerStateProperty\x12.\n\x0bpower_state\x18\x01 \x01(\x0b\x32\x19.v3avs_types.V3PowerState\"*\n\rDirectiveName\x12\x0b\n\x07TURN_ON\x10\x00\x12\x0c\n\x08TURN_OFF\x10\x01\"$\n\x0cPropertyName\x12\x14\n\x10POWER_STATE_PROP\x10\x00\x42\x42\n*com.amazon.proto.avs.v3.v3avs_capabilitiesB\x14\x41lexaPowerControllerb\x06proto3')
  ,
  dependencies=[v3avs__types_dot_V3PowerState__pb2.DESCRIPTOR,])
_sym_db.RegisterFileDescriptor(DESCRIPTOR)



_V3ALEXAPOWERCONTROLLER_DIRECTIVENAME = _descriptor.EnumDescriptor(
  name='DirectiveName',
  full_name='v3avs_capabilities.V3AlexaPowerController.DirectiveName',
  filename=None,
  file=DESCRIPTOR,
  values=[
    _descriptor.EnumValueDescriptor(
      name='TURN_ON', index=0, number=0,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='TURN_OFF', index=1, number=1,
      options=None,
      type=None),
  ],
  containing_type=None,
  options=None,
  serialized_start=479,
  serialized_end=521,
)
_sym_db.RegisterEnumDescriptor(_V3ALEXAPOWERCONTROLLER_DIRECTIVENAME)

_V3ALEXAPOWERCONTROLLER_PROPERTYNAME = _descriptor.EnumDescriptor(
  name='PropertyName',
  full_name='v3avs_capabilities.V3AlexaPowerController.PropertyName',
  filename=None,
  file=DESCRIPTOR,
  values=[
    _descriptor.EnumValueDescriptor(
      name='POWER_STATE_PROP', index=0, number=0,
      options=None,
      type=None),
  ],
  containing_type=None,
  options=None,
  serialized_start=523,
  serialized_end=559,
)
_sym_db.RegisterEnumDescriptor(_V3ALEXAPOWERCONTROLLER_PROPERTYNAME)


_V3ALEXAPOWERCONTROLLER_DIRECTIVE = _descriptor.Descriptor(
  name='Directive',
  full_name='v3avs_capabilities.V3AlexaPowerController.Directive',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='directive_name', full_name='v3avs_capabilities.V3AlexaPowerController.Directive.directive_name', index=0,
      number=1, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='turn_on', full_name='v3avs_capabilities.V3AlexaPowerController.Directive.turn_on', index=1,
      number=2, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='turn_off', full_name='v3avs_capabilities.V3AlexaPowerController.Directive.turn_off', index=2,
      number=3, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
    _descriptor.OneofDescriptor(
      name='payload', full_name='v3avs_capabilities.V3AlexaPowerController.Directive.payload',
      index=0, containing_type=None, fields=[]),
  ],
  serialized_start=131,
  serialized_end=377,
)

_V3ALEXAPOWERCONTROLLER_EVENT = _descriptor.Descriptor(
  name='Event',
  full_name='v3avs_capabilities.V3AlexaPowerController.Event',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=379,
  serialized_end=386,
)

_V3ALEXAPOWERCONTROLLER_TURNON = _descriptor.Descriptor(
  name='TurnOn',
  full_name='v3avs_capabilities.V3AlexaPowerController.TurnOn',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=388,
  serialized_end=396,
)

_V3ALEXAPOWERCONTROLLER_TURNOFF = _descriptor.Descriptor(
  name='TurnOff',
  full_name='v3avs_capabilities.V3AlexaPowerController.TurnOff',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=398,
  serialized_end=407,
)

_V3ALEXAPOWERCONTROLLER_POWERSTATEPROPERTY = _descriptor.Descriptor(
  name='PowerStateProperty',
  full_name='v3avs_capabilities.V3AlexaPowerController.PowerStateProperty',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='power_state', full_name='v3avs_capabilities.V3AlexaPowerController.PowerStateProperty.power_state', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=409,
  serialized_end=477,
)

_V3ALEXAPOWERCONTROLLER = _descriptor.Descriptor(
  name='V3AlexaPowerController',
  full_name='v3avs_capabilities.V3AlexaPowerController',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
  ],
  extensions=[
  ],
  nested_types=[_V3ALEXAPOWERCONTROLLER_DIRECTIVE, _V3ALEXAPOWERCONTROLLER_EVENT, _V3ALEXAPOWERCONTROLLER_TURNON, _V3ALEXAPOWERCONTROLLER_TURNOFF, _V3ALEXAPOWERCONTROLLER_POWERSTATEPROPERTY, ],
  enum_types=[
    _V3ALEXAPOWERCONTROLLER_DIRECTIVENAME,
    _V3ALEXAPOWERCONTROLLER_PROPERTYNAME,
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=104,
  serialized_end=559,
)

_V3ALEXAPOWERCONTROLLER_DIRECTIVE.fields_by_name['directive_name'].enum_type = _V3ALEXAPOWERCONTROLLER_DIRECTIVENAME
_V3ALEXAPOWERCONTROLLER_DIRECTIVE.fields_by_name['turn_on'].message_type = _V3ALEXAPOWERCONTROLLER_TURNON
_V3ALEXAPOWERCONTROLLER_DIRECTIVE.fields_by_name['turn_off'].message_type = _V3ALEXAPOWERCONTROLLER_TURNOFF
_V3ALEXAPOWERCONTROLLER_DIRECTIVE.containing_type = _V3ALEXAPOWERCONTROLLER
_V3ALEXAPOWERCONTROLLER_DIRECTIVE.oneofs_by_name['payload'].fields.append(
  _V3ALEXAPOWERCONTROLLER_DIRECTIVE.fields_by_name['turn_on'])
_V3ALEXAPOWERCONTROLLER_DIRECTIVE.fields_by_name['turn_on'].containing_oneof = _V3ALEXAPOWERCONTROLLER_DIRECTIVE.oneofs_by_name['payload']
_V3ALEXAPOWERCONTROLLER_DIRECTIVE.oneofs_by_name['payload'].fields.append(
  _V3ALEXAPOWERCONTROLLER_DIRECTIVE.fields_by_name['turn_off'])
_V3ALEXAPOWERCONTROLLER_DIRECTIVE.fields_by_name['turn_off'].containing_oneof = _V3ALEXAPOWERCONTROLLER_DIRECTIVE.oneofs_by_name['payload']
_V3ALEXAPOWERCONTROLLER_EVENT.containing_type = _V3ALEXAPOWERCONTROLLER
_V3ALEXAPOWERCONTROLLER_TURNON.containing_type = _V3ALEXAPOWERCONTROLLER
_V3ALEXAPOWERCONTROLLER_TURNOFF.containing_type = _V3ALEXAPOWERCONTROLLER
_V3ALEXAPOWERCONTROLLER_POWERSTATEPROPERTY.fields_by_name['power_state'].message_type = v3avs__types_dot_V3PowerState__pb2._V3POWERSTATE
_V3ALEXAPOWERCONTROLLER_POWERSTATEPROPERTY.containing_type = _V3ALEXAPOWERCONTROLLER
_V3ALEXAPOWERCONTROLLER_DIRECTIVENAME.containing_type = _V3ALEXAPOWERCONTROLLER
_V3ALEXAPOWERCONTROLLER_PROPERTYNAME.containing_type = _V3ALEXAPOWERCONTROLLER
DESCRIPTOR.message_types_by_name['V3AlexaPowerController'] = _V3ALEXAPOWERCONTROLLER

V3AlexaPowerController = _reflection.GeneratedProtocolMessageType('V3AlexaPowerController', (_message.Message,), dict(

  Directive = _reflection.GeneratedProtocolMessageType('Directive', (_message.Message,), dict(
    DESCRIPTOR = _V3ALEXAPOWERCONTROLLER_DIRECTIVE,
    __module__ = 'v3avs_capabilities.V3AlexaPowerController_pb2'
    # @@protoc_insertion_point(class_scope:v3avs_capabilities.V3AlexaPowerController.Directive)
    ))
  ,

  Event = _reflection.GeneratedProtocolMessageType('Event', (_message.Message,), dict(
    DESCRIPTOR = _V3ALEXAPOWERCONTROLLER_EVENT,
    __module__ = 'v3avs_capabilities.V3AlexaPowerController_pb2'
    # @@protoc_insertion_point(class_scope:v3avs_capabilities.V3AlexaPowerController.Event)
    ))
  ,

  TurnOn = _reflection.GeneratedProtocolMessageType('TurnOn', (_message.Message,), dict(
    DESCRIPTOR = _V3ALEXAPOWERCONTROLLER_TURNON,
    __module__ = 'v3avs_capabilities.V3AlexaPowerController_pb2'
    # @@protoc_insertion_point(class_scope:v3avs_capabilities.V3AlexaPowerController.TurnOn)
    ))
  ,

  TurnOff = _reflection.GeneratedProtocolMessageType('TurnOff', (_message.Message,), dict(
    DESCRIPTOR = _V3ALEXAPOWERCONTROLLER_TURNOFF,
    __module__ = 'v3avs_capabilities.V3AlexaPowerController_pb2'
    # @@protoc_insertion_point(class_scope:v3avs_capabilities.V3AlexaPowerController.TurnOff)
    ))
  ,

  PowerStateProperty = _reflection.GeneratedProtocolMessageType('PowerStateProperty', (_message.Message,), dict(
    DESCRIPTOR = _V3ALEXAPOWERCONTROLLER_POWERSTATEPROPERTY,
    __module__ = 'v3avs_capabilities.V3AlexaPowerController_pb2'
    # @@protoc_insertion_point(class_scope:v3avs_capabilities.V3AlexaPowerController.PowerStateProperty)
    ))
  ,
  DESCRIPTOR = _V3ALEXAPOWERCONTROLLER,
  __module__ = 'v3avs_capabilities.V3AlexaPowerController_pb2'
  # @@protoc_insertion_point(class_scope:v3avs_capabilities.V3AlexaPowerController)
  ))
_sym_db.RegisterMessage(V3AlexaPowerController)
_sym_db.RegisterMessage(V3AlexaPowerController.Directive)
_sym_db.RegisterMessage(V3AlexaPowerController.Event)
_sym_db.RegisterMessage(V3AlexaPowerController.TurnOn)
_sym_db.RegisterMessage(V3AlexaPowerController.TurnOff)
_sym_db.RegisterMessage(V3AlexaPowerController.PowerStateProperty)


DESCRIPTOR.has_options = True
DESCRIPTOR._options = _descriptor._ParseOptions(descriptor_pb2.FileOptions(), _b('\n*com.amazon.proto.avs.v3.v3avs_capabilitiesB\024AlexaPowerController'))
# @@protoc_insertion_point(module_scope)