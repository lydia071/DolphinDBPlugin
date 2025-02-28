// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MDIopvSnapshot.proto

#ifndef PROTOBUF_MDIopvSnapshot_2eproto__INCLUDED
#define PROTOBUF_MDIopvSnapshot_2eproto__INCLUDED

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
void protobuf_AddDesc_MDIopvSnapshot_2eproto();
void protobuf_InitDefaults_MDIopvSnapshot_2eproto();
void protobuf_AssignDesc_MDIopvSnapshot_2eproto();
void protobuf_ShutdownFile_MDIopvSnapshot_2eproto();

class MDIopvSnapshot;

// ===================================================================

class MDIopvSnapshot : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:com.htsc.mdc.insight.model.MDIopvSnapshot) */ {
 public:
  MDIopvSnapshot();
  virtual ~MDIopvSnapshot();

  MDIopvSnapshot(const MDIopvSnapshot& from);

  inline MDIopvSnapshot& operator=(const MDIopvSnapshot& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const MDIopvSnapshot& default_instance();

  static const MDIopvSnapshot* internal_default_instance();

  void Swap(MDIopvSnapshot* other);

  // implements Message ----------------------------------------------

  inline MDIopvSnapshot* New() const { return New(NULL); }

  MDIopvSnapshot* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const MDIopvSnapshot& from);
  void MergeFrom(const MDIopvSnapshot& from);
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
  void InternalSwap(MDIopvSnapshot* other);
  void UnsafeMergeFrom(const MDIopvSnapshot& from);
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

  // optional string TradingPhaseCode = 7;
  void clear_tradingphasecode();
  static const int kTradingPhaseCodeFieldNumber = 7;
  const ::std::string& tradingphasecode() const;
  void set_tradingphasecode(const ::std::string& value);
  void set_tradingphasecode(const char* value);
  void set_tradingphasecode(const char* value, size_t size);
  ::std::string* mutable_tradingphasecode();
  ::std::string* release_tradingphasecode();
  void set_allocated_tradingphasecode(::std::string* tradingphasecode);

  // optional int64 IOPV = 8;
  void clear_iopv();
  static const int kIOPVFieldNumber = 8;
  ::google::protobuf::int64 iopv() const;
  void set_iopv(::google::protobuf::int64 value);

  // optional int32 DataMultiplePowerOf10 = 9;
  void clear_datamultiplepowerof10();
  static const int kDataMultiplePowerOf10FieldNumber = 9;
  ::google::protobuf::int32 datamultiplepowerof10() const;
  void set_datamultiplepowerof10(::google::protobuf::int32 value);

  // optional string ExchangeDate = 21;
  void clear_exchangedate();
  static const int kExchangeDateFieldNumber = 21;
  const ::std::string& exchangedate() const;
  void set_exchangedate(const ::std::string& value);
  void set_exchangedate(const char* value);
  void set_exchangedate(const char* value, size_t size);
  ::std::string* mutable_exchangedate();
  ::std::string* release_exchangedate();
  void set_allocated_exchangedate(::std::string* exchangedate);

  // optional string ExchangeTime = 22;
  void clear_exchangetime();
  static const int kExchangeTimeFieldNumber = 22;
  const ::std::string& exchangetime() const;
  void set_exchangetime(const ::std::string& value);
  void set_exchangetime(const char* value);
  void set_exchangetime(const char* value, size_t size);
  ::std::string* mutable_exchangetime();
  ::std::string* release_exchangetime();
  void set_allocated_exchangetime(::std::string* exchangetime);

  // optional int32 ChannelNo = 23;
  void clear_channelno();
  static const int kChannelNoFieldNumber = 23;
  ::google::protobuf::int32 channelno() const;
  void set_channelno(::google::protobuf::int32 value);

  // optional int64 ApplSeqNum = 24;
  void clear_applseqnum();
  static const int kApplSeqNumFieldNumber = 24;
  ::google::protobuf::int64 applseqnum() const;
  void set_applseqnum(::google::protobuf::int64 value);

