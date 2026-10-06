#pragma once



// Package: WBP_AbilityName

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass WBP_AbilityName.WBP_AbilityName_C
// 0x0020 (0x0280 - 0x0260)
class UWBP_AbilityName_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Big2Small;                                         // 0x0268(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UNeoUIOverlayBase*                      CT_Txt;                                            // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TXTAbilityName;                                    // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_AbilityName(int32 EntryPoint);
	void DestroySelf();
	void OnInitialized();
	void PlayShake();
	void SetAbilityName(const class FText& NewName);
	void Play();
	void SequenceEvent__ENTRYPOINTWBP_AbilityName_0();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("WBP_AbilityName_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"WBP_AbilityName_C")
	}
	static class UWBP_AbilityName_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_AbilityName_C>();
	}
};
DUMPER7_ASSERTS_UWBP_AbilityName_C;

SDK_NAMESPACE_END
