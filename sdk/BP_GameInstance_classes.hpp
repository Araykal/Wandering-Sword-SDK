#pragma once



// Package: BP_GameInstance

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass BP_GameInstance.BP_GameInstance_C
// 0x0008 (0x0290 - 0x0288)
class UBP_GameInstance_C final : public UJHGameInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0288(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_GameInstance(int32 EntryPoint);
	void ReceiveShutdown();
	void ReceiveInit();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BP_GameInstance_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BP_GameInstance_C")
	}
	static class UBP_GameInstance_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_GameInstance_C>();
	}
};
DUMPER7_ASSERTS_UBP_GameInstance_C;

SDK_NAMESPACE_END
