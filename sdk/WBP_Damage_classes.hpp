#pragma once



// Package: WBP_Damage

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass WBP_Damage.WBP_Damage_C
// 0x0030 (0x0388 - 0x0358)
class UWBP_Damage_C final : public UJHDamageWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0358(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Crit;                                              // 0x0360(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       FadeOut;                                           // 0x0368(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                             Damage;                                            // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                ImageContainerBorder;                              // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         Damge;                                             // 0x0380(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Type;                                              // 0x0384(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_Damage(int32 EntryPoint);
	void UpdateRenderingWords(const TArray<class UTexture2D*>& InWords, int32 TypeMaskBits);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("WBP_Damage_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"WBP_Damage_C")
	}
	static class UWBP_Damage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Damage_C>();
	}
};
DUMPER7_ASSERTS_UWBP_Damage_C;

SDK_NAMESPACE_END
