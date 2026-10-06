#pragma once



// Package: BPVE_MicroPopupMsg

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPVE_MicroPopupMsg.BPVE_MicroPopupMsg_C
// 0x0030 (0x0398 - 0x0368)
class UBPVE_MicroPopupMsg_C final : public UJHNeoUIMicroPopupMsgVE
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0368(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       MoveAnim;                                          // 0x0370(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UNeoUIHorizontalBox*                    CT_Main;                                           // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        IMG_Icon;                                          // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUITextBlockBase*                    TXT_Main;                                          // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUITextBlockBase*                    TXT_Num;                                           // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPVE_MicroPopupMsg(int32 EntryPoint);
	void EVT_UpdateTextColor(const struct FSlateColor& Clr);
	void EVT_StartShow(const struct FJHNeoUIMicroPopupMsgItem& Msg);
	void SequenceEvent_0();
	void SequenceEvent__ENTRYPOINTBPVE_MicroPopupMsg_0();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPVE_MicroPopupMsg_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPVE_MicroPopupMsg_C")
	}
	static class UBPVE_MicroPopupMsg_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPVE_MicroPopupMsg_C>();
	}
};
DUMPER7_ASSERTS_UBPVE_MicroPopupMsg_C;

SDK_NAMESPACE_END
