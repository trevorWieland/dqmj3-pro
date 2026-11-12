#include "0078ab9c_0078b084.h"



void fn_0078b084(int *param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  iVar2 = param_1[1];
  if (iVar2 != param_1[2]) {
    param_1[1] = iVar2 + 0x90;
    if (iVar2 != 0) {
      fn_0023572c();
    }
    return;
  }
  uVar1 = (iVar2 - *param_1) / 0x90;
  if (uVar1 < (uint)((param_1[2] - *param_1) / 0x90)) {
    param_1[1] = iVar2 + 0x90;
    if (iVar2 != 0) {
      fn_0023572c(iVar2,iVar2 + -0x90);
    }
    iVar5 = iVar2 + -0x90;
    iVar4 = iVar2;
    while (iVar2 != iVar5) {
      iVar5 = iVar5 + -0x90;
      iVar4 = iVar4 + -0x90;
      fn_0023591c(iVar4,iVar5);
    }
    fn_0023591c(iVar2,param_2);
    return;
  }
  uVar6 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
  if (uVar6 < uVar1 + 0x20) {
    uVar6 = uVar1 + 0x20;
  }
  iVar3 = fn_00100fc6(uVar6 * 0x90,0);
  iVar5 = iVar3;
  for (iVar4 = *param_1; iVar4 != iVar2; iVar4 = iVar4 + 0x90) {
    if (iVar5 != 0) {
      fn_0023572c(iVar5,iVar4);
    }
    iVar5 = iVar5 + 0x90;
  }
  iVar4 = iVar3 + ((iVar2 - *param_1) / 0x90) * 0x90;
  if (iVar4 != 0) {
    fn_0023572c(iVar4,param_2);
  }
  iVar5 = param_1[1];
  iVar4 = iVar3 + ((iVar2 - *param_1) / 0x90) * 0x90;
  for (; iVar2 != iVar5; iVar2 = iVar2 + 0x90) {
    iVar4 = iVar4 + 0x90;
    if (iVar4 != 0) {
      fn_0023572c(iVar4,iVar2);
    }
  }
  iVar2 = *param_1;
  iVar5 = param_1[1];
  iVar4 = iVar5 - iVar2;
  for (; iVar2 != iVar5; iVar2 = iVar2 + 0x90) {
    fn_0023587c(iVar2);
  }
  fn_001008c4(*param_1,(param_1[2] - *param_1) / 0x90,0);
  *param_1 = iVar3;
  param_1[1] = iVar3 + (iVar4 / 0x90) * 0x90 + 0x90;
  param_1[2] = iVar3 + uVar6 * 0x90;
  return;
}



void fn_0078b030(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *param_1;
  uVar3 = param_1[1];
  if (uVar2 != uVar3) {
    uVar1 = uVar2;
    if (uVar3 <= uVar2) {
      do {
        uVar1 = uVar1 + 0x44;
      } while (uVar1 != uVar3);
    }
    param_1[1] = uVar3 + ((int)(uVar3 - uVar2) / 0x44) * -0x44;
  }
  return;
}



uint * fn_0078afd4(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  uVar1 = uVar2;
  if (param_1[1] <= uVar2) {
    for (; uVar1 != param_1[1]; uVar1 = uVar1 + 0x60) {
    }
  }
  fn_001008c4(uVar2,(int)(param_1[2] - uVar2) / 0x60,0);
  return param_1;
}



void fn_0078ae58(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint local_30;
  uint *puStack_2c;
  uint local_28;
  
  local_28 = param_2;
  puStack_2c = param_1;
  puVar4 = &local_30;
  if (0x234f72c < param_2) {
    local_30 = 0x234f72c;
    fn_002ff628(8,&DAT_008c7622);
  }
  uVar2 = param_1[2] - *param_1;
  iVar3 = (int)((longlong)(int)uVar2 * -0x72c234f7 + ((ulonglong)uVar2 << 0x20) >> 0x20);
  if ((uint)((iVar3 >> 6) - (iVar3 >> 0x1f)) < local_28) {
    uVar2 = param_1[1] - *param_1;
    iVar3 = (int)((longlong)(int)uVar2 * -0x72c234f7 + ((ulonglong)uVar2 << 0x20) >> 0x20);
    uVar2 = (iVar3 >> 6) - (iVar3 >> 0x1f);
    local_30 = uVar2 + (uVar2 >> 1) + (uVar2 >> 3);
    if (local_30 < uVar2 + 0x20) {
      local_30 = uVar2 + 0x20;
    }
    if (local_30 <= local_28) {
      puVar4 = &local_28;
    }
    uVar6 = *puVar4;
    uVar1 = fn_00100fc6(uVar6 * 0x74,0);
    uVar7 = param_1[1];
    uVar5 = uVar1;
    for (uVar2 = *param_1; uVar2 != uVar7; uVar2 = uVar2 + 0x74) {
      if (uVar5 != 0) {
        fn_0017821c(uVar5,uVar2,0x74);
      }
      uVar5 = uVar5 + 0x74;
    }
    uVar5 = *param_1;
    uVar2 = uVar5;
    if (param_1[1] < uVar5) {
      do {
        uVar2 = uVar2 + 0x74;
      } while (uVar2 != param_1[1]);
    }
    iVar3 = (int)((longlong)(int)(param_1[2] - uVar5) * -0x72c234f7 +
                  ((ulonglong)(param_1[2] - uVar5) << 0x20) >> 0x20);
    fn_001008c4(uVar5,(iVar3 >> 6) - (iVar3 >> 0x1f),0);
    uVar2 = *param_1;
    *param_1 = uVar1;
    iVar3 = (int)((longlong)(int)(param_1[1] - uVar2) * -0x72c234f7 +
                  ((ulonglong)(param_1[1] - uVar2) << 0x20) >> 0x20);
    param_1[1] = uVar1 + ((iVar3 >> 6) - (iVar3 >> 0x1f)) * 0x74;
    param_1[2] = uVar1 + uVar6 * 0x74;
  }
  return;
}



