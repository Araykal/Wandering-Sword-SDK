#pragma once



// Package: BP_InteractStaticMesh_ShiTai

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "BP_InteractStaticMesh_classes.hpp"
#include "JH_structs.hpp"
#include "UMG_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass BP_InteractStaticMesh_ShiTai.BP_InteractStaticMesh_ShiTai_C
// 0x0060 (0x02B0 - 0x0250)
class ABP_InteractStaticMesh_ShiTai_C final : public ABP_InteractStaticMesh_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_InteractStaticMesh_ShiTai_C;     // 0x0250(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	uint8                                         Pad_258[0x8];                                      // 0x0258(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             IniTrans;                                          // 0x0260(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class ABP_LittleGameCharacter_C*              LittlePawn;                                        // 0x0290(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_SceneHero_C*                        As_BP_Scene_Hero;                                  // 0x0298(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class ABP_Turntable_C*                        Hetu;                                              // 0x02A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_InteractStaticMesh_ShiTai(int32 EntryPoint);
	void HandleInteract();
	void BP_ShowWidget();
	void ControllShow(ESlateVisibility InVisibility);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BP_InteractStaticMesh_ShiTai_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BP_InteractStaticMesh_ShiTai_C")
	}
	static class ABP_InteractStaticMesh_ShiTai_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_InteractStaticMesh_ShiTai_C>();
	}
};
DUMPER7_ASSERTS_ABP_InteractStaticMesh_ShiTai_C;

SDK_NAMESPACE_END
