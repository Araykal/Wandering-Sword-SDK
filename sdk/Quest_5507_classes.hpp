#pragma once



// Package: Quest_5507

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5507.Quest_5507_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_5507_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5507_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_5507(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_8AF60583483227D3217F90B86A80129F();
	void OnFinished_BEA3BACA4FFA262651BB0EA32ED83BF4();
	void OnStop_BEA3BACA4FFA262651BB0EA32ED83BF4();
	void OnDlgClosed_94BDE3FE4A8DFAF0F23742A857FA01F4(int32 NPCId);
	void OnDlgSelectedOption_94BDE3FE4A8DFAF0F23742A857FA01F4(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5507_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5507_C")
	}
	static class UQuest_5507_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5507_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5507_C;

SDK_NAMESPACE_END
