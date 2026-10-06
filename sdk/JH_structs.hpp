#pragma once



// Package: JH

#include "Basic.hpp"

#include "AIModule_structs.hpp"
#include "NeoUI_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "InputCore_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "GridRuntime_structs.hpp"


SDK_NAMESPACE_START

// Enum JH.EActionType
// NumValues: 0x003D
enum class EActionType : uint8
{
	None                                     = 0,
	CItem                                    = 1,
	CMoney                                   = 3,
	CAttr                                    = 4,
	ABuff                                    = 5,
	RBuff                                    = 6,
	ATag                                     = 7,
	RTag                                     = 8,
	CBAttr                                   = 9,
	ASkill                                   = 10,
	ASExp                                    = 11,
	ATeam                                    = 12,
	CYHD                                     = 13,
	CAllAttr                                 = 14,
	RTeam                                    = 15,
	CGuildFriendliness                       = 16,
	CGuildHonor                              = 17,
	AJingMai                                 = 18,
	AJingMaiPoint                            = 19,
	ManualSaveData                           = 20,
	HealthTeam                               = 21,
	HealthNPC                                = 22,
	ARecipe                                  = 23,
	AutoSaveData                             = 24,
	CGuild                                   = 25,
	JumpEndGame                              = 26,
	CGuildMemberFriendliness                 = 27,
	TakeItemFromNPC                          = 28,
	ChangeTeamIndex                          = 29,
	ABuffWithStack                           = 30,
	ARandItem                                = 31,
	ANormalRandItem                          = 32,
	ACookingRecipe                           = 33,
	AAlchemyRecipe                           = 34,
	ABattleCountBuff                         = 35,
	ARealTimeBuff                            = 36,
	DAggregationItem                         = 37,
	CTurnMode                                = 38,
	AddEquipt                                = 39,
	ANPCSkill                                = 40,
	RNPCSkill                                = 41,
	RSkillApplyState                         = 42,
	CNPCCantLeaveFlag                        = 43,
	CNPCCantInviteFlag                       = 44,
	CQuestStep                               = 50,
	RQuest                                   = 51,
	Teleport                                 = 60,
	OpenLetter                               = 70,
	JumpStep                                 = 99,
	AMount                                   = 102,
	CHealthAttrPercent                       = 103,
	CBlueAttrPercent                         = 104,
	AddMissingSkinWuDang                     = 105,
	AddMissingSkinMengZhu                    = 106,
	ANeiGongLimit                            = 107,
	AUpgradeExclusiveWeapon                  = 108,
	UnlockenNPCSkin                          = 109,
	Fix19830                                 = 110,
	AddMissingSkinPingMing                   = 111,
	EmptyItemFromNPC                         = 112,
	EActionType_MAX                          = 113,
};

// Enum JH.ERequirementType
// NumValues: 0x0030
enum class ERequirementType : uint8
{
	None                                     = 0,
	Item                                     = 1,
	AttrLow                                  = 2,
	AttrUp                                   = 3,
	PreQuest                                 = 4,
	SkillLv                                  = 5,
	Friendliness                             = 6,
	GuildFriendliness                        = 7,
	GuildHonor                               = 8,
	JingMai                                  = 9,
	HasQuest                                 = 10,
	NoQuest                                  = 11,
	Money                                    = 12,
	OnlyHero                                 = 13,
	FriendlinessUp                           = 14,
	ItemMax                                  = 15,
	GuildHonorMax                            = 16,
	TeamMember                               = 17,
	AggregationItem                          = 18,
	Talk                                     = 21,
	KillMonster                              = 22,
	FightWin                                 = 23,
	Gather                                   = 24,
	KillMonsterAggre                         = 25,
	HasNPCInfo                               = 26,
	FightingCapacity                         = 27,
	DifficultyMode                           = 28,
	ExcludeNPC                               = 41,
	OnlyDesignatedNPC                        = 42,
	CurrentSkillLv                           = 50,
	InteractWithNPC                          = 51,
	StudySkill                               = 52,
	SavedItem                                = 53,
	EnterTeamNPC                             = 54,
	CompareWin                               = 55,
	TreasureLow                              = 56,
	jingMaiFull                              = 57,
	PreQuestOnHell                           = 58,
	CurSaveDataItem                          = 59,
	bBuyDLC2                                 = 60,
	IsMaxDifficultyLevelUnlocked             = 61,
	CurSkin                                  = 62,
	bBuyDLC_WuJiaJiuShi                      = 63,
	WeaponRequirement                        = 64,
	CheckNeiGong                             = 65,
	CheckTower                               = 66,
	CheckSkinUnlock                          = 67,
	ERequirementType_MAX                     = 68,
};

// Enum JH.EReddotScenario
// NumValues: 0x0004
enum class EReddotScenario : uint8
{
	Backpack                                 = 0,
	Skill                                    = 1,
	Meridian                                 = 2,
	EReddotScenario_MAX                      = 3,
};

// Enum JH.EAbilitySystemEventType
// NumValues: 0x0032
enum class EAbilitySystemEventType : uint8
{
	None                                     = 0,
	PreAttack                                = 1,
	PostAttack                               = 2,
	PostCrit                                 = 3,
	PostMiss                                 = 4,
	PostKilled                               = 5,
	PostEndAbility                           = 6,
	PreEndAbility                            = 7,
	PostRest                                 = 8,
	PostMoved                                = 9,
	PostHit                                  = 10,
	PostBeHit                                = 11,
	PostEndTurn                              = 12,
	PreApplyEffectInAbility                  = 13,
	PostApplyEffectInAbility                 = 14,
	PreEndTurn                               = 15,
	PostBinSi                                = 16,
	PostStartTurn                            = 17,
	PreKilled                                = 18,
	PreOnEffectRemoved                       = 19,
	PostEffectApplyToSelf                    = 20,
	PostFriendlyDied                         = 21,
	PostEnemyDied                            = 22,
	PreBackHit                               = 23,
	PreTwoSide                               = 24,
	PostBackHit                              = 25,
	PostTwoSide                              = 26,
	PreBeBackHit                             = 27,
	PreBeTwoSide                             = 28,
	PostBeBackHit                            = 29,
	PostBeTwoSide                            = 30,
	PreActivateAbility                       = 36,
	PostActiveAbility                        = 37,
	OtherNPC_PreEndTurn                      = 38,
	OtherNPC_PostEndTurn                     = 39,
	PostActiveAbilityWithTarget              = 40,
	PreBeAttack                              = 51,
	PostBeAttack                             = 52,
	PostBeCrit                               = 53,
	PostDodge                                = 54,
	PostDied                                 = 55,
	PreDied                                  = 56,
	StartCombat                              = 60,
	HealthChanged                            = 61,
	ManaChanged                              = 62,
	PreFrontHit                              = 63,
	PostFront                                = 64,
	PreBeFrontHit                            = 65,
	PostBeFront                              = 66,
	EAbilitySystemEventType_MAX              = 67,
};

// Enum JH.EBeHitDirType
// NumValues: 0x0005
enum class EBeHitDirType : uint8
{
	None                                     = 0,
	Front                                    = 1,
	TwoSides                                 = 2,
	Back                                     = 3,
	EBeHitDirType_MAX                        = 4,
};

// Enum JH.EEventTargetType
// NumValues: 0x0005
enum class EEventTargetType : uint8
{
	None                                     = 0,
	Target                                   = 1,
	Instigator                               = 2,
	All                                      = 3,
	EEventTargetType_MAX                     = 4,
};

// Enum JH.ETeamTargetType
// NumValues: 0x0005
enum class ETeamTargetType : uint8
{
	None                                     = 0,
	UseEnemy                                 = 1,
	UseFriend                                = 2,
	All                                      = 3,
	ETeamTargetType_MAX                      = 4,
};

// Enum JH.EAttachRotatorType
// NumValues: 0x0003
enum class EAttachRotatorType : uint8
{
	RelationRotator                          = 0,
	AbsoluteRotator                          = 1,
	EAttachRotatorType_MAX                   = 2,
};

// Enum JH.ESpecialWordType
// NumValues: 0x0009
enum class ESpecialWordType : uint8
{
	None                                     = 0,
	Combo                                    = 1,
	MoveAgain                                = 2,
	PoZhao                                   = 3,
	DuanJin                                  = 4,
	NeiShang                                 = 5,
	FengXue                                  = 6,
	QiJue                                    = 7,
	ESpecialWordType_MAX                     = 8,
};

// Enum JH.EDamageType
// NumValues: 0x0009
enum class EDamageType : uint8
{
	None                                     = 0,
	Crit                                     = 1,
	Miss                                     = 2,
	TwoSide                                  = 3,
	BackHit                                  = 4,
	Immune                                   = 5,
	Resistance                               = 6,
	OtherDamage                              = 7,
	EDamageType_MAX                          = 8,
};

// Enum JH.EAchievementType
// NumValues: 0x0017
enum class EAchievementType : uint8
{
	Plot                                     = 0,
	TeamMate                                 = 1,
	Collections                              = 2,
	Skill                                    = 3,
	CurrentValue                             = 4,
	MoneyCurrentValue                        = 5,
	JingMaiFull                              = 6,
	CompareWinAll                            = 7,
	TreasureNum                              = 8,
	FightCapacity                            = 9,
	HellPlot                                 = 10,
	SkillTen                                 = 11,
	Fish                                     = 20,
	Blueprint                                = 21,
	TreasureAll                              = 22,
	FusionArmor                              = 23,
	CopyBook                                 = 24,
	AllEndings                               = 25,
	FourRed                                  = 26,
	AllTeamMate                              = 27,
	FusionWeapon                             = 28,
	Inherit                                  = 29,
	EAchievementType_MAX                     = 30,
};

// Enum JH.EJumpQuestStepType
// NumValues: 0x000B
enum class EJumpQuestStepType : uint8
{
	Request                                  = 0,
	Accept                                   = 1,
	Refuse                                   = 2,
	Process                                  = 3,
	Finish                                   = 4,
	Processed                                = 5,
	ProcessedFail                            = 6,
	UnFinishForFinishNPC                     = 7,
	UnFinishForRequestNPC                    = 8,
	Failing                                  = 9,
	EJumpQuestStepType_MAX                   = 10,
};

// Enum JH.EFightType
// NumValues: 0x0006
enum class EFightType : uint8
{
	Normal                                   = 0,
	Compare                                  = 1,
	Flag                                     = 2,
	TowerClimb                               = 3,
	Ring                                     = 4,
	EFightType_MAX                           = 5,
};

// Enum JH.EFadeType
// NumValues: 0x0003
enum class EFadeType : uint8
{
	FadingIn                                 = 0,
	FadingOut                                = 1,
	EFadeType_MAX                            = 2,
};

// Enum JH.EBattleResultModuleInteractionStatus
// NumValues: 0x0005
enum class EBattleResultModuleInteractionStatus : uint8
{
	Disabled_While_Launch                    = 0,
	Enabled_Terminate_Anim                   = 1,
	Disabled_After_Terminate_Anim            = 2,
	Enabled_Hide_Module                      = 3,
	EBattleResultModuleInteractionStatus_MAX = 4,
};

// Enum JH.EBackpackFilterType_Console
// NumValues: 0x000A
enum class EBackpackFilterType_Console : uint8
{
	None                                     = 0,
	Weapon                                   = 1,
	Armor                                    = 2,
	Pill                                     = 3,
	Book                                     = 4,
	Material                                 = 5,
	Treasure                                 = 6,
	Quest                                    = 7,
	Mount                                    = 8,
	EBackpackFilterType_MAX                  = 9,
};

// Enum JH.EGameFlag
// NumValues: 0x0003
enum class EGameFlag : uint8
{
	None                                     = 0,
	HideTeamMember                           = 1,
	EGameFlag_MAX                            = 2,
};

// Enum JH.ESelectAbilityRule
// NumValues: 0x0003
enum class ESelectAbilityRule : uint8
{
	Random                                   = 0,
	Max2Min                                  = 1,
	ESelectAbilityRule_MAX                   = 2,
};

// Enum JH.EFindDestinationFilter
// NumValues: 0x0004
enum class EFindDestinationFilter : uint8
{
	Farthest                                 = 0,
	Nearest                                  = 1,
	AttackTargetMaxNum                       = 2,
	EFindDestinationFilter_MAX               = 3,
};

// Enum JH.EControllerStep
// NumValues: 0x0008
enum class EControllerStep : uint8
{
	None                                     = 0,
	OnTurnStart                              = 1,
	OnMoving                                 = 2,
	OnMoveEnd                                = 3,
	OnSelectedAbility                        = 4,
	OnAttacking                              = 5,
	Attacked                                 = 6,
	EControllerStep_MAX                      = 7,
};

// Enum JH.ECourierStationRegion
// NumValues: 0x0008
enum class ECourierStationRegion : uint8
{
	None                                     = 0,
	ZhongYuan                                = 1,
	XiYu                                     = 2,
	GuanWai                                  = 3,
	NanJiang                                 = 4,
	BeiDi                                    = 5,
	OverSeas                                 = 6,
	ECourierStationRegion_MAX                = 7,
};

// Enum JH.EDialogHistoryLineType
// NumValues: 0x0004
enum class EDialogHistoryLineType : uint8
{
	Default                                  = 0,
	Narration                                = 1,
	Option                                   = 2,
	EDialogHistoryLineType_MAX               = 3,
};

// Enum JH.EJHNeoUIQuestListCategory
// NumValues: 0x0004
enum class EJHNeoUIQuestListCategory : uint8
{
	UNFINISHED                               = 0,
	FINISHED                                 = 1,
	FAILED                                   = 2,
	EJHNeoUIQuestListCategory_MAX            = 3,
};

// Enum JH.ESideBarSortResult
// NumValues: 0x0006
enum class ESideBarSortResult : uint8
{
	InternalError                            = 0,
	NoError                                  = 1,
	ReachTop                                 = 2,
	ReachBottom                              = 3,
	IsMainCharacter                          = 4,
	ESideBarSortResult_MAX                   = 5,
};

// Enum JH.EExtraBuffType
// NumValues: 0x0006
enum class EExtraBuffType : uint8
{
	None                                     = 0,
	OnlyBoss                                 = 1,
	AllEnemies                               = 2,
	Team                                     = 3,
	Special                                  = 4,
	EExtraBuffType_MAX                       = 5,
};

// Enum JH.EGatherType
// NumValues: 0x0008
enum class EGatherType : uint8
{
	Mineral                                  = 0,
	Wood                                     = 1,
	Grass                                    = 2,
	DynamicTreasureChest                     = 3,
	TreasureChest                            = 4,
	Dynamic                                  = 5,
	Static                                   = 6,
	EGatherType_MAX                          = 7,
};

// Enum JH.ETriggerType
// NumValues: 0x0002
enum class ETriggerType : uint8
{
	AfterReading                             = 0,
	ETriggerType_MAX                         = 1,
};

// Enum JH.EItemRandPoolType
// NumValues: 0x0004
enum class EItemRandPoolType : uint8
{
	None                                     = 0,
	Normal                                   = 1,
	Fusion                                   = 2,
	EItemRandPoolType_MAX                    = 3,
};

// Enum JH.EItemType
// NumValues: 0x0009
enum class EItemType : uint8
{
	None                                     = 0,
	Weapon                                   = 1,
	Armor                                    = 2,
	Potion                                   = 3,
	Book                                     = 4,
	Material                                 = 5,
	Treasure                                 = 6,
	QuestItem                                = 7,
	EItemType_MAX                            = 8,
};

// Enum JH.EItemSubType
// NumValues: 0x0040
enum class EItemSubType : uint8
{
	None                                     = 0,
	Sword                                    = 1,
	Sabre                                    = 2,
	Spear                                    = 3,
	Fist                                     = 4,
	HiddenWeapon                             = 5,
	OtherWeapons                             = 6,
	Skip7                                    = 7,
	Skip8                                    = 8,
	Skip9                                    = 9,
	Clothing                                 = 10,
	Hat                                      = 11,
	Shoes                                    = 12,
	Ornament                                 = 13,
	Skip14                                   = 14,
	Skip15                                   = 15,
	Skip16                                   = 16,
	Skip17                                   = 17,
	Skip18                                   = 18,
	Skip19                                   = 19,
	Pill                                     = 20,
	Drug                                     = 21,
	Drug_Stamina                             = 22,
	Drug_Health                              = 23,
	Drug_Mana                                = 24,
	Skip25                                   = 25,
	Skip26                                   = 26,
	Skip27                                   = 27,
	Skip28                                   = 28,
	CookedFood                               = 29,
	SwordBook                                = 30,
	SabreBook                                = 31,
	SpearBook                                = 32,
	FistBook                                 = 33,
	HiddenWeaponBook                         = 34,
	OtherWeaponsBook                         = 35,
	DodgeBook                                = 36,
	InsideSkillBook                          = 37,
	NoteBook                                 = 38,
	Skip39                                   = 39,
	Mineral                                  = 40,
	Plant                                    = 41,
	Food                                     = 42,
	Leather                                  = 43,
	Worm                                     = 44,
	Wood                                     = 45,
	Skip46                                   = 46,
	Skip47                                   = 47,
	Skip48                                   = 48,
	Skip49                                   = 49,
	Paint                                    = 50,
	Chess                                    = 51,
	TeaSet                                   = 52,
	Book                                     = 53,
	Lyra                                     = 54,
	Treasure                                 = 55,
	Flower                                   = 56,
	Skip57                                   = 57,
	Skip58                                   = 58,
	Skip59                                   = 59,
	QuestItem                                = 60,
	Letter                                   = 70,
	Recipe                                   = 99,
	EItemSubType_MAX                         = 100,
};

// Enum JH.EWeaponType
// NumValues: 0x0008
enum class EWeaponType : uint8
{
	Default                                  = 0,
	Sword                                    = 1,
	Sabre                                    = 2,
	Spear                                    = 3,
	Fist                                     = 4,
	HiddenWeapon                             = 5,
	OtherWeapons                             = 6,
	EWeaponType_MAX                          = 7,
};

// Enum JH.EItemQuality
// NumValues: 0x0008
enum class EItemQuality : uint8
{
	None                                     = 0,
	White                                    = 1,
	Green                                    = 2,
	Blue                                     = 3,
	Gold                                     = 4,
	DarkGold                                 = 5,
	Red                                      = 6,
	EItemQuality_MAX                         = 7,
};

