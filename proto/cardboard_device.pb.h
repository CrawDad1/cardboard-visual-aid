// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cardboard_device.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_cardboard_5fdevice_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_cardboard_5fdevice_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3018000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3018000 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_util.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_cardboard_5fdevice_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_cardboard_5fdevice_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
namespace cardboard {
class DeviceParams;
struct DeviceParamsDefaultTypeInternal;
extern DeviceParamsDefaultTypeInternal _DeviceParams_default_instance_;
}  // namespace cardboard
PROTOBUF_NAMESPACE_OPEN
template<> ::cardboard::DeviceParams* Arena::CreateMaybeMessage<::cardboard::DeviceParams>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace cardboard {

enum DeviceParams_VerticalAlignmentType : int {
  DeviceParams_VerticalAlignmentType_BOTTOM = 0,
  DeviceParams_VerticalAlignmentType_CENTER = 1,
  DeviceParams_VerticalAlignmentType_TOP = 2
};
bool DeviceParams_VerticalAlignmentType_IsValid(int value);
constexpr DeviceParams_VerticalAlignmentType DeviceParams_VerticalAlignmentType_VerticalAlignmentType_MIN = DeviceParams_VerticalAlignmentType_BOTTOM;
constexpr DeviceParams_VerticalAlignmentType DeviceParams_VerticalAlignmentType_VerticalAlignmentType_MAX = DeviceParams_VerticalAlignmentType_TOP;
constexpr int DeviceParams_VerticalAlignmentType_VerticalAlignmentType_ARRAYSIZE = DeviceParams_VerticalAlignmentType_VerticalAlignmentType_MAX + 1;

const std::string& DeviceParams_VerticalAlignmentType_Name(DeviceParams_VerticalAlignmentType value);
template<typename T>
inline const std::string& DeviceParams_VerticalAlignmentType_Name(T enum_t_value) {
  static_assert(::std::is_same<T, DeviceParams_VerticalAlignmentType>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function DeviceParams_VerticalAlignmentType_Name.");
  return DeviceParams_VerticalAlignmentType_Name(static_cast<DeviceParams_VerticalAlignmentType>(enum_t_value));
}
bool DeviceParams_VerticalAlignmentType_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, DeviceParams_VerticalAlignmentType* value);
enum DeviceParams_ButtonType : int {
  DeviceParams_ButtonType_NONE = 0,
  DeviceParams_ButtonType_MAGNET = 1,
  DeviceParams_ButtonType_TOUCH = 2,
  DeviceParams_ButtonType_INDIRECT_TOUCH = 3
};
bool DeviceParams_ButtonType_IsValid(int value);
constexpr DeviceParams_ButtonType DeviceParams_ButtonType_ButtonType_MIN = DeviceParams_ButtonType_NONE;
constexpr DeviceParams_ButtonType DeviceParams_ButtonType_ButtonType_MAX = DeviceParams_ButtonType_INDIRECT_TOUCH;
constexpr int DeviceParams_ButtonType_ButtonType_ARRAYSIZE = DeviceParams_ButtonType_ButtonType_MAX + 1;

const std::string& DeviceParams_ButtonType_Name(DeviceParams_ButtonType value);
template<typename T>
inline const std::string& DeviceParams_ButtonType_Name(T enum_t_value) {
  static_assert(::std::is_same<T, DeviceParams_ButtonType>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function DeviceParams_ButtonType_Name.");
  return DeviceParams_ButtonType_Name(static_cast<DeviceParams_ButtonType>(enum_t_value));
}
bool DeviceParams_ButtonType_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, DeviceParams_ButtonType* value);
// ===================================================================

class DeviceParams final :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:cardboard.DeviceParams) */ {
 public:
  inline DeviceParams() : DeviceParams(nullptr) {}
  ~DeviceParams() override;
  explicit constexpr DeviceParams(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  DeviceParams(const DeviceParams& from);
  DeviceParams(DeviceParams&& from) noexcept
    : DeviceParams() {
    *this = ::std::move(from);
  }

  inline DeviceParams& operator=(const DeviceParams& from) {
    CopyFrom(from);
    return *this;
  }
  inline DeviceParams& operator=(DeviceParams&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const std::string& unknown_fields() const {
    return _internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString);
  }
  inline std::string* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<std::string>();
  }

