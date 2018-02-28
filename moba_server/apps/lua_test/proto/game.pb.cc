// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: game.proto

#include "game.pb.h"

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
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)
class LoginReqDefaultTypeInternal {
public:
	::google::protobuf::internal::ExplicitlyConstructed<LoginReq>
		_instance;
} _LoginReq_default_instance_;
class LoginResDefaultTypeInternal {
public:
	::google::protobuf::internal::ExplicitlyConstructed<LoginRes>
		_instance;
} _LoginRes_default_instance_;
namespace protobuf_game_2eproto {
	void InitDefaultsLoginReqImpl() {
		GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
		::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
		::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
		{
			void* ptr = &::_LoginReq_default_instance_;
			new (ptr) ::LoginReq();
			::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
		}
		::LoginReq::InitAsDefaultInstance();
	}

	void InitDefaultsLoginReq() {
		static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
		::google::protobuf::GoogleOnceInit(&once, &InitDefaultsLoginReqImpl);
	}

	void InitDefaultsLoginResImpl() {
		GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
		::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
		::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
		{
			void* ptr = &::_LoginRes_default_instance_;
			new (ptr) ::LoginRes();
			::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
		}
		::LoginRes::InitAsDefaultInstance();
	}

	void InitDefaultsLoginRes() {
		static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
		::google::protobuf::GoogleOnceInit(&once, &InitDefaultsLoginResImpl);
	}

	::google::protobuf::Metadata file_level_metadata[2];
	const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors[1];

	const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
		GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::LoginReq, _has_bits_),
		GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::LoginReq, _internal_metadata_),
		~0u,  // no _extensions_
		~0u,  // no _oneof_case_
		~0u,  // no _weak_field_map_
		GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::LoginReq, name_),
		GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::LoginReq, age_),
		GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::LoginReq, email_),
		GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::LoginReq, int_set_),
		0,
		2,
		1,
		3,
		GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::LoginRes, _has_bits_),
		GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::LoginRes, _internal_metadata_),
		~0u,  // no _extensions_
		~0u,  // no _oneof_case_
		~0u,  // no _weak_field_map_
		GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::LoginRes, status_),
		0,
	};
	static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
		{ 0, 9, sizeof(::LoginReq) },
	{ 13, 19, sizeof(::LoginRes) },
	};

	static ::google::protobuf::Message const * const file_default_instances[] = {
		reinterpret_cast<const ::google::protobuf::Message*>(&::_LoginReq_default_instance_),
		reinterpret_cast<const ::google::protobuf::Message*>(&::_LoginRes_default_instance_),
	};

	void protobuf_AssignDescriptors() {
		AddDescriptors();
		::google::protobuf::MessageFactory* factory = NULL;
		AssignDescriptors(
			"game.proto", schemas, file_default_instances, TableStruct::offsets, factory,
			file_level_metadata, file_level_enum_descriptors, NULL);
	}

	void protobuf_AssignDescriptorsOnce() {
		static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
		::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
	}

	void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
	void protobuf_RegisterTypes(const ::std::string&) {
		protobuf_AssignDescriptorsOnce();
		::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 2);
	}

	void AddDescriptorsImpl() {
		InitDefaults();
		static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
			"\n\ngame.proto\"E\n\010LoginReq\022\014\n\004name\030\001 \002(\t\022\013"
			"\n\003age\030\002 \002(\005\022\r\n\005email\030\003 \002(\t\022\017\n\007int_set\030\004 "
			"\002(\005\"\032\n\010LoginRes\022\016\n\006status\030\001 \002(\005*4\n\003Cmd\022\017"
			"\n\013INVALID_CMD\020\000\022\r\n\teLoginReq\020\001\022\r\n\teLogin"
			"Res\020\002"
		};
		::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
			descriptor, 165);
		::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
			"game.proto", &protobuf_RegisterTypes);
	}

	void AddDescriptors() {
		static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
		::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
	}
	// Force AddDescriptors() to be called at dynamic initialization time.
	struct StaticDescriptorInitializer {
		StaticDescriptorInitializer() {
			AddDescriptors();
		}
	} static_descriptor_initializer;
}  // namespace protobuf_game_2eproto
const ::google::protobuf::EnumDescriptor* Cmd_descriptor() {
	protobuf_game_2eproto::protobuf_AssignDescriptorsOnce();
	return protobuf_game_2eproto::file_level_enum_descriptors[0];
}
bool Cmd_IsValid(int value) {
	switch (value) {
	case 0:
	case 1:
	case 2:
		return true;
	default:
		return false;
	}
}


