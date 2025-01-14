// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MDCfetsBenchmark.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "MDCfetsBenchmark.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace com {
namespace htsc {
namespace mdc {
namespace insight {
namespace model {

namespace {

const ::google::protobuf::Descriptor* MDCfetsBenchmark_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  MDCfetsBenchmark_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_MDCfetsBenchmark_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_MDCfetsBenchmark_2eproto() {
  protobuf_AddDesc_MDCfetsBenchmark_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "MDCfetsBenchmark.proto");
  GOOGLE_CHECK(file != NULL);
  MDCfetsBenchmark_descriptor_ = file->message_type(0);
  static const int MDCfetsBenchmark_offsets_[9] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MDCfetsBenchmark, htscsecurityid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MDCfetsBenchmark, securitytype_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MDCfetsBenchmark, securityidsource_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MDCfetsBenchmark, mddate_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MDCfetsBenchmark, mdtime_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MDCfetsBenchmark, datatimestamp_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MDCfetsBenchmark, transacttime_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MDCfetsBenchmark, marketindicator_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MDCfetsBenchmark, datamultiplepowerof10_),
  };
  MDCfetsBenchmark_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      MDCfetsBenchmark_descriptor_,
      MDCfetsBenchmark::internal_default_instance(),
      MDCfetsBenchmark_offsets_,
      -1,
      -1,
      -1,
      sizeof(MDCfetsBenchmark),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MDCfetsBenchmark, _internal_metadata_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_MDCfetsBenchmark_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      MDCfetsBenchmark_descriptor_, MDCfetsBenchmark::internal_default_instance());
}

}  // namespace

void protobuf_ShutdownFile_MDCfetsBenchmark_2eproto() {
  MDCfetsBenchmark_default_instance_.Shutdown();
  delete MDCfetsBenchmark_reflection_;
}

void protobuf_InitDefaults_MDCfetsBenchmark_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::com::htsc::mdc::model::protobuf_InitDefaults_ESecurityIDSource_2eproto();
  ::com::htsc::mdc::model::protobuf_InitDefaults_ESecurityType_2eproto();
  ::google::protobuf::internal::GetEmptyString();
  MDCfetsBenchmark_default_instance_.DefaultConstruct();
  MDCfetsBenchmark_default_instance_.get_mutable()->InitAsDefaultInstance();
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_InitDefaults_MDCfetsBenchmark_2eproto_once_);
void protobuf_InitDefaults_MDCfetsBenchmark_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_InitDefaults_MDCfetsBenchmark_2eproto_once_,
                 &protobuf_InitDefaults_MDCfetsBenchmark_2eproto_impl);
}
void protobuf_AddDesc_MDCfetsBenchmark_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  protobuf_InitDefaults_MDCfetsBenchmark_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\026MDCfetsBenchmark.proto\022\032com.htsc.mdc.i"
    "nsight.model\032\027ESecurityIDSource.proto\032\023E"
    "SecurityType.proto\"\251\002\n\020MDCfetsBenchmark\022"
    "\026\n\016HTSCSecurityID\030\001 \001(\t\0227\n\014SecurityType\030"
    "\002 \001(\0162!.com.htsc.mdc.model.ESecurityType"
    "\022\?\n\020SecurityIDSource\030\003 \001(\0162%.com.htsc.md"
    "c.model.ESecurityIDSource\022\016\n\006MDDate\030\004 \001("
    "\005\022\016\n\006MDTime\030\005 \001(\005\022\025\n\rDataTimestamp\030\006 \001(\003"
    "\022\024\n\014TransactTime\030\007 \001(\t\022\027\n\017MarketIndicato"
    "r\030\010 \001(\t\022\035\n\025DataMultiplePowerOf10\030\t \001(\005B9"
    "\n\032com.htsc.mdc.insight.modelB\026MDCfetsBen"
    "chmarkProtosH\001\240\001\001b\006proto3", 465);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "MDCfetsBenchmark.proto", &protobuf_RegisterTypes);
  ::com::htsc::mdc::model::protobuf_AddDesc_ESecurityIDSource_2eproto();
  ::com::htsc::mdc::model::protobuf_AddDesc_ESecurityType_2eproto();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_MDCfetsBenchmark_2eproto);
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_MDCfetsBenchmark_2eproto_once_);
void protobuf_AddDesc_MDCfetsBenchmark_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_MDCfetsBenchmark_2eproto_once_,
                 &protobuf_AddDesc_MDCfetsBenchmark_2eproto_impl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_MDCfetsBenchmark_2eproto {
  StaticDescriptorInitializer_MDCfetsBenchmark_2eproto() {
    protobuf_AddDesc_MDCfetsBenchmark_2eproto();
  }
} static_descriptor_initializer_MDCfetsBenchmark_2eproto_;

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD GOOGLE_ATTRIBUTE_NORETURN;
static void MergeFromFail(int line) {
  ::google::protobuf::internal::MergeFromFail(__FILE__, line);
}

}  // namespace


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int MDCfetsBenchmark::kHTSCSecurityIDFieldNumber;
const int MDCfetsBenchmark::kSecurityTypeFieldNumber;
const int MDCfetsBenchmark::kSecurityIDSourceFieldNumber;
const int MDCfetsBenchmark::kMDDateFieldNumber;
const int MDCfetsBenchmark::kMDTimeFieldNumber;
const int MDCfetsBenchmark::kDataTimestampFieldNumber;
const int MDCfetsBenchmark::kTransactTimeFieldNumber;
const int MDCfetsBenchmark::kMarketIndicatorFieldNumber;
const int MDCfetsBenchmark::kDataMultiplePowerOf10FieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

