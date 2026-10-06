#pragma once



// Package: Quest_12096

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_12096.Quest_12096_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_12096_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_12096_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_12096(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_F1C126444D9CA2568B201A87248006EA();
	void OnStop_F1C126444D9CA2568B201A87248006EA();
	void OnDlgClosed_9566A6764802AD6F369A588DA26EFA2D(int32 NPCId);
	void OnDlgSelectedOption_9566A6764802AD6F369A588DA26EFA2D(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_12096_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_12096_C")
	}
	static class UQuest_12096_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_12096_C>();
	}
};
DUMPER7_ASSERTS_UQuest_12096_C;

SDK_NAMESPACE_END
