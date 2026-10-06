#pragma once



// Package: BP_MonkeyDance

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass BP_MonkeyDance.BP_MonkeyDance_C
// 0x0020 (0x02B0 - 0x0290)
class ABP_MonkeyDance_C final : public AMonkeyDanceActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidget_MonkeyBottonTip_C*              MonkeyUi;                                          // 0x0298(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Index_0;                                           // 0x02A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         失败表情持续时间;                                  // 0x02A4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Level;                                             // 0x02A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NewVar_0;                                          // 0x02AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_MonkeyDance(int32 EntryPoint);
	void BP_PopUpOptions();
	void BP_ToIdldAnim();
	void BP_MonkeyFailAction();
	void BP_MonkeySussAction();
	void OnDlgClosed_ECA344A044C65D126420B192586DC656(int32 NPCId);
	void OnDlgSelectedOption_ECA344A044C65D126420B192586DC656(int32 NPCId);
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BP_MonkeyDance_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BP_MonkeyDance_C")
	}
	static class ABP_MonkeyDance_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_MonkeyDance_C>();
	}
};
DUMPER7_ASSERTS_ABP_MonkeyDance_C;

SDK_NAMESPACE_END
