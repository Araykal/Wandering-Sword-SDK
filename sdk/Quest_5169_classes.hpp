#pragma once



// Package: Quest_5169

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5169.Quest_5169_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_5169_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5169_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_5169(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_AE71455E436FB74A975F93A870143133(bool bWinOrLose);
	void OnSuccess_B5A20DAA426C86DCA35497A293259FA1(bool bWinOrLose);
	void OnSuccess_F167E44741FDB4C5CEDC278F9C2AEA57(bool bWinOrLose);
	void OnFinished_9DD4DBE94C8A2F339D8F7EA008DD1EA2();
	void OnStop_9DD4DBE94C8A2F339D8F7EA008DD1EA2();
	void OnDlgClosed_A432534343264CDA48A9B69D438540C4(int32 NPCId);
	void OnDlgSelectedOption_A432534343264CDA48A9B69D438540C4(int32 NPCId);
	void OnSuccess_C7B34D1844B8B726F710FAB5FD4C5BC7(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5169_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5169_C")
	}
	static class UQuest_5169_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5169_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5169_C;

SDK_NAMESPACE_END
