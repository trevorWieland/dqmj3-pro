#include "004116c4_00411cc4aa.h"



void fn_00411914(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x14,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00411944(iVar1,param_1);
  return;
}



void fn_004117f4(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = &PTR_LAB_00838838;
  uVar1 = param_1[0x43];
  uVar2 = uVar1;
  if ((uint)param_1[0x44] < uVar1) {
    do {
      uVar2 = uVar2 + 0x10;
    } while (uVar2 != param_1[0x44]);
  }
  fn_001008c4(uVar1,(int)(param_1[0x45] - uVar1) >> 4,0);
  fn_0074908c(param_1);
  fn_002feef8();
  return;
}



undefined4 * fn_004117bc(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0043d350();
  *puVar1 = &PTR_LAB_00838838;
  *(undefined1 *)(puVar1 + 0x41) = 0;
  puVar1[0x42] = 0;
  puVar1[0x43] = 0;
  puVar1[0x44] = 0;
  puVar1[0x45] = 0;
  return puVar1;
}



char * fn_004116c4(int param_1)

{
  switch(*(undefined1 *)(param_1 + 0x104)) {
  case 0:
    return "round";
  case 1:
    return "sakusen_only";
  case 2:
    return "replacing";
  case 3:
    return "species";
  case 4:
    return "inputtime";
  case 5:
    return "sentousokudo";
  case 6:
    return "comm_level";
  case 7:
    return "syussinti";
  case 8:
    return "partyrank";
  default:
    return "";
  }
}


