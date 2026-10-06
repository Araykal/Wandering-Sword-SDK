#pragma once



// Package: BP_GlobalMessageView

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BP_GlobalMessageView.BP_GlobalMessageView_C
// 0x0008 (0x03A8 - 0x03A0)
class UBP_GlobalMessageView_C final : public UGlobalMessageModuleView
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_GlobalMessageView(int32 EntryPoint);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BP_GlobalMessageView_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BP_GlobalMessageView_C")
	}
	static class UBP_GlobalMessageView_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_GlobalMessageView_C>();
	}
};
DUMPER7_ASSERTS_UBP_GlobalMessageView_C;

SDK_NAMESPACE_END
