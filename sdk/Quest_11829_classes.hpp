#pragma once



// Package: Quest_11829

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_11829.Quest_11829_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_11829_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_11829_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_11829(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_C84E6F6A46A7FB1DD36F21AC99C94F52(bool bWinOrLose);
	void OnSuccess_1506BE1E4B25D94273864CAF25E56728(bool bWinOrLose);
	void OnSuccess_2D391CDF4A5397B19F9CD4ADAD3B6CAC(bool bWinOrLose);
	void OnFinished_C7D5A5564D06935C4C61C88D77578914();
	void OnStop_C7D5A5564D06935C4C61C88D77578914();
	void OnDlgClosed_C1317DED4FEF7207CB92FEA82FFC86C6(int32 NPCId);
	void OnDlgSelectedOption_C1317DED4FEF7207CB92FEA82FFC86C6(int32 NPCId);
	void OnSuccess_4FE7980F4086C98A3CBFF1AECED312E5(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_11829_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_11829_C")
	}
	static class UQuest_11829_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_11829_C>();
	}
};
DUMPER7_ASSERTS_UQuest_11829_C;

SDK_NAMESPACE_END
