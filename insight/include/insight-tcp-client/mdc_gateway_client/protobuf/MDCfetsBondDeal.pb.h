// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MDCfetsBondDeal.proto

#ifndef PROTOBUF_MDCfetsBondDeal_2eproto__INCLUDED
#define PROTOBUF_MDCfetsBondDeal_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3001000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3001000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
#include "ESecurityIDSource.pb.h"
#include "ESecurityType.pb.h"
// @@protoc_insertion_point(includes)

namespace com {
namespace htsc {
namespace mdc {
namespace insight {
namespace model {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_MDCfetsBondDeal_2eproto();
void protobuf_InitDefaults_MDCfetsBondDeal_2eproto();
void protobuf_AssignDesc_MDCfetsBondDeal_2eproto();
void protobuf_ShutdownFile_MDCfetsBondDeal_2eproto();

class MDCfetsBondDeal;

// ===================================================================

class MDCfetsBondDeal : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:com.htsc.mdc.insight.model.MDCfetsBondDeal) */ {
 public:
  MDCfetsBondDeal();
  virtual ~MDCfetsBondDeal();

  MDCfetsBondDeal(const MDCfetsBondDeal& from);

  inline MDCfetsBondDeal& operator=(const MDCfetsBondDeal& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const MDCfetsBondDeal& default_instance();

  static const MDCfetsBondDeal* internal_default_instance();

  void Swap(MDCfetsBondDeal* other);

  // implements Message ----------------------------------------------

  inline MDCfetsBondDeal* New() const { return New(NULL); }

  MDCfetsBondDeal* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const MDCfetsBondDeal& from);
  void MergeFrom(const MDCfetsBondDeal& from);
  void Clear();
  bool IsInitialized() const;

  size_t ByteSizeLong() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(MDCfetsBondDeal* other);
  void UnsafeMergeFrom(const MDCfetsBondDeal& from);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string HTSCSecurityID = 1;
  void clear_htscsecurityid();
  static const int kHTSCSecurityIDFieldNumber = 1;
  const ::std::string& htscsecurityid() const;
  void set_htscsecurityid(const ::std::string& value);
  void set_htscsecurityid(const char* value);
  void set_htscsecurityid(const char* value, size_t size);
  ::std::string* mutable_htscsecurityid();
  ::std::string* release_htscsecurityid();
  void set_allocated_htscsecurityid(::std::string* htscsecurityid);

  // optional .com.htsc.mdc.model.ESecurityType SecurityType = 2;
  void clear_securitytype();
  static const int kSecurityTypeFieldNumber = 2;
  ::com::htsc::mdc::model::ESecurityType securitytype() const;
  void set_securitytype(::com::htsc::mdc::model::ESecurityType value);

  // optional .com.htsc.mdc.model.ESecurityIDSource SecurityIDSource = 3;
  void clear_securityidsource();
  static const int kSecurityIDSourceFieldNumber = 3;
  ::com::htsc::mdc::model::ESecurityIDSource securityidsource() const;
  void set_securityidsource(::com::htsc::mdc::model::ESecurityIDSource value);

  // optional int32 MDDate = 4;
  void clear_mddate();
  static const int kMDDateFieldNumber = 4;
  ::google::protobuf::int32 mddate() const;
  void set_mddate(::google::protobuf::int32 value);

  // optional int32 MDTime = 5;
  void clear_mdtime();
  static const int kMDTimeFieldNumber = 5;
  ::google::protobuf::int32 mdtime() const;
  void set_mdtime(::google::protobuf::int32 value);

  // optional int64 DataTimestamp = 6;
  void clear_datatimestamp();
  static const int kDataTimestampFieldNumber = 6;
  ::google::protobuf::int64 datatimestamp() const;
  void set_datatimestamp(::google::protobuf::int64 value);

  // optional string TransactTime = 7;
  void clear_transacttime();
  static const int kTransactTimeFieldNumber = 7;
  const ::std::string& transacttime() const;
  void set_transacttime(const ::std::string& value);
  void set_transacttime(const char* value);
  void set_transacttime(const char* value, size_t size);
  ::std::string* mutable_transacttime();
  ::std::string* release_transacttime();
  void set_allocated_transacttime(::std::string* transacttime);

  // optional string MarketIndicator = 8;
  void clear_marketindicator();
  static const int kMarketIndicatorFieldNumber = 8;
  const ::std::string& marketindicator() const;
  void set_marketindicator(const ::std::string& value);
  void set_marketindicator(const char* value);
  void set_marketindicator(const char* value, size_t size);
  ::std::string* mutable_marketindicator();
  ::std::string* release_marketindicator();
  void set_allocated_marketindicator(::std::string* marketindicator);

