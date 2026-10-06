#pragma once



// Package: BPMV_Team_Property_Liking

#include "Basic.hpp"

#include "NeoUI_structs.hpp"
#include "Engine_structs.hpp"
#include "JH_classes.hpp"
#include "SlateCore_structs.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPMV_Team_Property_Liking.BPMV_Team_Property_Liking_C
// 0x0010 (0x0378 - 0x0368)
class UBPMV_Team_Property_Liking_C final : public UJHNeoUITeam_Property_LikingView
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0368(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNeoUIListView*                         LIST_OLD;                                          // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPMV_Team_Property_Liking(int32 EntryPoint);
	void EVT_FocusWidgetForScenario(ENeoUIFocusWidgetScenario scenario, const struct FNeoUIFocusWidgetParam& Param);
	class UWidget* FocusWidgetForScenario_Direct(ENeoUIFocusWidgetScenario scenario, const struct FNeoUIFocusWidgetParam& Param);
	class UWidget* NaviGotoSideBar(EUINavigation Navigation_0);
	class UWidget* NaviGotoEquip(EUINavigation Navigation_0);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPMV_Team_Property_Liking_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPMV_Team_Property_Liking_C")
	}
	static class UBPMV_Team_Property_Liking_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPMV_Team_Property_Liking_C>();
	}
};
DUMPER7_ASSERTS_UBPMV_Team_Property_Liking_C;

SDK_NAMESPACE_END
