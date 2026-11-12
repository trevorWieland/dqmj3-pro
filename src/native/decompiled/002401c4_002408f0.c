#include "002401c4_002408f0.h"



void fn_0024073c(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 local_20;
  int iStack_1c;
  
  fn_00240c54();
  iVar1 = fn_005e2e4c(*(undefined4 *)(param_1 + 0x2c));
  iVar2 = fn_005e3b74(*(undefined4 *)(param_1 + 0x2c));
  iStack_1c = param_1 + 0x30;
  local_20 = param_2;
  for (; iVar1 != iVar2; iVar1 = iVar1 + 0x1c) {
    fn_005ea480(&local_20,iVar1);
  }
  iVar1 = fn_005e2e58(*(undefined4 *)(param_1 + 0x2c));
  iVar2 = fn_005e3b80(*(undefined4 *)(param_1 + 0x2c));
  iStack_1c = param_1 + 0x30;
  local_20 = param_2;
  for (; iVar1 != iVar2; iVar1 = iVar1 + 0x1c) {
    fn_005ea480(&local_20,iVar1);
  }
  iVar1 = fn_005e2e40(*(undefined4 *)(param_1 + 0x2c));
  iVar2 = fn_005e3b68(*(undefined4 *)(param_1 + 0x2c));
  iStack_1c = param_1 + 0x30;
  local_20 = param_2;
  for (; iVar1 != iVar2; iVar1 = iVar1 + 0x1c) {
    fn_005ea480(&local_20,iVar1);
  }
  iVar1 = fn_005e2e34(*(undefined4 *)(param_1 + 0x2c));
  iVar2 = fn_005e3b5c(*(undefined4 *)(param_1 + 0x2c));
  iStack_1c = param_1 + 0x30;
  local_20 = param_2;
  for (; iVar1 != iVar2; iVar1 = iVar1 + 0x1c) {
    fn_005ea480(&local_20,iVar1);
  }
  if ((((byte)DAT_008c62fc & 1) == 0) && (iVar1 = fn_00303afc(&DAT_008c62fc), iVar1 != 0)) {
    DAT_008f9e2c = 0;
    DAT_008f9e30 = 0;
    DAT_008f9e34 = 0;
  }
  fn_005e60a8(param_2,&DAT_008f9e2c);
  return;
}



void fn_002404f8(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 auStack_28 [8];
  undefined4 local_20;
  undefined4 uStack_1c;
  
  fn_005f0e60(*(undefined4 *)(param_1 + 0x50));
  fn_005e3b8c(*(undefined4 *)(param_1 + 0x2c),
               *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x50) + 0x68) + 4));
  fn_005e3abc(*(undefined4 *)(param_1 + 0x2c));
  uVar1 = fn_006ebf78(*(undefined4 *)(param_1 + 0x24));
  fn_005e2e64(*(undefined4 *)(param_1 + 0x2c),uVar1,1);
  fn_005e3af4(*(undefined4 *)(param_1 + 0x2c));
  iVar2 = (**(code **)(**(int **)(param_1 + 0x50) + 0xc))();
  if (iVar2 != 0) {
    fn_00240c54(param_1,param_2);
    iVar2 = fn_005e2e4c(*(undefined4 *)(param_1 + 0x2c));
    iVar3 = fn_005e3b74(*(undefined4 *)(param_1 + 0x2c));
    uStack_1c = fn_005f0dd4(*(undefined4 *)(param_1 + 0x50));
    local_20 = param_2;
    for (; iVar2 != iVar3; iVar2 = iVar2 + 0x1c) {
      fn_005ea480(&local_20,iVar2);
    }
    iVar2 = fn_005e2e58(*(undefined4 *)(param_1 + 0x2c));
    iVar3 = fn_005e3b80(*(undefined4 *)(param_1 + 0x2c));
    uVar1 = fn_005f0dd4(*(undefined4 *)(param_1 + 0x50));
    puVar4 = (undefined4 *)fn_005e8b2c(auStack_28,param_2,uVar1);
    local_20 = *puVar4;
    uStack_1c = puVar4[1];
    for (; iVar2 != iVar3; iVar2 = iVar2 + 0x1c) {
      fn_005e8fd4(&local_20,iVar2);
    }
    iVar2 = fn_005e2e40(*(undefined4 *)(param_1 + 0x2c));
    iVar3 = fn_005e3b68(*(undefined4 *)(param_1 + 0x2c));
    uStack_1c = fn_005f0dd4(*(undefined4 *)(param_1 + 0x50));
    local_20 = param_2;
    for (; iVar2 != iVar3; iVar2 = iVar2 + 0x1c) {
      fn_005ea480(&local_20,iVar2);
    }
    iVar2 = fn_005e2e34(*(undefined4 *)(param_1 + 0x2c));
    iVar3 = fn_005e3b5c(*(undefined4 *)(param_1 + 0x2c));
    uStack_1c = fn_005f0dd4(*(undefined4 *)(param_1 + 0x50));
    local_20 = param_2;
    for (; iVar2 != iVar3; iVar2 = iVar2 + 0x1c) {
      fn_005ea480(&local_20,iVar2);
    }
    if ((((byte)DAT_008c62fc & 1) == 0) && (iVar2 = fn_00303afc(&DAT_008c62fc), iVar2 != 0)) {
      DAT_008f9e2c = 0;
      DAT_008f9e30 = 0;
      DAT_008f9e34 = 0;
    }
    fn_005e60a8(param_2,&DAT_008f9e2c);
  }
  fn_005f0de8(*(undefined4 *)(param_1 + 0x50),param_2);
  return;
}



