#pragma once



// Package: WBP_NPCTopName

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"


SDK_NAMESPACE_START
SDK_PARAM_NAMESPACE_START

// Function WBP_NPCTopName.WBP_NPCTopName_C.ExecuteUbergraph_WBP_NPCTopName
// 0x0100 (0x0100 - 0x0000)
struct WBP_NPCTopName_C_ExecuteUbergraph_WBP_NPCTopName final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Event_InName;                               // 0x0008(0x0018)(ConstParm)
	class UTexture2D*                             K2Node_Event_FunctionImage;                        // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           K2Node_Event_NewColor;                             // 0x002C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0040(0x0028)()
	class UTexture2D*                             K2Node_Event_Img;                                  // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                            CallFunc_MakeBrushFromTexture_ReturnValue;         // 0x0070(0x0088)()
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
DUMPER7_ASSERTS_WBP_NPCTopName_C_ExecuteUbergraph_WBP_NPCTopName;

// Function WBP_NPCTopName.WBP_NPCTopName_C.BP_SetNPCQuestStateImg
// 0x0008 (0x0008 - 0x0000)
struct WBP_NPCTopName_C_BP_SetNPCQuestStateImg final
{
public:
	class UTexture2D*                             IMG;                                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_WBP_NPCTopName_C_BP_SetNPCQuestStateImg;

// Function WBP_NPCTopName.WBP_NPCTopName_C.SetColor
// 0x0010 (0x0010 - 0x0000)
struct WBP_NPCTopName_C_SetColor final
{
public:
	struct FLinearColor                           NewColor;                                          // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_WBP_NPCTopName_C_SetColor;

// Function WBP_NPCTopName.WBP_NPCTopName_C.ShowName
// 0x0020 (0x0020 - 0x0000)
struct WBP_NPCTopName_C_ShowName final
{
public:
	class FText                                   InName;                                            // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UTexture2D*                             FunctionImage;                                     // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
DUMPER7_ASSERTS_WBP_NPCTopName_C_ShowName;

SDK_PARAM_NAMESPACE_END
SDK_NAMESPACE_END
