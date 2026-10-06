#pragma once



// Package: BPVE_JHTips_FCItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPVE_JHTips_FCItem.BPVE_JHTips_FCItem_C
// 0x0020 (0x02F8 - 0x02D8)
class UBPVE_JHTips_FCItem_C final : public UJHNeoUITips_FCItem
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02D8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNeoUIImageBase*                        IMG_Active;                                        // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        IMG_BG;                                            // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUITextBlockBase*                    TXT_Title;                                         // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPVE_JHTips_FCItem(int32 EntryPoint);
	void EVT_SetItemTitle(const class FText& TT);
	void EVT_SetItemStatus(const bool IsActive);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPVE_JHTips_FCItem_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPVE_JHTips_FCItem_C")
	}
	static class UBPVE_JHTips_FCItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPVE_JHTips_FCItem_C>();
	}
};
DUMPER7_ASSERTS_UBPVE_JHTips_FCItem_C;

SDK_NAMESPACE_END
