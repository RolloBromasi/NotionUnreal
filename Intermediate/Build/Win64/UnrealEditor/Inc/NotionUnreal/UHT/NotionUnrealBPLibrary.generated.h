// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NotionUnrealBPLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NOTIONUNREAL_NotionUnrealBPLibrary_generated_h
#error "NotionUnrealBPLibrary.generated.h already included, missing '#pragma once' in NotionUnrealBPLibrary.h"
#endif
#define NOTIONUNREAL_NotionUnrealBPLibrary_generated_h

#define FID_Caen1936_Plugins_NotionUnreal_Source_NotionUnreal_Public_NotionUnrealBPLibrary_h_12_DELEGATE \
NOTIONUNREAL_API void FResponse_DelegateWrapper(const FScriptDelegate& Response, uint8 Status, const FString& ResponseString);


#define FID_Caen1936_Plugins_NotionUnreal_Source_NotionUnreal_Public_NotionUnrealBPLibrary_h_13_DELEGATE \
NOTIONUNREAL_API void FLogResponse_DelegateWrapper(const FScriptDelegate& LogResponse, uint8 Status, const FString& ResponseString, const FString& FileURL);


#define FID_Caen1936_Plugins_NotionUnreal_Source_NotionUnreal_Public_NotionUnrealBPLibrary_h_18_RPC_WRAPPERS \
	DECLARE_FUNCTION(execUploadLog); \
	DECLARE_FUNCTION(execCreateTaskInNotion);


#define FID_Caen1936_Plugins_NotionUnreal_Source_NotionUnreal_Public_NotionUnrealBPLibrary_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUNotionUnrealBPLibrary(); \
	friend struct Z_Construct_UClass_UNotionUnrealBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UNotionUnrealBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NotionUnreal"), NO_API) \
	DECLARE_SERIALIZER(UNotionUnrealBPLibrary)


#define FID_Caen1936_Plugins_NotionUnreal_Source_NotionUnreal_Public_NotionUnrealBPLibrary_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNotionUnrealBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNotionUnrealBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNotionUnrealBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNotionUnrealBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNotionUnrealBPLibrary(UNotionUnrealBPLibrary&&); \
	UNotionUnrealBPLibrary(const UNotionUnrealBPLibrary&); \
public: \
	NO_API virtual ~UNotionUnrealBPLibrary();


#define FID_Caen1936_Plugins_NotionUnreal_Source_NotionUnreal_Public_NotionUnrealBPLibrary_h_15_PROLOG
#define FID_Caen1936_Plugins_NotionUnreal_Source_NotionUnreal_Public_NotionUnrealBPLibrary_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Caen1936_Plugins_NotionUnreal_Source_NotionUnreal_Public_NotionUnrealBPLibrary_h_18_RPC_WRAPPERS \
	FID_Caen1936_Plugins_NotionUnreal_Source_NotionUnreal_Public_NotionUnrealBPLibrary_h_18_INCLASS \
	FID_Caen1936_Plugins_NotionUnreal_Source_NotionUnreal_Public_NotionUnrealBPLibrary_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NOTIONUNREAL_API UClass* StaticClass<class UNotionUnrealBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Caen1936_Plugins_NotionUnreal_Source_NotionUnreal_Public_NotionUnrealBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
