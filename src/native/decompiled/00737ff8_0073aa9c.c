#include "00737ff8_0073aa9c.h"



void fn_0073aa9c(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  short sVar7;
  int iVar8;
  
  iVar4 = 7;
  iVar5 = 4;
  uVar2 = (uint)*(ushort *)(param_2 + 2);
  if (uVar2 == 0) {
    iVar4 = 0x8a;
    iVar5 = 3;
  }
  *(undefined2 *)(param_2 + param_3 * 4 + 6) = 0xffff;
  uVar6 = 0xffffffff;
  iVar8 = 0;
  iVar1 = 0;
  if (0 < param_3 + 1) {
    do {
      uVar3 = (uint)*(ushort *)(param_2 + iVar1 * 4 + 6);
      iVar8 = iVar8 + 1;
      if ((iVar4 <= iVar8) || (uVar2 != uVar3)) {
        if (iVar8 < iVar5) {
          iVar4 = param_1 + uVar2 * 4;
          *(short *)(iVar4 + 0xa7c) = (short)iVar8 + *(short *)(iVar4 + 0xa7c);
        }
        else if (uVar2 == 0) {
          if (iVar8 < 0xb) {
            sVar7 = *(short *)(param_1 + 0xac0);
          }
          else {
            sVar7 = *(short *)(param_1 + 0xac4);
          }
          if (iVar8 < 0xb) {
            *(short *)(param_1 + 0xac0) = sVar7 + 1;
          }
          else {
            *(short *)(param_1 + 0xac4) = sVar7 + 1;
          }
        }
        else {
          if (uVar2 != uVar6) {
            iVar4 = param_1 + uVar2 * 4;
            *(short *)(iVar4 + 0xa7c) = *(short *)(iVar4 + 0xa7c) + 1;
          }
          *(short *)(param_1 + 0xabc) = *(short *)(param_1 + 0xabc) + 1;
        }
        iVar8 = 0;
        uVar6 = uVar2;
        if (uVar3 == 0) {
          iVar4 = 0x8a;
        }
        else {
          if (uVar2 != uVar3) {
            iVar4 = 7;
            iVar5 = 4;
            goto LAB_0073ab7c;
          }
          iVar4 = 6;
        }
        iVar5 = 3;
      }
LAB_0073ab7c:
      iVar1 = iVar1 + 1;
      uVar2 = uVar3;
    } while (iVar1 < param_3 + 1);
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x00739bd8) */
/* WARNING: Removing unreachable block (ram,0x00739bdc) */

int fn_00739b20(int param_1,char *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  if (((param_2 == (char *)0x0) || (*param_2 != '1')) || (param_3 != 0x38)) {
    return -6;
  }
  if (param_1 == 0) {
    return -2;
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x20) == 0) {
    *(code **)(param_1 + 0x20) = fn_0073aa84;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  if (*(int *)(param_1 + 0x24) == 0) {
    *(code **)(param_1 + 0x24) = fn_0073aa8c;
  }
  iVar1 = (**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),1,0x1bcc);
  if (iVar1 == 0) {
    return -4;
  }
  *(int *)(param_1 + 0x1c) = iVar1;
  *(undefined4 *)(iVar1 + 0x34) = 0;
  iVar2 = *(int *)(param_1 + 0x1c);
  iVar3 = -2;
  if (iVar2 != 0) {
    iVar3 = 7;
    bVar4 = *(int *)(iVar2 + 0x34) != 0;
    if (bVar4) {
      iVar3 = *(int *)(iVar2 + 0x24);
    }
    if (bVar4 && iVar3 != 0xf) {
      (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28));
      *(undefined4 *)(iVar2 + 0x34) = 0;
    }
    *(undefined4 *)(iVar2 + 8) = 1;
    *(undefined4 *)(iVar2 + 0x24) = 0xf;
    iVar3 = fn_00739c74(param_1);
    if (iVar3 == 0) {
      return 0;
    }
  }
  (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),iVar1);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return iVar3;
}



void fn_0073aa8c(undefined4 param_1,undefined4 param_2)

{
  fn_0030233c(param_2);
  return;
}



void fn_0073aa84(undefined4 param_1,int param_2,int param_3)

{
  fn_002fecec(param_2 * param_3);
  return;
}



undefined4 fn_00737ff8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_r4;
  bool bVar3;
  
  if (param_1 != 0) {
    unaff_r4 = *(int *)(param_1 + 0x1c);
  }
  if (param_1 != 0 && unaff_r4 != 0) {
    bVar3 = *(int *)(param_1 + 0x20) != 0;
    iVar1 = 0;
    if (bVar3) {
      iVar1 = *(int *)(param_1 + 0x24);
    }
    if (bVar3 && iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x14) = 0;
      *(undefined4 *)(param_1 + 8) = 0;
      *(undefined4 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 0x2c) = 2;
      *(undefined4 *)(unaff_r4 + 0x14) = 0;
      *(undefined4 *)(unaff_r4 + 0x10) = *(undefined4 *)(unaff_r4 + 8);
      iVar1 = *(int *)(unaff_r4 + 0x18);
      if (iVar1 < 0) {
        iVar1 = -iVar1;
        *(int *)(unaff_r4 + 0x18) = iVar1;
      }
      if (iVar1 == 0) {
        uVar2 = 0x71;
      }
      else {
        uVar2 = 0x2a;
      }
      *(undefined4 *)(unaff_r4 + 4) = uVar2;
      if (iVar1 == 2) {
        uVar2 = fn_00736734(0,0);
      }
      else {
        uVar2 = fn_00736384();
      }
      *(undefined4 *)(param_1 + 0x30) = uVar2;
      *(undefined4 *)(unaff_r4 + 0x28) = 0;
      fn_00736060(unaff_r4);
      *(int *)(unaff_r4 + 0x3c) = *(int *)(unaff_r4 + 0x2c) << 1;
      *(undefined2 *)(*(int *)(unaff_r4 + 0x44) + *(int *)(unaff_r4 + 0x4c) * 2 + -2) = 0;
      fn_00158f6c(*(undefined4 *)(unaff_r4 + 0x44),*(int *)(unaff_r4 + 0x4c) * 2 + -2);
      iVar1 = *(int *)(unaff_r4 + 0x84) * 0xc;
      *(uint *)(unaff_r4 + 0x80) = (uint)*(ushort *)(&DAT_007eabfe + iVar1);
      *(uint *)(unaff_r4 + 0x8c) = (uint)*(ushort *)(&DAT_007eabfc + iVar1);
      *(uint *)(unaff_r4 + 0x90) = (uint)*(ushort *)(&DAT_007eac00 + iVar1);
      *(uint *)(unaff_r4 + 0x7c) = (uint)*(ushort *)(&DAT_007eac02 + iVar1);
      *(undefined4 *)(unaff_r4 + 0x6c) = 0;
      *(undefined4 *)(unaff_r4 + 0x5c) = 0;
      *(undefined4 *)(unaff_r4 + 0x74) = 0;
      *(undefined4 *)(unaff_r4 + 0x78) = 2;
      *(undefined4 *)(unaff_r4 + 0x68) = 0;
      *(undefined4 *)(unaff_r4 + 0x60) = 2;
      *(undefined4 *)(unaff_r4 + 0x48) = 0;
      return 0;
    }
  }
  return 0xfffffffe;
}


