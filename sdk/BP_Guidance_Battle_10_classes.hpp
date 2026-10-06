#pragma once



// Package: BP_Guidance_Battle_10

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BP_Guidance_Battle_10.BP_Guidance_Battle_10_C
// 0x0030 (0x02F0 - 0x02C0)
class UBP_Guidance_Battle_10_C final : public UJHNeoUI_GuidanceStep
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNeoUIImageBase*                        FAKE_BG;                                           // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_127;                                         // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        IMG_Arrow;                                         // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        IMG_Frame_1;                                       // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TabName;                                           // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Guidance_Battle_10(int32 EntryPoint);
	void EVT_DelayResized();
	void EVT_StartStep();
	struct FEventReply OnMouseButtonDown_0(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BP_Guidance_Battle_10_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BP_Guidance_Battle_10_C")
	}
	static class UBP_Guidance_Battle_10_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Guidance_Battle_10_C>();
	}
};
DUMPER7_ASSERTS_UBP_Guidance_Battle_10_C;

SDK_NAMESPACE_END
