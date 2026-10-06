#pragma once



// Package: BPVE_Prime_Team_Property_NaviBtn

#include "Basic.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function BPVE_Prime_Team_Property_NaviBtn.BPVE_Prime_Team_Property_NaviBtn_C.ExecuteUbergraph_BPVE_Prime_Team_Property_NaviBtn
// 0x0030 (0x0030 - 0x0000)
struct BPVE_Prime_Team_Property_NaviBtn_C_ExecuteUbergraph_BPVE_Prime_Team_Property_NaviBtn final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UNeoUIBlueprintableVMBase*              CallFunc_GetOwnerVM_Unsafe_ReturnValue;            // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnyTypeStaticPointer*                  CallFunc_GetData_ReturnValue;                      // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJHNeoUITeam_PropertyVM*                K2Node_DynamicCast_AsJHNeo_UITeam_Property_VM;     // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UJHNeoUIGamepadConfirmButton*           K2Node_ComponentBoundEvent_Btn;                    // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPVE_Prime_Team_Property_NaviBtn_C_ExecuteUbergraph_BPVE_Prime_Team_Property_NaviBtn;

// Function BPVE_Prime_Team_Property_NaviBtn.BPVE_Prime_Team_Property_NaviBtn_C.BndEvt__BPVE_Prime_Team_Property_NaviBtn_Btn_PrimeTeamPropertyNavi_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct BPVE_Prime_Team_Property_NaviBtn_C_BndEvt__BPVE_Prime_Team_Property_NaviBtn_Btn_PrimeTeamPropertyNavi_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature final
{
public:
	class UJHNeoUIGamepadConfirmButton*           Btn_0;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BPVE_Prime_Team_Property_NaviBtn_C_BndEvt__BPVE_Prime_Team_Property_NaviBtn_Btn_PrimeTeamPropertyNavi_K2Node_ComponentBoundEvent_1_JHNeoUIGamepadConfirmButtonClicked__DelegateSignature;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
