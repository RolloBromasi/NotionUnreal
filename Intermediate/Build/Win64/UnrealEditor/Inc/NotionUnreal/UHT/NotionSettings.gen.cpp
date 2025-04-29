// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NotionUnreal/Public/NotionSettings.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNotionSettings() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
NOTIONUNREAL_API UClass* Z_Construct_UClass_UNotionSettings();
NOTIONUNREAL_API UClass* Z_Construct_UClass_UNotionSettings_NoRegister();
NOTIONUNREAL_API UEnum* Z_Construct_UEnum_NotionUnreal_ENotionPropertyType();
NOTIONUNREAL_API UEnum* Z_Construct_UEnum_NotionUnreal_ENotionScreenPosition();
NOTIONUNREAL_API UScriptStruct* Z_Construct_UScriptStruct_FNotionKeyInfo();
NOTIONUNREAL_API UScriptStruct* Z_Construct_UScriptStruct_FNotionProperty();
NOTIONUNREAL_API UScriptStruct* Z_Construct_UScriptStruct_FNotionSelection();
NOTIONUNREAL_API UScriptStruct* Z_Construct_UScriptStruct_FNotionUser();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ECheckBoxState();
UPackage* Z_Construct_UPackage__Script_NotionUnreal();
// End Cross Module References

