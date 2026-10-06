#pragma once



// Package: BP_AutosaveTip

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BP_AutosaveTip.BP_AutosaveTip_C
// 0x0018 (0x02F0 - 0x02D8)
class UBP_AutosaveTip_C final : public UJHNeoUIAutoSaveTip
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02D8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       FadeAnim;                                          // 0x02E0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UNeoUIImageBase*                        NeoUIImageBase_68;                                 // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_AutosaveTip(int32 EntryPoint);
	void EVT_StartAnim();
	void SequenceEvent_0();
	void SequenceEvent__ENTRYPOINTBP_AutosaveTip_0();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BP_AutosaveTip_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BP_AutosaveTip_C")
	}
	static class UBP_AutosaveTip_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AutosaveTip_C>();
	}
};
DUMPER7_ASSERTS_UBP_AutosaveTip_C;

SDK_NAMESPACE_END
