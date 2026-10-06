#pragma once



// Package: NeoUI

#include "Basic.hpp"

#include "UMG_classes.hpp"
#include "Engine_classes.hpp"
#include "NeoUI_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "SlateCore_structs.hpp"


SDK_NAMESPACE_START

// Class NeoUI.NeoUICommonObjectPoolElement
// 0x0000 (0x0000 - 0x0000)
class INeoUICommonObjectPoolElement final
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("NeoUICommonObjectPoolElement")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NeoUICommonObjectPoolElement")
	}
	static class INeoUICommonObjectPoolElement* GetDefaultObj()
	{
		return GetDefaultObjImpl<INeoUICommonObjectPoolElement>();
	}

	class UObject* AsUObject()
	{
		return reinterpret_cast<UObject*>(this);
	}
	const class UObject* AsUObject() const
	{
		return reinterpret_cast<const UObject*>(this);
	}
};
DUMPER7_ASSERTS_INeoUICommonObjectPoolElement;

// Class NeoUI.NeoUIVisualBase
// 0x0008 (0x0268 - 0x0260)
class UNeoUIVisualBase : public UUserWidget
{
public:
	uint8                                         Pad_260[0x4];                                      // 0x0260(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         NeoUIDebugFlag;                                    // 0x0264(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void EVT_VisualConstructOnce();
	bool GetIsInFocusPath();

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("NeoUIVisualBase")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NeoUIVisualBase")
	}
	static class UNeoUIVisualBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNeoUIVisualBase>();
	}
};
DUMPER7_ASSERTS_UNeoUIVisualBase;

// Class NeoUI.NeoUIPassiveVisualBase
// 0x0028 (0x0290 - 0x0268)
class UNeoUIPassiveVisualBase : public UNeoUIVisualBase
{
public:
	class UAnyTypeStaticPointer*                  InternalDataObj;                                   // 0x0268(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_270[0x8];                                      // 0x0270(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 DataBindingKey;                                    // 0x0278(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         DataBindingIndex;                                  // 0x0288(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_28C[0x4];                                      // 0x028C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	bool ContainsKey(const class FString& Key);
	bool GetValueSafe_Bool(const class FString& Key);
	float GetValueSafe_Float(const class FString& Key);
	int32 GetValueSafe_Int32(const class FString& Key);
	class FString GetValueSafe_String(const class FString& Key);
	class FText GetValueSafe_Text(const class FString& Key);
	class UAnyTypeStaticPointer* NewArrayByKey(const class FString& Key);
	class UAnyTypeStaticPointer* NewArrayElementByIndex(int32 ElementIndex);
	class UAnyTypeStaticPointer* NewObjectByKey(const class FString& Key);
	void NotifyConsumeData();
	void NotifyConsumeDataForced();
	void ReceiveModuleMessage(class FName MessageHeader, class UAnyTypeUniversalPointerBase* MessageBody);
	bool SetValueSafe_Bool(const class FString& Key, bool Value);
	bool SetValueSafe_Float(const class FString& Key, float Value);
	bool SetValueSafe_Int32(const class FString& Key, int32 Value);
	bool SetValueSafe_String(const class FString& Key, const class FString& Value);
	bool SetValueSafe_Text(const class FString& Key, const class FText& Value);

	class UAnyTypeStaticPointer* GetData() const;

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("NeoUIPassiveVisualBase")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NeoUIPassiveVisualBase")
	}
	static class UNeoUIPassiveVisualBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNeoUIPassiveVisualBase>();
	}
};
DUMPER7_ASSERTS_UNeoUIPassiveVisualBase;

// Class NeoUI.NeoUIComponentBase
// 0x0008 (0x0270 - 0x0268)
class UNeoUIComponentBase : public UNeoUIVisualBase
{
public:
	int32                                         CompDebugID;                                       // 0x0268(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_26C[0x4];                                      // 0x026C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	bool BP_IsGamepadMode();
	void EVT_OnMouseEnter(const struct FGeometry& InGeometry, const struct FPointerEvent& InMouseEvent);
	void EVT_OnMouseLeave(const struct FPointerEvent& InMouseEvent);
	void EVT_OnMouseLeftDown(const struct FGeometry& InGeometry, const struct FPointerEvent& InMouseEvent);

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("NeoUIComponentBase")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NeoUIComponentBase")
	}
	static class UNeoUIComponentBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNeoUIComponentBase>();
	}
};
DUMPER7_ASSERTS_UNeoUIComponentBase;

// Class NeoUI.NeoUICommonButton
// 0x0040 (0x02B0 - 0x0270)
class UNeoUICommonButton : public UNeoUIComponentBase
{
public:
	TMulticastInlineDelegate<void(class UNeoUICommonButton* SrcWidget)> SingleClick;                 // 0x0270(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void(class UNeoUICommonButton* SrcWidget)> DoubleClick;                 // 0x0280(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void(class UNeoUICommonButton* SrcWidget)> MouseEneter;                 // 0x0290(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void(class UNeoUICommonButton* SrcWidget)> MouseLeave;                  // 0x02A0(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

public:
	void BP_DoubleClick();
	void BP_MouseEnter();
	void BP_MouseLeave();
	void BP_SingleClick();

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("NeoUICommonButton")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NeoUICommonButton")
	}
	static class UNeoUICommonButton* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNeoUICommonButton>();
	}
};
DUMPER7_ASSERTS_UNeoUICommonButton;

// Class NeoUI.NeoUIBorderBase
// 0x0000 (0x0270 - 0x0270)
class UNeoUIBorderBase final : public UBorder
{
public:
	void SetVisual_AsContainer(bool isVisual);
	void SetVisual_PureDisplay(bool isVisual);
	void SetVisual_UserInteraction(bool isVisual);

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("NeoUIBorderBase")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NeoUIBorderBase")
	}
	static class UNeoUIBorderBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNeoUIBorderBase>();
	}
};
DUMPER7_ASSERTS_UNeoUIBorderBase;

// Class NeoUI.NeoUIVMBase
// 0x0000 (0x0028 - 0x0028)
class UNeoUIVMBase : public UObject
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("NeoUIVMBase")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NeoUIVMBase")
	}
	static class UNeoUIVMBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNeoUIVMBase>();
	}
};
DUMPER7_ASSERTS_UNeoUIVMBase;

// Class NeoUI.NeoUICommonLib
// 0x0000 (0x0028 - 0x0028)
class UNeoUICommonLib final : public UBlueprintFunctionLibrary
{
public:
	static class UGameInstance* NeoUI_GetGameInstance();
	static class UGameInstance* NeoUI_GetGameInstanceStrict();
	static class UWorld* NeoUI_GetWorld();

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("NeoUICommonLib")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NeoUICommonLib")
	}
	static class UNeoUICommonLib* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNeoUICommonLib>();
	}
};
DUMPER7_ASSERTS_UNeoUICommonLib;

// Class NeoUI.NeoUIContainerVisualBase
// 0x0018 (0x02A8 - 0x0290)
class UNeoUIContainerVisualBase : public UNeoUIPassiveVisualBase
{
public:
	bool                                          GenerateCachedChildrenAutomatically;               // 0x0290(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_291[0x7];                                      // 0x0291(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UNeoUIContainerVisualBase*>      CachedChildArea;                                   // 0x0298(0x0010)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)

public:
	bool BP_IsGamepadMode();
	void EVT_SyncWithGlobalInputMode();
	void EVT_UpdateGamepadActiveBGStatus();
	void SyncWithGlobalInputMode();

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("NeoUIContainerVisualBase")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NeoUIContainerVisualBase")
	}
	static class UNeoUIContainerVisualBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNeoUIContainerVisualBase>();
	}
};
DUMPER7_ASSERTS_UNeoUIContainerVisualBase;

// Class NeoUI.NeoUIBlueprintableVMBase
// 0x0078 (0x00A0 - 0x0028)
class alignas(0x10) UNeoUIBlueprintableVMBase : public UNeoUIVMBase
{
public:
	class UAnyTypeStaticPointer*                  RootData;                                          // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_30[0x50];                                      // 0x0030(0x0050)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 ModelDataStructure;                                // 0x0080(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNeoUIBlueprintableVisualBase*          PairView;                                          // 0x0090(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNeoUICommonDataModel*                  PairModel;                                         // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

public:
	void CommitDataModification();
	bool GetModuleVisibility();
	class UNeoUICommonDataModel* GetPairModel();
	class UNeoUIBlueprintableVisualBase* GetPairView();
	void Hide();
	void Show();
	void Switch();

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("NeoUIBlueprintableVMBase")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NeoUIBlueprintableVMBase")
	}
	static class UNeoUIBlueprintableVMBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNeoUIBlueprintableVMBase>();
	}
};
DUMPER7_ASSERTS_UNeoUIBlueprintableVMBase;

// Class NeoUI.NeoUIBlueprintableVisualBase
// 0x0000 (0x02A8 - 0x02A8)
class UNeoUIBlueprintableVisualBase : public UNeoUIContainerVisualBase
{
public:
	class UNeoUIUniversalModuleVMBase* ActionResponder();
	void EVT_RenderView();
	void EVT_SetupHierarchy();
	void EVT_StaticRenderViewOnce();
	void EVT_VisualInit();
	class UNeoUIBlueprintableVMBase* GetOwnerVM_Unsafe();
	bool isOwnerVMValid();
	void NeoUI_DisableInteraction();
	void NeoUI_EnableInteraction();
	void ProvideChildArea(const TArray<class UNeoUIContainerVisualBase*>& Children);

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("NeoUIBlueprintableVisualBase")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NeoUIBlueprintableVisualBase")
	}
	static class UNeoUIBlueprintableVisualBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNeoUIBlueprintableVisualBase>();
	}
};
DUMPER7_ASSERTS_UNeoUIBlueprintableVisualBase;

