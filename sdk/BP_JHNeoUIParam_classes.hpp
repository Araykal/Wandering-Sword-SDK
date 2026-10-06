#pragma once



// Package: BP_JHNeoUIParam

#include "Basic.hpp"

#include "JH_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass BP_JHNeoUIParam.BP_JHNeoUIParam_C
// 0x0000 (0x0110 - 0x0110)
class UBP_JHNeoUIParam_C final : public UJHNeoUIGlobalParam
{
public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BP_JHNeoUIParam_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BP_JHNeoUIParam_C")
	}
	static class UBP_JHNeoUIParam_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_JHNeoUIParam_C>();
	}
};
DUMPER7_ASSERTS_UBP_JHNeoUIParam_C;

SDK_NAMESPACE_END
