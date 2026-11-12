#include "00319580_00319a78.h"



undefined4 fn_00319a78(void)

{
  fn_00319a94();
  return 1;
}



void fn_00319a34(int param_1)

{
  if (*(char *)(param_1 + 0x10) != '\0') {
    *(undefined1 *)(param_1 + 0x10) = 0;
    fn_002b0748(*(undefined4 *)(param_1 + 4));
    if (*(int *)(param_1 + 4) != 0) {
      fn_002b07ac();
      fn_002feef8();
      *(undefined4 *)(param_1 + 4) = 0;
    }
  }
  return;
}



undefined4 fn_00319a0c(int param_1)

{
  if (*(char *)(param_1 + 0x11) == '\0') {
    *(undefined1 *)(param_1 + 0x11) = 1;
    fn_002b06b8(*(undefined4 *)(param_1 + 4));
  }
  return 1;
}



undefined4 fn_003199d8(int param_1)

{
  return *(undefined4 *)(&DAT_007be8a0 + param_1 * 0x10);
}



undefined4 fn_003199a0(int param_1)

{
  return *(undefined4 *)(&DAT_007be898 + param_1 * 0x10);
}



void fn_00319950(undefined4 *param_1)

{
  *param_1 = &DAT_00822da0;
  if ((int *)param_1[2] != (int *)0x0) {
    (**(code **)(*(int *)param_1[2] + 4))();
  }
  if ((int *)param_1[1] != (int *)0x0) {
    (**(code **)(*(int *)param_1[1] + 4))();
  }
  fn_002feef8(param_1);
  return;
}



void fn_0031975c(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  uint in_fpscr;
  
  iVar2 = fn_00113ca8();
  if ((iVar2 != 0) || (iVar2 = fn_00113ce4(), iVar2 != 0)) {
    uVar8 = *(undefined4 *)(DAT_00897804 + 0x1c);
    sVar1 = fn_006b52b0(uVar8);
    iVar7 = (int)sVar1;
    iVar2 = fn_00391d58();
    uVar3 = fn_00300f74(iVar7,(uint)(iVar2 * 0xcccd) >> 0x14);
    VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x16) & 3);
    fn_006f72b4(DAT_008977e0);
    fn_0021dcfc();
    iVar4 = fn_00113ce4();
    if (iVar4 == 0) {
      iVar4 = fn_00113ca8();
      if (iVar4 != 0) {
        while ((uVar5 = fn_006b52c0(uVar8), uVar5 < 5 &&
               (sVar1 = fn_006b52c0(uVar8),
               (int)(short)(sVar1 + 1) * (int)(short)(ushort)((uint)(iVar2 * 0xcccd) >> 0x12) <
               iVar7))) {
          fn_006b95b4(*(undefined4 *)(param_1 + 8));
          fn_00242858(uVar8,1);
          uVar3 = *(undefined4 *)(DAT_00897804 + 0x1c);
          iVar4 = fn_00113ca8();
          if (iVar4 != 0) {
            uVar5 = fn_006b52b0(uVar3);
            uVar6 = fn_00391d58();
            if ((uVar6 <= uVar5) && (uVar5 = fn_006b52c0(uVar3), 4 < uVar5)) {
              fn_0021d834(DAT_008977e0,4);
            }
          }
        }
      }
    }
    else if ((iVar2 <= iVar7) && (iVar2 = fn_006b52c0(uVar8), iVar2 == 0)) {
      fn_002e146c(*(undefined4 *)(param_1 + 4));
      fn_00242858(uVar8,1);
      fn_0021d834(DAT_008977e0,2);
      return;
    }
  }
  return;
}



