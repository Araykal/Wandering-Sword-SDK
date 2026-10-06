#pragma once



// Package: BPMV_BattleWinMaster

#include "Basic.hpp"

#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPMV_BattleWinMaster.BPMV_BattleWinMaster_C
// 0x0000 (0x03D0 - 0x03D0)
class UBPMV_BattleWinMaster_C final : public UJHNeoUIBattleResultViewMaster
{
public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPMV_BattleWinMaster_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPMV_BattleWinMaster_C")
	}
	static class UBPMV_BattleWinMaster_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPMV_BattleWinMaster_C>();
	}
};
DUMPER7_ASSERTS_UBPMV_BattleWinMaster_C;

SDK_NAMESPACE_END
