#pragma once



// Package: GA_Point_Base

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "JH_structs.hpp"
#include "GA_Base_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass GA_Point_Base.GA_Point_Base_C
// 0x0190 (0x07F0 - 0x0660)
class UGA_Point_Base_C : public UGA_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_Point_Base_C;                    // 0x0658(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         FB_PreDelay;                                       // 0x0660(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Cast_PreDelay;                                     // 0x0664(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFXSystemAsset*                         Cast_Particle;                                     // 0x0668(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Zone_PreDelay;                                     // 0x0670(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_674[0x4];                                      // 0x0674(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFXSystemAsset*                         Zone_Particle;                                     // 0x0678(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Grid_PreDelay;                                     // 0x0680(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_684[0x4];                                      // 0x0684(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFXSystemAsset*                         Grid_Particle;                                     // 0x0688(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             Grid_RelativeTransform;                            // 0x0690(0x0030)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	struct FTransform                             Cast_RelativeTransform;                            // 0x06C0(0x0030)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	struct FTransform                             Zone_RelativeTransform;                            // 0x06F0(0x0030)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	float                                         Damage_PreDelay;                                   // 0x0720(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_724[0x4];                                      // 0x0724(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFXSystemAsset*                         Damage_Particle;                                   // 0x0728(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             Damage_RelativeTransform;                          // 0x0730(0x0030)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	float                                         ReTurnDelay;                                       // 0x0760(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CastRotatorCache;                                  // 0x0764(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	EAttachRotatorType                            Cast_AttachRotator;                                // 0x0770(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_771[0x7];                                      // 0x0771(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundCue*                              Cast_Audio;                                        // 0x0778(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                              Damage_Audio;                                      // 0x0780(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               DamageRotatorCache;                                // 0x0788(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_794[0x4];                                      // 0x0794(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundCue*                              Zone_Audio;                                        // 0x0798(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                              Grid_Audio;                                        // 0x07A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAttachRotatorType                            Zone_AttachRotator;                                // 0x07A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAttachRotatorType                            Grid_AttachRotator;                                // 0x07A9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7AA[0x2];                                      // 0x07AA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               ZoneRotatorCache;                                  // 0x07AC(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	EAttachRotatorType                            Damage_AttachRotator;                              // 0x07B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7B9[0x3];                                      // 0x07B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               GridRotatorCache;                                  // 0x07BC(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         LastIntensity;                                     // 0x07C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7CC[0x4];                                      // 0x07CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundCue*                              施法并行音效;                                      // 0x07D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         施法并行音效延时时间;                              // 0x07D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DamageMultiplier;                                  // 0x07DC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          伤害乘数是否开启;                                  // 0x07E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_GA_Point_Base(int32 EntryPoint);
	void 受击慢放后();
	void 大招定屏后();
	void K2_ActivateAbility();
	void Get_Damage_Multiplier(float InPercent, float* Multiplier);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("GA_Point_Base_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"GA_Point_Base_C")
	}
	static class UGA_Point_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Point_Base_C>();
	}
};
DUMPER7_ASSERTS_UGA_Point_Base_C;

SDK_NAMESPACE_END
