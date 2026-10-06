#pragma once



// Package: Quest_5786

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5786.Quest_5786_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_5786_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5786_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_5786(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_D488BE614DEEB794EC57A6B99BDEF75A();
	void OnFinished_22475E9641A1F2BD3EB0DB9A1AF67105();
	void OnStop_22475E9641A1F2BD3EB0DB9A1AF67105();
	void OnDlgClosed_F663BF4543746D8ED2902EAB43B6B1EB(int32 NPCId);
	void OnDlgSelectedOption_F663BF4543746D8ED2902EAB43B6B1EB(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5786_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5786_C")
	}
	static class UQuest_5786_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5786_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5786_C;

SDK_NAMESPACE_END
