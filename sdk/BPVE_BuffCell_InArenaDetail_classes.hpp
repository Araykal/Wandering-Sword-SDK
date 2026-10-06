#pragma once



// Package: BPVE_BuffCell_InArenaDetail

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPVE_BuffCell_InArenaDetail.BPVE_BuffCell_InArenaDetail_C
// 0x0020 (0x03D0 - 0x03B0)
class UBPVE_BuffCell_InArenaDetail_C final : public UJHNeoUIBattleBuffCell_InArenaDetail
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UJHGPCBtn_ActiveBG_C*                   JHGPCBtn_ActiveBG;                                 // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUICanvasPanelBase*                  NeoUICanvasPanelBase_35;                           // 0x03C0(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        NeoUIImageBase_142;                                // 0x03C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPVE_BuffCell_InArenaDetail(int32 EntryPoint);
	void EVT_GamepadShowTips(int32 intflag, const class FString& strFlag);
	void Construct();
	class UWidget* GetToolTipWidget_0();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPVE_BuffCell_InArenaDetail_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPVE_BuffCell_InArenaDetail_C")
	}
	static class UBPVE_BuffCell_InArenaDetail_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPVE_BuffCell_InArenaDetail_C>();
	}
};
DUMPER7_ASSERTS_UBPVE_BuffCell_InArenaDetail_C;

SDK_NAMESPACE_END
