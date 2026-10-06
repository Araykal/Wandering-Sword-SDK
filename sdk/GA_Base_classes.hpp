#pragma once



// Package: GA_Base

#include "Basic.hpp"

#include "JH_structs.hpp"
#include "JH_classes.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GridRuntime_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass GA_Base.GA_Base_C
// 0x0218 (0x0660 - 0x0448)
#pragma pack(push, 0x1)
class SDK_ALIGN(0x10) UGA_Base_C : public UJHGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0448(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          开启受击色差;                                      // 0x0450(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_451[0x3];                                      // 0x0451(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         受击色差_强度;                                     // 0x0454(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         受击色差_持续时间;                                 // 0x0458(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         受击色差_过渡速率;                                 // 0x045C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_AbilitySpotLight_C*                 AbilityLight;                                      // 0x0460(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          改变定向光亮度;                                    // 0x0468(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_469[0x3];                                      // 0x0469(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         亮度;                                              // 0x046C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          开启大招定屏效果;                                  // 0x0470(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_471[0x3];                                      // 0x0471(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         定屏总耗时;                                        // 0x0474(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EWeaponType                                   定屏动作类型;                                      // 0x0478(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_479[0x3];                                      // 0x0479(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         定屏动作Index;                                     // 0x047C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        定屏特效;                                          // 0x0480(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         定屏慢放速率;                                      // 0x0488(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          开启起手聚光灯;                                    // 0x048C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_48D[0x3];                                      // 0x048D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         聚光灯亮度;                                        // 0x0490(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         定屏慢放等待时间;                                  // 0x0494(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_498[0x8];                                      // 0x0498(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             聚光灯相对施法者位置;                              // 0x04A0(0x0030)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	struct FTransform                             定屏特效相对位置;                                  // 0x04D0(0x0030)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	bool                                          开启受击镜头跟随;                                  // 0x0500(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          开启受击镜头慢放;                                  // 0x0501(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          开启受击闪光;                                      // 0x0502(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_503[0xD];                                      // 0x0503(0x000D)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             聚光相对受击人位置;                                // 0x0510(0x0030)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	float                                         闪光亮度;                                          // 0x0540(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         受击慢放速率;                                      // 0x0544(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         受击慢放延时;                                      // 0x0548(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          改变镜头参数;                                      // 0x054C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_54D[0x3];                                      // 0x054D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         摇臂的距离;                                        // 0x0550(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               摇臂角度;                                          // 0x0554(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                TargetOffset;                                      // 0x0560(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         景深距离;                                          // 0x056C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_AbilityPointLight_C*                PointLight;                                        // 0x0570(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_578[0x8];                                      // 0x0578(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             点光相对受击人位置;                                // 0x0580(0x0030)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	bool                                          使用旋转平滑过渡;                                  // 0x05B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          使用平移平滑过渡;                                  // 0x05B1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5B2[0x6];                                      // 0x05B2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             定屏特效对应音效;                                  // 0x05B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFloatPropertyChildOfEnv               定向光属性更改;                                    // 0x05C0(0x0038)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FFloatPropertyChildOfPostProcess       色差属性更改;                                      // 0x05F8(0x0038)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          多次应用自身效果;                                  // 0x0630(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_631[0x3];                                      // 0x0631(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         应用次数;                                          // 0x0634(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          播放定屏动作;                                      // 0x0638(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_639[0x7];                                      // 0x0639(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_AbilityName_C*                     定屏UI;                                            // 0x0640(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         Lights;                                            // 0x0648(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)

public:
	void ExecuteUbergraph_GA_Base(int32 EntryPoint);
	void PreEndAbility();
	void 受击慢放后();
	void 受击慢放();
	void 大招定屏后();
	void 定屏();
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbility();
	void Success_AB3BB30F411801134BC00485EFD4CBA2(class AActor* SpawnedActor);
	void DidNotSpawn_AB3BB30F411801134BC00485EFD4CBA2(class AActor* SpawnedActor);
	void Success_A6F1E4A94C0B074CC17FDFA660A6DE7F(class AActor* SpawnedActor);
	void DidNotSpawn_A6F1E4A94C0B074CC17FDFA660A6DE7F(class AActor* SpawnedActor);
	void PlayDamageCA();
	void OwnerIsHero(bool* bIsHero);
	void SetDirectionalLightIntensity();
	void PlayStartFlash();
	void CameraFollowActor(class AActor* BeDamageActor);
	void PlayFlashForActor(class AActor* BeDamageActor);
	void ChangeCameraArm();
	void CameraFollowLocation(const struct FVector& Location);
	void PlayFlashForLocation(const struct FVector& Location);
	void PlayAbilityName();
	void ResetDirectionalLightIntensity();
	void 检查是否可放大招(bool* 可以施放);
	void 应用自身效果();
	void GetBulletFlyDistance(int32 GridNum, bool bHypotenuse, float* Distance);
	void GetCanChangeArmPitch(bool* NewParam);
	void 改战场炫光();
	void ResetCA();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("GA_Base_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"GA_Base_C")
	}
	static class UGA_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Base_C>();
	}
};
#pragma pack(pop)
DUMPER7_ASSERTS_UGA_Base_C;

SDK_NAMESPACE_END
