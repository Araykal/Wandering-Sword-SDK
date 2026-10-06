#pragma once



// Package: Quest_5323

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5323.Quest_5323_C
// 0x0020 (0x0260 - 0x0240)
class UQuest_5323_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5323_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         NewVar_0;                                          // 0x0248(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24C[0x4];                                      // 0x024C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 Quest;                                             // 0x0250(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_Quest_5323(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_5426B3774CB15B185747F0A764A81B05();
	void OnStop_5426B3774CB15B185747F0A764A81B05();
	void OnDlgClosed_C4068502439913A30DC42CA30EF1D767(int32 NPCId);
	void OnDlgSelectedOption_C4068502439913A30DC42CA30EF1D767(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5323_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5323_C")
	}
	static class UQuest_5323_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5323_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5323_C;

SDK_NAMESPACE_END
