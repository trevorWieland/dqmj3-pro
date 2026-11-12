#include "006ab190_006ab9a8b.h"



char * fn_006ab9a8(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = fn_002fbd30(param_1 + 0x20);
  uVar4 = 0;
  do {
    uVar2 = fn_006afaf4(*(undefined4 *)(DAT_008977e0 + 0x1c),uVar1);
    iVar3 = fn_003035b0(uVar2,(&DAT_007be7a0)[uVar4 * 2]);
    if (iVar3 == 0) {
      return (&PTR_s_bf_H00_00_007be7a4)[uVar4 * 2];
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0xf);
  return "bf_H00_00";
}



int fn_006ab984(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x378);
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0x3ac) == '\0') {
      iVar1 = *(int *)(param_1 + 0x18c);
    }
    else {
      iVar1 = *(int *)(param_1 + 0x3b4);
    }
  }
  return iVar1;
}


