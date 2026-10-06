#pragma once



// Package: BP_QuestInfoBase

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass BP_QuestInfoBase.BP_QuestInfoBase_C
// 0x0008 (0x0240 - 0x0238)
class UBP_QuestInfoBase_C : public UQuestInfo
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0238(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_QuestInfoBase(int32 EntryPoint);
	void HandleFailing(int32 NPCId);
	void HandleUnFinishForRequestNPC(int32 NPCId);
	void HandleUnFinishForFinishNPC(int32 NPCId);
	void HandleRequesting(int32 NPCId);
	void HandleRefuseRequested(int32 NPCId);
	void HandleProcessedFail(int32 NPCId);
	void HandleProcessed(int32 NPCId);
	void HandleAcceptRequested(int32 NPCId);
	void HandleFinishing(int32 NPCId);
	void OnDlgClosed_2A43ED6F45C5B7633D1200AEC8F9A6D0(int32 NPCId);
	void OnDlgSelectedOption_2A43ED6F45C5B7633D1200AEC8F9A6D0(int32 NPCId);
	void OnDlgClosed_23734BDA4EC10DC33CBE0DA6F03BC1FA(int32 NPCId);
	void OnDlgSelectedOption_23734BDA4EC10DC33CBE0DA6F03BC1FA(int32 NPCId);
	void OnDlgClosed_4C859CAE4CFFBF2B2982D9919A2295FD(int32 NPCId);
	void OnDlgSelectedOption_4C859CAE4CFFBF2B2982D9919A2295FD(int32 NPCId);
	void OnFinished_ED2FD6C84DDC23E3BE07BF89B667253F();
	void OnStop_ED2FD6C84DDC23E3BE07BF89B667253F();
	void OnDlgClosed_9F52F59E48ECF39BBE5A8CB6814A58D7(int32 NPCId);
	void OnDlgSelectedOption_9F52F59E48ECF39BBE5A8CB6814A58D7(int32 NPCId);
	void OnDlgClosed_EF19A635482FC5150A8D22AC3A71AF60(int32 NPCId);
	void OnDlgSelectedOption_EF19A635482FC5150A8D22AC3A71AF60(int32 NPCId);
	void OnFinished_A36844B94465CF4588117E8F9D053128();
	void OnStop_A36844B94465CF4588117E8F9D053128();
	void OnFinished_17DD4AB647EE736EB55EB19ECC0F2791();
	void OnStop_17DD4AB647EE736EB55EB19ECC0F2791();
	void OnDlgClosed_15034C0C4C67E1A0C577B7B1BD403E77(int32 NPCId);
	void OnDlgSelectedOption_15034C0C4C67E1A0C577B7B1BD403E77(int32 NPCId);
	void OnDlgClosed_36E78E7E43FAE39A5A94EA90D0EE06A2(int32 NPCId);
	void OnDlgSelectedOption_36E78E7E43FAE39A5A94EA90D0EE06A2(int32 NPCId);
	void OnDlgClosed_CECA94894A98EE13C03F01B8A23CB0E2(int32 NPCId);
	void OnDlgSelectedOption_CECA94894A98EE13C03F01B8A23CB0E2(int32 NPCId);
	void OnDlgClosed_1D5C0E444EA853DC82EDD0938109C547(int32 NPCId);
	void OnDlgSelectedOption_1D5C0E444EA853DC82EDD0938109C547(int32 NPCId);
	void OnDlgClosed_7CC9790C4E3197FD4176558C2452A86E(int32 NPCId);
	void OnDlgSelectedOption_7CC9790C4E3197FD4176558C2452A86E(int32 NPCId);
	void OnDlgClosed_386CC3E241B30D007F23BE91158B202F(int32 NPCId);
	void OnDlgSelectedOption_386CC3E241B30D007F23BE91158B202F(int32 NPCId);
	void OnDlgClosed_229189604100CD879F284B8E7CAC7ECE(int32 NPCId);
	void OnDlgSelectedOption_229189604100CD879F284B8E7CAC7ECE(int32 NPCId);
	bool IsProcessed(int32 NPCId);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BP_QuestInfoBase_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BP_QuestInfoBase_C")
	}
	static class UBP_QuestInfoBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_QuestInfoBase_C>();
	}
};
DUMPER7_ASSERTS_UBP_QuestInfoBase_C;

SDK_NAMESPACE_END
