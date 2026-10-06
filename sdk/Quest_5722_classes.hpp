#pragma once



// Package: Quest_5722

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5722.Quest_5722_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_5722_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5722_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_5722(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_9FDCE55E4752766EB4954C906DF6057A();
	void OnFinished_45D42A4F4A7E44F95F8D318C140CCA98();
	void OnStop_45D42A4F4A7E44F95F8D318C140CCA98();
	void OnDlgClosed_AEEEBF294E44C606BBCA9CA36694CC0F(int32 NPCId);
	void OnDlgSelectedOption_AEEEBF294E44C606BBCA9CA36694CC0F(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5722_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5722_C")
	}
	static class UQuest_5722_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5722_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5722_C;

SDK_NAMESPACE_END
