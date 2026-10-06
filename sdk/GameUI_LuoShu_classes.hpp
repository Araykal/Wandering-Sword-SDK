#pragma once



// Package: GameUI_LuoShu

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass GameUI_LuoShu.GameUI_LuoShu_C
// 0x0068 (0x02F8 - 0x0290)
class UGameUI_LuoShu_C final : public UJHGameUI_HeTuLuoShu
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNeoUICanvasPanelBase*                  CT_Gamepad;                                        // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUICanvasPanelBase*                  CT_Keyboard;                                       // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        GPP;                                               // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        GPP1;                                              // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UJHCommon_Btn_Free_C*                   JHCommon_Btn_Free;                                 // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UJHGPCBtn_C*                            JHGPCBtn;                                          // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UJHNeoUISeqPlayer_C*                    JHNeoUISeqPlayer;                                  // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        NeoUIImageBase_2;                                  // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        NeoUIImageBase_3;                                  // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        NeoUIImageBase_69;                                 // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        NeoUIImageBase_85;                                 // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        NeoUIImageBase_125;                                // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GameUI_LuoShu(int32 EntryPoint);
	void EVT_UpdateTutorialBtnHighlight(bool bHighlight);
	void BndEvt__GameUI_LuoShu_JHGPCBtn_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn);
	void BndEvt__GameUI_LuoShu_JHCommon_Btn_Free_K2Node_ComponentBoundEvent_0_BtnClick__DelegateSignature();
	void EVT_SyncWithGlobalInputMode();
	void Construct();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("GameUI_LuoShu_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"GameUI_LuoShu_C")
	}
	static class UGameUI_LuoShu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameUI_LuoShu_C>();
	}
};
DUMPER7_ASSERTS_UGameUI_LuoShu_C;

SDK_NAMESPACE_END
