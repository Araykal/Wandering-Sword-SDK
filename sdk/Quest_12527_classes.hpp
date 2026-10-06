#pragma once



// Package: Quest_12527

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_12527.Quest_12527_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_12527_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_12527_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         NewVar_0;                                          // 0x0248(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_12527(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_C71FE1AF45156FE8EAE3BD99EE85BE8B(bool bWinOrLose);
	void OnSuccess_AB81E56D4CE863DD0C53649EE024F2C6(bool bWinOrLose);
	void OnSuccess_3F1D0E414C3496995F7FD3A2847DB10B(bool bWinOrLose);
	void OnFinished_ED20677B4E6D00AA11DC359BE93F48A8();
	void OnStop_ED20677B4E6D00AA11DC359BE93F48A8();
	void OnDlgClosed_6F1360B5490326C6AB49689D2DD1973F(int32 NPCId);
	void OnDlgSelectedOption_6F1360B5490326C6AB49689D2DD1973F(int32 NPCId);
	void OnSuccess_D178A29B4E54338247618697B4FD755C(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_12527_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_12527_C")
	}
	static class UQuest_12527_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_12527_C>();
	}
};
DUMPER7_ASSERTS_UQuest_12527_C;

SDK_NAMESPACE_END
