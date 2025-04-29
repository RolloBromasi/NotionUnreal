// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NotionSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NOTIONUNREAL_NotionSettings_generated_h
#error "NotionSettings.generated.h already included, missing '#pragma once' in NotionSettings.h"
#endif
#define NOTIONUNREAL_NotionSettings_generated_h

#define FID_Caen1936_Plugins_NotionUnreal_Source_NotionUnreal_Public_NotionSettings_h_51_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNotionUser_Statics; \
	NOTIONUNREAL_API static class UScriptStruct* StaticStruct();


template<> NOTIONUNREAL_API UScriptStruct* StaticStruct<struct FNotionUser>();

#define FID_Caen1936_Plugins_NotionUnreal_Source_NotionUnreal_Public_NotionSettings_h_69_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNotionSelection_Statics; \
	NOTIONUNREAL_API static class UScriptStruct* StaticStruct();


template<> NOTIONUNREAL_API UScriptStruct* StaticStruct<struct FNotionSelection>();

#define FID_Caen1936_Plugins_NotionUnreal_Source_NotionUnreal_Public_NotionSettings_h_85_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNotionProperty_Statics; \
	NOTIONUNREAL_API static class UScriptStruct* StaticStruct();


template<> NOTIONUNREAL_API UScriptStruct* StaticStruct<struct FNotionProperty>();

#define FID_Caen1936_Plugins_NotionUnreal_Source_NotionUnreal_Public_NotionSettings_h_119_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNotionKeyInfo_Statics; \
	NOTIONUNREAL_API static class UScriptStruct* StaticStruct();


template<> NOTIONUNREAL_API UScriptStruct* StaticStruct<struct FNotionKeyInfo>();

#define FID_Caen1936_Plugins_NotionUnreal_Source_NotionUnreal_Public_NotionSettings_h_155_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNotionSettings(); \
	friend struct Z_Construct_UClass_UNotionSettings_Statics; \
public: \
	DECLARE_CLASS(UNotionSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/NotionUnreal"), NO_API) \
	DECLARE_SERIALIZER(UNotionSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Notion");} \



#define FID_Caen1936_Plugins_NotionUnreal_Source_NotionUnreal_Public_NotionSettings_h_155_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNotionSettings(UNotionSettings&&); \
	UNotionSettings(const UNotionSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNotionSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNotionSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNotionSettings) \
	NO_API virtual ~UNotionSettings();


#define FID_Caen1936_Plugins_NotionUnreal_Source_NotionUnreal_Public_NotionSettings_h_152_PROLOG
#define FID_Caen1936_Plugins_NotionUnreal_Source_NotionUnreal_Public_NotionSettings_h_155_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Caen1936_Plugins_NotionUnreal_Source_NotionUnreal_Public_NotionSettings_h_155_INCLASS_NO_PURE_DECLS \
	FID_Caen1936_Plugins_NotionUnreal_Source_NotionUnreal_Public_NotionSettings_h_155_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NOTIONUNREAL_API UClass* StaticClass<class UNotionSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Caen1936_Plugins_NotionUnreal_Source_NotionUnreal_Public_NotionSettings_h


#define FOREACH_ENUM_ENOTIONPROPERTYTYPE(op) \
	op(ENotionPropertyType::Checkbox) \
	op(ENotionPropertyType::Email) \
	op(ENotionPropertyType::Multi_Select) \
	op(ENotionPropertyType::Number) \
	op(ENotionPropertyType::People) \
	op(ENotionPropertyType::Phone_Number) \
	op(ENotionPropertyType::Rich_Text) \
	op(ENotionPropertyType::Select) \
	op(ENotionPropertyType::Status) \
	op(ENotionPropertyType::Url) \
	op(ENotionPropertyType::Date) 

enum class ENotionPropertyType : uint8;
template<> struct TIsUEnumClass<ENotionPropertyType> { enum { Value = true }; };
template<> NOTIONUNREAL_API UEnum* StaticEnum<ENotionPropertyType>();

#define FOREACH_ENUM_ENOTIONSCREENPOSITION(op) \
	op(ENotionScreenPosition::TopLeft) \
	op(ENotionScreenPosition::Top) \
	op(ENotionScreenPosition::TopRight) \
	op(ENotionScreenPosition::Right) \
	op(ENotionScreenPosition::BottomRight) \
	op(ENotionScreenPosition::Bottom) \
	op(ENotionScreenPosition::BottomLeft) \
	op(ENotionScreenPosition::Left) 

enum class ENotionScreenPosition : uint8;
template<> struct TIsUEnumClass<ENotionScreenPosition> { enum { Value = true }; };
template<> NOTIONUNREAL_API UEnum* StaticEnum<ENotionScreenPosition>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
