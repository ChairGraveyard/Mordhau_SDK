// Mordhau (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_LongSkirt_Cover.BP_LongSkirt_Cover_C.UserConstructionScript
// (BlueprintCallable, BlueprintEvent)

void UBP_LongSkirt_Cover_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LongSkirt_Cover.BP_LongSkirt_Cover_C.UserConstructionScript");

	UBP_LongSkirt_Cover_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
