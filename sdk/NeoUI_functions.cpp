#pragma once



// Package: NeoUI

#include "Basic.hpp"

#include "NeoUI_classes.hpp"
#include "NeoUI_parameters.hpp"


SDK_NAMESPACE_START

// Function NeoUI.NeoUIVisualBase.EVT_VisualConstructOnce
// (Event, Public, BlueprintEvent)

void UNeoUIVisualBase::EVT_VisualConstructOnce()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIVisualBase", "EVT_VisualConstructOnce");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NeoUI.NeoUIVisualBase.GetIsInFocusPath
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UNeoUIVisualBase::GetIsInFocusPath()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIVisualBase", "GetIsInFocusPath");

	Params::NeoUIVisualBase_GetIsInFocusPath Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NeoUI.NeoUIPassiveVisualBase.ContainsKey
// (Native, Public, BlueprintCallable)
// Parameters:
// const class FString&                    Key                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UNeoUIPassiveVisualBase::ContainsKey(const class FString& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIPassiveVisualBase", "ContainsKey");

	Params::NeoUIPassiveVisualBase_ContainsKey Parms{};

	Parms.Key = std::move(Key);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NeoUI.NeoUIPassiveVisualBase.GetValueSafe_Bool
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// const class FString&                    Key                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UNeoUIPassiveVisualBase::GetValueSafe_Bool(const class FString& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIPassiveVisualBase", "GetValueSafe_Bool");

	Params::NeoUIPassiveVisualBase_GetValueSafe_Bool Parms{};

	Parms.Key = std::move(Key);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NeoUI.NeoUIPassiveVisualBase.GetValueSafe_Float
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// const class FString&                    Key                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UNeoUIPassiveVisualBase::GetValueSafe_Float(const class FString& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIPassiveVisualBase", "GetValueSafe_Float");

	Params::NeoUIPassiveVisualBase_GetValueSafe_Float Parms{};

	Parms.Key = std::move(Key);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NeoUI.NeoUIPassiveVisualBase.GetValueSafe_Int32
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// const class FString&                    Key                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UNeoUIPassiveVisualBase::GetValueSafe_Int32(const class FString& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIPassiveVisualBase", "GetValueSafe_Int32");

	Params::NeoUIPassiveVisualBase_GetValueSafe_Int32 Parms{};

	Parms.Key = std::move(Key);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NeoUI.NeoUIPassiveVisualBase.GetValueSafe_String
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// const class FString&                    Key                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UNeoUIPassiveVisualBase::GetValueSafe_String(const class FString& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIPassiveVisualBase", "GetValueSafe_String");

	Params::NeoUIPassiveVisualBase_GetValueSafe_String Parms{};

	Parms.Key = std::move(Key);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NeoUI.NeoUIPassiveVisualBase.GetValueSafe_Text
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// const class FString&                    Key                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UNeoUIPassiveVisualBase::GetValueSafe_Text(const class FString& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIPassiveVisualBase", "GetValueSafe_Text");

	Params::NeoUIPassiveVisualBase_GetValueSafe_Text Parms{};

	Parms.Key = std::move(Key);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NeoUI.NeoUIPassiveVisualBase.NewArrayByKey
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// const class FString&                    Key                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAnyTypeStaticPointer*            ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAnyTypeStaticPointer* UNeoUIPassiveVisualBase::NewArrayByKey(const class FString& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIPassiveVisualBase", "NewArrayByKey");

	Params::NeoUIPassiveVisualBase_NewArrayByKey Parms{};

	Parms.Key = std::move(Key);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NeoUI.NeoUIPassiveVisualBase.NewArrayElementByIndex
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                                   ElementIndex                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAnyTypeStaticPointer*            ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAnyTypeStaticPointer* UNeoUIPassiveVisualBase::NewArrayElementByIndex(int32 ElementIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIPassiveVisualBase", "NewArrayElementByIndex");

	Params::NeoUIPassiveVisualBase_NewArrayElementByIndex Parms{};

	Parms.ElementIndex = ElementIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NeoUI.NeoUIPassiveVisualBase.NewObjectByKey
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// const class FString&                    Key                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAnyTypeStaticPointer*            ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAnyTypeStaticPointer* UNeoUIPassiveVisualBase::NewObjectByKey(const class FString& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIPassiveVisualBase", "NewObjectByKey");

	Params::NeoUIPassiveVisualBase_NewObjectByKey Parms{};

	Parms.Key = std::move(Key);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NeoUI.NeoUIPassiveVisualBase.NotifyConsumeData
// (Native, Public, BlueprintCallable)

void UNeoUIPassiveVisualBase::NotifyConsumeData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIPassiveVisualBase", "NotifyConsumeData");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function NeoUI.NeoUIPassiveVisualBase.NotifyConsumeDataForced
// (Native, Public, BlueprintCallable)

void UNeoUIPassiveVisualBase::NotifyConsumeDataForced()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIPassiveVisualBase", "NotifyConsumeDataForced");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function NeoUI.NeoUIPassiveVisualBase.ReceiveModuleMessage
// (Event, Public, BlueprintEvent)
// Parameters:
// class FName                             MessageHeader                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAnyTypeUniversalPointerBase*     MessageBody                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNeoUIPassiveVisualBase::ReceiveModuleMessage(class FName MessageHeader, class UAnyTypeUniversalPointerBase* MessageBody)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIPassiveVisualBase", "ReceiveModuleMessage");

	Params::NeoUIPassiveVisualBase_ReceiveModuleMessage Parms{};

	Parms.MessageHeader = MessageHeader;
	Parms.MessageBody = MessageBody;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NeoUI.NeoUIPassiveVisualBase.SetValueSafe_Bool
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// const class FString&                    Key                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    Value                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UNeoUIPassiveVisualBase::SetValueSafe_Bool(const class FString& Key, bool Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIPassiveVisualBase", "SetValueSafe_Bool");

	Params::NeoUIPassiveVisualBase_SetValueSafe_Bool Parms{};

	Parms.Key = std::move(Key);
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NeoUI.NeoUIPassiveVisualBase.SetValueSafe_Float
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// const class FString&                    Key                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   Value                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UNeoUIPassiveVisualBase::SetValueSafe_Float(const class FString& Key, float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIPassiveVisualBase", "SetValueSafe_Float");

	Params::NeoUIPassiveVisualBase_SetValueSafe_Float Parms{};

	Parms.Key = std::move(Key);
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NeoUI.NeoUIPassiveVisualBase.SetValueSafe_Int32
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// const class FString&                    Key                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   Value                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UNeoUIPassiveVisualBase::SetValueSafe_Int32(const class FString& Key, int32 Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIPassiveVisualBase", "SetValueSafe_Int32");

	Params::NeoUIPassiveVisualBase_SetValueSafe_Int32 Parms{};

	Parms.Key = std::move(Key);
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NeoUI.NeoUIPassiveVisualBase.SetValueSafe_String
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// const class FString&                    Key                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const class FString&                    Value                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UNeoUIPassiveVisualBase::SetValueSafe_String(const class FString& Key, const class FString& Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIPassiveVisualBase", "SetValueSafe_String");

	Params::NeoUIPassiveVisualBase_SetValueSafe_String Parms{};

	Parms.Key = std::move(Key);
	Parms.Value = std::move(Value);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NeoUI.NeoUIPassiveVisualBase.SetValueSafe_Text
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// const class FString&                    Key                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const class FText&                      Value                                                  (Parm, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UNeoUIPassiveVisualBase::SetValueSafe_Text(const class FString& Key, const class FText& Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIPassiveVisualBase", "SetValueSafe_Text");

	Params::NeoUIPassiveVisualBase_SetValueSafe_Text Parms{};

	Parms.Key = std::move(Key);
	Parms.Value = std::move(Value);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NeoUI.NeoUIPassiveVisualBase.GetData
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAnyTypeStaticPointer*            ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAnyTypeStaticPointer* UNeoUIPassiveVisualBase::GetData() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIPassiveVisualBase", "GetData");

	Params::NeoUIPassiveVisualBase_GetData Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NeoUI.NeoUIComponentBase.BP_IsGamepadMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UNeoUIComponentBase::BP_IsGamepadMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIComponentBase", "BP_IsGamepadMode");

	Params::NeoUIComponentBase_BP_IsGamepadMode Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NeoUI.NeoUIComponentBase.EVT_OnMouseEnter
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 InGeometry                                             (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// const struct FPointerEvent&             InMouseEvent                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UNeoUIComponentBase::EVT_OnMouseEnter(const struct FGeometry& InGeometry, const struct FPointerEvent& InMouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIComponentBase", "EVT_OnMouseEnter");

	Params::NeoUIComponentBase_EVT_OnMouseEnter Parms{};

	Parms.InGeometry = std::move(InGeometry);
	Parms.InMouseEvent = std::move(InMouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function NeoUI.NeoUIComponentBase.EVT_OnMouseLeave
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// const struct FPointerEvent&             InMouseEvent                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UNeoUIComponentBase::EVT_OnMouseLeave(const struct FPointerEvent& InMouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIComponentBase", "EVT_OnMouseLeave");

	Params::NeoUIComponentBase_EVT_OnMouseLeave Parms{};

	Parms.InMouseEvent = std::move(InMouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function NeoUI.NeoUIComponentBase.EVT_OnMouseLeftDown
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 InGeometry                                             (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// const struct FPointerEvent&             InMouseEvent                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UNeoUIComponentBase::EVT_OnMouseLeftDown(const struct FGeometry& InGeometry, const struct FPointerEvent& InMouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIComponentBase", "EVT_OnMouseLeftDown");

	Params::NeoUIComponentBase_EVT_OnMouseLeftDown Parms{};

	Parms.InGeometry = std::move(InGeometry);
	Parms.InMouseEvent = std::move(InMouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function NeoUI.NeoUICommonButton.BP_DoubleClick
// (Event, Public, BlueprintEvent)

void UNeoUICommonButton::BP_DoubleClick()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUICommonButton", "BP_DoubleClick");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NeoUI.NeoUICommonButton.BP_MouseEnter
// (Event, Public, BlueprintEvent)

void UNeoUICommonButton::BP_MouseEnter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUICommonButton", "BP_MouseEnter");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NeoUI.NeoUICommonButton.BP_MouseLeave
// (Event, Public, BlueprintEvent)

void UNeoUICommonButton::BP_MouseLeave()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUICommonButton", "BP_MouseLeave");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NeoUI.NeoUICommonButton.BP_SingleClick
// (Event, Public, BlueprintEvent)

void UNeoUICommonButton::BP_SingleClick()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUICommonButton", "BP_SingleClick");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NeoUI.NeoUIBorderBase.SetVisual_AsContainer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                                    isVisual                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNeoUIBorderBase::SetVisual_AsContainer(bool isVisual)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIBorderBase", "SetVisual_AsContainer");

	Params::NeoUIBorderBase_SetVisual_AsContainer Parms{};

	Parms.isVisual = isVisual;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function NeoUI.NeoUIBorderBase.SetVisual_PureDisplay
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                                    isVisual                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNeoUIBorderBase::SetVisual_PureDisplay(bool isVisual)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIBorderBase", "SetVisual_PureDisplay");

	Params::NeoUIBorderBase_SetVisual_PureDisplay Parms{};

	Parms.isVisual = isVisual;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function NeoUI.NeoUIBorderBase.SetVisual_UserInteraction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                                    isVisual                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNeoUIBorderBase::SetVisual_UserInteraction(bool isVisual)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIBorderBase", "SetVisual_UserInteraction");

	Params::NeoUIBorderBase_SetVisual_UserInteraction Parms{};

	Parms.isVisual = isVisual;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function NeoUI.NeoUICommonLib.NeoUI_GetGameInstance
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UGameInstance*                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGameInstance* UNeoUICommonLib::NeoUI_GetGameInstance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("NeoUICommonLib", "NeoUI_GetGameInstance");

	Params::NeoUICommonLib_NeoUI_GetGameInstance Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NeoUI.NeoUICommonLib.NeoUI_GetGameInstanceStrict
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UGameInstance*                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGameInstance* UNeoUICommonLib::NeoUI_GetGameInstanceStrict()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("NeoUICommonLib", "NeoUI_GetGameInstanceStrict");

	Params::NeoUICommonLib_NeoUI_GetGameInstanceStrict Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NeoUI.NeoUICommonLib.NeoUI_GetWorld
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWorld*                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWorld* UNeoUICommonLib::NeoUI_GetWorld()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("NeoUICommonLib", "NeoUI_GetWorld");

	Params::NeoUICommonLib_NeoUI_GetWorld Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NeoUI.NeoUIContainerVisualBase.BP_IsGamepadMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UNeoUIContainerVisualBase::BP_IsGamepadMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIContainerVisualBase", "BP_IsGamepadMode");

	Params::NeoUIContainerVisualBase_BP_IsGamepadMode Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NeoUI.NeoUIContainerVisualBase.EVT_SyncWithGlobalInputMode
// (Event, Public, BlueprintEvent)

void UNeoUIContainerVisualBase::EVT_SyncWithGlobalInputMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIContainerVisualBase", "EVT_SyncWithGlobalInputMode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NeoUI.NeoUIContainerVisualBase.EVT_UpdateGamepadActiveBGStatus
// (Event, Public, BlueprintEvent)

void UNeoUIContainerVisualBase::EVT_UpdateGamepadActiveBGStatus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIContainerVisualBase", "EVT_UpdateGamepadActiveBGStatus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NeoUI.NeoUIContainerVisualBase.SyncWithGlobalInputMode
// (Final, Native, Public, BlueprintCallable)

void UNeoUIContainerVisualBase::SyncWithGlobalInputMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIContainerVisualBase", "SyncWithGlobalInputMode");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function NeoUI.NeoUIBlueprintableVMBase.CommitDataModification
// (Native, Protected, BlueprintCallable)

void UNeoUIBlueprintableVMBase::CommitDataModification()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIBlueprintableVMBase", "CommitDataModification");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function NeoUI.NeoUIBlueprintableVMBase.GetModuleVisibility
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UNeoUIBlueprintableVMBase::GetModuleVisibility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIBlueprintableVMBase", "GetModuleVisibility");

	Params::NeoUIBlueprintableVMBase_GetModuleVisibility Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NeoUI.NeoUIBlueprintableVMBase.GetPairModel
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UNeoUICommonDataModel*            ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UNeoUICommonDataModel* UNeoUIBlueprintableVMBase::GetPairModel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIBlueprintableVMBase", "GetPairModel");

	Params::NeoUIBlueprintableVMBase_GetPairModel Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NeoUI.NeoUIBlueprintableVMBase.GetPairView
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UNeoUIBlueprintableVisualBase*    ReturnValue                                            (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UNeoUIBlueprintableVisualBase* UNeoUIBlueprintableVMBase::GetPairView()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIBlueprintableVMBase", "GetPairView");

	Params::NeoUIBlueprintableVMBase_GetPairView Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NeoUI.NeoUIBlueprintableVMBase.Hide
// (Native, Public, BlueprintCallable)

void UNeoUIBlueprintableVMBase::Hide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIBlueprintableVMBase", "Hide");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function NeoUI.NeoUIBlueprintableVMBase.Show
// (Native, Public, BlueprintCallable)

void UNeoUIBlueprintableVMBase::Show()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIBlueprintableVMBase", "Show");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function NeoUI.NeoUIBlueprintableVMBase.Switch
// (Native, Public, BlueprintCallable)

void UNeoUIBlueprintableVMBase::Switch()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIBlueprintableVMBase", "Switch");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function NeoUI.NeoUIBlueprintableVisualBase.ActionResponder
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UNeoUIUniversalModuleVMBase*      ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UNeoUIUniversalModuleVMBase* UNeoUIBlueprintableVisualBase::ActionResponder()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIBlueprintableVisualBase", "ActionResponder");

	Params::NeoUIBlueprintableVisualBase_ActionResponder Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NeoUI.NeoUIBlueprintableVisualBase.EVT_RenderView
// (Event, Public, BlueprintEvent)

void UNeoUIBlueprintableVisualBase::EVT_RenderView()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIBlueprintableVisualBase", "EVT_RenderView");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NeoUI.NeoUIBlueprintableVisualBase.EVT_SetupHierarchy
// (Event, Public, BlueprintEvent)

void UNeoUIBlueprintableVisualBase::EVT_SetupHierarchy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIBlueprintableVisualBase", "EVT_SetupHierarchy");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NeoUI.NeoUIBlueprintableVisualBase.EVT_StaticRenderViewOnce
// (Event, Public, BlueprintEvent)

void UNeoUIBlueprintableVisualBase::EVT_StaticRenderViewOnce()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIBlueprintableVisualBase", "EVT_StaticRenderViewOnce");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NeoUI.NeoUIBlueprintableVisualBase.EVT_VisualInit
// (Event, Public, BlueprintEvent)

void UNeoUIBlueprintableVisualBase::EVT_VisualInit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIBlueprintableVisualBase", "EVT_VisualInit");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NeoUI.NeoUIBlueprintableVisualBase.GetOwnerVM_Unsafe
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UNeoUIBlueprintableVMBase*        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UNeoUIBlueprintableVMBase* UNeoUIBlueprintableVisualBase::GetOwnerVM_Unsafe()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIBlueprintableVisualBase", "GetOwnerVM_Unsafe");

	Params::NeoUIBlueprintableVisualBase_GetOwnerVM_Unsafe Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NeoUI.NeoUIBlueprintableVisualBase.isOwnerVMValid
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UNeoUIBlueprintableVisualBase::isOwnerVMValid()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIBlueprintableVisualBase", "isOwnerVMValid");

	Params::NeoUIBlueprintableVisualBase_isOwnerVMValid Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NeoUI.NeoUIBlueprintableVisualBase.NeoUI_DisableInteraction
// (Event, Public, BlueprintEvent)

void UNeoUIBlueprintableVisualBase::NeoUI_DisableInteraction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIBlueprintableVisualBase", "NeoUI_DisableInteraction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NeoUI.NeoUIBlueprintableVisualBase.NeoUI_EnableInteraction
// (Event, Public, BlueprintEvent)

void UNeoUIBlueprintableVisualBase::NeoUI_EnableInteraction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIBlueprintableVisualBase", "NeoUI_EnableInteraction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NeoUI.NeoUIBlueprintableVisualBase.ProvideChildArea
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// const TArray<class UNeoUIContainerVisualBase*>&Children                                               (Parm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UNeoUIBlueprintableVisualBase::ProvideChildArea(const TArray<class UNeoUIContainerVisualBase*>& Children)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIBlueprintableVisualBase", "ProvideChildArea");

	Params::NeoUIBlueprintableVisualBase_ProvideChildArea Parms{};

	Parms.Children = std::move(Children);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function NeoUI.NeoUIVisualElementBase.BP_IsGamepadModeAndFocused
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UNeoUIVisualElementBase::BP_IsGamepadModeAndFocused()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIVisualElementBase", "BP_IsGamepadModeAndFocused");

	Params::NeoUIVisualElementBase_BP_IsGamepadModeAndFocused Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NeoUI.NeoUIVisualElementBase.EVT_ConsoleHideTips
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                                   intflag                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const class FString&                    strFlag                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNeoUIVisualElementBase::EVT_ConsoleHideTips(int32 intflag, const class FString& strFlag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIVisualElementBase", "EVT_ConsoleHideTips");

	Params::NeoUIVisualElementBase_EVT_ConsoleHideTips Parms{};

	Parms.intflag = intflag;
	Parms.strFlag = std::move(strFlag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function NeoUI.NeoUIVisualElementBase.EVT_ConsoleShowTips
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                                   intflag                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const class FString&                    strFlag                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNeoUIVisualElementBase::EVT_ConsoleShowTips(int32 intflag, const class FString& strFlag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIVisualElementBase", "EVT_ConsoleShowTips");

	Params::NeoUIVisualElementBase_EVT_ConsoleShowTips Parms{};

	Parms.intflag = intflag;
	Parms.strFlag = std::move(strFlag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function NeoUI.NeoUIVisualElementBase.EVT_GamepadHideTips
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                                   intflag                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const class FString&                    strFlag                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNeoUIVisualElementBase::EVT_GamepadHideTips(int32 intflag, const class FString& strFlag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIVisualElementBase", "EVT_GamepadHideTips");

	Params::NeoUIVisualElementBase_EVT_GamepadHideTips Parms{};

	Parms.intflag = intflag;
	Parms.strFlag = std::move(strFlag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function NeoUI.NeoUIVisualElementBase.EVT_GamepadShowTips
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                                   intflag                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const class FString&                    strFlag                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNeoUIVisualElementBase::EVT_GamepadShowTips(int32 intflag, const class FString& strFlag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIVisualElementBase", "EVT_GamepadShowTips");

	Params::NeoUIVisualElementBase_EVT_GamepadShowTips Parms{};

	Parms.intflag = intflag;
	Parms.strFlag = std::move(strFlag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function NeoUI.NeoUIVisualElementBase.GetNeoUIVM
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UNeoUIUniversalModuleVMBase*      ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UNeoUIUniversalModuleVMBase* UNeoUIVisualElementBase::GetNeoUIVM()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIVisualElementBase", "GetNeoUIVM");

	Params::NeoUIVisualElementBase_GetNeoUIVM Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NeoUI.NeoUIVisualElementBase.RegisterActiveDisplayWidget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                          WidgetObj                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNeoUIVisualElementBase::RegisterActiveDisplayWidget(class UWidget* WidgetObj)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIVisualElementBase", "RegisterActiveDisplayWidget");

	Params::NeoUIVisualElementBase_RegisterActiveDisplayWidget Parms{};

	Parms.WidgetObj = WidgetObj;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function NeoUI.NeoUIVisualElementBase.RegisterMainInteractiveWidget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                          WidgetObj                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNeoUIVisualElementBase::RegisterMainInteractiveWidget(class UWidget* WidgetObj)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIVisualElementBase", "RegisterMainInteractiveWidget");

	Params::NeoUIVisualElementBase_RegisterMainInteractiveWidget Parms{};

	Parms.WidgetObj = WidgetObj;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function NeoUI.NeoUIVisualElementBase.RequestFocusForMouseEntering
// (Final, Native, Public, BlueprintCallable)

void UNeoUIVisualElementBase::RequestFocusForMouseEntering()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIVisualElementBase", "RequestFocusForMouseEntering");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function NeoUI.NeoUIUniversalModuleViewBase.AppendActiveAreaArr
// (Native, Public, BlueprintCallable)
// Parameters:
// const TArray<class UGamepadActiveAreaDisplay*>&Arr                                                    (Parm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UNeoUIUniversalModuleViewBase::AppendActiveAreaArr(const TArray<class UGamepadActiveAreaDisplay*>& Arr)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIUniversalModuleViewBase", "AppendActiveAreaArr");

	Params::NeoUIUniversalModuleViewBase_AppendActiveAreaArr Parms{};

	Parms.Arr = std::move(Arr);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function NeoUI.NeoUIUniversalModuleViewBase.ClearCurrentNativeFocusWidget
// (Native, Public, BlueprintCallable)

void UNeoUIUniversalModuleViewBase::ClearCurrentNativeFocusWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIUniversalModuleViewBase", "ClearCurrentNativeFocusWidget");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function NeoUI.NeoUIUniversalModuleViewBase.EndFocusDefaultDelay
// (Native, Public, BlueprintCallable)

void UNeoUIUniversalModuleViewBase::EndFocusDefaultDelay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIUniversalModuleViewBase", "EndFocusDefaultDelay");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function NeoUI.NeoUIUniversalModuleViewBase.EVT_AppendActiveAreaArr
// (Event, Public, BlueprintEvent)

void UNeoUIUniversalModuleViewBase::EVT_AppendActiveAreaArr()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIUniversalModuleViewBase", "EVT_AppendActiveAreaArr");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NeoUI.NeoUIUniversalModuleViewBase.EVT_DelayFocusStart
// (Event, Public, BlueprintEvent)

void UNeoUIUniversalModuleViewBase::EVT_DelayFocusStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIUniversalModuleViewBase", "EVT_DelayFocusStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NeoUI.NeoUIUniversalModuleViewBase.EVT_FocusWidgetForScenario
// (Event, Public, BlueprintEvent)
// Parameters:
// ENeoUIFocusWidgetScenario               scenario                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const struct FNeoUIFocusWidgetParam&    Param                                                  (Parm, NativeAccessSpecifierPublic)

void UNeoUIUniversalModuleViewBase::EVT_FocusWidgetForScenario(ENeoUIFocusWidgetScenario scenario, const struct FNeoUIFocusWidgetParam& Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIUniversalModuleViewBase", "EVT_FocusWidgetForScenario");

	Params::NeoUIUniversalModuleViewBase_EVT_FocusWidgetForScenario Parms{};

	Parms.scenario = scenario;
	Parms.Param = std::move(Param);

	UObject::ProcessEvent(Func, &Parms);
}


// Function NeoUI.NeoUIUniversalModuleViewBase.EVT_SetupSubModuleSlots
// (Event, Public, BlueprintEvent)

void UNeoUIUniversalModuleViewBase::EVT_SetupSubModuleSlots()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIUniversalModuleViewBase", "EVT_SetupSubModuleSlots");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NeoUI.NeoUIUniversalModuleViewBase.EVT_VisualHide
// (Event, Public, BlueprintEvent)

void UNeoUIUniversalModuleViewBase::EVT_VisualHide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIUniversalModuleViewBase", "EVT_VisualHide");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NeoUI.NeoUIUniversalModuleViewBase.EVT_VisualShow
// (Event, Public, BlueprintEvent)

void UNeoUIUniversalModuleViewBase::EVT_VisualShow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIUniversalModuleViewBase", "EVT_VisualShow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NeoUI.NeoUIUniversalModuleViewBase.FindFocusWidgetByTag
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FString&                    StrParam                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidget*                          ReturnValue                                            (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWidget* UNeoUIUniversalModuleViewBase::FindFocusWidgetByTag(const class FString& StrParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIUniversalModuleViewBase", "FindFocusWidgetByTag");

	Params::NeoUIUniversalModuleViewBase_FindFocusWidgetByTag Parms{};

	Parms.StrParam = std::move(StrParam);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NeoUI.NeoUIUniversalModuleViewBase.FocusWidgetForScenario_Direct
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// ENeoUIFocusWidgetScenario               scenario                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const struct FNeoUIFocusWidgetParam&    Param                                                  (Parm, NativeAccessSpecifierPublic)
// class UWidget*                          ReturnValue                                            (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWidget* UNeoUIUniversalModuleViewBase::FocusWidgetForScenario_Direct(ENeoUIFocusWidgetScenario scenario, const struct FNeoUIFocusWidgetParam& Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIUniversalModuleViewBase", "FocusWidgetForScenario_Direct");

	Params::NeoUIUniversalModuleViewBase_FocusWidgetForScenario_Direct Parms{};

	Parms.scenario = scenario;
	Parms.Param = std::move(Param);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NeoUI.NeoUIUniversalModuleViewBase.GetContainerSlot
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UPanelSlot*                       ReturnValue                                            (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UPanelSlot* UNeoUIUniversalModuleViewBase::GetContainerSlot()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIUniversalModuleViewBase", "GetContainerSlot");

	Params::NeoUIUniversalModuleViewBase_GetContainerSlot Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NeoUI.NeoUIUniversalModuleViewBase.GetLocalDefaultFocusElement
// (Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWidget*                          ReturnValue                                            (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWidget* UNeoUIUniversalModuleViewBase::GetLocalDefaultFocusElement()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIUniversalModuleViewBase", "GetLocalDefaultFocusElement");

	Params::NeoUIUniversalModuleViewBase_GetLocalDefaultFocusElement Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NeoUI.NeoUIUniversalModuleViewBase.GetNeoUIVM
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UNeoUIUniversalModuleVMBase*      ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UNeoUIUniversalModuleVMBase* UNeoUIUniversalModuleViewBase::GetNeoUIVM()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIUniversalModuleViewBase", "GetNeoUIVM");

	Params::NeoUIUniversalModuleViewBase_GetNeoUIVM Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NeoUI.NeoUIUniversalModuleViewBase.GetSlotInParent
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                             ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName UNeoUIUniversalModuleViewBase::GetSlotInParent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIUniversalModuleViewBase", "GetSlotInParent");

	Params::NeoUIUniversalModuleViewBase_GetSlotInParent Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NeoUI.NeoUIUniversalModuleViewBase.GetSubModuleView
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                             ModuleKey                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UNeoUIUniversalModuleViewBase*    ReturnValue                                            (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UNeoUIUniversalModuleViewBase* UNeoUIUniversalModuleViewBase::GetSubModuleView(class FName ModuleKey)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIUniversalModuleViewBase", "GetSubModuleView");

	Params::NeoUIUniversalModuleViewBase_GetSubModuleView Parms{};

	Parms.ModuleKey = ModuleKey;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NeoUI.NeoUIUniversalModuleViewBase.GetSubModuleVM
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                             ModuleKey                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UNeoUIUniversalModuleVMBase*      ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UNeoUIUniversalModuleVMBase* UNeoUIUniversalModuleViewBase::GetSubModuleVM(class FName ModuleKey)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIUniversalModuleViewBase", "GetSubModuleVM");

	Params::NeoUIUniversalModuleViewBase_GetSubModuleVM Parms{};

	Parms.ModuleKey = ModuleKey;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NeoUI.NeoUIUniversalModuleViewBase.NotifyVMHide
// (Native, Public, BlueprintCallable)

void UNeoUIUniversalModuleViewBase::NotifyVMHide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIUniversalModuleViewBase", "NotifyVMHide");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function NeoUI.NeoUIUniversalModuleViewBase.ProvideSubModuleSlotConfig
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// const TMap<class FName, class UNeoUINamedSlot*>&SlotConfig                                             (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UNeoUIUniversalModuleViewBase::ProvideSubModuleSlotConfig(const TMap<class FName, class UNeoUINamedSlot*>& SlotConfig)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIUniversalModuleViewBase", "ProvideSubModuleSlotConfig");

	Params::NeoUIUniversalModuleViewBase_ProvideSubModuleSlotConfig Parms{};

	Parms.SlotConfig = std::move(SlotConfig);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function NeoUI.NeoUIUniversalModuleViewBase.Region_RegisterDisplay
// (Native, Public, BlueprintCallable)
// Parameters:
// const class FString&                    RID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidget*                          WObj                                                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNeoUIUniversalModuleViewBase::Region_RegisterDisplay(const class FString& RID, class UWidget* WObj)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIUniversalModuleViewBase", "Region_RegisterDisplay");

	Params::NeoUIUniversalModuleViewBase_Region_RegisterDisplay Parms{};

	Parms.RID = std::move(RID);
	Parms.WObj = WObj;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function NeoUI.NeoUIUniversalModuleViewBase.Region_RegisterWidget
// (Native, Public, BlueprintCallable)
// Parameters:
// const class FString&                    RID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidget*                          WObj                                                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNeoUIUniversalModuleViewBase::Region_RegisterWidget(const class FString& RID, class UWidget* WObj)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIUniversalModuleViewBase", "Region_RegisterWidget");

	Params::NeoUIUniversalModuleViewBase_Region_RegisterWidget Parms{};

	Parms.RID = std::move(RID);
	Parms.WObj = WObj;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function NeoUI.NeoUIUniversalModuleViewBase.RegisterCurrentNativeFocusWidget
// (Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                          WidgetObj                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNeoUIUniversalModuleViewBase::RegisterCurrentNativeFocusWidget(class UWidget* WidgetObj)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIUniversalModuleViewBase", "RegisterCurrentNativeFocusWidget");

	Params::NeoUIUniversalModuleViewBase_RegisterCurrentNativeFocusWidget Parms{};

	Parms.WidgetObj = WidgetObj;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function NeoUI.NeoUIUniversalModuleViewBase.UnregisterCurrentNativeFocusWidget
// (Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                          WidgetObj                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNeoUIUniversalModuleViewBase::UnregisterCurrentNativeFocusWidget(class UWidget* WidgetObj)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIUniversalModuleViewBase", "UnregisterCurrentNativeFocusWidget");

	Params::NeoUIUniversalModuleViewBase_UnregisterCurrentNativeFocusWidget Parms{};

	Parms.WidgetObj = WidgetObj;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function NeoUI.NeoUI1Img1TxtComp.UpdateTitle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// const class FText&                      NewValue                                               (Parm, NativeAccessSpecifierPublic)

void UNeoUI1Img1TxtComp::UpdateTitle(const class FText& NewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUI1Img1TxtComp", "UpdateTitle");

	Params::NeoUI1Img1TxtComp_UpdateTitle Parms{};

	Parms.NewValue = std::move(NewValue);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function NeoUI.NeoUIUniversalModuleVMBase.ChangeNaviFocus
// (Native, Public, BlueprintCallable)
// Parameters:
// class FName                             LocalModuleID                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// ENeoUIFocusWidgetScenario               scenario                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const class FString&                    StrParam                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidget*                          ReturnValue                                            (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWidget* UNeoUIUniversalModuleVMBase::ChangeNaviFocus(class FName LocalModuleID, ENeoUIFocusWidgetScenario scenario, const class FString& StrParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIUniversalModuleVMBase", "ChangeNaviFocus");

	Params::NeoUIUniversalModuleVMBase_ChangeNaviFocus Parms{};

	Parms.LocalModuleID = LocalModuleID;
	Parms.scenario = scenario;
	Parms.StrParam = std::move(StrParam);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NeoUI.NeoUIUniversalModuleVMBase.DisableInteraction
// (Native, Public, BlueprintCallable)

void UNeoUIUniversalModuleVMBase::DisableInteraction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIUniversalModuleVMBase", "DisableInteraction");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function NeoUI.NeoUIUniversalModuleVMBase.EnableInteraction
// (Native, Public, BlueprintCallable)

void UNeoUIUniversalModuleVMBase::EnableInteraction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIUniversalModuleVMBase", "EnableInteraction");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function NeoUI.NeoUIUniversalModuleVMBase.FindNavigationFocusByTag
// (Native, Public, BlueprintCallable)
// Parameters:
// const class FString&                    StrParam                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidget*                          ReturnValue                                            (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWidget* UNeoUIUniversalModuleVMBase::FindNavigationFocusByTag(const class FString& StrParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIUniversalModuleVMBase", "FindNavigationFocusByTag");

	Params::NeoUIUniversalModuleVMBase_FindNavigationFocusByTag Parms{};

	Parms.StrParam = std::move(StrParam);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NeoUI.NeoUIUniversalModuleVMBase.FindSubModuleRecursively
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                             ModuleKey                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UNeoUIUniversalModuleVMBase*      ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UNeoUIUniversalModuleVMBase* UNeoUIUniversalModuleVMBase::FindSubModuleRecursively(class FName ModuleKey)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIUniversalModuleVMBase", "FindSubModuleRecursively");

	Params::NeoUIUniversalModuleVMBase_FindSubModuleRecursively Parms{};

	Parms.ModuleKey = ModuleKey;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NeoUI.NeoUIUniversalModuleVMBase.GetExclusiveModuleID
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                             ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName UNeoUIUniversalModuleVMBase::GetExclusiveModuleID()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIUniversalModuleVMBase", "GetExclusiveModuleID");

	Params::NeoUIUniversalModuleVMBase_GetExclusiveModuleID Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NeoUI.NeoUIUniversalModuleVMBase.GetParentModule
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UNeoUIUniversalModuleVMBase*      ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UNeoUIUniversalModuleVMBase* UNeoUIUniversalModuleVMBase::GetParentModule()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIUniversalModuleVMBase", "GetParentModule");

	Params::NeoUIUniversalModuleVMBase_GetParentModule Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NeoUI.NeoUIUniversalModuleVMBase.GetRootModule
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UNeoUIUniversalModuleVMBase*      ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UNeoUIUniversalModuleVMBase* UNeoUIUniversalModuleVMBase::GetRootModule()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIUniversalModuleVMBase", "GetRootModule");

	Params::NeoUIUniversalModuleVMBase_GetRootModule Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NeoUI.NeoUIUniversalModuleVMBase.GetSubModuleByIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                                   TargetIndex                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UNeoUIUniversalModuleVMBase*      ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UNeoUIUniversalModuleVMBase* UNeoUIUniversalModuleVMBase::GetSubModuleByIndex(int32 TargetIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIUniversalModuleVMBase", "GetSubModuleByIndex");

	Params::NeoUIUniversalModuleVMBase_GetSubModuleByIndex Parms{};

	Parms.TargetIndex = TargetIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NeoUI.NeoUIUniversalModuleVMBase.GetSubModuleByKey
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                             ModuleKey                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UNeoUIUniversalModuleVMBase*      ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UNeoUIUniversalModuleVMBase* UNeoUIUniversalModuleVMBase::GetSubModuleByKey(class FName ModuleKey)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIUniversalModuleVMBase", "GetSubModuleByKey");

	Params::NeoUIUniversalModuleVMBase_GetSubModuleByKey Parms{};

	Parms.ModuleKey = ModuleKey;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NeoUI.NeoUIUniversalModuleVMBase.GetUniversalModuleID
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                             ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName UNeoUIUniversalModuleVMBase::GetUniversalModuleID()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIUniversalModuleVMBase", "GetUniversalModuleID");

	Params::NeoUIUniversalModuleVMBase_GetUniversalModuleID Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NeoUI.NeoUIUniversalModuleVMBase.HandleUIAction
// (Native, Public, BlueprintCallable)
// Parameters:
// const class FString&                    ActionName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAnyTypeUniversalPointerBase*     Data                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNeoUIUniversalModuleVMBase::HandleUIAction(const class FString& ActionName, class UAnyTypeUniversalPointerBase* Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIUniversalModuleVMBase", "HandleUIAction");

	Params::NeoUIUniversalModuleVMBase_HandleUIAction Parms{};

	Parms.ActionName = std::move(ActionName);
	Parms.Data = Data;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function NeoUI.NeoUIUniversalModuleVMBase.NotifyResetModule
// (Native, Public, BlueprintCallable)
// Parameters:
// int32                                   Reason                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNeoUIUniversalModuleVMBase::NotifyResetModule(int32 Reason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIUniversalModuleVMBase", "NotifyResetModule");

	Params::NeoUIUniversalModuleVMBase_NotifyResetModule Parms{};

	Parms.Reason = Reason;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function NeoUI.NeoUIUniversalModuleVMBase.NotifyUpdateModule
// (Native, Public, BlueprintCallable)

void UNeoUIUniversalModuleVMBase::NotifyUpdateModule()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIUniversalModuleVMBase", "NotifyUpdateModule");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function NeoUI.NeoUIUniversalModuleVMBase.NotifyUpdateModuleWithParam
// (Native, Public, BlueprintCallable)
// Parameters:
// const class FString&                    Param                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNeoUIUniversalModuleVMBase::NotifyUpdateModuleWithParam(const class FString& Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIUniversalModuleVMBase", "NotifyUpdateModuleWithParam");

	Params::NeoUIUniversalModuleVMBase_NotifyUpdateModuleWithParam Parms{};

	Parms.Param = std::move(Param);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function NeoUI.NeoUIUniversalModuleVMBase.ReceiveNavigationFocus
// (Native, Public, BlueprintCallable)
// Parameters:
// ENeoUIFocusWidgetScenario               scenario                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const class FString&                    StrParam                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidget*                          ReturnValue                                            (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWidget* UNeoUIUniversalModuleVMBase::ReceiveNavigationFocus(ENeoUIFocusWidgetScenario scenario, const class FString& StrParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIUniversalModuleVMBase", "ReceiveNavigationFocus");

	Params::NeoUIUniversalModuleVMBase_ReceiveNavigationFocus Parms{};

	Parms.scenario = scenario;
	Parms.StrParam = std::move(StrParam);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NeoUI.NeoUIUniversalModuleVMBase.SearchWidgetByTag_Internal
// (Native, Public, BlueprintCallable)
// Parameters:
// const class FString&                    StrParam                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidget*                          ReturnValue                                            (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWidget* UNeoUIUniversalModuleVMBase::SearchWidgetByTag_Internal(const class FString& StrParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIUniversalModuleVMBase", "SearchWidgetByTag_Internal");

	Params::NeoUIUniversalModuleVMBase_SearchWidgetByTag_Internal Parms{};

	Parms.StrParam = std::move(StrParam);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NeoUI.AnyTypeObjectPointerBase.DataToString
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UAnyTypeObjectPointerBase::DataToString()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnyTypeObjectPointerBase", "DataToString");

	Params::AnyTypeObjectPointerBase_DataToString Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NeoUI.AnyTypeObjectPointerBase.DataToStringPerfect
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UAnyTypeObjectPointerBase::DataToStringPerfect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnyTypeObjectPointerBase", "DataToStringPerfect");

	Params::AnyTypeObjectPointerBase_DataToStringPerfect Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NeoUI.AnyTypeUniversalPointerBase.AddValueSafe_String
// (Native, Public, BlueprintCallable)
// Parameters:
// const class FString&                    ckey                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const class FString&                    Str                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAnyTypeUniversalPointerBase::AddValueSafe_String(const class FString& ckey, const class FString& Str)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnyTypeUniversalPointerBase", "AddValueSafe_String");

	Params::AnyTypeUniversalPointerBase_AddValueSafe_String Parms{};

	Parms.ckey = std::move(ckey);
	Parms.Str = std::move(Str);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NeoUI.AnyTypeUniversalPointerBase.AddValueSafe_Text
// (Native, Public, BlueprintCallable)
// Parameters:
// const class FString&                    ckey                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const class FText&                      Str                                                    (Parm, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAnyTypeUniversalPointerBase::AddValueSafe_Text(const class FString& ckey, const class FText& Str)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnyTypeUniversalPointerBase", "AddValueSafe_Text");

	Params::AnyTypeUniversalPointerBase_AddValueSafe_Text Parms{};

	Parms.ckey = std::move(ckey);
	Parms.Str = std::move(Str);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NeoUI.AnyTypeUniversalPointerBase.ContainsKey
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// const class FString&                    Key                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAnyTypeUniversalPointerBase::ContainsKey(const class FString& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnyTypeUniversalPointerBase", "ContainsKey");

	Params::AnyTypeUniversalPointerBase_ContainsKey Parms{};

	Parms.Key = std::move(Key);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NeoUI.AnyTypeUniversalPointerBase.GetValueSafe_Bool
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// const class FString&                    Key                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAnyTypeUniversalPointerBase::GetValueSafe_Bool(const class FString& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnyTypeUniversalPointerBase", "GetValueSafe_Bool");

	Params::AnyTypeUniversalPointerBase_GetValueSafe_Bool Parms{};

	Parms.Key = std::move(Key);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NeoUI.AnyTypeUniversalPointerBase.GetValueSafe_Float
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// const class FString&                    Key                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAnyTypeUniversalPointerBase::GetValueSafe_Float(const class FString& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnyTypeUniversalPointerBase", "GetValueSafe_Float");

	Params::AnyTypeUniversalPointerBase_GetValueSafe_Float Parms{};

	Parms.Key = std::move(Key);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NeoUI.AnyTypeUniversalPointerBase.GetValueSafe_Int32
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// const class FString&                    Key                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAnyTypeUniversalPointerBase::GetValueSafe_Int32(const class FString& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnyTypeUniversalPointerBase", "GetValueSafe_Int32");

	Params::AnyTypeUniversalPointerBase_GetValueSafe_Int32 Parms{};

	Parms.Key = std::move(Key);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NeoUI.AnyTypeUniversalPointerBase.GetValueSafe_Int64
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// const class FString&                    Key                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int64                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int64 UAnyTypeUniversalPointerBase::GetValueSafe_Int64(const class FString& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnyTypeUniversalPointerBase", "GetValueSafe_Int64");

	Params::AnyTypeUniversalPointerBase_GetValueSafe_Int64 Parms{};

	Parms.Key = std::move(Key);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NeoUI.AnyTypeUniversalPointerBase.GetValueSafe_String
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// const class FString&                    Key                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UAnyTypeUniversalPointerBase::GetValueSafe_String(const class FString& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnyTypeUniversalPointerBase", "GetValueSafe_String");

	Params::AnyTypeUniversalPointerBase_GetValueSafe_String Parms{};

	Parms.Key = std::move(Key);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NeoUI.AnyTypeUniversalPointerBase.GetValueSafe_Text
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// const class FString&                    Key                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UAnyTypeUniversalPointerBase::GetValueSafe_Text(const class FString& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnyTypeUniversalPointerBase", "GetValueSafe_Text");

	Params::AnyTypeUniversalPointerBase_GetValueSafe_Text Parms{};

	Parms.Key = std::move(Key);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NeoUI.AnyTypeUniversalPointerBase.SetDataConsumed
// (Native, Public, BlueprintCallable)

void UAnyTypeUniversalPointerBase::SetDataConsumed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnyTypeUniversalPointerBase", "SetDataConsumed");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function NeoUI.AnyTypeUniversalPointerBase.SetDataNeedsConsume
// (Native, Public, BlueprintCallable)

void UAnyTypeUniversalPointerBase::SetDataNeedsConsume()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnyTypeUniversalPointerBase", "SetDataNeedsConsume");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function NeoUI.AnyTypeUniversalPointerBase.SetValueSafe_Bool
// (Native, Public, BlueprintCallable)
// Parameters:
// const class FString&                    Key                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    Value                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAnyTypeUniversalPointerBase::SetValueSafe_Bool(const class FString& Key, bool Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnyTypeUniversalPointerBase", "SetValueSafe_Bool");

	Params::AnyTypeUniversalPointerBase_SetValueSafe_Bool Parms{};

	Parms.Key = std::move(Key);
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NeoUI.AnyTypeUniversalPointerBase.SetValueSafe_Float
// (Native, Public, BlueprintCallable)
// Parameters:
// const class FString&                    ckey                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   Value                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAnyTypeUniversalPointerBase::SetValueSafe_Float(const class FString& ckey, float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnyTypeUniversalPointerBase", "SetValueSafe_Float");

	Params::AnyTypeUniversalPointerBase_SetValueSafe_Float Parms{};

	Parms.ckey = std::move(ckey);
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NeoUI.AnyTypeUniversalPointerBase.SetValueSafe_Int32
// (Native, Public, BlueprintCallable)
// Parameters:
// const class FString&                    ckey                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   Value                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAnyTypeUniversalPointerBase::SetValueSafe_Int32(const class FString& ckey, int32 Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnyTypeUniversalPointerBase", "SetValueSafe_Int32");

	Params::AnyTypeUniversalPointerBase_SetValueSafe_Int32 Parms{};

	Parms.ckey = std::move(ckey);
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NeoUI.AnyTypeUniversalPointerBase.SetValueSafe_Int64
// (Native, Public, BlueprintCallable)
// Parameters:
// const class FString&                    ckey                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int64                                   Value                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAnyTypeUniversalPointerBase::SetValueSafe_Int64(const class FString& ckey, int64 Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnyTypeUniversalPointerBase", "SetValueSafe_Int64");

	Params::AnyTypeUniversalPointerBase_SetValueSafe_Int64 Parms{};

	Parms.ckey = std::move(ckey);
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NeoUI.AnyTypeUniversalPointerBase.SetValueSafe_String
// (Native, Public, BlueprintCallable)
// Parameters:
// const class FString&                    ckey                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const class FString&                    Str                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAnyTypeUniversalPointerBase::SetValueSafe_String(const class FString& ckey, const class FString& Str)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnyTypeUniversalPointerBase", "SetValueSafe_String");

	Params::AnyTypeUniversalPointerBase_SetValueSafe_String Parms{};

	Parms.ckey = std::move(ckey);
	Parms.Str = std::move(Str);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NeoUI.AnyTypeUniversalPointerBase.SetValueSafe_Text
// (Native, Public, BlueprintCallable)
// Parameters:
// const class FString&                    ckey                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const class FText&                      Str                                                    (Parm, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAnyTypeUniversalPointerBase::SetValueSafe_Text(const class FString& ckey, const class FText& Str)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnyTypeUniversalPointerBase", "SetValueSafe_Text");

	Params::AnyTypeUniversalPointerBase_SetValueSafe_Text Parms{};

	Parms.ckey = std::move(ckey);
	Parms.Str = std::move(Str);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NeoUI.AnyTypeStaticPointer.NewFromCursor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAnyTypePointerCursor*            FromCursor                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAnyTypeStaticPointer*            ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAnyTypeStaticPointer* UAnyTypeStaticPointer::NewFromCursor(class UAnyTypePointerCursor* FromCursor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AnyTypeStaticPointer", "NewFromCursor");

	Params::AnyTypeStaticPointer_NewFromCursor Parms{};

	Parms.FromCursor = FromCursor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NeoUI.AnyTypeStaticPointer.At
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                                   AtIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAnyTypePointerCursor*            ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAnyTypePointerCursor* UAnyTypeStaticPointer::At(int32 AtIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnyTypeStaticPointer", "At");

	Params::AnyTypeStaticPointer_At Parms{};

	Parms.AtIndex = AtIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NeoUI.AnyTypeStaticPointer.ClearArray
// (Final, Native, Public, BlueprintCallable)

void UAnyTypeStaticPointer::ClearArray()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnyTypeStaticPointer", "ClearArray");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function NeoUI.AnyTypeStaticPointer.CopyPointer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAnyTypeStaticPointer*            ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAnyTypeStaticPointer* UAnyTypeStaticPointer::CopyPointer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnyTypeStaticPointer", "CopyPointer");

	Params::AnyTypeStaticPointer_CopyPointer Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NeoUI.AnyTypeStaticPointer.First
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAnyTypePointerCursor*            ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAnyTypePointerCursor* UAnyTypeStaticPointer::First()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnyTypeStaticPointer", "First");

	Params::AnyTypeStaticPointer_First Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NeoUI.AnyTypeStaticPointer.GeneratePointersArray
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class UAnyTypeStaticPointer*>    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UAnyTypeStaticPointer*> UAnyTypeStaticPointer::GeneratePointersArray()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnyTypeStaticPointer", "GeneratePointersArray");

	Params::AnyTypeStaticPointer_GeneratePointersArray Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NeoUI.AnyTypeStaticPointer.Last
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAnyTypePointerCursor*            ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAnyTypePointerCursor* UAnyTypeStaticPointer::Last()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnyTypeStaticPointer", "Last");

	Params::AnyTypeStaticPointer_Last Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NeoUI.AnyTypeStaticPointer.MoveToArrayByKey
// (Native, Public, BlueprintCallable)
// Parameters:
// const class FString&                    Key                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAnyTypePointerCursor*            ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAnyTypePointerCursor* UAnyTypeStaticPointer::MoveToArrayByKey(const class FString& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnyTypeStaticPointer", "MoveToArrayByKey");

	Params::AnyTypeStaticPointer_MoveToArrayByKey Parms{};

	Parms.Key = std::move(Key);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NeoUI.AnyTypeStaticPointer.MoveToArrayByPath
// (Native, Public, BlueprintCallable)
// Parameters:
// const class FString&                    target_path                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAnyTypePointerCursor*            ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAnyTypePointerCursor* UAnyTypeStaticPointer::MoveToArrayByPath(const class FString& target_path)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnyTypeStaticPointer", "MoveToArrayByPath");

	Params::AnyTypeStaticPointer_MoveToArrayByPath Parms{};

	Parms.target_path = std::move(target_path);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NeoUI.AnyTypeStaticPointer.MoveToArrayElementByIndex
// (Native, Public, BlueprintCallable)
// Parameters:
// int32                                   ElementIndex                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAnyTypePointerCursor*            ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAnyTypePointerCursor* UAnyTypeStaticPointer::MoveToArrayElementByIndex(int32 ElementIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnyTypeStaticPointer", "MoveToArrayElementByIndex");

	Params::AnyTypeStaticPointer_MoveToArrayElementByIndex Parms{};

	Parms.ElementIndex = ElementIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NeoUI.AnyTypeStaticPointer.MoveToArrayElementByPath
// (Native, Public, BlueprintCallable)
// Parameters:
// const class FString&                    array_path                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   ElementIndex                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAnyTypePointerCursor*            ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAnyTypePointerCursor* UAnyTypeStaticPointer::MoveToArrayElementByPath(const class FString& array_path, int32 ElementIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnyTypeStaticPointer", "MoveToArrayElementByPath");

	Params::AnyTypeStaticPointer_MoveToArrayElementByPath Parms{};

	Parms.array_path = std::move(array_path);
	Parms.ElementIndex = ElementIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NeoUI.AnyTypeStaticPointer.MoveToObjectByKey
// (Native, Public, BlueprintCallable)
// Parameters:
// const class FString&                    Key                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAnyTypePointerCursor*            ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAnyTypePointerCursor* UAnyTypeStaticPointer::MoveToObjectByKey(const class FString& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnyTypeStaticPointer", "MoveToObjectByKey");

	Params::AnyTypeStaticPointer_MoveToObjectByKey Parms{};

	Parms.Key = std::move(Key);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NeoUI.AnyTypeStaticPointer.MoveToObjectByPath
// (Native, Public, BlueprintCallable)
// Parameters:
// const class FString&                    target_path                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAnyTypePointerCursor*            ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAnyTypePointerCursor* UAnyTypeStaticPointer::MoveToObjectByPath(const class FString& target_path)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnyTypeStaticPointer", "MoveToObjectByPath");

	Params::AnyTypeStaticPointer_MoveToObjectByPath Parms{};

	Parms.target_path = std::move(target_path);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NeoUI.AnyTypeStaticPointer.NewArrayByKey
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// const class FString&                    Key                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAnyTypeStaticPointer*            ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAnyTypeStaticPointer* UAnyTypeStaticPointer::NewArrayByKey(const class FString& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnyTypeStaticPointer", "NewArrayByKey");

	Params::AnyTypeStaticPointer_NewArrayByKey Parms{};

	Parms.Key = std::move(Key);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NeoUI.AnyTypeStaticPointer.NewArrayElementByIndex
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                                   ElementIndex                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAnyTypeStaticPointer*            ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAnyTypeStaticPointer* UAnyTypeStaticPointer::NewArrayElementByIndex(int32 ElementIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnyTypeStaticPointer", "NewArrayElementByIndex");

	Params::AnyTypeStaticPointer_NewArrayElementByIndex Parms{};

	Parms.ElementIndex = ElementIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NeoUI.AnyTypeStaticPointer.NewElementPointer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                                   AtIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAnyTypeStaticPointer*            ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAnyTypeStaticPointer* UAnyTypeStaticPointer::NewElementPointer(int32 AtIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnyTypeStaticPointer", "NewElementPointer");

	Params::AnyTypeStaticPointer_NewElementPointer Parms{};

	Parms.AtIndex = AtIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NeoUI.AnyTypeStaticPointer.NewObjectByKey
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// const class FString&                    Key                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAnyTypeStaticPointer*            ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAnyTypeStaticPointer* UAnyTypeStaticPointer::NewObjectByKey(const class FString& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnyTypeStaticPointer", "NewObjectByKey");

	Params::AnyTypeStaticPointer_NewObjectByKey Parms{};

	Parms.Key = std::move(Key);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NeoUI.AnyTypeStaticPointer.Num
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAnyTypeStaticPointer::Num()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnyTypeStaticPointer", "Num");

	Params::AnyTypeStaticPointer_Num Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NeoUI.NeoUITileView.FindFirstElement
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                          ReturnValue                                            (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWidget* UNeoUITileView::FindFirstElement()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUITileView", "FindFirstElement");

	Params::NeoUITileView_FindFirstElement Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NeoUI.NeoUITileView.FocusByDataIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                                   Index_0                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UNeoUITileView::FocusByDataIndex(int32 Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUITileView", "FocusByDataIndex");

	Params::NeoUITileView_FocusByDataIndex Parms{};

	Parms.Index_0 = Index_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NeoUI.NeoUITileView.HandleEntryInitialized
// (Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                          ItemWidget                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNeoUITileView::HandleEntryInitialized(class UObject* ItemWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUITileView", "HandleEntryInitialized");

	Params::NeoUITileView_HandleEntryInitialized Parms{};

	Parms.ItemWidget = ItemWidget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function NeoUI.NeoUITileView.ResetAndFocus
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                          ReturnValue                                            (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWidget* UNeoUITileView::ResetAndFocus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUITileView", "ResetAndFocus");

	Params::NeoUITileView_ResetAndFocus Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NeoUI.NeoUITileView.ResetAndScrollToTop
// (Final, Native, Public, BlueprintCallable)

void UNeoUITileView::ResetAndScrollToTop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUITileView", "ResetAndScrollToTop");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function NeoUI.NeoUILayerViewBase.GetLayerSlot
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UCanvasPanelSlot*                 ReturnValue                                            (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCanvasPanelSlot* UNeoUILayerViewBase::GetLayerSlot()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUILayerViewBase", "GetLayerSlot");

	Params::NeoUILayerViewBase_GetLayerSlot Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NeoUI.NeoUIModuleVMBase.IsModuleDestroyable
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UNeoUIModuleVMBase::IsModuleDestroyable() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIModuleVMBase", "IsModuleDestroyable");

	Params::NeoUIModuleVMBase_IsModuleDestroyable Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NeoUI.NeoUIGestureResponder.BP_DELAY_CB
// (Final, Native, Public, BlueprintCallable)

void UNeoUIGestureResponder::BP_DELAY_CB()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIGestureResponder", "BP_DELAY_CB");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function NeoUI.NeoUIGestureResponder.EVT_BP_DELAY_START
// (Event, Public, BlueprintEvent)

void UNeoUIGestureResponder::EVT_BP_DELAY_START()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIGestureResponder", "EVT_BP_DELAY_START");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NeoUI.NeoUIGestureResponder.EVT_Gesture_Drop
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// const struct FPointerEvent&             PointerEvent                                           (Parm, NativeAccessSpecifierPublic)
// class UDragDropOperation*               Operation                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNeoUIGestureResponder::EVT_Gesture_Drop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIGestureResponder", "EVT_Gesture_Drop");

	Params::NeoUIGestureResponder_EVT_Gesture_Drop Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.PointerEvent = std::move(PointerEvent);
	Parms.Operation = Operation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NeoUI.NeoUIGestureResponder.EVT_Gesture_LongPress
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// const struct FPointerEvent&             InMouseEvent                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UNeoUIGestureResponder::EVT_Gesture_LongPress(const struct FPointerEvent& InMouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIGestureResponder", "EVT_Gesture_LongPress");

	Params::NeoUIGestureResponder_EVT_Gesture_LongPress Parms{};

	Parms.InMouseEvent = std::move(InMouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function NeoUI.NeoUIGestureResponder.EVT_Gesture_SingleTap
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// const struct FPointerEvent&             InMouseEvent                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UNeoUIGestureResponder::EVT_Gesture_SingleTap(const struct FPointerEvent& InMouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIGestureResponder", "EVT_Gesture_SingleTap");

	Params::NeoUIGestureResponder_EVT_Gesture_SingleTap Parms{};

	Parms.InMouseEvent = std::move(InMouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function NeoUI.NeoUIGestureResponder.GetCurPointerEvt
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// const struct FPointerEvent              ReturnValue                                            (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

const struct FPointerEvent UNeoUIGestureResponder::GetCurPointerEvt()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIGestureResponder", "GetCurPointerEvt");

	Params::NeoUIGestureResponder_GetCurPointerEvt Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NeoUI.NeoUI1Btn1TxtComp.GotoDisableStatus
// (Final, Native, Public, BlueprintCallable)

void UNeoUI1Btn1TxtComp::GotoDisableStatus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUI1Btn1TxtComp", "GotoDisableStatus");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function NeoUI.NeoUI1Btn1TxtComp.GotoNormalStatus
// (Final, Native, Public, BlueprintCallable)

void UNeoUI1Btn1TxtComp::GotoNormalStatus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUI1Btn1TxtComp", "GotoNormalStatus");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function NeoUI.NeoUI1Btn1TxtComp.UpdateTitle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// const class FText&                      TxtCont                                                (Parm, NativeAccessSpecifierPublic)

void UNeoUI1Btn1TxtComp::UpdateTitle(const class FText& TxtCont)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUI1Btn1TxtComp", "UpdateTitle");

	Params::NeoUI1Btn1TxtComp_UpdateTitle Parms{};

	Parms.TxtCont = std::move(TxtCont);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function NeoUI.NeoUIReusableVisualEntry.EVT_Gamepad_Active
// (Event, Public, BlueprintEvent)

void UNeoUIReusableVisualEntry::EVT_Gamepad_Active()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIReusableVisualEntry", "EVT_Gamepad_Active");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NeoUI.NeoUIReusableVisualEntry.EVT_Gamepad_Deactive
// (Event, Public, BlueprintEvent)

void UNeoUIReusableVisualEntry::EVT_Gamepad_Deactive()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIReusableVisualEntry", "EVT_Gamepad_Deactive");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NeoUI.NeoUIReusableVisualEntry.GetBindedDataObj
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UObject* UNeoUIReusableVisualEntry::GetBindedDataObj()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIReusableVisualEntry", "GetBindedDataObj");

	Params::NeoUIReusableVisualEntry_GetBindedDataObj Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NeoUI.NeoUIImageBase.SetVisual_AsContainer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                                    isVisual                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNeoUIImageBase::SetVisual_AsContainer(bool isVisual)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIImageBase", "SetVisual_AsContainer");

	Params::NeoUIImageBase_SetVisual_AsContainer Parms{};

	Parms.isVisual = isVisual;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function NeoUI.NeoUIImageBase.SetVisual_PureDisplay
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                                    isVisual                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNeoUIImageBase::SetVisual_PureDisplay(bool isVisual)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIImageBase", "SetVisual_PureDisplay");

	Params::NeoUIImageBase_SetVisual_PureDisplay Parms{};

	Parms.isVisual = isVisual;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function NeoUI.NeoUIImageBase.SetVisual_UserInteraction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                                    isVisual                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNeoUIImageBase::SetVisual_UserInteraction(bool isVisual)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIImageBase", "SetVisual_UserInteraction");

	Params::NeoUIImageBase_SetVisual_UserInteraction Parms{};

	Parms.isVisual = isVisual;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function NeoUI.NeoUIReusableVisualEntryWithDataTransformer.ForceConvertAndRender
// (Native, Public, BlueprintCallable)

void UNeoUIReusableVisualEntryWithDataTransformer::ForceConvertAndRender()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIReusableVisualEntryWithDataTransformer", "ForceConvertAndRender");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function NeoUI.NeoUI2TxtComp.UpdateTitle1
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// const class FText&                      NewValue                                               (Parm, NativeAccessSpecifierPublic)

void UNeoUI2TxtComp::UpdateTitle1(const class FText& NewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUI2TxtComp", "UpdateTitle1");

	Params::NeoUI2TxtComp_UpdateTitle1 Parms{};

	Parms.NewValue = std::move(NewValue);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function NeoUI.NeoUI2TxtComp.UpdateTitle2
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// const class FText&                      NewValue                                               (Parm, NativeAccessSpecifierPublic)

void UNeoUI2TxtComp::UpdateTitle2(const class FText& NewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUI2TxtComp", "UpdateTitle2");

	Params::NeoUI2TxtComp_UpdateTitle2 Parms{};

	Parms.NewValue = std::move(NewValue);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function NeoUI.NeoUIGamepadFocusManager.WidgetFocusLost
// (Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                          WidgetObj                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNeoUIGamepadFocusManager::WidgetFocusLost(class UWidget* WidgetObj)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIGamepadFocusManager", "WidgetFocusLost");

	Params::NeoUIGamepadFocusManager_WidgetFocusLost Parms{};

	Parms.WidgetObj = WidgetObj;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function NeoUI.NeoUIGamepadFocusManager.WidgetFocusReceived
// (Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                          WidgetObj                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNeoUIGamepadFocusManager::WidgetFocusReceived(class UWidget* WidgetObj)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIGamepadFocusManager", "WidgetFocusReceived");

	Params::NeoUIGamepadFocusManager_WidgetFocusReceived Parms{};

	Parms.WidgetObj = WidgetObj;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function NeoUI.NeoUI1Img2TxtComp.UpdateImage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTexture2D*                       BrushTXT2D                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNeoUI1Img2TxtComp::UpdateImage(class UTexture2D* BrushTXT2D)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUI1Img2TxtComp", "UpdateImage");

	Params::NeoUI1Img2TxtComp_UpdateImage Parms{};

	Parms.BrushTXT2D = BrushTXT2D;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function NeoUI.NeoUIGamepadConfirmButtonWrapperBase.ModifyIFATag
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// const class FString&                    TagStr                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNeoUIGamepadConfirmButtonWrapperBase::ModifyIFATag(const class FString& TagStr)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIGamepadConfirmButtonWrapperBase", "ModifyIFATag");

	Params::NeoUIGamepadConfirmButtonWrapperBase_ModifyIFATag Parms{};

	Parms.TagStr = std::move(TagStr);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function NeoUI.AnyTypePointerCursor.ClearArray
// (Final, Native, Public, BlueprintCallable)

void UAnyTypePointerCursor::ClearArray()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnyTypePointerCursor", "ClearArray");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function NeoUI.AnyTypePointerCursor.GeneratePointersArray
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class UAnyTypeStaticPointer*>    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UAnyTypeStaticPointer*> UAnyTypePointerCursor::GeneratePointersArray()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnyTypePointerCursor", "GeneratePointersArray");

	Params::AnyTypePointerCursor_GeneratePointersArray Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NeoUI.AnyTypePointerCursor.MoveToArrayByKey
// (Native, Public, BlueprintCallable)
// Parameters:
// class UAnyTypeUniversalPointerBase*     Pointer                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const class FString&                    Key                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAnyTypePointerCursor::MoveToArrayByKey(class UAnyTypeUniversalPointerBase* Pointer, const class FString& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnyTypePointerCursor", "MoveToArrayByKey");

	Params::AnyTypePointerCursor_MoveToArrayByKey Parms{};

	Parms.Pointer = Pointer;
	Parms.Key = std::move(Key);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function NeoUI.AnyTypePointerCursor.MoveToArrayByPath
// (Native, Public, BlueprintCallable)
// Parameters:
// class UAnyTypeUniversalPointerBase*     Pointer                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const class FString&                    Path                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAnyTypePointerCursor::MoveToArrayByPath(class UAnyTypeUniversalPointerBase* Pointer, const class FString& Path)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnyTypePointerCursor", "MoveToArrayByPath");

	Params::AnyTypePointerCursor_MoveToArrayByPath Parms{};

	Parms.Pointer = Pointer;
	Parms.Path = std::move(Path);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function NeoUI.AnyTypePointerCursor.MoveToArrayElementByIndex
// (Native, Public, BlueprintCallable)
// Parameters:
// class UAnyTypeUniversalPointerBase*     Pointer                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   ElementIndex                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAnyTypePointerCursor::MoveToArrayElementByIndex(class UAnyTypeUniversalPointerBase* Pointer, int32 ElementIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnyTypePointerCursor", "MoveToArrayElementByIndex");

	Params::AnyTypePointerCursor_MoveToArrayElementByIndex Parms{};

	Parms.Pointer = Pointer;
	Parms.ElementIndex = ElementIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function NeoUI.AnyTypePointerCursor.MoveToArrayElementByPath
// (Native, Public, BlueprintCallable)
// Parameters:
// class UAnyTypeUniversalPointerBase*     Pointer                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const class FString&                    array_path                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   ElementIndex                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAnyTypePointerCursor::MoveToArrayElementByPath(class UAnyTypeUniversalPointerBase* Pointer, const class FString& array_path, int32 ElementIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnyTypePointerCursor", "MoveToArrayElementByPath");

	Params::AnyTypePointerCursor_MoveToArrayElementByPath Parms{};

	Parms.Pointer = Pointer;
	Parms.array_path = std::move(array_path);
	Parms.ElementIndex = ElementIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function NeoUI.AnyTypePointerCursor.MoveToObjectByKey
// (Native, Public, BlueprintCallable)
// Parameters:
// class UAnyTypeUniversalPointerBase*     Pointer                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const class FString&                    Key                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAnyTypePointerCursor::MoveToObjectByKey(class UAnyTypeUniversalPointerBase* Pointer, const class FString& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnyTypePointerCursor", "MoveToObjectByKey");

	Params::AnyTypePointerCursor_MoveToObjectByKey Parms{};

	Parms.Pointer = Pointer;
	Parms.Key = std::move(Key);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function NeoUI.AnyTypePointerCursor.MoveToObjectByPath
// (Native, Public, BlueprintCallable)
// Parameters:
// class UAnyTypeUniversalPointerBase*     Pointer                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const class FString&                    Path                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAnyTypePointerCursor::MoveToObjectByPath(class UAnyTypeUniversalPointerBase* Pointer, const class FString& Path)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnyTypePointerCursor", "MoveToObjectByPath");

	Params::AnyTypePointerCursor_MoveToObjectByPath Parms{};

	Parms.Pointer = Pointer;
	Parms.Path = std::move(Path);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function NeoUI.AnyTypePointerCursor.NewElementPointer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                                   AtIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAnyTypeStaticPointer*            ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAnyTypeStaticPointer* UAnyTypePointerCursor::NewElementPointer(int32 AtIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnyTypePointerCursor", "NewElementPointer");

	Params::AnyTypePointerCursor_NewElementPointer Parms{};

	Parms.AtIndex = AtIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NeoUI.NeoUIButtonBase.SetVisual_AsContainer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                                    isVisual                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNeoUIButtonBase::SetVisual_AsContainer(bool isVisual)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIButtonBase", "SetVisual_AsContainer");

	Params::NeoUIButtonBase_SetVisual_AsContainer Parms{};

	Parms.isVisual = isVisual;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function NeoUI.NeoUIButtonBase.SetVisual_PureDisplay
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                                    isVisual                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNeoUIButtonBase::SetVisual_PureDisplay(bool isVisual)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIButtonBase", "SetVisual_PureDisplay");

	Params::NeoUIButtonBase_SetVisual_PureDisplay Parms{};

	Parms.isVisual = isVisual;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function NeoUI.NeoUIButtonBase.SetVisual_UserInteraction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                                    isVisual                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNeoUIButtonBase::SetVisual_UserInteraction(bool isVisual)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIButtonBase", "SetVisual_UserInteraction");

	Params::NeoUIButtonBase_SetVisual_UserInteraction Parms{};

	Parms.isVisual = isVisual;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function NeoUI.NeoUICanvasPanelBase.SetVisual_AsContainer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                                    isVisual                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNeoUICanvasPanelBase::SetVisual_AsContainer(bool isVisual)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUICanvasPanelBase", "SetVisual_AsContainer");

	Params::NeoUICanvasPanelBase_SetVisual_AsContainer Parms{};

	Parms.isVisual = isVisual;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function NeoUI.NeoUICanvasPanelBase.SetVisual_PureDisplay
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                                    isVisual                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNeoUICanvasPanelBase::SetVisual_PureDisplay(bool isVisual)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUICanvasPanelBase", "SetVisual_PureDisplay");

	Params::NeoUICanvasPanelBase_SetVisual_PureDisplay Parms{};

	Parms.isVisual = isVisual;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function NeoUI.NeoUICanvasPanelBase.SetVisual_UserInteraction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                                    isVisual                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNeoUICanvasPanelBase::SetVisual_UserInteraction(bool isVisual)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUICanvasPanelBase", "SetVisual_UserInteraction");

	Params::NeoUICanvasPanelBase_SetVisual_UserInteraction Parms{};

	Parms.isVisual = isVisual;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function NeoUI.NeoUIDispatcher.DelayCallback
// (Final, Native, Public)

void UNeoUIDispatcher::DelayCallback()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIDispatcher", "DelayCallback");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function NeoUI.NeoUIGamepadInputUtilLibrary.UIFocusDefaultDelay
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UNeoUIGamepadInputUtilLibrary::UIFocusDefaultDelay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("NeoUIGamepadInputUtilLibrary", "UIFocusDefaultDelay");

	Params::NeoUIGamepadInputUtilLibrary_UIFocusDefaultDelay Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NeoUI.NeoUIGlobalInputManager.IsGamepadMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UNeoUIGlobalInputManager::IsGamepadMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIGlobalInputManager", "IsGamepadMode");

	Params::NeoUIGlobalInputManager_IsGamepadMode Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NeoUI.NeoUIL10NCenter.L10N_CurLan
// (Final, Native, Static, Private)
// Parameters:
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UNeoUIL10NCenter::L10N_CurLan()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("NeoUIL10NCenter", "L10N_CurLan");

	Params::NeoUIL10NCenter_L10N_CurLan Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NeoUI.NeoUIL10NCenter.L10N_CurLanCode
// (Final, Native, Static, Public)
// Parameters:
// ENeoL10NCode                            ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

ENeoL10NCode UNeoUIL10NCenter::L10N_CurLanCode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("NeoUIL10NCenter", "L10N_CurLanCode");

	Params::NeoUIL10NCenter_L10N_CurLanCode Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NeoUI.NeoUIListView.EVT_InitOnce
// (Event, Public, BlueprintEvent)

void UNeoUIListView::EVT_InitOnce()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIListView", "EVT_InitOnce");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NeoUI.NeoUIListView.GetCurrentItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUserWidget*                      ReturnValue                                            (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UUserWidget* UNeoUIListView::GetCurrentItem()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIListView", "GetCurrentItem");

	Params::NeoUIListView_GetCurrentItem Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NeoUI.NeoUIListView.GetEntryForDataIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                                   TargetIndex                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UUserWidget*                      ReturnValue                                            (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UUserWidget* UNeoUIListView::GetEntryForDataIndex(int32 TargetIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIListView", "GetEntryForDataIndex");

	Params::NeoUIListView_GetEntryForDataIndex Parms{};

	Parms.TargetIndex = TargetIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NeoUI.NeoUIListView.GetFirstChild
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUserWidget*                      ReturnValue                                            (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UUserWidget* UNeoUIListView::GetFirstChild()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIListView", "GetFirstChild");

	Params::NeoUIListView_GetFirstChild Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NeoUI.NeoUIListView.GetFirstDataItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UObject* UNeoUIListView::GetFirstDataItem()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIListView", "GetFirstDataItem");

	Params::NeoUIListView_GetFirstDataItem Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NeoUI.NeoUIListView.GetLastChild
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUserWidget*                      ReturnValue                                            (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UUserWidget* UNeoUIListView::GetLastChild()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIListView", "GetLastChild");

	Params::NeoUIListView_GetLastChild Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NeoUI.NeoUIListView.HandleEntryInitialized
// (Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                          ItemWidget                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNeoUIListView::HandleEntryInitialized(class UObject* ItemWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIListView", "HandleEntryInitialized");

	Params::NeoUIListView_HandleEntryInitialized Parms{};

	Parms.ItemWidget = ItemWidget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function NeoUI.NeoUIListView.ResetAndFocus
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                          ReturnValue                                            (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWidget* UNeoUIListView::ResetAndFocus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIListView", "ResetAndFocus");

	Params::NeoUIListView_ResetAndFocus Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NeoUI.NeoUIListView.ResetAndScrollToTop
// (Final, Native, Public, BlueprintCallable)

void UNeoUIListView::ResetAndScrollToTop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIListView", "ResetAndScrollToTop");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function NeoUI.NeoUIListView.RetrieveFocusForCurrentItem
// (Final, Native, Public, BlueprintCallable)

void UNeoUIListView::RetrieveFocusForCurrentItem()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIListView", "RetrieveFocusForCurrentItem");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function NeoUI.NeoUINamedSlot.SetVisual_AsContainer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                                    isVisual                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNeoUINamedSlot::SetVisual_AsContainer(bool isVisual)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUINamedSlot", "SetVisual_AsContainer");

	Params::NeoUINamedSlot_SetVisual_AsContainer Parms{};

	Parms.isVisual = isVisual;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function NeoUI.NeoUINamedSlot.SetVisual_PureDisplay
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                                    isVisual                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNeoUINamedSlot::SetVisual_PureDisplay(bool isVisual)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUINamedSlot", "SetVisual_PureDisplay");

	Params::NeoUINamedSlot_SetVisual_PureDisplay Parms{};

	Parms.isVisual = isVisual;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function NeoUI.NeoUINamedSlot.SetVisual_UserInteraction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                                    isVisual                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNeoUINamedSlot::SetVisual_UserInteraction(bool isVisual)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUINamedSlot", "SetVisual_UserInteraction");

	Params::NeoUINamedSlot_SetVisual_UserInteraction Parms{};

	Parms.isVisual = isVisual;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function NeoUI.NeoUIProjectSettingUtil.ConsoleType
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UNeoUIProjectSettingUtil::ConsoleType()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("NeoUIProjectSettingUtil", "ConsoleType");

	Params::NeoUIProjectSettingUtil_ConsoleType Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NeoUI.NeoUIProjectSettingUtil.PlatformType
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UNeoUIProjectSettingUtil::PlatformType()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("NeoUIProjectSettingUtil", "PlatformType");

	Params::NeoUIProjectSettingUtil_PlatformType Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NeoUI.NeoUIRichTextBlockBase.UpdateWrapTextAt
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                                   vv                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNeoUIRichTextBlockBase::UpdateWrapTextAt(float vv)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUIRichTextBlockBase", "UpdateWrapTextAt");

	Params::NeoUIRichTextBlockBase_UpdateWrapTextAt Parms{};

	Parms.vv = vv;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function NeoUI.NeoUISubsystem.GetInputManager
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UNeoUIGlobalInputManager*         ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UNeoUIGlobalInputManager* UNeoUISubsystem::GetInputManager()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUISubsystem", "GetInputManager");

	Params::NeoUISubsystem_GetInputManager Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NeoUI.NeoUISubsystem.HideAllModules
// (Final, Native, Public, BlueprintCallable)

void UNeoUISubsystem::HideAllModules()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUISubsystem", "HideAllModules");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function NeoUI.NeoUISubsystem.HideAllModulesExcept
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                             ModuleID                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNeoUISubsystem::HideAllModulesExcept(class FName ModuleID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUISubsystem", "HideAllModulesExcept");

	Params::NeoUISubsystem_HideAllModulesExcept Parms{};

	Parms.ModuleID = ModuleID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function NeoUI.NeoUISubsystem.HideAllModulesExceptModuleArr
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// const TArray<class FName>&              ModuleArr                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UNeoUISubsystem::HideAllModulesExceptModuleArr(const TArray<class FName>& ModuleArr)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUISubsystem", "HideAllModulesExceptModuleArr");

	Params::NeoUISubsystem_HideAllModulesExceptModuleArr Parms{};

	Parms.ModuleArr = std::move(ModuleArr);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function NeoUI.NeoUISubsystem.HideModuleSingular
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                             ModuleID                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNeoUISubsystem::HideModuleSingular(class FName ModuleID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUISubsystem", "HideModuleSingular");

	Params::NeoUISubsystem_HideModuleSingular Parms{};

	Parms.ModuleID = ModuleID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function NeoUI.NeoUISubsystem.PropagateMessagesToAllModules
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UNeoUIUniversalModuleVMBase*      SRC                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                             MessageHeader                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const class FString&                    MessageBody                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNeoUISubsystem::PropagateMessagesToAllModules(class UNeoUIUniversalModuleVMBase* SRC, class FName MessageHeader, const class FString& MessageBody)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUISubsystem", "PropagateMessagesToAllModules");

	Params::NeoUISubsystem_PropagateMessagesToAllModules Parms{};

	Parms.SRC = SRC;
	Parms.MessageHeader = MessageHeader;
	Parms.MessageBody = std::move(MessageBody);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function NeoUI.NeoUISubsystem.ShowModules
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// const TArray<class FName>&              ModuleIDs                                              (Parm, ZeroConstructor, NativeAccessSpecifierPublic)

void UNeoUISubsystem::ShowModules(const TArray<class FName>& ModuleIDs)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUISubsystem", "ShowModules");

	Params::NeoUISubsystem_ShowModules Parms{};

	Parms.ModuleIDs = std::move(ModuleIDs);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function NeoUI.NeoUISubsystem.ShowModuleSingular
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                             ModuleID                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UNeoUIModuleVMBase*               ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UNeoUIModuleVMBase* UNeoUISubsystem::ShowModuleSingular(class FName ModuleID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUISubsystem", "ShowModuleSingular");

	Params::NeoUISubsystem_ShowModuleSingular Parms{};

	Parms.ModuleID = ModuleID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NeoUI.NeoUISubsystem.ShowModuleSingularIgnoreFlag
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                             ModuleID                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UNeoUIModuleVMBase*               ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UNeoUIModuleVMBase* UNeoUISubsystem::ShowModuleSingularIgnoreFlag(class FName ModuleID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUISubsystem", "ShowModuleSingularIgnoreFlag");

	Params::NeoUISubsystem_ShowModuleSingularIgnoreFlag Parms{};

	Parms.ModuleID = ModuleID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NeoUI.NeoUISubsystem.SwitchModuleSingular
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                             ModuleID                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNeoUISubsystem::SwitchModuleSingular(class FName ModuleID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUISubsystem", "SwitchModuleSingular");

	Params::NeoUISubsystem_SwitchModuleSingular Parms{};

	Parms.ModuleID = ModuleID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function NeoUI.NeoUISubsystem.GetModuleInstance
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                             ModuleID                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UNeoUIModuleVMBase*               ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UNeoUIModuleVMBase* UNeoUISubsystem::GetModuleInstance(class FName ModuleID) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUISubsystem", "GetModuleInstance");

	Params::NeoUISubsystem_GetModuleInstance Parms{};

	Parms.ModuleID = ModuleID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NeoUI.NeoUITextBlockBase.SetVisual_AsContainer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                                    isVisual                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNeoUITextBlockBase::SetVisual_AsContainer(bool isVisual)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUITextBlockBase", "SetVisual_AsContainer");

	Params::NeoUITextBlockBase_SetVisual_AsContainer Parms{};

	Parms.isVisual = isVisual;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function NeoUI.NeoUITextBlockBase.SetVisual_PureDisplay
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                                    isVisual                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNeoUITextBlockBase::SetVisual_PureDisplay(bool isVisual)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUITextBlockBase", "SetVisual_PureDisplay");

	Params::NeoUITextBlockBase_SetVisual_PureDisplay Parms{};

	Parms.isVisual = isVisual;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function NeoUI.NeoUITextBlockBase.SetVisual_UserInteraction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                                    isVisual                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNeoUITextBlockBase::SetVisual_UserInteraction(bool isVisual)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUITextBlockBase", "SetVisual_UserInteraction");

	Params::NeoUITextBlockBase_SetVisual_UserInteraction Parms{};

	Parms.isVisual = isVisual;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function NeoUI.NeoUITextBlockBase.UpdateWrapTextAt
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                                   vv                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNeoUITextBlockBase::UpdateWrapTextAt(float vv)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUITextBlockBase", "UpdateWrapTextAt");

	Params::NeoUITextBlockBase_UpdateWrapTextAt Parms{};

	Parms.vv = vv;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function NeoUI.NeoUITopLevelDebugView.HandleBtnDumpDataClick
// (Final, Native, Protected)

void UNeoUITopLevelDebugView::HandleBtnDumpDataClick()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUITopLevelDebugView", "HandleBtnDumpDataClick");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function NeoUI.NeoUITopLevelDebugView.HandleBtnFoo
// (Final, Native, Protected)

void UNeoUITopLevelDebugView::HandleBtnFoo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUITopLevelDebugView", "HandleBtnFoo");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function NeoUI.NeoUITopLevelDebugView.HandleBtnGCClick
// (Final, Native, Protected)

void UNeoUITopLevelDebugView::HandleBtnGCClick()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeoUITopLevelDebugView", "HandleBtnGCClick");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function NeoUI.NeoUIUtil.GetWidgetHoldoutRegion
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                          WorldContextObject                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidget*                          VisualObj                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                     ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FLinearColor UNeoUIUtil::GetWidgetHoldoutRegion(class UObject* WorldContextObject, class UWidget* VisualObj)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("NeoUIUtil", "GetWidgetHoldoutRegion");

	Params::NeoUIUtil_GetWidgetHoldoutRegion Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.VisualObj = VisualObj;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NeoUI.NeoUIUtil.NeoUI_LoadDynamicTexture
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// const class FString&                    TexturePath                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture2D*                       ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTexture2D* UNeoUIUtil::NeoUI_LoadDynamicTexture(const class FString& TexturePath)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("NeoUIUtil", "NeoUI_LoadDynamicTexture");

	Params::NeoUIUtil_NeoUI_LoadDynamicTexture Parms{};

	Parms.TexturePath = std::move(TexturePath);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NeoUI.NeoUIUtil.NeoUI_SetDynamicTextureForImg
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UNeoUIImageBase*                  IMG                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const class FString&                    TexturePath                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UNeoUIUtil::NeoUI_SetDynamicTextureForImg(class UNeoUIImageBase* IMG, const class FString& TexturePath)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("NeoUIUtil", "NeoUI_SetDynamicTextureForImg");

	Params::NeoUIUtil_NeoUI_SetDynamicTextureForImg Parms{};

	Parms.IMG = IMG;
	Parms.TexturePath = std::move(TexturePath);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


SDK_NAMESPACE_END
