#include "003f23fc_003f2e7ca.h"



void fn_003f2540(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_1c;
  
  *(undefined4 *)(param_1[0x2c] + 0xc) = param_2;
  piVar1 = (int *)fn_006e810c(param_1[0x2c]);
  iVar5 = *piVar1;
  if (iVar5 < 6) {
    fn_0029052c(iVar5);
  }
  iVar2 = fn_002e2dc8(*(undefined4 *)(DAT_00897804 + 0x20),iVar5);
  if ((iVar2 == 0) || (iVar2 = fn_006cbb48(param_1,iVar5), iVar2 == 0)) {
    *(undefined4 *)(param_1[0x17] + 0x38) = 0;
    if ((iVar5 == 3) && (iVar2 = fn_00154ac8(0x1bc), iVar2 == 0)) {
      iVar5 = fn_003f4fe0(*(undefined4 *)(DAT_008977e0 + 0x50));
      uVar4 = fn_0022f584(*(undefined4 *)(&DAT_00891c10 + iVar5 * 4),0);
      fn_0068974c(param_1,uVar4,0,1);
      fn_006f72b4(DAT_008977e0);
      fn_002c32c4(param_1,param_2,0);
    }
    else {
      uVar4 = fn_0022f584(DAT_00891bd4,0);
      fn_0068974c(param_1,uVar4,0,1);
      uVar4 = fn_00290488(iVar5);
      fn_002c32c4(param_1,param_2,uVar4);
    }
    fn_0068ab44(param_1,0x100094d);
    return;
  }
  switch(iVar5) {
  case 0:
    fn_006899f4(param_1,0xda,0);
    break;
  case 1:
    fn_003f4fc8(*(undefined4 *)(DAT_008977e0 + 0x50));
    fn_003f2418(param_1,1);
    break;
  case 2:
    fn_003f4fb0(*(undefined4 *)(DAT_008977e0 + 0x50));
    fn_003f2418(param_1,1);
    break;
  case 3:
    *(undefined4 *)(param_1[0x17] + 0x38) = 0;
    iVar5 = fn_003f4fe0(*(undefined4 *)(DAT_008977e0 + 0x50));
    uVar4 = fn_0022f584(*(undefined4 *)(&DAT_00891c10 + iVar5 * 4),0);
    fn_0068974c(param_1,uVar4,0,1);
    fn_006f72b4(DAT_008977e0);
    local_1c = 0xff808080;
    fn_002c37e0(param_1,param_2,&local_1c);
    fn_002c32c4(param_1,param_2,0);
code_r0x003f27d4:
                    /* WARNING: Subroutine does not return */
    fn_001638a0();
  case 4:
    iVar5 = (**(code **)(*param_1 + 8))(param_1);
    piVar1 = *(int **)(iVar5 + 0x18);
    if (piVar1 != (int *)0x0) {
      puVar3 = (undefined4 *)(**(code **)(*piVar1 + 0xc))(piVar1);
      do {
        if (puVar3 == &DAT_00891a14) break;
        puVar3 = (undefined4 *)*puVar3;
      } while (puVar3 != (undefined4 *)0x0);
    }
                    /* WARNING: Subroutine does not return */
    fn_001638a0();
  case 5:
    (**(code **)(*(int *)param_1[0x2f] + 0xc))();
    *(undefined1 *)(param_1[0x2f] + 8) = 3;
    fn_006899f4(param_1,0x68,0,1);
    break;
  default:
    if (iVar5 == 3) goto code_r0x003f27d4;
  }
  fn_0068ab44(param_1,0x100094b);
  return;
}



void fn_003f2510(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xc0,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003f2aa4(iVar1,param_1);
  return;
}



void fn_003f24b8(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (-1 < *(int *)(param_1 + 0xb8)) {
    puVar1 = (undefined4 *)fn_006e810c(*(undefined4 *)(param_1 + 0xb0));
    uVar2 = *puVar1;
    fn_0029052c(uVar2);
    uVar2 = fn_00290488(uVar2);
    fn_002c32c4(param_1,*(undefined4 *)(param_1 + 0xb8),uVar2);
  }
                    /* WARNING: Subroutine does not return */
  fn_002c3de4(param_1,param_2);
}



void fn_003f2418(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (-1 < *(int *)(param_1 + 0xb8)) {
    puVar1 = (undefined4 *)fn_006e810c(*(undefined4 *)(param_1 + 0xb0));
    fn_0029052c(*puVar1);
  }
  iVar2 = *(int *)(*(int *)(param_1 + 0xb0) + 8);
  if ((iVar2 == 0) || (param_2 != 0)) {
    fn_006899f4(param_1,0,0);
    fn_00689d04(param_1,0);
    fn_00689878(param_1,0);
  }
  else {
    fn_006899f4(param_1,iVar2,0,1);
  }
                    /* WARNING: Could not recover jumptable at 0x003f2498. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0xb0) + 0xc))();
  return;
}



void fn_003f23fc(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 unaff_r4;
  
  fn_002c3d68();
  if (-1 < *(int *)(param_1 + 0xb8)) {
    puVar1 = (undefined4 *)fn_006e810c(*(undefined4 *)(param_1 + 0xb0));
    fn_0029052c(*puVar1);
  }
  iVar2 = *(int *)(*(int *)(param_1 + 0xb0) + 8);
  if (iVar2 == 0) {
    fn_006899f4(param_1,0,0,0,unaff_r4);
    fn_00689d04(param_1,0);
    fn_00689878(param_1,0);
  }
  else {
    fn_006899f4(param_1,iVar2,0,1,unaff_r4);
  }
                    /* WARNING: Could not recover jumptable at 0x003f2498. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0xb0) + 0xc))();
  return;
}


