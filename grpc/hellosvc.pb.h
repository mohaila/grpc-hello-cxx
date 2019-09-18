// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: hellosvc.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_hellosvc_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_hellosvc_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3009000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3009001 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_hellosvc_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_hellosvc_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_hellosvc_2eproto;
namespace hellosvc {
class HelloRequest;
class HelloRequestDefaultTypeInternal;
extern HelloRequestDefaultTypeInternal _HelloRequest_default_instance_;
class HelloResponse;
class HelloResponseDefaultTypeInternal;
extern HelloResponseDefaultTypeInternal _HelloResponse_default_instance_;
}  // namespace hellosvc
PROTOBUF_NAMESPACE_OPEN
template<> ::hellosvc::HelloRequest* Arena::CreateMaybeMessage<::hellosvc::HelloRequest>(Arena*);
template<> ::hellosvc::HelloResponse* Arena::CreateMaybeMessage<::hellosvc::HelloResponse>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace hellosvc {

// ===================================================================

class HelloRequest :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:hellosvc.HelloRequest) */ {
 public:
  HelloRequest();
  virtual ~HelloRequest();

  HelloRequest(const HelloRequest& from);
  HelloRequest(HelloRequest&& from) noexcept
    : HelloRequest() {
    *this = ::std::move(from);
  }

  inline HelloRequest& operator=(const HelloRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline HelloRequest& operator=(HelloRequest&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const HelloRequest& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const HelloRequest* internal_default_instance() {
    return reinterpret_cast<const HelloRequest*>(
               &_HelloRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(HelloRequest& a, HelloRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(HelloRequest* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline HelloRequest* New() const final {
    return CreateMaybeMessage<HelloRequest>(nullptr);
  }

  HelloRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<HelloRequest>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const HelloRequest& from);
  void MergeFrom(const HelloRequest& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  #else
  bool MergePartialFromCodedStream(
      ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(HelloRequest* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "hellosvc.HelloRequest";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_hellosvc_2eproto);
    return ::descriptor_table_hellosvc_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kNameFieldNumber = 1,
  };
  // string name = 1;
  void clear_name();
  const std::string& name() const;
  void set_name(const std::string& value);
  void set_name(std::string&& value);
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  std::string* mutable_name();
  std::string* release_name();
  void set_allocated_name(std::string* name);

  // @@protoc_insertion_point(class_scope:hellosvc.HelloRequest)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_hellosvc_2eproto;
};
// -------------------------------------------------------------------

class HelloResponse :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:hellosvc.HelloResponse) */ {
 public:
  HelloResponse();
  virtual ~HelloResponse();

  HelloResponse(const HelloResponse& from);
  HelloResponse(HelloResponse&& from) noexcept
    : HelloResponse() {
    *this = ::std::move(from);
  }

  inline HelloResponse& operator=(const HelloResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline HelloResponse& operator=(HelloResponse&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const HelloResponse& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const HelloResponse* internal_default_instance() {
    return reinterpret_cast<const HelloResponse*>(
               &_HelloResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(HelloResponse& a, HelloResponse& b) {
    a.Swap(&b);
  }
  inline void Swap(HelloResponse* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline HelloResponse* New() const final {
    return CreateMaybeMessage<HelloResponse>(nullptr);
  }

  HelloResponse* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<HelloResponse>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const HelloResponse& from);
  void MergeFrom(const HelloResponse& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  #else
  bool MergePartialFromCodedStream(
      ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(HelloResponse* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "hellosvc.HelloResponse";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_hellosvc_2eproto);
    return ::descriptor_table_hellosvc_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kGreetingFieldNumber = 1,
  };
  // string greeting = 1;
  void clear_greeting();
  const std::string& greeting() const;
  void set_greeting(const std::string& value);
  void set_greeting(std::string&& value);
  void set_greeting(const char* value);
  void set_greeting(const char* value, size_t size);
  std::string* mutable_greeting();
  std::string* release_greeting();
  void set_allocated_greeting(std::string* greeting);

  // @@protoc_insertion_point(class_scope:hellosvc.HelloResponse)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr greeting_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_hellosvc_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// HelloRequest

// string name = 1;
inline void HelloRequest::clear_name() {
  name_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& HelloRequest::name() const {
  // @@protoc_insertion_point(field_get:hellosvc.HelloRequest.name)
  return name_.GetNoArena();
}
inline void HelloRequest::set_name(const std::string& value) {
  
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:hellosvc.HelloRequest.name)
}
inline void HelloRequest::set_name(std::string&& value) {
  
  name_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:hellosvc.HelloRequest.name)
}
inline void HelloRequest::set_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:hellosvc.HelloRequest.name)
}
inline void HelloRequest::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:hellosvc.HelloRequest.name)
}
inline std::string* HelloRequest::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:hellosvc.HelloRequest.name)
  return name_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* HelloRequest::release_name() {
  // @@protoc_insertion_point(field_release:hellosvc.HelloRequest.name)
  
  return name_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void HelloRequest::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:hellosvc.HelloRequest.name)
}

// -------------------------------------------------------------------

// HelloResponse

// string greeting = 1;
inline void HelloResponse::clear_greeting() {
  greeting_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& HelloResponse::greeting() const {
  // @@protoc_insertion_point(field_get:hellosvc.HelloResponse.greeting)
  return greeting_.GetNoArena();
}
inline void HelloResponse::set_greeting(const std::string& value) {
  
  greeting_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:hellosvc.HelloResponse.greeting)
}
inline void HelloResponse::set_greeting(std::string&& value) {
  
  greeting_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:hellosvc.HelloResponse.greeting)
}
inline void HelloResponse::set_greeting(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  greeting_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:hellosvc.HelloResponse.greeting)
}
inline void HelloResponse::set_greeting(const char* value, size_t size) {
  
  greeting_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:hellosvc.HelloResponse.greeting)
}
inline std::string* HelloResponse::mutable_greeting() {
  
  // @@protoc_insertion_point(field_mutable:hellosvc.HelloResponse.greeting)
  return greeting_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* HelloResponse::release_greeting() {
  // @@protoc_insertion_point(field_release:hellosvc.HelloResponse.greeting)
  
  return greeting_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void HelloResponse::set_allocated_greeting(std::string* greeting) {
  if (greeting != nullptr) {
    
  } else {
    
  }
  greeting_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), greeting);
  // @@protoc_insertion_point(field_set_allocated:hellosvc.HelloResponse.greeting)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace hellosvc

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_hellosvc_2eproto
