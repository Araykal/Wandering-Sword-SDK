#pragma once



// Package: Quest_17547

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_17547.Quest_17547_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_17547_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_17547_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_17547(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_AC0A69A14F54E7ED1EE075A24A155D6F(bool bWinOrLose);
	void OnSuccess_C7AD24A149B95785005902B5DC95B160(bool bWinOrLose);
	void OnSuccess_3D35320149E31407C8CE6FACBF09F122(bool bWinOrLose);
	void OnSuccess_A9A42AD847CFF1E975F894A714319EA9(bool bWinOrLose);
	void OnSuccess_C9FE813B4158CAA9D446D8BEF2E4822F(bool bWinOrLose);
	void OnSuccess_7BA03DBE4A84BC4AB4B4BB9670F387A6(bool bWinOrLose);
	void OnSuccess_94CEA1424E0868683E3EBA9A867F5182(bool bWinOrLose);
	void OnFinished_A2208FF34B4AFAAA71118B90049BFC69();
	void OnStop_A2208FF34B4AFAAA71118B90049BFC69();
	void OnDlgClosed_A47AF655451022C17030CA871F191376(int32 NPCId);
	void OnDlgSelectedOption_A47AF655451022C17030CA871F191376(int32 NPCId);
	void OnSuccess_20359D18421AEA4B9723A9B6310B7AAF(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_17547_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_17547_C")
	}
	static class UQuest_17547_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_17547_C>();
	}
};
DUMPER7_ASSERTS_UQuest_17547_C;

SDK_NAMESPACE_END
