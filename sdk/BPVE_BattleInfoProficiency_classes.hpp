#pragma once



// Package: BPVE_BattleInfoProficiency

#include "Basic.hpp"

#include "NeoUI_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPVE_BattleInfoProficiency.BPVE_BattleInfoProficiency_C
// 0x0010 (0x03D8 - 0x03C8)
class UBPVE_BattleInfoProficiency_C final : public UNeoUI2TxtComp
{
public:
	class UNeoUIImageBase*                        IMG_Icon;                                          // 0x03C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIHorizontalBox*                    NeoUIHorizontalBox_116;                            // 0x03D0(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetIconImg(class UTexture2D* Icon);
	class UWidget* Get_Tool_Tip_Widget_0();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPVE_BattleInfoProficiency_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPVE_BattleInfoProficiency_C")
	}
	static class UBPVE_BattleInfoProficiency_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPVE_BattleInfoProficiency_C>();
	}
};
DUMPER7_ASSERTS_UBPVE_BattleInfoProficiency_C;

SDK_NAMESPACE_END