// Begin Enum ENotionPropertyType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENotionPropertyType;
static UEnum* ENotionPropertyType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENotionPropertyType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENotionPropertyType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NotionUnreal_ENotionPropertyType, (UObject*)Z_Construct_UPackage__Script_NotionUnreal(), TEXT("ENotionPropertyType"));
	}
	return Z_Registration_Info_UEnum_ENotionPropertyType.OuterSingleton;
}
template<> NOTIONUNREAL_API UEnum* StaticEnum<ENotionPropertyType>()
{
	return ENotionPropertyType_StaticEnum();
}
struct Z_Construct_UEnum_NotionUnreal_ENotionPropertyType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Checkbox.Comment", "/**\n * \n */" },
		{ "Checkbox.Name", "ENotionPropertyType::Checkbox" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "Date.Comment", "/**\n * \n */" },
		{ "Date.Name", "ENotionPropertyType::Date" },
		{ "Email.Comment", "/**\n * \n */" },
		{ "Email.Name", "ENotionPropertyType::Email" },
		{ "ModuleRelativePath", "Public/NotionSettings.h" },
		{ "Multi_Select.Comment", "/**\n * \n */" },
		{ "Multi_Select.Name", "ENotionPropertyType::Multi_Select" },
		{ "Number.Comment", "/**\n * \n */" },
		{ "Number.Name", "ENotionPropertyType::Number" },
		{ "People.Comment", "/**\n * \n */" },
		{ "People.Name", "ENotionPropertyType::People" },
		{ "Phone_Number.Comment", "/**\n * \n */" },
		{ "Phone_Number.Name", "ENotionPropertyType::Phone_Number" },
		{ "Rich_Text.Comment", "/**\n * \n */" },
		{ "Rich_Text.Name", "ENotionPropertyType::Rich_Text" },
		{ "Select.Comment", "/**\n * \n */" },
		{ "Select.Name", "ENotionPropertyType::Select" },
		{ "Status.Comment", "/**\n * \n */" },
		{ "Status.Name", "ENotionPropertyType::Status" },
		{ "Url.Comment", "/**\n * \n */" },
		{ "Url.Name", "ENotionPropertyType::Url" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENotionPropertyType::Checkbox", (int64)ENotionPropertyType::Checkbox },
		{ "ENotionPropertyType::Email", (int64)ENotionPropertyType::Email },
		{ "ENotionPropertyType::Multi_Select", (int64)ENotionPropertyType::Multi_Select },
		{ "ENotionPropertyType::Number", (int64)ENotionPropertyType::Number },
		{ "ENotionPropertyType::People", (int64)ENotionPropertyType::People },
		{ "ENotionPropertyType::Phone_Number", (int64)ENotionPropertyType::Phone_Number },
		{ "ENotionPropertyType::Rich_Text", (int64)ENotionPropertyType::Rich_Text },
		{ "ENotionPropertyType::Select", (int64)ENotionPropertyType::Select },
		{ "ENotionPropertyType::Status", (int64)ENotionPropertyType::Status },
		{ "ENotionPropertyType::Url", (int64)ENotionPropertyType::Url },
		{ "ENotionPropertyType::Date", (int64)ENotionPropertyType::Date },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NotionUnreal_ENotionPropertyType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_NotionUnreal,
	nullptr,
	"ENotionPropertyType",
	"ENotionPropertyType",
	Z_Construct_UEnum_NotionUnreal_ENotionPropertyType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_NotionUnreal_ENotionPropertyType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_NotionUnreal_ENotionPropertyType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_NotionUnreal_ENotionPropertyType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_NotionUnreal_ENotionPropertyType()
{
	if (!Z_Registration_Info_UEnum_ENotionPropertyType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENotionPropertyType.InnerSingleton, Z_Construct_UEnum_NotionUnreal_ENotionPropertyType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENotionPropertyType.InnerSingleton;
}
// End Enum ENotionPropertyType

// Begin Enum ENotionScreenPosition
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENotionScreenPosition;
static UEnum* ENotionScreenPosition_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENotionScreenPosition.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENotionScreenPosition.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NotionUnreal_ENotionScreenPosition, (UObject*)Z_Construct_UPackage__Script_NotionUnreal(), TEXT("ENotionScreenPosition"));
	}
	return Z_Registration_Info_UEnum_ENotionScreenPosition.OuterSingleton;
}
template<> NOTIONUNREAL_API UEnum* StaticEnum<ENotionScreenPosition>()
{
	return ENotionScreenPosition_StaticEnum();
}
struct Z_Construct_UEnum_NotionUnreal_ENotionScreenPosition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Bottom.Name", "ENotionScreenPosition::Bottom" },
		{ "BottomLeft.Name", "ENotionScreenPosition::BottomLeft" },
		{ "BottomRight.Name", "ENotionScreenPosition::BottomRight" },
		{ "Left.Name", "ENotionScreenPosition::Left" },
		{ "ModuleRelativePath", "Public/NotionSettings.h" },
		{ "Right.Name", "ENotionScreenPosition::Right" },
		{ "Top.Name", "ENotionScreenPosition::Top" },
		{ "TopLeft.Name", "ENotionScreenPosition::TopLeft" },
		{ "TopRight.Name", "ENotionScreenPosition::TopRight" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENotionScreenPosition::TopLeft", (int64)ENotionScreenPosition::TopLeft },
		{ "ENotionScreenPosition::Top", (int64)ENotionScreenPosition::Top },
		{ "ENotionScreenPosition::TopRight", (int64)ENotionScreenPosition::TopRight },
		{ "ENotionScreenPosition::Right", (int64)ENotionScreenPosition::Right },
		{ "ENotionScreenPosition::BottomRight", (int64)ENotionScreenPosition::BottomRight },
		{ "ENotionScreenPosition::Bottom", (int64)ENotionScreenPosition::Bottom },
		{ "ENotionScreenPosition::BottomLeft", (int64)ENotionScreenPosition::BottomLeft },
		{ "ENotionScreenPosition::Left", (int64)ENotionScreenPosition::Left },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NotionUnreal_ENotionScreenPosition_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_NotionUnreal,
	nullptr,
	"ENotionScreenPosition",
	"ENotionScreenPosition",
	Z_Construct_UEnum_NotionUnreal_ENotionScreenPosition_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_NotionUnreal_ENotionScreenPosition_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_NotionUnreal_ENotionScreenPosition_Statics::Enum_MetaDataParams), Z_Construct_UEnum_NotionUnreal_ENotionScreenPosition_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_NotionUnreal_ENotionScreenPosition()
{
	if (!Z_Registration_Info_UEnum_ENotionScreenPosition.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENotionScreenPosition.InnerSingleton, Z_Construct_UEnum_NotionUnreal_ENotionScreenPosition_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENotionScreenPosition.InnerSingleton;
}
// End Enum ENotionScreenPosition

// Begin ScriptStruct FNotionUser
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NotionUser;
class UScriptStruct* FNotionUser::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NotionUser.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NotionUser.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNotionUser, (UObject*)Z_Construct_UPackage__Script_NotionUnreal(), TEXT("NotionUser"));
	}
	return Z_Registration_Info_UScriptStruct_NotionUser.OuterSingleton;
}
template<> NOTIONUNREAL_API UScriptStruct* StaticStruct<FNotionUser>()
{
	return FNotionUser::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNotionUser_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/NotionSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "DatabaseProperties" },
		{ "EditCondition", "FALSE" },
		{ "ModuleRelativePath", "Public/NotionSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[] = {
		{ "Category", "DatabaseProperties" },
		{ "EditCondition", "FALSE" },
		{ "ModuleRelativePath", "Public/NotionSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_isVisibleInUI_MetaData[] = {
		{ "Category", "DatabaseProperties" },
		{ "ModuleRelativePath", "Public/NotionSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_isDefault_MetaData[] = {
		{ "Category", "DatabaseProperties" },
		{ "ModuleRelativePath", "Public/NotionSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ID;
	static void NewProp_isVisibleInUI_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isVisibleInUI;
	static void NewProp_isDefault_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isDefault;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNotionUser>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNotionUser_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNotionUser, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNotionUser_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNotionUser, ID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ID_MetaData), NewProp_ID_MetaData) };
void Z_Construct_UScriptStruct_FNotionUser_Statics::NewProp_isVisibleInUI_SetBit(void* Obj)
{
	((FNotionUser*)Obj)->isVisibleInUI = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNotionUser_Statics::NewProp_isVisibleInUI = { "isVisibleInUI", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FNotionUser), &Z_Construct_UScriptStruct_FNotionUser_Statics::NewProp_isVisibleInUI_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_isVisibleInUI_MetaData), NewProp_isVisibleInUI_MetaData) };
