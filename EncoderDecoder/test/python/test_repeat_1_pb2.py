# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: test_repeat_1.proto
"""Generated protocol buffer code."""
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()




DESCRIPTOR = _descriptor.FileDescriptor(
  name='test_repeat_1.proto',
  package='',
  syntax='proto3',
  serialized_options=None,
  create_key=_descriptor._internal_create_key,
  serialized_pb=b'\n\x13test_repeat_1.proto\">\n\rtest_repeat_1\x12\x0e\n\x06\x64ouble\x18\x01 \x01(\x01\x12\r\n\x05\x66loat\x18\x02 \x01(\x02\x12\x0e\n\x06string\x18\x03 \x03(\tb\x06proto3'
)




_TEST_REPEAT_1 = _descriptor.Descriptor(
  name='test_repeat_1',
  full_name='test_repeat_1',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='double', full_name='test_repeat_1.double', index=0,
      number=1, type=1, cpp_type=5, label=1,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='float', full_name='test_repeat_1.float', index=1,
      number=2, type=2, cpp_type=6, label=1,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='string', full_name='test_repeat_1.string', index=2,
      number=3, type=9, cpp_type=9, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=23,
  serialized_end=85,
)

DESCRIPTOR.message_types_by_name['test_repeat_1'] = _TEST_REPEAT_1
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

test_repeat_1 = _reflection.GeneratedProtocolMessageType('test_repeat_1', (_message.Message,), {
  'DESCRIPTOR' : _TEST_REPEAT_1,
  '__module__' : 'test_repeat_1_pb2'
  # @@protoc_insertion_point(class_scope:test_repeat_1)
  })
_sym_db.RegisterMessage(test_repeat_1)


# @@protoc_insertion_point(module_scope)