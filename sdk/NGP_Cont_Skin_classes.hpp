#pragma once



// Package: NGP_Cont_Skin

#include "Basic.hpp"

#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass NGP_Cont_Skin.NGP_Cont_Skin_C
// 0x0020 (0x02C8 - 0x02A8)
class UNGP_Cont_Skin_C final : public UJHNeoUINGP_Skin
{
public:
	class UBPVE_NGP_SkinItem_C*                   BPVE_NGP_SkinItem;                                 // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPVE_NGP_SkinItem_C*                   BPVE_NGP_SkinItem_1;                               // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPVE_NGP_SkinItem_C*                   BPVE_NGP_SkinItem_2;                               // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPVE_NGP_SkinItem_C*                   BPVE_NGP_SkinItem_3;                               // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("NGP_Cont_Skin_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NGP_Cont_Skin_C")
	}
	static class UNGP_Cont_Skin_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNGP_Cont_Skin_C>();
	}
};
DUMPER7_ASSERTS_UNGP_Cont_Skin_C;

SDK_NAMESPACE_END
