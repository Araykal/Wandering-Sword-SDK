#pragma once



// Package: JHGHC_PropRegion

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass JHGHC_PropRegion.JHGHC_PropRegion_C
// 0x0008 (0x0320 - 0x0318)
class UJHGHC_PropRegion_C final : public UJHNeoUIGHC_Region
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0318(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_JHGHC_PropRegion(int32 EntryPoint);
	void BndEvt__JHGHC_PropRegion_VE_Title_K2Node_ComponentBoundEvent_1_BtnClick__DelegateSignature();
	void Construct();
	struct FEventReply OnMouseButtonDown_0(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("JHGHC_PropRegion_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"JHGHC_PropRegion_C")
	}
	static class UJHGHC_PropRegion_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UJHGHC_PropRegion_C>();
	}
};
DUMPER7_ASSERTS_UJHGHC_PropRegion_C;

SDK_NAMESPACE_END
