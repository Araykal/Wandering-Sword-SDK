#pragma once



// Package: VE_FusionListGenreItem_Apperal

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass VE_FusionListGenreItem_Apperal.VE_FusionListGenreItem_Apperal_C
// 0x0010 (0x02F8 - 0x02E8)
class UVE_FusionListGenreItem_Apperal_C final : public UJHFusionListGenreItemVE
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNeoUIImageBase*                        IMG_Icon;                                          // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_VE_FusionListGenreItem_Apperal(int32 EntryPoint);
	void BndEvt__VE_FusionListGenreItem_Apperal_BTN_Main_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void EVT_RenderView();
	void SetIconImg(class UTexture2D* Icon);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("VE_FusionListGenreItem_Apperal_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"VE_FusionListGenreItem_Apperal_C")
	}
	static class UVE_FusionListGenreItem_Apperal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVE_FusionListGenreItem_Apperal_C>();
	}
};
DUMPER7_ASSERTS_UVE_FusionListGenreItem_Apperal_C;

SDK_NAMESPACE_END
