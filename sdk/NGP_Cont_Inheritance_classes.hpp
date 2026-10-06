#pragma once



// Package: NGP_Cont_Inheritance

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass NGP_Cont_Inheritance.NGP_Cont_Inheritance_C
// 0x0050 (0x02D0 - 0x0280)
class UNGP_Cont_Inheritance_C final : public UJHNeoUINGP_DepatureContentBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBPVE_NGP_InheritanceItem_C*            BPVE_NGP_InheritanceItem;                          // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPVE_NGP_InheritanceItem_C*            BPVE_NGP_InheritanceItem_1;                        // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPVE_NGP_InheritanceItem_C*            BPVE_NGP_InheritanceItem_2;                        // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPVE_NGP_InheritanceItem_C*            BPVE_NGP_InheritanceItem_3;                        // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPVE_NGP_InheritanceItem_C*            BPVE_NGP_InheritanceItem_4;                        // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPVE_NGP_InheritanceItem_C*            BPVE_NGP_InheritanceItem_5;                        // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPVE_NGP_InheritanceItem_C*            BPVE_NGP_InheritanceItem_6;                        // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPVE_NGP_InheritanceItem_C*            BPVE_NGP_InheritanceItem_7;                        // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        NeoUIImageBaseBG;                                  // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_NGP_Cont_Inheritance(int32 EntryPoint);
	void EVT_StartFocusContent();
	void EVT_ProvideChildArea(TArray<class UNeoUIVisualElementBase*>* ChildArea);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("NGP_Cont_Inheritance_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NGP_Cont_Inheritance_C")
	}
	static class UNGP_Cont_Inheritance_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNGP_Cont_Inheritance_C>();
	}
};
DUMPER7_ASSERTS_UNGP_Cont_Inheritance_C;

SDK_NAMESPACE_END