// ===================================================================

void LoginReq::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int LoginReq::kNameFieldNumber;
const int LoginReq::kAgeFieldNumber;
const int LoginReq::kEmailFieldNumber;
const int LoginReq::kIntSetFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

LoginReq::LoginReq()
	: ::google::protobuf::Message(), _internal_metadata_(NULL) {
	if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
		::protobuf_game_2eproto::InitDefaultsLoginReq();
	}
	SharedCtor();
	// @@protoc_insertion_point(constructor:LoginReq)
}
LoginReq::LoginReq(const LoginReq& from)
	: ::google::protobuf::Message(),
	_internal_metadata_(NULL),
	_has_bits_(from._has_bits_),
	_cached_size_(0) {
	_internal_metadata_.MergeFrom(from._internal_metadata_);
	name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
	if (from.has_name()) {
		name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
	}
	email_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
	if (from.has_email()) {
		email_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.email_);
	}
	::memcpy(&age_, &from.age_,
		static_cast<size_t>(reinterpret_cast<char*>(&int_set_) -
			reinterpret_cast<char*>(&age_)) + sizeof(int_set_));
	// @@protoc_insertion_point(copy_constructor:LoginReq)
}

void LoginReq::SharedCtor() {
	_cached_size_ = 0;
	name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
	email_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
	::memset(&age_, 0, static_cast<size_t>(
		reinterpret_cast<char*>(&int_set_) -
		reinterpret_cast<char*>(&age_)) + sizeof(int_set_));
}

LoginReq::~LoginReq() {
	// @@protoc_insertion_point(destructor:LoginReq)
	SharedDtor();
}

void LoginReq::SharedDtor() {
	name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
	email_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void LoginReq::SetCachedSize(int size) const {
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* LoginReq::descriptor() {
	::protobuf_game_2eproto::protobuf_AssignDescriptorsOnce();
	return ::protobuf_game_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const LoginReq& LoginReq::default_instance() {
	::protobuf_game_2eproto::InitDefaultsLoginReq();
	return *internal_default_instance();
}

LoginReq* LoginReq::New(::google::protobuf::Arena* arena) const {
	LoginReq* n = new LoginReq;
	if (arena != NULL) {
		arena->Own(n);
	}
	return n;
}

void LoginReq::Clear() {
	// @@protoc_insertion_point(message_clear_start:LoginReq)
	::google::protobuf::uint32 cached_has_bits = 0;
	// Prevent compiler warnings about cached_has_bits being unused
	(void)cached_has_bits;

	cached_has_bits = _has_bits_[0];
	if (cached_has_bits & 3u) {
		if (cached_has_bits & 0x00000001u) {
			GOOGLE_DCHECK(!name_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
			(*name_.UnsafeRawStringPointer())->clear();
		}
		if (cached_has_bits & 0x00000002u) {
			GOOGLE_DCHECK(!email_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
			(*email_.UnsafeRawStringPointer())->clear();
		}
	}
	if (cached_has_bits & 12u) {
		::memset(&age_, 0, static_cast<size_t>(
			reinterpret_cast<char*>(&int_set_) -
			reinterpret_cast<char*>(&age_)) + sizeof(int_set_));
	}
	_has_bits_.Clear();
	_internal_metadata_.Clear();
}

bool LoginReq::MergePartialFromCodedStream(
	::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
	::google::protobuf::uint32 tag;
	// @@protoc_insertion_point(parse_start:LoginReq)
	for (;;) {
		::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
		tag = p.first;
		if (!p.second) goto handle_unusual;
		switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
			// required string name = 1;
		case 1: {
			if (static_cast< ::google::protobuf::uint8>(tag) ==
				static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
				DO_(::google::protobuf::internal::WireFormatLite::ReadString(
					input, this->mutable_name()));
				::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
					this->name().data(), static_cast<int>(this->name().length()),
					::google::protobuf::internal::WireFormat::PARSE,
					"LoginReq.name");
			}
			else {
				goto handle_unusual;
			}
			break;
		}

				// required int32 age = 2;
		case 2: {
			if (static_cast< ::google::protobuf::uint8>(tag) ==
				static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {
				set_has_age();
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
						input, &age_)));
			}
			else {
				goto handle_unusual;
			}
			break;
		}

				// required string email = 3;
		case 3: {
			if (static_cast< ::google::protobuf::uint8>(tag) ==
				static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
				DO_(::google::protobuf::internal::WireFormatLite::ReadString(
					input, this->mutable_email()));
				::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
					this->email().data(), static_cast<int>(this->email().length()),
					::google::protobuf::internal::WireFormat::PARSE,
					"LoginReq.email");
			}
			else {
				goto handle_unusual;
			}
			break;
		}

				// required int32 int_set = 4;
		case 4: {
			if (static_cast< ::google::protobuf::uint8>(tag) ==
				static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {
				set_has_int_set();
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
						input, &int_set_)));
			}
			else {
				goto handle_unusual;
			}
			break;
		}

		default: {
		handle_unusual:
			if (tag == 0) {
				goto success;
			}
			DO_(::google::protobuf::internal::WireFormat::SkipField(
				input, tag, _internal_metadata_.mutable_unknown_fields()));
			break;
		}
		}
	}