void Z_Construct_UScriptStruct_FNotionUser_Statics::NewProp_isDefault_SetBit(void* Obj)
{
	((FNotionUser*)Obj)->isDefault = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNotionUser_Statics::NewProp_isDefault = { "isDefault", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FNotionUser), &Z_Construct_UScriptStruct_FNotionUser_Statics::NewProp_isDefault_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_isDefault_MetaData), NewProp_isDefault_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNotionUser_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNotionUser_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNotionUser_Statics::NewProp_ID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNotionUser_Statics::NewProp_isVisibleInUI,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNotionUser_Statics::NewProp_isDefault,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNotionUser_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNotionUser_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NotionUnreal,
	nullptr,
	&NewStructOps,
	"NotionUser",
	Z_Construct_UScriptStruct_FNotionUser_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNotionUser_Statics::PropPointers),
	sizeof(FNotionUser),
	alignof(FNotionUser),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNotionUser_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNotionUser_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNotionUser()
{
	if (!Z_Registration_Info_UScriptStruct_NotionUser.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NotionUser.InnerSingleton, Z_Construct_UScriptStruct_FNotionUser_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NotionUser.InnerSingleton;
}
// End ScriptStruct FNotionUser

// Begin ScriptStruct FNotionSelection
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NotionSelection;
class UScriptStruct* FNotionSelection::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NotionSelection.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NotionSelection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNotionSelection, (UObject*)Z_Construct_UPackage__Script_NotionUnreal(), TEXT("NotionSelection"));
	}
	return Z_Registration_Info_UScriptStruct_NotionSelection.OuterSingleton;
}
template<> NOTIONUNREAL_API UScriptStruct* StaticStruct<FNotionSelection>()
{
	return FNotionSelection::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNotionSelection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/NotionSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "DatabaseProperties" },
		{ "EditCondition", "FALSE" },
		{ "ModuleRelativePath", "Public/NotionSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[] = {
		{ "Category", "DatabaseProperties" },
		{ "EditCondition", "FALSE" },
		{ "ModuleRelativePath", "Public/NotionSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "Category", "DatabaseProperties" },
		{ "EditCondition", "FALSE" },
		{ "ModuleRelativePath", "Public/NotionSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNotionSelection>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNotionSelection_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNotionSelection, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNotionSelection_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNotionSelection, ID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ID_MetaData), NewProp_ID_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNotionSelection_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNotionSelection, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNotionSelection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNotionSelection_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNotionSelection_Statics::NewProp_ID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNotionSelection_Statics::NewProp_Color,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNotionSelection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNotionSelection_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NotionUnreal,
	nullptr,
	&NewStructOps,
	"NotionSelection",
	Z_Construct_UScriptStruct_FNotionSelection_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNotionSelection_Statics::PropPointers),
	sizeof(FNotionSelection),
	alignof(FNotionSelection),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNotionSelection_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNotionSelection_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNotionSelection()
{
	if (!Z_Registration_Info_UScriptStruct_NotionSelection.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NotionSelection.InnerSingleton, Z_Construct_UScriptStruct_FNotionSelection_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NotionSelection.InnerSingleton;
}
// End ScriptStruct FNotionSelection

// Begin ScriptStruct FNotionProperty
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NotionProperty;
class UScriptStruct* FNotionProperty::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NotionProperty.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NotionProperty.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNotionProperty, (UObject*)Z_Construct_UPackage__Script_NotionUnreal(), TEXT("NotionProperty"));
	}
	return Z_Registration_Info_UScriptStruct_NotionProperty.OuterSingleton;
}
template<> NOTIONUNREAL_API UScriptStruct* StaticStruct<FNotionProperty>()
{
	return FNotionProperty::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNotionProperty_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/NotionSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "DatabaseProperties" },
		{ "EditCondition", "FALSE" },
		{ "ModuleRelativePath", "Public/NotionSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[] = {
		{ "Category", "DatabaseProperties" },
		{ "EditCondition", "FALSE" },
		{ "ModuleRelativePath", "Public/NotionSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_isVisibleInUI_MetaData[] = {
		{ "Category", "DatabaseProperties" },
		{ "ModuleRelativePath", "Public/NotionSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertyType_MetaData[] = {
		{ "Category", "DatabaseProperties" },
		{ "EditCondition", "FALSE" },
		{ "ModuleRelativePath", "Public/NotionSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[] = {
		{ "Category", "DatabaseProperties" },
		{ "EditCondition", "FALSE" },
		{ "ModuleRelativePath", "Public/NotionSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultCheckboxState_MetaData[] = {
		{ "Category", "DatabaseProperties" },
		{ "EditCondition", "PropertyType==ENotionPropertyType::Checkbox" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/NotionSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultContent_MetaData[] = {
		{ "Category", "DatabaseProperties" },
		{ "EditCondition", "PropertyType==ENotionPropertyType::Email || PropertyType==ENotionPropertyType::Phone_Number  || PropertyType==ENotionPropertyType::Rich_Text || PropertyType==ENotionPropertyType::Url || PropertyType==ENotionPropertyType::Number" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/NotionSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultOptionNames_MetaData[] = {
		{ "Category", "DatabaseProperties" },
		{ "EditCondition", "PropertyType==ENotionPropertyType::Multi_Select" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/NotionSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultOptionName_MetaData[] = {
		{ "Category", "DatabaseProperties" },
		{ "EditCondition", "PropertyType==ENotionPropertyType::Select || PropertyType==ENotionPropertyType::Status" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/NotionSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ID;
	static void NewProp_isVisibleInUI_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isVisibleInUI;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PropertyType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PropertyType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Options_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Options;
	static void NewProp_DefaultCheckboxState_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DefaultCheckboxState;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultContent;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultOptionNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultOptionNames;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultOptionName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNotionProperty>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNotionProperty_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNotionProperty, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNotionProperty_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNotionProperty, ID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ID_MetaData), NewProp_ID_MetaData) };
void Z_Construct_UScriptStruct_FNotionProperty_Statics::NewProp_isVisibleInUI_SetBit(void* Obj)
{
	((FNotionProperty*)Obj)->isVisibleInUI = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNotionProperty_Statics::NewProp_isVisibleInUI = { "isVisibleInUI", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FNotionProperty), &Z_Construct_UScriptStruct_FNotionProperty_Statics::NewProp_isVisibleInUI_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_isVisibleInUI_MetaData), NewProp_isVisibleInUI_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNotionProperty_Statics::NewProp_PropertyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNotionProperty_Statics::NewProp_PropertyType = { "PropertyType", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNotionProperty, PropertyType), Z_Construct_UEnum_NotionUnreal_ENotionPropertyType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertyType_MetaData), NewProp_PropertyType_MetaData) }; // 128761829
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNotionProperty_Statics::NewProp_Options_Inner = { "Options", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNotionSelection, METADATA_PARAMS(0, nullptr) }; // 1436436702
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNotionProperty_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNotionProperty, Options), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Options_MetaData), NewProp_Options_MetaData) }; // 1436436702
void Z_Construct_UScriptStruct_FNotionProperty_Statics::NewProp_DefaultCheckboxState_SetBit(void* Obj)
{
	((FNotionProperty*)Obj)->DefaultCheckboxState = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNotionProperty_Statics::NewProp_DefaultCheckboxState = { "DefaultCheckboxState", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FNotionProperty), &Z_Construct_UScriptStruct_FNotionProperty_Statics::NewProp_DefaultCheckboxState_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultCheckboxState_MetaData), NewProp_DefaultCheckboxState_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNotionProperty_Statics::NewProp_DefaultContent = { "DefaultContent", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNotionProperty, DefaultContent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultContent_MetaData), NewProp_DefaultContent_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNotionProperty_Statics::NewProp_DefaultOptionNames_Inner = { "DefaultOptionNames", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNotionProperty_Statics::NewProp_DefaultOptionNames = { "DefaultOptionNames", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNotionProperty, DefaultOptionNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultOptionNames_MetaData), NewProp_DefaultOptionNames_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNotionProperty_Statics::NewProp_DefaultOptionName = { "DefaultOptionName", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNotionProperty, DefaultOptionName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultOptionName_MetaData), NewProp_DefaultOptionName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNotionProperty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNotionProperty_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNotionProperty_Statics::NewProp_ID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNotionProperty_Statics::NewProp_isVisibleInUI,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNotionProperty_Statics::NewProp_PropertyType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNotionProperty_Statics::NewProp_PropertyType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNotionProperty_Statics::NewProp_Options_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNotionProperty_Statics::NewProp_Options,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNotionProperty_Statics::NewProp_DefaultCheckboxState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNotionProperty_Statics::NewProp_DefaultContent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNotionProperty_Statics::NewProp_DefaultOptionNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNotionProperty_Statics::NewProp_DefaultOptionNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNotionProperty_Statics::NewProp_DefaultOptionName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNotionProperty_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNotionProperty_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NotionUnreal,
	nullptr,
	&NewStructOps,
	"NotionProperty",
	Z_Construct_UScriptStruct_FNotionProperty_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNotionProperty_Statics::PropPointers),
	sizeof(FNotionProperty),
	alignof(FNotionProperty),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNotionProperty_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNotionProperty_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNotionProperty()
{
	if (!Z_Registration_Info_UScriptStruct_NotionProperty.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NotionProperty.InnerSingleton, Z_Construct_UScriptStruct_FNotionProperty_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NotionProperty.InnerSingleton;
}
// End ScriptStruct FNotionProperty

// Begin ScriptStruct FNotionKeyInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NotionKeyInfo;
class UScriptStruct* FNotionKeyInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NotionKeyInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NotionKeyInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNotionKeyInfo, (UObject*)Z_Construct_UPackage__Script_NotionUnreal(), TEXT("NotionKeyInfo"));
	}
	return Z_Registration_Info_UScriptStruct_NotionKeyInfo.OuterSingleton;
}
template<> NOTIONUNREAL_API UScriptStruct* StaticStruct<FNotionKeyInfo>()
{
	return FNotionKeyInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNotionKeyInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NotionSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/NotionSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Shift_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/NotionSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ctrl_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/NotionSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Alt_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/NotionSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Cmd_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/NotionSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Shift_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Shift;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Ctrl_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Ctrl;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Alt_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Alt;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Cmd_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Cmd;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNotionKeyInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNotionKeyInfo_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNotionKeyInfo, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) }; // 658672854
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNotionKeyInfo_Statics::NewProp_Shift_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNotionKeyInfo_Statics::NewProp_Shift = { "Shift", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNotionKeyInfo, Shift), Z_Construct_UEnum_SlateCore_ECheckBoxState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Shift_MetaData), NewProp_Shift_MetaData) }; // 274390384
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNotionKeyInfo_Statics::NewProp_Ctrl_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNotionKeyInfo_Statics::NewProp_Ctrl = { "Ctrl", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNotionKeyInfo, Ctrl), Z_Construct_UEnum_SlateCore_ECheckBoxState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ctrl_MetaData), NewProp_Ctrl_MetaData) }; // 274390384
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNotionKeyInfo_Statics::NewProp_Alt_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNotionKeyInfo_Statics::NewProp_Alt = { "Alt", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNotionKeyInfo, Alt), Z_Construct_UEnum_SlateCore_ECheckBoxState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Alt_MetaData), NewProp_Alt_MetaData) }; // 274390384
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNotionKeyInfo_Statics::NewProp_Cmd_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNotionKeyInfo_Statics::NewProp_Cmd = { "Cmd", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNotionKeyInfo, Cmd), Z_Construct_UEnum_SlateCore_ECheckBoxState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Cmd_MetaData), NewProp_Cmd_MetaData) }; // 274390384
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNotionKeyInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNotionKeyInfo_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNotionKeyInfo_Statics::NewProp_Shift_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNotionKeyInfo_Statics::NewProp_Shift,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNotionKeyInfo_Statics::NewProp_Ctrl_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNotionKeyInfo_Statics::NewProp_Ctrl,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNotionKeyInfo_Statics::NewProp_Alt_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNotionKeyInfo_Statics::NewProp_Alt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNotionKeyInfo_Statics::NewProp_Cmd_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNotionKeyInfo_Statics::NewProp_Cmd,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNotionKeyInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNotionKeyInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NotionUnreal,
	nullptr,
	&NewStructOps,
	"NotionKeyInfo",
	Z_Construct_UScriptStruct_FNotionKeyInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNotionKeyInfo_Statics::PropPointers),
	sizeof(FNotionKeyInfo),
	alignof(FNotionKeyInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNotionKeyInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNotionKeyInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNotionKeyInfo()
{
	if (!Z_Registration_Info_UScriptStruct_NotionKeyInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NotionKeyInfo.InnerSingleton, Z_Construct_UScriptStruct_FNotionKeyInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NotionKeyInfo.InnerSingleton;
}
// End ScriptStruct FNotionKeyInfo

// Begin Class UNotionSettings
void UNotionSettings::StaticRegisterNativesUNotionSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNotionSettings);
UClass* Z_Construct_UClass_UNotionSettings_NoRegister()
{
	return UNotionSettings::StaticClass();
}
struct Z_Construct_UClass_UNotionSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Notion Integration" },
		{ "IncludePath", "NotionSettings.h" },
		{ "ModuleRelativePath", "Public/NotionSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_notionAPIKey_MetaData[] = {
		{ "Category", "NotionAuthentication" },
		{ "ModuleRelativePath", "Public/NotionSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_notionDatabaseID_MetaData[] = {
		{ "Category", "NotionAuthentication" },
		{ "ModuleRelativePath", "Public/NotionSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DatabaseName_MetaData[] = {
		{ "Category", "DatabaseProperties" },
		{ "EditCondition", "FALSE" },
		{ "ModuleRelativePath", "Public/NotionSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TaskNameProperty_MetaData[] = {
		{ "Category", "DatabaseProperties" },
		{ "EditCondition", "FALSE" },
		{ "ModuleRelativePath", "Public/NotionSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DatabaseProperties_MetaData[] = {
		{ "Category", "DatabaseProperties" },
		{ "ModuleRelativePath", "Public/NotionSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DatabaseUsers_MetaData[] = {
		{ "Category", "Users" },
		{ "ModuleRelativePath", "Public/NotionSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SendLog_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/NotionSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InGameWindowPosition_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/NotionSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InGameShortcut_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/NotionSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnablePaintMode_MetaData[] = {
		{ "Category", "PaintMode" },
		{ "ModuleRelativePath", "Public/NotionSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Colors_MetaData[] = {
		{ "Category", "PaintMode" },
		{ "ModuleRelativePath", "Public/NotionSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_fileHostUploadUrl_MetaData[] = {
		{ "Category", "FileHostingCUrlAuth" },
		{ "ModuleRelativePath", "Public/NotionSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_fileHostUploadHeaders_MetaData[] = {
		{ "Category", "FileHostingCUrlAuth" },
		{ "ModuleRelativePath", "Public/NotionSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_filePublicParentUrl_MetaData[] = {
		{ "Category", "FileHostingCUrlAuth" },
		{ "ModuleRelativePath", "Public/NotionSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_notionAPIKey;
	static const UECodeGen_Private::FStrPropertyParams NewProp_notionDatabaseID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DatabaseName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TaskNameProperty;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DatabaseProperties_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DatabaseProperties_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_DatabaseProperties;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DatabaseUsers_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DatabaseUsers_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_DatabaseUsers;
	static void NewProp_SendLog_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SendLog;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InGameWindowPosition_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InGameWindowPosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InGameShortcut;
	static void NewProp_EnablePaintMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EnablePaintMode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Colors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Colors;
	static const UECodeGen_Private::FStrPropertyParams NewProp_fileHostUploadUrl;
	static const UECodeGen_Private::FStrPropertyParams NewProp_fileHostUploadHeaders_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_fileHostUploadHeaders_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_fileHostUploadHeaders;
	static const UECodeGen_Private::FStrPropertyParams NewProp_filePublicParentUrl;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNotionSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNotionSettings_Statics::NewProp_notionAPIKey = { "notionAPIKey", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNotionSettings, notionAPIKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_notionAPIKey_MetaData), NewProp_notionAPIKey_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNotionSettings_Statics::NewProp_notionDatabaseID = { "notionDatabaseID", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNotionSettings, notionDatabaseID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_notionDatabaseID_MetaData), NewProp_notionDatabaseID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNotionSettings_Statics::NewProp_DatabaseName = { "DatabaseName", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNotionSettings, DatabaseName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DatabaseName_MetaData), NewProp_DatabaseName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNotionSettings_Statics::NewProp_TaskNameProperty = { "TaskNameProperty", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNotionSettings, TaskNameProperty), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskNameProperty_MetaData), NewProp_TaskNameProperty_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNotionSettings_Statics::NewProp_DatabaseProperties_ValueProp = { "DatabaseProperties", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FNotionProperty, METADATA_PARAMS(0, nullptr) }; // 2589688319
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNotionSettings_Statics::NewProp_DatabaseProperties_Key_KeyProp = { "DatabaseProperties_Key", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UNotionSettings_Statics::NewProp_DatabaseProperties = { "DatabaseProperties", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNotionSettings, DatabaseProperties), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DatabaseProperties_MetaData), NewProp_DatabaseProperties_MetaData) }; // 2589688319
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNotionSettings_Statics::NewProp_DatabaseUsers_ValueProp = { "DatabaseUsers", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FNotionUser, METADATA_PARAMS(0, nullptr) }; // 2264447473
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNotionSettings_Statics::NewProp_DatabaseUsers_Key_KeyProp = { "DatabaseUsers_Key", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UNotionSettings_Statics::NewProp_DatabaseUsers = { "DatabaseUsers", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNotionSettings, DatabaseUsers), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DatabaseUsers_MetaData), NewProp_DatabaseUsers_MetaData) }; // 2264447473
void Z_Construct_UClass_UNotionSettings_Statics::NewProp_SendLog_SetBit(void* Obj)
{
	((UNotionSettings*)Obj)->SendLog = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNotionSettings_Statics::NewProp_SendLog = { "SendLog", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNotionSettings), &Z_Construct_UClass_UNotionSettings_Statics::NewProp_SendLog_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SendLog_MetaData), NewProp_SendLog_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNotionSettings_Statics::NewProp_InGameWindowPosition_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNotionSettings_Statics::NewProp_InGameWindowPosition = { "InGameWindowPosition", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNotionSettings, InGameWindowPosition), Z_Construct_UEnum_NotionUnreal_ENotionScreenPosition, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InGameWindowPosition_MetaData), NewProp_InGameWindowPosition_MetaData) }; // 3182794371
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNotionSettings_Statics::NewProp_InGameShortcut = { "InGameShortcut", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNotionSettings, InGameShortcut), Z_Construct_UScriptStruct_FNotionKeyInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InGameShortcut_MetaData), NewProp_InGameShortcut_MetaData) }; // 772225613
void Z_Construct_UClass_UNotionSettings_Statics::NewProp_EnablePaintMode_SetBit(void* Obj)
{
	((UNotionSettings*)Obj)->EnablePaintMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNotionSettings_Statics::NewProp_EnablePaintMode = { "EnablePaintMode", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNotionSettings), &Z_Construct_UClass_UNotionSettings_Statics::NewProp_EnablePaintMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnablePaintMode_MetaData), NewProp_EnablePaintMode_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNotionSettings_Statics::NewProp_Colors_Inner = { "Colors", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNotionSettings_Statics::NewProp_Colors = { "Colors", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNotionSettings, Colors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Colors_MetaData), NewProp_Colors_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNotionSettings_Statics::NewProp_fileHostUploadUrl = { "fileHostUploadUrl", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNotionSettings, fileHostUploadUrl), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_fileHostUploadUrl_MetaData), NewProp_fileHostUploadUrl_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNotionSettings_Statics::NewProp_fileHostUploadHeaders_ValueProp = { "fileHostUploadHeaders", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNotionSettings_Statics::NewProp_fileHostUploadHeaders_Key_KeyProp = { "fileHostUploadHeaders_Key", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UNotionSettings_Statics::NewProp_fileHostUploadHeaders = { "fileHostUploadHeaders", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNotionSettings, fileHostUploadHeaders), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_fileHostUploadHeaders_MetaData), NewProp_fileHostUploadHeaders_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNotionSettings_Statics::NewProp_filePublicParentUrl = { "filePublicParentUrl", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNotionSettings, filePublicParentUrl), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_filePublicParentUrl_MetaData), NewProp_filePublicParentUrl_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNotionSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNotionSettings_Statics::NewProp_notionAPIKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNotionSettings_Statics::NewProp_notionDatabaseID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNotionSettings_Statics::NewProp_DatabaseName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNotionSettings_Statics::NewProp_TaskNameProperty,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNotionSettings_Statics::NewProp_DatabaseProperties_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNotionSettings_Statics::NewProp_DatabaseProperties_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNotionSettings_Statics::NewProp_DatabaseProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNotionSettings_Statics::NewProp_DatabaseUsers_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNotionSettings_Statics::NewProp_DatabaseUsers_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNotionSettings_Statics::NewProp_DatabaseUsers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNotionSettings_Statics::NewProp_SendLog,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNotionSettings_Statics::NewProp_InGameWindowPosition_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNotionSettings_Statics::NewProp_InGameWindowPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNotionSettings_Statics::NewProp_InGameShortcut,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNotionSettings_Statics::NewProp_EnablePaintMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNotionSettings_Statics::NewProp_Colors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNotionSettings_Statics::NewProp_Colors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNotionSettings_Statics::NewProp_fileHostUploadUrl,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNotionSettings_Statics::NewProp_fileHostUploadHeaders_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNotionSettings_Statics::NewProp_fileHostUploadHeaders_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNotionSettings_Statics::NewProp_fileHostUploadHeaders,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNotionSettings_Statics::NewProp_filePublicParentUrl,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNotionSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNotionSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_NotionUnreal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNotionSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNotionSettings_Statics::ClassParams = {
	&UNotionSettings::StaticClass,
	"Notion",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNotionSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNotionSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNotionSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UNotionSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNotionSettings()
{
	if (!Z_Registration_Info_UClass_UNotionSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNotionSettings.OuterSingleton, Z_Construct_UClass_UNotionSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNotionSettings.OuterSingleton;
}
template<> NOTIONUNREAL_API UClass* StaticClass<UNotionSettings>()
{
	return UNotionSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNotionSettings);
UNotionSettings::~UNotionSettings() {}
// End Class UNotionSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Caen1936_Plugins_NotionUnreal_Source_NotionUnreal_Public_NotionSettings_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ENotionPropertyType_StaticEnum, TEXT("ENotionPropertyType"), &Z_Registration_Info_UEnum_ENotionPropertyType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 128761829U) },
		{ ENotionScreenPosition_StaticEnum, TEXT("ENotionScreenPosition"), &Z_Registration_Info_UEnum_ENotionScreenPosition, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3182794371U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FNotionUser::StaticStruct, Z_Construct_UScriptStruct_FNotionUser_Statics::NewStructOps, TEXT("NotionUser"), &Z_Registration_Info_UScriptStruct_NotionUser, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNotionUser), 2264447473U) },
		{ FNotionSelection::StaticStruct, Z_Construct_UScriptStruct_FNotionSelection_Statics::NewStructOps, TEXT("NotionSelection"), &Z_Registration_Info_UScriptStruct_NotionSelection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNotionSelection), 1436436702U) },
		{ FNotionProperty::StaticStruct, Z_Construct_UScriptStruct_FNotionProperty_Statics::NewStructOps, TEXT("NotionProperty"), &Z_Registration_Info_UScriptStruct_NotionProperty, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNotionProperty), 2589688319U) },
		{ FNotionKeyInfo::StaticStruct, Z_Construct_UScriptStruct_FNotionKeyInfo_Statics::NewStructOps, TEXT("NotionKeyInfo"), &Z_Registration_Info_UScriptStruct_NotionKeyInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNotionKeyInfo), 772225613U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNotionSettings, UNotionSettings::StaticClass, TEXT("UNotionSettings"), &Z_Registration_Info_UClass_UNotionSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNotionSettings), 2981176055U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Caen1936_Plugins_NotionUnreal_Source_NotionUnreal_Public_NotionSettings_h_1098828624(TEXT("/Script/NotionUnreal"),
	Z_CompiledInDeferFile_FID_Caen1936_Plugins_NotionUnreal_Source_NotionUnreal_Public_NotionSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Caen1936_Plugins_NotionUnreal_Source_NotionUnreal_Public_NotionSettings_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Caen1936_Plugins_NotionUnreal_Source_NotionUnreal_Public_NotionSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Caen1936_Plugins_NotionUnreal_Source_NotionUnreal_Public_NotionSettings_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Caen1936_Plugins_NotionUnreal_Source_NotionUnreal_Public_NotionSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Caen1936_Plugins_NotionUnreal_Source_NotionUnreal_Public_NotionSettings_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
