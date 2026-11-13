#include "00159e14_0015a480.h"



void fn_0015a480(void)

{
                    /* WARNING: Subroutine does not return */
  fn_001638a0();
}



undefined4 fn_0015a434(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x20) != param_2) {
    if (*(char *)(param_1 + 0x38) == '\0') {
      fn_0015a394(param_1,0xc,param_2);
      *(int *)(param_1 + 0x20) = param_2;
      *(undefined4 *)(param_1 + 0x24) = 0;
    }
    else {
      *(int *)(param_1 + 0x24) = param_2;
    }
  }
  return 0xc;
}



void fn_0015a41c(void)

{
                    /* WARNING: Subroutine does not return */
  fn_001638a0();
}



undefined4 fn_0015a358(int param_1,undefined4 param_2)

{
  uint uVar1;
  bool bVar2;
  
  uVar1 = fn_0016678c(param_1,0xd);
  bVar2 = uVar1 == 0;
  if (bVar2) {
    uVar1 = (uint)*(byte *)(param_1 + 0x38);
  }
  if (bVar2 && uVar1 == 0) {
    fn_0015a394(param_1,0xe,param_2);
  }
  return 0xe;
}



char fn_0015a394(int param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 in_lr;
  
  iVar2 = fn_0016678c();
  if (iVar2 != 0) {
    piVar3 = (int *)fn_001667a8(param_1,param_2);
    if (*piVar3 != 0) {
      fn_00161b34(*piVar3,0);
    }
  }
  fn_00153d4c(param_1,param_2);
  fn_00153d2c(param_1,param_2);
  piVar3 = *(int **)(*(int *)(*(int *)(param_1 + 4) + 0x360) + param_2 * 4);
  if (*piVar3 != 0) {
    fn_00152048(*piVar3,0);
  }
  piVar4 = (int *)(*(int *)(param_1 + 4) + 4);
  cVar1 = (**(code **)(*piVar4 + 8))(piVar4,piVar3,param_3,0,0,unaff_r4,unaff_r5,in_lr);
  if (cVar1 == '\0') {
    if (*piVar3 != 0) {
      fn_00172d54();
    }
    cVar1 = '\0';
  }
  return cVar1;
}



undefined4 fn_0015a320(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = fn_0012ea60(param_1,param_1 + 4,param_2);
  iVar2 = fn_00145aac(*(undefined4 *)(iVar1 + 8));
  if (iVar2 == 1) {
    uVar3 = fn_00145ac0(*(undefined4 *)(iVar1 + 8));
    return uVar3;
  }
  return 0;
}



undefined4 * fn_0015a304(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = &DAT_0081be18;
  param_1[1] = param_2;
  param_1[2] = param_3;
  param_1[3] = 0;
  return param_1;
}



int fn_0015a130(int param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  uint *puVar10;
  uint uVar11;
  
  if (param_2 == 0) {
    return -1;
  }
  puVar10 = (uint *)(param_1 + 4);
  piVar9 = *(int **)(param_1 + 8);
  if (piVar9 == *(int **)(param_1 + 0xc)) {
    uVar3 = (int)((int)piVar9 - *puVar10) >> 2;
    if (uVar3 < (uint)((int)((int)*(int **)(param_1 + 0xc) - *puVar10) >> 2)) {
      *(int **)(param_1 + 8) = piVar9 + 1;
      if (piVar9 != (int *)0x0) {
        *piVar9 = piVar9[-1];
      }
      piVar5 = piVar9 + -1;
      piVar6 = piVar9;
      if (piVar9 < piVar5) {
        if (0 < (int)piVar5 - (int)piVar9) {
          iVar8 = (int)piVar5 - (int)piVar9 >> 2;
          iVar4 = 0;
          do {
            iVar8 = iVar8 + -1;
            piVar9[iVar4 + -1] = piVar5[iVar4 + -1];
            iVar4 = iVar4 + -1;
          } while (iVar8 != 0);
        }
      }
      else {
        while (piVar9 != piVar5) {
          piVar5 = piVar5 + -1;
          piVar6[-1] = *piVar5;
          piVar6 = piVar6 + -1;
        }
      }
      *piVar9 = param_2;
    }
    else {
      uVar11 = uVar3 + (uVar3 >> 1) + (uVar3 >> 3);
      if (uVar11 < uVar3 + 0x20) {
        uVar11 = uVar3 + 0x20;
      }
      piVar1 = (int *)fn_00100fc6(uVar11 << 2,0);
      piVar6 = piVar1;
      for (piVar5 = (int *)*puVar10; piVar5 != piVar9; piVar5 = piVar5 + 1) {
        if (piVar6 != (int *)0x0) {
          *piVar6 = *piVar5;
        }
        piVar6 = piVar6 + 1;
      }
      piVar5 = (int *)(((int)piVar9 - *puVar10 & 0xfffffffc) + (int)piVar1);
      if (piVar5 != (int *)0x0) {
        *piVar5 = param_2;
      }
      piVar6 = *(int **)(param_1 + 8);
      piVar5 = (int *)(((int)piVar9 - *puVar10 & 0xfffffffc) + (int)piVar1);
      for (; piVar9 != piVar6; piVar9 = piVar9 + 1) {
        piVar5 = piVar5 + 1;
        if (piVar5 != (int *)0x0) {
          *piVar5 = *piVar9;
        }
      }
      uVar2 = *puVar10;
      uVar7 = *(uint *)(param_1 + 8);
      uVar3 = uVar2;
      if (uVar7 < uVar2) {
        do {
          uVar3 = uVar3 + 4;
        } while (uVar3 != uVar7);
      }
      fn_001008c4(uVar2,(int)(*(int *)(param_1 + 0xc) - uVar2) >> 2,0);
      *(int **)(param_1 + 0xc) = piVar1 + uVar11;
      *(int **)(param_1 + 8) = piVar1 + ((int)(uVar7 - uVar2) >> 2) + 1;
      *puVar10 = (uint)piVar1;
    }
  }
  else {
    *(int **)(param_1 + 8) = piVar9 + 1;
    if (piVar9 != (int *)0x0) {
      *piVar9 = param_2;
    }
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2) + -1;
}