MDCfetsBenchmark::MDCfetsBenchmark()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (this != internal_default_instance()) protobuf_InitDefaults_MDCfetsBenchmark_2eproto();
  SharedCtor();
  // @@protoc_insertion_point(constructor:com.htsc.mdc.insight.model.MDCfetsBenchmark)
}

void MDCfetsBenchmark::InitAsDefaultInstance() {
}

MDCfetsBenchmark::MDCfetsBenchmark(const MDCfetsBenchmark& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  UnsafeMergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:com.htsc.mdc.insight.model.MDCfetsBenchmark)
}

void MDCfetsBenchmark::SharedCtor() {
  htscsecurityid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  transacttime_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  marketindicator_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&securitytype_, 0, reinterpret_cast<char*>(&datamultiplepowerof10_) -
    reinterpret_cast<char*>(&securitytype_) + sizeof(datamultiplepowerof10_));
  _cached_size_ = 0;
}

MDCfetsBenchmark::~MDCfetsBenchmark() {
  // @@protoc_insertion_point(destructor:com.htsc.mdc.insight.model.MDCfetsBenchmark)
  SharedDtor();
}

void MDCfetsBenchmark::SharedDtor() {
  htscsecurityid_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  transacttime_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  marketindicator_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void MDCfetsBenchmark::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* MDCfetsBenchmark::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return MDCfetsBenchmark_descriptor_;
}

const MDCfetsBenchmark& MDCfetsBenchmark::default_instance() {
  protobuf_InitDefaults_MDCfetsBenchmark_2eproto();
  return *internal_default_instance();
}

::google::protobuf::internal::ExplicitlyConstructed<MDCfetsBenchmark> MDCfetsBenchmark_default_instance_;

MDCfetsBenchmark* MDCfetsBenchmark::New(::google::protobuf::Arena* arena) const {
  MDCfetsBenchmark* n = new MDCfetsBenchmark;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void MDCfetsBenchmark::Clear() {
// @@protoc_insertion_point(message_clear_start:com.htsc.mdc.insight.model.MDCfetsBenchmark)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(MDCfetsBenchmark, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<MDCfetsBenchmark*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&(first), 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(securitytype_, datatimestamp_);
  htscsecurityid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  transacttime_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  marketindicator_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  datamultiplepowerof10_ = 0;

#undef ZR_HELPER_
#undef ZR_

}

bool MDCfetsBenchmark::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:com.htsc.mdc.insight.model.MDCfetsBenchmark)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string HTSCSecurityID = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_htscsecurityid()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->htscsecurityid().data(), this->htscsecurityid().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "com.htsc.mdc.insight.model.MDCfetsBenchmark.HTSCSecurityID"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_SecurityType;
        break;
      }

      // optional .com.htsc.mdc.model.ESecurityType SecurityType = 2;
      case 2: {
        if (tag == 16) {
         parse_SecurityType:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_securitytype(static_cast< ::com::htsc::mdc::model::ESecurityType >(value));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_SecurityIDSource;
        break;
      }

      // optional .com.htsc.mdc.model.ESecurityIDSource SecurityIDSource = 3;
      case 3: {
        if (tag == 24) {
         parse_SecurityIDSource:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_securityidsource(static_cast< ::com::htsc::mdc::model::ESecurityIDSource >(value));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(32)) goto parse_MDDate;
        break;
      }

      // optional int32 MDDate = 4;
      case 4: {
        if (tag == 32) {
         parse_MDDate:

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &mddate_)));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(40)) goto parse_MDTime;
        break;
      }

      // optional int32 MDTime = 5;
      case 5: {
        if (tag == 40) {
         parse_MDTime:

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &mdtime_)));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(48)) goto parse_DataTimestamp;
        break;
      }

      // optional int64 DataTimestamp = 6;
      case 6: {
        if (tag == 48) {
         parse_DataTimestamp:

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &datatimestamp_)));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(58)) goto parse_TransactTime;
        break;
      }

      // optional string TransactTime = 7;
      case 7: {
        if (tag == 58) {
         parse_TransactTime:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_transacttime()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->transacttime().data(), this->transacttime().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "com.htsc.mdc.insight.model.MDCfetsBenchmark.TransactTime"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(66)) goto parse_MarketIndicator;
        break;
      }

      // optional string MarketIndicator = 8;
      case 8: {
        if (tag == 66) {
         parse_MarketIndicator:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_marketindicator()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->marketindicator().data(), this->marketindicator().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "com.htsc.mdc.insight.model.MDCfetsBenchmark.MarketIndicator"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(72)) goto parse_DataMultiplePowerOf10;
        break;
      }

      // optional int32 DataMultiplePowerOf10 = 9;
      case 9: {
        if (tag == 72) {
         parse_DataMultiplePowerOf10:

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &datamultiplepowerof10_)));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:com.htsc.mdc.insight.model.MDCfetsBenchmark)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:com.htsc.mdc.insight.model.MDCfetsBenchmark)
  return false;
