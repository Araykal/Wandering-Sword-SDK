#pragma once



// Package: BPMV_SplashScreen

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BPMV_SplashScreen.BPMV_SplashScreen_C
// 0x0010 (0x03C0 - 0x03B0)
class UBPMV_SplashScreen_C final : public UJHNeoUISplashscreenView
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNeoUIImageBase*                        NeoUIImageBase_41;                                 // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPMV_SplashScreen(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPMV_SplashScreen_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPMV_SplashScreen_C")
	}
	static class UBPMV_SplashScreen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPMV_SplashScreen_C>();
	}
};
DUMPER7_ASSERTS_UBPMV_SplashScreen_C;

SDK_NAMESPACE_END
