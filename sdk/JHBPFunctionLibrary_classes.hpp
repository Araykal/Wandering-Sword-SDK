#pragma once



// Package: JHBPFunctionLibrary

#include "Basic.hpp"

#include "Engine_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass JHBPFunctionLibrary.JHBPFunctionLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UJHBPFunctionLibrary_C final : public UBlueprintFunctionLibrary
{
public:
	static void SetFightNPCTickWhenPause(class AFightNPC* FightNPC, bool TickWhenPause, class UObject* __WorldContext);
	static void GetFightSpectator(class UObject* __WorldContext, class AFightSpectator** Spectator);
	static void SetFightSpectatorLocation(const struct FVector& NewLocation, bool 强制移动, class UObject* __WorldContext);
	static void ResetDirectionalLightIntensity(class UObject* __WorldContext);
	static void ResetFightSpectatorArmArgs(bool UseLag, class UObject* __WorldContext);
	static void SetFightSpectatorArmArgs(const struct FRotator& Rotator, float ArmLength, const struct FVector& TargetOffset, float Speed, bool UseLag, class UObject* __WorldContext);
	static void GetPostProcess(class UObject* __WorldContext, class ABP_JHPostProcess_C** JHPostProcess);
	static void ResetBokenFocalDistance(class UObject* __WorldContext);
	static void SetBokenFocalDistance(float FocalDistance, class UObject* __WorldContext);
	static void SetCAIntensity(const struct FFloatPropertyChild& Property, float TransitionTime, float DelayTime, bool Restore, class UObject* __WorldContext);
	static void SetDirectionalLightFloat(const struct FFloatPropertyChild& FloatProperty, float TransitionTime, float DelayTime, bool Restore, class UObject* __WorldContext);
	static void ResetDirectionalLightFloat(const struct FFloatPropertyChild& FloatProperty, float TransitionTime, class UObject* __WorldContext);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("JHBPFunctionLibrary_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"JHBPFunctionLibrary_C")
	}
	static class UJHBPFunctionLibrary_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UJHBPFunctionLibrary_C>();
	}
};
DUMPER7_ASSERTS_UJHBPFunctionLibrary_C;

SDK_NAMESPACE_END
