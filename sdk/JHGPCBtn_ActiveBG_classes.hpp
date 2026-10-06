#pragma once



// Package: JHGPCBtn_ActiveBG

#include "Basic.hpp"

#include "NeoUI_classes.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass JHGPCBtn_ActiveBG.JHGPCBtn_ActiveBG_C
// 0x0020 (0x0290 - 0x0270)
class UJHGPCBtn_ActiveBG_C final : public UNeoUIComponentBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0270(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       FadeAnim;                                          // 0x0278(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       BorderFadeAnim;                                    // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Image_75;                                          // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_JHGPCBtn_ActiveBG(int32 EntryPoint);
	void HandleVisibilityChanged(ESlateVisibility InVisibility);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("JHGPCBtn_ActiveBG_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"JHGPCBtn_ActiveBG_C")
	}
	static class UJHGPCBtn_ActiveBG_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UJHGPCBtn_ActiveBG_C>();
	}
};
DUMPER7_ASSERTS_UJHGPCBtn_ActiveBG_C;

SDK_NAMESPACE_END
