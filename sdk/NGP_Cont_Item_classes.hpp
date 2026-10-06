#pragma once



// Package: NGP_Cont_Item

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"
#include "SlateCore_structs.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass NGP_Cont_Item.NGP_Cont_Item_C
// 0x0050 (0x02F0 - 0x02A0)
class UNGP_Cont_Item_C final : public UJHNeoUINGP_DepatureContent_Item
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBPVE_NGP_DepartureItem_C*              VE_InitialClothes;                                 // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPVE_NGP_DepartureItem_C*              VE_InitialFist;                                    // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPVE_NGP_DepartureItem_C*              VE_InitialHelmet;                                  // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPVE_NGP_DepartureItem_C*              VE_InitialHiddenWeapon;                            // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPVE_NGP_DepartureItem_C*              VE_InitialOrnament;                                // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPVE_NGP_DepartureItem_C*              VE_InitialSaber;                                   // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPVE_NGP_DepartureItem_C*              VE_InitialShoes;                                   // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPVE_NGP_DepartureItem_C*              VE_InitialSpear;                                   // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPVE_NGP_DepartureItem_C*              VE_InitialSword;                                   // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_NGP_Cont_Item(int32 EntryPoint);
	void EVT_StartFocusContent();
	void EVT_ProvideChildArea(TArray<class UNeoUIVisualElementBase*>* ChildArea);
	class UWidget* Navi_GotoDepartureBtn(EUINavigation Navigation_0);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("NGP_Cont_Item_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NGP_Cont_Item_C")
	}
	static class UNGP_Cont_Item_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNGP_Cont_Item_C>();
	}
};
DUMPER7_ASSERTS_UNGP_Cont_Item_C;

SDK_NAMESPACE_END
