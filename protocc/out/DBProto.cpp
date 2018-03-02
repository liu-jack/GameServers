// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: DBProto.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "DBProto.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace protocol {

namespace {

const ::google::protobuf::Descriptor* DBUserInfo_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  DBUserInfo_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_DBProto_2eproto() {
  protobuf_AddDesc_DBProto_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "DBProto.proto");
  GOOGLE_CHECK(file != NULL);
  DBUserInfo_descriptor_ = file->message_type(0);
  static const int DBUserInfo_offsets_[15] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DBUserInfo, id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DBUserInfo, userid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DBUserInfo, username_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DBUserInfo, sex_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DBUserInfo, ip_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DBUserInfo, address_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DBUserInfo, gold_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DBUserInfo, diamon_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DBUserInfo, card_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DBUserInfo, icon_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DBUserInfo, code_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DBUserInfo, token_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DBUserInfo, picid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DBUserInfo, unionid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DBUserInfo, picurl_),
  };
  DBUserInfo_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      DBUserInfo_descriptor_,
      DBUserInfo::default_instance_,
      DBUserInfo_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DBUserInfo, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DBUserInfo, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(DBUserInfo));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_DBProto_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    DBUserInfo_descriptor_, &DBUserInfo::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_DBProto_2eproto() {
  delete DBUserInfo::default_instance_;
  delete DBUserInfo_reflection_;
}

void protobuf_AddDesc_DBProto_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\rDBProto.proto\022\010protocol\"\353\001\n\nDBUserInfo"
    "\022\n\n\002id\030\001 \002(\r\022\016\n\006userid\030\002 \002(\t\022\020\n\010username"
    "\030\003 \002(\t\022\013\n\003sex\030\004 \002(\r\022\n\n\002ip\030\005 \001(\t\022\017\n\007addre"
    "ss\030\006 \001(\t\022\014\n\004gold\030\007 \002(\r\022\016\n\006diamon\030\010 \002(\r\022\014"
    "\n\004card\030\t \002(\r\022\014\n\004icon\030\n \001(\t\022\014\n\004code\030\013 \001(\t"
    "\022\r\n\005token\030\014 \001(\t\022\r\n\005picid\030\r \001(\r\022\017\n\007unioni"
    "d\030\016 \001(\t\022\016\n\006picurl\030\017 \001(\t", 263);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "DBProto.proto", &protobuf_RegisterTypes);
  DBUserInfo::default_instance_ = new DBUserInfo();
  DBUserInfo::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_DBProto_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_DBProto_2eproto {
  StaticDescriptorInitializer_DBProto_2eproto() {
    protobuf_AddDesc_DBProto_2eproto();
  }
} static_descriptor_initializer_DBProto_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int DBUserInfo::kIdFieldNumber;
const int DBUserInfo::kUseridFieldNumber;
const int DBUserInfo::kUsernameFieldNumber;
const int DBUserInfo::kSexFieldNumber;
const int DBUserInfo::kIpFieldNumber;
const int DBUserInfo::kAddressFieldNumber;
const int DBUserInfo::kGoldFieldNumber;
const int DBUserInfo::kDiamonFieldNumber;
const int DBUserInfo::kCardFieldNumber;
const int DBUserInfo::kIconFieldNumber;
const int DBUserInfo::kCodeFieldNumber;
const int DBUserInfo::kTokenFieldNumber;
const int DBUserInfo::kPicidFieldNumber;
const int DBUserInfo::kUnionidFieldNumber;
const int DBUserInfo::kPicurlFieldNumber;
#endif  // !_MSC_VER

DBUserInfo::DBUserInfo()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void DBUserInfo::InitAsDefaultInstance() {
}

