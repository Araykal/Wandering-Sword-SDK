#pragma once



// Package: UWBP_MasterMenu

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_structs.hpp"
#include "JH_classes.hpp"
#include "SlateCore_structs.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass UWBP_MasterMenu.UWBP_MasterMenu_C
// 0x00B0 (0x0478 - 0x03C8)
class UUWBP_MasterMenu_C final : public UMasterMenuMainWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03C8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_GAADisplay_C*                       BP_GAADisplay;                                     // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_GAADisplay_C*                       BP_GAADisplay_1;                                   // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_GAADisplay_C*                       BP_GAADisplay_2;                                   // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_GAADisplay_C*                       BP_GAADisplay_3;                                   // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UJHGPCBtn_C*                            BTN_Config;                                        // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UJHGPCBtn_C*                            BTN_Exit;                                          // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UJHGPCBtn_C*                            BTN_Load;                                          // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UJHGPCBtn_C*                            BTN_NewGame;                                       // 0x0408(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPVE_DLCMark_C*                        DLC_BiHaiXianZong;                                 // 0x0410(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPVE_DLCMark_C*                        DLC_Mount;                                         // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPVE_DLCMark_C*                        DLC_WuJiaJiuShi;                                   // 0x0420(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_241;                                         // 0x0428(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        Image_T_shiling;                                   // 0x0430(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        T_sahngdianyelianjie;                              // 0x0438(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        T_wenjuandiaocha;                                  // 0x0440(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUITextBlockBase*                    TXTVer;                                            // 0x0448(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FName                                   LV_110_P;                                          // 0x0450(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                 Recipe_Id;                                         // 0x0458(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          允许交互;                                          // 0x0468(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_469[0x7];                                      // 0x0469(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UJHGPCBtn_C*                            BTN_Load_0;                                        // 0x0470(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UWBP_MasterMenu(int32 EntryPoint);
	void EVT_UpdateLoadButtonStatus(bool IsVisible_0);
	void EVT_FocusWidgetInitDelay();
	void EVT_AppendActiveAreaArr();
	void BndEvt__UWBP_MasterMenu_BTN_Exit_K2Node_ComponentBoundEvent_3_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn);
	void BndEvt__UWBP_MasterMenu_BTN_Config_K2Node_ComponentBoundEvent_2_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn);
	void BndEvt__UWBP_MasterMenu_BTN_Load_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn);
	void BndEvt__UWBP_MasterMenu_BTN_NewGame_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void ShowMain();
	struct FEventReply On_Image_T_shiling_MouseButtonDown_0(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	class UWidget* Get_T_Sahngdianyelianjie_Tool_Tip_Widget_0();
	class UWidget* Get_T_wenjuandiaocha_ToolTipWidget_0();
	struct FEventReply On_T_sahngdianyelianjie_MouseButtonDown_0(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply On_T_wenjuandiaocha_MouseButtonDown_0(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	class UWidget* DoCustomNavigation_0(EUINavigation Navigation_0);
	class UWidget* DoCustomNavigation_1(EUINavigation Navigation_0);
	void 可以交互(bool* 允许交互_0);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("UWBP_MasterMenu_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"UWBP_MasterMenu_C")
	}
	static class UUWBP_MasterMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUWBP_MasterMenu_C>();
	}
};
DUMPER7_ASSERTS_UUWBP_MasterMenu_C;

SDK_NAMESPACE_END
