#pragma once



// Package: BPVE_PMsgC_Img

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPVE_PMsgC_Img.BPVE_PMsgC_Img_C
// 0x0020 (0x0298 - 0x0278)
class UBPVE_PMsgC_Img_C final : public UHNeoUI_PMsgC_Img
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UJH_CircularProgressBar_C*              CircularProgressBar;                               // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        SkipCG_GP;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        SkipCG_Keyboard;                                   // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPVE_PMsgC_Img(int32 EntryPoint);
	void EVT_SkipEndCG_EndLongPress();
	void EVT_SkipEndCG_StartLongPress();
	void EVT_MsgModuleShow();
	void EVT_SyncWithGlobalInputMode();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPVE_PMsgC_Img_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPVE_PMsgC_Img_C")
	}
	static class UBPVE_PMsgC_Img_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPVE_PMsgC_Img_C>();
	}
};
DUMPER7_ASSERTS_UBPVE_PMsgC_Img_C;

SDK_NAMESPACE_END