// Enum JH.EAttributeType
// NumValues: 0x0047
enum class EAttributeType : uint8
{
	None                                     = 0,
	Health                                   = 1,
	MaxHealth                                = 2,
	Mana                                     = 3,
	MaxMana                                  = 4,
	Level                                    = 5,
	Strength                                 = 6,
	Constitution                             = 7,
	Agility                                  = 8,
	AttackPower                              = 9,
	Crit                                     = 10,
	Defense                                  = 11,
	Dodge                                    = 12,
	ActionPoint                              = 13,
	TurnRate                                 = 14,
	BoxingLevel                              = 15,
	BoxingExp                                = 16,
	FencingLevel                             = 17,
	FencingExp                               = 18,
	SabreLevel                               = 19,
	SabreExp                                 = 20,
	HiddenWeaponsLevel                       = 21,
	HiddenWeaponsExp                         = 22,
	SpearLevel                               = 23,
	SpearExp                                 = 24,
	OtherWeaponsLevel                        = 25,
	OtherWeaponsExp                          = 26,
	DaZaoLevel                               = 27,
	DaZaoExp                                 = 28,
	MedicalLevel                             = 29,
	MedicalExp                               = 30,
	DrinkLevel                               = 31,
	DrinkExp                                 = 32,
	EloquenceLevel                           = 33,
	EloquenceExp                             = 34,
	CalligraphyLevel                         = 35,
	CalligraphyExp                           = 36,
	TeaCeremonyLevel                         = 37,
	TeaCeremonyExp                           = 38,
	Honor                                    = 39,
	HealthRestoreRate                        = 40,
	ManaRestoreRate                          = 41,
	NeiLi                                    = 42,
	RealDefense                              = 43,
	JingLi                                   = 44,
	MaxJingLi                                = 45,
	HealthReGenRate                          = 46,
	ManaReGeneRate                           = 47,
	ZhiYiLevel                               = 48,
	ZhiYiExp                                 = 49,
	CritResistance                           = 50,
	Accuracy                                 = 51,
	DamageMultiplier                         = 52,
	BeDamageMultiplier                       = 53,
	MagicShield                              = 54,
	EscapeSuccrate                           = 55,
	MoneyMultiplier                          = 56,
	SExpMultiplier                           = 57,
	WorldMoveSpeed                           = 58,
	SceneMoveSpeed                           = 59,
	CritDamagePercent                        = 60,
	FishingLevel                             = 61,
	FishingExp                               = 62,
	CookingLevel                             = 63,
	CookingExp                               = 64,
	AlchemyLevel                             = 65,
	AlchemyExp                               = 66,
	GatheringLevel                           = 67,
	GatheringExp                             = 68,
	ManaCostMultiplier                       = 69,
	EAttributeType_MAX                       = 70,
};

// Enum JH.ELockDirection
// NumValues: 0x0006
enum class ELockDirection : uint32
{
	Left                                     = 0,
	Up                                       = 1,
	Right                                    = 2,
	Down                                     = 3,
	Top                                      = 4,
	ELockDirection_MAX                       = 5,
};

// Enum JH.ECharacterCGAnimalState
// NumValues: 0x0005
enum class ECharacterCGAnimalState : uint8
{
	Idle                                     = 0,
	FightIdle                                = 1,
	Run                                      = 2,
	FightRun                                 = 3,
	ECharacterCGAnimalState_MAX              = 4,
};

// Enum JH.ESoldierType
// NumValues: 0x000B
enum class ESoldierType : uint8
{
	None                                     = 0,
	FootSoldier                              = 1,
	Pikeman                                  = 2,
	Archer                                   = 3,
	Rider                                    = 4,
	Shieldman                                = 5,
	LightCavalry                             = 6,
	HorseArcher                              = 7,
	HeavyCavalry                             = 8,
	Axeman                                   = 9,
	ESoldierType_MAX                         = 10,
};

// Enum JH.EJiYiType
// NumValues: 0x0008
enum class EJiYiType : uint8
{
	None                                     = 0,
	DaZao                                    = 1,
	ZhiYi                                    = 2,
	Cooking                                  = 3,
	Alchemy                                  = 4,
	Fishing                                  = 5,
	Gathering                                = 6,
	EJiYiType_MAX                            = 7,
};

// Enum JH.EGEExtendReq_AttrCheckType
// NumValues: 0x0005
enum class EGEExtendReq_AttrCheckType : uint8
{
	None                                     = 0,
	AttributeMin                             = 1,
	AttributeMax                             = 2,
	AttributeMaxNew                          = 3,
	EGEExtendReq_MAX                         = 4,
};

// Enum JH.ECastTargetType
// NumValues: 0x0006
enum class ECastTargetType : uint8
{
	None                                     = 0,
	Self                                     = 1,
	Target                                   = 2,
	LastMousePoint                           = 3,
	OutPoint                                 = 4,
	ECastTargetType_MAX                      = 5,
};

// Enum JH.EUIDirection
// NumValues: 0x0005
enum class EUIDirection : uint8
{
	Up                                       = 0,
	Down                                     = 1,
	Left                                     = 2,
	Right                                    = 3,
	EUIDirection_MAX                         = 4,
};

// Enum JH.EJHMeridian_Node_Status
// NumValues: 0x0005
enum class EJHMeridian_Node_Status : uint8
{
	IDLE                                     = 0,
	Invalid                                  = 1,
	Valid                                    = 2,
	Fullfilled                               = 3,
	EJHMeridian_Node_MAX                     = 4,
};

// Enum JH.EJHMeridian_Node_Genre
// NumValues: 0x0008
enum class EJHMeridian_Node_Genre : uint8
{
	UNDEFINED                                = 0,
	ROOT                                     = 1,
	BLUE                                     = 2,
	GREEN                                    = 3,
	YELLOW                                   = 4,
	RED                                      = 5,
	HYPERLINK                                = 6,
	EJHMeridian_Node_MAX                     = 7,
};

// Enum JH.EJHMeridian_Zimai_Status
// NumValues: 0x0007
enum class EJHMeridian_Zimai_Status : uint8
{
	IDLE                                     = 0,
	Invalid                                  = 1,
	Valid                                    = 2,
	RongHuiGuanTong                          = 3,
	DaYuanMan                                = 4,
	Forbidden                                = 5,
	EJHMeridian_Zimai_MAX                    = 6,
};

// Enum JH.EJHMeridian_Zimai_Genre
// NumValues: 0x0007
enum class EJHMeridian_Zimai_Genre : uint8
{
	Ren                                      = 0,
	Chong                                    = 1,
	Yin                                      = 2,
	Du                                       = 3,
	Dai                                      = 4,
	Yang                                     = 5,
	EJHMeridian_Zimai_MAX                    = 6,
};

// Enum JH.EJHNeoUI_GuidanceStepConfigClusterType
// NumValues: 0x001D
enum class EJHNeoUI_GuidanceStepConfigClusterType : uint8
{
	Battle                                   = 0,
	Operation                                = 1,
	Equip                                    = 2,
	Skill                                    = 3,
	Meridian                                 = 4,
	Duel                                     = 5,
	Invite                                   = 6,
	BattleConfig                             = 7,
	Fusion                                   = 8,
	Apparel                                  = 9,
	Cooking                                  = 10,
	Alchemy                                  = 11,
	Fishing                                  = 12,
	FishingConfig                            = 13,
	SkillConfig                              = 14,
	BulkSell                                 = 15,
	BattleMode                               = 16,
	CourierStation                           = 17,
	Mount                                    = 18,
	DaYuanMan                                = 19,
	HeTu                                     = 20,
	LuoShu                                   = 21,
	HouWu                                    = 22,
	Estate_Gather                            = 23,
	Estate_Dialog                            = 24,
	Estate_Arena                             = 25,
	Estate_Workmanship                       = 26,
	PlaceHolder                              = 27,
	EJHNeoUI_MAX                             = 28,
};

// Enum JH.EJHNeoUIBackpackUniqueType
// NumValues: 0x0007
enum class EJHNeoUIBackpackUniqueType : uint8
{
	Other                                    = 0,
	Team_Main                                = 1,
	Team_NPC                                 = 2,
	Shop_Right                               = 3,
	Shop_Left                                = 4,
	Decompo                                  = 5,
	EJHNeoUIBackpackUniqueType_MAX           = 6,
};

// Enum JH.EJHNeoUIC_MenuGenre
// NumValues: 0x0007
enum class EJHNeoUIC_MenuGenre : uint8
{
	None                                     = 0,
	SortBackpack                             = 1,
	SkillUpgrade                             = 2,
	TeamSort                                 = 3,
	Decompo_Quality                          = 4,
	Decompo_Rank                             = 5,
	EJHNeoUIC_MAX                            = 6,
};

// Enum JH.ENaviEnum_Console
// NumValues: 0x000B
enum class ENaviEnum_Console : uint8
{
	Map                                      = 0,
	Equip                                    = 1,
	Backpack                                 = 2,
	Formation                                = 3,
	Skill                                    = 4,
	Quest                                    = 5,
	Meridian                                 = 6,
	Illustration                             = 7,
	System                                   = 8,
	DialogHistory                            = 9,
	ENaviEnum_MAX                            = 10,
};

// Enum JH.EJHNeoUIConsultLineStatus
// NumValues: 0x0005
enum class EJHNeoUIConsultLineStatus : uint8
{
	None                                     = 0,
	Valid                                    = 1,
	Invalid                                  = 2,
	Learned                                  = 3,
	EJHNeoUIConsultLineStatus_MAX            = 4,
};

// Enum JH.EJHAbilityGenre
// NumValues: 0x000A
enum class EJHAbilityGenre : uint8
{
	KouCai                                   = 0,
	JiuLiang                                 = 1,
	YiShu                                    = 2,
	DuanZao                                  = 3,
	MiaoShou                                 = 4,
	Qitao                                    = 5,
	JueDou                                   = 6,
	LianDan                                  = 7,
	TongYong                                 = 8,
	EJHAbilityGenre_MAX                      = 9,
};

// Enum JH.EProtagonistIconType
// NumValues: 0x0005
enum class EProtagonistIconType : uint8
{
	Blank                                    = 0,
	Default                                  = 1,
	WuDang                                   = 2,
	MengZhu                                  = 3,
	EProtagonistIconType_MAX                 = 4,
};

// Enum JH.EJHNeoUIHUDNaviBtnType
// NumValues: 0x0009
enum class EJHNeoUIHUDNaviBtnType : uint8
{
	None                                     = 0,
	Map                                      = 1,
	WorldMap                                 = 2,
	Backpack                                 = 3,
	Skill                                    = 4,
	Quest                                    = 5,
	Meridian                                 = 6,
	System                                   = 7,
	EJHNeoUIHUDNaviBtnType_MAX               = 8,
};

// Enum JH.EBackpackSortType
// NumValues: 0x0006
enum class EBackpackSortType : uint8
{
	None                                     = 0,
	Value                                    = 1,
	Time                                     = 2,
	Price                                    = 3,
	ItemType                                 = 4,
	EBackpackSortType_MAX                    = 5,
};

// Enum JH.EGameUILayers
// NumValues: 0x000D
enum class EGameUILayers : uint8
{
	GameUI_Null                              = 0,
	GameUI_Persistent                        = 1,
	GameUI_Battle                            = 2,
	GameUI_Main                              = 3,
	GameUI_High                              = 4,
	GameUI_GlobalNaviBtns                    = 5,
	GameUI_Config                            = 6,
	GameUI_WorldMap                          = 7,
	GameUI_Tips                              = 8,
	GameUI_Alert                             = 9,
	GameUI_Popup_MSG                         = 10,
	GameUI_Loading                           = 11,
	GameUI_MAX                               = 12,
};

// Enum JH.EGameUILayers_mobile
// NumValues: 0x000B
enum class EGameUILayers_mobile : uint8
{
	GameUI_Null                              = 0,
	GameUI_Persistent                        = 1,
	GameUI_Battle                            = 2,
	GameUI_Main                              = 3,
	GameUI_High                              = 4,
	GameUI_Tips                              = 5,
	GameUI_Popup_MSG                         = 6,
	GameUI_GlobalNaviBtns                    = 7,
	GameUI_Config                            = 8,
	GameUI_Alert                             = 9,
	GameUI_MAX                               = 10,
};

// Enum JH.EJHNeoUINGP_GroupType
// NumValues: 0x0009
enum class EJHNeoUINGP_GroupType : uint8
{
	None                                     = 0,
	Property                                 = 1,
	Workmanship                              = 2,
	Item                                     = 3,
	Blueprint                                = 4,
	Skill                                    = 5,
	SkillBook                                = 6,
	Inheritance                              = 7,
	EJHNeoUINGP_MAX                          = 8,
};

// Enum JH.EJHNeoUIPlatformType
// NumValues: 0x0004
enum class EJHNeoUIPlatformType : uint8
{
	PC                                       = 0,
	Mobile                                   = 1,
	Console                                  = 2,
	EJHNeoUIPlatformType_MAX                 = 3,
};

// Enum JH.EJHNeoUIPopupActionType
// NumValues: 0x0003
enum class EJHNeoUIPopupActionType : uint8
{
	None                                     = 0,
	BackpackSortType                         = 1,
	EJHNeoUIPopupActionType_MAX              = 2,
};

// Enum JH.EJHNeoUIPopupMenuGenre
// NumValues: 0x0005
enum class EJHNeoUIPopupMenuGenre : uint8
{
	None                                     = 0,
	Backpack                                 = 1,
	Equipment                                = 2,
	SkillInstall                             = 3,
	EJHNeoUIPopupMenuGenre_MAX               = 4,
};

// Enum JH.EJHNeoUIAffixSpotType
// NumValues: 0x0004
enum class EJHNeoUIAffixSpotType : uint8
{
	Default                                  = 0,
	Basic                                    = 1,
	Extra                                    = 2,
	EJHNeoUIAffixSpotType_MAX                = 3,
};

// Enum JH.EJHNeoUIAffixDisplayView
// NumValues: 0x0005
enum class EJHNeoUIAffixDisplayView : uint8
{
	Default                                  = 0,
	Fusion                                   = 1,
	Tips                                     = 2,
	GH                                       = 3,
	EJHNeoUIAffixDisplayView_MAX             = 4,
};

// Enum JH.EJHNeoUINumRoundType
// NumValues: 0x0005
enum class EJHNeoUINumRoundType : uint8
{
	None                                     = 0,
	Round                                    = 1,
	Floor                                    = 2,
	Ceil                                     = 3,
	EJHNeoUINumRoundType_MAX                 = 4,
};

// Enum JH.EJHNeoUIAffixDisplayNumberType
// NumValues: 0x0008
enum class EJHNeoUIAffixDisplayNumberType : uint8
{
	Integer                                  = 0,
	Decimal_1                                = 1,
	Decimal_2                                = 2,
	Percent_Integer                          = 3,
	Percent_Decimal_2                        = 4,
	Percent100_Integer                       = 5,
	Percent100_Decimal_2                     = 6,
	EJHNeoUIAffixDisplayNumberType_MAX       = 7,
};

// Enum JH.EJHValuePercentType
// NumValues: 0x0004
enum class EJHValuePercentType : uint8
{
	None                                     = 0,
	Raw                                      = 1,
	M100                                     = 2,
	EJHValuePercentType_MAX                  = 3,
};

// Enum JH.ECharacterAnimalState
// NumValues: 0x000B
enum class ECharacterAnimalState : uint8
{
	Idle                                     = 0,
	FightIdle                                = 1,
	Run                                      = 2,
	FightRun                                 = 3,
	Attack                                   = 4,
	BeAttack                                 = 5,
	Stop                                     = 6,
	Died                                     = 7,
	Special                                  = 8,
	FastRun                                  = 9,
	ECharacterAnimalState_MAX                = 10,
};

// Enum JH.EControllerMode
// NumValues: 0x0003
enum class EControllerMode : uint8
{
	Scene                                    = 0,
	Fight                                    = 1,
	EControllerMode_MAX                      = 2,
};

// Enum JH.EJHSNSTypes
// NumValues: 0x0007
enum class EJHSNSTypes : uint8
{
	Discord                                  = 0,
	Twitter                                  = 1,
	Facebook                                 = 2,
	Weibo                                    = 3,
	Bilibili                                 = 4,
	QQ                                       = 5,
	EJHSNSTypes_MAX                          = 6,
};

// Enum JH.EJHSoundClass
// NumValues: 0x000B
enum class EJHSoundClass : uint8
{
	Default                                  = 0,
	BGM                                      = 1,
	Arena                                    = 2,
	SFX                                      = 3,
	UI                                       = 4,
	Env                                      = 5,
	Player                                   = 6,
	Animation                                = 7,
	Skill                                    = 8,
	PlaceHolder                              = 9,
	EJHSoundClass_MAX                        = 10,
};

// Enum JH.EJHTutorialType
// NumValues: 0x0015
enum class EJHTutorialType : uint8
{
	None                                     = 0,
	FriendLess                               = 1,
	Fusion                                   = 2,
	Apparel                                  = 3,
	Fishing                                  = 4,
	Alchemy                                  = 5,
	Operation                                = 6,
	Equip                                    = 7,
	XinFa                                    = 8,
	Meridian                                 = 9,
	Duel                                     = 10,
	Battle                                   = 11,
	Cooking                                  = 12,
	SkillConfig                              = 13,
	BattleMode                               = 14,
	CourierStation                           = 15,
	Mount                                    = 16,
	SG_HeTu                                  = 17,
	SG_LuoShu                                = 18,
	SG_HouWu                                 = 19,
	EJHTutorialType_MAX                      = 20,
};

// Enum JH.EJHValueFormatType
// NumValues: 0x0006
enum class EJHValueFormatType : uint8
{
	None                                     = 0,
	Int                                      = 1,
	FPrecision2                              = 2,
	FPrecision3                              = 3,
	FP2Percent                               = 4,
	EJHValueFormatType_MAX                   = 5,
};

// Enum JH.ECookingRecipeTypes
// NumValues: 0x0005
enum class ECookingRecipeTypes : uint8
{
	Health                                   = 0,
	Mana                                     = 1,
	HealthAndMana                            = 2,
	Special                                  = 3,
	ECookingRecipeTypes_MAX                  = 4,
};

// Enum JH.EWorkmanshipQueryResult
// NumValues: 0x0006
enum class EWorkmanshipQueryResult : uint8
{
	Valid                                    = 0,
	RecipeNotExist                           = 1,
	LevelLowerThanLimit                      = 2,
	MaterialNotEnough                        = 3,
	CurrencyNotEnough                        = 4,
	EWorkmanshipQueryResult_MAX              = 5,
};

// Enum JH.ELittelGameType
// NumValues: 0x0006
enum class ELittelGameType : uint8
{
	None                                     = 0,
	Requested                                = 1,
	Faild                                    = 2,
	UnRequest                                = 3,
	Finished                                 = 4,
	ELittelGameType_MAX                      = 5,
};

// Enum JH.EDifficultyMode
// NumValues: 0x0006
enum class EDifficultyMode : uint8
{
	None                                     = 0,
	Easy                                     = 1,
	Common                                   = 2,
	Difficulty                               = 3,
	Hell                                     = 4,
	EDifficultyMode_MAX                      = 5,
};

// Enum JH.EWorldStateType
// NumValues: 0x000A
enum class EWorldStateType : uint8
{
	None                                     = 0,
	Scene                                    = 1,
	IntoFight                                = 2,
	Fighting                                 = 3,
	IntoScene                                = 4,
	CG                                       = 5,
	ChangeScene                              = 6,
	SkipingCG                                = 7,
	GameSystemActived                        = 8,
	EWorldStateType_MAX                      = 9,
};

// Enum JH.EDanceType
// NumValues: 0x0007
enum class EDanceType : uint8
{
	Standby                                  = 0,
	Left                                     = 1,
	Right                                    = 2,
	Up                                       = 3,
	Down                                     = 4,
	Fail                                     = 5,
	EDanceType_MAX                           = 6,
};

// Enum JH.ENPCFunctionType
// NumValues: 0x0004
enum class ENPCFunctionType : uint8
{
	NPC                                      = 0,
	Build                                    = 1,
	Town                                     = 2,
	ENPCFunctionType_MAX                     = 3,
};

