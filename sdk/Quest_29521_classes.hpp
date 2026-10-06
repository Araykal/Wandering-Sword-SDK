#pragma once



// Package: Quest_29521

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_29521.Quest_29521_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_29521_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_29521_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_29521(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_AF8A8E0A481116A210EBC68FD81EE74A(bool bWinOrLose);
	void OnFinished_6656ECBF4C552BACB3CB8EB46049747B();
	void OnStop_6656ECBF4C552BACB3CB8EB46049747B();
	void OnDlgClosed_18313E6045B54A24E307E7A3C0EDA5DE(int32 NPCId);
	void OnDlgSelectedOption_18313E6045B54A24E307E7A3C0EDA5DE(int32 NPCId);
	void OnSuccess_D9FA28D3489FC82C4718A288230CF161(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_29521_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_29521_C")
	}
	static class UQuest_29521_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_29521_C>();
	}
};
DUMPER7_ASSERTS_UQuest_29521_C;

SDK_NAMESPACE_END
