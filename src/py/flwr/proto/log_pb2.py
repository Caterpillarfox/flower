# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: flwr/proto/log.proto
# Protobuf Python Version: 4.25.0
"""Generated protocol buffer code."""
from google.protobuf import descriptor as _descriptor
from google.protobuf import descriptor_pool as _descriptor_pool
from google.protobuf import symbol_database as _symbol_database
from google.protobuf.internal import builder as _builder
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


from flwr.proto import node_pb2 as flwr_dot_proto_dot_node__pb2


DESCRIPTOR = _descriptor_pool.Default().AddSerializedFile(b'\n\x14\x66lwr/proto/log.proto\x12\nflwr.proto\x1a\x15\x66lwr/proto/node.proto\"O\n\x0fPushLogsRequest\x12\x1e\n\x04node\x18\x01 \x01(\x0b\x32\x10.flwr.proto.Node\x12\x0e\n\x06run_id\x18\x02 \x01(\x04\x12\x0c\n\x04logs\x18\x03 \x03(\t\"\x12\n\x10PushLogsResponseb\x06proto3')

_globals = globals()
_builder.BuildMessageAndEnumDescriptors(DESCRIPTOR, _globals)
_builder.BuildTopDescriptorsAndMessages(DESCRIPTOR, 'flwr.proto.log_pb2', _globals)
if _descriptor._USE_C_DESCRIPTORS == False:
  DESCRIPTOR._options = None
  _globals['_PUSHLOGSREQUEST']._serialized_start=59
  _globals['_PUSHLOGSREQUEST']._serialized_end=138
  _globals['_PUSHLOGSRESPONSE']._serialized_start=140
  _globals['_PUSHLOGSRESPONSE']._serialized_end=158
# @@protoc_insertion_point(module_scope)