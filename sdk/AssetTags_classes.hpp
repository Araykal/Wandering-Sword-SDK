#pragma once



// Package: AssetTags

#include "Basic.hpp"

#include "Engine_classes.hpp"


SDK_NAMESPACE_START

// Class AssetTags.AssetTagsSubsystem
// 0x0000 (0x0030 - 0x0030)
class UAssetTagsSubsystem final : public UEngineSubsystem
{
public:
	bool CollectionExists(const class FName Name_0);
	TArray<struct FAssetData> GetAssetsInCollection(const class FName Name_0);
	TArray<class FName> GetCollections();
	TArray<class FName> GetCollectionsContainingAsset(const class FName AssetPathName);
	TArray<class FName> GetCollectionsContainingAssetData(const struct FAssetData& AssetData);
	TArray<class FName> GetCollectionsContainingAssetPtr(const class UObject* AssetPtr);

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("AssetTagsSubsystem")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"AssetTagsSubsystem")
	}
	static class UAssetTagsSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAssetTagsSubsystem>();
	}
};
DUMPER7_ASSERTS_UAssetTagsSubsystem;

SDK_NAMESPACE_END
