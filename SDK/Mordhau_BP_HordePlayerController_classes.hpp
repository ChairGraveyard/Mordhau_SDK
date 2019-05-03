#pragma once

// Mordhau (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_HordePlayerController.BP_HordePlayerController_C
// 0x0048 (0x0B80 - 0x0B38)
class ABP_HordePlayerController_C : public ABP_MordhauPlayerController_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0B38(0x0008) (Transient, DuplicateTransient)
	unsigned char                                      PurchaseTrigger;                                          // 0x0B40(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0B41(0x0007) MISSED OFFSET
	class UClass*                                      LastHeadArmor;                                            // 0x0B48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      LastChestArmor;                                           // 0x0B50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      LastLegArmor;                                             // 0x0B58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UClass*>                              LastEquipment;                                            // 0x0B60(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<unsigned char>                              LastEquipmentAmmo;                                        // 0x0B70(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_HordePlayerController.BP_HordePlayerController_C");
		return ptr;
	}


	void CustomizeEquipment(class AMordhauEquipment* Equipment);
	void OnRep_PurchaseTrigger();
	void UserConstructionScript();
	void OnAfterPossess(class APawn** APawn);
	void ExecuteUbergraph_BP_HordePlayerController(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
