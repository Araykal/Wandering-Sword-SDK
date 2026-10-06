#pragma once



// Package: Quest_5386

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5386.Quest_5386_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_5386_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5386_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_5386(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_7C415CAE4E3F57CB7B43CD848A18287D(bool bWinOrLose);
	void OnSuccess_683C7B3441420B1C52F1069A5CA984B1(bool bWinOrLose);
	void OnSuccess_CD60CD44463C715CD44E0B96CE671FDE(bool bWinOrLose);
	void OnFinished_8DCCC4D048905D778FDEFDA2457159D6();
	void OnStop_8DCCC4D048905D778FDEFDA2457159D6();
	void OnDlgClosed_1C0CAAFE456BB1A70B1FF39026C25BA8(int32 NPCId);
	void OnDlgSelectedOption_1C0CAAFE456BB1A70B1FF39026C25BA8(int32 NPCId);
	void OnSuccess_F50376FA4FF5F165FB9455854633E4E8(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5386_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5386_C")
	}
	static class UQuest_5386_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5386_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5386_C;

SDK_NAMESPACE_END
