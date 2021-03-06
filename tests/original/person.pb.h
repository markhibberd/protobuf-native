// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tests/person.proto

#ifndef PROTOBUF_tests_2fperson_2eproto__INCLUDED
#define PROTOBUF_tests_2fperson_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_tests_2fperson_2eproto();
void protobuf_AssignDesc_tests_2fperson_2eproto();
void protobuf_ShutdownFile_tests_2fperson_2eproto();

class Name;
class Person;

// ===================================================================

class Name : public ::google::protobuf::Message {
 public:
  Name();
  virtual ~Name();

  Name(const Name& from);

  inline Name& operator=(const Name& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Name& default_instance();

  void Swap(Name* other);

  // implements Message ----------------------------------------------

  Name* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Name& from);
  void MergeFrom(const Name& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string firstname = 1;
  inline bool has_firstname() const;
  inline void clear_firstname();
  static const int kFirstnameFieldNumber = 1;
  inline const ::std::string& firstname() const;
  inline void set_firstname(const ::std::string& value);
  inline void set_firstname(const char* value);
  inline void set_firstname(const char* value, size_t size);
  inline ::std::string* mutable_firstname();
  inline ::std::string* release_firstname();
  inline void set_allocated_firstname(::std::string* firstname);

  // optional string lastname = 2;
  inline bool has_lastname() const;
  inline void clear_lastname();
  static const int kLastnameFieldNumber = 2;
  inline const ::std::string& lastname() const;
  inline void set_lastname(const ::std::string& value);
  inline void set_lastname(const char* value);
  inline void set_lastname(const char* value, size_t size);
  inline ::std::string* mutable_lastname();
  inline ::std::string* release_lastname();
  inline void set_allocated_lastname(::std::string* lastname);

  // @@protoc_insertion_point(class_scope:Name)
 private:
  inline void set_has_firstname();
  inline void clear_has_firstname();
  inline void set_has_lastname();
  inline void clear_has_lastname();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* firstname_;
  ::std::string* lastname_;
  friend void  protobuf_AddDesc_tests_2fperson_2eproto();
  friend void protobuf_AssignDesc_tests_2fperson_2eproto();
  friend void protobuf_ShutdownFile_tests_2fperson_2eproto();

  void InitAsDefaultInstance();
  static Name* default_instance_;
};
// -------------------------------------------------------------------

class Person : public ::google::protobuf::Message {
 public:
  Person();
  virtual ~Person();

  Person(const Person& from);

