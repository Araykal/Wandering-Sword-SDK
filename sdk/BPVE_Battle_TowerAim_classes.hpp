#pragma once



// Package: BPVE_Battle_TowerAim

#include "Basic.hpp"

#include "NeoUI_classes.hpp"
#include "Engine_structs.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPVE_Battle_TowerAim.BPVE_Battle_TowerAim_C
// 0x0020 (0x02F8 - 0x02D8)
class UBPVE_Battle_TowerAim_C final : public UNeoUIVisualElementBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02D8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNeoUIImageBase*                        IMG_Fail;                                          // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        IMG_Success;                                       // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUITextBlockBase*                    TXT_Content;                                       // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPVE_Battle_TowerAim(int32 EntryPoint);
	void EVT_RenderView();
	void UpdateFlagStatus(bool successful);
	void ResetFlagStatus();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPVE_Battle_TowerAim_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPVE_Battle_TowerAim_C")
	}
	static class UBPVE_Battle_TowerAim_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPVE_Battle_TowerAim_C>();
	}
};
DUMPER7_ASSERTS_UBPVE_Battle_TowerAim_C;

SDK_NAMESPACE_END
