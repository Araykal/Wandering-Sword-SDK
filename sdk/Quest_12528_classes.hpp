#pragma once



// Package: Quest_12528

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_12528.Quest_12528_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_12528_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_12528_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         NewVar_0;                                          // 0x0248(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_12528(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_DF738B9045F48609A800D1A1CB46576C(bool bWinOrLose);
	void OnFinished_40D868AE44A3CF4DB03B85B3D75A24DC();
	void OnStop_40D868AE44A3CF4DB03B85B3D75A24DC();
	void OnDlgClosed_57968A984343631A9B98B5B9EB2EA401(int32 NPCId);
	void OnDlgSelectedOption_57968A984343631A9B98B5B9EB2EA401(int32 NPCId);
	void OnSuccess_804D8700477643CAD89EEF8AA4B6BF52(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_12528_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_12528_C")
	}
	static class UQuest_12528_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_12528_C>();
	}
};
DUMPER7_ASSERTS_UQuest_12528_C;

SDK_NAMESPACE_END
