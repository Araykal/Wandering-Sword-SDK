#pragma once



// Package: VE_FusionListGenre_Apparel

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass VE_FusionListGenre_Apparel.VE_FusionListGenre_Apparel_C
// 0x0028 (0x0300 - 0x02D8)
class UVE_FusionListGenre_Apparel_C final : public UJHFusionListGenreVE
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02D8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UVE_FusionListGenreItem_Apperal_C*      VE_Armor;                                          // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVE_FusionListGenreItem_Apperal_C*      VE_Hat;                                            // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVE_FusionListGenreItem_Apperal_C*      VE_Shoes;                                          // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVE_FusionListGenreItem_Apperal_C*      VE_Trinket;                                        // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_VE_FusionListGenre_Apparel(int32 EntryPoint);
	void EVT_SetupHierarchy();
	void Construct();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("VE_FusionListGenre_Apparel_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"VE_FusionListGenre_Apparel_C")
	}
	static class UVE_FusionListGenre_Apparel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVE_FusionListGenre_Apparel_C>();
	}
};
DUMPER7_ASSERTS_UVE_FusionListGenre_Apparel_C;

SDK_NAMESPACE_END