  inline Person& operator=(const Person& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Person& default_instance();

  void Swap(Person* other);

  // implements Message ----------------------------------------------

  Person* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Person& from);
  void MergeFrom(const Person& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required .Name name = 1;
  inline bool has_name() const;
  inline void clear_name();
  static const int kNameFieldNumber = 1;
  inline const ::Name& name() const;
  inline ::Name* mutable_name();
  inline ::Name* release_name();
  inline void set_allocated_name(::Name* name);

  // required int32 id = 2;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIdFieldNumber = 2;
  inline ::google::protobuf::int32 id() const;
  inline void set_id(::google::protobuf::int32 value);

  // optional string email = 3;
  inline bool has_email() const;
  inline void clear_email();
  static const int kEmailFieldNumber = 3;
  inline const ::std::string& email() const;
  inline void set_email(const ::std::string& value);
  inline void set_email(const char* value);
  inline void set_email(const char* value, size_t size);
  inline ::std::string* mutable_email();
  inline ::std::string* release_email();
  inline void set_allocated_email(::std::string* email);

  // @@protoc_insertion_point(class_scope:Person)
 private:
  inline void set_has_name();
  inline void clear_has_name();
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_email();
  inline void clear_has_email();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::Name* name_;
  ::std::string* email_;
  ::google::protobuf::int32 id_;
  friend void  protobuf_AddDesc_tests_2fperson_2eproto();
  friend void protobuf_AssignDesc_tests_2fperson_2eproto();
  friend void protobuf_ShutdownFile_tests_2fperson_2eproto();

  void InitAsDefaultInstance();
  static Person* default_instance_;
};
// ===================================================================


// ===================================================================

// Name

// optional string firstname = 1;
inline bool Name::has_firstname() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Name::set_has_firstname() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Name::clear_has_firstname() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Name::clear_firstname() {
  if (firstname_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    firstname_->clear();
  }
  clear_has_firstname();
}
inline const ::std::string& Name::firstname() const {
  // @@protoc_insertion_point(field_get:Name.firstname)
  return *firstname_;
}
inline void Name::set_firstname(const ::std::string& value) {
  set_has_firstname();
  if (firstname_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    firstname_ = new ::std::string;
  }
  firstname_->assign(value);
  // @@protoc_insertion_point(field_set:Name.firstname)
}
inline void Name::set_firstname(const char* value) {
  set_has_firstname();
  if (firstname_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    firstname_ = new ::std::string;
  }
  firstname_->assign(value);
  // @@protoc_insertion_point(field_set_char:Name.firstname)
}
inline void Name::set_firstname(const char* value, size_t size) {
  set_has_firstname();
  if (firstname_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    firstname_ = new ::std::string;
  }
  firstname_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:Name.firstname)
}
inline ::std::string* Name::mutable_firstname() {
  set_has_firstname();
  if (firstname_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    firstname_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:Name.firstname)
  return firstname_;
}
inline ::std::string* Name::release_firstname() {
  clear_has_firstname();
  if (firstname_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = firstname_;
    firstname_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void Name::set_allocated_firstname(::std::string* firstname) {
  if (firstname_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete firstname_;
  }
  if (firstname) {
    set_has_firstname();
    firstname_ = firstname;
  } else {
    clear_has_firstname();
    firstname_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:Name.firstname)
}

// optional string lastname = 2;
inline bool Name::has_lastname() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Name::set_has_lastname() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Name::clear_has_lastname() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Name::clear_lastname() {
  if (lastname_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    lastname_->clear();
  }
  clear_has_lastname();
}
inline const ::std::string& Name::lastname() const {
  // @@protoc_insertion_point(field_get:Name.lastname)
  return *lastname_;
}
inline void Name::set_lastname(const ::std::string& value) {
  set_has_lastname();
  if (lastname_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    lastname_ = new ::std::string;
  }
  lastname_->assign(value);
  // @@protoc_insertion_point(field_set:Name.lastname)
}
inline void Name::set_lastname(const char* value) {
  set_has_lastname();
  if (lastname_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    lastname_ = new ::std::string;
  }
  lastname_->assign(value);
  // @@protoc_insertion_point(field_set_char:Name.lastname)
}
inline void Name::set_lastname(const char* value, size_t size) {
  set_has_lastname();
  if (lastname_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    lastname_ = new ::std::string;
  }
  lastname_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:Name.lastname)
}
inline ::std::string* Name::mutable_lastname() {
  set_has_lastname();
  if (lastname_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    lastname_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:Name.lastname)
  return lastname_;
}
inline ::std::string* Name::release_lastname() {
  clear_has_lastname();
  if (lastname_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = lastname_;
    lastname_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void Name::set_allocated_lastname(::std::string* lastname) {
  if (lastname_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete lastname_;
  }
  if (lastname) {
    set_has_lastname();
    lastname_ = lastname;
  } else {
    clear_has_lastname();
    lastname_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:Name.lastname)
}

// -------------------------------------------------------------------

// Person

// required .Name name = 1;
inline bool Person::has_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Person::set_has_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Person::clear_has_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Person::clear_name() {
  if (name_ != NULL) name_->::Name::Clear();
  clear_has_name();
}
inline const ::Name& Person::name() const {
  // @@protoc_insertion_point(field_get:Person.name)
  return name_ != NULL ? *name_ : *default_instance_->name_;
}
inline ::Name* Person::mutable_name() {
  set_has_name();
  if (name_ == NULL) name_ = new ::Name;
  // @@protoc_insertion_point(field_mutable:Person.name)
  return name_;
}
inline ::Name* Person::release_name() {
  clear_has_name();
  ::Name* temp = name_;
  name_ = NULL;
  return temp;
}
inline void Person::set_allocated_name(::Name* name) {
  delete name_;
  name_ = name;
  if (name) {
    set_has_name();
  } else {
    clear_has_name();
  }
  // @@protoc_insertion_point(field_set_allocated:Person.name)
}

// required int32 id = 2;
inline bool Person::has_id() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Person::set_has_id() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Person::clear_has_id() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Person::clear_id() {
  id_ = 0;
  clear_has_id();
}
inline ::google::protobuf::int32 Person::id() const {
  // @@protoc_insertion_point(field_get:Person.id)
  return id_;
}
inline void Person::set_id(::google::protobuf::int32 value) {
  set_has_id();
  id_ = value;
  // @@protoc_insertion_point(field_set:Person.id)
}

// optional string email = 3;
inline bool Person::has_email() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Person::set_has_email() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Person::clear_has_email() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Person::clear_email() {
  if (email_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    email_->clear();
  }
  clear_has_email();
}
inline const ::std::string& Person::email() const {
  // @@protoc_insertion_point(field_get:Person.email)
  return *email_;
}
inline void Person::set_email(const ::std::string& value) {
  set_has_email();
  if (email_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    email_ = new ::std::string;
  }
  email_->assign(value);
  // @@protoc_insertion_point(field_set:Person.email)
}
inline void Person::set_email(const char* value) {
  set_has_email();
  if (email_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    email_ = new ::std::string;
  }
  email_->assign(value);
  // @@protoc_insertion_point(field_set_char:Person.email)
}
inline void Person::set_email(const char* value, size_t size) {
  set_has_email();
  if (email_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    email_ = new ::std::string;
  }
  email_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:Person.email)
}
inline ::std::string* Person::mutable_email() {
  set_has_email();
  if (email_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    email_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:Person.email)
  return email_;
}
inline ::std::string* Person::release_email() {
  clear_has_email();
  if (email_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = email_;
    email_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void Person::set_allocated_email(::std::string* email) {
  if (email_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete email_;
  }
  if (email) {
    set_has_email();
    email_ = email;
  } else {
    clear_has_email();
    email_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:Person.email)
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_tests_2fperson_2eproto__INCLUDED
