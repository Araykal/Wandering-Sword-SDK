#pragma once



// Package: Quest_5271

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5271.Quest_5271_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_5271_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5271_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_5271(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_E065B08741CFA37011E48A86B90C7E33();
	void OnFinished_D8ED0AEA412CB0EB21DCECA0C9AFC17B();
	void OnStop_D8ED0AEA412CB0EB21DCECA0C9AFC17B();
	void OnDlgClosed_45CAEC2743FB25181C0A05BD3CB31E9F(int32 NPCId);
	void OnDlgSelectedOption_45CAEC2743FB25181C0A05BD3CB31E9F(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5271_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5271_C")
	}
	static class UQuest_5271_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5271_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5271_C;

SDK_NAMESPACE_END
