#pragma once



// Package: UWBP_SkipCGFade

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass UWBP_SkipCGFade.UWBP_SkipCGFade_C
// 0x0018 (0x0290 - 0x0278)
class UUWBP_SkipCGFade_C final : public USkipCGFadeWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       FadeToBlack;                                       // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                                Blackboard;                                        // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UWBP_SkipCGFade(int32 EntryPoint);
	void PlayFadeAnimal(float PlayRate);
	void ResetState();
	void SequenceEvent_0();
	void SequenceEvent__ENTRYPOINTUWBP_SkipCGFade_0();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("UWBP_SkipCGFade_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"UWBP_SkipCGFade_C")
	}
	static class UUWBP_SkipCGFade_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUWBP_SkipCGFade_C>();
	}
};
DUMPER7_ASSERTS_UUWBP_SkipCGFade_C;

SDK_NAMESPACE_END
