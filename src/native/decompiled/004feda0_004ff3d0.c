#include "004feda0_004ff3d0.h"



void fn_004ff3d0(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_88 [24];
  int local_28;
  
  fn_00101a1c(local_88,&LAB_00508060,8,0xc);
  uVar3 = 0;
  iVar8 = 0;
  local_28 = DAT_008bf4e8;
  iVar6 = *(int *)(DAT_008bf4e8 + 0x74);
  iVar7 = *(int *)(DAT_008bf4e8 + 0x78);
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar2 != param_1 + 8) {
    do {
      iVar5 = 0;
      iVar1 = fn_0050b0d4(DAT_008bf4cc,*(undefined4 *)(iVar2 + 0xc),*(undefined4 *)(iVar2 + 0x10));
      if ((0x3fefffff < iVar1 - 0x100000U) || (*(char *)(iVar1 + 0x20) != '\x05')) {
        iVar5 = 1;
      }
      uVar4 = uVar3;
      if (((int)*(char *)(iVar2 + 10) & iVar5 - 1U) == 0) {
        iVar5 = *(int *)(iVar2 + 0xc);
        iVar1 = iVar2 + 0xc;
        if (iVar5 == iVar6) {
          iVar1 = *(int *)(iVar2 + 0x10);
        }
        if (iVar5 == iVar6 && iVar1 == iVar7) {
          iVar8 = 1;
        }
        else {
          local_88[uVar3 * 2] = iVar5;
          uVar4 = uVar3 + 1;
          local_88[uVar3 * 2 + 1] = *(int *)(iVar2 + 0x10);
        }
        iVar1 = fn_006d9e0c(*(undefined4 *)(DAT_008bf4d4 + 0x7c),*(undefined4 *)(iVar2 + 0xc),
                             *(undefined4 *)(iVar2 + 0x10));
        if ((iVar1 - 0x100000U < 0x3ff00000) && (*(char *)(iVar1 + 8) == -3)) {
          *(undefined1 *)(iVar1 + 8) = *(undefined1 *)(iVar2 + 0x19);
        }
      }
      iVar2 = *(int *)(iVar2 + 4);
      uVar3 = uVar4;
    } while (iVar2 != param_1 + 8);
    if (iVar8 != 0) {
      uVar3 = uVar4 + 1;
      local_88[uVar4 * 2] = iVar6;
      local_88[uVar4 * 2 + 1] = iVar7;
    }
  }
  uVar4 = 0;
  if (uVar3 != 0) {
    do {
      fn_00507000(local_28,local_88[uVar4 * 2],local_88[uVar4 * 2 + 1],0xfd,0,0);
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
  }
  return;
}



void fn_004ff380(int param_1,int *param_2,undefined1 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == param_1 + 8) {
    return;
  }
  do {
    if ((*(int *)(iVar1 + 0xc) == *param_2) && (*(int *)(iVar1 + 0x10) == param_2[1])) {
      *(undefined1 *)(iVar1 + 0xb) = param_3;
    }
    iVar1 = *(int *)(iVar1 + 4);
  } while (iVar1 != param_1 + 8);
  return;
}



undefined1 * fn_004ff29c(int param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar2 != param_1 + 8) {
    do {
      if ((*(int *)(iVar2 + 0xc) == *param_2) && (*(int *)(iVar2 + 0x10) == param_2[1])) {
        *(undefined1 *)(iVar2 + 9) = 0;
        *(undefined1 *)(iVar2 + 10) = 0;
        *(undefined1 *)(iVar2 + 0x1a) = 0;
        *(undefined1 *)(iVar2 + 0x1b) = 0;
        *(undefined1 *)(iVar2 + 0xb) = 0;
        *(undefined1 *)(iVar2 + 0x18) = 0;
        *(undefined1 *)(iVar2 + 8) = 0;
        *(undefined4 *)(iVar2 + 0x14) = 0;
        puVar1 = (undefined4 *)fn_0013d4ec();
        *(undefined4 *)(iVar2 + 0xc) = *puVar1;
        *(undefined4 *)(iVar2 + 0x10) = puVar1[1];
        *(undefined1 *)(iVar2 + 0x19) = 0xfd;
        fn_004f0c1c(param_1 + 4,iVar2);
        fn_004f0ab4(param_1 + 0x14,param_1 + 0x18,*(int *)(param_1 + 0x24) + iVar2);
        return (undefined1 *)0x0;
      }
      iVar2 = *(int *)(iVar2 + 4);
    } while (iVar2 != param_1 + 8);
  }
  return &DAT_d8814829;
}



