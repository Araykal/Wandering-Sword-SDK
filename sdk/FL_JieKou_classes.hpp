#pragma once



// Package: FL_JieKou

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "JH_structs.hpp"
#include "GridRuntime_structs.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass FL_JieKou.FL_JieKou_C
// 0x0000 (0x0028 - 0x0028)
class UFL_JieKou_C final : public UBlueprintFunctionLibrary
{
public:
	static void SetDirect(int32 NPCId, EGridDirect Direct, class UObject* __WorldContext);
	static void ClearNpc(int32 NPCId, class UObject* __WorldContext);
	static void Set_Npc_Transform(int32 NPCId, EGridDirect Direct, const struct FVector& Location, float Scale, class UObject* __WorldContext);
	static void Task_Talk(int32 QuestId, const int32 InIndex, class UObject* __WorldContext);
	static void Npc_Talk(int32 NPCId, class UObject* __WorldContext);
	static void CG_Hero_Begin(class AActor* ParentActor, class UObject* __WorldContext);
	static void CG_Hero_End(class AActor* Target, EGridDirect Hero_Direct, const struct FVector& Hero_Location, class UObject* __WorldContext);
	static void AddNpc_Team(int32 NPCId, class UObject* __WorldContext);
	static void RemoveNpc_Team(int32 NPCId, class UObject* __WorldContext);
	static void CG_EnableOFF(class UObject* __WorldContext);
	static void CG_EnableON(class UObject* __WorldContext);
	static void CG_TaskHide(class UObject* __WorldContext);
	static void CG_TaskShow(class UObject* __WorldContext);
	static void CG_PlayAttack(bool 左, class UObject* __WorldContext, class UPaperFlipbook** NewParam);
	static void CG_HideNPC(TArray<int32>& npc_id, class UObject* __WorldContext);
	static void NPC_Attribute(int32 NPCId, float 力道, float 根骨, float 身法, float 内功, int32 筋脉点, bool 筋脉加点, TArray<struct FDS_Skill>& 修改技能, TArray<struct FDS_Skill>& 添加技能, TArray<int32>& 替换装备, bool 恢复血蓝, bool 属性变化提示, EItemRandPoolType 随机属性, bool 技能变化提示, class UObject* __WorldContext);
	static void CG_Hide_WalkNPC(class UObject* __WorldContext);
	static void CG_Show_WalkNpc(class UObject* __WorldContext);
	static void NPC_JT(int32 NPCId, float 剑等级, float 刀等级, float 棍等级, float 拳等级, float 暗器等级, bool 是否提示, class UObject* __WorldContext);
	static void ResetMirrors(class UObject* __WorldContext);
	static void NPC_Max_HM(int32 NPCId, float MaxHP, float MaxMp, bool 系统提示, class UObject* __WorldContext);
	static void IsNpcHasSkin(int32 NPCId, const class FName& ItemToFind, class UObject* __WorldContext, bool* NewParam);
	static void Refresh_JiaYuan_TeamNPC(TArray<int32>& NewParam, class UObject* __WorldContext);
	static void GetNPCHiddenIds(class UObject* __WorldContext, TArray<int32>* NewParam);
	static void isTwo(class UObject* __WorldContext, bool* NewParam);
	static void OpenZ(bool bOpen, class UObject* __WorldContext);
	static void JiaYuan(int32 NPCId, const struct FVector& 坐标, bool 隐藏, class UObject* __WorldContext);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("FL_JieKou_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"FL_JieKou_C")
	}
	static class UFL_JieKou_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFL_JieKou_C>();
	}
};
DUMPER7_ASSERTS_UFL_JieKou_C;

SDK_NAMESPACE_END