DBUserInfo::DBUserInfo(const DBUserInfo& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void DBUserInfo::SharedCtor() {
  _cached_size_ = 0;
  id_ = 0u;
  userid_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  username_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  sex_ = 0u;
  ip_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  address_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  gold_ = 0u;
  diamon_ = 0u;
  card_ = 0u;
  icon_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  code_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  token_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  picid_ = 0u;
  unionid_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  picurl_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

DBUserInfo::~DBUserInfo() {
  SharedDtor();
}

void DBUserInfo::SharedDtor() {
  if (userid_ != &::google::protobuf::internal::kEmptyString) {
    delete userid_;
  }
  if (username_ != &::google::protobuf::internal::kEmptyString) {
    delete username_;
  }
  if (ip_ != &::google::protobuf::internal::kEmptyString) {
    delete ip_;
  }
  if (address_ != &::google::protobuf::internal::kEmptyString) {
    delete address_;
  }
  if (icon_ != &::google::protobuf::internal::kEmptyString) {
    delete icon_;
  }
  if (code_ != &::google::protobuf::internal::kEmptyString) {
    delete code_;
  }
  if (token_ != &::google::protobuf::internal::kEmptyString) {
    delete token_;
  }
  if (unionid_ != &::google::protobuf::internal::kEmptyString) {
    delete unionid_;
  }
  if (picurl_ != &::google::protobuf::internal::kEmptyString) {
    delete picurl_;
  }
  if (this != default_instance_) {
  }
}

void DBUserInfo::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* DBUserInfo::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return DBUserInfo_descriptor_;
}

const DBUserInfo& DBUserInfo::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_DBProto_2eproto();
  return *default_instance_;
}

DBUserInfo* DBUserInfo::default_instance_ = NULL;

DBUserInfo* DBUserInfo::New() const {
  return new DBUserInfo;
}

