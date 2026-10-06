#pragma once



// Package: BP_SceneNPC

#include "Basic.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function BP_SceneNPC.BP_SceneNPC_C.ExecuteUbergraph_BP_SceneNPC
// 0x0060 (0x0060 - 0x0000)
struct BP_SceneNPC_C_ExecuteUbergraph_BP_SceneNPC final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UJHNeoUISubsystem*                      CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNPCManager*                            CallFunc_GetGameInstanceSubsystem_ReturnValue_1;   // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNPCManager*                            CallFunc_GetGameInstanceSubsystem_ReturnValue_2;   // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNPCManager*                            CallFunc_GetGameInstanceSubsystem_ReturnValue_3;   // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_NPCID;                          // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bNext;                          // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2D[0x3];                                       // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_CustomEvent_NewAvatarName;                  // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3B[0x5];                                       // 0x003B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UNPCManager*                            CallFunc_GetGameInstanceSubsystem_ReturnValue_4;   // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNPCManager*                            CallFunc_GetGameInstanceSubsystem_ReturnValue_5;   // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 NPCId, bool bNext, class FName NewAvatarName)> K2Node_CreateDelegate_OutputDelegate; // 0x0050(0x0010)(ZeroConstructor, NoDestructor)
};
DUMPER7_ASSERTS_BP_SceneNPC_C_ExecuteUbergraph_BP_SceneNPC;

// Function BP_SceneNPC.BP_SceneNPC_C.OnChangeSkin
// 0x0010 (0x0010 - 0x0000)
struct BP_SceneNPC_C_OnChangeSkin final
{
public:
	int32                                         NPCId_0;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bNext;                                             // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   NewAvatarName;                                     // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_BP_SceneNPC_C_OnChangeSkin;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
