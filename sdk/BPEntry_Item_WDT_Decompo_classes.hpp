#pragma once



// Package: BPEntry_Item_WDT_Decompo

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPEntry_Item_WDT_Decompo.BPEntry_Item_WDT_Decompo_C
// 0x0018 (0x0320 - 0x0308)
class UBPEntry_Item_WDT_Decompo_C final : public UJHNeoUIItemEntryWDT_Decompo
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0308(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UJHGPCBtn_ActiveBG_C*                   JHGPCBtn_ActiveBG;                                 // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         PreciseType;                                       // 0x0318(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ShowTipsIntFlag;                                   // 0x031C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPEntry_Item_WDT_Decompo(int32 EntryPoint);
	void Construct();
	void EVT_GamepadShowTips(int32 intflag, const class FString& strFlag);
	class UWidget* Get_Item_Display_Tool_Tip_Widget_0();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPEntry_Item_WDT_Decompo_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPEntry_Item_WDT_Decompo_C")
	}
	static class UBPEntry_Item_WDT_Decompo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPEntry_Item_WDT_Decompo_C>();
	}
};
DUMPER7_ASSERTS_UBPEntry_Item_WDT_Decompo_C;

SDK_NAMESPACE_END
