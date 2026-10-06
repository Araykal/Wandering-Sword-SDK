#pragma once



// Package: JHNeoUISeqPlayer

#include "Basic.hpp"

#include "JH_classes.hpp"


SDK_NAMESPACE_START

// WidgetBlueprintGeneratedClass JHNeoUISeqPlayer.JHNeoUISeqPlayer_C
// 0x0000 (0x0290 - 0x0290)
class UJHNeoUISeqPlayer_C final : public UJHNeoUISequenceImgPlayer
{
public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("JHNeoUISeqPlayer_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"JHNeoUISeqPlayer_C")
	}
	static class UJHNeoUISeqPlayer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UJHNeoUISeqPlayer_C>();
	}
};
DUMPER7_ASSERTS_UJHNeoUISeqPlayer_C;

SDK_NAMESPACE_END
