#include "003efe54_003f0e9cb.h"



void fn_003f0e9c(int param_1)

{
  int iVar1;
  int iVar2;
  int local_10;
  int local_c;
  
  fn_001db0c0();
  if (*(char *)(*(int *)(param_1 + 0x1a0) + 0xf8) != '\x03') {
    local_c = param_1 + 0x20;
    local_10 = param_1 + 0x2c;
    fn_00211a98(param_1,*(int *)(param_1 + 0x1a0),0,param_1 + 0x38);
  }
  iVar1 = DAT_00897808;
  if (((*(char *)(param_1 + 0x19c) != '\0') && (*(char *)(param_1 + 0x19c) == '\x01')) &&
     (*(int *)(DAT_00897808 + 0x14) == *(int *)(DAT_00897808 + 0xc))) {
    iVar2 = *(int *)(param_1 + 0x1a4);
    *(int *)(param_1 + 0x1a4) = iVar2 + -1;
    if (iVar2 == 0) {
      *(undefined1 *)(param_1 + 0x19c) = 0;
    }
    else {
      local_10 = 0;
      local_c = -0x7fffff01;
      fn_0068866c(iVar1,&local_10,&local_c,0x10);
    }
  }
  return;
}



undefined4 fn_003f0e40(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  uVar1 = fn_002113c8();
  iVar2 = fn_00145b00(0xfc,&DAT_00812c8c);
  piVar3 = (int *)0x0;
  if (iVar2 != 0) {
    piVar3 = (int *)fn_0065fdf0();
  }
  piVar4 = *(int **)(param_1 + 0x1a0);
  if (piVar4 != piVar3) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
    *(int **)(param_1 + 0x1a0) = piVar3;
  }
  return uVar1;
}



void fn_003f0a1c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uStack_10;
  
  if (((*(char *)(param_1 + 0x83) == '\0') &&
      (uStack_10 = param_4, uVar1 = fn_006f6ab4(param_1), (uVar1 & 0x400000) != 0)) &&
     (iVar2 = fn_00154ac8(0x33a), iVar2 != 0)) {
    *(undefined1 *)(param_1 + 0x83) = 1;
    uVar3 = fn_001603f8(&uStack_10,0xff);
    fn_00163988(DAT_00897808,uVar3,0x14);
    uVar3 = fn_001603f8(&uStack_10,0xff);
    fn_00163988(DAT_0089780c,uVar3,0x14);
                    /* WARNING: Subroutine does not return */
    fn_001638a0();
  }
  return;
}



void fn_003f09ec(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xa8,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003f0ccc(iVar1,param_1);
  return;
}



undefined4 * fn_003f0ccc(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)fn_0068ab5c();
  *puVar1 = &DAT_008347e0;
  puVar1[0x19] = *(undefined4 *)(param_2 + 8);
  puVar1[0x1a] = 0xffffffff;
  puVar1[0x1b] = 0xffffffff;
  puVar1[0x1d] = 0;
  puVar1[0x1c] = 0xffffffff;
  puVar1[0x1e] = 0;
  puVar1[0x1f] = 0;
  *(undefined1 *)(puVar1 + 0x20) = 0;
  *(undefined1 *)((int)puVar1 + 0x81) = 0;
  *(undefined1 *)((int)puVar1 + 0x82) = 0;
  *(undefined1 *)((int)puVar1 + 0x83) = 0;
  puVar1[0x21] = 0;
  puVar1[0x22] = 0;
  puVar1[0x23] = 0;
  puVar1[0x24] = 0;
  puVar1[0x25] = 0;
  puVar1[0x26] = 0;
  puVar1[0x27] = 0;
  iVar2 = fn_00145b00(8,&DAT_00812c8c);
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = fn_002919b8();
  }
  puVar1[0x28] = uVar3;
  puVar1[0x29] = 0;
  return puVar1;
}



void fn_003f06c4(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(*(int *)(param_1 + 0x88) + param_2 * 0x14);
  (**(code **)(*piVar1 + 0x68))(piVar1,&LAB_003f072c,0);
  piVar1 = *(int **)(*(int *)(param_1 + 0x94) + param_2 * 0x14);
  (**(code **)(*piVar1 + 0x68))(piVar1,&LAB_003f072c,0);
  piVar1 = *(int **)(*(int *)(param_1 + 0x94) + param_2 * 0x14 + 4);
                    /* WARNING: Could not recover jumptable at 0x003f0728. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 0x68))(piVar1,&LAB_003f072c,0);
  return;
}