// Enum JH.ENPCFunction
// NumValues: 0x0019
enum class ENPCFunction : uint8
{
	None                                     = 0,
	Talk                                     = 1,
	Deal                                     = 2,
	MakeEquip                                = 3,
	MakeFood                                 = 4,
	MakeDrug                                 = 5,
	Town                                     = 6,
	Scene                                    = 7,
	ZhiYi                                    = 8,
	GatherForQuest                           = 11,
	Observe                                  = 12,
	Gift                                     = 13,
	AddToTeam                                = 14,
	RemoveFromTeam                           = 15,
	Compare                                  = 16,
	GuildPatrol                              = 17,
	Consult                                  = 18,
	Decompo                                  = 19,
	JiSha                                    = 20,
	CourierStation                           = 21,
	Sleep                                    = 31,
	SleepNoPay                               = 32,
	TowerClimbing                            = 33,
	HarvestAll                               = 34,
	ENPCFunction_MAX                         = 35,
};

// Enum JH.EPictorialTypes
// NumValues: 0x0007
enum class EPictorialTypes : uint8
{
	Story                                    = 0,
	Item                                     = 1,
	Role                                     = 2,
	Teammate                                 = 3,
	Skill                                    = 4,
	Fish                                     = 5,
	EPictorialTypes_MAX                      = 6,
};

// Enum JH.ENPCQuestStateOnTopName
// NumValues: 0x0005
enum class ENPCQuestStateOnTopName : uint8
{
	None                                     = 0,
	MainQuestCanFinish                       = 1,
	MainQuestCantFinish                      = 2,
	MainQuestCanRequest                      = 3,
	ENPCQuestStateOnTopName_MAX              = 4,
};

// Enum JH.EQuestClassFlag
// NumValues: 0x0003
enum class EQuestClassFlag : uint8
{
	Primary                                  = 0,
	Secondary                                = 1,
	EQuestClassFlag_MAX                      = 2,
};

// Enum JH.EQuestStep
// NumValues: 0x0006
enum class EQuestStep : uint8
{
	None                                     = 0,
	Requested                                = 1,
	Faild                                    = 2,
	UnRequest                                = 3,
	Finished                                 = 4,
	EQuestStep_MAX                           = 5,
};

// Enum JH.ESettlementType
// NumValues: 0x0009
enum class ESettlementType : uint8
{
	None                                     = 0,
	FightingCapacity                         = 1,
	Ending                                   = 2,
	Skill                                    = 3,
	TeamMember                               = 4,
	JiYi                                     = 5,
	Master                                   = 6,
	DifficultyMode                           = 7,
	ESettlementType_MAX                      = 8,
};

// Enum JH.EBuffApplyTargetType
// NumValues: 0x0005
enum class EBuffApplyTargetType : uint8
{
	None                                     = 0,
	Target                                   = 1,
	Instigator                               = 2,
	All                                      = 3,
	EBuffApplyTargetType_MAX                 = 4,
};

// Enum JH.EBuffTargetType
// NumValues: 0x0005
enum class EBuffTargetType : uint8
{
	None                                     = 0,
	CanUseEnemy                              = 1,
	CanUseFriend                             = 2,
	All                                      = 3,
	EBuffTargetType_MAX                      = 4,
};

// Enum JH.EBuffType
// NumValues: 0x0005
enum class EBuffType : uint8
{
	None                                     = 0,
	Passive                                  = 1,
	PreAttackAttach                          = 2,
	PostAttackAttach                         = 3,
	EBuffType_MAX                            = 4,
};

// Enum JH.EAbilityType
// NumValues: 0x0004
enum class EAbilityType : uint8
{
	None                                     = 0,
	Attack                                   = 1,
	Buff                                     = 2,
	EAbilityType_MAX                         = 3,
};

// Enum JH.EBuffColor
// NumValues: 0x0003
enum class EBuffColor : uint8
{
	Green                                    = 0,
	Red                                      = 1,
	EBuffColor_MAX                           = 2,
};

// Enum JH.EQingGongType
// NumValues: 0x0005
enum class EQingGongType : uint8
{
	None                                     = 0,
	Attack                                   = 1,
	Displacement                             = 2,
	Buff                                     = 3,
	EQingGongType_MAX                        = 4,
};

// Enum JH.ENeiGongType
// NumValues: 0x0008
enum class ENeiGongType : uint8
{
	None                                     = 0,
	RecoveryBlood                            = 1,
	RecoveryBlue                             = 2,
	TeamNpcBuff                              = 3,
	AttackBuff                               = 4,
	Attack                                   = 5,
	Buff                                     = 6,
	ENeiGongType_MAX                         = 7,
};

// Enum JH.EBuffTimeMode
// NumValues: 0x0003
enum class EBuffTimeMode : uint8
{
	BattleCount                              = 0,
	RealTime                                 = 1,
	EBuffTimeMode_MAX                        = 2,
};

// Enum JH.ETeamModuleContentType
// NumValues: 0x000B
enum class ETeamModuleContentType : uint8
{
	PROPERTY                                 = 0,
	BACKPACK                                 = 1,
	SKILL                                    = 2,
	FAVORABILITY                             = 3,
	FORMATION                                = 4,
	DUEL                                     = 5,
	GIFT                                     = 6,
	LEAVE                                    = 7,
	INVITE                                   = 8,
	BUFF                                     = 9,
	ETeamModuleContentType_MAX               = 10,
};

// Enum JH.ETurnMode
// NumValues: 0x0003
enum class ETurnMode : uint8
{
	TurnBase                                 = 0,
	RealTime                                 = 1,
	ETurnMode_MAX                            = 2,
};

