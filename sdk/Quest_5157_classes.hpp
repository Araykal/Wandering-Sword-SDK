#pragma once



// Package: Quest_5157

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5157.Quest_5157_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_5157_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5157_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_5157(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_C5A03835471CD31BF69B08A99D65BE83();
	void OnSuccess_8BD6E50C461197B21A2F42AA96310B85(bool bWinOrLose);
	void OnSuccess_EA9AFAEE4FDA93691256099B4511C0A0();
	void OnSuccess_299C53F3477096B63A79CC8F70D50742(bool bWinOrLose);
	void OnSuccess_B6FD97C84A13FAB9F3941B8197020DC8();
	void OnSuccess_F34163D2474C26BDD7621C91B53E2434(bool bWinOrLose);
	void OnSuccess_2F94C89149B3A0751E091EA7317372B4();
	void OnFinished_8C55B1BF4D8025101B85AA89B67D735A();
	void OnStop_8C55B1BF4D8025101B85AA89B67D735A();
	void OnDlgClosed_876519404CEFCDDCF9615ABD825A2375(int32 NPCId);
	void OnDlgSelectedOption_876519404CEFCDDCF9615ABD825A2375(int32 NPCId);
	void OnSuccess_8EC86CCC490BF99F7930B189193BE366(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5157_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5157_C")
	}
	static class UQuest_5157_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5157_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5157_C;

SDK_NAMESPACE_END