// Class NeoUI.NeoUIVisualElementBase
// 0x0030 (0x02D8 - 0x02A8)
class UNeoUIVisualElementBase : public UNeoUIBlueprintableVisualBase
{
public:
	uint8                                         Pad_2A8[0x28];                                     // 0x02A8(0x0028)(Fixing Size After Last Property [ Dumper-7 ])
	bool                                          bEnableFocusTipForAllControlType;                  // 0x02D0(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          EnableGamepadTips;                                 // 0x02D1(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ShowGamepadTipsForMouse;                           // 0x02D2(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          AutoFocusForMouseEntering;                         // 0x02D3(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         DataIndex;                                         // 0x02D4(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	bool BP_IsGamepadModeAndFocused();
	void EVT_ConsoleHideTips(int32 intflag, const class FString& strFlag);
	void EVT_ConsoleShowTips(int32 intflag, const class FString& strFlag);
	void EVT_GamepadHideTips(int32 intflag, const class FString& strFlag);
	void EVT_GamepadShowTips(int32 intflag, const class FString& strFlag);
	class UNeoUIUniversalModuleVMBase* GetNeoUIVM();
	void RegisterActiveDisplayWidget(class UWidget* WidgetObj);
	void RegisterMainInteractiveWidget(class UWidget* WidgetObj);
	void RequestFocusForMouseEntering();

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("NeoUIVisualElementBase")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NeoUIVisualElementBase")
	}
	static class UNeoUIVisualElementBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNeoUIVisualElementBase>();
	}
};
DUMPER7_ASSERTS_UNeoUIVisualElementBase;

// Class NeoUI.NeoUIComboBoxString
// 0x0008 (0x02E0 - 0x02D8)
class UNeoUIComboBoxString : public UNeoUIVisualElementBase
{
public:
	class UComboBoxString*                        CB;                                                // 0x02D8(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("NeoUIComboBoxString")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NeoUIComboBoxString")
	}
	static class UNeoUIComboBoxString* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNeoUIComboBoxString>();
	}
};
DUMPER7_ASSERTS_UNeoUIComboBoxString;

// Class NeoUI.NeoUIConfigHolder
// 0x0000 (0x0000 - 0x0000)
class INeoUIConfigHolder final
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("NeoUIConfigHolder")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NeoUIConfigHolder")
	}
	static class INeoUIConfigHolder* GetDefaultObj()
	{
		return GetDefaultObjImpl<INeoUIConfigHolder>();
	}

	class UObject* AsUObject()
	{
		return reinterpret_cast<UObject*>(this);
	}
	const class UObject* AsUObject() const
	{
		return reinterpret_cast<const UObject*>(this);
	}
};
DUMPER7_ASSERTS_INeoUIConfigHolder;

// Class NeoUI.NeoUIUniversalModuleViewBase
// 0x00B8 (0x0360 - 0x02A8)
class UNeoUIUniversalModuleViewBase : public UNeoUIBlueprintableVisualBase
{
public:
	class FName                                   DefaultFocusModuleKey;                             // 0x02A8(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bDisableModuleRender;                              // 0x02B0(0x0001)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2B1[0x7];                                      // 0x02B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class FName, struct FNeoUIUniversalModuleMD> SubModuleMetadatas;                            // 0x02B8(0x0050)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TMap<class FName, class UNeoUINamedSlot*>     SubModuleSlots;                                    // 0x0308(0x0050)(ExportObject, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                         Pad_358[0x8];                                      // 0x0358(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void AppendActiveAreaArr(const TArray<class UGamepadActiveAreaDisplay*>& Arr);
	void ClearCurrentNativeFocusWidget();
	void EndFocusDefaultDelay();
	void EVT_AppendActiveAreaArr();
	void EVT_DelayFocusStart();
	void EVT_FocusWidgetForScenario(ENeoUIFocusWidgetScenario scenario, const struct FNeoUIFocusWidgetParam& Param);
	void EVT_SetupSubModuleSlots();
	void EVT_VisualHide();
	void EVT_VisualShow();
	class UWidget* FindFocusWidgetByTag(const class FString& StrParam);
	class UWidget* FocusWidgetForScenario_Direct(ENeoUIFocusWidgetScenario scenario, const struct FNeoUIFocusWidgetParam& Param);
	class UPanelSlot* GetContainerSlot();
	class UWidget* GetLocalDefaultFocusElement();
	class UNeoUIUniversalModuleVMBase* GetNeoUIVM();
	class FName GetSlotInParent();
	class UNeoUIUniversalModuleViewBase* GetSubModuleView(class FName ModuleKey);
	class UNeoUIUniversalModuleVMBase* GetSubModuleVM(class FName ModuleKey);
	void NotifyVMHide();
	void ProvideSubModuleSlotConfig(const TMap<class FName, class UNeoUINamedSlot*>& SlotConfig);
	void Region_RegisterDisplay(const class FString& RID, class UWidget* WObj);
	void Region_RegisterWidget(const class FString& RID, class UWidget* WObj);
	void RegisterCurrentNativeFocusWidget(class UWidget* WidgetObj);
	void UnregisterCurrentNativeFocusWidget(class UWidget* WidgetObj);

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("NeoUIUniversalModuleViewBase")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NeoUIUniversalModuleViewBase")
	}
	static class UNeoUIUniversalModuleViewBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNeoUIUniversalModuleViewBase>();
	}
};
DUMPER7_ASSERTS_UNeoUIUniversalModuleViewBase;

// Class NeoUI.NeoUI1Img1TxtComp
// 0x00B0 (0x0388 - 0x02D8)
class UNeoUI1Img1TxtComp : public UNeoUIVisualElementBase
{
public:
	class FText                                   TXT_Title;                                         // 0x02D8(0x0018)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FSlateBrush                            IMG_Style;                                         // 0x02F0(0x0088)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class UNeoUITextBlockBase*                    txt;                                               // 0x0378(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNeoUIImageBase*                        IMG;                                               // 0x0380(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void UpdateTitle(const class FText& NewValue);

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("NeoUI1Img1TxtComp")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NeoUI1Img1TxtComp")
	}
	static class UNeoUI1Img1TxtComp* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNeoUI1Img1TxtComp>();
	}
};
DUMPER7_ASSERTS_UNeoUI1Img1TxtComp;

// Class NeoUI.NeoUIUniversalModuleVMBase
// 0x00B0 (0x0150 - 0x00A0)
class UNeoUIUniversalModuleVMBase : public UNeoUIBlueprintableVMBase
{
public:
	uint8                                         Pad_A0[0x8];                                       // 0x00A0(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FNeoUIFocusWidgetParam                 FocusParam;                                        // 0x00A8(0x0010)(Protected, NativeAccessSpecifierProtected)
	uint8                                         Pad_B8[0x10];                                      // 0x00B8(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnyTypeStaticPointer*                  ParamPointer;                                      // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FNeoUIParam                            EarlyParam;                                        // 0x00D0(0x0020)(Protected, NativeAccessSpecifierProtected)
	uint8                                         Pad_F0[0x8];                                       // 0x00F0(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	TWeakObjectPtr<class UNeoUIUniversalModuleVMBase> ParentModule;                                  // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<class FName, class UNeoUIUniversalModuleVMBase*> SubModules;                                // 0x0100(0x0050)(Protected, NativeAccessSpecifierProtected)

public:
	class UWidget* ChangeNaviFocus(class FName LocalModuleID, ENeoUIFocusWidgetScenario scenario, const class FString& StrParam);
	void DisableInteraction();
	void EnableInteraction();
	class UWidget* FindNavigationFocusByTag(const class FString& StrParam);
	class UNeoUIUniversalModuleVMBase* FindSubModuleRecursively(class FName ModuleKey);
	class FName GetExclusiveModuleID();
	class UNeoUIUniversalModuleVMBase* GetParentModule();
	class UNeoUIUniversalModuleVMBase* GetRootModule();
	class UNeoUIUniversalModuleVMBase* GetSubModuleByIndex(int32 TargetIndex);
	class UNeoUIUniversalModuleVMBase* GetSubModuleByKey(class FName ModuleKey);
	class FName GetUniversalModuleID();
	void HandleUIAction(const class FString& ActionName, class UAnyTypeUniversalPointerBase* Data);
	void NotifyResetModule(int32 Reason);
	void NotifyUpdateModule();
	void NotifyUpdateModuleWithParam(const class FString& Param);
	class UWidget* ReceiveNavigationFocus(ENeoUIFocusWidgetScenario scenario, const class FString& StrParam);
	class UWidget* SearchWidgetByTag_Internal(const class FString& StrParam);

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("NeoUIUniversalModuleVMBase")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NeoUIUniversalModuleVMBase")
	}
	static class UNeoUIUniversalModuleVMBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNeoUIUniversalModuleVMBase>();
	}
};
DUMPER7_ASSERTS_UNeoUIUniversalModuleVMBase;

// Class NeoUI.AnyTypePointerBase
// 0x0018 (0x0040 - 0x0028)
class UAnyTypePointerBase : public UObject
{
public:
	uint8                                         Pad_28[0x18];                                      // 0x0028(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("AnyTypePointerBase")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"AnyTypePointerBase")
	}
	static class UAnyTypePointerBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnyTypePointerBase>();
	}
};
DUMPER7_ASSERTS_UAnyTypePointerBase;

// Class NeoUI.AnyTypeObjectPointerBase
// 0x0018 (0x0058 - 0x0040)
class UAnyTypeObjectPointerBase : public UAnyTypePointerBase
{
public:
	uint8                                         Pad_40[0x18];                                      // 0x0040(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	class FString DataToString();
	class FString DataToStringPerfect();

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("AnyTypeObjectPointerBase")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"AnyTypeObjectPointerBase")
	}
	static class UAnyTypeObjectPointerBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnyTypeObjectPointerBase>();
	}
};
DUMPER7_ASSERTS_UAnyTypeObjectPointerBase;

