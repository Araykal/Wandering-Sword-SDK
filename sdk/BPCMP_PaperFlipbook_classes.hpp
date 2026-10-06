#pragma once



// Package: BPCMP_PaperFlipbook

#include "Basic.hpp"

#include "JH_classes.hpp"


SDK_NAMESPACE_START

// BlueprintGeneratedClass BPCMP_PaperFlipbook.BPCMP_PaperFlipbook_C
// 0x0000 (0x0248 - 0x0248)
class UBPCMP_PaperFlipbook_C final : public UJHNeoUIPaperFlipbookImage
{
public:
	static class UClass* StaticClass()
	{
		BP_STATIC_CLASS_IMPL("BPCMP_PaperFlipbook_C")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BPCMP_PaperFlipbook_C")
	}
	static class UBPCMP_PaperFlipbook_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPCMP_PaperFlipbook_C>();
	}
};
DUMPER7_ASSERTS_UBPCMP_PaperFlipbook_C;

SDK_NAMESPACE_END