  // optional int32 DataMultiplePowerOf10 = 9;
  void clear_datamultiplepowerof10();
  static const int kDataMultiplePowerOf10FieldNumber = 9;
  ::google::protobuf::int32 datamultiplepowerof10() const;
  void set_datamultiplepowerof10(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:com.htsc.mdc.insight.model.MDCfetsBondDeal)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr htscsecurityid_;
  ::google::protobuf::internal::ArenaStringPtr transacttime_;
  ::google::protobuf::internal::ArenaStringPtr marketindicator_;
  int securitytype_;
  int securityidsource_;
  ::google::protobuf::int32 mddate_;
  ::google::protobuf::int32 mdtime_;
  ::google::protobuf::int64 datatimestamp_;
  ::google::protobuf::int32 datamultiplepowerof10_;
  mutable int _cached_size_;
  friend void  protobuf_InitDefaults_MDCfetsBondDeal_2eproto_impl();
  friend void  protobuf_AddDesc_MDCfetsBondDeal_2eproto_impl();
  friend void protobuf_AssignDesc_MDCfetsBondDeal_2eproto();
  friend void protobuf_ShutdownFile_MDCfetsBondDeal_2eproto();

  void InitAsDefaultInstance();
};
extern ::google::protobuf::internal::ExplicitlyConstructed<MDCfetsBondDeal> MDCfetsBondDeal_default_instance_;

// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// MDCfetsBondDeal

// optional string HTSCSecurityID = 1;
inline void MDCfetsBondDeal::clear_htscsecurityid() {
  htscsecurityid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& MDCfetsBondDeal::htscsecurityid() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDCfetsBondDeal.HTSCSecurityID)
  return htscsecurityid_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MDCfetsBondDeal::set_htscsecurityid(const ::std::string& value) {
  
  htscsecurityid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDCfetsBondDeal.HTSCSecurityID)
}
inline void MDCfetsBondDeal::set_htscsecurityid(const char* value) {
  
  htscsecurityid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:com.htsc.mdc.insight.model.MDCfetsBondDeal.HTSCSecurityID)
}
inline void MDCfetsBondDeal::set_htscsecurityid(const char* value, size_t size) {
  
  htscsecurityid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:com.htsc.mdc.insight.model.MDCfetsBondDeal.HTSCSecurityID)
}
inline ::std::string* MDCfetsBondDeal::mutable_htscsecurityid() {
  
  // @@protoc_insertion_point(field_mutable:com.htsc.mdc.insight.model.MDCfetsBondDeal.HTSCSecurityID)
  return htscsecurityid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* MDCfetsBondDeal::release_htscsecurityid() {
  // @@protoc_insertion_point(field_release:com.htsc.mdc.insight.model.MDCfetsBondDeal.HTSCSecurityID)
  
  return htscsecurityid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MDCfetsBondDeal::set_allocated_htscsecurityid(::std::string* htscsecurityid) {
  if (htscsecurityid != NULL) {
    
  } else {
    
  }
  htscsecurityid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), htscsecurityid);
  // @@protoc_insertion_point(field_set_allocated:com.htsc.mdc.insight.model.MDCfetsBondDeal.HTSCSecurityID)
}

// optional .com.htsc.mdc.model.ESecurityType SecurityType = 2;
inline void MDCfetsBondDeal::clear_securitytype() {
  securitytype_ = 0;
}
inline ::com::htsc::mdc::model::ESecurityType MDCfetsBondDeal::securitytype() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDCfetsBondDeal.SecurityType)
  return static_cast< ::com::htsc::mdc::model::ESecurityType >(securitytype_);
}
inline void MDCfetsBondDeal::set_securitytype(::com::htsc::mdc::model::ESecurityType value) {
  
  securitytype_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDCfetsBondDeal.SecurityType)
}

// optional .com.htsc.mdc.model.ESecurityIDSource SecurityIDSource = 3;
inline void MDCfetsBondDeal::clear_securityidsource() {
  securityidsource_ = 0;
}
inline ::com::htsc::mdc::model::ESecurityIDSource MDCfetsBondDeal::securityidsource() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDCfetsBondDeal.SecurityIDSource)
  return static_cast< ::com::htsc::mdc::model::ESecurityIDSource >(securityidsource_);
}
inline void MDCfetsBondDeal::set_securityidsource(::com::htsc::mdc::model::ESecurityIDSource value) {
  
  securityidsource_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDCfetsBondDeal.SecurityIDSource)
}

// optional int32 MDDate = 4;
inline void MDCfetsBondDeal::clear_mddate() {
  mddate_ = 0;
}
inline ::google::protobuf::int32 MDCfetsBondDeal::mddate() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDCfetsBondDeal.MDDate)
  return mddate_;
}
inline void MDCfetsBondDeal::set_mddate(::google::protobuf::int32 value) {
  
  mddate_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDCfetsBondDeal.MDDate)
}

