#pragma once



// Package: VE_Fusion_PropertyList_NoAlign

#include "Basic.hpp"

#include "NeoUI_classes.hpp"
#include "Engine_structs.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass VE_Fusion_PropertyList_NoAlign.VE_Fusion_PropertyList_NoAlign_C
// 0x0048 (0x0320 - 0x02D8)
class UVE_Fusion_PropertyList_NoAlign_C final : public UNeoUIVisualElementBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02D8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNeoUIImageBase*                        NeoUIImageBase_0;                                  // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUITextBlockBase*                    TXT_EquipName;                                     // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVE_Fusion_PropertyLine_NoAlign_C*      VE_FPL_0;                                          // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVE_Fusion_PropertyLine_NoAlign_C*      VE_FPL_1;                                          // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVE_Fusion_PropertyLine_NoAlign_C*      VE_FPL_2;                                          // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVE_Fusion_PropertyLine_NoAlign_C*      VE_FPL_3;                                          // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVE_Fusion_PropertyLine_NoAlign_C*      VE_FPL_4;                                          // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVE_Fusion_PropertyLine_NoAlign_C*      VE_FPL_5;                                          // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_VE_Fusion_PropertyList_NoAlign(int32 EntryPoint);
	void EVT_RenderView();
	void EVT_SetupHierarchy();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("VE_Fusion_PropertyList_NoAlign_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"VE_Fusion_PropertyList_NoAlign_C")
	}
	static class UVE_Fusion_PropertyList_NoAlign_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVE_Fusion_PropertyList_NoAlign_C>();
	}
};
DUMPER7_ASSERTS_UVE_Fusion_PropertyList_NoAlign_C;

SDK_NAMESPACE_END