#undef DO_
}

void MDCfetsBenchmark::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:com.htsc.mdc.insight.model.MDCfetsBenchmark)
  // optional string HTSCSecurityID = 1;
  if (this->htscsecurityid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->htscsecurityid().data(), this->htscsecurityid().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "com.htsc.mdc.insight.model.MDCfetsBenchmark.HTSCSecurityID");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->htscsecurityid(), output);
  }

  // optional .com.htsc.mdc.model.ESecurityType SecurityType = 2;
  if (this->securitytype() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      2, this->securitytype(), output);
  }

  // optional .com.htsc.mdc.model.ESecurityIDSource SecurityIDSource = 3;
  if (this->securityidsource() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      3, this->securityidsource(), output);
  }

  // optional int32 MDDate = 4;
  if (this->mddate() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(4, this->mddate(), output);
  }

  // optional int32 MDTime = 5;
  if (this->mdtime() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(5, this->mdtime(), output);
  }

  // optional int64 DataTimestamp = 6;
  if (this->datatimestamp() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(6, this->datatimestamp(), output);
  }

  // optional string TransactTime = 7;
  if (this->transacttime().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->transacttime().data(), this->transacttime().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "com.htsc.mdc.insight.model.MDCfetsBenchmark.TransactTime");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      7, this->transacttime(), output);
  }

  // optional string MarketIndicator = 8;
  if (this->marketindicator().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->marketindicator().data(), this->marketindicator().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "com.htsc.mdc.insight.model.MDCfetsBenchmark.MarketIndicator");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      8, this->marketindicator(), output);
  }

  // optional int32 DataMultiplePowerOf10 = 9;
  if (this->datamultiplepowerof10() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(9, this->datamultiplepowerof10(), output);
  }

  // @@protoc_insertion_point(serialize_end:com.htsc.mdc.insight.model.MDCfetsBenchmark)
}