success:
	// @@protoc_insertion_point(parse_success:LoginReq)
	return true;
failure:
	// @@protoc_insertion_point(parse_failure:LoginReq)
	return false;
#undef DO_
}

void LoginReq::SerializeWithCachedSizes(
	::google::protobuf::io::CodedOutputStream* output) const {
	// @@protoc_insertion_point(serialize_start:LoginReq)
	::google::protobuf::uint32 cached_has_bits = 0;
	(void)cached_has_bits;

	cached_has_bits = _has_bits_[0];
	// required string name = 1;
	if (cached_has_bits & 0x00000001u) {
		::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
			this->name().data(), static_cast<int>(this->name().length()),
			::google::protobuf::internal::WireFormat::SERIALIZE,
			"LoginReq.name");
		::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
			1, this->name(), output);
	}

	// required int32 age = 2;
	if (cached_has_bits & 0x00000004u) {
		::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->age(), output);
	}

	// required string email = 3;
	if (cached_has_bits & 0x00000002u) {
		::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
			this->email().data(), static_cast<int>(this->email().length()),
			::google::protobuf::internal::WireFormat::SERIALIZE,
			"LoginReq.email");
		::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
			3, this->email(), output);
	}

	// required int32 int_set = 4;
	if (cached_has_bits & 0x00000008u) {
		::google::protobuf::internal::WireFormatLite::WriteInt32(4, this->int_set(), output);
	}

	if (_internal_metadata_.have_unknown_fields()) {
		::google::protobuf::internal::WireFormat::SerializeUnknownFields(
			_internal_metadata_.unknown_fields(), output);
	}
	// @@protoc_insertion_point(serialize_end:LoginReq)
}

::google::protobuf::uint8* LoginReq::InternalSerializeWithCachedSizesToArray(
	bool deterministic, ::google::protobuf::uint8* target) const {
	(void)deterministic; // Unused
						 // @@protoc_insertion_point(serialize_to_array_start:LoginReq)
	::google::protobuf::uint32 cached_has_bits = 0;
	(void)cached_has_bits;

	cached_has_bits = _has_bits_[0];
	// required string name = 1;
	if (cached_has_bits & 0x00000001u) {
		::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
			this->name().data(), static_cast<int>(this->name().length()),
			::google::protobuf::internal::WireFormat::SERIALIZE,
			"LoginReq.name");
		target =
			::google::protobuf::internal::WireFormatLite::WriteStringToArray(
				1, this->name(), target);
	}

	// required int32 age = 2;
	if (cached_has_bits & 0x00000004u) {
		target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->age(), target);
	}

	// required string email = 3;
	if (cached_has_bits & 0x00000002u) {
		::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
			this->email().data(), static_cast<int>(this->email().length()),
			::google::protobuf::internal::WireFormat::SERIALIZE,
			"LoginReq.email");
		target =
			::google::protobuf::internal::WireFormatLite::WriteStringToArray(
				3, this->email(), target);
	}

	// required int32 int_set = 4;
	if (cached_has_bits & 0x00000008u) {
		target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(4, this->int_set(), target);
	}

	if (_internal_metadata_.have_unknown_fields()) {
		target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
			_internal_metadata_.unknown_fields(), target);
	}
	// @@protoc_insertion_point(serialize_to_array_end:LoginReq)
	return target;
}

