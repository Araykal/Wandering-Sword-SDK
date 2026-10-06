#pragma once



// Package: GA_Multipe_Line_Base

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BallisticTypes_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "JH_structs.hpp"
#include "GA_Base_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass GA_Multipe_Line_Base.GA_Multipe_Line_Base_C
// 0x0160 (0x07C0 - 0x0660)
class UGA_Multipe_Line_Base_C : public UGA_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_Multipe_Line_Base_C;             // 0x0658(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         FB_PreDelay;                                       // 0x0660(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Line_PreDelay;                                     // 0x0664(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        Line_Particle;                                     // 0x0668(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             Line_RelativeTransform;                            // 0x0670(0x0030)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	float                                         Damage_PreDelay;                                   // 0x06A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6A4[0x4];                                      // 0x06A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystem*                        Damage_Particle;                                   // 0x06A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             Damage_RelativeTransform;                          // 0x06B0(0x0030)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	float                                         ReTurnDelay;                                       // 0x06E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EBallisticTypes                               BallisticSharp;                                    // 0x06E4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6E5[0x3];                                      // 0x06E5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Cast_PreDelay;                                     // 0x06E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6EC[0x4];                                      // 0x06EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystem*                        Cast_Particle;                                     // 0x06F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6F8[0x8];                                      // 0x06F8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             Cast_RelativeTransform;                            // 0x0700(0x0030)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	class USoundCue*                              Cast_Audio;                                        // 0x0730(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CastRotatorCache;                                  // 0x0738(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	EAttachRotatorType                            Cast_AttachRotator;                                // 0x0744(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_745[0x3];                                      // 0x0745(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               DamageRotatorCache;                                // 0x0748(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_754[0x4];                                      // 0x0754(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundCue*                              Damage_Audio;                                      // 0x0758(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAttachRotatorType                            Damage_AttachRotator;                              // 0x0760(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_761[0x7];                                      // 0x0761(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundCue*                              Line_Audio;                                        // 0x0768(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         伤害附加延时;                                      // 0x0770(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         施法并行音效延时时间;                              // 0x0774(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                              施法并行音效;                                      // 0x0778(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FTableTwoParamentSettingDefine> 指定攻击次数;                                      // 0x0780(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                         每次受击伤害递减率;                                // 0x0790(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         递减伤害下限;                                      // 0x0794(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         每次攻击间隔;                                      // 0x0798(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         攻击次数;                                          // 0x079C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         当前攻击次数_Cache;                                // 0x07A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7A4[0x4];                                      // 0x07A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FTableTwoParamentSettingDefine> 跟据等级和buff层数指定攻击次数;                    // 0x07A8(0x0010)(Edit, BlueprintVisible)

public:
	void ExecuteUbergraph_GA_Multipe_Line_Base(int32 EntryPoint);
	void K2_OnEndAbility(bool bWasCancelled);
	void 受击慢放后();
	void 大招定屏后();
	void K2_ActivateAbility();
	void OnFinish_A057471048765226018357A50843AE6F();
	void OnFinish_021A199F4233BE45D2587098A0ED5348();
	void OnFinish_C6BB191D467D5F0DE99B9B9828EE98F2();
	void OnFinish_5C0DCEE7407B0EB9CF07D5B7239DB609();
	void OnFinish_B2C2F24E442CB03A789120AFD0886212();
	void OnFinish_F964799E431F89EB9D0FD389DC6ED1C0();
	void GetDamageMultiplier(class AActor* InActor, float* Multiplier);
	void GetDamageCount(int32* AttackCount);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("GA_Multipe_Line_Base_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"GA_Multipe_Line_Base_C")
	}
	static class UGA_Multipe_Line_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Multipe_Line_Base_C>();
	}
};
DUMPER7_ASSERTS_UGA_Multipe_Line_Base_C;

SDK_NAMESPACE_END
