#pragma once



// Package: Quest_5387

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5387.Quest_5387_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_5387_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5387_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_5387(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_2B3AC75643A19EE0CC3EE781FCF2E1F5(bool bWinOrLose);
	void OnSuccess_92D6FD374062AA34FF03CB968844C7B6(bool bWinOrLose);
	void OnSuccess_FFB068984D44175DA32D9F8254BCE20A(bool bWinOrLose);
	void OnFinished_C7D64DDF49655DF4A62226B4B078DF4B();
	void OnStop_C7D64DDF49655DF4A62226B4B078DF4B();
	void OnDlgClosed_75E1D8EB45E1AF4095E00AB42964FE02(int32 NPCId);
	void OnDlgSelectedOption_75E1D8EB45E1AF4095E00AB42964FE02(int32 NPCId);
	void OnSuccess_9B9601B44EC0DEC68800238C7AE2FEC0(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5387_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5387_C")
	}
	static class UQuest_5387_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5387_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5387_C;

SDK_NAMESPACE_END
