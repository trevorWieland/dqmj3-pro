#include "001422a0_00142828.h"



int fn_00142828(undefined1 *param_1,undefined1 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined8 uVar10;
  
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 4) = param_3;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  iVar1 = fn_00101a1c(param_1 + 0x178,&LAB_0015d258,0x70,0xc);
  iVar1 = fn_00101a1c(iVar1 + 0x540,&LAB_0015d210,0x14,0xc);
  iVar8 = iVar1 + -0x6a0;
  *(undefined4 *)(iVar1 + -0x6a0) = 0;
  fn_00301f50(iVar1 + -0x69c,0x150);
  uVar10 = 0;
  uVar5 = 0;
  do {
    *(undefined1 *)(iVar8 + uVar5 + 0x154) = 0;
    fn_0015d21c(iVar8 + uVar5 * 0x70 + 0x160);
    uVar9 = uVar5 + 1;
    iVar6 = iVar8 + uVar5 * 0x14;
    *(undefined1 *)(iVar6 + 0x6a0) = 0;
    uVar4 = (undefined4)uVar10;
    *(undefined4 *)(iVar6 + 0x6a4) = uVar4;
    *(undefined4 *)(iVar6 + 0x6a8) = uVar4;
    *(undefined4 *)(iVar6 + 0x6ac) = uVar4;
    *(undefined4 *)(iVar6 + 0x6b0) = uVar4;
    uVar5 = uVar9;
  } while (uVar9 < 0xc);
  *(undefined4 *)(iVar1 + 0xf0) = 0;
  *(undefined4 *)(iVar1 + 0xf4) = 0;
  *(undefined1 *)(iVar1 + 0xf8) = 0;
  *(undefined1 *)(iVar1 + 0xfc) = 0;
  *(undefined1 *)(iVar1 + 0xfd) = 1;
  *(undefined1 *)(iVar1 + 0xfe) = 0xff;
  *(undefined1 *)(iVar1 + 0xff) = 0xff;
  *(undefined4 *)(iVar1 + 0x100) = 0;
  *(undefined1 *)(iVar1 + 0x104) = 0;
  *(undefined1 *)(iVar1 + 0x105) = 1;
  *(undefined1 *)(iVar1 + 0x106) = 0xff;
  *(undefined1 *)(iVar1 + 0x107) = 0xff;
  *(undefined4 *)(iVar1 + 0x108) = 0;
  *(undefined1 *)(iVar1 + 0x10c) = 0;
  *(undefined1 *)(iVar1 + 0x10d) = 1;
  *(undefined1 *)(iVar1 + 0x10e) = 0xff;
  *(undefined1 *)(iVar1 + 0x10f) = 0xff;
  *(undefined4 *)(iVar1 + 0x110) = 0;
  *(undefined4 *)(iVar1 + 0x114) = 0;
  iVar1 = fn_0016fd44(iVar1 + 0x198);
  *(undefined4 *)(iVar1 + 0x80) = 0;
  iVar2 = fn_0015d34c(iVar1 + 0x84);
  iVar3 = *(int *)(iVar2 + -0x8d0);
  iVar1 = iVar3 << 4;
  iVar8 = iVar3 * 0xc;
  iVar6 = iVar3 << 3;
  uVar4 = fn_00143ac8(iVar8,0x80);
  *(undefined4 *)(iVar2 + -0x8cc) = uVar4;
  uVar4 = fn_00143ac8(iVar1,0x80);
  *(undefined4 *)(iVar2 + -0x8c8) = uVar4;
  uVar4 = fn_00143ac8(iVar6,0x80);
  *(undefined4 *)(iVar2 + -0x8c4) = uVar4;
  uVar4 = fn_00143ac8(iVar3 << 1,0x80);
  *(undefined4 *)(iVar2 + -0x8c0) = uVar4;
  fn_00301f50(*(undefined4 *)(iVar2 + -0x8cc),iVar8);
  fn_00301f50(*(undefined4 *)(iVar2 + -0x8c8),iVar1);
  fn_00301f50(*(undefined4 *)(iVar2 + -0x8c4),iVar6);
  if (0 < (int)*(uint *)(iVar2 + -0x8d0)) {
    uVar5 = *(uint *)(iVar2 + -0x8d0) & 1;
    if (uVar5 != 0) {
      **(undefined2 **)(iVar2 + -0x8c0) = 0;
    }
    uVar9 = (uint)(uVar5 != 0);
    if ((int)uVar5 < *(int *)(iVar2 + -0x8d0)) {
      do {
        uVar5 = uVar5 + 2;
        iVar7 = uVar9 + 1;
        *(short *)(*(int *)(iVar2 + -0x8c0) + uVar9 * 2) = (short)uVar9;
        uVar9 = uVar9 + 2;
        *(short *)(*(int *)(iVar2 + -0x8c0) + iVar7 * 2) = (short)iVar7;
      } while ((int)uVar5 < *(int *)(iVar2 + -0x8d0));
    }
  }
  fn_0014ff08(*(undefined4 *)(iVar2 + -0x8cc),iVar8);
  fn_0014ff08(*(undefined4 *)(iVar2 + -0x8c8),iVar1);
  fn_0014ff08(*(undefined4 *)(iVar2 + -0x8c4),iVar6);
  fn_0014ff08(*(undefined4 *)(iVar2 + -0x8c0),iVar3 << 1);
  *(undefined4 *)(iVar2 + -0x128) = *(undefined4 *)(iVar2 + -0x8d0);
  uVar4 = fn_0015fa88(*(undefined4 *)(iVar2 + -0x8c0));
  *(undefined4 *)(iVar2 + -300) = uVar4;
  *(undefined1 *)(iVar2 + -0x124) = 0;
  *(undefined1 *)(iVar2 + -0x84) = 1;
  *(undefined1 *)(iVar2 + -0x83) = 0;
  *(undefined1 *)(iVar2 + -0x82) = 0;
  *(undefined1 *)(iVar2 + -0x81) = 6;
  *(undefined1 *)(iVar2 + -0x80) = 6;
  *(undefined1 *)(iVar2 + -0x7f) = 7;
  *(undefined1 *)(iVar2 + -0x7e) = 7;
  *(undefined1 *)(iVar2 + -0x4c) = 0;
  *(undefined1 *)(iVar2 + -0x30) = 0;
  *(undefined1 *)(iVar2 + -0x2f) = 0;
  *(undefined1 *)(iVar2 + -0x28) = 0;
  fn_001528e8(iVar2 + -0x8d4);
  return iVar2 + -0x8d4;
}



