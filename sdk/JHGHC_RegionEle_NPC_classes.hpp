#pragma once



// Package: JHGHC_RegionEle_NPC

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass JHGHC_RegionEle_NPC.JHGHC_RegionEle_NPC_C
// 0x0028 (0x03B0 - 0x0388)
class UJHGHC_RegionEle_NPC_C final : public UJHNeoUIGHC_RegionElement_NPC
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0388(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UJHGPCBtn_C*                            BTN_GHC_Prop;                                      // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UJHGPCBtn_ActiveBG_C*                   JHGPCBtn_ActiveBG;                                 // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        NeoUIImageBase_36;                                 // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        NeoUIImageBase_44;                                 // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_JHGHC_RegionEle_NPC(int32 EntryPoint);
	void BndEvt__JHGHC_RegionEle_NPC_BTN_GHC_Prop_K2Node_ComponentBoundEvent_0_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature(class UJHNeoUIGamepadConfirmButton* Btn);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("JHGHC_RegionEle_NPC_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"JHGHC_RegionEle_NPC_C")
	}
	static class UJHGHC_RegionEle_NPC_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UJHGHC_RegionEle_NPC_C>();
	}
};
DUMPER7_ASSERTS_UJHGHC_RegionEle_NPC_C;

SDK_NAMESPACE_END
