#pragma once



// Package: BP_InteractStaticMesh_LuoShuShiTai

#include "Basic.hpp"

#include "GridRuntime_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "BP_InteractStaticMesh_classes.hpp"
#include "JH_structs.hpp"
#include "UMG_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass BP_InteractStaticMesh_LuoShuShiTai.BP_InteractStaticMesh_LuoShuShiTai_C
// 0x0050 (0x02A0 - 0x0250)
class ABP_InteractStaticMesh_LuoShuShiTai_C final : public ABP_InteractStaticMesh_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_InteractStaticMesh_LuoShuShiTai_C; // 0x0250(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	uint8                                         Pad_258[0x8];                                      // 0x0258(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             IniTrans;                                          // 0x0260(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	EGridDirect                                   IniFace;                                           // 0x0290(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_291[0x7];                                      // 0x0291(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_LuoShu_C*                           Luoshu;                                            // 0x0298(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_InteractStaticMesh_LuoShuShiTai(int32 EntryPoint);
	void BP_ShowWidget();
	void ControllShow(ESlateVisibility InVisibility);
	void ReceiveBeginPlay();
	void HandleInteract();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BP_InteractStaticMesh_LuoShuShiTai_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BP_InteractStaticMesh_LuoShuShiTai_C")
	}
	static class ABP_InteractStaticMesh_LuoShuShiTai_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_InteractStaticMesh_LuoShuShiTai_C>();
	}
};
DUMPER7_ASSERTS_ABP_InteractStaticMesh_LuoShuShiTai_C;

SDK_NAMESPACE_END
