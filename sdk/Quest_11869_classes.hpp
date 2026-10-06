#pragma once



// Package: Quest_11869

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_11869.Quest_11869_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_11869_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_11869_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_11869(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_C5A1D764486610CEE841C58CEBB53DAA(bool bWinOrLose);
	void OnFinished_8F2D13644E528480961D29B569277B6E();
	void OnStop_8F2D13644E528480961D29B569277B6E();
	void OnDlgClosed_C65B1EB047B3C75C9FA89AA5256D8415(int32 NPCId);
	void OnDlgSelectedOption_C65B1EB047B3C75C9FA89AA5256D8415(int32 NPCId);
	void OnSuccess_BA0A352944D6C47F70A98AB2B80FCE7A(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_11869_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_11869_C")
	}
	static class UQuest_11869_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_11869_C>();
	}
};
DUMPER7_ASSERTS_UQuest_11869_C;

SDK_NAMESPACE_END
