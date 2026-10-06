#pragma once



// Package: VE_GH_Progress

#include "Basic.hpp"

#include "NeoUI_classes.hpp"
#include "Engine_structs.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass VE_GH_Progress.VE_GH_Progress_C
// 0x0018 (0x02F0 - 0x02D8)
class UVE_GH_Progress_C final : public UNeoUIVisualElementBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02D8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UProgressBar*                           PROG;                                              // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUITextBlockBase*                    TXT_MainValue;                                     // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_VE_GH_Progress(int32 EntryPoint);
	void EVT_RenderView();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("VE_GH_Progress_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"VE_GH_Progress_C")
	}
	static class UVE_GH_Progress_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVE_GH_Progress_C>();
	}
};
DUMPER7_ASSERTS_UVE_GH_Progress_C;

SDK_NAMESPACE_END