void fn_002403f4(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  float local_40;
  float fStack_3c;
  float local_38;
  
  cVar1 = *(char *)(param_1 + 0x77);
  uVar2 = fn_00176d68(*(undefined4 *)(param_1 + 0x48));
  fn_002408f0(param_1,uVar2,(int)cVar1);
  if (cVar1 != 0) {
    iVar3 = fn_00176d68(*(undefined4 *)(param_1 + 0x48));
    uVar9 = CONCAT44(-*(float *)(iVar3 + 0x68),-*(float *)(iVar3 + 0x58));
    uVar10 = (ulonglong)(uint)-*(float *)(iVar3 + 0x78);
    fn_00117984();
    fn_0010fa20();
    iVar3 = fn_006eb278();
    if (iVar3 != 0) {
      iVar4 = fn_006e9fd8();
      iVar8 = 0;
      if (0 < iVar4) {
        do {
          uVar2 = fn_005e19a4(iVar3,iVar8);
          iVar5 = fn_006ec6f4();
          iVar7 = 0;
          if (0 < iVar5) {
            do {
              iVar6 = fn_005eff2c(uVar2,iVar7);
              if (iVar6 != 0) {
                local_38 = *(float *)(iVar6 + 0x2c) + (float)uVar10;
                local_40 = *(float *)(iVar6 + 0x24) + (float)uVar9;
                fStack_3c = *(float *)(iVar6 + 0x28) + (float)((ulonglong)uVar9 >> 0x20);
                fn_005e51f4(iVar6,&local_40);
              }
              iVar7 = iVar7 + 1;
            } while (iVar7 < iVar5);
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < iVar4);
      }
    }
  }
  return;
}



void fn_002408f0(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  float *pfVar4;
  uint extraout_r1;
  uint uVar5;
  uint extraout_r1_00;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float local_34;
  float fStack_30;
  float fStack_2c;
  
  if (param_3 == 0) {
    fn_00545778(param_2);
    fn_00240ca8(param_1,param_2);
    fn_005e1a14(param_1,param_2);
    iVar1 = *(int *)(param_1 + 0x60);
    uVar5 = extraout_r1_00;
    if (iVar1 != 0) {
      uVar5 = (uint)*(byte *)(iVar1 + 0x40);
    }
    if (iVar1 != 0 && uVar5 != 0) {
      fn_0036a6ec();
    }
    iVar1 = fn_006ebf78(*(undefined4 *)(param_1 + 0x24));
    if (iVar1 != 0) {
      puVar2 = (undefined4 *)fn_006eb1e8();
      puVar3 = (undefined4 *)fn_006eb1dc(iVar1);
      if (puVar2 != puVar3) {
        do {
          uVar6 = *puVar2;
          iVar1 = fn_006ebde8(uVar6);
          if (iVar1 != 0) {
            fn_005eeda8();
          }
          fn_0017fc28(uVar6,8);
          fn_005ea294(uVar6,param_2);
          puVar2 = puVar2 + 1;
        } while (puVar2 != puVar3);
        return;
      }
    }
  }
  else {
    fn_00545778(param_2);
    fn_00240ca8(param_1,param_2);
    fn_005e1a14(param_1,param_2);
    iVar1 = *(int *)(param_1 + 0x60);
    uVar5 = extraout_r1;
    if (iVar1 != 0) {
      uVar5 = (uint)*(byte *)(iVar1 + 0x40);
    }
    if (iVar1 != 0 && uVar5 != 0) {
      fn_0036a6ec();
    }
    iVar1 = fn_006ebf78(*(undefined4 *)(param_1 + 0x24));
    if (iVar1 != 0) {
      puVar2 = (undefined4 *)fn_006eb1e8();
      puVar3 = (undefined4 *)fn_006eb1dc(iVar1);
      for (; puVar2 != puVar3; puVar2 = puVar2 + 1) {
        uVar6 = *puVar2;
        iVar1 = fn_006ebde8(uVar6);
        if (iVar1 != 0) {
          fn_005eeda8();
        }
        fn_0017fc28(uVar6,8);
        fn_005ea294(uVar6,param_2);
      }
    }
    pfVar4 = (float *)fn_006dcd40(param_2);
    local_40 = *pfVar4;
    fStack_3c = pfVar4[1];
    fStack_38 = pfVar4[2];
    fVar7 = *(float *)(param_2 + 0x58);
    fVar8 = *(float *)(param_2 + 0x68);
    fVar9 = *(float *)(param_2 + 0x78);
    *(undefined4 *)(param_2 + 0x98) = 0;
    *(undefined4 *)(param_2 + 0xa8) = 0;
    *(undefined4 *)(param_2 + 0xb8) = 0;
    local_34 = local_40 - fVar7;
    fStack_2c = fStack_38 - fVar9;
    fStack_30 = fStack_3c - fVar8;
    fn_005456f4(param_2,&local_34);
    fn_00545778(param_2);
    fn_005456f4(param_2,&local_40);
    *(float *)(param_2 + 0x98) = fVar7;
    *(float *)(param_2 + 0xa8) = fVar8;
    *(float *)(param_2 + 0xb8) = fVar9;
  }
  return;
}



void fn_00240324(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  float local_40;
  float fStack_3c;
  float fStack_38;
  
  if (*(char *)(param_1 + 0x77) == '\0') {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x44);
  uVar8 = CONCAT44(*(undefined4 *)(iVar1 + 0x68),*(undefined4 *)(iVar1 + 0x58));
  uVar9 = (ulonglong)*(uint *)(iVar1 + 0x78);
  fn_00117984();
  fn_0010fa20();
  iVar1 = fn_006eb278();
  if (iVar1 != 0) {
    iVar2 = fn_006e9fd8();
    iVar7 = 0;
    if (0 < iVar2) {
      do {
        uVar3 = fn_005e19a4(iVar1,iVar7);
        iVar4 = fn_006ec6f4();
        iVar6 = 0;
        if (0 < iVar4) {
          do {
            iVar5 = fn_005eff2c(uVar3,iVar6);
            if (iVar5 != 0) {
              local_40 = *(float *)(iVar5 + 0x24) + (float)uVar8;
              fStack_38 = *(float *)(iVar5 + 0x2c) + (float)uVar9;
              fStack_3c = *(float *)(iVar5 + 0x28) + (float)((ulonglong)uVar8 >> 0x20);
              fn_005e51f4(iVar5,&local_40);
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < iVar4);
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar2);
    }
  }
  return;
}



void fn_0024027c(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 4) = param_2;
  return;
}



void fn_0024026c(undefined4 *param_1)

{
  *param_1 = 0x42700000;
  return;
}



void fn_00240234(undefined4 *param_1)

{
  *param_1 = &DAT_0081d2ec;
  if ((int *)param_1[0xb] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xb] + 4))();
  }
  fn_002feef8(param_1);
  return;
}



undefined4 * fn_002401c4(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *param_1 = &DAT_0081d2ec;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[2] = &DAT_00859000;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  iVar1 = fn_00145b00(0x34,&DAT_00812c8c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = fn_003b675c();
  }
  param_1[0xb] = uVar2;
  return param_1;
}


