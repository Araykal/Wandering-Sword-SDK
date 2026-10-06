#pragma once



// Package: CustomMeshComponent

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


SDK_NAMESPACE_START

// ScriptStruct CustomMeshComponent.CustomMeshTriangle
// 0x0024 (0x0024 - 0x0000)
struct FCustomMeshTriangle final
{
public:
	struct FVector                                Vertex0;                                           // 0x0000(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                Vertex1;                                           // 0x000C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                Vertex2;                                           // 0x0018(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
DUMPER7_ASSERTS_FCustomMeshTriangle;

SDK_NAMESPACE_END