  // optional int64 ArrivalDateTime = 25;
  void clear_arrivaldatetime();
  static const int kArrivalDateTimeFieldNumber = 25;
  ::google::protobuf::int64 arrivaldatetime() const;
  void set_arrivaldatetime(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:com.htsc.mdc.insight.model.MDIopvSnapshot)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr htscsecurityid_;
  ::google::protobuf::internal::ArenaStringPtr tradingphasecode_;
  ::google::protobuf::internal::ArenaStringPtr exchangedate_;
  ::google::protobuf::internal::ArenaStringPtr exchangetime_;
  int securitytype_;
  int securityidsource_;
  ::google::protobuf::int32 mddate_;
  ::google::protobuf::int32 mdtime_;
  ::google::protobuf::int64 datatimestamp_;
  ::google::protobuf::int64 iopv_;
  ::google::protobuf::int32 datamultiplepowerof10_;
  ::google::protobuf::int32 channelno_;
  ::google::protobuf::int64 applseqnum_;
  ::google::protobuf::int64 arrivaldatetime_;
  mutable int _cached_size_;
  friend void  protobuf_InitDefaults_MDIopvSnapshot_2eproto_impl();
  friend void  protobuf_AddDesc_MDIopvSnapshot_2eproto_impl();
  friend void protobuf_AssignDesc_MDIopvSnapshot_2eproto();
  friend void protobuf_ShutdownFile_MDIopvSnapshot_2eproto();

  void InitAsDefaultInstance();
};
extern ::google::protobuf::internal::ExplicitlyConstructed<MDIopvSnapshot> MDIopvSnapshot_default_instance_;

// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// MDIopvSnapshot

// optional string HTSCSecurityID = 1;
inline void MDIopvSnapshot::clear_htscsecurityid() {
  htscsecurityid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& MDIopvSnapshot::htscsecurityid() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDIopvSnapshot.HTSCSecurityID)
  return htscsecurityid_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MDIopvSnapshot::set_htscsecurityid(const ::std::string& value) {
  
  htscsecurityid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDIopvSnapshot.HTSCSecurityID)
}
inline void MDIopvSnapshot::set_htscsecurityid(const char* value) {
  
  htscsecurityid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:com.htsc.mdc.insight.model.MDIopvSnapshot.HTSCSecurityID)
}
inline void MDIopvSnapshot::set_htscsecurityid(const char* value, size_t size) {
  
  htscsecurityid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:com.htsc.mdc.insight.model.MDIopvSnapshot.HTSCSecurityID)
}
inline ::std::string* MDIopvSnapshot::mutable_htscsecurityid() {
  
  // @@protoc_insertion_point(field_mutable:com.htsc.mdc.insight.model.MDIopvSnapshot.HTSCSecurityID)
  return htscsecurityid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* MDIopvSnapshot::release_htscsecurityid() {
  // @@protoc_insertion_point(field_release:com.htsc.mdc.insight.model.MDIopvSnapshot.HTSCSecurityID)
  
  return htscsecurityid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MDIopvSnapshot::set_allocated_htscsecurityid(::std::string* htscsecurityid) {
  if (htscsecurityid != NULL) {
    
  } else {
    
  }
  htscsecurityid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), htscsecurityid);
  // @@protoc_insertion_point(field_set_allocated:com.htsc.mdc.insight.model.MDIopvSnapshot.HTSCSecurityID)
}

// optional .com.htsc.mdc.model.ESecurityType SecurityType = 2;
inline void MDIopvSnapshot::clear_securitytype() {
  securitytype_ = 0;
}
inline ::com::htsc::mdc::model::ESecurityType MDIopvSnapshot::securitytype() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDIopvSnapshot.SecurityType)
  return static_cast< ::com::htsc::mdc::model::ESecurityType >(securitytype_);
}
inline void MDIopvSnapshot::set_securitytype(::com::htsc::mdc::model::ESecurityType value) {
  
  securitytype_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDIopvSnapshot.SecurityType)
}

// optional .com.htsc.mdc.model.ESecurityIDSource SecurityIDSource = 3;
inline void MDIopvSnapshot::clear_securityidsource() {
  securityidsource_ = 0;
}
inline ::com::htsc::mdc::model::ESecurityIDSource MDIopvSnapshot::securityidsource() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDIopvSnapshot.SecurityIDSource)
  return static_cast< ::com::htsc::mdc::model::ESecurityIDSource >(securityidsource_);
}
inline void MDIopvSnapshot::set_securityidsource(::com::htsc::mdc::model::ESecurityIDSource value) {
  
  securityidsource_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDIopvSnapshot.SecurityIDSource)
}

