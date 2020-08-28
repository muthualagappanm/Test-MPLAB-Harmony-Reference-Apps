# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: v3avs_types/V3FoodItem.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


from v3avs_types import V3ItemQuantity_pb2 as v3avs__types_dot_V3ItemQuantity__pb2
from v3avs_types import V3Length_pb2 as v3avs__types_dot_V3Length__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='v3avs_types/V3FoodItem.proto',
  package='v3avs_types',
  syntax='proto3',
  serialized_pb=_b('\n\x1cv3avs_types/V3FoodItem.proto\x12\x0bv3avs_types\x1a v3avs_types/V3ItemQuantity.proto\x1a\x1av3avs_types/V3Length.proto\"\xfc\x03\n\nV3FoodItem\x12\x11\n\tfood_name\x18\x01 \x01(\t\x12;\n\rfood_category\x18\x02 \x01(\x0e\x32$.v3avs_types.V3FoodItem.FoodCategory\x12\x32\n\rfood_quantity\x18\x03 \x01(\x0b\x32\x1b.v3avs_types.V3ItemQuantity\x12\x35\n\nfood_state\x18\x04 \x01(\x0e\x32!.v3avs_types.V3FoodItem.FoodState\x12-\n\x0e\x66ood_thickness\x18\x05 \x01(\x0b\x32\x15.v3avs_types.V3Length\"\xd4\x01\n\x0c\x46oodCategory\x12\x08\n\x04\x42\x45\x45\x46\x10\x00\x12\x0c\n\x08\x42\x45VERAGE\x10\x01\x12\x0b\n\x07\x43HICKEN\x10\x02\x12\x08\n\x04\x46ISH\x10\x03\x12\x08\n\x04MEAT\x10\x04\x12\t\n\x05PASTA\x10\x05\x12\t\n\x05PIZZA\x10\x06\x12\x0b\n\x07POPCORN\x10\x07\x12\x08\n\x04PORK\x10\x08\x12\n\n\x06POTATO\x10\t\x12\n\n\x06SHRIMP\x10\n\x12\x08\n\x04SOUP\x10\x0b\x12\n\n\x06TURKEY\x10\x0c\x12\r\n\tVEGETABLE\x10\r\x12\t\n\x05WATER\x10\x0e\x12\x0b\n\x07UNKNOWN\x10\x0f\x12\t\n\x05STEAK\x10\x10\"-\n\tFoodState\x12\t\n\x05UNSET\x10\x00\x12\t\n\x05\x46RESH\x10\x01\x12\n\n\x06\x46ROZEN\x10\x02\x42/\n#com.amazon.proto.avs.v3.v3avs_typesB\x08\x46oodItemb\x06proto3')
  ,
  dependencies=[v3avs__types_dot_V3ItemQuantity__pb2.DESCRIPTOR,v3avs__types_dot_V3Length__pb2.DESCRIPTOR,])
_sym_db.RegisterFileDescriptor(DESCRIPTOR)



_V3FOODITEM_FOODCATEGORY = _descriptor.EnumDescriptor(
  name='FoodCategory',
  full_name='v3avs_types.V3FoodItem.FoodCategory',
  filename=None,
  file=DESCRIPTOR,
  values=[
    _descriptor.EnumValueDescriptor(
      name='BEEF', index=0, number=0,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='BEVERAGE', index=1, number=1,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='CHICKEN', index=2, number=2,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='FISH', index=3, number=3,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='MEAT', index=4, number=4,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='PASTA', index=5, number=5,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='PIZZA', index=6, number=6,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='POPCORN', index=7, number=7,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='PORK', index=8, number=8,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='POTATO', index=9, number=9,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='SHRIMP', index=10, number=10,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='SOUP', index=11, number=11,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='TURKEY', index=12, number=12,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='VEGETABLE', index=13, number=13,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='WATER', index=14, number=14,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='UNKNOWN', index=15, number=15,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='STEAK', index=16, number=16,
      options=None,
      type=None),
  ],
  containing_type=None,
  options=None,
  serialized_start=357,
  serialized_end=569,
)
_sym_db.RegisterEnumDescriptor(_V3FOODITEM_FOODCATEGORY)

_V3FOODITEM_FOODSTATE = _descriptor.EnumDescriptor(
  name='FoodState',
  full_name='v3avs_types.V3FoodItem.FoodState',
  filename=None,
  file=DESCRIPTOR,
  values=[
    _descriptor.EnumValueDescriptor(
      name='UNSET', index=0, number=0,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='FRESH', index=1, number=1,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='FROZEN', index=2, number=2,
      options=None,
      type=None),
  ],
  containing_type=None,
  options=None,
  serialized_start=571,
  serialized_end=616,
)
_sym_db.RegisterEnumDescriptor(_V3FOODITEM_FOODSTATE)


_V3FOODITEM = _descriptor.Descriptor(
  name='V3FoodItem',
  full_name='v3avs_types.V3FoodItem',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='food_name', full_name='v3avs_types.V3FoodItem.food_name', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='food_category', full_name='v3avs_types.V3FoodItem.food_category', index=1,
      number=2, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='food_quantity', full_name='v3avs_types.V3FoodItem.food_quantity', index=2,
      number=3, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='food_state', full_name='v3avs_types.V3FoodItem.food_state', index=3,
      number=4, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='food_thickness', full_name='v3avs_types.V3FoodItem.food_thickness', index=4,
      number=5, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
    _V3FOODITEM_FOODCATEGORY,
    _V3FOODITEM_FOODSTATE,
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=108,
  serialized_end=616,
)

_V3FOODITEM.fields_by_name['food_category'].enum_type = _V3FOODITEM_FOODCATEGORY
_V3FOODITEM.fields_by_name['food_quantity'].message_type = v3avs__types_dot_V3ItemQuantity__pb2._V3ITEMQUANTITY
_V3FOODITEM.fields_by_name['food_state'].enum_type = _V3FOODITEM_FOODSTATE
_V3FOODITEM.fields_by_name['food_thickness'].message_type = v3avs__types_dot_V3Length__pb2._V3LENGTH
_V3FOODITEM_FOODCATEGORY.containing_type = _V3FOODITEM
_V3FOODITEM_FOODSTATE.containing_type = _V3FOODITEM
DESCRIPTOR.message_types_by_name['V3FoodItem'] = _V3FOODITEM

V3FoodItem = _reflection.GeneratedProtocolMessageType('V3FoodItem', (_message.Message,), dict(
  DESCRIPTOR = _V3FOODITEM,
  __module__ = 'v3avs_types.V3FoodItem_pb2'
  # @@protoc_insertion_point(class_scope:v3avs_types.V3FoodItem)
  ))
_sym_db.RegisterMessage(V3FoodItem)


DESCRIPTOR.has_options = True
DESCRIPTOR._options = _descriptor._ParseOptions(descriptor_pb2.FileOptions(), _b('\n#com.amazon.proto.avs.v3.v3avs_typesB\010FoodItem'))
# @@protoc_insertion_point(module_scope)