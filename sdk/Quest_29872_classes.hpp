#pragma once



// Package: Quest_29872

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_29872.Quest_29872_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_29872_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_29872_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_29872(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnFinished_71DED5264A8B0E8E4E61B4B99191ED3D();
	void OnStop_71DED5264A8B0E8E4E61B4B99191ED3D();
	void OnDlgClosed_DE96F7364EAB0C130F02968184C58C28(int32 NPCId);
	void OnDlgSelectedOption_DE96F7364EAB0C130F02968184C58C28(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_29872_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_29872_C")
	}
	static class UQuest_29872_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_29872_C>();
	}
};
DUMPER7_ASSERTS_UQuest_29872_C;

SDK_NAMESPACE_END