// Class NeoUI.AnyTypeUniversalPointerBase
// 0x0080 (0x00D8 - 0x0058)
class UAnyTypeUniversalPointerBase : public UAnyTypeObjectPointerBase
{
public:
	uint8                                         Pad_58[0x80];                                      // 0x0058(0x0080)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	bool AddValueSafe_String(const class FString& ckey, const class FString& Str);
	bool AddValueSafe_Text(const class FString& ckey, const class FText& Str);
	bool ContainsKey(const class FString& Key);
	bool GetValueSafe_Bool(const class FString& Key);
	float GetValueSafe_Float(const class FString& Key);
	int32 GetValueSafe_Int32(const class FString& Key);
	int64 GetValueSafe_Int64(const class FString& Key);
	class FString GetValueSafe_String(const class FString& Key);
	class FText GetValueSafe_Text(const class FString& Key);
	void SetDataConsumed();
	void SetDataNeedsConsume();
	bool SetValueSafe_Bool(const class FString& Key, bool Value);
	bool SetValueSafe_Float(const class FString& ckey, float Value);
	bool SetValueSafe_Int32(const class FString& ckey, int32 Value);
	bool SetValueSafe_Int64(const class FString& ckey, int64 Value);
	bool SetValueSafe_String(const class FString& ckey, const class FString& Str);
	bool SetValueSafe_Text(const class FString& ckey, const class FText& Str);

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("AnyTypeUniversalPointerBase")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"AnyTypeUniversalPointerBase")
	}
	static class UAnyTypeUniversalPointerBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnyTypeUniversalPointerBase>();
	}
};
DUMPER7_ASSERTS_UAnyTypeUniversalPointerBase;

// Class NeoUI.AnyTypeStaticPointer
// 0x0048 (0x0120 - 0x00D8)
class UAnyTypeStaticPointer : public UAnyTypeUniversalPointerBase
{
public:
	uint8                                         Pad_D8[0x40];                                      // 0x00D8(0x0040)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnyTypePointerCursor*                  Cursor;                                            // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UAnyTypeStaticPointer* NewFromCursor(class UAnyTypePointerCursor* FromCursor);

	class UAnyTypePointerCursor* At(int32 AtIndex);
	void ClearArray();
	class UAnyTypeStaticPointer* CopyPointer();
	class UAnyTypePointerCursor* First();
	TArray<class UAnyTypeStaticPointer*> GeneratePointersArray();
	class UAnyTypePointerCursor* Last();
	class UAnyTypePointerCursor* MoveToArrayByKey(const class FString& Key);
	class UAnyTypePointerCursor* MoveToArrayByPath(const class FString& target_path);
	class UAnyTypePointerCursor* MoveToArrayElementByIndex(int32 ElementIndex);
	class UAnyTypePointerCursor* MoveToArrayElementByPath(const class FString& array_path, int32 ElementIndex);
	class UAnyTypePointerCursor* MoveToObjectByKey(const class FString& Key);
	class UAnyTypePointerCursor* MoveToObjectByPath(const class FString& target_path);
	class UAnyTypeStaticPointer* NewArrayByKey(const class FString& Key);
	class UAnyTypeStaticPointer* NewArrayElementByIndex(int32 ElementIndex);
	class UAnyTypeStaticPointer* NewElementPointer(int32 AtIndex);
	class UAnyTypeStaticPointer* NewObjectByKey(const class FString& Key);
	int32 Num();

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("AnyTypeStaticPointer")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"AnyTypeStaticPointer")
	}
	static class UAnyTypeStaticPointer* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnyTypeStaticPointer>();
	}
};
DUMPER7_ASSERTS_UAnyTypeStaticPointer;

// Class NeoUI.NeoUITileView
// 0x0038 (0x03C0 - 0x0388)
class UNeoUITileView : public UTileView
{
public:
	uint8                                         Pad_388[0x38];                                     // 0x0388(0x0038)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	class UWidget* FindFirstElement();
	bool FocusByDataIndex(int32 Index_0);
	void HandleEntryInitialized(class UObject* ItemWidget);
	class UWidget* ResetAndFocus();
	void ResetAndScrollToTop();

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("NeoUITileView")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NeoUITileView")
	}
	static class UNeoUITileView* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNeoUITileView>();
	}
};
DUMPER7_ASSERTS_UNeoUITileView;

// Class NeoUI.NeoUITileView_CustomScrollBar
// 0x04E0 (0x08A0 - 0x03C0)
class UNeoUITileView_CustomScrollBar : public UNeoUITileView
{
public:
	uint8                                         Pad_3C0[0x4E0];                                    // 0x03C0(0x04E0)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("NeoUITileView_CustomScrollBar")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NeoUITileView_CustomScrollBar")
	}
	static class UNeoUITileView_CustomScrollBar* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNeoUITileView_CustomScrollBar>();
	}
};
DUMPER7_ASSERTS_UNeoUITileView_CustomScrollBar;

// Class NeoUI.NeoUILayerViewBase
// 0x0010 (0x0370 - 0x0360)
class UNeoUILayerViewBase : public UNeoUIUniversalModuleViewBase
{
public:
	uint8                                         Pad_360[0x10];                                     // 0x0360(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	class UCanvasPanelSlot* GetLayerSlot();

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("NeoUILayerViewBase")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NeoUILayerViewBase")
	}
	static class UNeoUILayerViewBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNeoUILayerViewBase>();
	}
};
DUMPER7_ASSERTS_UNeoUILayerViewBase;

// Class NeoUI.NeoUIDataModelBase
// 0x0018 (0x0040 - 0x0028)
class UNeoUIDataModelBase : public UObject
{
public:
	uint8                                         Pad_28[0x18];                                      // 0x0028(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("NeoUIDataModelBase")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NeoUIDataModelBase")
	}
	static class UNeoUIDataModelBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNeoUIDataModelBase>();
	}
};
DUMPER7_ASSERTS_UNeoUIDataModelBase;

// Class NeoUI.NeoUIModuleViewBase
// 0x0008 (0x0378 - 0x0370)
class UNeoUIModuleViewBase : public UNeoUILayerViewBase
{
public:
	bool                                          bAllowSublayerInteraction;                         // 0x0370(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bPauseGameForThisMdule;                            // 0x0371(0x0001)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bPauseGameInvolved;                                // 0x0372(0x0001)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bDisableMouseRightButtonCloseModule;               // 0x0373(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_374[0x4];                                      // 0x0374(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("NeoUIModuleViewBase")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NeoUIModuleViewBase")
	}
	static class UNeoUIModuleViewBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNeoUIModuleViewBase>();
	}
};
DUMPER7_ASSERTS_UNeoUIModuleViewBase;

// Class NeoUI.NeoUILayerVMBase
// 0x0010 (0x0160 - 0x0150)
class UNeoUILayerVMBase : public UNeoUIUniversalModuleVMBase
{
public:
	uint8                                         Pad_150[0x8];                                      // 0x0150(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         mutex_id;                                          // 0x0158(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_15C[0x4];                                      // 0x015C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("NeoUILayerVMBase")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NeoUILayerVMBase")
	}
	static class UNeoUILayerVMBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNeoUILayerVMBase>();
	}
};
DUMPER7_ASSERTS_UNeoUILayerVMBase;

// Class NeoUI.NeoUIModuleVMBase
// 0x0010 (0x0170 - 0x0160)
class UNeoUIModuleVMBase : public UNeoUILayerVMBase
{
public:
	uint8                                         Pad_160[0x10];                                     // 0x0160(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	bool IsModuleDestroyable() const;

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("NeoUIModuleVMBase")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NeoUIModuleVMBase")
	}
	static class UNeoUIModuleVMBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNeoUIModuleVMBase>();
	}
};
DUMPER7_ASSERTS_UNeoUIModuleVMBase;

// Class NeoUI.AnyTypeLightweightPointer
// 0x0000 (0x00D8 - 0x00D8)
class UAnyTypeLightweightPointer final : public UAnyTypeUniversalPointerBase
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("AnyTypeLightweightPointer")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"AnyTypeLightweightPointer")
	}
	static class UAnyTypeLightweightPointer* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnyTypeLightweightPointer>();
	}
};
DUMPER7_ASSERTS_UAnyTypeLightweightPointer;

// Class NeoUI.NeoUIPureCPPVMBase
// 0x0000 (0x0170 - 0x0170)
class UNeoUIPureCPPVMBase : public UNeoUIModuleVMBase
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("NeoUIPureCPPVMBase")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NeoUIPureCPPVMBase")
	}
	static class UNeoUIPureCPPVMBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNeoUIPureCPPVMBase>();
	}
};
DUMPER7_ASSERTS_UNeoUIPureCPPVMBase;

// Class NeoUI.NeoUIGestureResponder
// 0x0080 (0x0358 - 0x02D8)
class UNeoUIGestureResponder : public UNeoUIVisualElementBase
{
public:
	uint8                                         Pad_2D8[0x10];                                     // 0x02D8(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerEvent                          CurEvt;                                            // 0x02E8(0x0070)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic)

public:
	void BP_DELAY_CB();
	void EVT_BP_DELAY_START();
	void EVT_Gesture_Drop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void EVT_Gesture_LongPress(const struct FPointerEvent& InMouseEvent);
	void EVT_Gesture_SingleTap(const struct FPointerEvent& InMouseEvent);
	const struct FPointerEvent GetCurPointerEvt();

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("NeoUIGestureResponder")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NeoUIGestureResponder")
	}
	static class UNeoUIGestureResponder* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNeoUIGestureResponder>();
	}
};
DUMPER7_ASSERTS_UNeoUIGestureResponder;

// Class NeoUI.NeoUIConfigBase
// 0x0000 (0x0028 - 0x0028)
class UNeoUIConfigBase : public UObject
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("NeoUIConfigBase")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NeoUIConfigBase")
	}
	static class UNeoUIConfigBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNeoUIConfigBase>();
	}
};
DUMPER7_ASSERTS_UNeoUIConfigBase;

// Class NeoUI.BlankNeoUIUniversalModuleView
// 0x0000 (0x0360 - 0x0360)
class UBlankNeoUIUniversalModuleView : public UNeoUIUniversalModuleViewBase
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("BlankNeoUIUniversalModuleView")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BlankNeoUIUniversalModuleView")
	}
	static class UBlankNeoUIUniversalModuleView* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBlankNeoUIUniversalModuleView>();
	}
};
DUMPER7_ASSERTS_UBlankNeoUIUniversalModuleView;

// Class NeoUI.NeoUILayerConfig
// 0x0110 (0x0138 - 0x0028)
class UNeoUILayerConfig : public UObject
{
public:
	uint8                                         Pad_28[0xF0];                                      // 0x0028(0x00F0)(Fixing Size After Last Property [ Dumper-7 ])
	struct FNeoUILayerMetadata                    DefaultReversationMetadata;                        // 0x0118(0x0020)(Protected, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("NeoUILayerConfig")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NeoUILayerConfig")
	}
	static class UNeoUILayerConfig* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNeoUILayerConfig>();
	}
};
DUMPER7_ASSERTS_UNeoUILayerConfig;

