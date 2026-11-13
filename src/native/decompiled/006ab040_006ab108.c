#include "006ab040_006ab108.h"



undefined4 fn_006ab108(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar1 = fn_006f7a0c(DAT_008977e0);
  uVar4 = *(undefined4 *)(iVar1 + 0x3c);
  iVar1 = fn_006f7c6c(uVar4);
  iVar3 = 0;
  if (0 < iVar1) {
    do {
      iVar2 = fn_006f7c20(uVar4,iVar3);
      iVar2 = fn_0065fd34(iVar2 + 0x24,*(undefined4 *)(param_1 + 0x164),0);
      if (iVar2 != 0) {
        return 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  return 0;
}



void fn_006ab0e0(int param_1)

{
  fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),
               *(undefined4 *)(param_1 + *(char *)(param_1 + 0x208) * 4 + 0x1f8));
  return;
}



char * fn_006ab040(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  uint uVar5;
  
  iVar1 = fn_006f7358(DAT_008977e0);
  if (iVar1 == 0) {
    pcVar4 = *(char **)(param_1 + 0x390);
    if (pcVar4 == (char *)0x0) {
      pcVar4 = "bf_H00_00";
    }
    return pcVar4;
  }
  uVar2 = fn_002fbd30(param_1 + 0x20);
  uVar5 = 0;
  do {
    uVar3 = fn_006afaf4(*(undefined4 *)(DAT_008977e0 + 0x1c),uVar2);
    iVar1 = fn_003035b0(uVar3,(&DAT_007be7a0)[uVar5 * 2]);
    if (iVar1 == 0) {
      return (&PTR_s_bf_H00_00_007be7a4)[uVar5 * 2];
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < 0xf);
  return "bf_H00_00";
}


