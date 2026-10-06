#pragma once



// Package: Quest_30911

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_30911.Quest_30911_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_30911_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_30911_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_30911(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_65296510418A6E8B21DB658614E8DF7D();
	void OnFinished_CF1C67814CA55AF4B292FA9C425E305E();
	void OnStop_CF1C67814CA55AF4B292FA9C425E305E();
	void OnDlgClosed_D7173AC142478739BDF49DAEE2DFCB0A(int32 NPCId);
	void OnDlgSelectedOption_D7173AC142478739BDF49DAEE2DFCB0A(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_30911_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_30911_C")
	}
	static class UQuest_30911_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_30911_C>();
	}
};
DUMPER7_ASSERTS_UQuest_30911_C;

SDK_NAMESPACE_END
