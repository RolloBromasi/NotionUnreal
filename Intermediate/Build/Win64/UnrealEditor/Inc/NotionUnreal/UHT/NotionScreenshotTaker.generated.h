// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NotionScreenshotTaker.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NOTIONUNREAL_NotionScreenshotTaker_generated_h
#error "NotionScreenshotTaker.generated.h already included, missing '#pragma once' in NotionScreenshotTaker.h"
#endif
#define NOTIONUNREAL_NotionScreenshotTaker_generated_h

#define FID_Caen1936_Plugins_NotionUnreal_Source_NotionUnreal_Public_NotionScreenshotTaker_h_18_DELEGATE \
NOTIONUNREAL_API void FOnScreenshotJpeg_DelegateWrapper(const FMulticastScriptDelegate& OnScreenshotJpeg, TArray<uint8> const& Jpeg);


#define FID_Caen1936_Plugins_NotionUnreal_Source_NotionUnreal_Public_NotionScreenshotTaker_h_19_DELEGATE \
NOTIONUNREAL_API void FScreenshotResponse_DelegateWrapper(const FMulticastScriptDelegate& ScreenshotResponse, uint8 Status, const FString& ResponseString, const FString& FileURL);


#define FID_Caen1936_Plugins_NotionUnreal_Source_NotionUnreal_Public_NotionScreenshotTaker_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRequestScreenshot);


#define FID_Caen1936_Plugins_NotionUnreal_Source_NotionUnreal_Public_NotionScreenshotTaker_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNotionScreenshotTaker(); \
	friend struct Z_Construct_UClass_UNotionScreenshotTaker_Statics; \
public: \
	DECLARE_CLASS(UNotionScreenshotTaker, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NotionUnreal"), NO_API) \
	DECLARE_SERIALIZER(UNotionScreenshotTaker)


#define FID_Caen1936_Plugins_NotionUnreal_Source_NotionUnreal_Public_NotionScreenshotTaker_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNotionScreenshotTaker(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNotionScreenshotTaker(UNotionScreenshotTaker&&); \
	UNotionScreenshotTaker(const UNotionScreenshotTaker&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNotionScreenshotTaker); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNotionScreenshotTaker); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNotionScreenshotTaker) \
	NO_API virtual ~UNotionScreenshotTaker();


#define FID_Caen1936_Plugins_NotionUnreal_Source_NotionUnreal_Public_NotionScreenshotTaker_h_21_PROLOG
#define FID_Caen1936_Plugins_NotionUnreal_Source_NotionUnreal_Public_NotionScreenshotTaker_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Caen1936_Plugins_NotionUnreal_Source_NotionUnreal_Public_NotionScreenshotTaker_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Caen1936_Plugins_NotionUnreal_Source_NotionUnreal_Public_NotionScreenshotTaker_h_24_INCLASS_NO_PURE_DECLS \
	FID_Caen1936_Plugins_NotionUnreal_Source_NotionUnreal_Public_NotionScreenshotTaker_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NOTIONUNREAL_API UClass* StaticClass<class UNotionScreenshotTaker>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Caen1936_Plugins_NotionUnreal_Source_NotionUnreal_Public_NotionScreenshotTaker_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
