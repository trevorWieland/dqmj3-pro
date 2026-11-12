#include "0035be50_0035c318.h"



undefined4 fn_0035c318(int param_1,undefined4 param_2,int param_3)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (param_3 == 0) {
    param_3 = fn_0035cbb0(param_1,0x41);
  }
  if (param_3 == 0) {
    fn_0035c240(param_1);
    return 0;
  }
  iVar5 = (*(int **)(param_1 + 4))[1];
  iVar4 = iVar5;
  for (iVar3 = **(int **)(param_1 + 4); iVar3 != iVar5; iVar3 = iVar3 + 0x428) {
    sVar1 = *(short *)(iVar3 + 0x24);
    iVar2 = fn_00176dc0(iVar3 + 8);
    if ((sVar1 < iVar2) &&
       (((iVar4 == iVar5 || (*(short *)(iVar3 + 0x24) < *(short *)(iVar4 + 0x24))) ||
        ((*(short *)(iVar3 + 0x24) == *(short *)(iVar4 + 0x24) &&
         ((*(char *)(iVar4 + 0x420) == '\0' && (*(char *)(iVar3 + 0x420) == '\x01')))))))) {
      iVar4 = iVar3;
    }
  }
  if (iVar4 == iVar5) {
    iVar4 = 0;
  }
  fn_0035c980(param_1,iVar4,param_3,0x41,param_2,3);
  fn_0035c240(param_1);
  return 1;
}



undefined4 fn_0035c150(int param_1,undefined4 param_2,int param_3)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (param_3 == 0) {
    param_3 = fn_0035cbb0(param_1,0x40);
  }
  if (param_3 == 0) {
    fn_0035c240(param_1);
    return 0;
  }
  iVar5 = (*(int **)(param_1 + 4))[1];
  iVar4 = iVar5;
  for (iVar3 = **(int **)(param_1 + 4); iVar3 != iVar5; iVar3 = iVar3 + 0x428) {
    sVar1 = *(short *)(iVar3 + 0x24);
    iVar2 = fn_00176dc0(iVar3 + 8);
    if ((sVar1 < iVar2) &&
       (((iVar4 == iVar5 || (*(short *)(iVar3 + 0x24) < *(short *)(iVar4 + 0x24))) ||
        ((*(short *)(iVar3 + 0x24) == *(short *)(iVar4 + 0x24) &&
         ((*(char *)(iVar4 + 0x420) == '\0' && (*(char *)(iVar3 + 0x420) == '\x01')))))))) {
      iVar4 = iVar3;
    }
  }
  if (iVar4 == iVar5) {
    iVar4 = 0;
  }
  fn_0035c980(param_1,iVar4,param_3,0x40,param_2,3);
  fn_0035c240(param_1);
  return 1;
}



void fn_0035c240(int param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  uint uVar3;
  undefined2 *puVar4;
  int iVar5;
  
  uVar1 = **(uint **)(param_1 + 4);
  uVar3 = (*(uint **)(param_1 + 4))[1];
  if (uVar1 < uVar3) {
    uVar3 = uVar3 - uVar1;
    if (0 < (int)uVar3) {
      iVar5 = (int)((longlong)(int)uVar3 * -0x99fc267 + ((ulonglong)uVar3 << 0x20) >> 0x20);
      puVar4 = (undefined2 *)(uVar1 - 6);
      puVar2 = (undefined2 *)(uVar1 - 4);
      if (((iVar5 >> 10) - (iVar5 >> 0x1f) & 1U) != 0) {
        puVar4 = (undefined2 *)(uVar1 + 0x422);
        puVar2 = (undefined2 *)(uVar1 + 0x424);
        *puVar4 = 0xffff;
        *puVar2 = 0xffff;
      }
      iVar5 = (int)((longlong)(int)uVar3 * -0x99fc267 + ((ulonglong)uVar3 << 0x20) >> 0x20);
      iVar5 = (iVar5 >> 10) - (iVar5 >> 0x1f) >> 1;
      if (iVar5 != 0) {
        do {
          iVar5 = iVar5 + -1;
          puVar4[0x214] = 0xffff;
          puVar4 = puVar4 + 0x428;
          puVar2[0x214] = 0xffff;
          puVar2 = puVar2 + 0x428;
          *puVar4 = 0xffff;
          *puVar2 = 0xffff;
        } while (iVar5 != 0);
        return;
      }
    }
  }
  else {
    for (; uVar1 != uVar3; uVar1 = uVar1 + 0x428) {
      *(undefined2 *)(uVar1 + 0x422) = 0xffff;
      *(undefined2 *)(uVar1 + 0x424) = 0xffff;
    }
  }
  return;
}



