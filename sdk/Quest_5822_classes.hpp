#pragma once



// Package: Quest_5822

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5822.Quest_5822_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_5822_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5822_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_5822(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_F4EFFC80492B8ECD5322FB91E7B53584();
	void OnFinished_F0F5468A4499DF3B715E8AA3F438DB37();
	void OnStop_F0F5468A4499DF3B715E8AA3F438DB37();
	void OnDlgClosed_39C7A7794C53698A60A7B599315119C0(int32 NPCId);
	void OnDlgSelectedOption_39C7A7794C53698A60A7B599315119C0(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5822_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5822_C")
	}
	static class UQuest_5822_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5822_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5822_C;

SDK_NAMESPACE_END
