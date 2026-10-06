#pragma once



// Package: BPMV_JHLoading

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPMV_JHLoading.BPMV_JHLoading_C
// 0x0008 (0x0398 - 0x0390)
class UBPMV_JHLoading_C final : public UJHNeoUILoadingView
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0390(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BPMV_JHLoading(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPMV_JHLoading_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPMV_JHLoading_C")
	}
	static class UBPMV_JHLoading_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPMV_JHLoading_C>();
	}
};
DUMPER7_ASSERTS_UBPMV_JHLoading_C;

SDK_NAMESPACE_END
