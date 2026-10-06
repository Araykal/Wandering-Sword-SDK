#pragma once



// Package: JHGHC_Region_Teammate

#include "Basic.hpp"

#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass JHGHC_Region_Teammate.JHGHC_Region_Teammate_C
// 0x0000 (0x0318 - 0x0318)
class UJHGHC_Region_Teammate_C final : public UJHNeoUIGHC_Region
{
public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("JHGHC_Region_Teammate_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"JHGHC_Region_Teammate_C")
	}
	static class UJHGHC_Region_Teammate_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UJHGHC_Region_Teammate_C>();
	}
};
DUMPER7_ASSERTS_UJHGHC_Region_Teammate_C;

SDK_NAMESPACE_END
