#pragma once



// Package: WBP_SceneNPCFuncMenuList

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass WBP_SceneNPCFuncMenuList.WBP_SceneNPCFuncMenuList_C
// 0x0008 (0x0290 - 0x0288)
class UWBP_SceneNPCFuncMenuList_C final : public UNPCFunctionMenuListWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0288(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_WBP_SceneNPCFuncMenuList(int32 EntryPoint);
	void EVT_FocusFirst();
	void HandleAddSubWidget(class UCacheListSubWidget* Row);
	void HandleClear();
	class UCacheListSubWidget* HandleGenerateSubWidget();

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("WBP_SceneNPCFuncMenuList_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"WBP_SceneNPCFuncMenuList_C")
	}
	static class UWBP_SceneNPCFuncMenuList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_SceneNPCFuncMenuList_C>();
	}
};
DUMPER7_ASSERTS_UWBP_SceneNPCFuncMenuList_C;

SDK_NAMESPACE_END
