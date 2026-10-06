#pragma once



// Package: BP_NpcPos

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass BP_NpcPos.BP_NpcPos_C
// 0x0058 (0x0278 - 0x0220)
class ABP_NpcPos_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCapsuleComponent*                      Capsule;                                           // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UPaperFlipbookComponent*                PaperFlipbook;                                     // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                         Time_Reset;                                        // 0x0238(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Time_Close;                                        // 0x023C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UPaperFlipbook*>                 flipbook;                                          // 0x0240(0x0010)(Edit, BlueprintVisible)
	class UPaperFlipbookComponent*                NewVar_1;                                          // 0x0250(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         FLipBook_Index;                                    // 0x0258(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         stater;                                            // 0x025C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Pos_Index;                                         // 0x0260(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_264[0x4];                                      // 0x0264(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           TimerHandle;                                       // 0x0268(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                         NPCId;                                             // 0x0270(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          是否是上官虹pos;                                   // 0x0274(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          是否是司马铃pos;                                   // 0x0275(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          是否是吕仙儿pos;                                   // 0x0276(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_NpcPos(int32 EntryPoint);
	void OnChangeSkin(int32 NPCId_0, bool bNext, class FName NewAvatarName);
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void Time();
	void ReceiveBeginPlay();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BP_NpcPos_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BP_NpcPos_C")
	}
	static class ABP_NpcPos_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_NpcPos_C>();
	}
};
DUMPER7_ASSERTS_ABP_NpcPos_C;

SDK_NAMESPACE_END
