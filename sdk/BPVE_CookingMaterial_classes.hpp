#pragma once



// Package: BPVE_CookingMaterial

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPVE_CookingMaterial.BPVE_CookingMaterial_C
// 0x0020 (0x0368 - 0x0348)
class UBPVE_CookingMaterial_C final : public UJHNeoUIWorkmanshipMaterialDisplayItem
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0348(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UJHGPCBtn_C*                            BTN_CookingMaterial;                               // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIBorderBase*                       HotArea_ToolTip;                                   // 0x0358(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UJHGPCBtn_ActiveBG_C*                   JHGPCBtn_ActiveBG;                                 // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPVE_CookingMaterial(int32 EntryPoint);
	void EVT_GamepadShowTips(int32 intflag, const class FString& strFlag);
	void Construct();
	class UWidget* Get_HotArea_ToolTip_ToolTipWidget_0();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPVE_CookingMaterial_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPVE_CookingMaterial_C")
	}
	static class UBPVE_CookingMaterial_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPVE_CookingMaterial_C>();
	}
};
DUMPER7_ASSERTS_UBPVE_CookingMaterial_C;

SDK_NAMESPACE_END