// ScriptStruct JH.JHNeoUI_GuidanceStepViewMessageParam
// 0x000C (0x000C - 0x0000)
struct FJHNeoUI_GuidanceStepViewMessageParam final
{
public:
	int32                                         intflag;                                           // 0x0000(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              pos;                                               // 0x0004(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FJHNeoUI_GuidanceStepViewMessageParam;

// ScriptStruct JH.FightSkillInfo
// 0x0020 (0x0020 - 0x0000)
struct FFightSkillInfo final
{
public:
	int32                                         CDType;                                            // 0x0000(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Num;                                               // 0x0004(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                           Names;                                             // 0x0008(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                         SkillId;                                           // 0x0018(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
DUMPER7_ASSERTS_FFightSkillInfo;

// ScriptStruct JH.FloatPropertyChild
// 0x0038 (0x0038 - 0x0000)
struct FFloatPropertyChild
{
public:
	TFieldPath<class FFloatProperty>              Property;                                          // 0x0000(0x0020)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 PropertyLongName;                                  // 0x0020(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Value;                                             // 0x0030(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
DUMPER7_ASSERTS_FFloatPropertyChild;

// ScriptStruct JH.FloatPropertyChildOfEnv
// 0x0000 (0x0038 - 0x0038)
struct FFloatPropertyChildOfEnv final : public FFloatPropertyChild
{
};
DUMPER7_ASSERTS_FFloatPropertyChildOfEnv;

// ScriptStruct JH.SoldierCounterInfo
// 0x0050 (0x0050 - 0x0000)
struct FSoldierCounterInfo final
{
public:
	TMap<ESoldierType, float>                     CounteredTypeMultipliers;                          // 0x0000(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FSoldierCounterInfo;

// ScriptStruct JH.RequirementSetting
// 0x000C (0x000C - 0x0000)
struct FRequirementSetting final
{
public:
	ERequirementType                              Type;                                              // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ID;                                                // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Num;                                               // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FRequirementSetting;

// ScriptStruct JH.ActionSetting
// 0x000C (0x000C - 0x0000)
struct FActionSetting final
{
public:
	EActionType                                   Type;                                              // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ID;                                                // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Num;                                               // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FActionSetting;

// ScriptStruct JH.DlgContentSetting
// 0x0020 (0x0020 - 0x0000)
struct FDlgContentSetting final
{
public:
	int32                                         NPCId;                                             // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Text;                                              // 0x0008(0x0018)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FDlgContentSetting;

// ScriptStruct JH.DlgOptionSetting
// 0x0050 (0x0050 - 0x0000)
struct FDlgOptionSetting final
{
public:
	uint8                                         Pad_0[0x8];                                        // 0x0000(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FRequirementSetting>            Requirements;                                      // 0x0008(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FActionSetting>                 Actions;                                           // 0x0018(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class FText                                   Text;                                              // 0x0028(0x0018)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<struct FDlgContentSetting>             DlgSettings;                                       // 0x0040(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FDlgOptionSetting;

// ScriptStruct JH.RecycleSetting
// 0x0020 (0x0028 - 0x0008)
struct FRecycleSetting final : public FTableRowBase
{
public:
	int32                                         ItemId;                                            // 0x0008(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         RecycleResultPercent;                              // 0x000C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FActionSetting>                 RecycleResult;                                     // 0x0010(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                         Money;                                             // 0x0020(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
DUMPER7_ASSERTS_FRecycleSetting;

// ScriptStruct JH.ItemInfoSetting
// 0x00F0 (0x00F8 - 0x0008)
struct FItemInfoSetting final : public FTableRowBase
{
public:
	int32                                         ID;                                                // 0x0008(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         EquipmentRank;                                     // 0x000C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                   Name;                                              // 0x0010(0x0018)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                   Description;                                       // 0x0028(0x0018)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	EItemSubType                                  ItemType;                                          // 0x0040(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_41[0x3];                                       // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CooldownTime;                                      // 0x0044(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FightCooldownTime;                                 // 0x0048(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              Icon;                                              // 0x0050(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         BuyPrice;                                          // 0x0078(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SellPrice;                                         // 0x007C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EItemQuality                                  Quality;                                           // 0x0080(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bCantGift;                                         // 0x0081(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bCantUse;                                          // 0x0082(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bCantSell;                                         // 0x0083(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bCanStack;                                         // 0x0084(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bCantTakeOff;                                      // 0x0085(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bDontCheckHPMP;                                    // 0x0086(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bCantTakeFromCompare;                              // 0x0087(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bOpenForPlayer;                                    // 0x0088(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_89[0x7];                                       // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FRequirementSetting>            Requirements;                                      // 0x0090(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FActionSetting>                 Actions;                                           // 0x00A0(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	int32                                         UsedCountLimit;                                    // 0x00B0(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_B4[0x4];                                       // 0x00B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 RandActionPools;                                   // 0x00B8(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<int32>                                 RandRange;                                         // 0x00C8(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<int32>                                 NormalRandActionPools;                             // 0x00D8(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<int32>                                 NormalRandRange;                                   // 0x00E8(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FItemInfoSetting;

// ScriptStruct JH.FusionResultSetting
// 0x0010 (0x0010 - 0x0000)
struct FFusionResultSetting final
{
public:
	float                                         Weight;                                            // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FActionSetting                         Action;                                            // 0x0004(0x000C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FFusionResultSetting;

// ScriptStruct JH.FusionSetting
// 0x00E0 (0x00E8 - 0x0008)
struct FFusionSetting final : public FTableRowBase
{
public:
	int32                                         ID;                                                // 0x0008(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Name;                                              // 0x0010(0x0018)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                   Description;                                       // 0x0028(0x0018)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	EItemSubType                                  ItemType;                                          // 0x0040(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              Icon;                                              // 0x0048(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FRequirementSetting>            LevelLimits;                                       // 0x0070(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FRequirementSetting>            Requirements;                                      // 0x0080(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FFusionResultSetting>           Results;                                           // 0x0090(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FFusionResultSetting>           Results1;                                          // 0x00A0(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FFusionResultSetting>           Results2;                                          // 0x00B0(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                 Weights;                                           // 0x00C0(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FActionSetting>                 Actions;                                           // 0x00D0(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                         Money;                                             // 0x00E0(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Order;                                             // 0x00E4(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FFusionSetting;

// ScriptStruct JH.MountSkinSetting
// 0x000C (0x000C - 0x0000)
struct FMountSkinSetting final
{
public:
	int32                                         ID;                                                // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   ResourceName;                                      // 0x0004(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FMountSkinSetting;

// ScriptStruct JH.MountInfoSetting
// 0x0450 (0x0458 - 0x0008)
struct FMountInfoSetting final : public FTableRowBase
{
public:
	int32                                         ID;                                                // 0x0008(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   Name;                                              // 0x000C(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              Icon;                                              // 0x0018(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UPaperFlipbook>          MountFlipbook;                                     // 0x0040(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FActionSetting>                 Actions;                                           // 0x0068(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                         MoveSpeed;                                         // 0x0078(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SmallMapMoveSpeed;                                 // 0x007C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                   Description;                                       // 0x0080(0x0018)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FName                                   ResourceName;                                      // 0x0098(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   ResourceNameForWD;                                 // 0x00A0(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   ResourceNameForWLMZ;                               // 0x00A8(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bCharged;                                          // 0x00B0(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_B1[0x3];                                       // 0x00B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         DLCAppId;                                          // 0x00B4(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bDisablePhysCheck;                                 // 0x00B8(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_B9[0x7];                                       // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class USoundBase>              FootStepVoice;                                     // 0x00C0(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class USoundBase>              IdleVoice;                                         // 0x00E8(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         IncrementalInterval;                               // 0x0110(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         NextAddInterval;                                   // 0x0114(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FMountSkinSetting>              Wh;                                                // 0x0118(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FMountSkinSetting>              WhSkinOne;                                         // 0x0128(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FMountSkinSetting>              bj;                                                // 0x0138(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FMountSkinSetting>              BjSkinOne;                                         // 0x0148(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FMountSkinSetting>              oyx;                                               // 0x0158(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FMountSkinSetting>              OyxSkinOne;                                        // 0x0168(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FMountSkinSetting>              Mw;                                                // 0x0178(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FMountSkinSetting>              MwSkinOne;                                         // 0x0188(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FMountSkinSetting>              Clx;                                               // 0x0198(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FMountSkinSetting>              ClxSkinOne;                                        // 0x01A8(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FMountSkinSetting>              Sgh;                                               // 0x01B8(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FMountSkinSetting>              SghSkinOne;                                        // 0x01C8(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FMountSkinSetting>              Sml;                                               // 0x01D8(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FMountSkinSetting>              SmlSkinOne;                                        // 0x01E8(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FMountSkinSetting>              Kl;                                                // 0x01F8(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FMountSkinSetting>              KlSkinOne;                                         // 0x0208(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FMountSkinSetting>              Lxe;                                               // 0x0218(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FMountSkinSetting>              LxeSkinOne;                                        // 0x0228(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FMountSkinSetting>              HCQ;                                               // 0x0238(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FMountSkinSetting>              HCQSkinOne;                                        // 0x0248(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FMountSkinSetting>              YJ;                                                // 0x0258(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FMountSkinSetting>              YJSkinOne;                                         // 0x0268(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FMountSkinSetting>              TD;                                                // 0x0278(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FMountSkinSetting>              TdSkinOne;                                         // 0x0288(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FMountSkinSetting>              YF;                                                // 0x0298(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FMountSkinSetting>              YFSkinOne;                                         // 0x02A8(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FMountSkinSetting>              LWQ;                                               // 0x02B8(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FMountSkinSetting>              LWQSkinOne;                                        // 0x02C8(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FMountSkinSetting>              LYX;                                               // 0x02D8(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FMountSkinSetting>              LYXSkinOne;                                        // 0x02E8(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FMountSkinSetting>              ywh;                                               // 0x02F8(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FMountSkinSetting>              YwhSkinOne;                                        // 0x0308(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FMountSkinSetting>              gsg;                                               // 0x0318(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FMountSkinSetting>              GSGSkinOne;                                        // 0x0328(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FMountSkinSetting>              LY;                                                // 0x0338(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FMountSkinSetting>              LYSkinOne;                                         // 0x0348(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FMountSkinSetting>              NW;                                                // 0x0358(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FMountSkinSetting>              NWSkinOne;                                         // 0x0368(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FMountSkinSetting>              lx;                                                // 0x0378(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FMountSkinSetting>              LXSkinOne;                                         // 0x0388(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FMountSkinSetting>              xyy;                                               // 0x0398(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FMountSkinSetting>              XYYSkinOne;                                        // 0x03A8(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FMountSkinSetting>              STN;                                               // 0x03B8(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FMountSkinSetting>              STNSkinOne;                                        // 0x03C8(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FMountSkinSetting>              DLS;                                               // 0x03D8(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FMountSkinSetting>              DLSSkinOne;                                        // 0x03E8(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FMountSkinSetting>              dzc;                                               // 0x03F8(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FMountSkinSetting>              DZCSkinOne;                                        // 0x0408(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FMountSkinSetting>              JXT;                                               // 0x0418(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FMountSkinSetting>              JXTSkinOne;                                        // 0x0428(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FMountSkinSetting>              Dzs;                                               // 0x0438(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FMountSkinSetting>              DzsSkinOne;                                        // 0x0448(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FMountInfoSetting;

// ScriptStruct JH.CourierStationConfigItem
// 0x0020 (0x0020 - 0x0000)
struct FCourierStationConfigItem final
{
public:
	class FString                                 DisplayName;                                       // 0x0000(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MapId;                                             // 0x0010(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MapX;                                              // 0x0014(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MapY;                                              // 0x0018(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
DUMPER7_ASSERTS_FCourierStationConfigItem;

// ScriptStruct JH.AchievementInfoSetting
// 0x0070 (0x0078 - 0x0008)
struct FAchievementInfoSetting final : public FTableRowBase
{
public:
	int32                                         ID;                                                // 0x0008(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MaxNum;                                            // 0x000C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   APIName;                                           // 0x0010(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   APIProgressName;                                   // 0x0018(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FRequirementSetting>            Requirements;                                      // 0x0020(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FRequirementSetting>            CustomeRequirements;                               // 0x0030(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	EAchievementType                              AchievementType;                                   // 0x0040(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Name;                                              // 0x0048(0x0018)(Edit, NativeAccessSpecifierPublic)
	class FText                                   Description;                                       // 0x0060(0x0018)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FAchievementInfoSetting;

// ScriptStruct JH.JHGamepadSimulationItem
// 0x0020 (0x0020 - 0x0000)
struct FJHGamepadSimulationItem final
{
public:
	struct FKey                                   SrcKey;                                            // 0x0000(0x0018)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ENeoUIGamepadButtonType                       DestKey;                                           // 0x0018(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
DUMPER7_ASSERTS_FJHGamepadSimulationItem;

// ScriptStruct JH.JHGamepadSimulationMap
// 0x0010 (0x0010 - 0x0000)
struct FJHGamepadSimulationMap final
{
public:
	TArray<struct FJHGamepadSimulationItem>       Items;                                             // 0x0000(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FJHGamepadSimulationMap;

// ScriptStruct JH.JHNeoUINGP_InheritanceResult
// 0x0168 (0x0168 - 0x0000)
struct alignas(0x08) FJHNeoUINGP_InheritanceResult final
{
public:
	uint8                                         Pad_0[0x168];                                      // 0x0000(0x0168)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
DUMPER7_ASSERTS_FJHNeoUINGP_InheritanceResult;

// ScriptStruct JH.ActionSettings
// 0x0010 (0x0010 - 0x0000)
struct FActionSettings final
{
public:
	TArray<struct FActionSetting>                 Actions;                                           // 0x0000(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FActionSettings;

// ScriptStruct JH.ActionStateSetting
// 0x0010 (0x0010 - 0x0000)
struct FActionStateSetting final
{
public:
	class UObject*                                ObjectState;                                       // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         IntState;                                          // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
DUMPER7_ASSERTS_FActionStateSetting;

// ScriptStruct JH.CourierStationItemReq
// 0x0010 (0x0010 - 0x0000)
struct FCourierStationItemReq final
{
public:
	TArray<struct FRequirementSetting>            Requirements;                                      // 0x0000(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FCourierStationItemReq;

// ScriptStruct JH.CourierStationTableRow
// 0x0050 (0x0058 - 0x0008)
struct FCourierStationTableRow final : public FTableRowBase
{
public:
	int32                                         ID;                                                // 0x0008(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   DisplayName;                                       // 0x0010(0x0018)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	ECourierStationRegion                         Region;                                            // 0x0028(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         MapId;                                             // 0x002C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Price;                                             // 0x0030(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TeleportationX;                                    // 0x0034(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TeleportationY;                                    // 0x0038(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TeleportationZ;                                    // 0x003C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FCourierStationItemReq>         Requirements;                                      // 0x0040(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                         NPCId;                                             // 0x0050(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_54[0x4];                                       // 0x0054(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
DUMPER7_ASSERTS_FCourierStationTableRow;

// ScriptStruct JH.TeamInfoTimeStates
// 0x0004 (0x0004 - 0x0000)
struct FTeamInfoTimeStates final
{
public:
	int32                                         LastCompare;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FTeamInfoTimeStates;

// ScriptStruct JH.DialogCommonData
// 0x0050 (0x0050 - 0x0000)
struct FDialogCommonData final
{
public:
	class FText                                   CharacterName;                                     // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                   Content;                                           // 0x0018(0x0018)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FString                                 LeftPortrait;                                      // 0x0030(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 RightPortrait;                                     // 0x0040(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FDialogCommonData;

// ScriptStruct JH.NPCFriendlinessLockSetting
// 0x0018 (0x0018 - 0x0000)
struct FNPCFriendlinessLockSetting final
{
public:
	int32                                         FriendlinessLock;                                  // 0x0000(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FRequirementSetting>            ReqirementsForUnlock;                              // 0x0008(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FNPCFriendlinessLockSetting;

// ScriptStruct JH.JHExtraDifficultyBuff
// 0x00D0 (0x00D8 - 0x0008)
struct FJHExtraDifficultyBuff final : public FTableRowBase
{
public:
	int32                                         ID;                                                // 0x0008(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   BuffName;                                          // 0x0010(0x0018)(Edit, NativeAccessSpecifierPublic)
	class FText                                   BuffDesc;                                          // 0x0028(0x0018)(Edit, NativeAccessSpecifierPublic)
	int32                                         ColorIndex;                                        // 0x0040(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              BuffIcon;                                          // 0x0048(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>              HighlightedIcon;                                   // 0x0070(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ActingBuffId;                                      // 0x0098(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9C[0x4];                                       // 0x009C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 FriendActingBuffIds;                               // 0x00A0(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                 EnemyActingBuffIds;                                // 0x00B0(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                 BossActingBuffIds;                                 // 0x00C0(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	EExtraBuffType                                BuffType;                                          // 0x00D0(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bReserved;                                         // 0x00D1(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_D2[0x6];                                       // 0x00D2(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
DUMPER7_ASSERTS_FJHExtraDifficultyBuff;

// ScriptStruct JH.GatherActionSetting
// 0x0010 (0x0010 - 0x0000)
struct FGatherActionSetting final
{
public:
	float                                         Chance;                                            // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FActionSetting                         Action;                                            // 0x0004(0x000C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FGatherActionSetting;

// ScriptStruct JH.GatherInfoSetting
// 0x00F0 (0x00F8 - 0x0008)
struct FGatherInfoSetting final : public FTableRowBase
{
public:
	int32                                         ID;                                                // 0x0008(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Name;                                              // 0x0010(0x0018)(Edit, NativeAccessSpecifierPublic)
	class FText                                   Description;                                       // 0x0028(0x0018)(Edit, NativeAccessSpecifierPublic)
	EGatherType                                   GatherType;                                        // 0x0040(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_41[0x3];                                       // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CooldownTime;                                      // 0x0044(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Chance;                                            // 0x0048(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UPaperFlipbook>          PreGatherFlipbook;                                 // 0x0050(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UPaperFlipbook>          PostGatherFlipbook;                                // 0x0078(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class USoundCue>               GatherSoundCue;                                    // 0x00A0(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FRequirementSetting>            Requirements;                                      // 0x00C8(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                         JingLiCost;                                        // 0x00D8(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_DC[0x4];                                       // 0x00DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FGatherActionSetting>           Actions;                                           // 0x00E0(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                          bStatistical;                                      // 0x00F0(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_F1[0x7];                                       // 0x00F1(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
DUMPER7_ASSERTS_FGatherInfoSetting;

// ScriptStruct JH.GatherActionSettings
// 0x0010 (0x0010 - 0x0000)
struct FGatherActionSettings final
{
public:
	TArray<struct FGatherActionSetting>           Arrays;                                            // 0x0000(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FGatherActionSettings;

// ScriptStruct JH.NPCTalkSetting
// 0x0028 (0x0030 - 0x0008)
struct FNPCTalkSetting final : public FTableRowBase
{
public:
	int32                                         NPCId;                                             // 0x0008(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FRequirementSetting>            Conditions;                                        // 0x0010(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FDlgContentSetting>             Dlgs;                                              // 0x0020(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FNPCTalkSetting;

// ScriptStruct JH.GatherInfoSpec
// 0x001C (0x001C - 0x0000)
struct FGatherInfoSpec final
{
public:
	struct FGuid                                  ID;                                                // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         DefId;                                             // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         LastRefreshTime;                                   // 0x0014(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bVisible;                                          // 0x0018(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
DUMPER7_ASSERTS_FGatherInfoSpec;

// ScriptStruct JH.JHGlobalMessageItem
// 0x0020 (0x0020 - 0x0000)
struct FJHGlobalMessageItem final
{
public:
	int32                                         MsgId;                                             // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         LayerOrder;                                        // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                   MsgContent;                                        // 0x0008(0x0018)(BlueprintVisible, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FJHGlobalMessageItem;

// ScriptStruct JH.JHSoundItemStatus
// 0x0014 (0x0014 - 0x0000)
struct alignas(0x04) FJHSoundItemStatus final
{
public:
	uint8                                         Pad_0[0x14];                                       // 0x0000(0x0014)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
DUMPER7_ASSERTS_FJHSoundItemStatus;

// ScriptStruct JH.MonsterNPCInfo
// 0x0028 (0x0028 - 0x0000)
struct alignas(0x08) FMonsterNPCInfo final
{
public:
	struct FGuid                                  Guid;                                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         NPCId;                                             // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_14[0x8];                                       // 0x0014(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         RemainingSecs;                                     // 0x001C(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_20[0x8];                                       // 0x0020(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
DUMPER7_ASSERTS_FMonsterNPCInfo;

// ScriptStruct JH.RequirementSettings
// 0x0010 (0x0010 - 0x0000)
struct FRequirementSettings final
{
public:
	TArray<struct FRequirementSetting>            Requirements;                                      // 0x0000(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FRequirementSettings;

// ScriptStruct JH.GlobalTriggerSetting
// 0x0028 (0x0030 - 0x0008)
struct FGlobalTriggerSetting final : public FTableRowBase
{
public:
	int32                                         ID;                                                // 0x0008(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ETriggerType                                  TriggerType;                                       // 0x000C(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bNoShowScreenAnim;                                 // 0x000D(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_E[0x2];                                        // 0x000E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FRequirementSettings>           Reqs;                                              // 0x0010(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FActionSetting>                 Acts;                                              // 0x0020(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FGlobalTriggerSetting;

// ScriptStruct JH.PictorialGroupSaveSpec
// 0x0018 (0x0018 - 0x0000)
struct FPictorialGroupSaveSpec final
{
public:
	int32                                         ID;                                                // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              UnlockTime;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Order;                                             // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
DUMPER7_ASSERTS_FPictorialGroupSaveSpec;

// ScriptStruct JH.GuildSetting
// 0x0038 (0x0040 - 0x0008)
struct FGuildSetting final : public FTableRowBase
{
public:
	int32                                         ID;                                                // 0x0008(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Name;                                              // 0x0010(0x0018)(Edit, NativeAccessSpecifierPublic)
	class FText                                   Description;                                       // 0x0028(0x0018)(Edit, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FGuildSetting;

// ScriptStruct JH.HomelandSetting
// 0x0078 (0x0080 - 0x0008)
struct FHomelandSetting final : public FTableRowBase
{
public:
	int32                                         ID;                                                // 0x0008(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Name;                                              // 0x0010(0x0018)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TArray<struct FActionSetting>                 Results1;                                          // 0x0028(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FActionSetting>                 Results2;                                          // 0x0038(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FActionSetting>                 Results3;                                          // 0x0048(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FActionSetting>                 Results4;                                          // 0x0058(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FActionSetting>                 Results5;                                          // 0x0068(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                         TimeInterval;                                      // 0x0078(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         LimitSettlementCount;                              // 0x007C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FHomelandSetting;

// ScriptStruct JH.HomelandResultSetting
// 0x0010 (0x0010 - 0x0000)
struct FHomelandResultSetting final
{
public:
	float                                         Weight;                                            // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FActionSetting                         Action;                                            // 0x0004(0x000C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FHomelandResultSetting;

// ScriptStruct JH.TableTwoParamentSettingDefine
// 0x0008 (0x0008 - 0x0000)
struct FTableTwoParamentSettingDefine final
{
public:
	int32                                         ID;                                                // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Value;                                             // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FTableTwoParamentSettingDefine;

// ScriptStruct JH.InheritInfoSetting
// 0x00A0 (0x00A8 - 0x0008)
struct FInheritInfoSetting final : public FTableRowBase
{
public:
	int32                                         ID;                                                // 0x0008(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Name;                                              // 0x0010(0x0018)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int32                                         NeedPoint;                                         // 0x0028(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FRequirementSetting>            Requirements;                                      // 0x0030(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FRequirementSettings>           OrRequirements;                                    // 0x0040(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FActionSetting>                 Actions;                                           // 0x0050(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FTableTwoParamentSettingDefine> ItemList;                                          // 0x0060(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FTableTwoParamentSettingDefine> SkillList;                                         // 0x0070(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>              Icon;                                              // 0x0080(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FInheritInfoSetting;

// ScriptStruct JH.JingMaiSetting
// 0x0098 (0x00A0 - 0x0008)
struct FJingMaiSetting : public FTableRowBase
{
public:
	int32                                         ID;                                                // 0x0008(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Style;                                             // 0x000C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         OwnerId;                                           // 0x0010(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ParentId;                                          // 0x0014(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         NextNodeId;                                        // 0x0018(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Cost;                                              // 0x001C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                   ViewName;                                          // 0x0020(0x0018)(Edit, NativeAccessSpecifierPublic)
	class FText                                   Description;                                       // 0x0038(0x0018)(Edit, NativeAccessSpecifierPublic)
	TArray<struct FRequirementSetting>            Requirements;                                      // 0x0050(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FActionSetting>                 Actions1;                                          // 0x0060(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FActionSetting>                 Actions2;                                          // 0x0070(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FActionSetting>                 Actions3;                                          // 0x0080(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_90[0x10];                                      // 0x0090(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
DUMPER7_ASSERTS_FJingMaiSetting;

// ScriptStruct JH.UniformInputMappingSettingItem
// 0x0050 (0x0050 - 0x0000)
struct FUniformInputMappingSettingItem final
{
public:
	int32                                         Index;                                             // 0x0000(0x0004)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         DisplayCategory;                                   // 0x0004(0x0004)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         KeyDisplayType;                                    // 0x0008(0x0004)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   MappingKey;                                        // 0x000C(0x0008)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKey                                   DefaultKey;                                        // 0x0018(0x0018)(SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                   CurrentKey;                                        // 0x0030(0x0018)(SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Scale;                                             // 0x0048(0x0004)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          isAction;                                          // 0x004C(0x0001)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          disableChange;                                     // 0x004D(0x0001)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsEmpty;                                           // 0x004E(0x0001)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4F[0x1];                                       // 0x004F(0x0001)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
DUMPER7_ASSERTS_FUniformInputMappingSettingItem;

// ScriptStruct JH.UniformInputMappingDisplayCategory2
// 0x0010 (0x0010 - 0x0000)
struct alignas(0x08) FUniformInputMappingDisplayCategory2 final
{
public:
	uint8                                         Pad_0[0x10];                                       // 0x0000(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
DUMPER7_ASSERTS_FUniformInputMappingDisplayCategory2;

// ScriptStruct JH.SettlementSetting
// 0x0038 (0x0040 - 0x0008)
struct FSettlementSetting final : public FTableRowBase
{
public:
	int32                                         ID;                                                // 0x0008(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FRequirementSetting>            Requirements;                                      // 0x0010(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	ESettlementType                               SettlementType;                                    // 0x0020(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Score;                                             // 0x0024(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                   EndingName;                                        // 0x0028(0x0018)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FSettlementSetting;

// ScriptStruct JH.UniformInputMappingDisplayCategory
// 0x000C (0x000C - 0x0000)
struct alignas(0x04) FUniformInputMappingDisplayCategory final
{
public:
	uint8                                         Pad_0[0xC];                                        // 0x0000(0x000C)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
DUMPER7_ASSERTS_FUniformInputMappingDisplayCategory;

// ScriptStruct JH.ActionWeight
// 0x0010 (0x0010 - 0x0000)
struct FActionWeight final
{
public:
	int32                                         Weight;                                            // 0x0000(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FActionSetting                         Action;                                            // 0x0004(0x000C)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FActionWeight;

// ScriptStruct JH.RandActionPoolSetting
// 0x0018 (0x0020 - 0x0008)
struct FRandActionPoolSetting final : public FTableRowBase
{
public:
	int32                                         ID;                                                // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FActionWeight>                  ActionWeights;                                     // 0x0010(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FRandActionPoolSetting;

// ScriptStruct JH.NPCResourceSetting
// 0x0E08 (0x0E10 - 0x0008)
struct FNPCResourceSetting final : public FTableRowBase
{
public:
	int32                                         ID;                                                // 0x0008(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              HeadImage;                                         // 0x0010(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>              DlgImage;                                          // 0x0038(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>              TeamImage;                                         // 0x0060(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>              FightImage;                                        // 0x0088(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>              HeadImage_mobile;                                  // 0x00B0(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>              DlgImage_mobile;                                   // 0x00D8(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>              TeamImage_mobile;                                  // 0x0100(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>              FightImage_mobile;                                 // 0x0128(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UPaperSprite>            HeadSprite;                                        // 0x0150(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bOneFace;                                          // 0x0178(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUse2PICalcDir;                                    // 0x0179(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bCantFaceToTalkDirect;                             // 0x017A(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bTranslucencyMaterials;                            // 0x017B(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_17C[0x4];                                      // 0x017C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<TSoftObjectPtr<class UPaperFlipbook>>  DingLeftFlipbooks;                                 // 0x0180(0x0010)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UPaperFlipbook>>  DingRightFlipbooks;                                // 0x0190(0x0010)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UPaperFlipbook>>  QingGongStartJumpLeftFlipbooks;                    // 0x01A0(0x0010)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UPaperFlipbook>>  QingGongStartJumpRightFlipbooks;                   // 0x01B0(0x0010)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UPaperFlipbook>>  QingGongEndJumpLeftFlipbooks;                      // 0x01C0(0x0010)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UPaperFlipbook>>  QingGongEndJumpRightFlipbooks;                     // 0x01D0(0x0010)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UPaperFlipbook>          QingGongSSStartLeftFlipbooks;                      // 0x01E0(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UPaperFlipbook>          QingGongSSStartRightFlipbooks;                     // 0x0208(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UPaperFlipbook>          QingGongSSLoopLeftFlipbooks;                       // 0x0230(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UPaperFlipbook>          QingGongSSLoopRightFlipbooks;                      // 0x0258(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UPaperFlipbook>          QingGongSSEndLeftFlipbooks;                        // 0x0280(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UPaperFlipbook>          QingGongSSEndRightFlipbooks;                       // 0x02A8(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UPaperFlipbook>          IdleLeftFlipbook;                                  // 0x02D0(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UPaperFlipbook>          IdleRightFlipbook;                                 // 0x02F8(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UPaperFlipbook>          IdleUpFlipbook;                                    // 0x0320(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UPaperFlipbook>          IdleDownFlipbook;                                  // 0x0348(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UPaperFlipbook>          FightIdleLeftFlipbook;                             // 0x0370(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UPaperFlipbook>          FightIdleRightFlipbook;                            // 0x0398(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UPaperFlipbook>          FightIdleUpFlipbook;                               // 0x03C0(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UPaperFlipbook>          FightIdleDownFlipbook;                             // 0x03E8(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UPaperFlipbook>          RunLeftFlipbook;                                   // 0x0410(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UPaperFlipbook>          RunRightFlipbook;                                  // 0x0438(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UPaperFlipbook>          RunUpFlipbook;                                     // 0x0460(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UPaperFlipbook>          RunDownFlipbook;                                   // 0x0488(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UPaperFlipbook>          FastRunLeftFlipbook;                               // 0x04B0(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UPaperFlipbook>          FastRunRightFlipbook;                              // 0x04D8(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UPaperFlipbook>          FastRunUpFlipbook;                                 // 0x0500(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UPaperFlipbook>          FastRunDownFlipbook;                               // 0x0528(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UPaperFlipbook>          FightRunLeftFlipbook;                              // 0x0550(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UPaperFlipbook>          FightRunRightFlipbook;                             // 0x0578(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UPaperFlipbook>          FightRunUpFlipbook;                                // 0x05A0(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UPaperFlipbook>          FightRunDownFlipbook;                              // 0x05C8(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UPaperFlipbook>>  SwordFightIdleLeftFlipbooks;                       // 0x05F0(0x0010)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UPaperFlipbook>>  SwordFightIdleRightFlipbooks;                      // 0x0600(0x0010)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UPaperFlipbook>>  SwordFightIdleUpFlipbooks;                         // 0x0610(0x0010)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UPaperFlipbook>>  SwordFightIdleDownFlipbooks;                       // 0x0620(0x0010)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UPaperFlipbook>>  SabreFightIdleLeftFlipbooks;                       // 0x0630(0x0010)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UPaperFlipbook>>  SabreFightIdleRightFlipbooks;                      // 0x0640(0x0010)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UPaperFlipbook>>  SabreFightIdleUpFlipbooks;                         // 0x0650(0x0010)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UPaperFlipbook>>  SabreFightIdleDownFlipbooks;                       // 0x0660(0x0010)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UPaperFlipbook>>  SpearFightIdleLeftFlipbooks;                       // 0x0670(0x0010)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UPaperFlipbook>>  SpearFightIdleRightFlipbooks;                      // 0x0680(0x0010)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UPaperFlipbook>>  SpearFightIdleUpFlipbooks;                         // 0x0690(0x0010)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UPaperFlipbook>>  SpearFightIdleDownFlipbooks;                       // 0x06A0(0x0010)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UPaperFlipbook>>  FistFightIdleLeftFlipbooks;                        // 0x06B0(0x0010)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UPaperFlipbook>>  FistFightIdleRightFlipbooks;                       // 0x06C0(0x0010)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UPaperFlipbook>>  FistFightIdleUpFlipbooks;                          // 0x06D0(0x0010)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UPaperFlipbook>>  FistFightIdleDownFlipbooks;                        // 0x06E0(0x0010)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UPaperFlipbook>>  HiddenWeaponFightIdleLeftFlipbooks;                // 0x06F0(0x0010)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UPaperFlipbook>>  HiddenWeaponFightIdleRightFlipbooks;               // 0x0700(0x0010)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UPaperFlipbook>>  HiddenWeaponFightIdleUpFlipbooks;                  // 0x0710(0x0010)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UPaperFlipbook>>  HiddenWeaponFightIdleDownFlipbooks;                // 0x0720(0x0010)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UPaperFlipbook>>  OtherWeaponsFightIdleLeftFlipbooks;                // 0x0730(0x0010)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UPaperFlipbook>>  OtherWeaponsFightIdleRightFlipbooks;               // 0x0740(0x0010)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UPaperFlipbook>>  OtherWeaponsFightIdleUpFlipbooks;                  // 0x0750(0x0010)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UPaperFlipbook>>  OtherWeaponsFightIdleDownFlipbooks;                // 0x0760(0x0010)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UPaperFlipbook>>  SwordFightRunLeftFlipbooks;                        // 0x0770(0x0010)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UPaperFlipbook>>  SwordFightRunRightFlipbooks;                       // 0x0780(0x0010)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UPaperFlipbook>>  SwordFightRunUpFlipbooks;                          // 0x0790(0x0010)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UPaperFlipbook>>  SwordFightRunDownFlipbooks;                        // 0x07A0(0x0010)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UPaperFlipbook>>  SabreFightRunLeftFlipbooks;                        // 0x07B0(0x0010)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UPaperFlipbook>>  SabreFightRunRightFlipbooks;                       // 0x07C0(0x0010)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UPaperFlipbook>>  SabreFightRunUpFlipbooks;                          // 0x07D0(0x0010)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UPaperFlipbook>>  SabreFightRunDownFlipbooks;                        // 0x07E0(0x0010)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UPaperFlipbook>>  SpearFightRunLeftFlipbooks;                        // 0x07F0(0x0010)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UPaperFlipbook>>  SpearFightRunRightFlipbooks;                       // 0x0800(0x0010)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UPaperFlipbook>>  SpearFightRunUpFlipbooks;                          // 0x0810(0x0010)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UPaperFlipbook>>  SpearFightRunDownFlipbooks;                        // 0x0820(0x0010)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UPaperFlipbook>>  FistFightRunLeftFlipbooks;                         // 0x0830(0x0010)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UPaperFlipbook>>  FistFightRunRightFlipbooks;                        // 0x0840(0x0010)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UPaperFlipbook>>  FistFightRunUpFlipbooks;                           // 0x0850(0x0010)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UPaperFlipbook>>  FistFightRunDownFlipbooks;                         // 0x0860(0x0010)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UPaperFlipbook>>  HiddenWeaponFightRunLeftFlipbooks;                 // 0x0870(0x0010)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UPaperFlipbook>>  HiddenWeaponFightRunRightFlipbooks;                // 0x0880(0x0010)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UPaperFlipbook>>  HiddenWeaponFightRunUpFlipbooks;                   // 0x0890(0x0010)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UPaperFlipbook>>  HiddenWeaponFightRunDownFlipbooks;                 // 0x08A0(0x0010)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UPaperFlipbook>>  OtherWeaponsFightRunLeftFlipbooks;                 // 0x08B0(0x0010)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UPaperFlipbook>>  OtherWeaponsFightRunRightFlipbooks;                // 0x08C0(0x0010)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UPaperFlipbook>>  OtherWeaponsFightRunUpFlipbooks;                   // 0x08D0(0x0010)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UPaperFlipbook>>  OtherWeaponsFightRunDownFlipbooks;                 // 0x08E0(0x0010)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UPaperFlipbook>>  AttackLeftFlipbooks;                               // 0x08F0(0x0010)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UPaperFlipbook>>  AttackRightFlipbooks;                              // 0x0900(0x0010)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UPaperFlipbook>>  AttackUpFlipbooks;                                 // 0x0910(0x0010)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UPaperFlipbook>>  AttackDownFlipbooks;                               // 0x0920(0x0010)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UPaperFlipbook>>  SwordLeftFlipbooks;                                // 0x0930(0x0010)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UPaperFlipbook>>  SwordRightFlipbooks;                               // 0x0940(0x0010)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UPaperFlipbook>>  SwordUpFlipbooks;                                  // 0x0950(0x0010)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UPaperFlipbook>>  SwordDownFlipbooks;                                // 0x0960(0x0010)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UPaperFlipbook>>  SabreLeftFlipbooks;                                // 0x0970(0x0010)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UPaperFlipbook>>  SabreRightFlipbooks;                               // 0x0980(0x0010)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UPaperFlipbook>>  SabreUpFlipbooks;                                  // 0x0990(0x0010)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UPaperFlipbook>>  SabreDownFlipbooks;                                // 0x09A0(0x0010)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UPaperFlipbook>>  SpearLeftFlipbooks;                                // 0x09B0(0x0010)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UPaperFlipbook>>  SpearRightFlipbooks;                               // 0x09C0(0x0010)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UPaperFlipbook>>  SpearUpFlipbooks;                                  // 0x09D0(0x0010)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UPaperFlipbook>>  SpearDownFlipbooks;                                // 0x09E0(0x0010)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UPaperFlipbook>>  FistLeftFlipbooks;                                 // 0x09F0(0x0010)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UPaperFlipbook>>  FistRightFlipbooks;                                // 0x0A00(0x0010)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UPaperFlipbook>>  FistUpFlipbooks;                                   // 0x0A10(0x0010)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UPaperFlipbook>>  FistDownFlipbooks;                                 // 0x0A20(0x0010)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UPaperFlipbook>>  HiddenWeaponLeftFlipbooks;                         // 0x0A30(0x0010)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UPaperFlipbook>>  HiddenWeaponRightFlipbooks;                        // 0x0A40(0x0010)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UPaperFlipbook>>  HiddenWeaponUpFlipbooks;                           // 0x0A50(0x0010)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UPaperFlipbook>>  HiddenWeaponDownFlipbooks;                         // 0x0A60(0x0010)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UPaperFlipbook>>  OtherWeaponsLeftFlipbooks;                         // 0x0A70(0x0010)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UPaperFlipbook>>  OtherWeaponsRightFlipbooks;                        // 0x0A80(0x0010)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UPaperFlipbook>>  OtherWeaponsUpFlipbooks;                           // 0x0A90(0x0010)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UPaperFlipbook>>  OtherWeaponsDownFlipbooks;                         // 0x0AA0(0x0010)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UPaperFlipbook>>  SpecialLeftFlipbooks;                              // 0x0AB0(0x0010)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UPaperFlipbook>>  SpecialRightFlipbooks;                             // 0x0AC0(0x0010)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UPaperFlipbook>>  SpecialUpFlipbooks;                                // 0x0AD0(0x0010)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UPaperFlipbook>>  SpecialDownFlipbooks;                              // 0x0AE0(0x0010)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UPaperFlipbook>          BeAttackLeftFlipbook;                              // 0x0AF0(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UPaperFlipbook>          BeAttackRightFlipbook;                             // 0x0B18(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UPaperFlipbook>          BeAttackUpFlipbook;                                // 0x0B40(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UPaperFlipbook>          BeAttackDownFlipbook;                              // 0x0B68(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UPaperFlipbook>          DiedLeftFlipbook;                                  // 0x0B90(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UPaperFlipbook>          DiedRightFlipbook;                                 // 0x0BB8(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UPaperFlipbook>          DiedUpFlipbook;                                    // 0x0BE0(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UPaperFlipbook>          DiedDownFlipbook;                                  // 0x0C08(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UPaperFlipbook>          FaMuLeftFlipbook;                                  // 0x0C30(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UPaperFlipbook>          FaMuRightFlipbook;                                 // 0x0C58(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UPaperFlipbook>          FaMuUpFlipbook;                                    // 0x0C80(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UPaperFlipbook>          FaMuDownFlipbook;                                  // 0x0CA8(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UPaperFlipbook>          CaiYaoLeftFlipbook;                                // 0x0CD0(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UPaperFlipbook>          CaiYaoRightFlipbook;                               // 0x0CF8(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UPaperFlipbook>          CaiYaoUpFlipbook;                                  // 0x0D20(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UPaperFlipbook>          CaiYaoDownFlipbook;                                // 0x0D48(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UPaperFlipbook>          WaKuangLeftFlipbook;                               // 0x0D70(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UPaperFlipbook>          WaKuangRightFlipbook;                              // 0x0D98(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UPaperFlipbook>          WaKuangUpFlipbook;                                 // 0x0DC0(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UPaperFlipbook>          WaKuangDownFlipbook;                               // 0x0DE8(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FNPCResourceSetting;

// ScriptStruct JH.DropWeight
// 0x0008 (0x0008 - 0x0000)
struct FDropWeight final
{
public:
	int32                                         ItemDefId;                                         // 0x0000(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Weight;                                            // 0x0004(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FDropWeight;

// ScriptStruct JH.DropPoolSetting
// 0x0018 (0x0020 - 0x0008)
struct FDropPoolSetting final : public FTableRowBase
{
public:
	int32                                         ID;                                                // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FDropWeight>                    DropWeights;                                       // 0x0010(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FDropPoolSetting;

// ScriptStruct JH.ItemEffectSetting
// 0x0028 (0x0030 - 0x0008)
struct FItemEffectSetting final : public FTableRowBase
{
public:
	TSoftClassPtr<class UClass>                   Effect;                                            // 0x0008(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FItemEffectSetting;

// ScriptStruct JH.ActiveEffectExtendStateContainer
// 0x0038 (0x0038 - 0x0000)
struct alignas(0x08) FActiveEffectExtendStateContainer final
{
public:
	uint8                                         Pad_0[0x38];                                       // 0x0000(0x0038)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
DUMPER7_ASSERTS_FActiveEffectExtendStateContainer;

// ScriptStruct JH.ActiveEffectExtendState
// 0x0018 (0x0018 - 0x0000)
struct alignas(0x08) FActiveEffectExtendState final
{
public:
	uint8                                         Pad_0[0x18];                                       // 0x0000(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
DUMPER7_ASSERTS_FActiveEffectExtendState;

// ScriptStruct JH.DelayStackInfo
// 0x0014 (0x0014 - 0x0000)
struct alignas(0x04) FDelayStackInfo final
{
public:
	uint8                                         Pad_0[0x14];                                       // 0x0000(0x0014)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
DUMPER7_ASSERTS_FDelayStackInfo;

// ScriptStruct JH.SavedAttribute
// 0x0040 (0x0040 - 0x0000)
struct FSavedAttribute final
{
public:
	struct FGameplayAttribute                     Attribute;                                         // 0x0000(0x0038)(Edit, BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SavedValue;                                        // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
DUMPER7_ASSERTS_FSavedAttribute;

// ScriptStruct JH.TransitionState
// 0x0040 (0x0040 - 0x0000)
struct alignas(0x08) FTransitionState
{
public:
	uint8                                         Pad_0[0x40];                                       // 0x0000(0x0040)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
DUMPER7_ASSERTS_FTransitionState;

// ScriptStruct JH.EnvTransitionState
// 0x0008 (0x0048 - 0x0040)
struct FEnvTransitionState final : public FTransitionState
{
public:
	uint8                                         Pad_40[0x8];                                       // 0x0040(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
DUMPER7_ASSERTS_FEnvTransitionState;

// ScriptStruct JH.FightingCapacityMappingConfig
// 0x0020 (0x0020 - 0x0000)
struct FFightingCapacityMappingConfig final
{
public:
	float                                         FightingCapacity;                                  // 0x0000(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Title;                                             // 0x0008(0x0018)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FFightingCapacityMappingConfig;

// ScriptStruct JH.JiYiLevelExpConfig
// 0x0008 (0x0008 - 0x0000)
struct FJiYiLevelExpConfig final
{
public:
	int32                                         Level;                                             // 0x0000(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Exp;                                               // 0x0004(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FJiYiLevelExpConfig;

// ScriptStruct JH.JiYiLevelExpConfigs
// 0x0010 (0x0010 - 0x0000)
struct FJiYiLevelExpConfigs final
{
public:
	TArray<struct FJiYiLevelExpConfig>            LevelExpConfigs;                                   // 0x0000(0x0010)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FJiYiLevelExpConfigs;

// ScriptStruct JH.JHGameplayEffectContainerSpec
// 0x0038 (0x0038 - 0x0000)
struct FJHGameplayEffectContainerSpec final
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData;                                        // 0x0000(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TArray<struct FGameplayEffectSpecHandle>      TargetGameplayEffectSpecs;                         // 0x0028(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FJHGameplayEffectContainerSpec;

// ScriptStruct JH.JHGEExtendReq_SkillIdPhase
// 0x0008 (0x0008 - 0x0000)
struct FJHGEExtendReq_SkillIdPhase final
{
public:
	int32                                         SkillId;                                           // 0x0000(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Level;                                             // 0x0004(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FJHGEExtendReq_SkillIdPhase;

// ScriptStruct JH.JHAbilityApplyEffectSettingPhase
// 0x0020 (0x0020 - 0x0000)
struct FJHAbilityApplyEffectSettingPhase final
{
public:
	int32                                         BuffId;                                            // 0x0000(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Level;                                             // 0x0004(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Chance;                                            // 0x0008(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         StackCount;                                        // 0x000C(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUseRandomStack;                                   // 0x0010(0x0001)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         MaxStackCount;                                     // 0x0014(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bApplyDistanceDamage;                              // 0x0018(0x0001)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         InjuryIncreasePercent;                             // 0x001C(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FJHAbilityApplyEffectSettingPhase;

// ScriptStruct JH.JHAbilityApplyEffectSetting
// 0x0018 (0x0018 - 0x0000)
struct FJHAbilityApplyEffectSetting final
{
public:
	EBuffTargetType                               BuffTargetType;                                    // 0x0000(0x0001)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FJHAbilityApplyEffectSettingPhase> ApplyBuffs;                                     // 0x0008(0x0010)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FJHAbilityApplyEffectSetting;

// ScriptStruct JH.JHGameplayAbilityExtendSetting
// 0x0030 (0x0030 - 0x0000)
struct FJHGameplayAbilityExtendSetting final
{
public:
	TArray<struct FJHGEExtendReq_SkillIdPhase>    HasSkillIdsReqs;                                   // 0x0000(0x0010)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FJHAbilityApplyEffectSetting>   ApplyEffectSettings;                               // 0x0010(0x0010)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FJHAbilityApplyEffectSettingPhase> ApplySelfEffectSettings;                        // 0x0020(0x0010)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FJHGameplayAbilityExtendSetting;

// ScriptStruct JH.JHGameplayEffectContainer
// 0x0018 (0x0018 - 0x0000)
struct FJHGameplayEffectContainer final
{
public:
	bool                                          bCanUseEnemy;                                      // 0x0000(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bCanUseFriend;                                     // 0x0001(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2[0x6];                                        // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<TSubclassOf<class UGameplayEffect>>    GameEffects;                                       // 0x0008(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FJHGameplayEffectContainer;

// ScriptStruct JH.JHDescription
// 0x0030 (0x0030 - 0x0000)
struct FJHDescription final
{
public:
	class FText                                   Name;                                              // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                   Description;                                       // 0x0018(0x0018)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FJHDescription;

// ScriptStruct JH.JHGEExtendSetting
// 0x0028 (0x0028 - 0x0000)
struct FJHGEExtendSetting final
{
public:
	EAbilitySystemEventType                       GASEventTypeFliter;                                // 0x0000(0x0001)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UJHGEExtendRequirement*>         Requirements;                                      // 0x0008(0x0010)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<class UJHGEExtendAction*>              Actions;                                           // 0x0018(0x0010)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FJHGEExtendSetting;

// ScriptStruct JH.JHGameUIModuleConfigItem
// 0x0008 (0x0008 - 0x0000)
struct FJHGameUIModuleConfigItem final
{
public:
	TSubclassOf<class UJHGameUIBaseView>          ViewClass;                                         // 0x0000(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FJHGameUIModuleConfigItem;

// ScriptStruct JH.ActorFadeState_XAxis
// 0x0018 (0x0018 - 0x0000)
struct FActorFadeState_XAxis final
{
public:
	class UMaterialInstanceDynamic*               DynamicMaterialInstance;                           // 0x0000(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                 Actor;                                             // 0x0008(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         XAxis;                                             // 0x0010(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
DUMPER7_ASSERTS_FActorFadeState_XAxis;

// ScriptStruct JH.ActorFadeState
// 0x0018 (0x0018 - 0x0000)
struct FActorFadeState final
{
public:
	class UMaterialInstanceDynamic*               DynamicMaterialInstance;                           // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                 Actor;                                             // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_10[0x8];                                       // 0x0010(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
DUMPER7_ASSERTS_FActorFadeState;

// ScriptStruct JH.JHNeoUI_GuidanceStepConfig
// 0x0018 (0x0018 - 0x0000)
struct FJHNeoUI_GuidanceStepConfig final
{
public:
	uint8                                         Pad_0[0x8];                                        // 0x0000(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   StepId;                                            // 0x0008(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UJHNeoUI_GuidanceStep>      StepClass;                                         // 0x0010(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FJHNeoUI_GuidanceStepConfig;

// ScriptStruct JH.JHNeoUI_GuidanceStepConfigCluster
// 0x0018 (0x0018 - 0x0000)
struct FJHNeoUI_GuidanceStepConfigCluster final
{
public:
	uint8                                         Pad_0[0x8];                                        // 0x0000(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FJHNeoUI_GuidanceStepConfig>    Configs;                                           // 0x0008(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FJHNeoUI_GuidanceStepConfigCluster;

// ScriptStruct JH.JHNeoUIArenaDetail_NPC
// 0x0010 (0x0010 - 0x0000)
struct FJHNeoUIArenaDetail_NPC final
{
public:
	int32                                         Index;                                             // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsEnemy;                                           // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AFightNPC*                              NPCObj;                                            // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FJHNeoUIArenaDetail_NPC;

// ScriptStruct JH.WorldWalkNPCInfo
// 0x0010 (0x0010 - 0x0000)
struct alignas(0x08) FWorldWalkNPCInfo final
{
public:
	uint8                                         Pad_0[0x10];                                       // 0x0000(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
DUMPER7_ASSERTS_FWorldWalkNPCInfo;

// ScriptStruct JH.JHNeoUIC_MenuCallbackParam
// 0x0040 (0x0040 - 0x0000)
struct alignas(0x08) FJHNeoUIC_MenuCallbackParam final
{
public:
	uint8                                         Pad_0[0x40];                                       // 0x0000(0x0040)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
DUMPER7_ASSERTS_FJHNeoUIC_MenuCallbackParam;

// ScriptStruct JH.JHNeoUIC_MenuShowParam
// 0x0018 (0x0018 - 0x0000)
struct FJHNeoUIC_MenuShowParam final
{
public:
	int32                                         intParam;                                          // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 StrParam;                                          // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FJHNeoUIC_MenuShowParam;

// ScriptStruct JH.JHNeoUIC_TutorialStepConfig
// 0x0018 (0x0018 - 0x0000)
struct FJHNeoUIC_TutorialStepConfig final
{
public:
	uint8                                         Pad_0[0x8];                                        // 0x0000(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   StepId;                                            // 0x0008(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UJHNeoUICVE_Tutorial>       StepClass;                                         // 0x0010(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FJHNeoUIC_TutorialStepConfig;

// ScriptStruct JH.JHNeoUIC_TutorialStepConfigCluster
// 0x0068 (0x0068 - 0x0000)
struct FJHNeoUIC_TutorialStepConfigCluster final
{
public:
	uint8                                         Pad_0[0x8];                                        // 0x0000(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FJHNeoUIC_TutorialStepConfig>   Configs;                                           // 0x0008(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>              NormalIcon;                                        // 0x0018(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>              ActiveIcon;                                        // 0x0040(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FJHNeoUIC_TutorialStepConfigCluster;

// ScriptStruct JH.JHNeoUIFishingListTableRow
// 0x0068 (0x0070 - 0x0008)
struct FJHNeoUIFishingListTableRow final : public FTableRowBase
{
public:
	int32                                         ID;                                                // 0x0008(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         FishItemId;                                        // 0x000C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                   FishName;                                          // 0x0010(0x0018)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                   FishDesc;                                          // 0x0028(0x0018)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int32                                         Quality;                                           // 0x0040(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              FishIcon;                                          // 0x0048(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FJHNeoUIFishingListTableRow;

// ScriptStruct JH.JHNeoUIGH_PropGenre
// 0x0010 (0x0010 - 0x0000)
struct FJHNeoUIGH_PropGenre final
{
public:
	TArray<class FText>                           GenreTexts;                                        // 0x0000(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FJHNeoUIGH_PropGenre;

// ScriptStruct JH.AddSkillSetting
// 0x000C (0x000C - 0x0000)
struct FAddSkillSetting final
{
public:
	int32                                         NPCId;                                             // 0x0000(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         SkillId;                                           // 0x0004(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         SkillLevel;                                        // 0x0008(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FAddSkillSetting;

// ScriptStruct JH.AddItemSetting
// 0x000C (0x000C - 0x0000)
struct FAddItemSetting final
{
public:
	int32                                         NPCId;                                             // 0x0000(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ItemId;                                            // 0x0004(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ItemNum;                                           // 0x0008(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FAddItemSetting;

// ScriptStruct JH.FixNPCSetting
// 0x0048 (0x0050 - 0x0008)
struct FFixNPCSetting final : public FTableRowBase
{
public:
	int32                                         ID;                                                // 0x0008(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FRequirementSetting>            Reqs;                                              // 0x0010(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FActionSetting>                 Acts;                                              // 0x0020(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FAddSkillSetting>               AddSkills;                                         // 0x0030(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FAddItemSetting>                AddItems;                                          // 0x0040(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FFixNPCSetting;

// ScriptStruct JH.GHCTmpSortItem
// 0x000C (0x000C - 0x0000)
struct alignas(0x04) FGHCTmpSortItem final
{
public:
	uint8                                         Pad_0[0xC];                                        // 0x0000(0x000C)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
DUMPER7_ASSERTS_FGHCTmpSortItem;

// ScriptStruct JH.GHCCommonStack
// 0x0020 (0x0020 - 0x0000)
struct FGHCCommonStack
{
public:
	uint8                                         Pad_0[0x10];                                       // 0x0000(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UAnyTypeStaticPointer*>          StackInfo;                                         // 0x0010(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FGHCCommonStack;

// ScriptStruct JH.DifficultySpec
// 0x0038 (0x0038 - 0x0000)
struct FDifficultySpec final
{
public:
	float                                         JingMaiPoint;                                      // 0x0000(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Strength;                                          // 0x0004(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Constitution;                                      // 0x0008(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Agility;                                           // 0x000C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         BaseNeiLi;                                         // 0x0010(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         JingTongLi;                                        // 0x0014(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         JingMaiPoint_Elite;                                // 0x0018(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Strength_Elite;                                    // 0x001C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Constitution_Elite;                                // 0x0020(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Agility_Elite;                                     // 0x0024(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         BaseNeiLi_Elite;                                   // 0x0028(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         JingTongLi_Elite;                                  // 0x002C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ExpMultiplier;                                     // 0x0030(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MoneyMultiplier;                                   // 0x0034(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FDifficultySpec;

// ScriptStruct JH.GHC_Common_Region
// 0x0058 (0x0058 - 0x0000)
struct alignas(0x08) FGHC_Common_Region final
{
public:
	uint8                                         Pad_0[0x58];                                       // 0x0000(0x0058)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
DUMPER7_ASSERTS_FGHC_Common_Region;

// ScriptStruct JH.GHC_NPC_Region
// 0x0058 (0x0058 - 0x0000)
struct alignas(0x08) FGHC_NPC_Region final
{
public:
	uint8                                         Pad_0[0x58];                                       // 0x0000(0x0058)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
DUMPER7_ASSERTS_FGHC_NPC_Region;

// ScriptStruct JH.PictorialSetting
// 0x00E0 (0x00E8 - 0x0008)
struct FPictorialSetting : public FTableRowBase
{
public:
	int32                                         ID;                                                // 0x0008(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         CommonId;                                          // 0x000C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EPictorialTypes                               PictorialType;                                     // 0x0010(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   PictorialName;                                     // 0x0018(0x0018)(Edit, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>              PictorialIcon;                                     // 0x0030(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>              PictorialBigPic;                                   // 0x0058(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                   PictorialTips;                                     // 0x0080(0x0018)(Edit, NativeAccessSpecifierPublic)
	TArray<struct FRequirementSetting>            DefaultRequirements;                               // 0x0098(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FRequirementSetting>            CustomeRequirements;                               // 0x00A8(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                         FirstClass;                                        // 0x00B8(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         SecClass;                                          // 0x00BC(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ScaleRatio;                                        // 0x00C0(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         EndingType;                                        // 0x00C4(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Group;                                             // 0x00C8(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Priority;                                          // 0x00CC(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         AdditonalParam;                                    // 0x00D0(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         OrderId;                                           // 0x00D4(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         BorderType;                                        // 0x00D8(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         InheritanceFlag;                                   // 0x00DC(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         InDlcContentFlag;                                  // 0x00E0(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_E4[0x4];                                       // 0x00E4(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
DUMPER7_ASSERTS_FPictorialSetting;

// ScriptStruct JH.GHCNPC_RawData
// 0x0030 (0x0118 - 0x00E8)
struct FGHCNPC_RawData final : public FPictorialSetting
{
public:
	uint8                                         Pad_E8[0x30];                                      // 0x00E8(0x0030)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
DUMPER7_ASSERTS_FGHCNPC_RawData;

// ScriptStruct JH.GHCNPCStack
// 0x0020 (0x0020 - 0x0000)
struct alignas(0x08) FGHCNPCStack final
{
public:
	uint8                                         Pad_0[0x20];                                       // 0x0000(0x0020)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
DUMPER7_ASSERTS_FGHCNPCStack;

// ScriptStruct JH.GHCScenarioStack
// 0x0000 (0x0020 - 0x0020)
struct FGHCScenarioStack final : public FGHCCommonStack
{
};
DUMPER7_ASSERTS_FGHCScenarioStack;

// ScriptStruct JH.JHNeoUIMicroPopupMsgItem
// 0x0058 (0x0058 - 0x0000)
struct FJHNeoUIMicroPopupMsgItem final
{
public:
	int32                                         MsgId;                                             // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         LayerOrder;                                        // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>              MsgIcon;                                           // 0x0008(0x0028)(BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                             MsgIconTexture;                                    // 0x0030(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                   MsgContent;                                        // 0x0038(0x0018)(BlueprintVisible, NativeAccessSpecifierPublic)
	int32                                         MsgNum;                                            // 0x0050(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ColorIndex;                                        // 0x0054(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FJHNeoUIMicroPopupMsgItem;

// ScriptStruct JH.JHNeoUINGP_SettlementConfig
// 0x0070 (0x0070 - 0x0000)
struct FJHNeoUINGP_SettlementConfig final
{
public:
	TArray<class FText>                           FightingCapacity;                                  // 0x0000(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FText>                           Ending;                                            // 0x0010(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FText>                           skill;                                             // 0x0020(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FText>                           TeamMember;                                        // 0x0030(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FText>                           JiYi;                                              // 0x0040(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FText>                           Master;                                            // 0x0050(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FText>                           DifficultyMode;                                    // 0x0060(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FJHNeoUINGP_SettlementConfig;

// ScriptStruct JH.MountSpec
// 0x0018 (0x0018 - 0x0000)
struct FMountSpec final
{
public:
	int32                                         MountId;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FActiveGameplayEffectHandle>    EffectSpecHandles;                                 // 0x0008(0x0010)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FMountSpec;

// ScriptStruct JH.JHNeoUINGP_InheritanceIntermediateDataItem
// 0x0018 (0x0018 - 0x0000)
struct alignas(0x08) FJHNeoUINGP_InheritanceIntermediateDataItem final
{
public:
	uint8                                         Pad_0[0x18];                                       // 0x0000(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
DUMPER7_ASSERTS_FJHNeoUINGP_InheritanceIntermediateDataItem;

// ScriptStruct JH.JHNeoUINGP_InheritanceIntermediateSkillItem
// 0x0050 (0x0050 - 0x0000)
struct alignas(0x08) FJHNeoUINGP_InheritanceIntermediateSkillItem final
{
public:
	uint8                                         Pad_0[0x50];                                       // 0x0000(0x0050)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
DUMPER7_ASSERTS_FJHNeoUINGP_InheritanceIntermediateSkillItem;

// ScriptStruct JH.JHNeoUINGP_InheritanceIntermediateSkinItem
// 0x0050 (0x0050 - 0x0000)
struct alignas(0x08) FJHNeoUINGP_InheritanceIntermediateSkinItem final
{
public:
	uint8                                         Pad_0[0x50];                                       // 0x0000(0x0050)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
DUMPER7_ASSERTS_FJHNeoUINGP_InheritanceIntermediateSkinItem;

// ScriptStruct JH.JHNeoUINGP_InheritanceIntermediateData
// 0x0190 (0x0190 - 0x0000)
struct FJHNeoUINGP_InheritanceIntermediateData final
{
public:
	uint8                                         Pad_0[0x30];                                       // 0x0000(0x0030)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class FName, struct FJHNeoUINGP_InheritanceIntermediateDataItem> Items;                     // 0x0030(0x0050)(NativeAccessSpecifierPublic)
	TArray<struct FJHNeoUINGP_InheritanceIntermediateSkillItem> Skills_All;                          // 0x0080(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_90[0x70];                                      // 0x0090(0x0070)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FJHNeoUINGP_InheritanceIntermediateSkillItem> SkillBooks_All;                      // 0x0100(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_110[0x70];                                     // 0x0110(0x0070)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FJHNeoUINGP_InheritanceIntermediateSkinItem> Skin_All;                             // 0x0180(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FJHNeoUINGP_InheritanceIntermediateData;

// ScriptStruct JH.JHNeoUINGP_InheritanceDataConfigItemCost
// 0x0008 (0x0008 - 0x0000)
struct FJHNeoUINGP_InheritanceDataConfigItemCost final
{
public:
	int32                                         Cost;                                              // 0x0000(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Increment;                                         // 0x0004(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FJHNeoUINGP_InheritanceDataConfigItemCost;

// ScriptStruct JH.JHNeoUINGP_InheritanceDataConfigItem
// 0x0060 (0x0060 - 0x0000)
struct FJHNeoUINGP_InheritanceDataConfigItem final
{
public:
	class FName                                   ItemKey;                                           // 0x0000(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EJHNeoUINGP_GroupType                         ItemType;                                          // 0x0008(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   ItemTitle;                                         // 0x0010(0x0018)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>              Icon;                                              // 0x0028(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FJHNeoUINGP_InheritanceDataConfigItemCost> CostArray;                              // 0x0050(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FJHNeoUINGP_InheritanceDataConfigItem;

// ScriptStruct JH.JHNeoUINGP_InheritanceDataConfig
// 0x00C0 (0x00C0 - 0x0000)
struct FJHNeoUINGP_InheritanceDataConfig final
{
public:
	TMap<class FName, struct FJHNeoUINGP_InheritanceDataConfigItem> Items;                           // 0x0000(0x0050)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TMap<class FName, struct FJHNeoUINGP_InheritanceDataConfigItem> IntermediateItems;               // 0x0050(0x0050)(NativeAccessSpecifierPublic)
	TArray<int32>                                 SkillCost;                                         // 0x00A0(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                 SkillBookCost;                                     // 0x00B0(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FJHNeoUINGP_InheritanceDataConfig;

// ScriptStruct JH.JHNeoUIPopupMenuCallbackParam
// 0x0020 (0x0020 - 0x0000)
struct alignas(0x08) FJHNeoUIPopupMenuCallbackParam final
{
public:
	uint8                                         Pad_0[0x20];                                       // 0x0000(0x0020)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
DUMPER7_ASSERTS_FJHNeoUIPopupMenuCallbackParam;

// ScriptStruct JH.RequirementActionSettings
// 0x0020 (0x0020 - 0x0000)
struct FRequirementActionSettings final
{
public:
	TArray<struct FRequirementSetting>            Requirements;                                      // 0x0000(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FActionSetting>                 Actions;                                           // 0x0010(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FRequirementActionSettings;

// ScriptStruct JH.JHNeoUIPopupMenuShowParam
// 0x0010 (0x0010 - 0x0000)
struct FJHNeoUIPopupMenuShowParam final
{
public:
	TArray<bool>                                  ItemVisibilityFlag;                                // 0x0000(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FJHNeoUIPopupMenuShowParam;

// ScriptStruct JH.JHNeoUISequenceImgConfig
// 0x0050 (0x0050 - 0x0000)
struct FJHNeoUISequenceImgConfig final
{
public:
	uint8                                         Pad_0[0x10];                                       // 0x0000(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 ResFolder;                                         // 0x0010(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ResName;                                           // 0x0020(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         FrameCount;                                        // 0x0030(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         PlayIntervalOffset;                                // 0x0034(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 EditTip;                                           // 0x0038(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         PlayCount;                                         // 0x0048(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
DUMPER7_ASSERTS_FJHNeoUISequenceImgConfig;

// ScriptStruct JH.CommonAffixDisplayTable
// 0x0018 (0x0020 - 0x0008)
struct FCommonAffixDisplayTable final : public FTableRowBase
{
public:
	uint8                                         Pad_8[0x8];                                        // 0x0008(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ID;                                                // 0x0010(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EActionType                                   ActionType;                                        // 0x0014(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ActionId;                                          // 0x0018(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EJHNeoUIAffixDisplayView                      ViewType;                                          // 0x001C(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EJHNeoUIAffixSpotType                         SpotType;                                          // 0x001D(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EJHNeoUIAffixDisplayNumberType                NumberType;                                        // 0x001E(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EJHNeoUINumRoundType                          RoundType;                                         // 0x001F(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FCommonAffixDisplayTable;

// ScriptStruct JH.CommonAffix
// 0x0008 (0x0008 - 0x0000)
struct FCommonAffix final
{
public:
	EActionType                                   Type;                                              // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ID;                                                // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FCommonAffix;

// ScriptStruct JH.AffixResultType
// 0x0003 (0x0003 - 0x0000)
struct FAffixResultType final
{
public:
	EJHNeoUIAffixDisplayNumberType                NumberType;                                        // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EJHNeoUINumRoundType                          RoundType;                                         // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          Found;                                             // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FAffixResultType;

// ScriptStruct JH.JHNeoUITutorialConfigDataItem
// 0x0078 (0x0078 - 0x0000)
struct FJHNeoUITutorialConfigDataItem final
{
public:
	class FText                                   DisplayName;                                       // 0x0000(0x0018)(Edit, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>              NormalIcon;                                        // 0x0018(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>              ActiveIcon;                                        // 0x0040(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UTexture2D>>      Imgs;                                              // 0x0068(0x0010)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FJHNeoUITutorialConfigDataItem;

// ScriptStruct JH.JHNeoUIWorldMapDynamicLocationData
// 0x0018 (0x0018 - 0x0000)
struct FJHNeoUIWorldMapDynamicLocationData final
{
public:
	class FString                                 LocationId;                                        // 0x0000(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Restraint_QuestID;                                 // 0x0010(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Conflict_QuestID;                                  // 0x0014(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FJHNeoUIWorldMapDynamicLocationData;

// ScriptStruct JH.AttackFlipbook
// 0x0010 (0x0010 - 0x0000)
struct FAttackFlipbook final
{
public:
	TArray<class UPaperFlipbook*>                 Arrays;                                            // 0x0000(0x0010)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FAttackFlipbook;

// ScriptStruct JH.AttackFlipbooks
// 0x0010 (0x0010 - 0x0000)
struct FAttackFlipbooks final
{
public:
	TArray<struct FAttackFlipbook>                Arrays;                                            // 0x0000(0x0010)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FAttackFlipbooks;

// ScriptStruct JH.Flipbooks
// 0x0010 (0x0010 - 0x0000)
struct FFlipbooks final
{
public:
	TArray<class UPaperFlipbook*>                 Arrays;                                            // 0x0000(0x0010)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FFlipbooks;

// ScriptStruct JH.FlipbookInstanceData
// 0x0018 (0x0018 - 0x0000)
struct FFlipbookInstanceData final
{
public:
	class UPaperFlipbook*                         SourceFlipbook;                                    // 0x0000(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         PlayRate;                                          // 0x0008(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C[0xC];                                        // 0x000C(0x000C)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
DUMPER7_ASSERTS_FFlipbookInstanceData;

// ScriptStruct JH.PostProcessTransitionState
// 0x0008 (0x0048 - 0x0040)
struct FPostProcessTransitionState final : public FTransitionState
{
public:
	uint8                                         Pad_40[0x8];                                       // 0x0040(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
DUMPER7_ASSERTS_FPostProcessTransitionState;

// ScriptStruct JH.JHSaveGameListItem
// 0x0048 (0x0048 - 0x0000)
struct FJHSaveGameListItem final
{
public:
	int32                                         Version;                                           // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 MapName;                                           // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 SaveGameName;                                      // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                              DateTime;                                          // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<uint8>                                 ThumbnailRaw;                                      // 0x0030(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                         SaveGameTime;                                      // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EDifficultyMode                               DifficultyMode;                                    // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_45[0x3];                                       // 0x0045(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
DUMPER7_ASSERTS_FJHSaveGameListItem;

// ScriptStruct JH.JHSoundPlayConfigItem
// 0x0048 (0x0048 - 0x0000)
struct FJHSoundPlayConfigItem final
{
public:
	int32                                         Index;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   FuncId;                                            // 0x0004(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class USoundCue>               SoundCue;                                          // 0x0010(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Desc;                                              // 0x0038(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FJHSoundPlayConfigItem;

// ScriptStruct JH.AggregationSetting
// 0x0070 (0x0078 - 0x0008)
struct FAggregationSetting final : public FTableRowBase
{
public:
	int32                                         ID;                                                // 0x0008(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   GroupName;                                         // 0x0010(0x0018)(Edit, NativeAccessSpecifierPublic)
	class FText                                   Desc;                                              // 0x0028(0x0018)(Edit, NativeAccessSpecifierPublic)
	TArray<int32>                                 ItemList;                                          // 0x0040(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>              Icon;                                              // 0x0050(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FAggregationSetting;

// ScriptStruct JH.JHWorkmanshipDataTableBase
// 0x0000 (0x0008 - 0x0008)
struct FJHWorkmanshipDataTableBase : public FTableRowBase
{
};
DUMPER7_ASSERTS_FJHWorkmanshipDataTableBase;

// ScriptStruct JH.AlchemySetting
// 0x0090 (0x0098 - 0x0008)
struct FAlchemySetting final : public FJHWorkmanshipDataTableBase
{
public:
	int32                                         ID;                                                // 0x0008(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   RecipeName;                                        // 0x0010(0x0018)(Edit, NativeAccessSpecifierPublic)
	class FText                                   Desc;                                              // 0x0028(0x0018)(Edit, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>              Icon;                                              // 0x0040(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ItemId;                                            // 0x0068(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         AlchemyLv;                                         // 0x006C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Exp;                                               // 0x0070(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MoneyConsumption;                                  // 0x0074(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                 Material;                                          // 0x0078(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                 MaterialConsumption;                               // 0x0088(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FAlchemySetting;

// ScriptStruct JH.CookingRecipeSetting
// 0x00A8 (0x00B0 - 0x0008)
struct FCookingRecipeSetting final : public FJHWorkmanshipDataTableBase
{
public:
	int32                                         ID;                                                // 0x0008(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   RecipeName;                                        // 0x0010(0x0018)(Edit, NativeAccessSpecifierPublic)
	class FText                                   Desc;                                              // 0x0028(0x0018)(Edit, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>              Icon;                                              // 0x0040(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ItemId;                                            // 0x0068(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         RecipeTypeId;                                      // 0x006C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         CookingLv;                                         // 0x0070(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Exp;                                               // 0x0074(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MoneyConsumption;                                  // 0x0078(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MaterialYieldLv;                                   // 0x007C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                 Material;                                          // 0x0080(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                 MaterialType;                                      // 0x0090(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                 MaterialConsumption;                               // 0x00A0(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FCookingRecipeSetting;

// ScriptStruct JH.FishingSetting
// 0x0058 (0x0060 - 0x0008)
struct FFishingSetting final : public FTableRowBase
{
public:
	int32                                         ID;                                                // 0x0008(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         PoolLevel;                                         // 0x000C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         SceneLevel;                                        // 0x0010(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         VigourCost;                                        // 0x0014(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                 Productions;                                       // 0x0018(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                 SpecialProductions;                                // 0x0028(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                 PWeights;                                          // 0x0038(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                 SPWeights;                                         // 0x0048(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                         Exp;                                               // 0x0058(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_5C[0x4];                                       // 0x005C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
DUMPER7_ASSERTS_FFishingSetting;

// ScriptStruct JH.AutoJingMaiPoolSetting
// 0x0018 (0x0020 - 0x0008)
struct FAutoJingMaiPoolSetting final : public FTableRowBase
{
public:
	int32                                         ID;                                                // 0x0008(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FTableTwoParamentSettingDefine> JingMaiWeights;                                    // 0x0010(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FAutoJingMaiPoolSetting;

// ScriptStruct JH.JingMaiSetting_Console
// 0x0038 (0x00D8 - 0x00A0)
struct FJingMaiSetting_Console final : public FJingMaiSetting
{
public:
	bool                                          HasSpeicalEffect;                                  // 0x00A0(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_A1[0x7];                                       // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   SpeicalEffectDesc;                                 // 0x00A8(0x0018)(Edit, NativeAccessSpecifierPublic)
	class FText                                   PropertyModify;                                    // 0x00C0(0x0018)(Edit, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FJingMaiSetting_Console;

// ScriptStruct JH.JingMaiSpec
// 0x0028 (0x0028 - 0x0000)
struct FJingMaiSpec final
{
public:
	int32                                         ID;                                                // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ActivedIndex;                                      // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bCanApply;                                         // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bApplied;                                          // 0x0009(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_A[0x6];                                        // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FActiveGameplayEffectHandle>    EffectSpecHandles;                                 // 0x0010(0x0010)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	uint8                                         Pad_20[0x8];                                       // 0x0020(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
DUMPER7_ASSERTS_FJingMaiSpec;

// ScriptStruct JH.LetterResTypes
// 0x0048 (0x0050 - 0x0008)
struct FLetterResTypes final : public FTableRowBase
{
public:
	int32                                         ID;                                                // 0x0008(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   LetterContent;                                     // 0x0010(0x0018)(Edit, NativeAccessSpecifierPublic)
	int32                                         LetterSRC;                                         // 0x0028(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         LetterDest;                                        // 0x002C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FRequirementSetting>            ClosingActionRequirements;                         // 0x0030(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FActionSetting>                 ClosingAction;                                     // 0x0040(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FLetterResTypes;

// ScriptStruct JH.PhysicalMaterialVoiceSetting
// 0x0058 (0x0060 - 0x0008)
struct FPhysicalMaterialVoiceSetting final : public FTableRowBase
{
public:
	class FText                                   ViewName;                                          // 0x0008(0x0018)(Edit, NativeAccessSpecifierPublic)
	class FText                                   Description;                                       // 0x0020(0x0018)(Edit, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class USoundBase>              BackgroundSound;                                   // 0x0038(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FPhysicalMaterialVoiceSetting;

// ScriptStruct JH.MapSetting
// 0x00C0 (0x00C8 - 0x0008)
struct FMapSetting final : public FTableRowBase
{
public:
	int32                                         MapId;                                             // 0x0008(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   MapName;                                           // 0x000C(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   ViewName;                                          // 0x0018(0x0018)(Edit, NativeAccessSpecifierPublic)
	bool                                          bInCave;                                           // 0x0030(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          UnLitMaterial;                                     // 0x0031(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_32[0x6];                                       // 0x0032(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<TSoftObjectPtr<class USoundBase>>      BackgroundSound;                                   // 0x0038(0x0010)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	float                                         WorldMapPosX;                                      // 0x0048(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         WorldMapPosY;                                      // 0x004C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         WorldMapType;                                      // 0x0050(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_54[0x4];                                       // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UFightLevelSetting>      DefaultFightSetting;                               // 0x0058(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UClass>                   GridPainterClass;                                  // 0x0080(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         GHGenreIndex;                                      // 0x00A8(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_AC[0x4];                                       // 0x00AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   GHDesc;                                            // 0x00B0(0x0018)(Edit, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FMapSetting;

// ScriptStruct JH.WorldWalkInfo
// 0x0018 (0x0018 - 0x0000)
struct FWorldWalkInfo final
{
public:
	struct FVector                                CurrentLocation;                                   // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         CurrentPointIndex;                                 // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         RemainingSecs;                                     // 0x0010(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bSurvival;                                         // 0x0014(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
DUMPER7_ASSERTS_FWorldWalkInfo;

// ScriptStruct JH.NPCAggregation
// 0x0048 (0x0050 - 0x0008)
struct FNPCAggregation final : public FTableRowBase
{
public:
	int32                                         ID;                                                // 0x0008(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   GroupName;                                         // 0x0010(0x0018)(Edit, NativeAccessSpecifierPublic)
	class FText                                   Desc;                                              // 0x0028(0x0018)(Edit, NativeAccessSpecifierPublic)
	TArray<int32>                                 NPCList;                                           // 0x0040(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FNPCAggregation;

// ScriptStruct JH.DlgContentSettings
// 0x0010 (0x0010 - 0x0000)
struct FDlgContentSettings final
{
public:
	TArray<struct FDlgContentSetting>             Dlgs;                                              // 0x0000(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FDlgContentSettings;

// ScriptStruct JH.FunctionSetting
// 0x0020 (0x0020 - 0x0000)
struct FFunctionSetting final
{
public:
	ENPCFunction                                  Function;                                          // 0x0000(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   MenuText;                                          // 0x0008(0x0018)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FFunctionSetting;

// ScriptStruct JH.AttachMenuSetting
// 0x0028 (0x0028 - 0x0000)
struct FAttachMenuSetting final
{
public:
	class FText                                   MenuText;                                          // 0x0000(0x0018)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic)
	struct FActionSetting                         Action;                                            // 0x0018(0x000C)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
DUMPER7_ASSERTS_FAttachMenuSetting;

// ScriptStruct JH.JHVector
// 0x0000 (0x000C - 0x000C)
struct FJHVector final : public FVector
{
};
DUMPER7_ASSERTS_FJHVector;

// ScriptStruct JH.DropPool
// 0x0008 (0x0008 - 0x0000)
struct FDropPool final
{
public:
	int32                                         DropPoolId;                                        // 0x0000(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Count;                                             // 0x0004(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FDropPool;

// ScriptStruct JH.NPCDropItemWithRequirement
// 0x0018 (0x0018 - 0x0000)
struct FNPCDropItemWithRequirement final
{
public:
	TArray<struct FRequirementSetting>            Reqirements;                                       // 0x0000(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                         ItemDefId;                                         // 0x0010(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
DUMPER7_ASSERTS_FNPCDropItemWithRequirement;

// ScriptStruct JH.NPCSetting
// 0x0548 (0x0550 - 0x0008)
struct FNPCSetting final : public FTableRowBase
{
public:
	int32                                         ID;                                                // 0x0008(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Name;                                              // 0x0010(0x0018)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FName                                   ResourceName;                                      // 0x0028(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         PetNPCId;                                          // 0x0030(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   TalkMenuText;                                      // 0x0038(0x0018)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                   Description;                                       // 0x0050(0x0018)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                          bShowName;                                         // 0x0068(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FDlgContentSettings>            DefaultTalks;                                      // 0x0070(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                 TalkWeights;                                       // 0x0080(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UBehaviorTree>           FightBehaviorTree;                                 // 0x0090(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UBehaviorTree>           SceneBehaviorTree;                                 // 0x00B8(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FFunctionSetting>               Functions;                                         // 0x00E0(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                 SellItems;                                         // 0x00F0(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FAttachMenuSetting>             AttachMenus;                                       // 0x0100(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	class FText                                   FunctionName;                                      // 0x0110(0x0018)(Edit, NativeAccessSpecifierPublic)
	ENPCFunctionType                              FunctionType;                                      // 0x0128(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bSaveData;                                         // 0x0129(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bCantFighting;                                     // 0x012A(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bNotShowInUI;                                      // 0x012B(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_12C[0x4];                                      // 0x012C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 ChildNPCs;                                         // 0x0130(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<EItemSubType>                          Hobbies;                                           // 0x0140(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                 HobbiesViewText;                                   // 0x0150(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Honor;                                             // 0x0160(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         GuildId;                                           // 0x0164(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<EWeaponType>                           WeaponLimits;                                      // 0x0168(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                         MoveSpeed;                                         // 0x0178(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_17C[0x4];                                      // 0x017C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FRequirementSetting>            JoinTeamRequirements;                              // 0x0180(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                         JoinTeamQuestId;                                   // 0x0190(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_194[0x4];                                      // 0x0194(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FRequirementSetting>            LeaveTeamRequirements;                             // 0x0198(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FRequirementSetting>            CompareRequirements;                               // 0x01A8(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FDlgContentSettings>            CompareRequirementDlgs;                            // 0x01B8(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FDlgContentSetting>             CompareWinDlgs;                                    // 0x01C8(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FDlgContentSetting>             CompareLoseDlgs;                                   // 0x01D8(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FRequirementActionSettings>     CompareReqAndAction;                               // 0x01E8(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_1F8[0x20];                                     // 0x01F8(0x0020)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FDlgContentSetting>             GiftSussDlgs;                                      // 0x0218(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FDlgContentSetting>             JoinTeamDlgs;                                      // 0x0228(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_238[0x30];                                     // 0x0238(0x0030)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FTableTwoParamentSettingDefine> EquipList;                                         // 0x0268(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FDropPool>                      EquipListPools;                                    // 0x0278(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FTableTwoParamentSettingDefine> EasyModeEquipList;                                 // 0x0288(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FDropPool>                      EasyModeEquipListPools;                            // 0x0298(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FTableTwoParamentSettingDefine> DiffModeEquipList;                                 // 0x02A8(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FDropPool>                      DifficultyModeEquipListPools;                      // 0x02B8(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FTableTwoParamentSettingDefine> HellModeEquipList;                                 // 0x02C8(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FDropPool>                      HellModeEquipListPools;                            // 0x02D8(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FTableTwoParamentSettingDefine> ItemList;                                          // 0x02E8(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FDropPool>                      ItemListPools;                                     // 0x02F8(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FTableTwoParamentSettingDefine> PassiveSkillList;                                  // 0x0308(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FTableTwoParamentSettingDefine> SkillList;                                         // 0x0318(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FTableTwoParamentSettingDefine> PassiveBuffList;                                   // 0x0328(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                         Level;                                             // 0x0338(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Strength;                                          // 0x033C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         BaseAttackPower;                                   // 0x0340(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         BaseCrit;                                          // 0x0344(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Constitution;                                      // 0x0348(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         BaseHp;                                            // 0x034C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         BaseDefense;                                       // 0x0350(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Agility;                                           // 0x0354(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         BaseDodge;                                         // 0x0358(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         BaseNeiLi;                                         // 0x035C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         BaseMp;                                            // 0x0360(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         BaseTurnRate;                                      // 0x0364(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         BaseActionPoint;                                   // 0x0368(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         BaseHealthRestoreRate;                             // 0x036C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         BaseManaRestoreRate;                               // 0x0370(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_374[0x4];                                      // 0x0374(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FTableTwoParamentSettingDefine> DropCoins;                                         // 0x0378(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FTableTwoParamentSettingDefine> DropItems;                                         // 0x0388(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FTableTwoParamentSettingDefine> DropExps;                                          // 0x0398(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FNPCDropItemWithRequirement>    DropItemsWithRequirements;                         // 0x03A8(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FDropPool>                      DropPools;                                         // 0x03B8(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                 JingMaiIds;                                        // 0x03C8(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                         JingMaiPoolId;                                     // 0x03D8(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         JingMaiPoint;                                      // 0x03DC(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         BoxingLevel;                                       // 0x03E0(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FencingLevel;                                      // 0x03E4(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SabreLevel;                                        // 0x03E8(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SpearLevel;                                        // 0x03EC(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         HiddenWeaponsLevel;                                // 0x03F0(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         OtherWeaponsLevel;                                 // 0x03F4(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         EliteAttributeMultiplier;                          // 0x03F8(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3FC[0x4];                                      // 0x03FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FDlgContentSetting>             ToFightingDlg;                                     // 0x0400(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFightLevelSetting>      FightSetting;                                      // 0x0410(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFightLevelSetting>      EasyFightSetting;                                  // 0x0438(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFightLevelSetting>      DifficultyFightSetting;                            // 0x0460(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFightLevelSetting>      HellFightSetting;                                  // 0x0488(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         DaZaoLevel;                                        // 0x04B0(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ZhiYiLevel;                                        // 0x04B4(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         FishingLevel;                                      // 0x04B8(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         CookingLevel;                                      // 0x04BC(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         AlchemyLevel;                                      // 0x04C0(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         GatheringLevel;                                    // 0x04C4(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 WalkLevelName;                                     // 0x04C8(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bWorldWalk;                                        // 0x04D8(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bWalkLoop;                                         // 0x04D9(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4DA[0x6];                                      // 0x04DA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FJHVector>                      WalkPoints;                                        // 0x04E0(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                         WalkRemainingSecs;                                 // 0x04F0(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4F4[0x4];                                      // 0x04F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FRequirementSetting>            WalkHiddenRequirements;                            // 0x04F8(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FRequirementSetting>            PetHiddenRequirements;                             // 0x0508(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                         MonsterRemainingSecs;                              // 0x0518(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_51C[0x4];                                      // 0x051C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FNPCFriendlinessLockSetting>    FriendlinessLockSettings;                          // 0x0520(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FDlgContentSettings>            FriendlinessLockDlgs;                              // 0x0530(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FRequirementActionSettings>     ReqAndActOnFriendlinessChanged;                    // 0x0540(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FNPCSetting;

// ScriptStruct JH.PaperFlipbookSettings
// 0x0010 (0x0010 - 0x0000)
struct FPaperFlipbookSettings final
{
public:
	TArray<TSoftObjectPtr<class UPaperFlipbook>>  Arrays;                                            // 0x0000(0x0010)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FPaperFlipbookSettings;

// ScriptStruct JH.FullscreenScrollTextSetting
// 0x0020 (0x0028 - 0x0008)
struct FFullscreenScrollTextSetting final : public FTableRowBase
{
public:
	class FText                                   Text;                                              // 0x0008(0x0018)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	float                                         DisableClickTime;                                  // 0x0020(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AutoCloseTime;                                     // 0x0024(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FFullscreenScrollTextSetting;

// ScriptStruct JH.DlgsSetting
// 0x0010 (0x0018 - 0x0008)
struct FDlgsSetting : public FTableRowBase
{
public:
	TArray<struct FDlgContentSetting>             Dlgs;                                              // 0x0008(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FDlgsSetting;

// ScriptStruct JH.QuestDlgSetting
// 0x0000 (0x0018 - 0x0018)
struct FQuestDlgSetting final : public FDlgsSetting
{
};
DUMPER7_ASSERTS_FQuestDlgSetting;

// ScriptStruct JH.QuestTypeSetting
// 0x0040 (0x0048 - 0x0008)
struct FQuestTypeSetting final : public FTableRowBase
{
public:
	class FText                                   Descript;                                          // 0x0008(0x0018)(Edit, EditConst, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UClass>                   Blueprint;                                         // 0x0020(0x0028)(Edit, EditConst, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FQuestTypeSetting;

// ScriptStruct JH.NPCLocationSetting
// 0x001C (0x001C - 0x0000)
struct FNPCLocationSetting final
{
public:
	int32                                         NPCId;                                             // 0x0000(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   MapName;                                           // 0x0004(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FJHVector                              Location;                                          // 0x000C(0x000C)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsVisible;                                         // 0x0018(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsInHouse;                                         // 0x0019(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EGridDirect                                   Direct;                                            // 0x001A(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1B[0x1];                                       // 0x001B(0x0001)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
DUMPER7_ASSERTS_FNPCLocationSetting;

// ScriptStruct JH.QuestSetting
// 0x0498 (0x04A0 - 0x0008)
struct FQuestSetting final : public FTableRowBase
{
public:
	int32                                         QuestId;                                           // 0x0008(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         OwnerQuestId;                                      // 0x000C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                   Name;                                              // 0x0010(0x0018)(Edit, NativeAccessSpecifierPublic)
	bool                                          bIsShow;                                           // 0x0028(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EQuestClassFlag                               ClassFlag;                                         // 0x0029(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bAutoRequest;                                      // 0x002A(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bAutoFinish;                                       // 0x002B(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Descript;                                          // 0x0030(0x0018)(Edit, NativeAccessSpecifierPublic)
	int32                                         QuestType;                                         // 0x0048(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftClassPtr<class UClass>                   Blueprint;                                         // 0x0050(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                   EntryText;                                         // 0x0078(0x0018)(Edit, NativeAccessSpecifierPublic)
	TArray<int32>                                 RequestNPCIds;                                     // 0x0090(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                          bShowIconOnTopName;                                // 0x00A0(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_A1[0x7];                                       // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 FinishNPCIds;                                      // 0x00A8(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FDlgContentSetting>             RequestDlgs;                                       // 0x00B8(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class ULevelSequence>          RequestSequence;                                   // 0x00C8(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FNPCLocationSetting>            RequestNPCLocation;                                // 0x00F0(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FRequirementSetting>            OptionRequirements1;                               // 0x0100(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FActionSetting>                 OptionActions1;                                    // 0x0110(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	class FText                                   OptionText1;                                       // 0x0120(0x0018)(Edit, NativeAccessSpecifierPublic)
	TArray<struct FDlgContentSetting>             OptionDlgs1;                                       // 0x0138(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FRequirementSetting>            OptionRequirements2;                               // 0x0148(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FActionSetting>                 OptionActions2;                                    // 0x0158(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	class FText                                   OptionText2;                                       // 0x0168(0x0018)(Edit, NativeAccessSpecifierPublic)
	TArray<struct FDlgContentSetting>             OptionDlgs2;                                       // 0x0180(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FRequirementSetting>            OptionRequirements3;                               // 0x0190(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FActionSetting>                 OptionActions3;                                    // 0x01A0(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	class FText                                   OptionText3;                                       // 0x01B0(0x0018)(Edit, NativeAccessSpecifierPublic)
	TArray<struct FDlgContentSetting>             OptionDlgs3;                                       // 0x01C8(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FRequirementSetting>            OptionRequirements4;                               // 0x01D8(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FActionSetting>                 OptionActions4;                                    // 0x01E8(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	class FText                                   OptionText4;                                       // 0x01F8(0x0018)(Edit, NativeAccessSpecifierPublic)
	TArray<struct FDlgContentSetting>             OptionDlgs4;                                       // 0x0210(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FRequirementSetting>            OptionRequirements5;                               // 0x0220(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FActionSetting>                 OptionActions5;                                    // 0x0230(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	class FText                                   OptionText5;                                       // 0x0240(0x0018)(Edit, NativeAccessSpecifierPublic)
	TArray<struct FDlgContentSetting>             OptionDlgs5;                                       // 0x0258(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FDlgContentSetting>             UnFinishedDlgsForRequestNPC;                       // 0x0268(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FDlgContentSetting>             UnFinishedDlgsForFinishNPC;                        // 0x0278(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FDlgContentSetting>             FinishingDlgs;                                     // 0x0288(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class ULevelSequence>          FinishSequence;                                    // 0x0298(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FNPCLocationSetting>            FinishNPCLocation;                                 // 0x02C0(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FRequirementSetting>            RequestRequirements;                               // 0x02D0(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FRequirementSetting>            FinishingRequirements;                             // 0x02E0(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FActionSetting>                 FinishedActions;                                   // 0x02F0(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FActionSetting>                 FinishedActionsForDifficulty;                      // 0x0300(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FActionSetting>                 FinishedActionsForHell;                            // 0x0310(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FDlgContentSetting>             FailingDlgs;                                       // 0x0320(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FActionSetting>                 FailedActions;                                     // 0x0330(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                 ProcessingNPCIds;                                  // 0x0340(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FDlgContentSetting>             ProcessingDlgs1;                                   // 0x0350(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FDlgContentSetting>             ProcessingDlgs2;                                   // 0x0360(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FDlgContentSetting>             ProcessingDlgs3;                                   // 0x0370(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FDlgContentSetting>             ProcessedDlgs1;                                    // 0x0380(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FDlgContentSetting>             ProcessedDlgs2;                                    // 0x0390(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FDlgContentSetting>             ProcessedDlgs3;                                    // 0x03A0(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FDlgContentSetting>             ProcessFaildDlgs1;                                 // 0x03B0(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FDlgContentSetting>             ProcessFaildDlgs2;                                 // 0x03C0(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FDlgContentSetting>             ProcessFaildDlgs3;                                 // 0x03D0(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FActionSetting>                 ProcessedActions1;                                 // 0x03E0(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FActionSetting>                 ProcessedActions2;                                 // 0x03F0(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FActionSetting>                 ProcessedActions3;                                 // 0x0400(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FActionSetting>                 ProcessFailedActions1;                             // 0x0410(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FActionSetting>                 ProcessFailedActions2;                             // 0x0420(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FActionSetting>                 ProcessFailedActions3;                             // 0x0430(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                 Parameters1;                                       // 0x0440(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Parameters2;                                       // 0x0450(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Parameters3;                                       // 0x0460(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Parameters4;                                       // 0x0470(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Parameters5;                                       // 0x0480(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FDlgContentSettings>            AttachDlgs;                                        // 0x0490(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FQuestSetting;

// ScriptStruct JH.QuestSpec
// 0x0028 (0x0028 - 0x0000)
struct FQuestSpec final
{
public:
	int32                                         QuestId;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EQuestStep                                    Step;                                              // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FRequirementSetting>            QuestProgracessData;                               // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	class UQuestInfo*                             Def;                                               // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         RequestTime;                                       // 0x0020(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         FinishTime;                                        // 0x0024(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FQuestSpec;

// ScriptStruct JH.CDEffectSetting
// 0x0028 (0x0030 - 0x0008)
struct FCDEffectSetting final : public FTableRowBase
{
public:
	TSoftClassPtr<class UClass>                   Blueprint;                                         // 0x0008(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FCDEffectSetting;

// ScriptStruct JH.BuffSetting
// 0x00F8 (0x0100 - 0x0008)
struct FBuffSetting final : public FTableRowBase
{
public:
	TSoftClassPtr<class UClass>                   Blueprint;                                         // 0x0008(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                   ViewName;                                          // 0x0030(0x0018)(Edit, NativeAccessSpecifierPublic)
	class FText                                   Description;                                       // 0x0048(0x0018)(Edit, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>              Icon;                                              // 0x0060(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EBuffColor                                    Color;                                             // 0x0088(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bHide;                                             // 0x0089(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_8A[0x2];                                       // 0x008A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ExtendModifierValue1;                              // 0x008C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ExtendModifierValue2;                              // 0x0090(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ExtendModifierValue3;                              // 0x0094(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ExtendModifierValue4;                              // 0x0098(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ModifierValue;                                     // 0x009C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ModifierValue1;                                    // 0x00A0(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ModifierValue2;                                    // 0x00A4(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ModifierValue3;                                    // 0x00A8(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ModifierValue4;                                    // 0x00AC(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ModifierValue5;                                    // 0x00B0(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ModifierValue6;                                    // 0x00B4(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ModifierValue7;                                    // 0x00B8(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ModifierValue8;                                    // 0x00BC(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ModifierValue9;                                    // 0x00C0(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Duration1;                                         // 0x00C4(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Duration4;                                         // 0x00C8(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Duration7;                                         // 0x00CC(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Duration10;                                        // 0x00D0(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Period;                                            // 0x00D4(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Chance;                                            // 0x00D8(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SourceDuration;                                    // 0x00DC(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                   SourceDescription;                                 // 0x00E0(0x0018)(Edit, NativeAccessSpecifierPublic)
	int32                                         StackLimit;                                        // 0x00F8(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_FC[0x4];                                       // 0x00FC(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
DUMPER7_ASSERTS_FBuffSetting;

// ScriptStruct JH.LevelUnlockReq
// 0x0018 (0x0018 - 0x0000)
struct FLevelUnlockReq final
{
public:
	int32                                         Level;                                             // 0x0000(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FRequirementSetting>            Reqs;                                              // 0x0008(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FLevelUnlockReq;

// ScriptStruct JH.SkillSetting
// 0x0418 (0x0420 - 0x0008)
struct FSkillSetting final : public FTableRowBase
{
public:
	TSoftClassPtr<class UClass>                   Blueprint;                                         // 0x0008(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EItemQuality                                  Quality;                                           // 0x0030(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FRequirementSetting>            Requirements;                                      // 0x0038(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FRequirementSetting>            UseRequirements;                                   // 0x0048(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                         ConsultVigorCost;                                  // 0x0058(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ConsultSExpCost;                                   // 0x005C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                   ViewName;                                          // 0x0060(0x0018)(Edit, NativeAccessSpecifierPublic)
	class FText                                   Description;                                       // 0x0078(0x0018)(Edit, NativeAccessSpecifierPublic)
	bool                                          bShow;                                             // 0x0090(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bOpenForPlayer;                                    // 0x0091(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bCanCastWithNullTarget;                            // 0x0092(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_93[0x5];                                       // 0x0093(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              Icon;                                              // 0x0098(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>              LittleIcon;                                        // 0x00C0(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>              Icon_mobile;                                       // 0x00E8(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>              LittleIcon_mobile;                                 // 0x0110(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>              UltimateSkillIcon;                                 // 0x0138(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>              AttackAreaDescTexture;                             // 0x0160(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                   CastEffectDesc;                                    // 0x0188(0x0018)(Edit, NativeAccessSpecifierPublic)
	class FText                                   SpecialEffectDesc;                                 // 0x01A0(0x0018)(Edit, NativeAccessSpecifierPublic)
	TArray<EAbilityType>                          AbilityTypes;                                      // 0x01B8(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                          bAutoCast;                                         // 0x01C8(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1C9[0x3];                                      // 0x01C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         AttackVariable;                                    // 0x01CC(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DamageMultiplier;                                  // 0x01D0(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ManaCostVariable;                                  // 0x01D4(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SkillExpCostVariable;                              // 0x01D8(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         CDType;                                            // 0x01DC(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Duration;                                          // 0x01E0(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaxLevel;                                          // 0x01E4(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FLevelUnlockReq>                LevelUnLockReqs;                                   // 0x01E8(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                         AttackRangeType1;                                  // 0x01F8(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         AttackRangeType4;                                  // 0x01FC(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         AttackRangeType5;                                  // 0x0200(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         AttackRangeType7;                                  // 0x0204(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         AttackRangeType10;                                 // 0x0208(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         AttackRange1;                                      // 0x020C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         AttackRange4;                                      // 0x0210(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         AttackRange5;                                      // 0x0214(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         AttackRange7;                                      // 0x0218(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         AttackRange10;                                     // 0x021C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         AttackRangeArg1;                                   // 0x0220(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         AttackRangeArg4;                                   // 0x0224(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         AttackRangeArg5;                                   // 0x0228(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         AttackRangeArg7;                                   // 0x022C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         AttackRangeArg10;                                  // 0x0230(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         CastRangeType1;                                    // 0x0234(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         CastRangeType4;                                    // 0x0238(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         CastRangeType5;                                    // 0x023C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         CastRangeType7;                                    // 0x0240(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         CastRangeType10;                                   // 0x0244(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         CastRange1;                                        // 0x0248(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         CastRange4;                                        // 0x024C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         CastRange5;                                        // 0x0250(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         CastRange7;                                        // 0x0254(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         CastRange10;                                       // 0x0258(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         CastRangeArg1;                                     // 0x025C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         CastRangeArg4;                                     // 0x0260(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         CastRangeArg5;                                     // 0x0264(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         CastRangeArg7;                                     // 0x0268(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         CastRangeArg10;                                    // 0x026C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EWeaponType                                   WeaponType;                                        // 0x0270(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EWeaponType                                   FlipbookWeaponType;                                // 0x0271(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_272[0x2];                                      // 0x0272(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         FlipbookIndex;                                     // 0x0274(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FActionSetting>                 LvAction1;                                         // 0x0278(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FActionSetting>                 LvAction2;                                         // 0x0288(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FActionSetting>                 LvAction3;                                         // 0x0298(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FActionSetting>                 LvAction4;                                         // 0x02A8(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FActionSetting>                 LvAction5;                                         // 0x02B8(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FActionSetting>                 LvAction6;                                         // 0x02C8(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FActionSetting>                 LvAction7;                                         // 0x02D8(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FActionSetting>                 LvAction8;                                         // 0x02E8(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FActionSetting>                 LvAction9;                                         // 0x02F8(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FActionSetting>                 LvAction10;                                        // 0x0308(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FActionSetting>                 LvUpAction1;                                       // 0x0318(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FActionSetting>                 LvUpAction2;                                       // 0x0328(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FActionSetting>                 LvUpAction3;                                       // 0x0338(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FActionSetting>                 LvUpAction4;                                       // 0x0348(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FActionSetting>                 LvUpAction5;                                       // 0x0358(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FActionSetting>                 LvUpAction6;                                       // 0x0368(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FActionSetting>                 LvUpAction7;                                       // 0x0378(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FActionSetting>                 LvUpAction8;                                       // 0x0388(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FActionSetting>                 LvUpAction9;                                       // 0x0398(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FActionSetting>                 LvUpAction10;                                      // 0x03A8(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                         MappingSkillId;                                    // 0x03B8(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ID;                                                // 0x03BC(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ConsultRandomRate;                                 // 0x03C0(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3C4[0x4];                                      // 0x03C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 NeiGongType;                                       // 0x03C8(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	EQingGongType                                 QingGongType;                                      // 0x03D8(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3D9[0x27];                                     // 0x03D9(0x0027)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FActionSetting>                 AttachBuffs;                                       // 0x0400(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FName>                           MartialTypes;                                      // 0x0410(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FSkillSetting;

// ScriptStruct JH.AttachEffect
// 0x0008 (0x0008 - 0x0000)
struct FAttachEffect final
{
public:
	int32                                         BuffId;                                            // 0x0000(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Level;                                             // 0x0004(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FAttachEffect;

// ScriptStruct JH.SkillSpec
// 0x0030 (0x0030 - 0x0000)
struct FSkillSpec final
{
public:
	int32                                         ID;                                                // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Level;                                             // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Order;                                             // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          Checked;                                           // 0x000C(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsNew;                                            // 0x000D(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bApplied;                                          // 0x000E(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_F[0x1];                                        // 0x000F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class UJHGameplayAbility*                     Def;                                               // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTeamInfo*                              AbilityOwner;                                      // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FActiveGameplayEffectHandle>    EffectSpecHandles;                                 // 0x0020(0x0010)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FSkillSpec;

// ScriptStruct JH.SkinResTypes
// 0x0060 (0x0068 - 0x0008)
struct FSkinResTypes final : public FTableRowBase
{
public:
	int32                                         ID;                                                // 0x0008(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         NPCId;                                             // 0x000C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   ResourceName;                                      // 0x0010(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                   Name;                                              // 0x0018(0x0018)(Edit, NativeAccessSpecifierPublic)
	float                                         Point;                                             // 0x0030(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              SkinPainting;                                      // 0x0038(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         DLCId;                                             // 0x0060(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_64[0x4];                                       // 0x0064(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
DUMPER7_ASSERTS_FSkinResTypes;

// ScriptStruct JH.SceneBuff
// 0x0014 (0x0014 - 0x0000)
struct FSceneBuff final
{
public:
	float                                         TimeRemaining;                                     // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EBuffTimeMode                                 TimeMode;                                          // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         BuffId;                                            // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C[0x8];                                        // 0x000C(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
DUMPER7_ASSERTS_FSceneBuff;

// ScriptStruct JH.NPCLocation
// 0x0018 (0x0018 - 0x0000)
struct FNPCLocation final
{
public:
	struct FVector                                Location;                                          // 0x0000(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   MapName;                                           // 0x000C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsVisible;                                         // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsDynamic;                                         // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsInHouse;                                         // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EGridDirect                                   Direct;                                            // 0x0017(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FNPCLocation;

// ScriptStruct JH.TriggerDlgSetting
// 0x0000 (0x0018 - 0x0018)
struct FTriggerDlgSetting final : public FDlgsSetting
{
};
DUMPER7_ASSERTS_FTriggerDlgSetting;

// ScriptStruct JH.DlgContentSettingss
// 0x0010 (0x0010 - 0x0000)
struct FDlgContentSettingss final
{
public:
	TArray<struct FDlgContentSettings>            Dlgs;                                              // 0x0000(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FDlgContentSettingss;

// ScriptStruct JH.TowerClimbingSetting
// 0x0100 (0x0108 - 0x0008)
struct FTowerClimbingSetting final : public FTableRowBase
{
public:
	int32                                         ID;                                                // 0x0008(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   Name;                                              // 0x000C(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   ViewName;                                          // 0x0018(0x0018)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFightLevelSetting>      FightSetting;                                      // 0x0030(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class USoundBase>>      BackgroundSound;                                   // 0x0058(0x0010)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<struct FRequirementSetting>            Requirements;                                      // 0x0068(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FTableTwoParamentSettingDefine> FirstDropItems;                                    // 0x0078(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FTableTwoParamentSettingDefine> SecondDropItems;                                   // 0x0088(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FTableTwoParamentSettingDefine> ThirdDropItems;                                    // 0x0098(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	class FText                                   GradeAText;                                        // 0x00A8(0x0018)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                   GradeBText;                                        // 0x00C0(0x0018)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                   GradeCText;                                        // 0x00D8(0x0018)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                   LevelIntroduction;                                 // 0x00F0(0x0018)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FTowerClimbingSetting;

// ScriptStruct JH.FloatPropertyChildOfPostProcess
// 0x0000 (0x0038 - 0x0038)
struct FFloatPropertyChildOfPostProcess final : public FFloatPropertyChild
{
};
DUMPER7_ASSERTS_FFloatPropertyChildOfPostProcess;

// ScriptStruct JH.Team
// 0x0018 (0x0018 - 0x0000)
struct FTeam final
{
public:
	struct FGenericTeamId                         TeamId;                                            // 0x0000(0x0001)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UTurnComponent*>                 Components;                                        // 0x0008(0x0010)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FTeam;

// ScriptStruct JH.UIDebugTable
// 0x0010 (0x0018 - 0x0008)
struct FUIDebugTable final : public FTableRowBase
{
public:
	int32                                         MapId;                                             // 0x0008(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   MapName;                                           // 0x000C(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         aabb;                                              // 0x0014(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FUIDebugTable;

// ScriptStruct JH.JHSceneNPCWorldSettingAction
// 0x0001 (0x0001 - 0x0000)
struct FJHSceneNPCWorldSettingAction final
{
public:
	bool                                          bVisible;                                          // 0x0000(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FJHSceneNPCWorldSettingAction;

// ScriptStruct JH.JHSceneNPCWorldSetting
// 0x0028 (0x0028 - 0x0000)
struct FJHSceneNPCWorldSetting final
{
public:
	TArray<struct FRequirementSetting>            RequirementSettings;                               // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FJHSceneNPCWorldSettingAction>  NPCActions;                                        // 0x0010(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                          bTriggerOnce;                                      // 0x0020(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
DUMPER7_ASSERTS_FJHSceneNPCWorldSetting;

SDK_NAMESPACE_END
