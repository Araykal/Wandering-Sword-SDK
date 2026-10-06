#pragma once



// Package: Quest_28939

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_28939.Quest_28939_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_28939_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_28939_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_28939(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_E9F957CE4A78805939F093B18F956EAB();
	void OnFinished_94B782DB449750E87FD9A1AC6573FFBE();
	void OnStop_94B782DB449750E87FD9A1AC6573FFBE();
	void OnDlgClosed_4E73C4894913E1FF7F994C94F46C1234(int32 NPCId);
	void OnDlgSelectedOption_4E73C4894913E1FF7F994C94F46C1234(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_28939_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_28939_C")
	}
	static class UQuest_28939_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_28939_C>();
	}
};
DUMPER7_ASSERTS_UQuest_28939_C;

SDK_NAMESPACE_END
