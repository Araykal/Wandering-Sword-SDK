#pragma once



// Package: VE_GH_SubtypeBtn

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass VE_GH_SubtypeBtn.VE_GH_SubtypeBtn_C
// 0x0010 (0x0408 - 0x03F8)
class UVE_GH_SubtypeBtn_C final : public UJHNeoUIGHC_SubTypeBtn
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03F8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UJHGPCBtn_C*                            BTN_GH_Subtype;                                    // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_VE_GH_SubtypeBtn(int32 EntryPoint);
	void BndEvt__VE_GH_SubtypeBtn_BTN_GH_Subtype_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("VE_GH_SubtypeBtn_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"VE_GH_SubtypeBtn_C")
	}
	static class UVE_GH_SubtypeBtn_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVE_GH_SubtypeBtn_C>();
	}
};
DUMPER7_ASSERTS_UVE_GH_SubtypeBtn_C;

SDK_NAMESPACE_END
