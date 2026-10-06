#pragma once



// Package: WBP_FightMapLoadingNew

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass WBP_FightMapLoadingNew.WBP_FightMapLoadingNew_C
// 0x0040 (0x0300 - 0x02C0)
class UWBP_FightMapLoadingNew_C final : public UFightMapLoadingWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       IntoFight;                                         // 0x02C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       IntoScene;                                         // 0x02D0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ShowFight;                                         // 0x02D8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ShowScene;                                         // 0x02E0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                                Black;                                             // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Down;                                              // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Up;                                                // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_FightMapLoadingNew(int32 EntryPoint);
	void SequenceEvent_0();
	void PlayIntoFightMapAnimal();
	void PlayIntoSceneMapAnimal();
	void PlayShowFightMapAnimal();
	void SequenceEvent_1();
	void SequenceEvent_2();
	void SequenceEvent_3();
	void ShowBlack(bool bBlack);
	void PlayShowSceneMapAnimal();
	void SequenceEvent__ENTRYPOINTWBP_FightMapLoadingNew_0();
	void SequenceEvent__ENTRYPOINTWBP_FightMapLoadingNew_1();
	void SequenceEvent__ENTRYPOINTWBP_FightMapLoadingNew_2();
	void SequenceEvent__ENTRYPOINTWBP_FightMapLoadingNew_3();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("WBP_FightMapLoadingNew_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"WBP_FightMapLoadingNew_C")
	}
	static class UWBP_FightMapLoadingNew_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_FightMapLoadingNew_C>();
	}
};
DUMPER7_ASSERTS_UWBP_FightMapLoadingNew_C;

SDK_NAMESPACE_END
