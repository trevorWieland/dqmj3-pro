#include "0044a610_0044b18cbab.h"



void fn_0044ab98(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined1 auStack_30 [32];
  
  if (*(int *)(param_1 + 0xc) != -1) {
    fn_002b1810(*(undefined4 *)(param_1 + 4));
    *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  }
  *(undefined1 *)(param_1 + 0x10) = 2;
  fn_00301a9c(auStack_30,&DAT_007ba154,0x1e);
  fn_00294690(param_2,auStack_30);
  uVar2 = fn_002b15d4(*(undefined4 *)(param_1 + 4),1,auStack_30);
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  piVar3 = (int *)fn_002b1588(*(undefined4 *)(param_1 + 4),uVar2);
  (**(code **)(*piVar3 + 0x1c))(piVar3,0);
  fn_0069e2e4(piVar3);
  if ((((byte)DAT_008c62fc & 1) == 0) && (iVar4 = fn_00303afc(&DAT_008c62fc), iVar4 != 0)) {
    DAT_008f9e2c = 0;
    DAT_008f9e30 = 0;
    DAT_008f9e34 = 0;
  }
  iVar1 = DAT_008f9e34;
  iVar4 = DAT_008f9e30;
  piVar3[7] = DAT_008f9e2c;
  piVar3[8] = iVar4;
  piVar3[9] = iVar1;
  return;
}



void fn_0044ab60(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = fn_002b1588(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0xc));
  if (*(char *)(param_1 + 0x10) == '\x01' || *(char *)(param_1 + 0x10) == '\x02') {
    fn_0069e464(uVar1,0xb,0);
    return;
  }
  return;
}


