#pragma once



// Package: Quest_30063

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_30063.Quest_30063_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_30063_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_30063_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_30063(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_EFE3A84A4BDD69FD823306A522FDD60B();
	void OnFinished_58EEB03741C0B01C33D938966E87185A();
	void OnStop_58EEB03741C0B01C33D938966E87185A();
	void OnDlgClosed_D984A6504DB8CAE782A62AB874AEA157(int32 NPCId);
	void OnDlgSelectedOption_D984A6504DB8CAE782A62AB874AEA157(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_30063_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_30063_C")
	}
	static class UQuest_30063_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_30063_C>();
	}
};
DUMPER7_ASSERTS_UQuest_30063_C;

SDK_NAMESPACE_END