size_t LoginReq::RequiredFieldsByteSizeFallback() const {
	// @@protoc_insertion_point(required_fields_byte_size_fallback_start:LoginReq)
	size_t total_size = 0;

	if (has_name()) {
		// required string name = 1;
		total_size += 1 +
			::google::protobuf::internal::WireFormatLite::StringSize(
				this->name());
	}

	if (has_email()) {
		// required string email = 3;
		total_size += 1 +
			::google::protobuf::internal::WireFormatLite::StringSize(
				this->email());
	}

	if (has_age()) {
		// required int32 age = 2;
		total_size += 1 +
			::google::protobuf::internal::WireFormatLite::Int32Size(
				this->age());
	}

	if (has_int_set()) {
		// required int32 int_set = 4;
		total_size += 1 +
			::google::protobuf::internal::WireFormatLite::Int32Size(
				this->int_set());
	}

	return total_size;
}
size_t LoginReq::ByteSizeLong() const {
	// @@protoc_insertion_point(message_byte_size_start:LoginReq)
	size_t total_size = 0;

	if (_internal_metadata_.have_unknown_fields()) {
		total_size +=
			::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
				_internal_metadata_.unknown_fields());
	}
	if (((_has_bits_[0] & 0x0000000f) ^ 0x0000000f) == 0) {  // All required fields are present.
															 // required string name = 1;
		total_size += 1 +
			::google::protobuf::internal::WireFormatLite::StringSize(
				this->name());

		// required string email = 3;
		total_size += 1 +
			::google::protobuf::internal::WireFormatLite::StringSize(
				this->email());

		// required int32 age = 2;
		total_size += 1 +
			::google::protobuf::internal::WireFormatLite::Int32Size(
				this->age());

		// required int32 int_set = 4;
		total_size += 1 +
			::google::protobuf::internal::WireFormatLite::Int32Size(
				this->int_set());

	}
	else {
		total_size += RequiredFieldsByteSizeFallback();
	}
	int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = cached_size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
	return total_size;
}

void LoginReq::MergeFrom(const ::google::protobuf::Message& from) {
	// @@protoc_insertion_point(generalized_merge_from_start:LoginReq)
	GOOGLE_DCHECK_NE(&from, this);
	const LoginReq* source =
		::google::protobuf::internal::DynamicCastToGenerated<const LoginReq>(
			&from);
	if (source == NULL) {
		// @@protoc_insertion_point(generalized_merge_from_cast_fail:LoginReq)
		::google::protobuf::internal::ReflectionOps::Merge(from, this);
	}
	else {
		// @@protoc_insertion_point(generalized_merge_from_cast_success:LoginReq)
		MergeFrom(*source);
	}
}

void LoginReq::MergeFrom(const LoginReq& from) {
	// @@protoc_insertion_point(class_specific_merge_from_start:LoginReq)
	GOOGLE_DCHECK_NE(&from, this);
	_internal_metadata_.MergeFrom(from._internal_metadata_);
	::google::protobuf::uint32 cached_has_bits = 0;
	(void)cached_has_bits;

	cached_has_bits = from._has_bits_[0];
	if (cached_has_bits & 15u) {
		if (cached_has_bits & 0x00000001u) {
			set_has_name();
			name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
		}
		if (cached_has_bits & 0x00000002u) {
			set_has_email();
			email_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.email_);
		}
		if (cached_has_bits & 0x00000004u) {
			age_ = from.age_;
		}
		if (cached_has_bits & 0x00000008u) {
			int_set_ = from.int_set_;
		}
		_has_bits_[0] |= cached_has_bits;
	}
}

