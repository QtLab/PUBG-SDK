#pragma once

// PlayerUnknown's Battlegrounds (2.5.39.19) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Powerup_MedkitBandageOnHand.Powerup_MedkitBandageOnHand_C
// 0x0008 (0x03F0 - 0x03E8)
class APowerup_MedkitBandageOnHand_C : public APowerup_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03E8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Powerup_MedkitBandageOnHand.Powerup_MedkitBandageOnHand_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Powerup_MedkitBandageOnHand(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
