#pragma once



// Package: BPMV_FullscreenCover

#include "Basic.hpp"

#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPMV_FullscreenCover.BPMV_FullscreenCover_C
// 0x0008 (0x0380 - 0x0378)
class UBPMV_FullscreenCover_C final : public UJHNeoUIFullscreenCoverView
{
public:
	class UNeoUIImageBase*                        IMG_Main;                                          // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPMV_FullscreenCover_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPMV_FullscreenCover_C")
	}
	static class UBPMV_FullscreenCover_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPMV_FullscreenCover_C>();
	}
};
DUMPER7_ASSERTS_UBPMV_FullscreenCover_C;

SDK_NAMESPACE_END
