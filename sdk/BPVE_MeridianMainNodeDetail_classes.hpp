#pragma once



// Package: BPVE_MeridianMainNodeDetail

#include "Basic.hpp"

#include "NeoUI_classes.hpp"
#include "Engine_structs.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPVE_MeridianMainNodeDetail.BPVE_MeridianMainNodeDetail_C
// 0x0038 (0x0310 - 0x02D8)
class UBPVE_MeridianMainNodeDetail_C final : public UNeoUIVisualElementBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02D8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UJHCommon_Btn_Free_C*                   BTN_MeridianMain_All;                              // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UJHCommon_Btn_Free_C*                   BTN_MeridianMainDetail;                            // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUITextBlockBase*                    TXT_MAX;                                           // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUITextBlockBase*                    TXT_NodeName;                                      // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPVE_JHCommon2TXT_C*                   TXT_PointCost;                                     // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPVE_MeridianLevel_C*                  VE_Level;                                          // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPVE_MeridianMainNodeDetail(int32 EntryPoint);
	void BndEvt__BPVE_MeridianMainNodeDetail_BTN_MeridianMain_All_K2Node_ComponentBoundEvent_1_BtnClick__DelegateSignature();
	void BndEvt__BPVE_MeridianMainNodeDetail_BTN_MeridianMainDetail_K2Node_ComponentBoundEvent_0_BtnClick__DelegateSignature();
	void Construct();
	void EVT_RenderView();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPVE_MeridianMainNodeDetail_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPVE_MeridianMainNodeDetail_C")
	}
	static class UBPVE_MeridianMainNodeDetail_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPVE_MeridianMainNodeDetail_C>();
	}
};
DUMPER7_ASSERTS_UBPVE_MeridianMainNodeDetail_C;

SDK_NAMESPACE_END