::google::protobuf::uint8* MDCfetsBenchmark::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:com.htsc.mdc.insight.model.MDCfetsBenchmark)
  // optional string HTSCSecurityID = 1;
  if (this->htscsecurityid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->htscsecurityid().data(), this->htscsecurityid().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "com.htsc.mdc.insight.model.MDCfetsBenchmark.HTSCSecurityID");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->htscsecurityid(), target);
  }

  // optional .com.htsc.mdc.model.ESecurityType SecurityType = 2;
  if (this->securitytype() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      2, this->securitytype(), target);
  }

  // optional .com.htsc.mdc.model.ESecurityIDSource SecurityIDSource = 3;
  if (this->securityidsource() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      3, this->securityidsource(), target);
  }

  // optional int32 MDDate = 4;
  if (this->mddate() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(4, this->mddate(), target);
  }

  // optional int32 MDTime = 5;
  if (this->mdtime() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(5, this->mdtime(), target);
  }

  // optional int64 DataTimestamp = 6;
  if (this->datatimestamp() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(6, this->datatimestamp(), target);
  }

  // optional string TransactTime = 7;
  if (this->transacttime().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->transacttime().data(), this->transacttime().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "com.htsc.mdc.insight.model.MDCfetsBenchmark.TransactTime");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        7, this->transacttime(), target);
  }

  // optional string MarketIndicator = 8;
  if (this->marketindicator().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->marketindicator().data(), this->marketindicator().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "com.htsc.mdc.insight.model.MDCfetsBenchmark.MarketIndicator");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        8, this->marketindicator(), target);
  }

  // optional int32 DataMultiplePowerOf10 = 9;
  if (this->datamultiplepowerof10() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(9, this->datamultiplepowerof10(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:com.htsc.mdc.insight.model.MDCfetsBenchmark)
  return target;
}

size_t MDCfetsBenchmark::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:com.htsc.mdc.insight.model.MDCfetsBenchmark)
  size_t total_size = 0;

  // optional string HTSCSecurityID = 1;
  if (this->htscsecurityid().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->htscsecurityid());
  }

  // optional .com.htsc.mdc.model.ESecurityType SecurityType = 2;
  if (this->securitytype() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->securitytype());
  }

  // optional .com.htsc.mdc.model.ESecurityIDSource SecurityIDSource = 3;
  if (this->securityidsource() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->securityidsource());
  }

  // optional int32 MDDate = 4;
  if (this->mddate() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->mddate());
  }

  // optional int32 MDTime = 5;
  if (this->mdtime() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->mdtime());
  }

  // optional int64 DataTimestamp = 6;
  if (this->datatimestamp() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->datatimestamp());
  }

  // optional string TransactTime = 7;
  if (this->transacttime().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->transacttime());
  }

  // optional string MarketIndicator = 8;
  if (this->marketindicator().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->marketindicator());
  }

  // optional int32 DataMultiplePowerOf10 = 9;
  if (this->datamultiplepowerof10() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->datamultiplepowerof10());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void MDCfetsBenchmark::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:com.htsc.mdc.insight.model.MDCfetsBenchmark)
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const MDCfetsBenchmark* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const MDCfetsBenchmark>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:com.htsc.mdc.insight.model.MDCfetsBenchmark)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:com.htsc.mdc.insight.model.MDCfetsBenchmark)
    UnsafeMergeFrom(*source);
  }
}

void MDCfetsBenchmark::MergeFrom(const MDCfetsBenchmark& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:com.htsc.mdc.insight.model.MDCfetsBenchmark)
  if (GOOGLE_PREDICT_TRUE(&from != this)) {
    UnsafeMergeFrom(from);
  } else {
    MergeFromFail(__LINE__);
  }
}

void MDCfetsBenchmark::UnsafeMergeFrom(const MDCfetsBenchmark& from) {
  GOOGLE_DCHECK(&from != this);
  if (from.htscsecurityid().size() > 0) {

    htscsecurityid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.htscsecurityid_);
  }
  if (from.securitytype() != 0) {
    set_securitytype(from.securitytype());
  }
  if (from.securityidsource() != 0) {
    set_securityidsource(from.securityidsource());
  }
  if (from.mddate() != 0) {
    set_mddate(from.mddate());
  }
  if (from.mdtime() != 0) {
    set_mdtime(from.mdtime());
  }
  if (from.datatimestamp() != 0) {
    set_datatimestamp(from.datatimestamp());
  }
  if (from.transacttime().size() > 0) {

    transacttime_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.transacttime_);
  }
  if (from.marketindicator().size() > 0) {

    marketindicator_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.marketindicator_);
  }
  if (from.datamultiplepowerof10() != 0) {
    set_datamultiplepowerof10(from.datamultiplepowerof10());
  }
}

void MDCfetsBenchmark::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:com.htsc.mdc.insight.model.MDCfetsBenchmark)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void MDCfetsBenchmark::CopyFrom(const MDCfetsBenchmark& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:com.htsc.mdc.insight.model.MDCfetsBenchmark)
  if (&from == this) return;
  Clear();
  UnsafeMergeFrom(from);
}

bool MDCfetsBenchmark::IsInitialized() const {

  return true;
}