void fn_00142754(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  *(int *)(param_1 + 0x7cc) = param_2;
  iVar2 = *(int *)(param_2 + 4) + 8;
  fn_0014524c(iVar2,param_1 + 0x7b4,(char *)&DAT_00142808);
  fn_0014524c(iVar2,param_1 + 0x7bc,(char *)&DAT_00142814);
  fn_0014524c(iVar2,param_1 + 0x7c4,(char *)&DAT_0014281c);
  uVar1 = fn_0015fa88(*(undefined4 *)(param_1 + 8));
  fn_0015d0e0(param_1 + 0x18,param_1 + 0x7b4,uVar1,0xb);
  uVar1 = fn_0015fa88(*(undefined4 *)(param_1 + 0xc));
  fn_0015d0e0(param_1 + 0x18,param_1 + 0x7bc,uVar1,0xf);
  uVar1 = fn_0015fa88(*(undefined4 *)(param_1 + 0x10));
  fn_0015d0e0(param_1 + 0x18,param_1 + 0x7c4,uVar1,7);
  return;
}



undefined4 * fn_00142628(undefined4 *param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  uint *puVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint local_2c [3];
  
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = &DAT_00859470;
  uVar1 = fn_002febd8(param_2);
  if (uVar1 == 0) {
    puVar2 = (undefined4 *)&DAT_008f9d04;
  }
  else {
    puVar3 = local_2c + 1;
    if (0x20 < uVar1) {
      puVar3 = local_2c;
    }
    local_2c[0] = uVar1;
    local_2c[1] = 0x20;
    uVar5 = *puVar3;
    if (0xfffffff1 < uVar5) {
      fn_002ff628(8,&DAT_008c7615,&DAT_008c7615,uVar5,0xfffffff1);
    }
    if (uVar5 < uVar1) {
      fn_002ff628(8,&DAT_008c7615,&DAT_008c7615,uVar1,uVar5);
    }
    if (uVar5 == 0) {
      puVar2 = &DAT_008f9cf8;
    }
    else {
      puVar2 = (undefined4 *)fn_00100fc6(uVar5 + 0xe,0);
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
      }
      puVar4 = (undefined1 *)((int)puVar2 + uVar1 + 0xc);
      puVar2[2] = uVar1;
      *puVar2 = 0;
      puVar2[1] = uVar5;
      if (puVar4 != (undefined1 *)0x0) {
        *puVar4 = 0;
      }
    }
    puVar2 = puVar2 + 3;
  }
  param_1[6] = puVar2;
  fn_00301a9c(puVar2,param_2,uVar1);
  *param_1 = &DAT_00858888;
  return param_1;
}



void fn_001425d8(undefined4 *param_1,undefined4 param_2,uint param_3,undefined1 param_4,
                 undefined2 param_5,undefined2 param_6,undefined2 param_7,uint param_8,
                 undefined1 param_9)

{
  bool bVar1;
  
  bVar1 = param_3 == 0;
  if (bVar1) {
    param_3 = 0;
  }
  *param_1 = param_2;
  if (!bVar1) {
    param_3 = fn_0015fa88();
    param_3 = param_3 >> 3;
  }
  *(undefined1 *)((int)param_1 + 0xe) = param_4;
  param_1[1] = param_3;
  param_1[4] = param_8 >> 3;
  *(undefined2 *)((int)param_1 + 10) = param_5;
  *(undefined2 *)(param_1 + 2) = param_6;
  *(undefined2 *)(param_1 + 3) = param_7;
  *(undefined1 *)((int)param_1 + 0xf) = param_9;
  return;
}



