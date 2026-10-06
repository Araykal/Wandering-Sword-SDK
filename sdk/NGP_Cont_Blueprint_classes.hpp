#pragma once



// Package: NGP_Cont_Blueprint

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"
#include "SlateCore_structs.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass NGP_Cont_Blueprint.NGP_Cont_Blueprint_C
// 0x0040 (0x02C8 - 0x0288)
class UNGP_Cont_Blueprint_C final : public UJHNeoUINGP_DepatureContent_Common
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0288(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBPVE_NGP_DepartureItem_C*              VE_bp_alchemy;                                     // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPVE_NGP_DepartureItem_C*              VE_bp_clothes;                                     // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPVE_NGP_DepartureItem_C*              VE_bp_cooking;                                     // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPVE_NGP_DepartureItem_C*              VE_bp_helmet;                                      // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPVE_NGP_DepartureItem_C*              VE_bp_ornament;                                    // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPVE_NGP_DepartureItem_C*              VE_bp_shoes;                                       // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPVE_NGP_DepartureItem_C*              VE_bp_weapon;                                      // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_NGP_Cont_Blueprint(int32 EntryPoint);
	void EVT_StartFocusContent();
	void EVT_ProvideChildArea(TArray<class UNeoUIVisualElementBase*>* ChildArea);
	class UWidget* Navi_GotoDepartureBtn(EUINavigation Navigation_0);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("NGP_Cont_Blueprint_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NGP_Cont_Blueprint_C")
	}
	static class UNGP_Cont_Blueprint_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNGP_Cont_Blueprint_C>();
	}
};
DUMPER7_ASSERTS_UNGP_Cont_Blueprint_C;

SDK_NAMESPACE_END
