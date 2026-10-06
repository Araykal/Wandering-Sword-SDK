#pragma once



// Package: BPVE_BasicPropertyBig

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPVE_BasicPropertyBig.BPVE_BasicPropertyBig_C
// 0x0028 (0x0400 - 0x03D8)
class UBPVE_BasicPropertyBig_C final : public UJHNeoUITeam_Property_BasicBigVE
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03D8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UJHGPCBtn_C*                            BTN_BasicPropertyBig;                              // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UJHGPCBtn_ActiveBG_C*                   JHGPCBtn_ActiveBG;                                 // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUICanvasPanelBase*                  NeoUICanvasPanelBase_0;                            // 0x03F0(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         PropertyIndex;                                     // 0x03F8(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPVE_BasicPropertyBig(int32 EntryPoint);
	void Construct();
	void EVT_GamepadShowTips(int32 intflag, const class FString& strFlag);
	class UWidget* GetToolTipWidget_0();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPVE_BasicPropertyBig_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPVE_BasicPropertyBig_C")
	}
	static class UBPVE_BasicPropertyBig_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPVE_BasicPropertyBig_C>();
	}
};
DUMPER7_ASSERTS_UBPVE_BasicPropertyBig_C;

SDK_NAMESPACE_END