// Class NeoUI.NeoUILayerConfigImpl
// 0x0020 (0x0158 - 0x0138)
class UNeoUILayerConfigImpl : public UNeoUILayerConfig
{
public:
	struct FNeoUILayerMetadata                    TopDebugLayer;                                     // 0x0138(0x0020)(NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("NeoUILayerConfigImpl")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NeoUILayerConfigImpl")
	}
	static class UNeoUILayerConfigImpl* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNeoUILayerConfigImpl>();
	}
};
DUMPER7_ASSERTS_UNeoUILayerConfigImpl;

// Class NeoUI.NeoUICommonObjectPoolNode
// 0x0010 (0x0038 - 0x0028)
class UNeoUICommonObjectPoolNode final : public UObject
{
public:
	uint8                                         Pad_28[0x8];                                       // 0x0028(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                NodeElement;                                       // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("NeoUICommonObjectPoolNode")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NeoUICommonObjectPoolNode")
	}
	static class UNeoUICommonObjectPoolNode* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNeoUICommonObjectPoolNode>();
	}
};
DUMPER7_ASSERTS_UNeoUICommonObjectPoolNode;

// Class NeoUI.BlankNeoUIUniversalModuleVM
// 0x0000 (0x0150 - 0x0150)
class UBlankNeoUIUniversalModuleVM : public UNeoUIUniversalModuleVMBase
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("BlankNeoUIUniversalModuleVM")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BlankNeoUIUniversalModuleVM")
	}
	static class UBlankNeoUIUniversalModuleVM* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBlankNeoUIUniversalModuleVM>();
	}
};
DUMPER7_ASSERTS_UBlankNeoUIUniversalModuleVM;

// Class NeoUI.NeoUICommonDataModel
// 0x0000 (0x0040 - 0x0040)
class UNeoUICommonDataModel final : public UNeoUIDataModelBase
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("NeoUICommonDataModel")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NeoUICommonDataModel")
	}
	static class UNeoUICommonDataModel* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNeoUICommonDataModel>();
	}
};
DUMPER7_ASSERTS_UNeoUICommonDataModel;

// Class NeoUI.NeoUI1Btn1TxtComp
// 0x02A0 (0x0578 - 0x02D8)
class UNeoUI1Btn1TxtComp : public UNeoUIVisualElementBase
{
public:
	class FText                                   TXT_Title;                                         // 0x02D8(0x0018)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FButtonStyle                           BTN_Style;                                         // 0x02F0(0x0278)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class UNeoUITextBlockBase*                    txt;                                               // 0x0568(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNeoUIButtonBase*                       Btn;                                               // 0x0570(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void GotoDisableStatus();
	void GotoNormalStatus();
	void UpdateTitle(const class FText& TxtCont);

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("NeoUI1Btn1TxtComp")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NeoUI1Btn1TxtComp")
	}
	static class UNeoUI1Btn1TxtComp* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNeoUI1Btn1TxtComp>();
	}
};
DUMPER7_ASSERTS_UNeoUI1Btn1TxtComp;

// Class NeoUI.NeoUI1Btn1Text1ImgComp
// 0x0330 (0x0608 - 0x02D8)
class UNeoUI1Btn1Text1ImgComp : public UNeoUIVisualElementBase
{
public:
	class FText                                   TXT_Title;                                         // 0x02D8(0x0018)(Edit, NativeAccessSpecifierPublic)
	struct FButtonStyle                           BTN_Style;                                         // 0x02F0(0x0278)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                            IMG_Style;                                         // 0x0568(0x0088)(Edit, NativeAccessSpecifierPublic)
	class UNeoUITextBlockBase*                    txt;                                               // 0x05F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNeoUIButtonBase*                       Btn;                                               // 0x05F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNeoUIImageBase*                        IMG;                                               // 0x0600(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("NeoUI1Btn1Text1ImgComp")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NeoUI1Btn1Text1ImgComp")
	}
	static class UNeoUI1Btn1Text1ImgComp* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNeoUI1Btn1Text1ImgComp>();
	}
};
DUMPER7_ASSERTS_UNeoUI1Btn1Text1ImgComp;

// Class NeoUI.NeoUIConfigableClassRegisterCenter
// 0x0008 (0x0030 - 0x0028)
class UNeoUIConfigableClassRegisterCenter : public UObject
{
public:
	TSubclassOf<class UNeoUIInternalStyleConfig>  StyleConfig;                                       // 0x0028(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("NeoUIConfigableClassRegisterCenter")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NeoUIConfigableClassRegisterCenter")
	}
	static class UNeoUIConfigableClassRegisterCenter* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNeoUIConfigableClassRegisterCenter>();
	}
};
DUMPER7_ASSERTS_UNeoUIConfigableClassRegisterCenter;

// Class NeoUI.NeoUIReusableVisualEntry
// 0x0018 (0x02F0 - 0x02D8)
class UNeoUIReusableVisualEntry : public UNeoUIVisualElementBase
{
public:
	uint8                                         Pad_2D8[0x8];                                      // 0x02D8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	TWeakObjectPtr<class UObject>                 BindedDataObject;                                  // 0x02E0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UNeoUIUniversalModuleVMBase> LocalResponder;                                // 0x02E8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

public:
	void EVT_Gamepad_Active();
	void EVT_Gamepad_Deactive();
	class UObject* GetBindedDataObj();

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("NeoUIReusableVisualEntry")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NeoUIReusableVisualEntry")
	}
	static class UNeoUIReusableVisualEntry* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNeoUIReusableVisualEntry>();
	}
};
DUMPER7_ASSERTS_UNeoUIReusableVisualEntry;

// Class NeoUI.MyGameInstance
// 0x0018 (0x01C0 - 0x01A8)
class UMyGameInstance final : public UGameInstance
{
public:
	uint8                                         Pad_1A8[0x8];                                      // 0x01A8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class UNeoUIMetadataConfigImpl>   NeoUIConfigClass;                                  // 0x01B0(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UNeoUILayerConfigImpl>      NeoUILayerConfigClass;                             // 0x01B8(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MyGameInstance")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MyGameInstance")
	}
	static class UMyGameInstance* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMyGameInstance>();
	}
};
DUMPER7_ASSERTS_UMyGameInstance;

// Class NeoUI.NeoUI2ImgComp
// 0x0120 (0x03F8 - 0x02D8)
class UNeoUI2ImgComp : public UNeoUIVisualElementBase
{
public:
	struct FSlateBrush                            IMG_Style1;                                        // 0x02D8(0x0088)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FSlateBrush                            IMG_Style2;                                        // 0x0360(0x0088)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class UNeoUIImageBase*                        IMG1;                                              // 0x03E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNeoUIImageBase*                        IMG2;                                              // 0x03F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("NeoUI2ImgComp")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NeoUI2ImgComp")
	}
	static class UNeoUI2ImgComp* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNeoUI2ImgComp>();
	}
};
DUMPER7_ASSERTS_UNeoUI2ImgComp;

// Class NeoUI.NeoUIImageBase
// 0x0018 (0x0228 - 0x0210)
class UNeoUIImageBase : public UImage
{
public:
	bool                                          ConsoleKey;                                        // 0x0210(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_211[0x7];                                      // 0x0211(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 ResId;                                             // 0x0218(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void SetVisual_AsContainer(bool isVisual);
	void SetVisual_PureDisplay(bool isVisual);
	void SetVisual_UserInteraction(bool isVisual);

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("NeoUIImageBase")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NeoUIImageBase")
	}
	static class UNeoUIImageBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNeoUIImageBase>();
	}
};
DUMPER7_ASSERTS_UNeoUIImageBase;

// Class NeoUI.NeoUITimerBase
// 0x00A8 (0x00D0 - 0x0028)
class UNeoUITimerBase : public UObject
{
public:
	uint8                                         Pad_28[0xA8];                                      // 0x0028(0x00A8)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("NeoUITimerBase")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NeoUITimerBase")
	}
	static class UNeoUITimerBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNeoUITimerBase>();
	}
};
DUMPER7_ASSERTS_UNeoUITimerBase;

// Class NeoUI.NeoUITimer_Finite
// 0x0000 (0x00D0 - 0x00D0)
class UNeoUITimer_Finite final : public UNeoUITimerBase
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("NeoUITimer_Finite")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NeoUITimer_Finite")
	}
	static class UNeoUITimer_Finite* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNeoUITimer_Finite>();
	}
};
DUMPER7_ASSERTS_UNeoUITimer_Finite;

// Class NeoUI.NeoUIReusableVisualEntryWithDataTransformer
// 0x0008 (0x02F8 - 0x02F0)
class UNeoUIReusableVisualEntryWithDataTransformer : public UNeoUIReusableVisualEntry
{
public:
	uint8                                         Pad_2F0[0x8];                                      // 0x02F0(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void ForceConvertAndRender();

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("NeoUIReusableVisualEntryWithDataTransformer")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NeoUIReusableVisualEntryWithDataTransformer")
	}
	static class UNeoUIReusableVisualEntryWithDataTransformer* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNeoUIReusableVisualEntryWithDataTransformer>();
	}
};
DUMPER7_ASSERTS_UNeoUIReusableVisualEntryWithDataTransformer;

// Class NeoUI.NeoUI2TxtComp
// 0x00F0 (0x03C8 - 0x02D8)
class UNeoUI2TxtComp : public UNeoUIVisualElementBase
{
public:
	uint8                                         Pad_2D8[0xB0];                                     // 0x02D8(0x00B0)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Title1;                                            // 0x0388(0x0018)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                   Title2;                                            // 0x03A0(0x0018)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class UNeoUITextBlockBase*                    TXT1;                                              // 0x03B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNeoUITextBlockBase*                    TXT2;                                              // 0x03C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void UpdateTitle1(const class FText& NewValue);
	void UpdateTitle2(const class FText& NewValue);

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("NeoUI2TxtComp")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NeoUI2TxtComp")
	}
	static class UNeoUI2TxtComp* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNeoUI2TxtComp>();
	}
};
DUMPER7_ASSERTS_UNeoUI2TxtComp;

