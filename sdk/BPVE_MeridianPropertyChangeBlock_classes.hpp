#pragma once



// Package: BPVE_MeridianPropertyChangeBlock

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPVE_MeridianPropertyChangeBlock.BPVE_MeridianPropertyChangeBlock_C
// 0x0020 (0x02F8 - 0x02D8)
class UBPVE_MeridianPropertyChangeBlock_C final : public UMeridianPropertyBlock
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02D8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNeoUIImageBase*                        IMG_Up;                                            // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUITextBlockBase*                    TXT2;                                              // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPVE_MeridianPropertyLine_C*           VE_Current;                                        // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPVE_MeridianPropertyChangeBlock(int32 EntryPoint);
	void EVT_RenderView();
	void EVT_SetupHierarchy();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPVE_MeridianPropertyChangeBlock_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPVE_MeridianPropertyChangeBlock_C")
	}
	static class UBPVE_MeridianPropertyChangeBlock_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPVE_MeridianPropertyChangeBlock_C>();
	}
};
DUMPER7_ASSERTS_UBPVE_MeridianPropertyChangeBlock_C;

SDK_NAMESPACE_END
