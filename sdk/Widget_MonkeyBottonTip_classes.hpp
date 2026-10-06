#pragma once



// Package: Widget_MonkeyBottonTip

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass Widget_MonkeyBottonTip.Widget_MonkeyBottonTip_C
// 0x0010 (0x0270 - 0x0260)
class UWidget_MonkeyBottonTip_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UNeoUIHorizontalBox*                    NeoUIHorizontalBox_44;                             // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Widget_MonkeyBottonTip(int32 EntryPoint);
	void ClearChildren();
	void AddDanceStep(class UWidget* Content);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Widget_MonkeyBottonTip_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Widget_MonkeyBottonTip_C")
	}
	static class UWidget_MonkeyBottonTip_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWidget_MonkeyBottonTip_C>();
	}
};
DUMPER7_ASSERTS_UWidget_MonkeyBottonTip_C;

SDK_NAMESPACE_END