// Class NeoUI.NeoUIGamepadFocusManager
// 0x0048 (0x0070 - 0x0028)
class UNeoUIGamepadFocusManager : public UObject
{
public:
	class UInputTransmitNode_GameRoot*            GameRootNode;                                      // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UObject*>                        NodePath;                                          // 0x0030(0x0010)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                         Pad_40[0x10];                                      // 0x0040(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	TMulticastInlineDelegate<void(const class FString& FromModule)> StatusMSG_BackToTheRoot;         // 0x0050(0x0010)(ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void(const class FString& FromModule)> StatusMSG_OverlayOccured;        // 0x0060(0x0010)(ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)

public:
	void WidgetFocusLost(class UWidget* WidgetObj);
	void WidgetFocusReceived(class UWidget* WidgetObj);

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("NeoUIGamepadFocusManager")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NeoUIGamepadFocusManager")
	}
	static class UNeoUIGamepadFocusManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNeoUIGamepadFocusManager>();
	}
};
DUMPER7_ASSERTS_UNeoUIGamepadFocusManager;

// Class NeoUI.NeoUI1Img2TxtComp
// 0x0090 (0x0458 - 0x03C8)
class UNeoUI1Img2TxtComp : public UNeoUI2TxtComp
{
public:
	struct FSlateBrush                            IMG_Style;                                         // 0x03C8(0x0088)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class UNeoUIImageBase*                        IMG;                                               // 0x0450(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void UpdateImage(class UTexture2D* BrushTXT2D);

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("NeoUI1Img2TxtComp")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NeoUI1Img2TxtComp")
	}
	static class UNeoUI1Img2TxtComp* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNeoUI1Img2TxtComp>();
	}
};
DUMPER7_ASSERTS_UNeoUI1Img2TxtComp;

// Class NeoUI.GamepadActiveAreaGlobalNavigatorOwner
// 0x0000 (0x0000 - 0x0000)
class IGamepadActiveAreaGlobalNavigatorOwner final
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("GamepadActiveAreaGlobalNavigatorOwner")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"GamepadActiveAreaGlobalNavigatorOwner")
	}
	static class IGamepadActiveAreaGlobalNavigatorOwner* GetDefaultObj()
	{
		return GetDefaultObjImpl<IGamepadActiveAreaGlobalNavigatorOwner>();
	}

	class UObject* AsUObject()
	{
		return reinterpret_cast<UObject*>(this);
	}
	const class UObject* AsUObject() const
	{
		return reinterpret_cast<const UObject*>(this);
	}
};
DUMPER7_ASSERTS_IGamepadActiveAreaGlobalNavigatorOwner;

// Class NeoUI.NeoUI1Btn1ImgComp
// 0x0310 (0x05E8 - 0x02D8)
class UNeoUI1Btn1ImgComp : public UNeoUIVisualElementBase
{
public:
	struct FButtonStyle                           BTN_Style;                                         // 0x02D8(0x0278)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                            IMG_Style;                                         // 0x0550(0x0088)(Edit, NativeAccessSpecifierPublic)
	class UNeoUIButtonBase*                       Btn;                                               // 0x05D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNeoUIImageBase*                        IMG;                                               // 0x05E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("NeoUI1Btn1ImgComp")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NeoUI1Btn1ImgComp")
	}
	static class UNeoUI1Btn1ImgComp* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNeoUI1Btn1ImgComp>();
	}
};
DUMPER7_ASSERTS_UNeoUI1Btn1ImgComp;

// Class NeoUI.NeoUIGamepadConfirmButtonWrapperBase
// 0x0038 (0x02A8 - 0x0270)
class UNeoUIGamepadConfirmButtonWrapperBase : public UNeoUIComponentBase
{
public:
	uint8                                         Pad_270[0x18];                                     // 0x0270(0x0018)(Fixing Size After Last Property [ Dumper-7 ])
	struct FNeoUIInputFocusableAreaData           IFAData;                                           // 0x0288(0x0020)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

public:
	void ModifyIFATag(const class FString& TagStr);

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("NeoUIGamepadConfirmButtonWrapperBase")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NeoUIGamepadConfirmButtonWrapperBase")
	}
	static class UNeoUIGamepadConfirmButtonWrapperBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNeoUIGamepadConfirmButtonWrapperBase>();
	}
};
DUMPER7_ASSERTS_UNeoUIGamepadConfirmButtonWrapperBase;

// Class NeoUI.GamepadActiveAreaDisplay
// 0x0020 (0x0280 - 0x0260)
class UGamepadActiveAreaDisplay : public UUserWidget
{
public:
	struct FNeoUIInputFocusableAreaData           AreaData;                                          // 0x0260(0x0020)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("GamepadActiveAreaDisplay")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"GamepadActiveAreaDisplay")
	}
	static class UGamepadActiveAreaDisplay* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGamepadActiveAreaDisplay>();
	}
};
DUMPER7_ASSERTS_UGamepadActiveAreaDisplay;

// Class NeoUI.NeoUIMetadataConfig
// 0x0050 (0x0078 - 0x0028)
class UNeoUIMetadataConfig : public UObject
{
public:
	uint8                                         Pad_28[0x50];                                      // 0x0028(0x0050)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("NeoUIMetadataConfig")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NeoUIMetadataConfig")
	}
	static class UNeoUIMetadataConfig* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNeoUIMetadataConfig>();
	}
};
DUMPER7_ASSERTS_UNeoUIMetadataConfig;

// Class NeoUI.NeoUIMetadataConfigImpl
// 0x0028 (0x00A0 - 0x0078)
class UNeoUIMetadataConfigImpl : public UNeoUIMetadataConfig
{
public:
	struct FNeoUIModuleMD_Vcpp_VMcpp              TopLevelDebug;                                     // 0x0078(0x0028)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("NeoUIMetadataConfigImpl")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NeoUIMetadataConfigImpl")
	}
	static class UNeoUIMetadataConfigImpl* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNeoUIMetadataConfigImpl>();
	}
};
DUMPER7_ASSERTS_UNeoUIMetadataConfigImpl;

// Class NeoUI.AnyTypeCommonUtil
// 0x0000 (0x0028 - 0x0028)
class UAnyTypeCommonUtil final : public UBlueprintFunctionLibrary
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("AnyTypeCommonUtil")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"AnyTypeCommonUtil")
	}
	static class UAnyTypeCommonUtil* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnyTypeCommonUtil>();
	}
};
DUMPER7_ASSERTS_UAnyTypeCommonUtil;

// Class NeoUI.AnyTypePointerCursor
// 0x0040 (0x0118 - 0x00D8)
class UAnyTypePointerCursor final : public UAnyTypeUniversalPointerBase
{
public:
	uint8                                         Pad_D8[0x40];                                      // 0x00D8(0x0040)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void ClearArray();
	TArray<class UAnyTypeStaticPointer*> GeneratePointersArray();
	void MoveToArrayByKey(class UAnyTypeUniversalPointerBase* Pointer, const class FString& Key);
	void MoveToArrayByPath(class UAnyTypeUniversalPointerBase* Pointer, const class FString& Path);
	void MoveToArrayElementByIndex(class UAnyTypeUniversalPointerBase* Pointer, int32 ElementIndex);
	void MoveToArrayElementByPath(class UAnyTypeUniversalPointerBase* Pointer, const class FString& array_path, int32 ElementIndex);
	void MoveToObjectByKey(class UAnyTypeUniversalPointerBase* Pointer, const class FString& Key);
	void MoveToObjectByPath(class UAnyTypeUniversalPointerBase* Pointer, const class FString& Path);
	class UAnyTypeStaticPointer* NewElementPointer(int32 AtIndex);

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("AnyTypePointerCursor")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"AnyTypePointerCursor")
	}
	static class UAnyTypePointerCursor* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnyTypePointerCursor>();
	}
};
DUMPER7_ASSERTS_UAnyTypePointerCursor;

// Class NeoUI.GamepadActiveAreaGlobalNavigator
// 0x00D8 (0x0100 - 0x0028)
class UGamepadActiveAreaGlobalNavigator final : public UObject
{
public:
	uint8                                         Pad_28[0x8];                                       // 0x0028(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UGamepadActiveAreaDisplay*>      Areas;                                             // 0x0030(0x0010)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class UWidget*                                CurrentNativeFocusWidget;                          // 0x0040(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_48[0x8];                                       // 0x0048(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         GamepadRegionIDList;                               // 0x0050(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<class FString, class UWidget*>           GamepadRegionConfig;                               // 0x0060(0x0050)(ExportObject, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TMap<class FString, class UWidget*>           GamepadRegionDisplay;                              // 0x00B0(0x0050)(ExportObject, ContainsInstancedReference, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("GamepadActiveAreaGlobalNavigator")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"GamepadActiveAreaGlobalNavigator")
	}
	static class UGamepadActiveAreaGlobalNavigator* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGamepadActiveAreaGlobalNavigator>();
	}
};
DUMPER7_ASSERTS_UGamepadActiveAreaGlobalNavigator;

// Class NeoUI.GamepadFocusListener
// 0x0000 (0x0000 - 0x0000)
class IGamepadFocusListener final
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("GamepadFocusListener")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"GamepadFocusListener")
	}
	static class IGamepadFocusListener* GetDefaultObj()
	{
		return GetDefaultObjImpl<IGamepadFocusListener>();
	}

	class UObject* AsUObject()
	{
		return reinterpret_cast<UObject*>(this);
	}
	const class UObject* AsUObject() const
	{
		return reinterpret_cast<const UObject*>(this);
	}
};
DUMPER7_ASSERTS_IGamepadFocusListener;

// Class NeoUI.GamepadLayoutManager
// 0x0060 (0x0088 - 0x0028)
class UGamepadLayoutManager final : public UObject
{
public:
	class UDataTable*                             CurrentRawLayout;                                  // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<class FName, struct FGamepadLayoutItem>  LayoutData;                                        // 0x0030(0x0050)(Protected, NativeAccessSpecifierProtected)
	uint8                                         Pad_80[0x8];                                       // 0x0080(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("GamepadLayoutManager")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"GamepadLayoutManager")
	}
	static class UGamepadLayoutManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGamepadLayoutManager>();
	}
};
DUMPER7_ASSERTS_UGamepadLayoutManager;

