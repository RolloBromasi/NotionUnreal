// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NotionUnrealEditor/Public/NotionUnrealEditor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNotionUnrealEditor() {}

// Begin Cross Module References
NOTIONUNREALEDITOR_API UClass* Z_Construct_UClass_UNotionUnrealEditor();
NOTIONUNREALEDITOR_API UClass* Z_Construct_UClass_UNotionUnrealEditor_NoRegister();
NOTIONUNREALEDITOR_API UClass* Z_Construct_UClass_UNotionUnrealEditorBase();
UPackage* Z_Construct_UPackage__Script_NotionUnrealEditor();
// End Cross Module References

// Begin Class UNotionUnrealEditor
void UNotionUnrealEditor::StaticRegisterNativesUNotionUnrealEditor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNotionUnrealEditor);
UClass* Z_Construct_UClass_UNotionUnrealEditor_NoRegister()
{
	return UNotionUnrealEditor::StaticClass();
}
struct Z_Construct_UClass_UNotionUnrealEditor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Editor object which handles all of the logic of the Plugin.\n */" },
#endif
		{ "IncludePath", "NotionUnrealEditor.h" },
		{ "ModuleRelativePath", "Public/NotionUnrealEditor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Editor object which handles all of the logic of the Plugin." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNotionUnrealEditor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNotionUnrealEditor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNotionUnrealEditorBase,
	(UObject* (*)())Z_Construct_UPackage__Script_NotionUnrealEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNotionUnrealEditor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNotionUnrealEditor_Statics::ClassParams = {
	&UNotionUnrealEditor::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNotionUnrealEditor_Statics::Class_MetaDataParams), Z_Construct_UClass_UNotionUnrealEditor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNotionUnrealEditor()
{
	if (!Z_Registration_Info_UClass_UNotionUnrealEditor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNotionUnrealEditor.OuterSingleton, Z_Construct_UClass_UNotionUnrealEditor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNotionUnrealEditor.OuterSingleton;
}
template<> NOTIONUNREALEDITOR_API UClass* StaticClass<UNotionUnrealEditor>()
{
	return UNotionUnrealEditor::StaticClass();
}
UNotionUnrealEditor::UNotionUnrealEditor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNotionUnrealEditor);
UNotionUnrealEditor::~UNotionUnrealEditor() {}
// End Class UNotionUnrealEditor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Caen1936_Plugins_NotionUnreal_Source_NotionUnrealEditor_Public_NotionUnrealEditor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNotionUnrealEditor, UNotionUnrealEditor::StaticClass, TEXT("UNotionUnrealEditor"), &Z_Registration_Info_UClass_UNotionUnrealEditor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNotionUnrealEditor), 1856022118U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Caen1936_Plugins_NotionUnreal_Source_NotionUnrealEditor_Public_NotionUnrealEditor_h_3972003765(TEXT("/Script/NotionUnrealEditor"),
	Z_CompiledInDeferFile_FID_Caen1936_Plugins_NotionUnreal_Source_NotionUnrealEditor_Public_NotionUnrealEditor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Caen1936_Plugins_NotionUnreal_Source_NotionUnrealEditor_Public_NotionUnrealEditor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
