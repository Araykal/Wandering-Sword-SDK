#pragma once



// Package: WBP_GM0

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_structs.hpp"
#include "UMG_classes.hpp"
#include "SlateCore_structs.hpp"
#include "GridRuntime_structs.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass WBP_GM0.WBP_GM0_C
// 0x0058 (0x02B8 - 0x0260)
class UWBP_GM0_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UEditableText*                          Text;                                              // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   In_Text;                                           // 0x0270(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FString>                         GM_Text;                                           // 0x0288(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          Help;                                              // 0x0298(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_299[0x7];                                      // 0x0299(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         GMHelp_Text;                                       // 0x02A0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          Hide;                                              // 0x02B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_WBP_GM0(int32 EntryPoint);
	void BndEvt__Text_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature(const class FText& Text_0, ETextCommit CommitMethod);
	void PreConstruct(bool IsDesignTime);
	void OnSuccess_F7F3E96A4CD1B765EE165A9ADE7E2C9B();
	void OnSuccess_3D6190B041BF3995882FC6AEC4829A8F();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("WBP_GM0_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"WBP_GM0_C")
	}
	static class UWBP_GM0_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_GM0_C>();
	}
};
DUMPER7_ASSERTS_UWBP_GM0_C;

SDK_NAMESPACE_END
