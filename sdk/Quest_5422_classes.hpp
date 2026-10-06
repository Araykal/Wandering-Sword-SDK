#pragma once



// Package: Quest_5422

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5422.Quest_5422_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_5422_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5422_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_5422(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_9FAB8E5A47A8BCA47E2810B56A28EE2D(bool bWinOrLose);
	void OnSuccess_B7AB85FF4948E29ED42FECA65916BD10(bool bWinOrLose);
	void OnSuccess_8FEA62E742C5031C0FAE17B8F1DA322C(bool bWinOrLose);
	void OnFinished_B26ED87D4B42230F52476BBA31C82086();
	void OnStop_B26ED87D4B42230F52476BBA31C82086();
	void OnDlgClosed_3AAB117D49E59185759165BA68559F49(int32 NPCId);
	void OnDlgSelectedOption_3AAB117D49E59185759165BA68559F49(int32 NPCId);
	void OnSuccess_E161BE68482EEC97E49D6697F1CF8EB7(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5422_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5422_C")
	}
	static class UQuest_5422_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5422_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5422_C;

SDK_NAMESPACE_END
