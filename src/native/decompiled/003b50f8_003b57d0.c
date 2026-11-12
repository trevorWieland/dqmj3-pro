#include "003b50f8_003b57d0.h"



undefined4 * fn_003b57d0(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  *param_1 = &PTR_FUN_0082ea58;
  fn_003b546c(param_1);
  uVar1 = param_1[0xd];
  uVar2 = uVar1;
  if ((uint)param_1[0xe] < uVar1) {
    do {
      uVar2 = uVar2 + 4;
    } while (uVar2 != param_1[0xe]);
  }
  fn_001008c4(uVar1,(int)(param_1[0xf] - uVar1) >> 2,0);
  uVar1 = param_1[10];
  uVar2 = uVar1;
  if ((uint)param_1[0xb] <= uVar1) {
    for (; uVar2 != param_1[0xb]; uVar2 = uVar2 + 0x28) {
    }
  }
  fn_001008c4(uVar1,(int)(param_1[0xc] - uVar1) / 0x28,0);
  uVar1 = param_1[7];
  uVar2 = uVar1;
  if ((uint)param_1[8] <= uVar1) {
    for (; uVar2 != param_1[8]; uVar2 = uVar2 + 0x7c) {
    }
  }
  iVar3 = (int)((longlong)(int)(param_1[9] - uVar1) * -0x7bdef7bd +
                ((ulonglong)(param_1[9] - uVar1) << 0x20) >> 0x20);
  fn_001008c4(uVar1,(iVar3 >> 6) - (iVar3 >> 0x1f),0);
  uVar1 = param_1[4];
  uVar2 = uVar1;
  if ((uint)param_1[5] < uVar1) {
    do {
      uVar2 = uVar2 + 0x5c;
    } while (uVar2 != param_1[5]);
  }
  iVar3 = (int)((longlong)(int)(param_1[6] - uVar1) * -0x4de9bd37 +
                ((ulonglong)(param_1[6] - uVar1) << 0x20) >> 0x20);
  fn_001008c4(uVar1,(iVar3 >> 6) - (iVar3 >> 0x1f),0);
  uVar1 = param_1[1];
  uVar2 = uVar1;
  if ((uint)param_1[2] <= uVar1) {
    for (; uVar2 != param_1[2]; uVar2 = uVar2 + 0x28) {
    }
  }
  fn_001008c4(uVar1,(int)(param_1[3] - uVar1) / 0x28,0);
  return param_1;
}



void fn_003b5770(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_0082ea58;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  return;
}