void LoginReq::CopyFrom(const ::google::protobuf::Message& from) {
	// @@protoc_insertion_point(generalized_copy_from_start:LoginReq)
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

void LoginReq::CopyFrom(const LoginReq& from) {
	// @@protoc_insertion_point(class_specific_copy_from_start:LoginReq)
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

bool LoginReq::IsInitialized() const {
	if ((_has_bits_[0] & 0x0000000f) != 0x0000000f) return false;
	return true;
}

void LoginReq::Swap(LoginReq* other) {
	if (other == this) return;
	InternalSwap(other);
}
void LoginReq::InternalSwap(LoginReq* other) {
	using std::swap;
	name_.Swap(&other->name_);
	email_.Swap(&other->email_);
	swap(age_, other->age_);
	swap(int_set_, other->int_set_);
	swap(_has_bits_[0], other->_has_bits_[0]);
	_internal_metadata_.Swap(&other->_internal_metadata_);
	swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata LoginReq::GetMetadata() const {
	protobuf_game_2eproto::protobuf_AssignDescriptorsOnce();
	return ::protobuf_game_2eproto::file_level_metadata[kIndexInFileMessages];
}


// ===================================================================

void LoginRes::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int LoginRes::kStatusFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

LoginRes::LoginRes()
	: ::google::protobuf::Message(), _internal_metadata_(NULL) {
	if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
		::protobuf_game_2eproto::InitDefaultsLoginRes();
	}
	SharedCtor();
	// @@protoc_insertion_point(constructor:LoginRes)
}
LoginRes::LoginRes(const LoginRes& from)
	: ::google::protobuf::Message(),
	_internal_metadata_(NULL),
	_has_bits_(from._has_bits_),
	_cached_size_(0) {
	_internal_metadata_.MergeFrom(from._internal_metadata_);
	status_ = from.status_;
	// @@protoc_insertion_point(copy_constructor:LoginRes)
}

void LoginRes::SharedCtor() {
	_cached_size_ = 0;
	status_ = 0;
}

LoginRes::~LoginRes() {
	// @@protoc_insertion_point(destructor:LoginRes)
	SharedDtor();
}

void LoginRes::SharedDtor() {
}

void LoginRes::SetCachedSize(int size) const {
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* LoginRes::descriptor() {
	::protobuf_game_2eproto::protobuf_AssignDescriptorsOnce();
	return ::protobuf_game_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const LoginRes& LoginRes::default_instance() {
	::protobuf_game_2eproto::InitDefaultsLoginRes();
	return *internal_default_instance();
}

LoginRes* LoginRes::New(::google::protobuf::Arena* arena) const {
	LoginRes* n = new LoginRes;
	if (arena != NULL) {
		arena->Own(n);
	}
	return n;
}

void LoginRes::Clear() {
	// @@protoc_insertion_point(message_clear_start:LoginRes)
	::google::protobuf::uint32 cached_has_bits = 0;
	// Prevent compiler warnings about cached_has_bits being unused
	(void)cached_has_bits;

	status_ = 0;
	_has_bits_.Clear();
	_internal_metadata_.Clear();
}

bool LoginRes::MergePartialFromCodedStream(
	::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
	::google::protobuf::uint32 tag;
	// @@protoc_insertion_point(parse_start:LoginRes)
	for (;;) {
		::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
		tag = p.first;
		if (!p.second) goto handle_unusual;
		switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
			// required int32 status = 1;
		case 1: {
			if (static_cast< ::google::protobuf::uint8>(tag) ==
				static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {
				set_has_status();
				DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
					::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
						input, &status_)));
			}
			else {
				goto handle_unusual;
			}
			break;
		}

		default: {
		handle_unusual:
			if (tag == 0) {
				goto success;
			}
			DO_(::google::protobuf::internal::WireFormat::SkipField(
				input, tag, _internal_metadata_.mutable_unknown_fields()));
			break;
		}
		}
	}
success:
	// @@protoc_insertion_point(parse_success:LoginRes)
	return true;
failure:
	// @@protoc_insertion_point(parse_failure:LoginRes)
	return false;
#undef DO_
}

void LoginRes::SerializeWithCachedSizes(
	::google::protobuf::io::CodedOutputStream* output) const {
	// @@protoc_insertion_point(serialize_start:LoginRes)
	::google::protobuf::uint32 cached_has_bits = 0;
	(void)cached_has_bits;

	cached_has_bits = _has_bits_[0];
	// required int32 status = 1;
	if (cached_has_bits & 0x00000001u) {
		::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->status(), output);
	}

	if (_internal_metadata_.have_unknown_fields()) {
		::google::protobuf::internal::WireFormat::SerializeUnknownFields(
			_internal_metadata_.unknown_fields(), output);
	}
	// @@protoc_insertion_point(serialize_end:LoginRes)
}

