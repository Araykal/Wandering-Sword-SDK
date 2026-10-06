#pragma once



// Package: BP_InteractStaticMesh

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass BP_InteractStaticMesh.BP_InteractStaticMesh_C
// 0x0020 (0x0250 - 0x0230)
class ABP_InteractStaticMesh_C : public AJHStaticMesh
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0230(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FText                                   显示名称;                                          // 0x0238(0x0018)(Edit, BlueprintVisible)

public:
	void ExecuteUbergraph_BP_InteractStaticMesh(int32 EntryPoint);
	void HandleInteract();
	void ReceiveBeginPlay();
	void 播放动画(EWeaponType InWeaponType);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BP_InteractStaticMesh_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BP_InteractStaticMesh_C")
	}
	static class ABP_InteractStaticMesh_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_InteractStaticMesh_C>();
	}
};
DUMPER7_ASSERTS_ABP_InteractStaticMesh_C;

SDK_NAMESPACE_END
