#pragma once



// Package: BPVE_SkillStyle

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPVE_SkillStyle.BPVE_SkillStyle_C
// 0x0038 (0x0310 - 0x02D8)
class UBPVE_SkillStyle_C final : public UJHNeoUISkillView_StyleVE
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02D8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNeoUIImageBase*                        IMG_BG;                                            // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPVE_SkillStyleCell_C*                 VE_Item;                                           // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPVE_SkillStyleCell_C*                 VE_Item_1;                                         // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPVE_SkillStyleCell_C*                 VE_Item_2;                                         // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPVE_SkillStyleCell_C*                 VE_Item_3;                                         // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPVE_SkillStyleCell_C*                 VE_Item_4;                                         // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPVE_SkillStyle(int32 EntryPoint);
	void EVT_SetupHierarchy();
	void FirstFocusElement(class UWidget** Ele);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPVE_SkillStyle_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPVE_SkillStyle_C")
	}
	static class UBPVE_SkillStyle_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPVE_SkillStyle_C>();
	}
};
DUMPER7_ASSERTS_UBPVE_SkillStyle_C;

SDK_NAMESPACE_END
