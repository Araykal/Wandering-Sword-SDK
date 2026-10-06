#pragma once



// Package: Quest_16082

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"
#include "JH_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_16082.Quest_16082_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_16082_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_16082_C;                      // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_16082(int32 EntryPoint);
	void HandleFinishing(int32 NPCId);
	void OnSuccess_56D3D56F4F8F3CA4428CBF97C45726E0(bool bWinOrLose);
	void OnSuccess_B4FDCE7E4DA43CE019C05CA8D9956B1F(bool bWinOrLose);
	void OnSuccess_7A2930934A043EFC269FCD97A5F88D61(bool bWinOrLose);
	void OnFinished_E33EC0D04BE0AB88B3F674A4A1132C2A();
	void OnStop_E33EC0D04BE0AB88B3F674A4A1132C2A();
	void OnDlgClosed_00B754044FCB2AA032E3CBAEBC65C6E7(int32 NPCId);
	void OnDlgSelectedOption_00B754044FCB2AA032E3CBAEBC65C6E7(int32 NPCId);
	void OnSuccess_2A2EAED54FAACEBF70EE2AB92309C13C(bool bWinOrLose);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_16082_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_16082_C")
	}
	static class UQuest_16082_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_16082_C>();
	}
};
DUMPER7_ASSERTS_UQuest_16082_C;

SDK_NAMESPACE_END
