#pragma once



// Package: WBP_GatherProgressBar

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass WBP_GatherProgressBar.WBP_GatherProgressBar_C
// 0x0010 (0x0288 - 0x0278)
class UWBP_GatherProgressBar_C final : public UProgressBarWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UProgressBar*                           Gather_ProgressBar;                                // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_GatherProgressBar(int32 EntryPoint);
	void HandlePercentChange(float PercentValue);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("WBP_GatherProgressBar_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"WBP_GatherProgressBar_C")
	}
	static class UWBP_GatherProgressBar_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_GatherProgressBar_C>();
	}
};
DUMPER7_ASSERTS_UWBP_GatherProgressBar_C;

SDK_NAMESPACE_END