// Class NeoUI.InputTransmitNode
// 0x0000 (0x0000 - 0x0000)
class IInputTransmitNode final
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("InputTransmitNode")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"InputTransmitNode")
	}
	static class IInputTransmitNode* GetDefaultObj()
	{
		return GetDefaultObjImpl<IInputTransmitNode>();
	}

	class UObject* AsUObject()
	{
		return reinterpret_cast<UObject*>(this);
	}
	const class UObject* AsUObject() const
	{
		return reinterpret_cast<const UObject*>(this);
	}
};
DUMPER7_ASSERTS_IInputTransmitNode;

// Class NeoUI.InputTransmitNode_GameRoot
// 0x0010 (0x0038 - 0x0028)
class UInputTransmitNode_GameRoot final : public UObject
{
public:
	uint8                                         Pad_28[0x10];                                      // 0x0028(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("InputTransmitNode_GameRoot")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"InputTransmitNode_GameRoot")
	}
	static class UInputTransmitNode_GameRoot* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInputTransmitNode_GameRoot>();
	}
};
DUMPER7_ASSERTS_UInputTransmitNode_GameRoot;

// Class NeoUI.NeoUIButtonBase
// 0x0000 (0x0428 - 0x0428)
class UNeoUIButtonBase : public UButton
{
public:
	void SetVisual_AsContainer(bool isVisual);
	void SetVisual_PureDisplay(bool isVisual);
	void SetVisual_UserInteraction(bool isVisual);

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("NeoUIButtonBase")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NeoUIButtonBase")
	}
	static class UNeoUIButtonBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNeoUIButtonBase>();
	}
};
DUMPER7_ASSERTS_UNeoUIButtonBase;

// Class NeoUI.NeoUICanvasPanelBase
// 0x0000 (0x0130 - 0x0130)
class UNeoUICanvasPanelBase final : public UCanvasPanel
{
public:
	void SetVisual_AsContainer(bool isVisual);
	void SetVisual_PureDisplay(bool isVisual);
	void SetVisual_UserInteraction(bool isVisual);

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("NeoUICanvasPanelBase")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NeoUICanvasPanelBase")
	}
	static class UNeoUICanvasPanelBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNeoUICanvasPanelBase>();
	}
};
DUMPER7_ASSERTS_UNeoUICanvasPanelBase;

// Class NeoUI.NeoUICommonObjectPool
// 0x0058 (0x0080 - 0x0028)
class alignas(0x10) UNeoUICommonObjectPool final : public UObject
{
public:
	uint8                                         Pad_28[0x48];                                      // 0x0028(0x0048)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UNeoUICommonObjectPoolNode*>     PoolValut;                                         // 0x0070(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("NeoUICommonObjectPool")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NeoUICommonObjectPool")
	}
	static class UNeoUICommonObjectPool* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNeoUICommonObjectPool>();
	}
};
DUMPER7_ASSERTS_UNeoUICommonObjectPool;

// Class NeoUI.NeoUIDeviceUtil
// 0x0000 (0x0028 - 0x0028)
class UNeoUIDeviceUtil final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("NeoUIDeviceUtil")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NeoUIDeviceUtil")
	}
	static class UNeoUIDeviceUtil* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNeoUIDeviceUtil>();
	}
};
DUMPER7_ASSERTS_UNeoUIDeviceUtil;

// Class NeoUI.NeoUIDispatcher
// 0x0000 (0x00D0 - 0x00D0)
class UNeoUIDispatcher final : public UNeoUITimerBase
{
public:
	void DelayCallback();

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("NeoUIDispatcher")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NeoUIDispatcher")
	}
	static class UNeoUIDispatcher* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNeoUIDispatcher>();
	}
};
DUMPER7_ASSERTS_UNeoUIDispatcher;

// Class NeoUI.NeoUIEditableText
// 0x0000 (0x0460 - 0x0460)
class UNeoUIEditableText final : public UEditableText
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("NeoUIEditableText")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NeoUIEditableText")
	}
	static class UNeoUIEditableText* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNeoUIEditableText>();
	}
};
DUMPER7_ASSERTS_UNeoUIEditableText;

// Class NeoUI.NeoUIGamepadConfirmButton
// 0x0000 (0x0428 - 0x0428)
class UNeoUIGamepadConfirmButton final : public UNeoUIButtonBase
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("NeoUIGamepadConfirmButton")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NeoUIGamepadConfirmButton")
	}
	static class UNeoUIGamepadConfirmButton* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNeoUIGamepadConfirmButton>();
	}
};
DUMPER7_ASSERTS_UNeoUIGamepadConfirmButton;

// Class NeoUI.NeoUIGamepadFocusManager_Console
// 0x0000 (0x0070 - 0x0070)
class UNeoUIGamepadFocusManager_Console final : public UNeoUIGamepadFocusManager
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("NeoUIGamepadFocusManager_Console")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NeoUIGamepadFocusManager_Console")
	}
	static class UNeoUIGamepadFocusManager_Console* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNeoUIGamepadFocusManager_Console>();
	}
};
DUMPER7_ASSERTS_UNeoUIGamepadFocusManager_Console;

// Class NeoUI.NeoUIGamepadFocusManager_PC
// 0x0000 (0x0070 - 0x0070)
class UNeoUIGamepadFocusManager_PC final : public UNeoUIGamepadFocusManager
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("NeoUIGamepadFocusManager_PC")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NeoUIGamepadFocusManager_PC")
	}
	static class UNeoUIGamepadFocusManager_PC* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNeoUIGamepadFocusManager_PC>();
	}
};
DUMPER7_ASSERTS_UNeoUIGamepadFocusManager_PC;

// Class NeoUI.NeoUIGamepadInputUtilLibrary
// 0x0000 (0x0028 - 0x0028)
class UNeoUIGamepadInputUtilLibrary final : public UBlueprintFunctionLibrary
{
public:
	static float UIFocusDefaultDelay();

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("NeoUIGamepadInputUtilLibrary")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NeoUIGamepadInputUtilLibrary")
	}
	static class UNeoUIGamepadInputUtilLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNeoUIGamepadInputUtilLibrary>();
	}
};
DUMPER7_ASSERTS_UNeoUIGamepadInputUtilLibrary;

// Class NeoUI.NeoUIGamepadManager
// 0x0020 (0x0048 - 0x0028)
class UNeoUIGamepadManager : public UObject
{
public:
	uint8                                         Pad_28[0x8];                                       // 0x0028(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class UNeoUIGamepadPlatformManager*           Platform;                                          // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_38[0x10];                                      // 0x0038(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("NeoUIGamepadManager")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NeoUIGamepadManager")
	}
	static class UNeoUIGamepadManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNeoUIGamepadManager>();
	}
};
DUMPER7_ASSERTS_UNeoUIGamepadManager;

// Class NeoUI.NeoUIGamepadManager_PC
// 0x0000 (0x0048 - 0x0048)
class UNeoUIGamepadManager_PC final : public UNeoUIGamepadManager
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("NeoUIGamepadManager_PC")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NeoUIGamepadManager_PC")
	}
	static class UNeoUIGamepadManager_PC* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNeoUIGamepadManager_PC>();
	}
};
DUMPER7_ASSERTS_UNeoUIGamepadManager_PC;

// Class NeoUI.NeoUIGamepadPlatformManager
// 0x0100 (0x0128 - 0x0028)
class UNeoUIGamepadPlatformManager final : public UObject
{
public:
	uint8                                         Pad_28[0x100];                                     // 0x0028(0x0100)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("NeoUIGamepadPlatformManager")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NeoUIGamepadPlatformManager")
	}
	static class UNeoUIGamepadPlatformManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNeoUIGamepadPlatformManager>();
	}
};
DUMPER7_ASSERTS_UNeoUIGamepadPlatformManager;

// Class NeoUI.NeoUIGlobalInputListener
// 0x0000 (0x0000 - 0x0000)
class INeoUIGlobalInputListener final
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("NeoUIGlobalInputListener")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NeoUIGlobalInputListener")
	}
	static class INeoUIGlobalInputListener* GetDefaultObj()
	{
		return GetDefaultObjImpl<INeoUIGlobalInputListener>();
	}

	class UObject* AsUObject()
	{
		return reinterpret_cast<UObject*>(this);
	}
	const class UObject* AsUObject() const
	{
		return reinterpret_cast<const UObject*>(this);
	}
};
DUMPER7_ASSERTS_INeoUIGlobalInputListener;

// Class NeoUI.NeoUIGlobalInputManager
// 0x0088 (0x00B0 - 0x0028)
class UNeoUIGlobalInputManager final : public UObject
{
public:
	uint8                                         Pad_28[0x10];                                      // 0x0028(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<ENeoUIGamepadButtonType, bool>           KeyDownStatus;                                     // 0x0038(0x0050)(Protected, NativeAccessSpecifierProtected)
	uint8                                         Pad_88[0x28];                                      // 0x0088(0x0028)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	bool IsGamepadMode();

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("NeoUIGlobalInputManager")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NeoUIGlobalInputManager")
	}
	static class UNeoUIGlobalInputManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNeoUIGlobalInputManager>();
	}
};
DUMPER7_ASSERTS_UNeoUIGlobalInputManager;

// Class NeoUI.NeoUIHorizontalBox
// 0x0000 (0x0130 - 0x0130)
class UNeoUIHorizontalBox final : public UHorizontalBox
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("NeoUIHorizontalBox")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NeoUIHorizontalBox")
	}
	static class UNeoUIHorizontalBox* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNeoUIHorizontalBox>();
	}
};
DUMPER7_ASSERTS_UNeoUIHorizontalBox;

// Class NeoUI.NeoUIInputFocusable
// 0x0000 (0x0000 - 0x0000)
class INeoUIInputFocusable final
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("NeoUIInputFocusable")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NeoUIInputFocusable")
	}
	static class INeoUIInputFocusable* GetDefaultObj()
	{
		return GetDefaultObjImpl<INeoUIInputFocusable>();
	}

	class UObject* AsUObject()
	{
		return reinterpret_cast<UObject*>(this);
	}
	const class UObject* AsUObject() const
	{
		return reinterpret_cast<const UObject*>(this);
	}
};
DUMPER7_ASSERTS_INeoUIInputFocusable;