void fn_003b546c(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 unaff_r4;
  undefined4 in_lr;
  
  fn_0078aa50((undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x28),
               *(undefined4 *)(param_1 + 0x2c));
  uVar3 = *(uint *)(param_1 + 4);
  uVar4 = *(uint *)(param_1 + 8);
  if (uVar3 != uVar4) {
    uVar1 = uVar3;
    if (uVar4 <= uVar3) {
      do {
        uVar1 = uVar1 + 0x28;
      } while (uVar1 != uVar4);
    }
    *(uint *)(param_1 + 8) = uVar4 + ((int)(uVar4 - uVar3) / 0x28) * -0x28;
  }
  uVar3 = *(uint *)(param_1 + 0x14);
  uVar4 = *(uint *)(param_1 + 0x10);
  if (uVar4 != uVar3) {
    uVar1 = uVar4;
    if (uVar3 <= uVar4) {
      do {
        uVar1 = uVar1 + 0x5c;
      } while (uVar1 != uVar3);
    }
    iVar2 = (int)((longlong)(int)(uVar3 - uVar4) * -0x4de9bd37 +
                  ((ulonglong)(uVar3 - uVar4) << 0x20) >> 0x20);
    *(uint *)(param_1 + 0x14) = uVar3 + ((iVar2 >> 6) - (iVar2 >> 0x1f)) * -0x5c;
  }
  uVar3 = *(uint *)(param_1 + 0x20);
  uVar4 = *(uint *)(param_1 + 0x1c);
  if (uVar4 != uVar3) {
    uVar1 = uVar4;
    if (uVar3 <= uVar4) {
      do {
        uVar1 = uVar1 + 0x7c;
      } while (uVar1 != uVar3);
    }
    iVar2 = (int)((longlong)(int)(uVar3 - uVar4) * -0x7bdef7bd +
                  ((ulonglong)(uVar3 - uVar4) << 0x20) >> 0x20);
    *(uint *)(param_1 + 0x20) = uVar3 + ((iVar2 >> 6) - (iVar2 >> 0x1f)) * -0x7c;
  }
  uVar3 = *(uint *)(param_1 + 0x38);
  uVar4 = *(uint *)(param_1 + 0x34);
  if (uVar4 != uVar3) {
    uVar1 = uVar4;
    if (uVar3 <= uVar4) {
      do {
        uVar1 = uVar1 + 4;
      } while (uVar1 != uVar3);
    }
    *(uint *)(param_1 + 0x38) = uVar3 - (uVar3 - uVar4 & 0xfffffffc);
  }
  uVar1 = *(uint *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x28) = 0;
  uVar4 = *(uint *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x2c) = 0;
  iVar2 = *(int *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x30) = 0;
  uVar3 = uVar1;
  if (uVar4 <= uVar1) {
    for (; uVar3 != uVar4; uVar3 = uVar3 + 0x28) {
    }
  }
  fn_001008c4(uVar1,(int)(iVar2 - uVar1) / 0x28,0);
  uVar1 = *(uint *)(param_1 + 4);
  *(undefined4 *)(param_1 + 4) = 0;
  uVar4 = *(uint *)(param_1 + 8);
  *(undefined4 *)(param_1 + 8) = 0;
  iVar2 = *(int *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xc) = 0;
  uVar3 = uVar1;
  if (uVar4 <= uVar1) {
    for (; uVar3 != uVar4; uVar3 = uVar3 + 0x28) {
    }
  }
  fn_001008c4(uVar1,(int)(iVar2 - uVar1) / 0x28,0);
  uVar1 = *(uint *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x10) = 0;
  uVar4 = *(uint *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x14) = 0;
  iVar2 = *(int *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x18) = 0;
  uVar3 = uVar1;
  if (uVar4 <= uVar1) {
    for (; uVar3 != uVar4; uVar3 = uVar3 + 0x5c) {
    }
  }
  uVar3 = iVar2 - uVar1;
  iVar2 = (int)((longlong)(int)uVar3 * -0x4de9bd37 + ((ulonglong)uVar3 << 0x20) >> 0x20);
  fn_001008c4(uVar1,(iVar2 >> 6) - (iVar2 >> 0x1f),0);
  uVar1 = *(uint *)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  uVar4 = *(uint *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x20) = 0;
  iVar2 = *(int *)(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x24) = 0;
  uVar3 = uVar1;
  if (uVar4 <= uVar1) {
    for (; uVar3 != uVar4; uVar3 = uVar3 + 0x7c) {
    }
  }
  uVar3 = iVar2 - uVar1;
  iVar2 = (int)((longlong)(int)uVar3 * -0x7bdef7bd + ((ulonglong)uVar3 << 0x20) >> 0x20);
  fn_001008c4(uVar1,(iVar2 >> 6) - (iVar2 >> 0x1f),0);
  uVar4 = *(uint *)(param_1 + 0x34);
  *(undefined4 *)(param_1 + 0x34) = 0;
  uVar1 = *(uint *)(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x38) = 0;
  iVar2 = *(int *)(param_1 + 0x3c);
  *(undefined4 *)(param_1 + 0x3c) = 0;
  uVar3 = uVar4;
  if (uVar1 <= uVar4) {
    for (; uVar3 != uVar1; uVar3 = uVar3 + 4) {
    }
  }
  fn_002feef8(uVar4,(int)(iVar2 - uVar4) >> 2,0,iVar2,unaff_r4,in_lr);
  return;
}



