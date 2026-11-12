#include "003b490c_003b4f50.h"



void fn_003b4f50(undefined4 param_1,undefined2 *param_2,int param_3)

{
  switch(*(undefined4 *)(param_3 + 4)) {
  default:
    return;
  case 9:
    *param_2 = *(undefined2 *)(param_3 + 8);
    *(undefined1 *)(param_2 + 1) = *(undefined1 *)(param_3 + 10);
    return;
  case 0xb:
    *param_2 = *(undefined2 *)(param_3 + 8);
    *(undefined1 *)(param_2 + 1) = *(undefined1 *)(param_3 + 10);
    *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_3 + 0xc);
    *(undefined1 *)(param_2 + 4) = *(undefined1 *)(param_3 + 0x10);
    return;
  case 0xc:
    *param_2 = *(undefined2 *)(param_3 + 8);
    *(undefined1 *)(param_2 + 1) = *(undefined1 *)(param_3 + 10);
    *(undefined1 *)((int)param_2 + 3) = *(undefined1 *)(param_3 + 0xb);
    param_2[2] = *(undefined2 *)(param_3 + 0xc);
    return;
  case 0xd:
  case 0xe:
    *(undefined1 *)param_2 = *(undefined1 *)(param_3 + 8);
    return;
  case 0xf:
  case 0x10:
  case 0x11:
    param_2[2] = *(undefined2 *)(param_3 + 0xc);
    param_2[1] = *(undefined2 *)(param_3 + 10);
    *param_2 = *(undefined2 *)(param_3 + 8);
    return;
  case 0x15:
    *param_2 = *(undefined2 *)(param_3 + 8);
    param_2[1] = *(undefined2 *)(param_3 + 10);
    param_2[2] = *(undefined2 *)(param_3 + 0xc);
    param_2[3] = *(undefined2 *)(param_3 + 0xe);
    param_2[4] = *(undefined2 *)(param_3 + 0x10);
    *(undefined1 *)(param_2 + 5) = *(undefined1 *)(param_3 + 0x12);
    *(undefined4 *)(param_2 + 6) = *(undefined4 *)(param_3 + 0x14);
    return;
  case 0x16:
    *(undefined1 *)param_2 = *(undefined1 *)(param_3 + 8);
    *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_3 + 0xc);
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 0x10);
    return;
  case 0x17:
    *param_2 = *(undefined2 *)(param_3 + 8);
    param_2[1] = *(undefined2 *)(param_3 + 10);
    param_2[2] = *(undefined2 *)(param_3 + 0xc);
    param_2[3] = *(undefined2 *)(param_3 + 0xe);
    param_2[4] = *(undefined2 *)(param_3 + 0x10);
    *(undefined1 *)(param_2 + 5) = *(undefined1 *)(param_3 + 0x12);
    *(undefined4 *)(param_2 + 6) = *(undefined4 *)(param_3 + 0x14);
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_3 + 0x18);
    *(undefined4 *)(param_2 + 10) = *(undefined4 *)(param_3 + 0x1c);
    *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_3 + 0x20);
    *(undefined4 *)(param_2 + 0xe) = *(undefined4 *)(param_3 + 0x24);
    return;
  }
}



void fn_003b4e9c(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  local_20 = 0x544f4d53;
  uStack_1c = 0;
  iVar2 = fn_006edd88(param_2,2);
  iVar3 = fn_006ede84(param_2,2);
  iVar4 = 0;
  if (iVar2 != 0) {
    iVar4 = iVar3;
  }
  if (((iVar2 != 0 && iVar3 != 0) && -1 < iVar4) &&
     (iVar4 = fn_00147e6c(iVar2,&local_20,4), iVar4 == 0)) {
    iVar4 = 0;
    uVar1 = (iVar3 - 4U) / 0x74;
    if (uVar1 != 0) {
      do {
        fn_003b490c(param_1,iVar2 + 4 + iVar4 * 0x74);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)uVar1);
    }
  }
  return;
}



void fn_003b4de8(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  local_20 = 0x5452474d;
  uStack_1c = 0;
  iVar2 = fn_006edd88(param_2,1);
  iVar3 = fn_006ede84(param_2,1);
  iVar4 = 0;
  if (iVar2 != 0) {
    iVar4 = iVar3;
  }
  if (((iVar2 != 0 && iVar3 != 0) && -1 < iVar4) &&
     (iVar4 = fn_00147e6c(iVar2,&local_20,4), iVar4 == 0)) {
    iVar4 = 0;
    uVar1 = (iVar3 - 4U) / 0x58;
    if (uVar1 != 0) {
      do {
        fn_003b3ecc(param_1,iVar2 + 4 + iVar4 * 0x58);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)uVar1);
    }
  }
  return;
}



