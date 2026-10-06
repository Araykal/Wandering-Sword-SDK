#pragma once



// Package: BPCMP_SkillSlotNavi_Previous

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPCMP_SkillSlotNavi_Previous.BPCMP_SkillSlotNavi_Previous_C
// 0x0020 (0x0300 - 0x02E0)
class UBPCMP_SkillSlotNavi_Previous_C final : public UJHNeoUISkillCoreSlotNaviBtn
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UJHGPCBtn_C*                            JHGPCBtn;                                          // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMulticastInlineDelegate<void()>              BtnClick;                                          // 0x02F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void ExecuteUbergraph_BPCMP_SkillSlotNavi_Previous(int32 EntryPoint);
	void BndEvt__BPCMP_SkillSlotNavi_JHGPCBtn_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPCMP_SkillSlotNavi_Previous_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPCMP_SkillSlotNavi_Previous_C")
	}
	static class UBPCMP_SkillSlotNavi_Previous_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPCMP_SkillSlotNavi_Previous_C>();
	}
};
DUMPER7_ASSERTS_UBPCMP_SkillSlotNavi_Previous_C;

SDK_NAMESPACE_END
