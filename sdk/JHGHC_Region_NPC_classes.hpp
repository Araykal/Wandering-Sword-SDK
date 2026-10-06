#pragma once



// Package: JHGHC_Region_NPC

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass JHGHC_Region_NPC.JHGHC_Region_NPC_C
// 0x0008 (0x0320 - 0x0318)
class UJHGHC_Region_NPC_C final : public UJHNeoUIGHC_Region
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0318(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_JHGHC_Region_NPC(int32 EntryPoint);
	void BndEvt__JHGHC_Region_NPC_VE_Title_K2Node_ComponentBoundEvent_0_BtnClick__DelegateSignature();
	void Construct();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("JHGHC_Region_NPC_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"JHGHC_Region_NPC_C")
	}
	static class UJHGHC_Region_NPC_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UJHGHC_Region_NPC_C>();
	}
};
DUMPER7_ASSERTS_UJHGHC_Region_NPC_C;

SDK_NAMESPACE_END
