#pragma once



// Package: BPVE_SaveFilesBtn

#include "Basic.hpp"

#include "NeoUI_classes.hpp"
#include "Engine_structs.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPVE_SaveFilesBtn.BPVE_SaveFilesBtn_C
// 0x0020 (0x0608 - 0x05E8)
class UBPVE_SaveFilesBtn_C final : public UNeoUI1Btn1ImgComp
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x05E8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNeoUITextBlockBase*                    TXTabc;                                            // 0x05F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMulticastInlineDelegate<void()>              BtnClick;                                          // 0x05F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void ExecuteUbergraph_BPVE_SaveFilesBtn(int32 EntryPoint);
	void BndEvt__BPVE_SaveFilesBtn_BTN_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPVE_SaveFilesBtn_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPVE_SaveFilesBtn_C")
	}
	static class UBPVE_SaveFilesBtn_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPVE_SaveFilesBtn_C>();
	}
};
DUMPER7_ASSERTS_UBPVE_SaveFilesBtn_C;

SDK_NAMESPACE_END
