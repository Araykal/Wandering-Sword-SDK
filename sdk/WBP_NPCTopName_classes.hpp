#pragma once



// Package: WBP_NPCTopName

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass WBP_NPCTopName.WBP_NPCTopName_C
// 0x0020 (0x0320 - 0x0300)
class UWBP_NPCTopName_C final : public UTopNameWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0300(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNeoUIImageBase*                        FunImage;                                          // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        ImgQuestState;                                     // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Name_0;                                            // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_NPCTopName(int32 EntryPoint);
	void BP_SetNPCQuestStateImg(class UTexture2D* IMG);
	void SetColor(const struct FLinearColor& NewColor);
	void ShowName(const class FText& InName, class UTexture2D* FunctionImage);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("WBP_NPCTopName_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"WBP_NPCTopName_C")
	}
	static class UWBP_NPCTopName_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_NPCTopName_C>();
	}
};
DUMPER7_ASSERTS_UWBP_NPCTopName_C;

SDK_NAMESPACE_END