// Class NeoUI.NeoUIInternalStyleConfig
// 0x07D8 (0x0800 - 0x0028)
class UNeoUIInternalStyleConfig : public UNeoUIConfigBase
{
public:
	bool                                          bIsHorizontalLayout;                               // 0x0028(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUseSeparateThumb;                                 // 0x0029(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2A[0x2];                                       // 0x002A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CustomScrollBarThickness;                          // 0x002C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScrollBarStyle                        CustomScrollBarStyle;                              // 0x0030(0x04D0)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FNeoUIFontInfo                         JHDefaultFont;                                     // 0x0500(0x0098)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FNeoUIFontInfo                         JHTitleFont;                                       // 0x0598(0x0098)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FNeoUIL10NFontInfo                     FontL10N_Default;                                  // 0x0630(0x0050)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FNeoUIL10NFontInfo                     FontL10N_Title;                                    // 0x0680(0x0050)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FNeoUIFontInfo                         JHDefaultFont_Console;                             // 0x06D0(0x0098)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FNeoUIFontInfo                         JHTitleFont_Console;                               // 0x0768(0x0098)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("NeoUIInternalStyleConfig")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NeoUIInternalStyleConfig")
	}
	static class UNeoUIInternalStyleConfig* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNeoUIInternalStyleConfig>();
	}
};
DUMPER7_ASSERTS_UNeoUIInternalStyleConfig;

// Class NeoUI.NeoUIL10NCenter
// 0x0000 (0x0028 - 0x0028)
class UNeoUIL10NCenter final : public UObject
{
public:
	static class FString L10N_CurLan();
	static ENeoL10NCode L10N_CurLanCode();

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("NeoUIL10NCenter")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NeoUIL10NCenter")
	}
	static class UNeoUIL10NCenter* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNeoUIL10NCenter>();
	}
};
DUMPER7_ASSERTS_UNeoUIL10NCenter;

// Class NeoUI.NeoUIListView
// 0x0030 (0x0398 - 0x0368)
class UNeoUIListView : public UListView
{
public:
	uint8                                         Pad_368[0x8];                                      // 0x0368(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         DEBUG_FLAG;                                        // 0x0370(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_374[0x24];                                     // 0x0374(0x0024)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void EVT_InitOnce();
	class UUserWidget* GetCurrentItem();
	class UUserWidget* GetEntryForDataIndex(int32 TargetIndex);
	class UUserWidget* GetFirstChild();
	class UObject* GetFirstDataItem();
	class UUserWidget* GetLastChild();
	void HandleEntryInitialized(class UObject* ItemWidget);
	class UWidget* ResetAndFocus();
	void ResetAndScrollToTop();
	void RetrieveFocusForCurrentItem();

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("NeoUIListView")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NeoUIListView")
	}
	static class UNeoUIListView* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNeoUIListView>();
	}
};
DUMPER7_ASSERTS_UNeoUIListView;

// Class NeoUI.NeoUIListView_CustomScrollBar
// 0x04E0 (0x0878 - 0x0398)
class UNeoUIListView_CustomScrollBar : public UNeoUIListView
{
public:
	uint8                                         Pad_398[0x4E0];                                    // 0x0398(0x04E0)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("NeoUIListView_CustomScrollBar")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NeoUIListView_CustomScrollBar")
	}
	static class UNeoUIListView_CustomScrollBar* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNeoUIListView_CustomScrollBar>();
	}
};
DUMPER7_ASSERTS_UNeoUIListView_CustomScrollBar;

// Class NeoUI.NeoUILOGUtil
// 0x0030 (0x0058 - 0x0028)
class UNeoUILOGUtil final : public UObject
{
public:
	uint8                                         Pad_28[0x30];                                      // 0x0028(0x0030)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("NeoUILOGUtil")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NeoUILOGUtil")
	}
	static class UNeoUILOGUtil* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNeoUILOGUtil>();
	}
};
DUMPER7_ASSERTS_UNeoUILOGUtil;

// Class NeoUI.NeoUIManagerBase
// 0x0000 (0x0028 - 0x0028)
class UNeoUIManagerBase final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("NeoUIManagerBase")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NeoUIManagerBase")
	}
	static class UNeoUIManagerBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNeoUIManagerBase>();
	}
};
DUMPER7_ASSERTS_UNeoUIManagerBase;

// Class NeoUI.NeoUIMarshal
// 0x0008 (0x0030 - 0x0028)
class UNeoUIMarshal final : public UNeoUIVMBase
{
public:
	class UNeoUIMarshalView*                      MarshalView;                                       // 0x0028(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("NeoUIMarshal")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NeoUIMarshal")
	}
	static class UNeoUIMarshal* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNeoUIMarshal>();
	}
};
DUMPER7_ASSERTS_UNeoUIMarshal;

// Class NeoUI.NeoUIMarshalCanvasPanel
// 0x0008 (0x0138 - 0x0130)
class UNeoUIMarshalCanvasPanel final : public UCanvasPanel
{
public:
	uint8                                         Pad_130[0x8];                                      // 0x0130(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("NeoUIMarshalCanvasPanel")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NeoUIMarshalCanvasPanel")
	}
	static class UNeoUIMarshalCanvasPanel* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNeoUIMarshalCanvasPanel>();
	}
};
DUMPER7_ASSERTS_UNeoUIMarshalCanvasPanel;

// Class NeoUI.NeoUIMarshalView
// 0x0050 (0x02B8 - 0x0268)
class UNeoUIMarshalView : public UNeoUIVisualBase
{
public:
	uint8                                         Pad_268[0x8];                                      // 0x0268(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class UScaleBox*                              RootScaleBox;                                      // 0x0270(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USizeBox*                               RootSizeBox;                                       // 0x0278(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UOverlay*                               OverlayRoot;                                       // 0x0280(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UNeoUIMarshalCanvasPanel*>       Layers_Low;                                        // 0x0288(0x0010)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TArray<class UNeoUIMarshalCanvasPanel*>       Layers_Main;                                       // 0x0298(0x0010)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TArray<class UNeoUIMarshalCanvasPanel*>       Layers_High;                                       // 0x02A8(0x0010)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("NeoUIMarshalView")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NeoUIMarshalView")
	}
	static class UNeoUIMarshalView* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNeoUIMarshalView>();
	}
};
DUMPER7_ASSERTS_UNeoUIMarshalView;

// Class NeoUI.NeoUIMarshalView_FreeAspectRatio
// 0x0000 (0x02B8 - 0x02B8)
class UNeoUIMarshalView_FreeAspectRatio final : public UNeoUIMarshalView
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("NeoUIMarshalView_FreeAspectRatio")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NeoUIMarshalView_FreeAspectRatio")
	}
	static class UNeoUIMarshalView_FreeAspectRatio* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNeoUIMarshalView_FreeAspectRatio>();
	}
};
DUMPER7_ASSERTS_UNeoUIMarshalView_FreeAspectRatio;

// Class NeoUI.NeoUIMathUtil
// 0x0000 (0x0028 - 0x0028)
class UNeoUIMathUtil final : public UBlueprintFunctionLibrary
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("NeoUIMathUtil")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NeoUIMathUtil")
	}
	static class UNeoUIMathUtil* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNeoUIMathUtil>();
	}
};
DUMPER7_ASSERTS_UNeoUIMathUtil;

// Class NeoUI.NeoUINamedSlot
// 0x0000 (0x0130 - 0x0130)
class UNeoUINamedSlot final : public UNamedSlot
{
public:
	void SetVisual_AsContainer(bool isVisual);
	void SetVisual_PureDisplay(bool isVisual);
	void SetVisual_UserInteraction(bool isVisual);

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("NeoUINamedSlot")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NeoUINamedSlot")
	}
	static class UNeoUINamedSlot* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNeoUINamedSlot>();
	}
};
DUMPER7_ASSERTS_UNeoUINamedSlot;

// Class NeoUI.NeoUIOverlayBase
// 0x0000 (0x0130 - 0x0130)
class UNeoUIOverlayBase final : public UOverlay
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("NeoUIOverlayBase")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NeoUIOverlayBase")
	}
	static class UNeoUIOverlayBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNeoUIOverlayBase>();
	}
};
DUMPER7_ASSERTS_UNeoUIOverlayBase;

// Class NeoUI.NeoUIProjectSettingUtil
// 0x0000 (0x0028 - 0x0028)
class UNeoUIProjectSettingUtil final : public UBlueprintFunctionLibrary
{
public:
	static int32 ConsoleType();
	static int32 PlatformType();

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("NeoUIProjectSettingUtil")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NeoUIProjectSettingUtil")
	}
	static class UNeoUIProjectSettingUtil* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNeoUIProjectSettingUtil>();
	}
};
DUMPER7_ASSERTS_UNeoUIProjectSettingUtil;

// Class NeoUI.NeoUIPureCPPVEBase
// 0x0000 (0x02D8 - 0x02D8)
class UNeoUIPureCPPVEBase final : public UNeoUIVisualElementBase
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("NeoUIPureCPPVEBase")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NeoUIPureCPPVEBase")
	}
	static class UNeoUIPureCPPVEBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNeoUIPureCPPVEBase>();
	}
};
DUMPER7_ASSERTS_UNeoUIPureCPPVEBase;

// Class NeoUI.NeoUIPureCPPViewBase
// 0x0008 (0x0380 - 0x0378)
class UNeoUIPureCPPViewBase : public UNeoUIModuleViewBase
{
public:
	uint8                                         Pad_378[0x8];                                      // 0x0378(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("NeoUIPureCPPViewBase")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NeoUIPureCPPViewBase")
	}
	static class UNeoUIPureCPPViewBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNeoUIPureCPPViewBase>();
	}
};
DUMPER7_ASSERTS_UNeoUIPureCPPViewBase;

// Class NeoUI.NeoUIRichTextBlockBase
// 0x0018 (0x0690 - 0x0678)
class UNeoUIRichTextBlockBase final : public URichTextBlock
{
public:
	bool                                          ForceRefreshAfterTextChanged;                      // 0x0678(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_679[0x7];                                      // 0x0679(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UDataTable*                             TextStyleSetEN;                                    // 0x0680(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                             TextStyleSetCN;                                    // 0x0688(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void UpdateWrapTextAt(float vv);

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("NeoUIRichTextBlockBase")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NeoUIRichTextBlockBase")
	}
	static class UNeoUIRichTextBlockBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNeoUIRichTextBlockBase>();
	}
};
DUMPER7_ASSERTS_UNeoUIRichTextBlockBase;

