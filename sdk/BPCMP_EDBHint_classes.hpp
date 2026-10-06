#pragma once



// Package: BPCMP_EDBHint

#include "Basic.hpp"

#include "NeoUI_classes.hpp"
#include "Engine_structs.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPCMP_EDBHint.BPCMP_EDBHint_C
// 0x0040 (0x02B0 - 0x0270)
class UBPCMP_EDBHint_C final : public UNeoUIComponentBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0270(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNeoUIImageBase*                        NeoUIImageBase_24;                                 // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMulticastInlineDelegate<void()>              OnHintMouseEnter;                                  // 0x0280(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void()>              OnHintMouseLeave;                                  // 0x0290(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void()>              OnHintMouseLeftDown;                               // 0x02A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void ExecuteUbergraph_BPCMP_EDBHint(int32 EntryPoint);
	void EVT_OnMouseLeftDown(const struct FGeometry& InGeometry, const struct FPointerEvent& InMouseEvent);
	void EVT_OnMouseLeave(const struct FPointerEvent& InMouseEvent);
	void EVT_OnMouseEnter(const struct FGeometry& InGeometry, const struct FPointerEvent& InMouseEvent);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPCMP_EDBHint_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPCMP_EDBHint_C")
	}
	static class UBPCMP_EDBHint_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPCMP_EDBHint_C>();
	}
};
DUMPER7_ASSERTS_UBPCMP_EDBHint_C;

SDK_NAMESPACE_END
