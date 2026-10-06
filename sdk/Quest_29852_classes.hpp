#pragma once



// Package: Quest_29852

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_29852.Quest_29852_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_29852_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_29852_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_29852(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_2DD297364ED93058CD18E8A08721B43D(bool bWinOrLose);
	void OnFinished_41C7449E41E42EC644F4A085D3DEB0E3();
	void OnStop_41C7449E41E42EC644F4A085D3DEB0E3();
	void OnDlgClosed_C34FEEC347814116583A668484BCBE8D(int32 NPCId);
	void OnDlgSelectedOption_C34FEEC347814116583A668484BCBE8D(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_29852_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_29852_C")
	}
	static class UQuest_29852_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_29852_C>();
	}
};
DUMPER7_ASSERTS_UQuest_29852_C;

SDK_NAMESPACE_END
