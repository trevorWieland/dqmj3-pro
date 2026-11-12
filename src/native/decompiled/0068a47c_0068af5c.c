#include "0068a47c_0068af5c.h"



void fn_0068af5c(int param_1)

{
  if (*(char *)(param_1 + 8) == '\0') {
    *(undefined1 *)(param_1 + 8) = 1;
  }
  return;
}



void fn_0068af3c(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar2 == 0) {
    return;
  }
  piVar3 = *(int **)(iVar2 + 0x18);
  piVar1 = (int *)*piVar3;
  if (piVar1 != piVar3) {
    while (piVar1[2] != param_1) {
      piVar1 = (int *)*piVar1;
      if (piVar1 == piVar3) {
        return;
      }
    }
    if (piVar1 != piVar3) {
      *(int *)piVar1[1] = *piVar1;
      *(int *)(*piVar1 + 4) = piVar1[1];
      *(int *)(iVar2 + 0x1c) = *(int *)(iVar2 + 0x1c) + -1;
      *piVar1 = *(int *)(iVar2 + 0xc);
      *(int **)(iVar2 + 0xc) = piVar1;
    }
  }
  return;
}



void fn_0068aecc(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  if (*(int **)(param_1 + 0x1c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x1c) + 4))();
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  if (*(int *)(param_1 + 0x18) != -1) {
    fn_00148348(*(undefined4 *)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x14) != -1) {
                    /* WARNING: Subroutine does not return */
    fn_001482f4(*(undefined4 *)(param_1 + 0x10));
  }
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar2 == 0) {
    return;
  }
  piVar3 = *(int **)(iVar2 + 0x18);
  piVar1 = (int *)*piVar3;
  if (piVar1 != piVar3) {
    while (piVar1[2] != param_1) {
      piVar1 = (int *)*piVar1;
      if (piVar1 == piVar3) {
        return;
      }
    }
    if (piVar1 != piVar3) {
      *(int *)piVar1[1] = *piVar1;
      *(int *)(*piVar1 + 4) = piVar1[1];
      *(int *)(iVar2 + 0x1c) = *(int *)(iVar2 + 0x1c) + -1;
      *piVar1 = *(int *)(iVar2 + 0xc);
      *(int **)(iVar2 + 0xc) = piVar1;
    }
  }
  return;
}



void fn_0068aeac(int param_1,int param_2)

{
  if (param_2 == 0) {
    return;
  }
  *(int *)(param_1 + 0xc) = param_2;
  fn_0028f978(param_2,param_1);
  return;
}



void fn_0068ae98(int param_1)

{
  if (*(char *)(param_1 + 8) != '\0') {
    *(undefined1 *)(param_1 + 8) = 0;
  }
  return;
}



undefined4 * fn_0068ad5c(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  
  *param_1 = &DAT_00851024;
  if ((int *)param_1[0x11] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x11] + 4))();
    param_1[0x11] = 0;
  }
  if ((int *)param_1[0x12] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x12] + 4))();
    param_1[0x12] = 0;
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x11] + 4))();
  }
  piVar5 = param_1 + 8;
  piVar4 = (int *)param_1[0xc];
  if (piVar4 != (int *)0x0) {
    piVar2 = (int *)*piVar4;
    while (piVar1 = piVar2, piVar1 != piVar4) {
      piVar2 = (int *)param_1[0xc];
      if (piVar1 != (int *)param_1[0xc]) {
        piVar2 = (int *)*piVar1;
        *(int *)piVar1[1] = *piVar1;
        *(int *)(*piVar1 + 4) = piVar1[1];
        param_1[0xd] = param_1[0xd] + -1;
        *piVar1 = param_1[9];
        param_1[9] = piVar1;
      }
    }
    puVar3 = (undefined4 *)param_1[0xc];
    *puVar3 = param_1[9];
    param_1[9] = puVar3;
    piVar4 = (int *)*piVar5;
    while (piVar4 != (int *)0x0) {
      *piVar5 = *piVar4;
      fn_001008c4(piVar4[2],piVar4[1],0);
      fn_001008c4(piVar4,1,0);
      piVar4 = (int *)*piVar5;
    }
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
  }
  return param_1;
}



void fn_0068aad4(int *param_1)

{
  switch((char)param_1[3]) {
  default:
    return;
  case '\x02':
  case '\x03':
  case '\x05':
    (**(code **)(*(int *)param_1[0x11] + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x0068ab24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xfc))(param_1);
    return;
  }
}



void fn_0068aab0(int *param_1)

{
  if (*(byte *)(param_1 + 3) == 0 || 5 < *(byte *)(param_1 + 3)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0068aac8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xf0))();
  return;
}



void fn_0068aa84(int param_1)

{
  fn_0016a43c(*(undefined4 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x6c));
                    /* WARNING: Subroutine does not return */
  fn_001482f4(*(undefined4 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x68));
}



