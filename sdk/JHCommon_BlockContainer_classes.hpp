#pragma once



// Package: JHCommon_BlockContainer

#include "Basic.hpp"

#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass JHCommon_BlockContainer.JHCommon_BlockContainer_C
// 0x0008 (0x0450 - 0x0448)
class UJHCommon_BlockContainer_C final : public UTeamSubModuleCommonContainer
{
public:
	class UNeoUINamedSlot*                        SLOT_Main;                                         // 0x0448(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("JHCommon_BlockContainer_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"JHCommon_BlockContainer_C")
	}
	static class UJHCommon_BlockContainer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UJHCommon_BlockContainer_C>();
	}
};
DUMPER7_ASSERTS_UJHCommon_BlockContainer_C;

SDK_NAMESPACE_END