void MDCfetsBenchmark::Swap(MDCfetsBenchmark* other) {
  if (other == this) return;
  InternalSwap(other);
}
void MDCfetsBenchmark::InternalSwap(MDCfetsBenchmark* other) {
  htscsecurityid_.Swap(&other->htscsecurityid_);
  std::swap(securitytype_, other->securitytype_);
  std::swap(securityidsource_, other->securityidsource_);
  std::swap(mddate_, other->mddate_);
  std::swap(mdtime_, other->mdtime_);
  std::swap(datatimestamp_, other->datatimestamp_);
  transacttime_.Swap(&other->transacttime_);
  marketindicator_.Swap(&other->marketindicator_);
  std::swap(datamultiplepowerof10_, other->datamultiplepowerof10_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata MDCfetsBenchmark::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = MDCfetsBenchmark_descriptor_;
  metadata.reflection = MDCfetsBenchmark_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// MDCfetsBenchmark

// optional string HTSCSecurityID = 1;
void MDCfetsBenchmark::clear_htscsecurityid() {
  htscsecurityid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& MDCfetsBenchmark::htscsecurityid() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDCfetsBenchmark.HTSCSecurityID)
  return htscsecurityid_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void MDCfetsBenchmark::set_htscsecurityid(const ::std::string& value) {
  
  htscsecurityid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDCfetsBenchmark.HTSCSecurityID)
}
void MDCfetsBenchmark::set_htscsecurityid(const char* value) {
  
  htscsecurityid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:com.htsc.mdc.insight.model.MDCfetsBenchmark.HTSCSecurityID)
}
void MDCfetsBenchmark::set_htscsecurityid(const char* value, size_t size) {
  
  htscsecurityid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:com.htsc.mdc.insight.model.MDCfetsBenchmark.HTSCSecurityID)
}
::std::string* MDCfetsBenchmark::mutable_htscsecurityid() {
  
  // @@protoc_insertion_point(field_mutable:com.htsc.mdc.insight.model.MDCfetsBenchmark.HTSCSecurityID)
  return htscsecurityid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* MDCfetsBenchmark::release_htscsecurityid() {
  // @@protoc_insertion_point(field_release:com.htsc.mdc.insight.model.MDCfetsBenchmark.HTSCSecurityID)
  
  return htscsecurityid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void MDCfetsBenchmark::set_allocated_htscsecurityid(::std::string* htscsecurityid) {
  if (htscsecurityid != NULL) {
    
  } else {
    
  }
  htscsecurityid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), htscsecurityid);
  // @@protoc_insertion_point(field_set_allocated:com.htsc.mdc.insight.model.MDCfetsBenchmark.HTSCSecurityID)
}

// optional .com.htsc.mdc.model.ESecurityType SecurityType = 2;
void MDCfetsBenchmark::clear_securitytype() {
  securitytype_ = 0;
}
::com::htsc::mdc::model::ESecurityType MDCfetsBenchmark::securitytype() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDCfetsBenchmark.SecurityType)
  return static_cast< ::com::htsc::mdc::model::ESecurityType >(securitytype_);
}
void MDCfetsBenchmark::set_securitytype(::com::htsc::mdc::model::ESecurityType value) {
  
  securitytype_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDCfetsBenchmark.SecurityType)
}

// optional .com.htsc.mdc.model.ESecurityIDSource SecurityIDSource = 3;
void MDCfetsBenchmark::clear_securityidsource() {
  securityidsource_ = 0;
}
::com::htsc::mdc::model::ESecurityIDSource MDCfetsBenchmark::securityidsource() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDCfetsBenchmark.SecurityIDSource)
  return static_cast< ::com::htsc::mdc::model::ESecurityIDSource >(securityidsource_);
}
void MDCfetsBenchmark::set_securityidsource(::com::htsc::mdc::model::ESecurityIDSource value) {
  
  securityidsource_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDCfetsBenchmark.SecurityIDSource)
}

// optional int32 MDDate = 4;
void MDCfetsBenchmark::clear_mddate() {
  mddate_ = 0;
}
::google::protobuf::int32 MDCfetsBenchmark::mddate() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDCfetsBenchmark.MDDate)
  return mddate_;
}
void MDCfetsBenchmark::set_mddate(::google::protobuf::int32 value) {
  
  mddate_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDCfetsBenchmark.MDDate)
}

// optional int32 MDTime = 5;
void MDCfetsBenchmark::clear_mdtime() {
  mdtime_ = 0;
}
::google::protobuf::int32 MDCfetsBenchmark::mdtime() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDCfetsBenchmark.MDTime)
  return mdtime_;
}
void MDCfetsBenchmark::set_mdtime(::google::protobuf::int32 value) {
  
  mdtime_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDCfetsBenchmark.MDTime)
}

