#pragma once



// Package: NiagaraCore

#include "Basic.hpp"


SDK_NAMESPACE_START

// ScriptStruct NiagaraCore.NiagaraCompileHash
// 0x0010 (0x0010 - 0x0000)
struct FNiagaraCompileHash final
{
public:
	TArray<uint8>                                 DataHash;                                          // 0x0000(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
};
DUMPER7_ASSERTS_FNiagaraCompileHash;

SDK_NAMESPACE_END
