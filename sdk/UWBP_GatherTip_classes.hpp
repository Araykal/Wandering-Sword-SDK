#pragma once



// Package: UWBP_GatherTip

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass UWBP_GatherTip.UWBP_GatherTip_C
// 0x0028 (0x0288 - 0x0260)
class UUWBP_GatherTip_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UButton*                                BTNGather;                                         // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 GamePadKey;                                        // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Label_C*                           ShowText;                                          // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUITextBlockBase*                    TXT_Key;                                           // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UWBP_GatherTip(int32 EntryPoint);
	void BndEvt__UWBP_GatherTip_BTNGather_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void SetText(const class FText& InText);
	void CheckGamepad();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("UWBP_GatherTip_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"UWBP_GatherTip_C")
	}
	static class UUWBP_GatherTip_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUWBP_GatherTip_C>();
	}
};
DUMPER7_ASSERTS_UUWBP_GatherTip_C;

SDK_NAMESPACE_END
