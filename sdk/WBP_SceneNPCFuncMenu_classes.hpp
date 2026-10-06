#pragma once



// Package: WBP_SceneNPCFuncMenu

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass WBP_SceneNPCFuncMenu.WBP_SceneNPCFuncMenu_C
// 0x0020 (0x0320 - 0x0300)
class UWBP_SceneNPCFuncMenu_C final : public UNPCFunctionMenuItemWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0300(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                BTNMenuItem;                                       // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UJHGPCBtn_ActiveBG_C*                   NPCMenuActiveDisplay;                              // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUITextBlockBase*                    TXTMenuItem;                                       // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_SceneNPCFuncMenu(int32 EntryPoint);
	void HandleHarvestAll();
	void EVT_UpdateActiveStatus(bool IsActive);
	void HandleGuildPatrol();
	void HandleUpdateInfo(const class FText& ViewText);
	void BndEvt__BTNMenuItem_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("WBP_SceneNPCFuncMenu_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"WBP_SceneNPCFuncMenu_C")
	}
	static class UWBP_SceneNPCFuncMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_SceneNPCFuncMenu_C>();
	}
};
DUMPER7_ASSERTS_UWBP_SceneNPCFuncMenu_C;

SDK_NAMESPACE_END
