#pragma once



// Package: Quest_5259

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5259.Quest_5259_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_5259_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5259_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_5259(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_A5AD56D44B12B69D34622E994434C4FC(bool bWinOrLose);
	void OnSuccess_198345BE4EFC17FC3186B69E855827DA(bool bWinOrLose);
	void OnSuccess_735DE3FA446CB8E3D91D56AAEBBA4A15(bool bWinOrLose);
	void OnFinished_7FF780794B2B1A0F3DD48F891684147A();
	void OnStop_7FF780794B2B1A0F3DD48F891684147A();
	void OnDlgClosed_9CE0715240BE5A8C93B852B41D9B63B9(int32 NPCId);
	void OnDlgSelectedOption_9CE0715240BE5A8C93B852B41D9B63B9(int32 NPCId);
	void OnSuccess_B5D68E734DEB93768BDB5A9890ACDFC3(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5259_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5259_C")
	}
	static class UQuest_5259_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5259_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5259_C;

SDK_NAMESPACE_END
