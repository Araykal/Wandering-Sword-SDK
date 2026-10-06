#pragma once



// Package: VE_Cooking_ListGenreGroup

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass VE_Cooking_ListGenreGroup.VE_Cooking_ListGenreGroup_C
// 0x0028 (0x0300 - 0x02D8)
class UVE_Cooking_ListGenreGroup_C final : public UJHNeoUIWorkmanshipListGenreGroupVE
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02D8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UVE_Cooking_ListGenreItem_C*            VE_0;                                              // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVE_Cooking_ListGenreItem_C*            VE_1;                                              // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVE_Cooking_ListGenreItem_C*            VE_2;                                              // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVE_Cooking_ListGenreItem_C*            VE_3;                                              // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_VE_Cooking_ListGenreGroup(int32 EntryPoint);
	void EVT_SetupHierarchy();
	void Construct();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("VE_Cooking_ListGenreGroup_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"VE_Cooking_ListGenreGroup_C")
	}
	static class UVE_Cooking_ListGenreGroup_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVE_Cooking_ListGenreGroup_C>();
	}
};
DUMPER7_ASSERTS_UVE_Cooking_ListGenreGroup_C;

SDK_NAMESPACE_END
