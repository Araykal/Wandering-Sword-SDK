#pragma once



// Package: Quest_5446

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5446.Quest_5446_C
// 0x0010 (0x0250 - 0x0240)
class UQuest_5446_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5446_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Target_Level_Name;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_5446(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_B25E76944E3D44AB7C1CB287588355C0();
	void OnFinished_BF0DB52346279491AB47F69B96391784();
	void OnStop_BF0DB52346279491AB47F69B96391784();
	void OnDlgClosed_E136BEC34F818AEBC68AF4B33DE478B8(int32 NPCId);
	void OnDlgSelectedOption_E136BEC34F818AEBC68AF4B33DE478B8(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5446_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5446_C")
	}
	static class UQuest_5446_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5446_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5446_C;

SDK_NAMESPACE_END
