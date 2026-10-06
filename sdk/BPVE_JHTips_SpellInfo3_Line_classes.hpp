#pragma once



// Package: BPVE_JHTips_SpellInfo3_Line

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPVE_JHTips_SpellInfo3_Line.BPVE_JHTips_SpellInfo3_Line_C
// 0x0020 (0x0308 - 0x02E8)
class UBPVE_JHTips_SpellInfo3_Line_C final : public UJHNeoUITipsLineBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNeoUITextBlockBase*                    TXT1;                                              // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUITextBlockBase*                    TXT2;                                              // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUITextBlockBase*                    TXT_Colon;                                         // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPVE_JHTips_SpellInfo3_Line(int32 EntryPoint);
	void EVT_RenderView();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPVE_JHTips_SpellInfo3_Line_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPVE_JHTips_SpellInfo3_Line_C")
	}
	static class UBPVE_JHTips_SpellInfo3_Line_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPVE_JHTips_SpellInfo3_Line_C>();
	}
};
DUMPER7_ASSERTS_UBPVE_JHTips_SpellInfo3_Line_C;

SDK_NAMESPACE_END