::google::protobuf::uint8* LoginRes::InternalSerializeWithCachedSizesToArray(
	bool deterministic, ::google::protobuf::uint8* target) const {
	(void)deterministic; // Unused
						 // @@protoc_insertion_point(serialize_to_array_start:LoginRes)
	::google::protobuf::uint32 cached_has_bits = 0;
	(void)cached_has_bits;

	cached_has_bits = _has_bits_[0];
	// required int32 status = 1;
	if (cached_has_bits & 0x00000001u) {
		target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->status(), target);
	}

	if (_internal_metadata_.have_unknown_fields()) {
		target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
			_internal_metadata_.unknown_fields(), target);
	}
	// @@protoc_insertion_point(serialize_to_array_end:LoginRes)
	return target;
}

size_t LoginRes::ByteSizeLong() const {
	// @@protoc_insertion_point(message_byte_size_start:LoginRes)
	size_t total_size = 0;

	if (_internal_metadata_.have_unknown_fields()) {
		total_size +=
			::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
				_internal_metadata_.unknown_fields());
	}
	// required int32 status = 1;
	if (has_status()) {
		total_size += 1 +
			::google::protobuf::internal::WireFormatLite::Int32Size(
				this->status());
	}
	int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
	GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
	_cached_size_ = cached_size;
	GOOGLE_SAFE_CONCURRENT_WRITES_END();
	return total_size;
}

void LoginRes::MergeFrom(const ::google::protobuf::Message& from) {
	// @@protoc_insertion_point(generalized_merge_from_start:LoginRes)
	GOOGLE_DCHECK_NE(&from, this);
	const LoginRes* source =
		::google::protobuf::internal::DynamicCastToGenerated<const LoginRes>(
			&from);
	if (source == NULL) {
		// @@protoc_insertion_point(generalized_merge_from_cast_fail:LoginRes)
		::google::protobuf::internal::ReflectionOps::Merge(from, this);
	}
	else {
		// @@protoc_insertion_point(generalized_merge_from_cast_success:LoginRes)
		MergeFrom(*source);
	}
}

void LoginRes::MergeFrom(const LoginRes& from) {
	// @@protoc_insertion_point(class_specific_merge_from_start:LoginRes)
	GOOGLE_DCHECK_NE(&from, this);
	_internal_metadata_.MergeFrom(from._internal_metadata_);
	::google::protobuf::uint32 cached_has_bits = 0;
	(void)cached_has_bits;

	if (from.has_status()) {
		set_status(from.status());
	}
}

void LoginRes::CopyFrom(const ::google::protobuf::Message& from) {
	// @@protoc_insertion_point(generalized_copy_from_start:LoginRes)
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

void LoginRes::CopyFrom(const LoginRes& from) {
	// @@protoc_insertion_point(class_specific_copy_from_start:LoginRes)
	if (&from == this) return;
	Clear();
	MergeFrom(from);
}

bool LoginRes::IsInitialized() const {
	if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;
	return true;
}

void LoginRes::Swap(LoginRes* other) {
	if (other == this) return;
	InternalSwap(other);
}
void LoginRes::InternalSwap(LoginRes* other) {
	using std::swap;
	swap(status_, other->status_);
	swap(_has_bits_[0], other->_has_bits_[0]);
	_internal_metadata_.Swap(&other->_internal_metadata_);
	swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata LoginRes::GetMetadata() const {
	protobuf_game_2eproto::protobuf_AssignDescriptorsOnce();
	return ::protobuf_game_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
