#pragma once



// Package: CMP_NGP_QualityCost

#include "Basic.hpp"

#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass CMP_NGP_QualityCost.CMP_NGP_QualityCost_C
// 0x0008 (0x03F8 - 0x03F0)
class UCMP_NGP_QualityCost_C final : public UJHNeoUINGP_SkillColorTip
{
public:
	class UNeoUITextBlockBase*                    TXT_Value;                                         // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("CMP_NGP_QualityCost_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"CMP_NGP_QualityCost_C")
	}
	static class UCMP_NGP_QualityCost_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCMP_NGP_QualityCost_C>();
	}
};
DUMPER7_ASSERTS_UCMP_NGP_QualityCost_C;

SDK_NAMESPACE_END
