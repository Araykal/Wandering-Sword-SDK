#pragma once



// Package: BPVE_Tips_SkillDesc_Ranged_AA

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPVE_Tips_SkillDesc_Ranged_AA.BPVE_Tips_SkillDesc_Ranged_AA_C
// 0x0010 (0x02F8 - 0x02E8)
class UBPVE_Tips_SkillDesc_Ranged_AA_C final : public UJHNeoUITipsLineBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNeoUITextBlockBase*                    TXT1;                                              // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPVE_Tips_SkillDesc_Ranged_AA(int32 EntryPoint);
	void EVT_RenderView();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPVE_Tips_SkillDesc_Ranged_AA_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPVE_Tips_SkillDesc_Ranged_AA_C")
	}
	static class UBPVE_Tips_SkillDesc_Ranged_AA_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPVE_Tips_SkillDesc_Ranged_AA_C>();
	}
};
DUMPER7_ASSERTS_UBPVE_Tips_SkillDesc_Ranged_AA_C;

SDK_NAMESPACE_END