void DBUserInfo::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    id_ = 0u;
    if (has_userid()) {
      if (userid_ != &::google::protobuf::internal::kEmptyString) {
        userid_->clear();
      }
    }
    if (has_username()) {
      if (username_ != &::google::protobuf::internal::kEmptyString) {
        username_->clear();
      }
    }
    sex_ = 0u;
    if (has_ip()) {
      if (ip_ != &::google::protobuf::internal::kEmptyString) {
        ip_->clear();
      }
    }
    if (has_address()) {
      if (address_ != &::google::protobuf::internal::kEmptyString) {
        address_->clear();
      }
    }
    gold_ = 0u;
    diamon_ = 0u;
  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    card_ = 0u;
    if (has_icon()) {
      if (icon_ != &::google::protobuf::internal::kEmptyString) {
        icon_->clear();
      }
    }
    if (has_code()) {
      if (code_ != &::google::protobuf::internal::kEmptyString) {
        code_->clear();
      }
    }
    if (has_token()) {
      if (token_ != &::google::protobuf::internal::kEmptyString) {
        token_->clear();
      }
    }
    picid_ = 0u;
    if (has_unionid()) {
      if (unionid_ != &::google::protobuf::internal::kEmptyString) {
        unionid_->clear();
      }
    }
    if (has_picurl()) {
      if (picurl_ != &::google::protobuf::internal::kEmptyString) {
        picurl_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool DBUserInfo::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint32 id = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &id_)));
          set_has_id();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_userid;
        break;
      }

      // required string userid = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_userid:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_userid()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->userid().data(), this->userid().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_username;
        break;
      }

      // required string username = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_username:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_username()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->username().data(), this->username().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_sex;
        break;
      }

      // required uint32 sex = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_sex:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &sex_)));
          set_has_sex();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(42)) goto parse_ip;
        break;
      }

      // optional string ip = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_ip:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_ip()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->ip().data(), this->ip().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(50)) goto parse_address;
        break;
      }

      // optional string address = 6;
      case 6: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_address:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_address()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->address().data(), this->address().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(56)) goto parse_gold;
        break;
      }

      // required uint32 gold = 7;
      case 7: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_gold:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &gold_)));
          set_has_gold();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(64)) goto parse_diamon;
        break;
      }

      // required uint32 diamon = 8;
      case 8: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_diamon:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &diamon_)));
          set_has_diamon();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(72)) goto parse_card;
        break;
      }

      // required uint32 card = 9;
      case 9: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_card:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &card_)));
          set_has_card();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(82)) goto parse_icon;
        break;
      }

      // optional string icon = 10;
      case 10: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_icon:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_icon()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->icon().data(), this->icon().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(90)) goto parse_code;
        break;
      }

      // optional string code = 11;
      case 11: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_code:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_code()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->code().data(), this->code().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(98)) goto parse_token;
        break;
      }

      // optional string token = 12;
      case 12: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_token:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_token()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->token().data(), this->token().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(104)) goto parse_picid;
        break;
      }

      // optional uint32 picid = 13;
      case 13: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_picid:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &picid_)));
          set_has_picid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(114)) goto parse_unionid;
        break;
      }

      // optional string unionid = 14;
      case 14: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_unionid:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_unionid()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->unionid().data(), this->unionid().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(122)) goto parse_picurl;
        break;
      }

      // optional string picurl = 15;
      case 15: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_picurl:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_picurl()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->picurl().data(), this->picurl().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void DBUserInfo::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required uint32 id = 1;
  if (has_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->id(), output);
  }

  // required string userid = 2;
  if (has_userid()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->userid().data(), this->userid().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->userid(), output);
  }

  // required string username = 3;
  if (has_username()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->username().data(), this->username().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      3, this->username(), output);
  }

  // required uint32 sex = 4;
  if (has_sex()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(4, this->sex(), output);
  }

  // optional string ip = 5;
  if (has_ip()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->ip().data(), this->ip().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      5, this->ip(), output);
  }

  // optional string address = 6;
  if (has_address()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->address().data(), this->address().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      6, this->address(), output);
  }

  // required uint32 gold = 7;
  if (has_gold()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(7, this->gold(), output);
  }

  // required uint32 diamon = 8;
  if (has_diamon()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(8, this->diamon(), output);
  }

  // required uint32 card = 9;
  if (has_card()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(9, this->card(), output);
  }

  // optional string icon = 10;
  if (has_icon()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->icon().data(), this->icon().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      10, this->icon(), output);
  }

  // optional string code = 11;
  if (has_code()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->code().data(), this->code().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      11, this->code(), output);
  }

  // optional string token = 12;
  if (has_token()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->token().data(), this->token().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      12, this->token(), output);
  }

  // optional uint32 picid = 13;
  if (has_picid()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(13, this->picid(), output);
  }

  // optional string unionid = 14;
  if (has_unionid()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->unionid().data(), this->unionid().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      14, this->unionid(), output);
  }

  // optional string picurl = 15;
  if (has_picurl()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->picurl().data(), this->picurl().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      15, this->picurl(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* DBUserInfo::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required uint32 id = 1;
  if (has_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->id(), target);
  }

  // required string userid = 2;
  if (has_userid()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->userid().data(), this->userid().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->userid(), target);
  }

  // required string username = 3;
  if (has_username()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->username().data(), this->username().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->username(), target);
  }

  // required uint32 sex = 4;
  if (has_sex()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(4, this->sex(), target);
  }

  // optional string ip = 5;
  if (has_ip()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->ip().data(), this->ip().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        5, this->ip(), target);
  }

  // optional string address = 6;
  if (has_address()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->address().data(), this->address().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        6, this->address(), target);
  }

  // required uint32 gold = 7;
  if (has_gold()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(7, this->gold(), target);
  }

  // required uint32 diamon = 8;
  if (has_diamon()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(8, this->diamon(), target);
  }

  // required uint32 card = 9;
  if (has_card()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(9, this->card(), target);
  }

  // optional string icon = 10;
  if (has_icon()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->icon().data(), this->icon().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        10, this->icon(), target);
  }

  // optional string code = 11;
  if (has_code()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->code().data(), this->code().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        11, this->code(), target);
  }

  // optional string token = 12;
  if (has_token()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->token().data(), this->token().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        12, this->token(), target);
  }

  // optional uint32 picid = 13;
  if (has_picid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(13, this->picid(), target);
  }

  // optional string unionid = 14;
  if (has_unionid()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->unionid().data(), this->unionid().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        14, this->unionid(), target);
  }

  // optional string picurl = 15;
  if (has_picurl()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->picurl().data(), this->picurl().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        15, this->picurl(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int DBUserInfo::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint32 id = 1;
    if (has_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->id());
    }

    // required string userid = 2;
    if (has_userid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->userid());
    }

    // required string username = 3;
    if (has_username()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->username());
    }

    // required uint32 sex = 4;
    if (has_sex()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->sex());
    }

    // optional string ip = 5;
    if (has_ip()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->ip());
    }

    // optional string address = 6;
    if (has_address()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->address());
    }

    // required uint32 gold = 7;
    if (has_gold()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->gold());
    }

    // required uint32 diamon = 8;
    if (has_diamon()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->diamon());
    }

  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    // required uint32 card = 9;
    if (has_card()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->card());
    }

    // optional string icon = 10;
    if (has_icon()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->icon());
    }

    // optional string code = 11;
    if (has_code()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->code());
    }

    // optional string token = 12;
    if (has_token()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->token());
    }

    // optional uint32 picid = 13;
    if (has_picid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->picid());
    }

    // optional string unionid = 14;
    if (has_unionid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->unionid());
    }

    // optional string picurl = 15;
    if (has_picurl()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->picurl());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void DBUserInfo::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const DBUserInfo* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const DBUserInfo*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void DBUserInfo::MergeFrom(const DBUserInfo& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_id()) {
      set_id(from.id());
    }
    if (from.has_userid()) {
      set_userid(from.userid());
    }
    if (from.has_username()) {
      set_username(from.username());
    }
    if (from.has_sex()) {
      set_sex(from.sex());
    }
    if (from.has_ip()) {
      set_ip(from.ip());
    }
    if (from.has_address()) {
      set_address(from.address());
    }
    if (from.has_gold()) {
      set_gold(from.gold());
    }
    if (from.has_diamon()) {
      set_diamon(from.diamon());
    }
  }
  if (from._has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    if (from.has_card()) {
      set_card(from.card());
    }
    if (from.has_icon()) {
      set_icon(from.icon());
    }
    if (from.has_code()) {
      set_code(from.code());
    }
    if (from.has_token()) {
      set_token(from.token());
    }
    if (from.has_picid()) {
      set_picid(from.picid());
    }
    if (from.has_unionid()) {
      set_unionid(from.unionid());
    }
    if (from.has_picurl()) {
      set_picurl(from.picurl());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void DBUserInfo::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void DBUserInfo::CopyFrom(const DBUserInfo& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool DBUserInfo::IsInitialized() const {
  if ((_has_bits_[0] & 0x000001cf) != 0x000001cf) return false;

  return true;
}

void DBUserInfo::Swap(DBUserInfo* other) {
  if (other != this) {
    std::swap(id_, other->id_);
    std::swap(userid_, other->userid_);
    std::swap(username_, other->username_);
    std::swap(sex_, other->sex_);
    std::swap(ip_, other->ip_);
    std::swap(address_, other->address_);
    std::swap(gold_, other->gold_);
    std::swap(diamon_, other->diamon_);
    std::swap(card_, other->card_);
    std::swap(icon_, other->icon_);
    std::swap(code_, other->code_);
    std::swap(token_, other->token_);
    std::swap(picid_, other->picid_);
    std::swap(unionid_, other->unionid_);
    std::swap(picurl_, other->picurl_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata DBUserInfo::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = DBUserInfo_descriptor_;
  metadata.reflection = DBUserInfo_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace protocol

// @@protoc_insertion_point(global_scope)
