#pragma once



// Package: BPVE_RoomName

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPVE_RoomName.BPVE_RoomName_C
// 0x0028 (0x0318 - 0x02F0)
class UBPVE_RoomName_C final : public UJHNeoUIHUD_RoomName
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       HideAnim;                                          // 0x02F8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ShowAnim;                                          // 0x0300(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UNeoUIImageBase*                        NeoUIImageBase_65;                                 // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUITextBlockBase*                    TXT_Title;                                         // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPVE_RoomName(int32 EntryPoint);
	void EVT_HideRoomName();
	void EVT_ShowRoomName();
	void CT_Root_Event_0(class UNeoUICanvasPanelBase* CT_Root);
	void SequenceEvent__ENTRYPOINTBPVE_RoomName_0(class UNeoUICanvasPanelBase* CT_Root);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPVE_RoomName_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPVE_RoomName_C")
	}
	static class UBPVE_RoomName_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPVE_RoomName_C>();
	}
};
DUMPER7_ASSERTS_UBPVE_RoomName_C;

SDK_NAMESPACE_END
