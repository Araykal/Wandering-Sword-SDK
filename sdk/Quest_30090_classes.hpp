#pragma once



// Package: Quest_30090

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_30090.Quest_30090_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_30090_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_30090_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         Num;                                               // 0x0248(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_30090(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_C187F4104BC41EE480487587FE0F6348(bool bWinOrLose);
	void OnFinished_ED84D10142E751D209895C9DC7E798B8();
	void OnStop_ED84D10142E751D209895C9DC7E798B8();
	void OnDlgClosed_723544B04BA67EA829782CB1CE36C5CA(int32 NPCId);
	void OnDlgSelectedOption_723544B04BA67EA829782CB1CE36C5CA(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_30090_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_30090_C")
	}
	static class UQuest_30090_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_30090_C>();
	}
};
DUMPER7_ASSERTS_UQuest_30090_C;

SDK_NAMESPACE_END
