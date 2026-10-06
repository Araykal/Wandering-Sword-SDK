#pragma once



// Package: BTN_SwapUniform

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BTN_SwapUniform.BTN_SwapUniform_C
// 0x0028 (0x0308 - 0x02E0)
class UBTN_SwapUniform_C final : public UJHNeoUICommonSeqImgBtn
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UJHGPCBtn_C*                            BTN_SwapSkin;                                      // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UJHGPCBtn_ActiveBG_C*                   JHGPCBtn_ActiveBG;                                 // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMulticastInlineDelegate<void()>              BtnClick;                                          // 0x02F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void ExecuteUbergraph_BTN_SwapUniform(int32 EntryPoint);
	void BndEvt__BPCMP_SkillSlotNavi_JHGPCBtn_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BTN_SwapUniform_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BTN_SwapUniform_C")
	}
	static class UBTN_SwapUniform_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTN_SwapUniform_C>();
	}
};
DUMPER7_ASSERTS_UBTN_SwapUniform_C;

SDK_NAMESPACE_END
