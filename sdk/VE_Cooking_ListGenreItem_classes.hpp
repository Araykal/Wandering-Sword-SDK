#pragma once



// Package: VE_Cooking_ListGenreItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass VE_Cooking_ListGenreItem.VE_Cooking_ListGenreItem_C
// 0x0008 (0x02F0 - 0x02E8)
class UVE_Cooking_ListGenreItem_C final : public UJHNeoUIWorkmanshipListGenreItemVE
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_VE_Cooking_ListGenreItem(int32 EntryPoint);
	void BndEvt__VE_FusionListGenreItem_Weapon_BTN_Main_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void EVT_RenderView();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("VE_Cooking_ListGenreItem_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"VE_Cooking_ListGenreItem_C")
	}
	static class UVE_Cooking_ListGenreItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVE_Cooking_ListGenreItem_C>();
	}
};
DUMPER7_ASSERTS_UVE_Cooking_ListGenreItem_C;

SDK_NAMESPACE_END