void fn_0068aa48(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 local_c [3];
  
  local_c[0] = *param_2;
  fn_001f7bfc(*(undefined4 *)(*(int *)(param_1 + 4) + 0x18),local_c,param_3,param_4,param_5);
  return;
}



void fn_0068a524(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 local_c [3];
  
  local_c[0] = *param_2;
  fn_001f76b8(*(undefined4 *)(*(int *)(param_1 + 4) + 0x18),local_c,param_3,param_4,param_5);
  return;
}



void fn_0068a4f4(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(100,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0068ab5c(iVar1,param_1);
  return;
}



undefined4 * fn_0068ab5c(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  puVar1 = (undefined4 *)fn_006896e0();
  *puVar1 = &DAT_00851024;
  puVar1[2] = &DAT_008593f0;
  *(undefined1 *)(puVar1 + 3) = 0;
  *(undefined1 *)((int)puVar1 + 0xd) = 0;
  *(undefined1 *)((int)puVar1 + 0xe) = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  *(undefined1 *)(puVar1 + 7) = 1;
  *(undefined1 *)((int)puVar1 + 0x1d) = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  piVar2 = (int *)fn_00100fc6(0xc,0);
  iVar3 = fn_00100fc6(0x10,0);
  piVar2[2] = iVar3;
  *piVar2 = puVar1[8];
  piVar2[1] = 1;
  puVar1[8] = piVar2;
  iVar3 = piVar2[2];
  puVar1[10] = iVar3;
  puVar1[0xb] = iVar3 + 0x10;
  puVar1[0xc] = iVar3;
  puVar1[10] = iVar3 + 0x10;
  *(int *)iVar3 = iVar3;
  *(undefined4 *)(puVar1[0xc] + 4) = puVar1[0xc];
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = *(undefined4 *)(param_2 + 0x28);
  iVar3 = fn_00145b00(0x28,&DAT_00812c8c);
  uVar4 = 0;
  if (iVar3 != 0) {
    uVar4 = fn_00245590(iVar3,param_2);
  }
  puVar1[0x11] = uVar4;
  iVar3 = fn_00145b00(0x24,&DAT_00812c8c);
  uVar4 = 0;
  if (iVar3 != 0) {
    uVar4 = fn_0028fb58(iVar3,param_2);
  }
  puVar1[0x12] = uVar4;
  puVar7 = (undefined4 *)0x0;
  *(undefined1 *)(puVar1 + 0x13) = 0;
  *(undefined1 *)((int)puVar1 + 0x4d) = 0;
  *(undefined1 *)((int)puVar1 + 0x4e) = 0;
  *(undefined1 *)((int)puVar1 + 0x4f) = 0;
  *(undefined1 *)(puVar1 + 0x14) = 0;
  *(undefined1 *)((int)puVar1 + 0x51) = 0;
  *(undefined1 *)((int)puVar1 + 0x52) = 0;
  *(undefined1 *)((int)puVar1 + 0x53) = 0;
  puVar1[0x15] = 0;
  puVar1[0x18] = 0;
  *(undefined4 **)(puVar1[0x11] + 0x24) = puVar1;
  puVar5 = (undefined4 *)fn_001f751c(*(undefined4 *)(puVar1[1] + 0x18),0x49);
  if (puVar5 != (undefined4 *)0x0) {
    puVar6 = (undefined4 *)(**(code **)*puVar5)(puVar5);
    do {
      if (puVar6 == &DAT_008942dc) goto LAB_0068acdc;
      puVar6 = (undefined4 *)*puVar6;
    } while (puVar6 != (undefined4 *)0x0);
  }
  puVar5 = (undefined4 *)0x0;
LAB_0068acdc:
  puVar1[0x16] = puVar5;
  puVar5 = (undefined4 *)fn_001f751c(*(undefined4 *)(puVar1[1] + 0x18),0x48);
  if (puVar5 != (undefined4 *)0x0) {
    puVar6 = (undefined4 *)(**(code **)*puVar5)(puVar5);
    do {
      if (puVar6 == &DAT_008942d0) {
        puVar7 = puVar5;
        break;
      }
      puVar6 = (undefined4 *)*puVar6;
    } while (puVar6 != (undefined4 *)0x0);
  }
  puVar1[0x17] = puVar7;
  return puVar1;
}



void fn_0068a47c(int *param_1)

{
  switch((char)param_1[3]) {
  default:
    return;
  case '\x03':
    (**(code **)(*(int *)param_1[0x11] + 0x14))();
    fn_00689d6c(param_1);
    fn_00689f44(param_1);
    fn_0068a204(param_1);
    fn_0068a0a4(param_1);
                    /* WARNING: Could not recover jumptable at 0x0068a4f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x100))(param_1);
    return;
  }
}