// optional int32 MDDate = 4;
inline void MDIopvSnapshot::clear_mddate() {
  mddate_ = 0;
}
inline ::google::protobuf::int32 MDIopvSnapshot::mddate() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDIopvSnapshot.MDDate)
  return mddate_;
}
inline void MDIopvSnapshot::set_mddate(::google::protobuf::int32 value) {
  
  mddate_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDIopvSnapshot.MDDate)
}

// optional int32 MDTime = 5;
inline void MDIopvSnapshot::clear_mdtime() {
  mdtime_ = 0;
}
inline ::google::protobuf::int32 MDIopvSnapshot::mdtime() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDIopvSnapshot.MDTime)
  return mdtime_;
}
inline void MDIopvSnapshot::set_mdtime(::google::protobuf::int32 value) {
  
  mdtime_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDIopvSnapshot.MDTime)
}

// optional int64 DataTimestamp = 6;
inline void MDIopvSnapshot::clear_datatimestamp() {
  datatimestamp_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 MDIopvSnapshot::datatimestamp() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDIopvSnapshot.DataTimestamp)
  return datatimestamp_;
}
inline void MDIopvSnapshot::set_datatimestamp(::google::protobuf::int64 value) {
  
  datatimestamp_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDIopvSnapshot.DataTimestamp)
}

// optional string TradingPhaseCode = 7;
inline void MDIopvSnapshot::clear_tradingphasecode() {
  tradingphasecode_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& MDIopvSnapshot::tradingphasecode() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDIopvSnapshot.TradingPhaseCode)
  return tradingphasecode_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MDIopvSnapshot::set_tradingphasecode(const ::std::string& value) {
  
  tradingphasecode_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDIopvSnapshot.TradingPhaseCode)
}
inline void MDIopvSnapshot::set_tradingphasecode(const char* value) {
  
  tradingphasecode_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:com.htsc.mdc.insight.model.MDIopvSnapshot.TradingPhaseCode)
}
inline void MDIopvSnapshot::set_tradingphasecode(const char* value, size_t size) {
  
  tradingphasecode_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:com.htsc.mdc.insight.model.MDIopvSnapshot.TradingPhaseCode)
}
inline ::std::string* MDIopvSnapshot::mutable_tradingphasecode() {
  
  // @@protoc_insertion_point(field_mutable:com.htsc.mdc.insight.model.MDIopvSnapshot.TradingPhaseCode)
  return tradingphasecode_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* MDIopvSnapshot::release_tradingphasecode() {
  // @@protoc_insertion_point(field_release:com.htsc.mdc.insight.model.MDIopvSnapshot.TradingPhaseCode)
  
  return tradingphasecode_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MDIopvSnapshot::set_allocated_tradingphasecode(::std::string* tradingphasecode) {
  if (tradingphasecode != NULL) {
    
  } else {
    
  }
  tradingphasecode_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), tradingphasecode);
  // @@protoc_insertion_point(field_set_allocated:com.htsc.mdc.insight.model.MDIopvSnapshot.TradingPhaseCode)
}

// optional int64 IOPV = 8;
inline void MDIopvSnapshot::clear_iopv() {
  iopv_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 MDIopvSnapshot::iopv() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDIopvSnapshot.IOPV)
  return iopv_;
}
inline void MDIopvSnapshot::set_iopv(::google::protobuf::int64 value) {
  
  iopv_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDIopvSnapshot.IOPV)
}

// optional int32 DataMultiplePowerOf10 = 9;
inline void MDIopvSnapshot::clear_datamultiplepowerof10() {
  datamultiplepowerof10_ = 0;
}
inline ::google::protobuf::int32 MDIopvSnapshot::datamultiplepowerof10() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDIopvSnapshot.DataMultiplePowerOf10)
  return datamultiplepowerof10_;
}
inline void MDIopvSnapshot::set_datamultiplepowerof10(::google::protobuf::int32 value) {
  
  datamultiplepowerof10_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDIopvSnapshot.DataMultiplePowerOf10)
}

