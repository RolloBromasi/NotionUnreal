// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NotionUnreal/Public/NotionScreenshotTaker.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNotionScreenshotTaker() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
NOTIONUNREAL_API UClass* Z_Construct_UClass_UNotionScreenshotTaker();
NOTIONUNREAL_API UClass* Z_Construct_UClass_UNotionScreenshotTaker_NoRegister();
NOTIONUNREAL_API UFunction* Z_Construct_UDelegateFunction_NotionUnreal_OnScreenshotJpeg__DelegateSignature();
NOTIONUNREAL_API UFunction* Z_Construct_UDelegateFunction_NotionUnreal_ScreenshotResponse__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_NotionUnreal();
// End Cross Module References

// Begin Delegate FOnScreenshotJpeg
struct Z_Construct_UDelegateFunction_NotionUnreal_OnScreenshotJpeg__DelegateSignature_Statics
{
	struct _Script_NotionUnreal_eventOnScreenshotJpeg_Parms
	{
		TArray<uint8> Jpeg;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n * \n */" },
#endif
		{ "ModuleRelativePath", "Public/NotionScreenshotTaker.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Jpeg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Jpeg_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Jpeg;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_NotionUnreal_OnScreenshotJpeg__DelegateSignature_Statics::NewProp_Jpeg_Inner = { "Jpeg", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_NotionUnreal_OnScreenshotJpeg__DelegateSignature_Statics::NewProp_Jpeg = { "Jpeg", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NotionUnreal_eventOnScreenshotJpeg_Parms, Jpeg), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Jpeg_MetaData), NewProp_Jpeg_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NotionUnreal_OnScreenshotJpeg__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NotionUnreal_OnScreenshotJpeg__DelegateSignature_Statics::NewProp_Jpeg_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NotionUnreal_OnScreenshotJpeg__DelegateSignature_Statics::NewProp_Jpeg,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NotionUnreal_OnScreenshotJpeg__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NotionUnreal_OnScreenshotJpeg__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NotionUnreal, nullptr, "OnScreenshotJpeg__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_NotionUnreal_OnScreenshotJpeg__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NotionUnreal_OnScreenshotJpeg__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_NotionUnreal_OnScreenshotJpeg__DelegateSignature_Statics::_Script_NotionUnreal_eventOnScreenshotJpeg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NotionUnreal_OnScreenshotJpeg__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NotionUnreal_OnScreenshotJpeg__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_NotionUnreal_OnScreenshotJpeg__DelegateSignature_Statics::_Script_NotionUnreal_eventOnScreenshotJpeg_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_NotionUnreal_OnScreenshotJpeg__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NotionUnreal_OnScreenshotJpeg__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnScreenshotJpeg_DelegateWrapper(const FMulticastScriptDelegate& OnScreenshotJpeg, TArray<uint8> const& Jpeg)
{
	struct _Script_NotionUnreal_eventOnScreenshotJpeg_Parms
	{
		TArray<uint8> Jpeg;
	};
	_Script_NotionUnreal_eventOnScreenshotJpeg_Parms Parms;
	Parms.Jpeg=Jpeg;
	OnScreenshotJpeg.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnScreenshotJpeg

// Begin Delegate FScreenshotResponse
struct Z_Construct_UDelegateFunction_NotionUnreal_ScreenshotResponse__DelegateSignature_Statics
{
	struct _Script_NotionUnreal_eventScreenshotResponse_Parms
	{
		uint8 Status;
		FString ResponseString;
		FString FileURL;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NotionScreenshotTaker.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Status;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ResponseString;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileURL;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_NotionUnreal_ScreenshotResponse__DelegateSignature_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NotionUnreal_eventScreenshotResponse_Parms, Status), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_NotionUnreal_ScreenshotResponse__DelegateSignature_Statics::NewProp_ResponseString = { "ResponseString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NotionUnreal_eventScreenshotResponse_Parms, ResponseString), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_NotionUnreal_ScreenshotResponse__DelegateSignature_Statics::NewProp_FileURL = { "FileURL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NotionUnreal_eventScreenshotResponse_Parms, FileURL), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NotionUnreal_ScreenshotResponse__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NotionUnreal_ScreenshotResponse__DelegateSignature_Statics::NewProp_Status,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NotionUnreal_ScreenshotResponse__DelegateSignature_Statics::NewProp_ResponseString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NotionUnreal_ScreenshotResponse__DelegateSignature_Statics::NewProp_FileURL,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NotionUnreal_ScreenshotResponse__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NotionUnreal_ScreenshotResponse__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NotionUnreal, nullptr, "ScreenshotResponse__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_NotionUnreal_ScreenshotResponse__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NotionUnreal_ScreenshotResponse__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_NotionUnreal_ScreenshotResponse__DelegateSignature_Statics::_Script_NotionUnreal_eventScreenshotResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NotionUnreal_ScreenshotResponse__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NotionUnreal_ScreenshotResponse__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_NotionUnreal_ScreenshotResponse__DelegateSignature_Statics::_Script_NotionUnreal_eventScreenshotResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_NotionUnreal_ScreenshotResponse__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NotionUnreal_ScreenshotResponse__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FScreenshotResponse_DelegateWrapper(const FMulticastScriptDelegate& ScreenshotResponse, uint8 Status, const FString& ResponseString, const FString& FileURL)
{
	struct _Script_NotionUnreal_eventScreenshotResponse_Parms
	{
		uint8 Status;
		FString ResponseString;
		FString FileURL;
	};
	_Script_NotionUnreal_eventScreenshotResponse_Parms Parms;
	Parms.Status=Status;
	Parms.ResponseString=ResponseString;
	Parms.FileURL=FileURL;
	ScreenshotResponse.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FScreenshotResponse

// Begin Class UNotionScreenshotTaker Function RequestScreenshot
struct Z_Construct_UFunction_UNotionScreenshotTaker_RequestScreenshot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Screenshot" },
		{ "ModuleRelativePath", "Public/NotionScreenshotTaker.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNotionScreenshotTaker_RequestScreenshot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNotionScreenshotTaker, nullptr, "RequestScreenshot", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNotionScreenshotTaker_RequestScreenshot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNotionScreenshotTaker_RequestScreenshot_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNotionScreenshotTaker_RequestScreenshot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNotionScreenshotTaker_RequestScreenshot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNotionScreenshotTaker::execRequestScreenshot)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestScreenshot();
	P_NATIVE_END;
}
// End Class UNotionScreenshotTaker Function RequestScreenshot

// Begin Class UNotionScreenshotTaker
void UNotionScreenshotTaker::StaticRegisterNativesUNotionScreenshotTaker()
{
	UClass* Class = UNotionScreenshotTaker::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "RequestScreenshot", &UNotionScreenshotTaker::execRequestScreenshot },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNotionScreenshotTaker);
UClass* Z_Construct_UClass_UNotionScreenshotTaker_NoRegister()
{
	return UNotionScreenshotTaker::StaticClass();
}
struct Z_Construct_UClass_UNotionScreenshotTaker_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "NotionScreenshotTaker.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/NotionScreenshotTaker.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScreenshotUploaded_MetaData[] = {
		{ "Category", "Screenshot" },
		{ "ModuleRelativePath", "Public/NotionScreenshotTaker.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ScreenshotUploaded;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNotionScreenshotTaker_RequestScreenshot, "RequestScreenshot" }, // 731357223
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNotionScreenshotTaker>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNotionScreenshotTaker_Statics::NewProp_ScreenshotUploaded = { "ScreenshotUploaded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNotionScreenshotTaker, ScreenshotUploaded), Z_Construct_UDelegateFunction_NotionUnreal_ScreenshotResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScreenshotUploaded_MetaData), NewProp_ScreenshotUploaded_MetaData) }; // 3760339090
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNotionScreenshotTaker_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNotionScreenshotTaker_Statics::NewProp_ScreenshotUploaded,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNotionScreenshotTaker_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNotionScreenshotTaker_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_NotionUnreal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNotionScreenshotTaker_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNotionScreenshotTaker_Statics::ClassParams = {
	&UNotionScreenshotTaker::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNotionScreenshotTaker_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNotionScreenshotTaker_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNotionScreenshotTaker_Statics::Class_MetaDataParams), Z_Construct_UClass_UNotionScreenshotTaker_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNotionScreenshotTaker()
{
	if (!Z_Registration_Info_UClass_UNotionScreenshotTaker.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNotionScreenshotTaker.OuterSingleton, Z_Construct_UClass_UNotionScreenshotTaker_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNotionScreenshotTaker.OuterSingleton;
}
template<> NOTIONUNREAL_API UClass* StaticClass<UNotionScreenshotTaker>()
{
	return UNotionScreenshotTaker::StaticClass();
}
UNotionScreenshotTaker::UNotionScreenshotTaker(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNotionScreenshotTaker);
UNotionScreenshotTaker::~UNotionScreenshotTaker() {}
// End Class UNotionScreenshotTaker

// Begin Registration
struct Z_CompiledInDeferFile_FID_Caen1936_Plugins_NotionUnreal_Source_NotionUnreal_Public_NotionScreenshotTaker_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNotionScreenshotTaker, UNotionScreenshotTaker::StaticClass, TEXT("UNotionScreenshotTaker"), &Z_Registration_Info_UClass_UNotionScreenshotTaker, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNotionScreenshotTaker), 1894219446U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Caen1936_Plugins_NotionUnreal_Source_NotionUnreal_Public_NotionScreenshotTaker_h_1419401874(TEXT("/Script/NotionUnreal"),
	Z_CompiledInDeferFile_FID_Caen1936_Plugins_NotionUnreal_Source_NotionUnreal_Public_NotionScreenshotTaker_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Caen1936_Plugins_NotionUnreal_Source_NotionUnreal_Public_NotionScreenshotTaker_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
