#pragma once



// Package: WBP_HealthBar

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass WBP_HealthBar.WBP_HealthBar_C
// 0x01C8 (0x0428 - 0x0260)
class UWBP_HealthBar_C final : public UHealthBarWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       ArrowVibrating;                                    // 0x0268(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UProgressBar*                           HPProgress;                                        // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        IMG_Arrow;                                         // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           TurnProgress;                                      // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FProgressBarStyle                      GreenStyle;                                        // 0x0288(0x01A0)(Edit, BlueprintVisible)

public:
	void ExecuteUbergraph_WBP_HealthBar(int32 EntryPoint);
	void ShowArrow();
	void HideArrow();
	void HandleHealthChange(float InPercent);
	void HandleTurnChange(float InPercent);
	void Construct();
	void SwithToGreenHealth();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("WBP_HealthBar_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"WBP_HealthBar_C")
	}
	static class UWBP_HealthBar_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_HealthBar_C>();
	}
};
DUMPER7_ASSERTS_UWBP_HealthBar_C;

SDK_NAMESPACE_END
