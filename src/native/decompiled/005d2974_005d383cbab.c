#include "005d2974_005d383cbab.h"



void fn_005d2e6c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xf0,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005d3804(iVar1,param_1);
  return;
}



/* WARNING: Removing unreachable block (ram,0x005d2e10) */

void fn_005d2d78(int param_1,short *param_2,int param_3)

{
  undefined4 uVar1;
  short *psVar2;
  uint uVar3;
  undefined4 uVar4;
  short *psVar5;
  short *psVar6;
  undefined1 auStack_40 [40];
  
  uVar4 = *(undefined4 *)(*(int *)(param_1 + 0xe4) + 0xc);
  uVar1 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),uVar4);
  uVar4 = fn_0028b860(*(undefined4 *)(DAT_00897804 + 0xc),uVar4);
  psVar2 = (short *)fn_00230a84(uVar4,0);
  fn_00231128(auStack_40,0x11,uVar1,0);
  uVar3 = 0;
  psVar6 = param_2;
  psVar5 = param_2;
  if (param_3 != 1) {
    do {
      uVar3 = uVar3 + 1;
      psVar6 = psVar5 + 1;
      *psVar5 = *psVar2;
      if (psVar2[1] == 0) break;
      psVar2 = psVar2 + 1;
      psVar5 = psVar6;
    } while (uVar3 < param_3 - 1U);
  }
  *psVar6 = 0;
  uVar1 = fn_00100b58(auStack_40);
  fn_00231d04(param_2,param_3,auStack_40,uVar1);
  return;
}