void fn_004ff24c(int param_1,int *param_2,undefined1 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == param_1 + 8) {
    return;
  }
  do {
    if ((*(int *)(iVar1 + 0xc) == *param_2) && (*(int *)(iVar1 + 0x10) == param_2[1])) {
      *(undefined1 *)(iVar1 + 10) = param_3;
    }
    iVar1 = *(int *)(iVar1 + 4);
  } while (iVar1 != param_1 + 8);
  return;
}



void fn_004ff0ac(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  *param_1 = &PTR_FUN_00856ec4;
  iVar3 = param_1[0x17];
  if (iVar3 != 0) {
    uVar1 = fn_00656b0c(iVar3);
    uVar2 = 0;
    if (uVar1 / 0x14 != 0) {
      do {
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar1 / 0x14);
    }
    fn_00656b7c(iVar3,uVar1 * -0x33333333);
  }
  iVar3 = param_1[0x1c];
  if (iVar3 != 0) {
    uVar1 = fn_00656b0c(iVar3);
    uVar2 = 0;
    uVar1 = (uint)((ulonglong)uVar1 * 0xc30c30c3 + 0xc30c30c3 >> 0x26);
    if (uVar1 != 0) {
      do {
        (*(code *)**(undefined4 **)(iVar3 + uVar2 * 0x54))(iVar3 + uVar2 * 0x54);
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar1);
    }
    fn_00656b7c(iVar3);
  }
  iVar3 = param_1[0x1d];
  if (iVar3 != 0) {
    fn_00656b0c(iVar3);
    fn_00656b7c(iVar3);
  }
  iVar3 = param_1[0x1e];
  if (iVar3 != 0) {
    uVar1 = fn_00656b0c(iVar3);
    uVar2 = 0;
    uVar1 = (uint)((ulonglong)uVar1 * 0xc30c30c3 + 0xc30c30c3 >> 0x26);
    if (uVar1 != 0) {
      do {
        (*(code *)**(undefined4 **)(iVar3 + uVar2 * 0x54))(iVar3 + uVar2 * 0x54);
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar1);
    }
    fn_00656b7c(iVar3);
  }
  iVar3 = param_1[0x1f];
  if (iVar3 != 0) {
    fn_00656b0c(iVar3);
    fn_00656b7c(iVar3);
  }
  iVar3 = param_1[0x23];
  if (iVar3 != 0) {
    fn_00656b0c(iVar3);
    fn_00656b7c(iVar3);
  }
  fn_004ede4c(param_1);
  return;
}