undefined4 fn_001422a0(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  if (*(int *)(param_1 + 8) != 0) {
    return 0;
  }
  iVar2 = *param_2;
  piVar4 = (int *)0x0;
  if (iVar2 == 0x554e4643) {
    iVar2 = 0;
    piVar3 = (int *)((uint)*(ushort *)((int)param_2 + 6) + (int)param_2);
    if (*(ushort *)(param_2 + 4) == 0) {
      return 0;
    }
    while (*piVar3 != 0x464e4946) {
      iVar2 = iVar2 + 1;
      piVar3 = (int *)((int)piVar3 + piVar3[1]);
      if ((int)(uint)*(ushort *)(param_2 + 4) <= iVar2) {
        return 0;
      }
    }
LAB_0014236c:
    piVar3 = piVar3 + 2;
  }
  else {
    if (iVar2 == 0x544e4643) {
      iVar2 = fn_001718c4(param_2,0x544e4643,0x3000000,2);
    }
    else {
      if (iVar2 == 0x554e4646) {
        iVar2 = 0;
        piVar3 = (int *)((uint)*(ushort *)((int)param_2 + 6) + (int)param_2);
        if (*(ushort *)(param_2 + 4) == 0) {
          return 0;
        }
        while (*piVar3 != 0x464e4946) {
          iVar2 = iVar2 + 1;
          piVar3 = (int *)((int)piVar3 + piVar3[1]);
          if ((int)(uint)*(ushort *)(param_2 + 4) <= iVar2) {
            return 0;
          }
        }
        goto LAB_0014236c;
      }
      iVar2 = fn_001718c4(param_2,0x544e4646,0x4000000,2);
    }
    if (iVar2 == 0) {
      return 0;
    }
    piVar3 = (int *)fn_00142448(param_2);
  }
  if (piVar3 == (int *)0x0) {
    return 0;
  }
  iVar2 = 0;
  piVar1 = (int *)((uint)*(ushort *)((int)param_2 + 6) + (int)param_2);
  if (*(ushort *)(param_2 + 4) != 0) {
    do {
      if (*piVar1 == 0x474e524b) {
        piVar4 = piVar1 + 2;
        break;
      }
      iVar2 = iVar2 + 1;
      piVar1 = (int *)((int)piVar1 + piVar1[1]);
    } while (iVar2 < (int)(uint)*(ushort *)(param_2 + 4));
  }
  fn_00141a68(param_1,param_2,piVar3,piVar4);
  fn_00141a04(param_1);
  return 1;
}



int * fn_00142448(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = (int *)0x0;
  iVar2 = 0;
  piVar1 = (int *)((uint)*(ushort *)((int)param_1 + 6) + (int)param_1);
  if ((short)param_1[4] != 0) {
    do {
      iVar4 = *piVar1;
      if (iVar4 == 0x50414d43) {
        if (piVar1[4] != 0) {
          piVar1[4] = piVar1[4] + (int)param_1;
        }
      }
      else if (iVar4 < 0x50414d43) {
        if (iVar4 == 0x464e4946) {
          piVar3 = piVar1 + 2;
          if (*param_1 == 0x544e4643) {
            piVar1[4] = piVar1[4] + (int)param_1;
            if (piVar1[5] != 0) {
              piVar1[5] = piVar1[5] + (int)param_1;
            }
            if (piVar1[6] != 0) {
              piVar1[6] = piVar1[6] + (int)param_1;
            }
          }
          else {
            piVar1[5] = piVar1[5] + (int)param_1;
            if (piVar1[6] != 0) {
              piVar1[6] = piVar1[6] + (int)param_1;
            }
            if (piVar1[7] != 0) {
              piVar1[7] = piVar1[7] + (int)param_1;
            }
          }
        }
        else if (iVar4 != 0x474e524b) {
          if (iVar4 != 0x48445743) {
            return (int *)0x0;
          }
          if (piVar1[3] != 0) {
            piVar1[3] = piVar1[3] + (int)param_1;
          }
        }
      }
      else if (iVar4 == 0x504c4754) {
        piVar1[7] = piVar1[7] + (int)param_1;
      }
      else if (iVar4 != 0x52474c47) {
        return (int *)0x0;
      }
      iVar2 = iVar2 + 1;
      piVar1 = (int *)((int)piVar1 + piVar1[1]);
    } while (iVar2 < (int)(uint)*(ushort *)(param_1 + 4));
  }
  if (*param_1 == 0x544e4643) {
    iVar2 = 0x554e4643;
  }
  else {
    iVar2 = 0x554e4646;
  }
  *param_1 = iVar2;
  return piVar3;
}


