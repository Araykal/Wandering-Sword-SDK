#pragma once



// Package: NGP_Cont_SkillBook

#include "Basic.hpp"

#include "JH_classes.hpp"
#include "SlateCore_structs.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass NGP_Cont_SkillBook.NGP_Cont_SkillBook_C
// 0x0078 (0x0340 - 0x02C8)
class UNGP_Cont_SkillBook_C final : public UJHNeoUINGP_DepatureContent_Skillbook
{
public:
	class UBPVE_NGP_SkillItem_C*                  BPVE_NGP_SkillItem;                                // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNeoUIImageBase*                        NeoUIImageBase_45;                                 // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCMP_NGP_QualityCost_C*                 QualityCost0;                                      // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCMP_NGP_QualityCost_C*                 QualityCost1;                                      // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCMP_NGP_QualityCost_C*                 QualityCost2;                                      // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCMP_NGP_QualityCost_C*                 QualityCost3;                                      // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCMP_NGP_QualityCost_C*                 QualityCost4;                                      // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCMP_NGP_QualityCost_C*                 QualityCost5;                                      // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBTN_NGP_SkillStyle_C*                  SkillStyle;                                        // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBTN_NGP_SkillStyle_C*                  SkillStyle_1;                                      // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBTN_NGP_SkillStyle_C*                  SkillStyle_2;                                      // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBTN_NGP_SkillStyle_C*                  SkillStyle_3;                                      // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBTN_NGP_SkillStyle_C*                  SkillStyle_4;                                      // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBTN_NGP_SkillStyle_C*                  SkillStyle_5;                                      // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBTN_NGP_SkillStyle_C*                  SkillStyle_6;                                      // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void EVT_ProvideQualityTextArr(TArray<class UNeoUITextBlockBase*>* TextArr);
	class UWidget* Navi_GotoDepartureBtn(EUINavigation Navigation_0);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("NGP_Cont_SkillBook_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NGP_Cont_SkillBook_C")
	}
	static class UNGP_Cont_SkillBook_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNGP_Cont_SkillBook_C>();
	}
};
DUMPER7_ASSERTS_UNGP_Cont_SkillBook_C;

SDK_NAMESPACE_END
