#pragma once



// Package: BP_CompareSystem_Base

#include "Basic.hpp"

#include "JH_structs.hpp"
#include "JH_classes.hpp"
#include "Engine_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass BP_CompareSystem_Base.BP_CompareSystem_Base_C
// 0x0078 (0x0100 - 0x0088)
class UBP_CompareSystem_Base_C final : public UCompareSystem
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0088(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         CurrentNPCId;                                      // 0x0090(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_94[0x4];                                       // 0x0094(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FDlgContentSetting>             友好度不足时对话;                                  // 0x0098(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FActionSetting>                 胜利执行;                                          // 0x00A8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FActionSetting>                 失败执行;                                          // 0x00B8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FDlgContentSetting>             精力不足时对话;                                    // 0x00C8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          HasItem;                                           // 0x00D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D9[0x7];                                       // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FActionSetting>                 胜利执行_0;                                        // 0x00E0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FActionSetting>                 失败执行_0;                                        // 0x00F0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_BP_CompareSystem_Base(int32 EntryPoint);
	void Reset();
	void Active(int32 NPCId);
	void OnCompareLose(int32 NPCId);
	void OnCompareWin(int32 NPCId);
	void OnSuccess_41A8752C4C7690442DEEC4A329FD19F6(bool bWinOrLose);
	void OnStartShow_80EA8AAF4A0F0B604BBD04B48D36E34F();
	void OnEndShow_80EA8AAF4A0F0B604BBD04B48D36E34F();
	void OnSuccess_2CAFAD93449584013EE7868B86AB988D(bool bWinOrLose);
	void OnDlgClosed_DFA0A49D4F4987E0EBD2B6A566F089BB(int32 NPCId);
	void OnDlgSelectedOption_DFA0A49D4F4987E0EBD2B6A566F089BB(int32 NPCId);
	void OnDlgClosed_EB1E6A5346A3042986E1F8809793F66B(int32 NPCId);
	void OnDlgSelectedOption_EB1E6A5346A3042986E1F8809793F66B(int32 NPCId);
	void OnDlgClosed_74660D4F4279D9E0B5075DA8BB820C52(int32 NPCId);
	void OnDlgSelectedOption_74660D4F4279D9E0B5075DA8BB820C52(int32 NPCId);
	bool CheckRequirement(int32 NPCId);
	void On_Fail();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BP_CompareSystem_Base_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BP_CompareSystem_Base_C")
	}
	static class UBP_CompareSystem_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_CompareSystem_Base_C>();
	}
};
DUMPER7_ASSERTS_UBP_CompareSystem_Base_C;

SDK_NAMESPACE_END
