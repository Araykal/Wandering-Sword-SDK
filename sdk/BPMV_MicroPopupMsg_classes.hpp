#pragma once



// Package: BPMV_MicroPopupMsg

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPMV_MicroPopupMsg.BPMV_MicroPopupMsg_C
// 0x0008 (0x0390 - 0x0388)
class UBPMV_MicroPopupMsg_C final : public UJHNeoUIMicroPopupMsgView
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0388(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BPMV_MicroPopupMsg(int32 EntryPoint);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPMV_MicroPopupMsg_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPMV_MicroPopupMsg_C")
	}
	static class UBPMV_MicroPopupMsg_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPMV_MicroPopupMsg_C>();
	}
};
DUMPER7_ASSERTS_UBPMV_MicroPopupMsg_C;

SDK_NAMESPACE_END
