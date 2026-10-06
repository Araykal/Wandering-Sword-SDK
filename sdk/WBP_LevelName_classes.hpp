#pragma once



// Package: WBP_LevelName

#include "Basic.hpp"

#include "UMG_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass WBP_LevelName.WBP_LevelName_C
// 0x0028 (0x0288 - 0x0260)
class UWBP_LevelName_C final : public UUserWidget
{
public:
	class UBorder*                                Border_57;                                         // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             LevelName;                                         // 0x0268(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   Name_0;                                            // 0x0270(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	class FText SetName();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("WBP_LevelName_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"WBP_LevelName_C")
	}
	static class UWBP_LevelName_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_LevelName_C>();
	}
};
DUMPER7_ASSERTS_UWBP_LevelName_C;

SDK_NAMESPACE_END