void fn_0078ab9c(uint *param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  uVar1 = param_1[2] - *param_1;
  iVar2 = (int)((longlong)(int)uVar1 * -0x72c234f7 + ((ulonglong)uVar1 << 0x20) >> 0x20);
  uVar1 = param_1[1];
  uVar6 = uVar1 - *param_1;
  iVar7 = (int)((longlong)(int)uVar6 * -0x72c234f7 + ((ulonglong)uVar6 << 0x20) >> 0x20);
  iVar3 = iVar7 >> 6;
  uVar8 = iVar3 - (iVar7 >> 0x1f);
  if ((uint)((iVar2 >> 6) - (iVar2 >> 0x1f)) <= uVar8) {
    iVar2 = (int)((longlong)(int)uVar6 * -0x72c234f7 + ((ulonglong)uVar6 << 0x20) >> 0x20);
    uVar6 = (iVar2 >> 6) - (iVar2 >> 0x1f);
    uVar1 = uVar6 + (uVar6 >> 1) + (uVar6 >> 3);
    if (uVar1 < uVar6 + 0x20) {
      uVar1 = uVar6 + 0x20;
    }
    uVar4 = fn_00100fc6(uVar1 * 0x74,0,uVar8,iVar3,param_1,param_2);
    uVar8 = uVar4;
    for (uVar6 = *param_1; uVar6 != param_2; uVar6 = uVar6 + 0x74) {
      if (uVar8 != 0) {
        fn_0017821c(uVar8,uVar6,0x74);
      }
      uVar8 = uVar8 + 0x74;
    }
    iVar3 = (int)((longlong)(int)(param_2 - *param_1) * -0x72c234f7 +
                  ((ulonglong)(param_2 - *param_1) << 0x20) >> 0x20);
    iVar3 = uVar4 + ((iVar3 >> 6) - (iVar3 >> 0x1f)) * 0x74;
    if (iVar3 != 0) {
      fn_0017821c(iVar3,param_3);
    }
    uVar6 = param_1[1];
    iVar3 = (int)((longlong)(int)(param_2 - *param_1) * -0x72c234f7 +
                  ((ulonglong)(param_2 - *param_1) << 0x20) >> 0x20);
    iVar3 = uVar4 + ((iVar3 >> 6) - (iVar3 >> 0x1f)) * 0x74;
    for (; param_2 != uVar6; param_2 = param_2 + 0x74) {
      iVar3 = iVar3 + 0x74;
      if (iVar3 != 0) {
        fn_0017821c(iVar3,param_2,0x74);
      }
    }
    uVar8 = *param_1;
    uVar5 = param_1[1];
    iVar3 = (int)((longlong)(int)(uVar5 - uVar8) * -0x72c234f7 +
                  ((ulonglong)(uVar5 - uVar8) << 0x20) >> 0x20);
    uVar6 = uVar8;
    if (uVar5 < uVar8) {
      do {
        uVar6 = uVar6 + 0x74;
      } while (uVar6 != uVar5);
    }
    iVar2 = (int)((longlong)(int)(param_1[2] - uVar8) * -0x72c234f7 +
                  ((ulonglong)(param_1[2] - uVar8) << 0x20) >> 0x20);
    fn_001008c4(uVar8,(iVar2 >> 6) - (iVar2 >> 0x1f),0);
    *param_1 = uVar4;
    param_1[1] = uVar4 + ((iVar3 >> 6) - (iVar3 >> 0x1f)) * 0x74 + 0x74;
    param_1[2] = uVar4 + uVar1 * 0x74;
    return;
  }
  param_1[1] = uVar1 + 0x74;
  if (uVar1 != 0) {
    fn_0017821c(uVar1,uVar1 - 0x74,0x74);
  }
  uVar6 = uVar1 - 0x74;
  if (param_2 < uVar6) {
    uVar8 = uVar6 - param_2;
    if (0 < (int)uVar8) {
      iVar3 = (int)((longlong)(int)uVar8 * -0x72c234f7 + ((ulonglong)uVar8 << 0x20) >> 0x20);
      uVar4 = uVar1;
      if (((iVar3 >> 6) - (iVar3 >> 0x1f) & 1U) != 0) {
        uVar4 = uVar1 - 0x74;
        uVar6 = uVar1 - 0xe8;
        fn_0017821c(uVar4,uVar6,0x74);
      }
      iVar3 = (int)((longlong)(int)uVar8 * -0x72c234f7 + ((ulonglong)uVar8 << 0x20) >> 0x20);
      for (iVar3 = (iVar3 >> 6) - (iVar3 >> 0x1f) >> 1; iVar3 != 0; iVar3 = iVar3 + -1) {
        fn_0017821c(uVar4 - 0x74,uVar6 - 0x74,0x74);
        uVar6 = uVar6 - 0xe8;
        uVar4 = uVar4 - 0xe8;
        fn_0017821c(uVar4,uVar6,0x74);
      }
    }
  }
  else {
    while (param_2 != uVar6) {
      uVar6 = uVar6 - 0x74;
      uVar1 = uVar1 - 0x74;
      fn_0017821c(uVar1,uVar6,0x74);
    }
  }
  fn_0017821c(param_2,param_3,0x74);
  return;
}