int fn_004feda0(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint uVar8;
  
  puVar1 = (undefined4 *)fn_004eddf4();
  *puVar1 = &PTR_FUN_00856ec4;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 25000;
  puVar1[0x13] = 20000;
  puVar1[0x14] = 0;
  puVar1[0x16] = 15000;
  puVar1[0x15] = 0;
  puVar1[0x24] = 0;
  puVar1[0x25] = 0;
  iVar2 = fn_004ed164(puVar1 + 0x2c);
  fn_00158f40(iVar2 + -0x50,0xc,0xff);
  *(undefined4 *)(iVar2 + -0x18) = 0;
  *(undefined4 *)(iVar2 + -0x14) = 0;
  *(undefined4 *)(iVar2 + -0x10) = 0;
  *(undefined1 *)(iVar2 + -0xc) = 0;
  *(undefined1 *)(iVar2 + -0x30) = 0;
  *(undefined1 *)(iVar2 + -0x2f) = 0;
  *(undefined1 *)(iVar2 + -0x2e) = 0;
  *(undefined1 *)(iVar2 + -0x2d) = 0;
  *(undefined1 *)(iVar2 + -0x2c) = 0;
  *(undefined1 *)(iVar2 + -0x2b) = 0;
  uVar8 = (uint)*(ushort *)(DAT_008bf4e0 + 0x5e);
  *(uint *)(iVar2 + -0x44) = uVar8;
  *(undefined4 *)(iVar2 + -0x28) = 0;
  uVar3 = fn_004ed2e8();
  iVar4 = fn_00656e14(uVar8 * 0x14,uVar3);
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    uVar7 = 0;
    if (uVar8 != 0) {
      do {
        if (iVar4 + uVar7 * 0x14 != 0) {
          fn_004ed164();
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar8);
    }
  }
  *(int *)(iVar2 + -0x54) = iVar4;
  uVar8 = *(uint *)(iVar2 + -0x44);
  uVar3 = fn_004ed2e8();
  iVar4 = fn_00656e14(uVar8 * 0x54,uVar3);
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    uVar7 = 0;
    if (uVar8 != 0) {
      do {
        if (iVar4 + uVar7 * 0x54 != 0) {
          fn_00124e48();
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar8);
    }
  }
  *(int *)(iVar2 + -0x40) = iVar4;
  uVar8 = *(uint *)(iVar2 + -0x44);
  uVar3 = fn_004ed2e8();
  iVar4 = fn_00656e14(uVar8,uVar3);
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    uVar7 = 0;
    if (uVar8 != 0) {
      do {
        puVar5 = (undefined1 *)(iVar4 + uVar7);
        uVar7 = uVar7 + 1;
        if (puVar5 != (undefined1 *)0x0) {
          *puVar5 = 0;
        }
      } while (uVar7 < uVar8);
    }
  }
  *(int *)(iVar2 + -0x3c) = iVar4;
  uVar8 = *(uint *)(iVar2 + -0x44);
  uVar3 = fn_004ed2e8();
  iVar4 = fn_00656e14(uVar8 * 0x54,uVar3);
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    uVar7 = 0;
    if (uVar8 != 0) {
      do {
        if (iVar4 + uVar7 * 0x54 != 0) {
          fn_00124e48();
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar8);
    }
  }
  *(int *)(iVar2 + -0x38) = iVar4;
  uVar8 = *(uint *)(iVar2 + -0x44);
  uVar3 = fn_004ed2e8();
  iVar4 = fn_00656e14(uVar8,uVar3);
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    uVar7 = 0;
    if (uVar8 != 0) {
      do {
        puVar5 = (undefined1 *)(iVar4 + uVar7);
        uVar7 = uVar7 + 1;
        if (puVar5 != (undefined1 *)0x0) {
          *puVar5 = 0;
        }
      } while (uVar7 < uVar8);
    }
  }
  *(int *)(iVar2 + -0x34) = iVar4;
  uVar8 = *(uint *)(iVar2 + -0x44);
  uVar3 = fn_004ed2e8();
  puVar5 = (undefined1 *)fn_00656e14(uVar8,uVar3);
  if (puVar5 == (undefined1 *)0x0) {
    puVar5 = (undefined1 *)0x0;
  }
  else {
    uVar7 = 0;
    if (uVar8 != 0) {
      do {
        puVar6 = puVar5 + uVar7;
        uVar7 = uVar7 + 1;
        if (puVar6 != (undefined1 *)0x0) {
          *puVar6 = 0;
        }
      } while (uVar7 < uVar8);
    }
  }
  *(undefined1 **)(iVar2 + -0x24) = puVar5;
  if (*(uint *)(iVar2 + -0x44) != 0) {
    uVar8 = *(uint *)(iVar2 + -0x44) & 1;
    if (uVar8 == 1) {
      *puVar5 = 0;
    }
    uVar7 = (uint)(uVar8 == 1);
    if (uVar8 < *(uint *)(iVar2 + -0x44)) {
      do {
        uVar8 = uVar8 + 2;
        *(undefined1 *)(*(int *)(iVar2 + -0x24) + uVar7) = 0;
        *(undefined1 *)(*(int *)(iVar2 + -0x24) + uVar7 + 1) = 0;
        uVar7 = uVar7 + 2;
      } while (uVar8 < *(uint *)(iVar2 + -0x44));
    }
  }
  *(undefined1 *)(iVar2 + -0xb) = 0;
  *(undefined1 *)(iVar2 + -10) = 0;
  *(undefined4 *)(iVar2 + -8) = 0;
  *(undefined1 *)(iVar2 + -4) = 1;
  fn_004ed13c(iVar2);
  return iVar2 + -0xb0;
}