undefined4 fn_003b4d6c(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return 0x23;
  case 1:
    return 0x24;
  default:
    return 1;
  case 3:
    return 0x2e;
  case 4:
    return 0x27;
  case 5:
    return 0x2b;
  case 7:
    return 0x29;
  case 8:
    return 0x2a;
  case 9:
    return 0x2c;
  }
}



void fn_003b490c(int param_1,undefined2 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint in_fpscr;
  undefined2 local_a0;
  undefined2 local_9e;
  undefined2 local_9c;
  undefined2 local_9a;
  undefined2 local_98;
  undefined2 local_96;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined2 local_88;
  undefined1 local_86;
  undefined2 local_84;
  undefined2 local_82;
  undefined2 local_80;
  undefined2 local_7e;
  undefined2 local_7c;
  undefined2 local_7a;
  undefined1 local_78;
  undefined1 local_77;
  undefined1 local_76;
  undefined2 local_74;
  undefined2 local_72;
  float local_70;
  float local_6c;
  undefined2 local_68;
  undefined2 local_66;
  undefined1 local_64;
  undefined1 auStack_62 [6];
  undefined1 auStack_5c [6];
  undefined1 auStack_56 [8];
  undefined1 auStack_4e [8];
  undefined1 auStack_46 [8];
  undefined1 auStack_3e [8];
  undefined1 auStack_36 [8];
  undefined1 auStack_2e [10];
  
  fn_00301f50(&local_a0,0x7c);
  local_77 = 0xff;
  local_76 = 0xff;
  local_a0 = *param_2;
  local_9e = param_2[1];
  local_9c = param_2[2];
  local_9a = param_2[3];
  local_98 = param_2[4];
  local_96 = param_2[5];
  local_94 = *(undefined4 *)(param_2 + 6);
  local_90 = *(undefined4 *)(param_2 + 8);
  local_8c = *(undefined4 *)(param_2 + 10);
  local_88 = param_2[0xc];
  local_86 = param_2[0xd] != 0;
  local_84 = param_2[0xe];
  local_82 = param_2[0xf];
  local_80 = param_2[0x10];
  local_7e = param_2[0x11];
  local_7c = param_2[0x12];
  local_7a = param_2[0x13];
  local_78 = param_2[0x14] != 0;
  local_74 = param_2[0x15];
  local_72 = param_2[0x16];
  local_70 = (float)VectorSignedToFloat((int)(short)param_2[0x17],(byte)(in_fpscr >> 0x16) & 3);
  local_70 = local_70 * 0.001;
  local_6c = (float)VectorSignedToFloat((int)(short)param_2[0x18],(byte)(in_fpscr >> 0x16) & 3);
  local_6c = local_6c * 0.001;
  local_68 = param_2[0x19];
  local_66 = param_2[0x1a];
  local_64 = param_2[0x1b] != 0;
  fn_0019bc50(auStack_62,param_2 + 0x1c);
  fn_0019bc50(auStack_5c,param_2 + 0x1f);
  fn_00166824(auStack_56,param_2 + 0x22);
  fn_00166824(auStack_4e,param_2 + 0x26);
  fn_00166824(auStack_46,param_2 + 0x2a);
  fn_00166824(auStack_3e,param_2 + 0x2e);
  fn_00166824(auStack_36,param_2 + 0x32);
  fn_00166824(auStack_2e,param_2 + 0x36);
  puVar6 = (uint *)(param_1 + 0x20);
  uVar1 = *puVar6;
  puVar7 = (uint *)(param_1 + 0x1c);
  if (uVar1 == *(uint *)(param_1 + 0x24)) {
    uVar3 = *(uint *)(param_1 + 0x24) - *puVar7;
    iVar4 = (int)((longlong)(int)uVar3 * -0x7bdef7bd + ((ulonglong)uVar3 << 0x20) >> 0x20);
    uVar3 = uVar1 - *puVar7;
    iVar5 = (int)((longlong)(int)uVar3 * -0x7bdef7bd + ((ulonglong)uVar3 << 0x20) >> 0x20);
    if ((uint)((iVar4 >> 6) - (iVar4 >> 0x1f)) <= (uint)((iVar5 >> 6) - (iVar5 >> 0x1f))) {
      iVar4 = (int)((longlong)(int)uVar3 * -0x7bdef7bd + ((ulonglong)uVar3 << 0x20) >> 0x20);
      uVar9 = (iVar4 >> 6) - (iVar4 >> 0x1f);
      uVar3 = uVar9 + (uVar9 >> 1) + (uVar9 >> 3);
      if (uVar3 < uVar9 + 0x20) {
        uVar3 = uVar9 + 0x20;
      }
      uVar2 = fn_00100fc6(uVar3 * 0x7c,0);
      uVar8 = uVar2;
      for (uVar9 = *puVar7; uVar9 != uVar1; uVar9 = uVar9 + 0x7c) {
        if (uVar8 != 0) {
          fn_0017821c(uVar8,uVar9,0x7c);
        }
        uVar8 = uVar8 + 0x7c;
      }
      iVar4 = (int)((longlong)(int)(uVar1 - *puVar7) * -0x7bdef7bd +
                    ((ulonglong)(uVar1 - *puVar7) << 0x20) >> 0x20);
      iVar4 = uVar2 + ((iVar4 >> 6) - (iVar4 >> 0x1f)) * 0x7c;
      if (iVar4 != 0) {
        fn_0017821c(iVar4,&local_a0);
      }
      uVar9 = *puVar6;
      iVar4 = (int)((longlong)(int)(uVar1 - *puVar7) * -0x7bdef7bd +
                    ((ulonglong)(uVar1 - *puVar7) << 0x20) >> 0x20);
      iVar4 = uVar2 + ((iVar4 >> 6) - (iVar4 >> 0x1f)) * 0x7c;
      for (; uVar1 != uVar9; uVar1 = uVar1 + 0x7c) {
        iVar4 = iVar4 + 0x7c;
        if (iVar4 != 0) {
          fn_0017821c(iVar4,uVar1,0x7c);
        }
      }
      uVar9 = *puVar7;
      uVar8 = *puVar6;
      iVar4 = (int)((longlong)(int)(uVar8 - uVar9) * -0x7bdef7bd +
                    ((ulonglong)(uVar8 - uVar9) << 0x20) >> 0x20);
      uVar1 = uVar9;
      if (uVar8 < uVar9) {
        do {
          uVar1 = uVar1 + 0x7c;
        } while (uVar1 != uVar8);
      }
      uVar1 = *(int *)(param_1 + 0x24) - uVar9;
      iVar5 = (int)((longlong)(int)uVar1 * -0x7bdef7bd + ((ulonglong)uVar1 << 0x20) >> 0x20);
      fn_001008c4(uVar9,(iVar5 >> 6) - (iVar5 >> 0x1f),0);
      *puVar7 = uVar2;
      *puVar6 = uVar2 + ((iVar4 >> 6) - (iVar4 >> 0x1f)) * 0x7c + 0x7c;
      *(uint *)(param_1 + 0x24) = uVar2 + uVar3 * 0x7c;
      return;
    }
    *puVar6 = uVar1 + 0x7c;
    if (uVar1 != 0) {
      fn_0017821c(uVar1,uVar1 - 0x7c,0x7c);
    }
    uVar3 = uVar1 - 0x7c;
    uVar9 = uVar1;
    if (uVar1 < uVar3) {
      uVar9 = uVar3 - uVar1;
      if (0 < (int)uVar9) {
        iVar4 = (int)((longlong)(int)uVar9 * -0x7bdef7bd + ((ulonglong)uVar9 << 0x20) >> 0x20);
        uVar8 = uVar1;
        if (((iVar4 >> 6) - (iVar4 >> 0x1f) & 1U) != 0) {
          uVar3 = uVar1 - 0xf8;
          uVar8 = uVar1 - 0x7c;
          fn_0017821c(uVar8,uVar3,0x7c);
        }
        iVar4 = (int)((longlong)(int)uVar9 * -0x7bdef7bd + ((ulonglong)uVar9 << 0x20) >> 0x20);
        for (iVar4 = (iVar4 >> 6) - (iVar4 >> 0x1f) >> 1; iVar4 != 0; iVar4 = iVar4 + -1) {
          fn_0017821c(uVar8 - 0x7c,uVar3 - 0x7c,0x7c);
          uVar3 = uVar3 - 0xf8;
          uVar8 = uVar8 - 0xf8;
          fn_0017821c(uVar8,uVar3,0x7c);
        }
      }
    }
    else {
      while (uVar1 != uVar3) {
        uVar3 = uVar3 - 0x7c;
        fn_0017821c(uVar9 - 0x7c,uVar3,0x7c);
        uVar9 = uVar9 - 0x7c;
      }
    }
  }
  else {
    *puVar6 = uVar1 + 0x7c;
    if (uVar1 == 0) {
      return;
    }
  }
  fn_0017821c(uVar1,&local_a0,0x7c);
  return;
}


