#pragma once



// Package: Widget_MonkeyTip

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_structs.hpp"
#include "UMG_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass Widget_MonkeyTip.Widget_MonkeyTip_C
// 0x0038 (0x0298 - 0x0260)
class UWidget_MonkeyTip_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UJHNeoUISeqPlayer_C*                    DownSeqPlayer;                                     // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UJHNeoUISeqPlayer_C*                    FailSeqPlayer;                                     // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UJHNeoUISeqPlayer_C*                    LeftSeqPlayer;                                     // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIVerticalBox*                      NeoUIVerticalBox_37;                               // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UJHNeoUISeqPlayer_C*                    RightSeqPlayer;                                    // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UJHNeoUISeqPlayer_C*                    UpSeqPlayer;                                       // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Widget_MonkeyTip(int32 EntryPoint);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void Set_Dance_Step_Index(EDanceType DanceType);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Widget_MonkeyTip_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Widget_MonkeyTip_C")
	}
	static class UWidget_MonkeyTip_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWidget_MonkeyTip_C>();
	}
};
DUMPER7_ASSERTS_UWidget_MonkeyTip_C;

SDK_NAMESPACE_END
