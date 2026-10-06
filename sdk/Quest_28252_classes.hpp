#pragma once



// Package: Quest_28252

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_28252.Quest_28252_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_28252_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_28252_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_28252(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_8AEB033F4B57C9E836307EADB19C7F48();
	void OnStop_8AEB033F4B57C9E836307EADB19C7F48();
	void OnDlgClosed_A4E7F62A4C66171F75E6C1B18BADD1A6(int32 NPCId);
	void OnDlgSelectedOption_A4E7F62A4C66171F75E6C1B18BADD1A6(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_28252_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_28252_C")
	}
	static class UQuest_28252_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_28252_C>();
	}
};
DUMPER7_ASSERTS_UQuest_28252_C;

SDK_NAMESPACE_END
