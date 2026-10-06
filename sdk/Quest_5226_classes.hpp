#pragma once



// Package: Quest_5226

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_QuestInfoBase_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass Quest_5226.Quest_5226_C
// 0x0008 (0x0248 - 0x0240)
class UQuest_5226_C final : public UBP_QuestInfoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_5226_C;                       // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Quest_5226(int32 EntryPoint);
	void HandleRequesting(int32 NPCId);
	void OnDlgClosed_A367B9E644E09A51669022959D7BA4C6(int32 NPCId);
	void OnDlgSelectedOption_A367B9E644E09A51669022959D7BA4C6(int32 NPCId);
	void OnFinished_86E3304F4278BFD61B2D22AC3E95D033();
	void OnStop_86E3304F4278BFD61B2D22AC3E95D033();
	void OnFinished_7E781EB34169A82107FEA79021B01C7E();
	void OnStop_7E781EB34169A82107FEA79021B01C7E();
	void OnDlgClosed_6735CFE9469FC044E98492897F51E798(int32 NPCId);
	void OnDlgSelectedOption_6735CFE9469FC044E98492897F51E798(int32 NPCId);
	void OnDlgClosed_9D773A8340101E7A750CBDBA0E90BE8E(int32 NPCId);
	void OnDlgSelectedOption_9D773A8340101E7A750CBDBA0E90BE8E(int32 NPCId);
	void OnDlgClosed_5E28D2A14516ACA3BE3F2CBE86AF7F25(int32 NPCId);
	void OnDlgSelectedOption_5E28D2A14516ACA3BE3F2CBE86AF7F25(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("Quest_5226_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Quest_5226_C")
	}
	static class UQuest_5226_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_5226_C>();
	}
};
DUMPER7_ASSERTS_UQuest_5226_C;

SDK_NAMESPACE_END
