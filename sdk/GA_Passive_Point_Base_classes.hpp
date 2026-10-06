#pragma once



// Package: GA_Passive_Point_Base

#include "Basic.hpp"

#include "GA_Passive_Base_classes.hpp"
#include "Engine_structs.hpp"
#include "JH_structs.hpp"
#include "CoreUObject_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass GA_Passive_Point_Base.GA_Passive_Point_Base_C
// 0x0170 (0x05F0 - 0x0480)
class UGA_Passive_Point_Base_C : public UGA_Passive_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_Passive_Point_Base_C;            // 0x0480(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UFXSystemAsset*                         Cast_Particle;                                     // 0x0488(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Cast_PreDelay;                                     // 0x0490(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_494[0x4];                                      // 0x0494(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundCue*                              Cast_Audio;                                        // 0x0498(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAttachRotatorType                            Cast_AttachRotator;                                // 0x04A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A1[0xF];                                      // 0x04A1(0x000F)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             Cast_RelativeTransform;                            // 0x04B0(0x0030)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	struct FRotator                               CastRotatorCache;                                  // 0x04E0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4EC[0x4];                                      // 0x04EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFXSystemAsset*                         Grid_Particle;                                     // 0x04F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Grid_PreDelay;                                     // 0x04F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAttachRotatorType                            Grid_AttachRotator;                                // 0x04FC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4FD[0x3];                                      // 0x04FD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             Grid_RelativeTransform;                            // 0x0500(0x0030)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	class USoundCue*                              Grid_Audio;                                        // 0x0530(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Damage_PreDelay;                                   // 0x0538(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_53C[0x4];                                      // 0x053C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFXSystemAsset*                         Damage_Particle;                                   // 0x0540(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                              Damage_Audio;                                      // 0x0548(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             Damage_RelativeTransform;                          // 0x0550(0x0030)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	EAttachRotatorType                            Damage_AttachRotator;                              // 0x0580(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_581[0x3];                                      // 0x0581(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               DamageRotatorCache;                                // 0x0584(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UFXSystemAsset*                         Zone_Particle;                                     // 0x0590(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Zone_PreDelay;                                     // 0x0598(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59C[0x4];                                      // 0x059C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundCue*                              Zone_Audio;                                        // 0x05A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A8[0x8];                                      // 0x05A8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             Zone_RelativeTransform;                            // 0x05B0(0x0030)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	EAttachRotatorType                            Zone_AttachRotator;                                // 0x05E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5E1[0x3];                                      // 0x05E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         FB_PreDelay;                                       // 0x05E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          播放序列动画;                                      // 0x05E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void K2_ActivateAbility();
	void ApplyDamage();
	void OnCasting();
	void GridPartical();
	void OnZone();
	void OnPlayFlipbook();
	void ExecuteUbergraph_GA_Passive_Point_Base(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("GA_Passive_Point_Base_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"GA_Passive_Point_Base_C")
	}
	static class UGA_Passive_Point_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Passive_Point_Base_C>();
	}
};
DUMPER7_ASSERTS_UGA_Passive_Point_Base_C;

SDK_NAMESPACE_END
