#pragma once



// Package: JHGPCBtn_TXT

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass JHGPCBtn_TXT.JHGPCBtn_TXT_C
// 0x0010 (0x0608 - 0x05F8)
class UJHGPCBtn_TXT_C final : public UJHNeoUIGamepadConfirmButton_TXT
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x05F8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNeoUIBorderBase*                       NeoUIBorderBase_90;                                // 0x0600(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_JHGPCBtn_TXT(int32 EntryPoint);
	void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
	void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("JHGPCBtn_TXT_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"JHGPCBtn_TXT_C")
	}
	static class UJHGPCBtn_TXT_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UJHGPCBtn_TXT_C>();
	}
};
DUMPER7_ASSERTS_UJHGPCBtn_TXT_C;

SDK_NAMESPACE_END