// optional int32 MDTime = 5;
inline void MDCfetsBondDeal::clear_mdtime() {
  mdtime_ = 0;
}
inline ::google::protobuf::int32 MDCfetsBondDeal::mdtime() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDCfetsBondDeal.MDTime)
  return mdtime_;
}
inline void MDCfetsBondDeal::set_mdtime(::google::protobuf::int32 value) {
  
  mdtime_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDCfetsBondDeal.MDTime)
}

// optional int64 DataTimestamp = 6;
inline void MDCfetsBondDeal::clear_datatimestamp() {
  datatimestamp_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 MDCfetsBondDeal::datatimestamp() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDCfetsBondDeal.DataTimestamp)
  return datatimestamp_;
}
inline void MDCfetsBondDeal::set_datatimestamp(::google::protobuf::int64 value) {
  
  datatimestamp_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDCfetsBondDeal.DataTimestamp)
}

// optional string TransactTime = 7;
inline void MDCfetsBondDeal::clear_transacttime() {
  transacttime_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& MDCfetsBondDeal::transacttime() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDCfetsBondDeal.TransactTime)
  return transacttime_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MDCfetsBondDeal::set_transacttime(const ::std::string& value) {
  
  transacttime_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDCfetsBondDeal.TransactTime)
}
inline void MDCfetsBondDeal::set_transacttime(const char* value) {
  
  transacttime_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:com.htsc.mdc.insight.model.MDCfetsBondDeal.TransactTime)
}
inline void MDCfetsBondDeal::set_transacttime(const char* value, size_t size) {
  
  transacttime_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:com.htsc.mdc.insight.model.MDCfetsBondDeal.TransactTime)
}
inline ::std::string* MDCfetsBondDeal::mutable_transacttime() {
  
  // @@protoc_insertion_point(field_mutable:com.htsc.mdc.insight.model.MDCfetsBondDeal.TransactTime)
  return transacttime_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* MDCfetsBondDeal::release_transacttime() {
  // @@protoc_insertion_point(field_release:com.htsc.mdc.insight.model.MDCfetsBondDeal.TransactTime)
  
  return transacttime_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MDCfetsBondDeal::set_allocated_transacttime(::std::string* transacttime) {
  if (transacttime != NULL) {
    
  } else {
    
  }
  transacttime_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), transacttime);
  // @@protoc_insertion_point(field_set_allocated:com.htsc.mdc.insight.model.MDCfetsBondDeal.TransactTime)
}

// optional string MarketIndicator = 8;
inline void MDCfetsBondDeal::clear_marketindicator() {
  marketindicator_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& MDCfetsBondDeal::marketindicator() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDCfetsBondDeal.MarketIndicator)
  return marketindicator_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MDCfetsBondDeal::set_marketindicator(const ::std::string& value) {
  
  marketindicator_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDCfetsBondDeal.MarketIndicator)
}
inline void MDCfetsBondDeal::set_marketindicator(const char* value) {
  
  marketindicator_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:com.htsc.mdc.insight.model.MDCfetsBondDeal.MarketIndicator)
}
inline void MDCfetsBondDeal::set_marketindicator(const char* value, size_t size) {
  
  marketindicator_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:com.htsc.mdc.insight.model.MDCfetsBondDeal.MarketIndicator)
}
inline ::std::string* MDCfetsBondDeal::mutable_marketindicator() {
  
  // @@protoc_insertion_point(field_mutable:com.htsc.mdc.insight.model.MDCfetsBondDeal.MarketIndicator)
  return marketindicator_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* MDCfetsBondDeal::release_marketindicator() {
  // @@protoc_insertion_point(field_release:com.htsc.mdc.insight.model.MDCfetsBondDeal.MarketIndicator)
  
  return marketindicator_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MDCfetsBondDeal::set_allocated_marketindicator(::std::string* marketindicator) {
  if (marketindicator != NULL) {
    
  } else {
    
  }
  marketindicator_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), marketindicator);
  // @@protoc_insertion_point(field_set_allocated:com.htsc.mdc.insight.model.MDCfetsBondDeal.MarketIndicator)
}

// optional int32 DataMultiplePowerOf10 = 9;
inline void MDCfetsBondDeal::clear_datamultiplepowerof10() {
  datamultiplepowerof10_ = 0;
}
inline ::google::protobuf::int32 MDCfetsBondDeal::datamultiplepowerof10() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDCfetsBondDeal.DataMultiplePowerOf10)
  return datamultiplepowerof10_;
}
inline void MDCfetsBondDeal::set_datamultiplepowerof10(::google::protobuf::int32 value) {
  
  datamultiplepowerof10_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDCfetsBondDeal.DataMultiplePowerOf10)
}

inline const MDCfetsBondDeal* MDCfetsBondDeal::internal_default_instance() {
  return &MDCfetsBondDeal_default_instance_.get();
}
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace model
}  // namespace insight
}  // namespace mdc
}  // namespace htsc
}  // namespace com

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_MDCfetsBondDeal_2eproto__INCLUDED