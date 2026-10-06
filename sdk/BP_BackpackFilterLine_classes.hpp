#pragma once



// Package: BP_BackpackFilterLine

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass BP_BackpackFilterLine.BP_BackpackFilterLine_C
// 0x0048 (0x0320 - 0x02D8)
class UBP_BackpackFilterLine_C final : public UJHBackpackFilterLine
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02D8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_BackpackFilterBtn_C*                Btn_All;                                           // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_BackpackFilterBtn_C*                Btn_Cai;                                           // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_BackpackFilterBtn_C*                Btn_Fang;                                          // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_BackpackFilterBtn_C*                Btn_Hao;                                           // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_BackpackFilterBtn_C*                Btn_Ren;                                           // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_BackpackFilterBtn_C*                Btn_Shu;                                           // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_BackpackFilterBtn_C*                Btn_Wu;                                            // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_BackpackFilterBtn_C*                Btn_Zhenpin;                                       // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_BackpackFilterLine(int32 EntryPoint);
	void EVT_SetupHierarchy();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BP_BackpackFilterLine_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BP_BackpackFilterLine_C")
	}
	static class UBP_BackpackFilterLine_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_BackpackFilterLine_C>();
	}
};
DUMPER7_ASSERTS_UBP_BackpackFilterLine_C;

SDK_NAMESPACE_END