// optional string ExchangeDate = 21;
inline void MDIopvSnapshot::clear_exchangedate() {
  exchangedate_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& MDIopvSnapshot::exchangedate() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDIopvSnapshot.ExchangeDate)
  return exchangedate_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MDIopvSnapshot::set_exchangedate(const ::std::string& value) {
  
  exchangedate_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDIopvSnapshot.ExchangeDate)
}
inline void MDIopvSnapshot::set_exchangedate(const char* value) {
  
  exchangedate_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:com.htsc.mdc.insight.model.MDIopvSnapshot.ExchangeDate)
}
inline void MDIopvSnapshot::set_exchangedate(const char* value, size_t size) {
  
  exchangedate_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:com.htsc.mdc.insight.model.MDIopvSnapshot.ExchangeDate)
}
inline ::std::string* MDIopvSnapshot::mutable_exchangedate() {
  
  // @@protoc_insertion_point(field_mutable:com.htsc.mdc.insight.model.MDIopvSnapshot.ExchangeDate)
  return exchangedate_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* MDIopvSnapshot::release_exchangedate() {
  // @@protoc_insertion_point(field_release:com.htsc.mdc.insight.model.MDIopvSnapshot.ExchangeDate)
  
  return exchangedate_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MDIopvSnapshot::set_allocated_exchangedate(::std::string* exchangedate) {
  if (exchangedate != NULL) {
    
  } else {
    
  }
  exchangedate_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), exchangedate);
  // @@protoc_insertion_point(field_set_allocated:com.htsc.mdc.insight.model.MDIopvSnapshot.ExchangeDate)
}

// optional string ExchangeTime = 22;
inline void MDIopvSnapshot::clear_exchangetime() {
  exchangetime_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& MDIopvSnapshot::exchangetime() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDIopvSnapshot.ExchangeTime)
  return exchangetime_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MDIopvSnapshot::set_exchangetime(const ::std::string& value) {
  
  exchangetime_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDIopvSnapshot.ExchangeTime)
}
inline void MDIopvSnapshot::set_exchangetime(const char* value) {
  
  exchangetime_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:com.htsc.mdc.insight.model.MDIopvSnapshot.ExchangeTime)
}
inline void MDIopvSnapshot::set_exchangetime(const char* value, size_t size) {
  
  exchangetime_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:com.htsc.mdc.insight.model.MDIopvSnapshot.ExchangeTime)
}
inline ::std::string* MDIopvSnapshot::mutable_exchangetime() {
  
  // @@protoc_insertion_point(field_mutable:com.htsc.mdc.insight.model.MDIopvSnapshot.ExchangeTime)
  return exchangetime_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* MDIopvSnapshot::release_exchangetime() {
  // @@protoc_insertion_point(field_release:com.htsc.mdc.insight.model.MDIopvSnapshot.ExchangeTime)
  
  return exchangetime_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MDIopvSnapshot::set_allocated_exchangetime(::std::string* exchangetime) {
  if (exchangetime != NULL) {
    
  } else {
    
  }
  exchangetime_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), exchangetime);
  // @@protoc_insertion_point(field_set_allocated:com.htsc.mdc.insight.model.MDIopvSnapshot.ExchangeTime)
}

// optional int32 ChannelNo = 23;
inline void MDIopvSnapshot::clear_channelno() {
  channelno_ = 0;
}
inline ::google::protobuf::int32 MDIopvSnapshot::channelno() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDIopvSnapshot.ChannelNo)
  return channelno_;
}
inline void MDIopvSnapshot::set_channelno(::google::protobuf::int32 value) {
  
  channelno_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDIopvSnapshot.ChannelNo)
}

// optional int64 ApplSeqNum = 24;
inline void MDIopvSnapshot::clear_applseqnum() {
  applseqnum_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 MDIopvSnapshot::applseqnum() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDIopvSnapshot.ApplSeqNum)
  return applseqnum_;
}
inline void MDIopvSnapshot::set_applseqnum(::google::protobuf::int64 value) {
  
  applseqnum_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDIopvSnapshot.ApplSeqNum)
}

// optional int64 ArrivalDateTime = 25;
inline void MDIopvSnapshot::clear_arrivaldatetime() {
  arrivaldatetime_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 MDIopvSnapshot::arrivaldatetime() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDIopvSnapshot.ArrivalDateTime)
  return arrivaldatetime_;
}
inline void MDIopvSnapshot::set_arrivaldatetime(::google::protobuf::int64 value) {
  
  arrivaldatetime_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDIopvSnapshot.ArrivalDateTime)
}

inline const MDIopvSnapshot* MDIopvSnapshot::internal_default_instance() {
  return &MDIopvSnapshot_default_instance_.get();
}
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace model
}  // namespace insight
}  // namespace mdc
}  // namespace htsc
}  // namespace com

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_MDIopvSnapshot_2eproto__INCLUDED
