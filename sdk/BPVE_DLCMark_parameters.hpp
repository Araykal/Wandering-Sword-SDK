#pragma once



// Package: BPVE_DLCMark

#include "Basic.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function BPVE_DLCMark.BPVE_DLCMark_C.UpdateActiveStatus
// 0x0002 (0x0002 - 0x0000)
struct BPVE_DLCMark_C_UpdateActiveStatus final
{
public:
	bool                                          IsActive;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
DUMPER7_ASSERTS_BPVE_DLCMark_C_UpdateActiveStatus;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