void fn_0035bfa0(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int extraout_r1;
  
  iVar2 = fn_001639e4(param_3);
  if (iVar2 == 0x14) {
    iVar2 = fn_006f3f7c(param_2 + 8);
    iVar3 = fn_00691e30(param_3);
    iVar5 = fn_00691e14(param_3);
    iVar6 = fn_006918b4(param_3);
    iVar7 = fn_00691898(param_3);
    if (iVar6 != 0 || iVar7 != 0) {
      if (iVar6 < iVar2) {
        if (iVar2 < iVar7) {
          if (iVar6 != iVar7) {
            iVar2 = fn_00300f74((iVar5 - iVar3) * (iVar2 - iVar6),iVar7 - iVar6);
            iVar3 = iVar3 + iVar2;
          }
        }
        else {
          iVar3 = iVar5;
        }
      }
      goto LAB_0035c0c8;
    }
  }
  else {
    iVar3 = 0;
    if (iVar2 != 0x20) goto LAB_0035c0c8;
    iVar3 = fn_00691e30(param_3);
    iVar2 = fn_00691e14(param_3);
    if (param_4 == 0) {
      uVar4 = fn_005f65d4();
      fn_00300f74(uVar4,(iVar2 - iVar3) + 1);
      iVar3 = iVar3 + extraout_r1;
      goto LAB_0035c0c8;
    }
    if (param_4 == 1) goto LAB_0035c0c8;
    if (param_4 == 2) {
      iVar3 = iVar2;
      goto LAB_0035c0c8;
    }
    if (param_4 == 3) {
      iVar3 = (iVar2 + iVar3) / 2;
      goto LAB_0035c0c8;
    }
  }
  iVar3 = 0;
LAB_0035c0c8:
  iVar2 = fn_006f44fc(param_2 + 8,0x28);
  if ((iVar2 != 0) &&
     ((iVar2 = fn_006924f4(param_3), iVar2 != 0 || (iVar2 = fn_006925f4(param_3), iVar2 != 0)))) {
    iVar3 = (iVar3 * 0x7d) / 100;
  }
  *(short *)(param_2 + 0x424) = (short)iVar3;
  uVar1 = fn_006f4114(param_2 + 8,param_3);
  *(undefined2 *)(param_2 + 0x422) = uVar1;
  return;
}



int * fn_0035be50(int param_1)

{
  undefined1 uVar1;
  undefined2 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iStack_28;
  undefined1 auStack_24 [8];
  
  piVar3 = *(int **)(param_1 + 4);
  puVar6 = (undefined4 *)piVar3[1];
  for (puVar4 = (undefined4 *)*piVar3; puVar4 != puVar6; puVar4 = puVar4 + 0x10a) {
    fn_0020bbc4(&iStack_28,*puVar4);
    fn_00301f50(puVar4 + 0xa3,0x120);
    fn_006bf5ec(auStack_24,puVar4 + 0xa3,0x4c,1,1,1,1,1);
    fn_00654c74(puVar4 + 0xa3);
    uVar2 = fn_006bfda8(auStack_24);
    *(undefined2 *)(puVar4 + 2) = uVar2;
    uVar2 = fn_006bf5bc(auStack_24);
    *(undefined2 *)(puVar4 + 9) = uVar2;
    uVar2 = fn_006bf5c8(auStack_24);
    *(undefined2 *)((int)puVar4 + 0x26) = uVar2;
    uVar2 = fn_006c0028(auStack_24);
    *(undefined2 *)(puVar4 + 0xd) = uVar2;
    uVar2 = fn_006c0114(auStack_24);
    *(undefined2 *)((int)puVar4 + 0x36) = uVar2;
    uVar2 = fn_006c09b4(auStack_24);
    *(undefined2 *)(puVar4 + 0xe) = uVar2;
    uVar2 = fn_006bed98(auStack_24);
    *(undefined2 *)((int)puVar4 + 0x3a) = uVar2;
    uVar2 = fn_006c01f4(auStack_24);
    *(undefined2 *)(puVar4 + 0xf) = uVar2;
    uVar2 = fn_006bff0c(auStack_24);
    *(undefined2 *)((int)puVar4 + 0x3e) = uVar2;
    uVar1 = fn_006c0108(auStack_24);
    *(undefined1 *)(puVar4 + 0x18) = uVar1;
    fn_0061dcec(puVar4 + 0x10);
    fn_0061dcec(puVar4 + 0x13);
    fn_00158f6c((int)puVar4 + 99,0xc2);
    uVar5 = 1;
    do {
      fn_00654cc4((int)puVar4 + 0x40e,uVar5 & 0xff,0);
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < 5);
    piVar3 = &iStack_28;
  }
  return piVar3;
}


