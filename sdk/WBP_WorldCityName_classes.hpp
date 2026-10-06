#pragma once



// Package: WBP_WorldCityName

#include "Basic.hpp"

#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass WBP_WorldCityName.WBP_WorldCityName_C
// 0x0010 (0x0298 - 0x0288)
class UWBP_WorldCityName_C final : public UJHCMP_WorldCityName
{
public:
	class UImage*                                 Image;                                             // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_89;                                          // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("WBP_WorldCityName_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"WBP_WorldCityName_C")
	}
	static class UWBP_WorldCityName_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_WorldCityName_C>();
	}
};
DUMPER7_ASSERTS_UWBP_WorldCityName_C;

SDK_NAMESPACE_END
