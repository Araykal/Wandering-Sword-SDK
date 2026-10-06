#pragma once



// Package: VE_JHMessage

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass VE_JHMessage.VE_JHMessage_C
// 0x0030 (0x0348 - 0x0318)
class UVE_JHMessage_C final : public UGlobalMessageModuleVE
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0318(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       TranslationAnim;                                   // 0x0320(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UNeoUICanvasPanelBase*                  CT_Main;                                           // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        NeoUIImageBase_78;                                 // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIRichTextBlockBase*                RTXT_Main;                                         // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                         ConstPosX;                                         // 0x0340(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_VE_JHMessage(int32 EntryPoint);
	void Construct();
	void EVT_StartShow(const class FText& Msg);
	void SequenceEvent_1();
	void SequenceEvent__ENTRYPOINTVE_JHMessage_0();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("VE_JHMessage_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"VE_JHMessage_C")
	}
	static class UVE_JHMessage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVE_JHMessage_C>();
	}
};
DUMPER7_ASSERTS_UVE_JHMessage_C;

SDK_NAMESPACE_END
