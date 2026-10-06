#pragma once



// Package: BPCMP_TeamContainer

#include "Basic.hpp"

#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPCMP_TeamContainer.BPCMP_TeamContainer_C
// 0x0018 (0x0460 - 0x0448)
class UBPCMP_TeamContainer_C final : public UTeamSubModuleCommonContainer
{
public:
	class UNeoUIImageBase*                        NeoUIImageBase_42;                                 // 0x0448(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        NeoUIImageBase_129;                                // 0x0450(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUINamedSlot*                        SLOT_Main;                                         // 0x0458(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPCMP_TeamContainer_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPCMP_TeamContainer_C")
	}
	static class UBPCMP_TeamContainer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPCMP_TeamContainer_C>();
	}
};
DUMPER7_ASSERTS_UBPCMP_TeamContainer_C;

SDK_NAMESPACE_END