void fn_003b50f8(int *param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int extraout_r1;
  undefined8 uVar8;
  undefined1 auStack_830 [2048];
  undefined1 auStack_30 [8];
  undefined4 local_28;
  undefined4 uStack_24;
  
  (**(code **)(*param_1 + 0xc))(param_1);
  fn_00101a50(auStack_830,0x800,L"patch:/data/Field/Table/Encount/ET_%s.xbb",param_2);
  uVar2 = fn_00118290();
  iVar3 = fn_0011c184(auStack_830,uVar2,0x80,5);
  if ((iVar3 != 0) && (iVar4 = fn_00145ac0(), iVar4 != 0)) {
    uVar2 = fn_00145ac0(iVar3);
    fn_00118624(auStack_30,uVar2);
    iVar4 = fn_006edeb4(auStack_30);
    if (iVar4 == 0) {
      fn_005f5d3c(auStack_30);
      return;
    }
    local_28 = 0x54434e45;
    uStack_24 = 0;
    iVar5 = fn_006edd88(auStack_30,0);
    iVar6 = fn_006ede84(auStack_30,0);
    iVar4 = 0;
    if (iVar5 != 0) {
      iVar4 = iVar6;
    }
    if (((iVar5 != 0 && iVar6 != 0) && -1 < iVar4) &&
       (iVar4 = fn_00147e6c(iVar5,&local_28,4), iVar4 == 0)) {
      iVar4 = 0;
      uVar1 = (uint)((ulonglong)(iVar6 - 4) * 0xc30c30c3 + 0xc30c30c3 >> 0x25);
      if (uVar1 != 0) {
        do {
          fn_003b23ec(param_1,iVar5 + 4 + iVar4 * 0x2a);
          iVar4 = iVar4 + 1;
        } while (iVar4 < (int)uVar1);
      }
    }
    local_28 = 0x5452474d;
    uStack_24 = 0;
    iVar5 = fn_006edd88(auStack_30,1);
    iVar6 = fn_006ede84(auStack_30,1);
    iVar4 = 0;
    if (iVar5 != 0) {
      iVar4 = iVar6;
    }
    if (((iVar5 != 0 && iVar6 != 0) && -1 < iVar4) &&
       (iVar4 = fn_00147e6c(iVar5,&local_28,4), iVar4 == 0)) {
      iVar4 = 0;
      uVar1 = (iVar6 - 4U) / 0x58;
      if (uVar1 != 0) {
        do {
          fn_003b3ecc(param_1,iVar5 + 4 + iVar4 * 0x58);
          iVar4 = iVar4 + 1;
        } while (iVar4 < (int)uVar1);
      }
    }
    local_28 = 0x544f4d53;
    uStack_24 = 0;
    iVar5 = fn_006edd88(auStack_30,2);
    iVar6 = fn_006ede84(auStack_30,2);
    iVar4 = 0;
    if (iVar5 != 0) {
      iVar4 = iVar6;
    }
    if (((iVar5 != 0 && iVar6 != 0) && -1 < iVar4) &&
       (iVar4 = fn_00147e6c(iVar5,&local_28,4), iVar4 == 0)) {
      iVar4 = 0;
      uVar1 = (iVar6 - 4U) / 0x74;
      if (uVar1 != 0) {
        do {
          fn_003b490c(param_1,iVar5 + 4 + iVar4 * 0x74);
          iVar4 = iVar4 + 1;
        } while (iVar4 < (int)uVar1);
      }
    }
    local_28 = 0x54444146;
    uStack_24 = 0;
    iVar6 = fn_006edd88(auStack_30,3);
    uVar8 = fn_006ede84(auStack_30,3);
    iVar4 = (int)((ulonglong)uVar8 >> 0x20);
    iVar7 = (int)uVar8;
    iVar5 = 0;
    if (iVar6 != 0) {
      iVar5 = iVar7;
    }
    if (((iVar6 != 0 && iVar7 != 0) && -1 < iVar5) &&
       (uVar8 = fn_00147e6c(iVar6,&local_28,4), iVar4 = (int)((ulonglong)uVar8 >> 0x20),
       (int)uVar8 == 0)) {
      iVar5 = 0;
      iVar4 = (iVar7 - 4U) * -0x33333333;
      uVar1 = (iVar7 - 4U) / 0x28;
      if (uVar1 != 0) {
        do {
          fn_003b2ae4(param_1,iVar6 + 4 + iVar5 * 0x28);
          iVar5 = iVar5 + 1;
          iVar4 = extraout_r1;
        } while (iVar5 < (int)uVar1);
      }
    }
    fn_003b2798(param_1,iVar4);
    fn_005f5d3c(auStack_30);
  }
  fn_0012d73c(iVar3);
  return;
}


