#pragma once



// Package: BP_JHGameCenter

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass BP_JHGameCenter.BP_JHGameCenter_C
// 0x0010 (0x0040 - 0x0030)
class UBP_JHGameCenter_C final : public UJH_GameGlobalCenter
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0030(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         local_香料商人;                                    // 0x0038(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_JHGameCenter(int32 EntryPoint);
	void EVT_GameplayStarted();
	void EVT_UI_Trading_Start(int32 NPCId);
	void EVT_UI_Trading_End(int32 NPCId);
	void EVT_UI_Trading_Purchase(int32 NPCId, int32 ItemId, int32 Count);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BP_JHGameCenter_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BP_JHGameCenter_C")
	}
	static class UBP_JHGameCenter_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_JHGameCenter_C>();
	}
};
DUMPER7_ASSERTS_UBP_JHGameCenter_C;

SDK_NAMESPACE_END
