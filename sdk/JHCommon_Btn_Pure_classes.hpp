#pragma once



// Package: JHCommon_Btn_Pure

#include "Basic.hpp"

#include "NeoUI_classes.hpp"
#include "Engine_structs.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass JHCommon_Btn_Pure.JHCommon_Btn_Pure_C
// 0x0028 (0x0300 - 0x02D8)
class UJHCommon_Btn_Pure_C final : public UNeoUIVisualElementBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02D8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UJHGPCBtn_C*                            BTN_JHCommon_Btn_Pure;                             // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UJHGPCBtn_ActiveBG_C*                   JHGPCBtn_ActiveBG;                                 // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMulticastInlineDelegate<void()>              BtnClick;                                          // 0x02F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void ExecuteUbergraph_JHCommon_Btn_Pure(int32 EntryPoint);
	void BndEvt__JHCommon_Btn_JHGPCBtn_K2Node_ComponentBoundEvent_2_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn);
	void Construct();
	void ChangeIFAData(const class FString& Str);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("JHCommon_Btn_Pure_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"JHCommon_Btn_Pure_C")
	}
	static class UJHCommon_Btn_Pure_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UJHCommon_Btn_Pure_C>();
	}
};
DUMPER7_ASSERTS_UJHCommon_Btn_Pure_C;

SDK_NAMESPACE_END
