#pragma once



// Package: BPMV_JHNeoUITips

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPMV_JHNeoUITips.BPMV_JHNeoUITips_C
// 0x0008 (0x03E8 - 0x03E0)
class UBPMV_JHNeoUITips_C final : public UJHNeoUITipsModuleView
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BPMV_JHNeoUITips(int32 EntryPoint);
	void EVT_SetupHierarchy();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPMV_JHNeoUITips_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPMV_JHNeoUITips_C")
	}
	static class UBPMV_JHNeoUITips_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPMV_JHNeoUITips_C>();
	}
};
DUMPER7_ASSERTS_UBPMV_JHNeoUITips_C;

SDK_NAMESPACE_END
