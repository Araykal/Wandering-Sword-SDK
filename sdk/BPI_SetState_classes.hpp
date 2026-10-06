#pragma once



// Package: BPI_SetState

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass BPI_SetState.BPI_SetState_C
// 0x0000 (0x0000 - 0x0000)
class IBPI_SetState_C final
{
public:
	void ToggleState(bool bOn);

public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPI_SetState_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPI_SetState_C")
	}
	static class IBPI_SetState_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_SetState_C>();
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
DUMPER7_ASSERTS_IBPI_SetState_C;

SDK_NAMESPACE_END
