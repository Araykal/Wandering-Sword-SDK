#pragma once



// Package: BPMV_JHConfigVideo

#include "Basic.hpp"

#include "NeoUI_structs.hpp"
#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPMV_JHConfigVideo.BPMV_JHConfigVideo_C
// 0x0010 (0x0398 - 0x0388)
class UBPMV_JHConfigVideo_C final : public UJHNeoUIConfig_VideoView
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0388(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UVE_JHVideoPanel2_C*                    VE_JHVideoPanel2;                                  // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPMV_JHConfigVideo(int32 EntryPoint);
	void EVT_AutoFocusForTabClick();
	void EVT_SetupHierarchy();
	void Construct();
	class UWidget* FocusWidgetForScenario_Direct(ENeoUIFocusWidgetScenario scenario, const struct FNeoUIFocusWidgetParam& Param);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPMV_JHConfigVideo_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPMV_JHConfigVideo_C")
	}
	static class UBPMV_JHConfigVideo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPMV_JHConfigVideo_C>();
	}
};
DUMPER7_ASSERTS_UBPMV_JHConfigVideo_C;

SDK_NAMESPACE_END