// optional int64 DataTimestamp = 6;
void MDCfetsBenchmark::clear_datatimestamp() {
  datatimestamp_ = GOOGLE_LONGLONG(0);
}
::google::protobuf::int64 MDCfetsBenchmark::datatimestamp() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDCfetsBenchmark.DataTimestamp)
  return datatimestamp_;
}
void MDCfetsBenchmark::set_datatimestamp(::google::protobuf::int64 value) {
  
  datatimestamp_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDCfetsBenchmark.DataTimestamp)
}

// optional string TransactTime = 7;
void MDCfetsBenchmark::clear_transacttime() {
  transacttime_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& MDCfetsBenchmark::transacttime() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDCfetsBenchmark.TransactTime)
  return transacttime_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void MDCfetsBenchmark::set_transacttime(const ::std::string& value) {
  
  transacttime_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDCfetsBenchmark.TransactTime)
}
void MDCfetsBenchmark::set_transacttime(const char* value) {
  
  transacttime_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:com.htsc.mdc.insight.model.MDCfetsBenchmark.TransactTime)
}
void MDCfetsBenchmark::set_transacttime(const char* value, size_t size) {
  
  transacttime_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:com.htsc.mdc.insight.model.MDCfetsBenchmark.TransactTime)
}
::std::string* MDCfetsBenchmark::mutable_transacttime() {
  
  // @@protoc_insertion_point(field_mutable:com.htsc.mdc.insight.model.MDCfetsBenchmark.TransactTime)
  return transacttime_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* MDCfetsBenchmark::release_transacttime() {
  // @@protoc_insertion_point(field_release:com.htsc.mdc.insight.model.MDCfetsBenchmark.TransactTime)
  
  return transacttime_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void MDCfetsBenchmark::set_allocated_transacttime(::std::string* transacttime) {
  if (transacttime != NULL) {
    
  } else {
    
  }
  transacttime_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), transacttime);
  // @@protoc_insertion_point(field_set_allocated:com.htsc.mdc.insight.model.MDCfetsBenchmark.TransactTime)
}

// optional string MarketIndicator = 8;
void MDCfetsBenchmark::clear_marketindicator() {
  marketindicator_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& MDCfetsBenchmark::marketindicator() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDCfetsBenchmark.MarketIndicator)
  return marketindicator_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void MDCfetsBenchmark::set_marketindicator(const ::std::string& value) {
  
  marketindicator_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDCfetsBenchmark.MarketIndicator)
}
void MDCfetsBenchmark::set_marketindicator(const char* value) {
  
  marketindicator_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:com.htsc.mdc.insight.model.MDCfetsBenchmark.MarketIndicator)
}
void MDCfetsBenchmark::set_marketindicator(const char* value, size_t size) {
  
  marketindicator_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:com.htsc.mdc.insight.model.MDCfetsBenchmark.MarketIndicator)
}
::std::string* MDCfetsBenchmark::mutable_marketindicator() {
  
  // @@protoc_insertion_point(field_mutable:com.htsc.mdc.insight.model.MDCfetsBenchmark.MarketIndicator)
  return marketindicator_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* MDCfetsBenchmark::release_marketindicator() {
  // @@protoc_insertion_point(field_release:com.htsc.mdc.insight.model.MDCfetsBenchmark.MarketIndicator)
  
  return marketindicator_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void MDCfetsBenchmark::set_allocated_marketindicator(::std::string* marketindicator) {
  if (marketindicator != NULL) {
    
  } else {
    
  }
  marketindicator_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), marketindicator);
  // @@protoc_insertion_point(field_set_allocated:com.htsc.mdc.insight.model.MDCfetsBenchmark.MarketIndicator)
}

// optional int32 DataMultiplePowerOf10 = 9;
void MDCfetsBenchmark::clear_datamultiplepowerof10() {
  datamultiplepowerof10_ = 0;
}
::google::protobuf::int32 MDCfetsBenchmark::datamultiplepowerof10() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDCfetsBenchmark.DataMultiplePowerOf10)
  return datamultiplepowerof10_;
}
void MDCfetsBenchmark::set_datamultiplepowerof10(::google::protobuf::int32 value) {
  
  datamultiplepowerof10_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDCfetsBenchmark.DataMultiplePowerOf10)
}

inline const MDCfetsBenchmark* MDCfetsBenchmark::internal_default_instance() {
  return &MDCfetsBenchmark_default_instance_.get();
}
#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace model
}  // namespace insight
}  // namespace mdc
}  // namespace htsc
}  // namespace com

// @@protoc_insertion_point(global_scope)