void fn_00319738(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  iVar6 = *(int *)(param_1 + 500);
  fn_002aae8c(*(undefined4 *)(iVar6 + 8));
  iVar6 = *(int *)(iVar6 + 4);
  uVar1 = *(uint *)(iVar6 + 4);
  uVar8 = *(uint *)(iVar6 + 8);
  if (uVar1 != uVar8) {
    uVar7 = uVar1;
    if (uVar8 <= uVar1) {
      do {
        uVar7 = uVar7 + 8;
      } while (uVar7 != uVar8);
    }
    *(uint *)(iVar6 + 8) = uVar8 - (uVar8 - uVar1 & 0xfffffff8);
  }
  uVar2 = fn_006f7508(DAT_008977e0);
  iVar3 = fn_00365da8();
  if (iVar3 == 0) {
    fn_003666d8(uVar2,iVar6 + 4);
  }
  pcVar4 = (char *)fn_006afe90(*(undefined4 *)(DAT_008977e0 + 0x1c),
                                *(undefined4 *)(DAT_008977e0 + 0xa8));
  if (*pcVar4 != 'C') {
    iVar3 = 0;
    uVar1 = 0;
    if (*(int *)(iVar6 + 8) - *(int *)(iVar6 + 4) >> 3 != 0) {
      do {
        fn_002ea524((int)*(short *)(*(int *)(iVar6 + 4) + uVar1 * 8));
        iVar5 = fn_00661094();
        if (iVar5 != 8) {
          iVar3 = iVar3 + 1;
        }
        uVar1 = uVar1 + 1;
      } while (uVar1 < (uint)(*(int *)(iVar6 + 8) - *(int *)(iVar6 + 4) >> 3));
      if (0 < iVar3) {
        *(undefined1 *)(iVar6 + 0x14) = 0;
        return;
      }
    }
  }
  fn_002e19b4(iVar6);
  *(undefined1 *)(iVar6 + 0x14) = 1;
  return;
}



void fn_00319728(int param_1)

{
  fn_002e18d0(*(undefined4 *)(*(int *)(param_1 + 500) + 4));
  return;
}



void fn_003196b0(int param_1,int param_2)

{
  fn_0024286c(*(undefined4 *)(DAT_00897804 + 0x1c));
  fn_00242844(*(undefined4 *)(DAT_00897804 + 0x1c));
  if (param_2 == 0) {
    return;
  }
  fn_002426f0(*(undefined4 *)(DAT_00897804 + 0x1c));
  fn_00242758(*(undefined4 *)(DAT_00897804 + 0x1c));
  fn_006f72b4(DAT_008977e0);
  fn_0021dcfc();
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10) = 0;
  return;
}



int fn_00319600(int param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  cVar1 = *param_2;
  iVar5 = 0;
  iVar4 = param_1 + -2;
  iVar3 = 0;
  iVar7 = 4;
  pcVar2 = param_2 + -1;
  do {
    iVar6 = 0;
    if (cVar1 != '\0') {
      iVar6 = (int)*(short *)(iVar4 + 2);
    }
    if (cVar1 != '\0') {
      iVar5 = iVar5 + iVar6;
    }
    bVar8 = pcVar2[2] != '\0';
    iVar6 = 0;
    if (bVar8) {
      iVar6 = (int)*(short *)(iVar4 + 4);
    }
    cVar1 = pcVar2[3];
    iVar4 = iVar4 + 4;
    if (bVar8) {
      iVar3 = iVar3 + iVar6;
    }
    iVar7 = iVar7 + -1;
    pcVar2 = pcVar2 + 2;
  } while (iVar7 != 0);
  iVar5 = iVar5 + iVar3;
  if (param_2[8] != '\0') {
    iVar5 = iVar5 + *(short *)(param_1 + 0x10);
  }
  iVar5 = fn_00163868(iVar5);
  iVar3 = 0;
  do {
    if (param_2[iVar3] != '\0') {
      iVar4 = (int)*(short *)(param_1 + iVar3 * 2);
      if (iVar5 < iVar4) {
        return iVar3;
      }
      iVar5 = iVar5 - iVar4;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 9);
  return -1;
}



undefined4 fn_00319580(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return 0x6d;
  case 1:
    return 0x67;
  case 2:
    return 99;
  case 3:
    return 0x62;
  case 4:
    return 0x73;
  case 5:
    return 0x74;
  case 6:
    return 0x72;
  case 7:
    return 0x70;
  case 8:
    return 0x6b;
  default:
    return 0;
  }
}