  static const DeviceParams& default_instance() {
    return *internal_default_instance();
  }
  static inline const DeviceParams* internal_default_instance() {
    return reinterpret_cast<const DeviceParams*>(
               &_DeviceParams_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(DeviceParams& a, DeviceParams& b) {
    a.Swap(&b);
  }
  inline void Swap(DeviceParams* other) {
    if (other == this) return;
    if (GetOwningArena() == other->GetOwningArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(DeviceParams* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline DeviceParams* New() const final {
    return new DeviceParams();
  }

  DeviceParams* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<DeviceParams>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)  final;
  void CopyFrom(const DeviceParams& from);
  void MergeFrom(const DeviceParams& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  void DiscardUnknownFields();
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(DeviceParams* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "cardboard.DeviceParams";
  }
  protected:
  explicit DeviceParams(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  typedef DeviceParams_VerticalAlignmentType VerticalAlignmentType;
  static constexpr VerticalAlignmentType BOTTOM =
    DeviceParams_VerticalAlignmentType_BOTTOM;
  static constexpr VerticalAlignmentType CENTER =
    DeviceParams_VerticalAlignmentType_CENTER;
  static constexpr VerticalAlignmentType TOP =
    DeviceParams_VerticalAlignmentType_TOP;
  static inline bool VerticalAlignmentType_IsValid(int value) {
    return DeviceParams_VerticalAlignmentType_IsValid(value);
  }
  static constexpr VerticalAlignmentType VerticalAlignmentType_MIN =
    DeviceParams_VerticalAlignmentType_VerticalAlignmentType_MIN;
  static constexpr VerticalAlignmentType VerticalAlignmentType_MAX =
    DeviceParams_VerticalAlignmentType_VerticalAlignmentType_MAX;
  static constexpr int VerticalAlignmentType_ARRAYSIZE =
    DeviceParams_VerticalAlignmentType_VerticalAlignmentType_ARRAYSIZE;
  template<typename T>
  static inline const std::string& VerticalAlignmentType_Name(T enum_t_value) {
    static_assert(::std::is_same<T, VerticalAlignmentType>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function VerticalAlignmentType_Name.");
    return DeviceParams_VerticalAlignmentType_Name(enum_t_value);
  }
  static inline bool VerticalAlignmentType_Parse(::PROTOBUF_NAMESPACE_ID::ConstStringParam name,
      VerticalAlignmentType* value) {
    return DeviceParams_VerticalAlignmentType_Parse(name, value);
  }

  typedef DeviceParams_ButtonType ButtonType;
  static constexpr ButtonType NONE =
    DeviceParams_ButtonType_NONE;
  static constexpr ButtonType MAGNET =
    DeviceParams_ButtonType_MAGNET;
  static constexpr ButtonType TOUCH =
    DeviceParams_ButtonType_TOUCH;
  static constexpr ButtonType INDIRECT_TOUCH =
    DeviceParams_ButtonType_INDIRECT_TOUCH;
  static inline bool ButtonType_IsValid(int value) {
    return DeviceParams_ButtonType_IsValid(value);
  }
  static constexpr ButtonType ButtonType_MIN =
    DeviceParams_ButtonType_ButtonType_MIN;
  static constexpr ButtonType ButtonType_MAX =
    DeviceParams_ButtonType_ButtonType_MAX;
  static constexpr int ButtonType_ARRAYSIZE =
    DeviceParams_ButtonType_ButtonType_ARRAYSIZE;
  template<typename T>
  static inline const std::string& ButtonType_Name(T enum_t_value) {
    static_assert(::std::is_same<T, ButtonType>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function ButtonType_Name.");
    return DeviceParams_ButtonType_Name(enum_t_value);
  }
  static inline bool ButtonType_Parse(::PROTOBUF_NAMESPACE_ID::ConstStringParam name,
      ButtonType* value) {
    return DeviceParams_ButtonType_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kLeftEyeFieldOfViewAnglesFieldNumber = 5,
    kDistortionCoefficientsFieldNumber = 7,
    kVendorFieldNumber = 1,
    kModelFieldNumber = 2,
    kScreenToLensDistanceFieldNumber = 3,
    kInterLensDistanceFieldNumber = 4,
    kTrayToLensDistanceFieldNumber = 6,
    kVerticalAlignmentFieldNumber = 11,
    kPrimaryButtonFieldNumber = 12,
  };
  // repeated float left_eye_field_of_view_angles = 5 [packed = true];
  int left_eye_field_of_view_angles_size() const;
  private:
  int _internal_left_eye_field_of_view_angles_size() const;
  public:
  void clear_left_eye_field_of_view_angles();
  private:
  float _internal_left_eye_field_of_view_angles(int index) const;
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >&
      _internal_left_eye_field_of_view_angles() const;
  void _internal_add_left_eye_field_of_view_angles(float value);
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >*
      _internal_mutable_left_eye_field_of_view_angles();
  public:
  float left_eye_field_of_view_angles(int index) const;
  void set_left_eye_field_of_view_angles(int index, float value);
  void add_left_eye_field_of_view_angles(float value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >&
      left_eye_field_of_view_angles() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >*
      mutable_left_eye_field_of_view_angles();

  // repeated float distortion_coefficients = 7 [packed = true];
  int distortion_coefficients_size() const;
  private:
  int _internal_distortion_coefficients_size() const;
  public:
  void clear_distortion_coefficients();
  private:
  float _internal_distortion_coefficients(int index) const;
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >&
      _internal_distortion_coefficients() const;
  void _internal_add_distortion_coefficients(float value);
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >*
      _internal_mutable_distortion_coefficients();
  public:
  float distortion_coefficients(int index) const;
  void set_distortion_coefficients(int index, float value);
  void add_distortion_coefficients(float value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >&
      distortion_coefficients() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >*
      mutable_distortion_coefficients();

  // optional string vendor = 1;
  bool has_vendor() const;
  private:
  bool _internal_has_vendor() const;
  public:
  void clear_vendor();
  const std::string& vendor() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_vendor(ArgT0&& arg0, ArgT... args);
  std::string* mutable_vendor();
  PROTOBUF_MUST_USE_RESULT std::string* release_vendor();
  void set_allocated_vendor(std::string* vendor);
  private:
  const std::string& _internal_vendor() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_vendor(const std::string& value);
  std::string* _internal_mutable_vendor();
  public:

  // optional string model = 2;
  bool has_model() const;
  private:
  bool _internal_has_model() const;
  public:
  void clear_model();
  const std::string& model() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_model(ArgT0&& arg0, ArgT... args);
  std::string* mutable_model();
  PROTOBUF_MUST_USE_RESULT std::string* release_model();
  void set_allocated_model(std::string* model);
  private:
  const std::string& _internal_model() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_model(const std::string& value);
  std::string* _internal_mutable_model();
  public:

  // optional float screen_to_lens_distance = 3;
  bool has_screen_to_lens_distance() const;
  private:
  bool _internal_has_screen_to_lens_distance() const;
  public:
  void clear_screen_to_lens_distance();
  float screen_to_lens_distance() const;
  void set_screen_to_lens_distance(float value);
  private:
  float _internal_screen_to_lens_distance() const;
  void _internal_set_screen_to_lens_distance(float value);
  public:

  // optional float inter_lens_distance = 4;
  bool has_inter_lens_distance() const;
  private:
  bool _internal_has_inter_lens_distance() const;
  public:
  void clear_inter_lens_distance();
  float inter_lens_distance() const;
  void set_inter_lens_distance(float value);
  private:
  float _internal_inter_lens_distance() const;
  void _internal_set_inter_lens_distance(float value);
  public:

  // optional float tray_to_lens_distance = 6;
  bool has_tray_to_lens_distance() const;
  private:
  bool _internal_has_tray_to_lens_distance() const;
  public:
  void clear_tray_to_lens_distance();
  float tray_to_lens_distance() const;
  void set_tray_to_lens_distance(float value);
  private:
  float _internal_tray_to_lens_distance() const;
  void _internal_set_tray_to_lens_distance(float value);
  public:

  // optional .cardboard.DeviceParams.VerticalAlignmentType vertical_alignment = 11 [default = BOTTOM];
  bool has_vertical_alignment() const;
  private:
  bool _internal_has_vertical_alignment() const;
  public:
  void clear_vertical_alignment();
  ::cardboard::DeviceParams_VerticalAlignmentType vertical_alignment() const;
  void set_vertical_alignment(::cardboard::DeviceParams_VerticalAlignmentType value);
  private:
  ::cardboard::DeviceParams_VerticalAlignmentType _internal_vertical_alignment() const;
  void _internal_set_vertical_alignment(::cardboard::DeviceParams_VerticalAlignmentType value);
  public:

  // optional .cardboard.DeviceParams.ButtonType primary_button = 12 [default = MAGNET];
  bool has_primary_button() const;
  private:
  bool _internal_has_primary_button() const;
  public:
  void clear_primary_button();
  ::cardboard::DeviceParams_ButtonType primary_button() const;
  void set_primary_button(::cardboard::DeviceParams_ButtonType value);
  private:
  ::cardboard::DeviceParams_ButtonType _internal_primary_button() const;
  void _internal_set_primary_button(::cardboard::DeviceParams_ButtonType value);
  public:

  // @@protoc_insertion_point(class_scope:cardboard.DeviceParams)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< float > left_eye_field_of_view_angles_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< float > distortion_coefficients_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr vendor_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr model_;
  float screen_to_lens_distance_;
  float inter_lens_distance_;
  float tray_to_lens_distance_;
  int vertical_alignment_;
  int primary_button_;
  friend struct ::TableStruct_cardboard_5fdevice_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// DeviceParams

// optional string vendor = 1;
inline bool DeviceParams::_internal_has_vendor() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool DeviceParams::has_vendor() const {
  return _internal_has_vendor();
}
inline void DeviceParams::clear_vendor() {
  vendor_.ClearToEmpty();
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& DeviceParams::vendor() const {
  // @@protoc_insertion_point(field_get:cardboard.DeviceParams.vendor)
  return _internal_vendor();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void DeviceParams::set_vendor(ArgT0&& arg0, ArgT... args) {
 _has_bits_[0] |= 0x00000001u;
 vendor_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:cardboard.DeviceParams.vendor)
}
inline std::string* DeviceParams::mutable_vendor() {
  std::string* _s = _internal_mutable_vendor();
  // @@protoc_insertion_point(field_mutable:cardboard.DeviceParams.vendor)
  return _s;
}
inline const std::string& DeviceParams::_internal_vendor() const {
  return vendor_.Get();
}
inline void DeviceParams::_internal_set_vendor(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  vendor_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* DeviceParams::_internal_mutable_vendor() {
  _has_bits_[0] |= 0x00000001u;
  return vendor_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* DeviceParams::release_vendor() {
  // @@protoc_insertion_point(field_release:cardboard.DeviceParams.vendor)
  if (!_internal_has_vendor()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return vendor_.ReleaseNonDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void DeviceParams::set_allocated_vendor(std::string* vendor) {
  if (vendor != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  vendor_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), vendor,
      GetArenaForAllocation());
  // @@protoc_insertion_point(field_set_allocated:cardboard.DeviceParams.vendor)
}

// optional string model = 2;
inline bool DeviceParams::_internal_has_model() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool DeviceParams::has_model() const {
  return _internal_has_model();
}
inline void DeviceParams::clear_model() {
  model_.ClearToEmpty();
  _has_bits_[0] &= ~0x00000002u;
}
inline const std::string& DeviceParams::model() const {
  // @@protoc_insertion_point(field_get:cardboard.DeviceParams.model)
  return _internal_model();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void DeviceParams::set_model(ArgT0&& arg0, ArgT... args) {
 _has_bits_[0] |= 0x00000002u;
 model_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:cardboard.DeviceParams.model)
}
inline std::string* DeviceParams::mutable_model() {
  std::string* _s = _internal_mutable_model();
  // @@protoc_insertion_point(field_mutable:cardboard.DeviceParams.model)
  return _s;
}
inline const std::string& DeviceParams::_internal_model() const {
  return model_.Get();
}
inline void DeviceParams::_internal_set_model(const std::string& value) {
  _has_bits_[0] |= 0x00000002u;
  model_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* DeviceParams::_internal_mutable_model() {
  _has_bits_[0] |= 0x00000002u;
  return model_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* DeviceParams::release_model() {
  // @@protoc_insertion_point(field_release:cardboard.DeviceParams.model)
  if (!_internal_has_model()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000002u;
  return model_.ReleaseNonDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void DeviceParams::set_allocated_model(std::string* model) {
  if (model != nullptr) {
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  model_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), model,
      GetArenaForAllocation());
  // @@protoc_insertion_point(field_set_allocated:cardboard.DeviceParams.model)
}

// optional float screen_to_lens_distance = 3;
inline bool DeviceParams::_internal_has_screen_to_lens_distance() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool DeviceParams::has_screen_to_lens_distance() const {
  return _internal_has_screen_to_lens_distance();
}
inline void DeviceParams::clear_screen_to_lens_distance() {
  screen_to_lens_distance_ = 0;
  _has_bits_[0] &= ~0x00000004u;
}
inline float DeviceParams::_internal_screen_to_lens_distance() const {
  return screen_to_lens_distance_;
}
inline float DeviceParams::screen_to_lens_distance() const {
  // @@protoc_insertion_point(field_get:cardboard.DeviceParams.screen_to_lens_distance)
  return _internal_screen_to_lens_distance();
}
inline void DeviceParams::_internal_set_screen_to_lens_distance(float value) {
  _has_bits_[0] |= 0x00000004u;
  screen_to_lens_distance_ = value;
}
inline void DeviceParams::set_screen_to_lens_distance(float value) {
  _internal_set_screen_to_lens_distance(value);
  // @@protoc_insertion_point(field_set:cardboard.DeviceParams.screen_to_lens_distance)
}

// optional float inter_lens_distance = 4;
inline bool DeviceParams::_internal_has_inter_lens_distance() const {
  bool value = (_has_bits_[0] & 0x00000008u) != 0;
  return value;
}
inline bool DeviceParams::has_inter_lens_distance() const {
  return _internal_has_inter_lens_distance();
}
inline void DeviceParams::clear_inter_lens_distance() {
  inter_lens_distance_ = 0;
  _has_bits_[0] &= ~0x00000008u;
}
inline float DeviceParams::_internal_inter_lens_distance() const {
  return inter_lens_distance_;
}
inline float DeviceParams::inter_lens_distance() const {
  // @@protoc_insertion_point(field_get:cardboard.DeviceParams.inter_lens_distance)
  return _internal_inter_lens_distance();
}
inline void DeviceParams::_internal_set_inter_lens_distance(float value) {
  _has_bits_[0] |= 0x00000008u;
  inter_lens_distance_ = value;
}
inline void DeviceParams::set_inter_lens_distance(float value) {
  _internal_set_inter_lens_distance(value);
  // @@protoc_insertion_point(field_set:cardboard.DeviceParams.inter_lens_distance)
}

// repeated float left_eye_field_of_view_angles = 5 [packed = true];
inline int DeviceParams::_internal_left_eye_field_of_view_angles_size() const {
  return left_eye_field_of_view_angles_.size();
}
inline int DeviceParams::left_eye_field_of_view_angles_size() const {
  return _internal_left_eye_field_of_view_angles_size();
}
inline void DeviceParams::clear_left_eye_field_of_view_angles() {
  left_eye_field_of_view_angles_.Clear();
}
inline float DeviceParams::_internal_left_eye_field_of_view_angles(int index) const {
  return left_eye_field_of_view_angles_.Get(index);
}
inline float DeviceParams::left_eye_field_of_view_angles(int index) const {
  // @@protoc_insertion_point(field_get:cardboard.DeviceParams.left_eye_field_of_view_angles)
  return _internal_left_eye_field_of_view_angles(index);
}
inline void DeviceParams::set_left_eye_field_of_view_angles(int index, float value) {
  left_eye_field_of_view_angles_.Set(index, value);
  // @@protoc_insertion_point(field_set:cardboard.DeviceParams.left_eye_field_of_view_angles)
}
inline void DeviceParams::_internal_add_left_eye_field_of_view_angles(float value) {
  left_eye_field_of_view_angles_.Add(value);
}
inline void DeviceParams::add_left_eye_field_of_view_angles(float value) {
  _internal_add_left_eye_field_of_view_angles(value);
  // @@protoc_insertion_point(field_add:cardboard.DeviceParams.left_eye_field_of_view_angles)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >&
DeviceParams::_internal_left_eye_field_of_view_angles() const {
  return left_eye_field_of_view_angles_;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >&
DeviceParams::left_eye_field_of_view_angles() const {
  // @@protoc_insertion_point(field_list:cardboard.DeviceParams.left_eye_field_of_view_angles)
  return _internal_left_eye_field_of_view_angles();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >*
DeviceParams::_internal_mutable_left_eye_field_of_view_angles() {
  return &left_eye_field_of_view_angles_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >*
DeviceParams::mutable_left_eye_field_of_view_angles() {
  // @@protoc_insertion_point(field_mutable_list:cardboard.DeviceParams.left_eye_field_of_view_angles)
  return _internal_mutable_left_eye_field_of_view_angles();
}

// optional .cardboard.DeviceParams.VerticalAlignmentType vertical_alignment = 11 [default = BOTTOM];
inline bool DeviceParams::_internal_has_vertical_alignment() const {
  bool value = (_has_bits_[0] & 0x00000020u) != 0;
  return value;
}
inline bool DeviceParams::has_vertical_alignment() const {
  return _internal_has_vertical_alignment();
}
inline void DeviceParams::clear_vertical_alignment() {
  vertical_alignment_ = 0;
  _has_bits_[0] &= ~0x00000020u;
}
inline ::cardboard::DeviceParams_VerticalAlignmentType DeviceParams::_internal_vertical_alignment() const {
  return static_cast< ::cardboard::DeviceParams_VerticalAlignmentType >(vertical_alignment_);
}
inline ::cardboard::DeviceParams_VerticalAlignmentType DeviceParams::vertical_alignment() const {
  // @@protoc_insertion_point(field_get:cardboard.DeviceParams.vertical_alignment)
  return _internal_vertical_alignment();
}
inline void DeviceParams::_internal_set_vertical_alignment(::cardboard::DeviceParams_VerticalAlignmentType value) {
  assert(::cardboard::DeviceParams_VerticalAlignmentType_IsValid(value));
  _has_bits_[0] |= 0x00000020u;
  vertical_alignment_ = value;
}
inline void DeviceParams::set_vertical_alignment(::cardboard::DeviceParams_VerticalAlignmentType value) {
  _internal_set_vertical_alignment(value);
  // @@protoc_insertion_point(field_set:cardboard.DeviceParams.vertical_alignment)
}

// optional float tray_to_lens_distance = 6;
inline bool DeviceParams::_internal_has_tray_to_lens_distance() const {
  bool value = (_has_bits_[0] & 0x00000010u) != 0;
  return value;
}
inline bool DeviceParams::has_tray_to_lens_distance() const {
  return _internal_has_tray_to_lens_distance();
}
inline void DeviceParams::clear_tray_to_lens_distance() {
  tray_to_lens_distance_ = 0;
  _has_bits_[0] &= ~0x00000010u;
}
inline float DeviceParams::_internal_tray_to_lens_distance() const {
  return tray_to_lens_distance_;
}
inline float DeviceParams::tray_to_lens_distance() const {
  // @@protoc_insertion_point(field_get:cardboard.DeviceParams.tray_to_lens_distance)
  return _internal_tray_to_lens_distance();
}
inline void DeviceParams::_internal_set_tray_to_lens_distance(float value) {
  _has_bits_[0] |= 0x00000010u;
  tray_to_lens_distance_ = value;
}
inline void DeviceParams::set_tray_to_lens_distance(float value) {
  _internal_set_tray_to_lens_distance(value);
  // @@protoc_insertion_point(field_set:cardboard.DeviceParams.tray_to_lens_distance)
}

// repeated float distortion_coefficients = 7 [packed = true];
inline int DeviceParams::_internal_distortion_coefficients_size() const {
  return distortion_coefficients_.size();
}
inline int DeviceParams::distortion_coefficients_size() const {
  return _internal_distortion_coefficients_size();
}
inline void DeviceParams::clear_distortion_coefficients() {
  distortion_coefficients_.Clear();
}
inline float DeviceParams::_internal_distortion_coefficients(int index) const {
  return distortion_coefficients_.Get(index);
}
inline float DeviceParams::distortion_coefficients(int index) const {
  // @@protoc_insertion_point(field_get:cardboard.DeviceParams.distortion_coefficients)
  return _internal_distortion_coefficients(index);
}
inline void DeviceParams::set_distortion_coefficients(int index, float value) {
  distortion_coefficients_.Set(index, value);
  // @@protoc_insertion_point(field_set:cardboard.DeviceParams.distortion_coefficients)
}
inline void DeviceParams::_internal_add_distortion_coefficients(float value) {
  distortion_coefficients_.Add(value);
}
inline void DeviceParams::add_distortion_coefficients(float value) {
  _internal_add_distortion_coefficients(value);
  // @@protoc_insertion_point(field_add:cardboard.DeviceParams.distortion_coefficients)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >&
DeviceParams::_internal_distortion_coefficients() const {
  return distortion_coefficients_;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >&
DeviceParams::distortion_coefficients() const {
  // @@protoc_insertion_point(field_list:cardboard.DeviceParams.distortion_coefficients)
  return _internal_distortion_coefficients();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >*
DeviceParams::_internal_mutable_distortion_coefficients() {
  return &distortion_coefficients_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >*
DeviceParams::mutable_distortion_coefficients() {
  // @@protoc_insertion_point(field_mutable_list:cardboard.DeviceParams.distortion_coefficients)
  return _internal_mutable_distortion_coefficients();
}

// optional .cardboard.DeviceParams.ButtonType primary_button = 12 [default = MAGNET];
inline bool DeviceParams::_internal_has_primary_button() const {
  bool value = (_has_bits_[0] & 0x00000040u) != 0;
  return value;
}
inline bool DeviceParams::has_primary_button() const {
  return _internal_has_primary_button();
}
inline void DeviceParams::clear_primary_button() {
  primary_button_ = 1;
  _has_bits_[0] &= ~0x00000040u;
}
inline ::cardboard::DeviceParams_ButtonType DeviceParams::_internal_primary_button() const {
  return static_cast< ::cardboard::DeviceParams_ButtonType >(primary_button_);
}
inline ::cardboard::DeviceParams_ButtonType DeviceParams::primary_button() const {
  // @@protoc_insertion_point(field_get:cardboard.DeviceParams.primary_button)
  return _internal_primary_button();
}
inline void DeviceParams::_internal_set_primary_button(::cardboard::DeviceParams_ButtonType value) {
  assert(::cardboard::DeviceParams_ButtonType_IsValid(value));
  _has_bits_[0] |= 0x00000040u;
  primary_button_ = value;
}
inline void DeviceParams::set_primary_button(::cardboard::DeviceParams_ButtonType value) {
  _internal_set_primary_button(value);
  // @@protoc_insertion_point(field_set:cardboard.DeviceParams.primary_button)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace cardboard

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::cardboard::DeviceParams_VerticalAlignmentType> : ::std::true_type {};
template <> struct is_proto_enum< ::cardboard::DeviceParams_ButtonType> : ::std::true_type {};

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_cardboard_5fdevice_2eproto
