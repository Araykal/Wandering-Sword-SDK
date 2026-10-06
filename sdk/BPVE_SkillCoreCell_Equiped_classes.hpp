#pragma once



// Package: BPVE_SkillCoreCell_Equiped

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPVE_SkillCoreCell_Equiped.BPVE_SkillCoreCell_Equiped_C
// 0x0008 (0x0308 - 0x0300)
class UBPVE_SkillCoreCell_Equiped_C final : public UJHNeoUISkillCoreCell_Equiped
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0300(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BPVE_SkillCoreCell_Equiped(int32 EntryPoint);
	void Construct();
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPVE_SkillCoreCell_Equiped_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPVE_SkillCoreCell_Equiped_C")
	}
	static class UBPVE_SkillCoreCell_Equiped_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPVE_SkillCoreCell_Equiped_C>();
	}
};
DUMPER7_ASSERTS_UBPVE_SkillCoreCell_Equiped_C;

SDK_NAMESPACE_END
