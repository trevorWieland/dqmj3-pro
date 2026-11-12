#include "005db59c_005dbfa4aa.h"



undefined * fn_005db614(int param_1)

{
  return (&PTR_s_race_ranking_race_asfor_00896ad8)[*(byte *)(param_1 + 8)];
}



undefined * fn_005db5e0(int param_1,int param_2)

{
  byte bVar1;
  undefined **ppuVar2;
  
  bVar1 = *(byte *)(param_1 + 8);
  if (bVar1 == 0) {
    ppuVar2 = &PTR_s_race_facility_explain_ranking_ra_00896b18;
  }
  else {
    ppuVar2 = &PTR_s_race_facility_explain_item_list1_00896ae4;
  }
  if ((1 < bVar1) && (bVar1 == 2)) {
    ppuVar2 = &PTR_s_race_facility_explain_happening__00896b00;
  }
  return ppuVar2[param_2];
}



undefined * fn_005db5ac(int param_1,int param_2)

{
  byte bVar1;
  undefined **ppuVar2;
  
  bVar1 = *(byte *)(param_1 + 8);
  if (bVar1 == 0) {
    ppuVar2 = &PTR_s_race_facility_explain_ranking_ra_00896b5c;
  }
  else {
    ppuVar2 = &PTR_s_race_facility_explain_item_body1_00896b28;
  }
  if ((1 < bVar1) && (bVar1 == 2)) {
    ppuVar2 = &PTR_s_race_facility_explain_happening__00896b44;
  }
  return ppuVar2[param_2];
}



undefined * fn_005db59c(undefined4 param_1,int param_2)

{
  return (&PTR_s_race_ranking_race_asfor_00896ad8)[param_2];
}