int fn_0015a044(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  int local_24 [4];
  
  if (*(int *)(param_1 + 0x40) != 0) {
    uVar1 = fn_001747a8(param_2);
    iVar2 = fn_00191238(param_3,param_4);
    if (-1 < iVar2) {
      if ((((byte)DAT_008c62fc & 1) == 0) && (iVar2 = fn_00303afc(&DAT_008c62fc), iVar2 != 0)) {
        DAT_008f9e2c = 0;
        DAT_008f9e30 = 0;
        DAT_008f9e34 = 0;
      }
      local_24[0] = fn_00179ac8(*(undefined4 *)(param_1 + 0x40),uVar1,param_3,param_4,param_5);
      if (-1 < local_24[0]) {
        fn_0017811c(param_1 + 0x50,local_24);
      }
      return local_24[0];
    }
  }
  return -1;
}



int fn_00159fa4(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int local_18;
  
  if (*(int *)(param_1 + 0x40) != 0) {
    local_18 = param_4;
    uVar1 = fn_001747a8(param_2);
    iVar2 = fn_00175978(*(undefined4 *)(param_1 + 0x40),uVar1);
    if (iVar2 != -1) {
      local_18 = 0;
      uVar3 = fn_00175944(*(undefined4 *)(param_1 + 0x40),uVar1);
      if ((uVar3 & 0x10) == 0) {
        local_18 = fn_0016aa48(*(undefined4 *)(param_1 + 0x40),uVar1,param_3,iVar2);
      }
      else {
        local_18 = fn_0016a9b0();
      }
      if (-1 < local_18) {
        fn_0017811c(param_1 + 0x50,&local_18);
      }
      return local_18;
    }
  }
  return -1;
}



undefined4 fn_00159f34(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  if (param_2 == -1) {
    return 0;
  }
  for (piVar1 = *(int **)(param_1 + 0x44); piVar1 != (int *)(param_1 + 0x44);
      piVar1 = (int *)*piVar1) {
    if (piVar1[-6] == param_2) goto LAB_00159f70;
  }
  piVar1 = (int *)(param_1 + 0x44);
LAB_00159f70:
  iVar2 = (int)piVar1 + -0x18;
  fn_00150c1c(param_1 + 0x40);
  if (iVar2 != 0) {
    fn_00147ff0(iVar2);
    fn_002feef8(iVar2);
  }
  return 1;
}



void fn_00159ec8(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 in_lr;
  
  cVar1 = *param_1;
  iVar2 = fn_00174828(DAT_008977e4);
  iVar2 = iVar2 + cVar1 * 0x418 + -0x4080;
  fn_00174670(iVar2,param_2);
  uVar3 = fn_00176e70(iVar2);
  iVar2 = fn_00174858(DAT_008977e4);
  iVar2 = *(int *)(iVar2 + 0x54);
  fn_0017b9a8(*(undefined4 *)(iVar2 + (char)(*param_1 + -0x10) * 4 + 4),uVar3,uVar3,param_4,
               unaff_r4,unaff_r5,unaff_r6,in_lr);
  iVar2 = *(int *)(iVar2 + (char)(*param_1 + -0x10) * 4 + 4);
  if (*(short *)(iVar2 + 0x200) < *(short *)(iVar2 + 0x90)) {
    *(short *)(iVar2 + 0x90) = *(short *)(iVar2 + 0x200);
    return;
  }
  return;
}



void fn_00159e5c(char *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  cVar1 = *param_1;
  iVar2 = fn_00174828(DAT_008977e4);
  iVar2 = iVar2 + cVar1 * 0x418 + -0x4080;
  fn_00174630(iVar2,param_2);
  uVar3 = fn_00176dc0(iVar2);
  iVar2 = fn_00174858(DAT_008977e4);
  fn_0016e1bc(*(undefined4 *)(iVar2 + 0x54),param_1,uVar3);
  return;
}



void fn_00159e14(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = fn_00182988(DAT_008977e4);
  if (*(char *)(iVar1 + 0x39d) == '\0') {
    return;
  }
  iVar1 = fn_00182988(DAT_008977e4);
  fn_0016dc88(iVar1 + 0x244,param_1,param_2);
  return;
}


