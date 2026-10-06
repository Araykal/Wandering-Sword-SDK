#pragma once



// Package: BP_GridPainter

#include "Basic.hpp"

#include "JH_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass BP_GridPainter.BP_GridPainter_C
// 0x0000 (0x00E8 - 0x00E8)
class UBP_GridPainter_C final : public UJHGridPainter
{
public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BP_GridPainter_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BP_GridPainter_C")
	}
	static class UBP_GridPainter_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_GridPainter_C>();
	}
};
DUMPER7_ASSERTS_UBP_GridPainter_C;

SDK_NAMESPACE_END