// Class NeoUI.NeoUIScrollBox
// 0x0000 (0x0880 - 0x0880)
class UNeoUIScrollBox : public UScrollBox
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("NeoUIScrollBox")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NeoUIScrollBox")
	}
	static class UNeoUIScrollBox* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNeoUIScrollBox>();
	}
};
DUMPER7_ASSERTS_UNeoUIScrollBox;

// Class NeoUI.NeoUIScrollBox_CustomScrollBar
// 0x0000 (0x0880 - 0x0880)
class UNeoUIScrollBox_CustomScrollBar final : public UNeoUIScrollBox
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("NeoUIScrollBox_CustomScrollBar")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NeoUIScrollBox_CustomScrollBar")
	}
	static class UNeoUIScrollBox_CustomScrollBar* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNeoUIScrollBox_CustomScrollBar>();
	}
};
DUMPER7_ASSERTS_UNeoUIScrollBox_CustomScrollBar;

// Class NeoUI.NeoUISimpleButton
// 0x0020 (0x0290 - 0x0270)
class UNeoUISimpleButton final : public UNeoUIComponentBase
{
public:
	class FText                                   ButtonTitle;                                       // 0x0270(0x0018)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class UNeoUITextBlockBase*                    TXT_Title;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("NeoUISimpleButton")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NeoUISimpleButton")
	}
	static class UNeoUISimpleButton* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNeoUISimpleButton>();
	}
};
DUMPER7_ASSERTS_UNeoUISimpleButton;

// Class NeoUI.NeoUISubsystem
// 0x0180 (0x01B0 - 0x0030)
class alignas(0x10) UNeoUISubsystem final : public UGameInstanceSubsystem
{
public:
	uint8                                         Pad_30[0x10];                                      // 0x0030(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	class UNeoUIInternalStyleConfig*              StyleConfig;                                       // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void(class FName ModuleID, int32 ShowFlag)> OnModuleShow;               // 0x0048(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void(class FName ModuleID, int32 HideFlag)> OnModuleHide;               // 0x0058(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UNeoUIDeviceUtil*                       DeviceUtil;                                        // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNeoUILOGUtil*                          LogUtil;                                           // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_78[0x90];                                      // 0x0078(0x0090)(Fixing Size After Last Property [ Dumper-7 ])
	class UNeoUIMetadataConfigImpl*               MetadataConfig;                                    // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNeoUILayerConfigImpl*                  LayerConfig;                                       // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNeoUIMarshal*                          Marshal;                                           // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<class FName, class UNeoUIModuleVMBase*>  ModuleInstanceSingularMap;                         // 0x0120(0x0050)(Protected, NativeAccessSpecifierProtected)
	class UNeoUIConfigableClassRegisterCenter*    CCRC;                                              // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UNeoUIModuleVMBase*>             MultipleModuleInstanceArray;                       // 0x0178(0x0010)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class UNeoUIGamepadManager*                   GamepadManager;                                    // 0x0188(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNeoUIGlobalInputManager*               InputManager;                                      // 0x0190(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNeoUIGamepadFocusManager*              FocusManager;                                      // 0x0198(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNeoUIModuleVMBase*                     PendingModuleVM;                                   // 0x01A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGamepadLayoutManager*                  GamepadLayoutManager;                              // 0x01A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

public:
	class UNeoUIGlobalInputManager* GetInputManager();
	void HideAllModules();
	void HideAllModulesExcept(class FName ModuleID);
	void HideAllModulesExceptModuleArr(const TArray<class FName>& ModuleArr);
	void HideModuleSingular(class FName ModuleID);
	void PropagateMessagesToAllModules(class UNeoUIUniversalModuleVMBase* SRC, class FName MessageHeader, const class FString& MessageBody);
	void ShowModules(const TArray<class FName>& ModuleIDs);
	class UNeoUIModuleVMBase* ShowModuleSingular(class FName ModuleID);
	class UNeoUIModuleVMBase* ShowModuleSingularIgnoreFlag(class FName ModuleID);
	void SwitchModuleSingular(class FName ModuleID);

	class UNeoUIModuleVMBase* GetModuleInstance(class FName ModuleID) const;

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("NeoUISubsystem")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NeoUISubsystem")
	}
	static class UNeoUISubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNeoUISubsystem>();
	}
};
DUMPER7_ASSERTS_UNeoUISubsystem;

// Class NeoUI.NeoUISwitcher
// 0x0000 (0x0138 - 0x0138)
class UNeoUISwitcher final : public UWidgetSwitcher
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("NeoUISwitcher")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NeoUISwitcher")
	}
	static class UNeoUISwitcher* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNeoUISwitcher>();
	}
};
DUMPER7_ASSERTS_UNeoUISwitcher;

// Class NeoUI.NeoUITextBlockBase
// 0x00F8 (0x03A0 - 0x02A8)
class UNeoUITextBlockBase final : public UTextBlock
{
public:
	uint8                                         Pad_2A8[0x6];                                      // 0x02A8(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	bool                                          IsConsoleText;                                     // 0x02AE(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2AF[0x1];                                      // 0x02AF(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   T_XBox;                                            // 0x02B0(0x0018)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                   T_PS;                                              // 0x02C8(0x0018)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                   T_Switch;                                          // 0x02E0(0x0018)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FNeoUIL10NFontInfo                     FontL10N_Default;                                  // 0x02F8(0x0050)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FNeoUIL10NFontInfo                     FontL10N_Title;                                    // 0x0348(0x0050)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                          OverrideGlobalStyle;                               // 0x0398(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_399[0x7];                                      // 0x0399(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void SetVisual_AsContainer(bool isVisual);
	void SetVisual_PureDisplay(bool isVisual);
	void SetVisual_UserInteraction(bool isVisual);
	void UpdateWrapTextAt(float vv);

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("NeoUITextBlockBase")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NeoUITextBlockBase")
	}
	static class UNeoUITextBlockBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNeoUITextBlockBase>();
	}
};
DUMPER7_ASSERTS_UNeoUITextBlockBase;

// Class NeoUI.NeoUITimer_Infinite
// 0x0000 (0x00D0 - 0x00D0)
class UNeoUITimer_Infinite final : public UNeoUITimerBase
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("NeoUITimer_Infinite")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NeoUITimer_Infinite")
	}
	static class UNeoUITimer_Infinite* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNeoUITimer_Infinite>();
	}
};
DUMPER7_ASSERTS_UNeoUITimer_Infinite;

// Class NeoUI.NeoUITopLevelDebugView
// 0x0018 (0x0398 - 0x0380)
class UNeoUITopLevelDebugView final : public UNeoUIPureCPPViewBase
{
public:
	class UButton*                                BTN_GC;                                            // 0x0380(0x0008)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UButton*                                BTN_DumpData;                                      // 0x0388(0x0008)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UButton*                                BTN_Foo;                                           // 0x0390(0x0008)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void HandleBtnDumpDataClick();
	void HandleBtnFoo();
	void HandleBtnGCClick();

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("NeoUITopLevelDebugView")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NeoUITopLevelDebugView")
	}
	static class UNeoUITopLevelDebugView* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNeoUITopLevelDebugView>();
	}
};
DUMPER7_ASSERTS_UNeoUITopLevelDebugView;

// Class NeoUI.NeoUITopLevelDebugVM
// 0x0000 (0x0170 - 0x0170)
class UNeoUITopLevelDebugVM final : public UNeoUIPureCPPVMBase
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("NeoUITopLevelDebugVM")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NeoUITopLevelDebugVM")
	}
	static class UNeoUITopLevelDebugVM* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNeoUITopLevelDebugVM>();
	}
};
DUMPER7_ASSERTS_UNeoUITopLevelDebugVM;

// Class NeoUI.NeoUIUtil
// 0x0000 (0x0028 - 0x0028)
class UNeoUIUtil final : public UObject
{
public:
	static struct FLinearColor GetWidgetHoldoutRegion(class UObject* WorldContextObject, class UWidget* VisualObj);
	static class UTexture2D* NeoUI_LoadDynamicTexture(const class FString& TexturePath);
	static bool NeoUI_SetDynamicTextureForImg(class UNeoUIImageBase* IMG, const class FString& TexturePath);

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("NeoUIUtil")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NeoUIUtil")
	}
	static class UNeoUIUtil* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNeoUIUtil>();
	}
};
DUMPER7_ASSERTS_UNeoUIUtil;

// Class NeoUI.NeoUIVerticalBox
// 0x0000 (0x0130 - 0x0130)
class UNeoUIVerticalBox final : public UVerticalBox
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("NeoUIVerticalBox")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NeoUIVerticalBox")
	}
	static class UNeoUIVerticalBox* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNeoUIVerticalBox>();
	}
};
DUMPER7_ASSERTS_UNeoUIVerticalBox;

// Class NeoUI.NSNeoUISpinBox
// 0x0000 (0x0520 - 0x0520)
class UNSNeoUISpinBox final : public USpinBox
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("NSNeoUISpinBox")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NSNeoUISpinBox")
	}
	static class UNSNeoUISpinBox* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNSNeoUISpinBox>();
	}
};
DUMPER7_ASSERTS_UNSNeoUISpinBox;

// Class NeoUI.TwoImageSimpleProgress
// 0x0130 (0x03A0 - 0x0270)
class UTwoImageSimpleProgress final : public UNeoUIComponentBase
{
public:
	float                                         PROG;                                              // 0x0270(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_274[0x4];                                      // 0x0274(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            GrooveBrush;                                       // 0x0278(0x0088)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FSlateBrush                            FrontBrush;                                        // 0x0300(0x0088)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class UNeoUICanvasPanelBase*                  CanvasRoot;                                        // 0x0388(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNeoUIImageBase*                        IMG_Grove;                                         // 0x0390(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNeoUIImageBase*                        IMG_Front;                                         // 0x0398(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("TwoImageSimpleProgress")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"TwoImageSimpleProgress")
	}
	static class UTwoImageSimpleProgress* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTwoImageSimpleProgress>();
	}
};
DUMPER7_ASSERTS_UTwoImageSimpleProgress;

SDK_NAMESPACE_END
