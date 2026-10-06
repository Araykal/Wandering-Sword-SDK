#pragma once



// Package: BPCMP_CommonBlockContainer

#include "Basic.hpp"

#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPCMP_CommonBlockContainer.BPCMP_CommonBlockContainer_C
// 0x0020 (0x0468 - 0x0448)
class UBPCMP_CommonBlockContainer_C final : public UTeamSubModuleCommonContainer
{
public:
	class UImage*                                 Image_131;                                         // 0x0448(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        NeoUIImageBase_42;                                 // 0x0450(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        NeoUIImageBase_129;                                // 0x0458(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUINamedSlot*                        SLOT_Main;                                         // 0x0460(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPCMP_CommonBlockContainer_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPCMP_CommonBlockContainer_C")
	}
	static class UBPCMP_CommonBlockContainer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPCMP_CommonBlockContainer_C>();
	}
};
DUMPER7_ASSERTS_UBPCMP_CommonBlockContainer_C;

SDK_NAMESPACE_END
