#include "00731dd0_00731dd0.h"



undefined4
fn_00731dd0(int param_1,int param_2,int param_3,uint param_4,int param_5,int param_6,char *param_7,
            int param_8)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  uint uVar5;
  undefined4 unaff_r7;
  int iVar6;
  undefined4 unaff_r8;
  uint uVar7;
  undefined4 in_lr;
  bool bVar8;
  
  if (((param_7 == (char *)0x0) || (*param_7 != '1')) || (param_8 != 0x38)) {
    return 0xfffffffa;
  }
  if (param_1 == 0) {
    return 0xfffffffe;
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x20) == 0) {
    *(code **)(param_1 + 0x20) = fn_00734b34;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  if (*(int *)(param_1 + 0x24) == 0) {
    *(code **)(param_1 + 0x24) = fn_00734b3c;
  }
  iVar6 = param_2;
  if (param_2 == -1) {
    iVar6 = 6;
  }
  uVar7 = (uint)(-1 < (int)param_4);
  if (-1 < (int)param_4) {
    uVar5 = param_4;
    if (0xf < (int)param_4) {
      uVar7 = 2;
      uVar5 = param_4 - 0x10;
    }
  }
  else {
    uVar5 = -param_4;
  }
  if (8 < param_5 - 1U) {
    return 0xfffffffe;
  }
  if (param_3 != 8) {
    return 0xfffffffe;
  }
  if ((int)uVar5 < 8) {
    return 0xfffffffe;
  }
  if (0xf < (int)uVar5) {
    return 0xfffffffe;
  }
  if (iVar6 < 0) {
    return 0xfffffffe;
  }
  if (9 < iVar6) {
    return 0xfffffffe;
  }
  if (param_6 < 0) {
    return 0xfffffffe;
  }
  if (4 < param_6) {
    return 0xfffffffe;
  }
  if (uVar5 == 8) {
    uVar5 = 9;
  }
  piVar1 = (int *)(**(code **)(param_1 + 0x20))
                            (*(undefined4 *)(param_1 + 0x28),1,0x16c4,*(code **)(param_1 + 0x20),
                             param_1,param_2,8,param_4);
  if (piVar1 == (int *)0x0) {
    return 0xfffffffc;
  }
  *(int **)(param_1 + 0x1c) = piVar1;
  piVar1[0xc] = uVar5;
  iVar2 = 1 << (param_5 + 7U & 0xff);
  iVar3 = 1 << (uVar5 & 0xff);
  piVar1[0xb] = iVar3;
  piVar1[0x13] = iVar2;
  piVar1[0xd] = iVar3 + -1;
  *piVar1 = param_1;
  piVar1[7] = 0;
  piVar1[6] = uVar7;
  piVar1[0x14] = param_5 + 7U;
  piVar1[0x15] = iVar2 + -1;
  piVar1[0x16] = (param_5 + 9U) / 3;
  iVar2 = (**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),iVar3,2);
  piVar1[0xe] = iVar2;
  iVar2 = (**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),piVar1[0xb],2);
  piVar1[0x10] = iVar2;
  iVar2 = (**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),piVar1[0x13],2);
  uVar7 = 1 << (param_5 + 6U & 0xff);
  piVar1[0x11] = iVar2;
  piVar1[0x5b0] = 0;
  piVar1[0x5a7] = uVar7;
  iVar3 = (**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),uVar7,4);
  piVar1[2] = iVar3;
  uVar7 = piVar1[0x5a7];
  piVar1[3] = uVar7 << 2;
  iVar2 = 0;
  if (piVar1[0xe] != 0) {
    iVar2 = piVar1[0x10];
  }
  if ((piVar1[0xe] != 0 && iVar2 != 0) && (piVar1[0x11] != 0 && iVar3 != 0)) {
    piVar1[0x5a9] = (uVar7 & 0xfffffffe) + iVar3;
    piVar1[0x5a6] = uVar7 * 3 + iVar3;
    piVar1[0x21] = iVar6;
    piVar1[0x22] = param_6;
    *(undefined1 *)(piVar1 + 9) = 8;
    iVar6 = 0;
    if (param_1 != 0) {
      iVar6 = *(int *)(param_1 + 0x1c);
    }
    if (param_1 != 0 && iVar6 != 0) {
      bVar8 = *(int *)(param_1 + 0x20) != 0;
      iVar6 = 0;
      if (bVar8) {
        iVar6 = *(int *)(param_1 + 0x24);
      }
      if (bVar8 && iVar6 != 0) {
        *(undefined4 *)(param_1 + 0x14) = 0;
        *(undefined4 *)(param_1 + 8) = 0;
        *(undefined4 *)(param_1 + 0x18) = 0;
        *(undefined4 *)(param_1 + 0x2c) = 2;
        iVar2 = *(int *)(param_1 + 0x1c);
        *(undefined4 *)(iVar2 + 0x14) = 0;
        *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(iVar2 + 8);
        iVar6 = *(int *)(iVar2 + 0x18);
        if (iVar6 < 0) {
          iVar6 = -iVar6;
          *(int *)(iVar2 + 0x18) = iVar6;
        }
        if (iVar6 == 0) {
          uVar4 = 0x71;
        }
        else {
          uVar4 = 0x2a;
        }
        *(undefined4 *)(iVar2 + 4) = uVar4;
        if (iVar6 == 2) {
          uVar4 = fn_007305b8(0,0,0,piVar1 + 0x21,unaff_r4,unaff_r5,unaff_r6,unaff_r7,unaff_r8,
                               in_lr);
        }
        else {
          uVar4 = fn_00730208();
        }
        *(undefined4 *)(param_1 + 0x30) = uVar4;
        *(undefined4 *)(iVar2 + 0x28) = 0;
        fn_0072ff00(iVar2);
        iVar2 = *(int *)(param_1 + 0x1c);
        *(int *)(iVar2 + 0x3c) = *(int *)(iVar2 + 0x2c) << 1;
        *(undefined2 *)(*(int *)(iVar2 + 0x44) + *(int *)(iVar2 + 0x4c) * 2 + -2) = 0;
        fn_00158f6c(*(undefined4 *)(iVar2 + 0x44),*(int *)(iVar2 + 0x4c) * 2 + -2);
        iVar6 = *(int *)(iVar2 + 0x84) * 0xc;
        *(uint *)(iVar2 + 0x80) = (uint)*(ushort *)(&UNK_007e367a + iVar6);
        *(uint *)(iVar2 + 0x8c) = (uint)*(ushort *)(&UNK_007e3678 + iVar6);
        *(uint *)(iVar2 + 0x90) = (uint)*(ushort *)(&UNK_007e367c + iVar6);
        *(uint *)(iVar2 + 0x7c) = (uint)*(ushort *)(&UNK_007e367e + iVar6);
        *(undefined4 *)(iVar2 + 0x6c) = 0;
        *(undefined4 *)(iVar2 + 0x5c) = 0;
        *(undefined4 *)(iVar2 + 0x74) = 0;
        *(undefined4 *)(iVar2 + 0x16b4) = 0;
        *(undefined4 *)(iVar2 + 0x78) = 2;
        *(undefined4 *)(iVar2 + 0x68) = 0;
        *(undefined4 *)(iVar2 + 0x60) = 2;
        *(undefined4 *)(iVar2 + 0x48) = 0;
        return 0;
      }
    }
    return 0xfffffffe;
  }
  piVar1[1] = 0x29a;
  *(char **)(param_1 + 0x18) = "insufficient memory";
  fn_00731cf0(param_1);
  return 0xfffffffc;
}


