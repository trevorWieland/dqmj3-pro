#include "005e2770_005f3c7c.h"



undefined4 fn_005f3c7c(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_0089a4dc;
  DAT_0089a4dc = param_1;
  return uVar1;
}



void fn_005f3c30(uint param_1)

{
  DAT_0089a4d4 = param_1 | DAT_0089a4d4;
  return;
}



void fn_005f0bc4(undefined4 *param_1,int param_2,undefined4 *param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_50 [12];
  undefined4 local_44;
  undefined4 local_34;
  undefined4 local_24;
  
  uVar3 = *param_1;
  uVar1 = *(undefined4 *)(param_2 + 4);
  if ((((byte)DAT_008c6300 & 1) == 0) && (iVar2 = fn_00303afc(&DAT_008c6300), iVar2 != 0)) {
    DAT_008f9e38 = 0x3f800000;
    DAT_008f9e3c = 0;
    DAT_008f9e40 = 0;
    DAT_008f9e44 = 0;
    DAT_008f9e48 = 0;
    DAT_008f9e4c = 0x3f800000;
    DAT_008f9e50 = 0;
    DAT_008f9e54 = 0;
    DAT_008f9e58 = 0;
    DAT_008f9e5c = 0;
    DAT_008f9e60 = 0x3f800000;
    DAT_008f9e64 = 0;
  }
  fn_001781f0(auStack_50,&DAT_008f9e38);
  local_44 = *param_3;
  local_34 = param_3[1];
  local_24 = param_3[2];
  fn_0053f308(uVar3,uVar1,auStack_50,param_4,param_5,param_6,0xffffffff);
  return;
}



void fn_005f09e0(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int local_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  puVar2 = *(undefined4 **)(param_1 + 4);
  local_20 = 0;
  fn_0012bc84(0x208,&local_20);
  iVar1 = local_20;
  local_1c = *(undefined4 *)(param_2 + 0x58);
  uStack_18 = *(undefined4 *)(param_2 + 0x68);
  uStack_14 = *(undefined4 *)(param_2 + 0x78);
  local_20 = fn_00537f8c(*puVar2,local_20,&local_1c);
  if (*(float *)(param_2 + 0x294) != 0.0) {
    local_20 = fn_00537ed0(*puVar2,local_20);
  }
  if (local_20 != iVar1) {
    fn_001467e4(local_20 - iVar1 & 0xfffffffc);
    fn_00146578();
    fn_0012b994();
  }
  return;
}



void fn_005efd98(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  fn_005ef668(*(undefined4 *)(param_1 + 4),param_2,param_1,param_3,param_4);
  return;
}



void fn_005e3908(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  switch(param_2) {
  case 0:
    puVar1 = (undefined4 *)fn_00145b00(8,&DAT_00812c8c);
    if (puVar1 != (undefined4 *)0x0) {
      puVar1[1] = param_1 + 0x40;
      *puVar1 = &DAT_008589d4;
    }
    break;
  case 1:
    puVar1 = (undefined4 *)fn_00145b00(8,&DAT_00812c8c);
    if (puVar1 != (undefined4 *)0x0) {
      puVar1[1] = param_1 + 0x40;
      *puVar1 = &DAT_008589fc;
      return;
    }
    break;
  case 2:
    puVar1 = (undefined4 *)fn_00145b00(8,&DAT_00812c8c);
    if (puVar1 != (undefined4 *)0x0) {
      puVar1[1] = param_1 + 0x40;
      *puVar1 = &DAT_00858a38;
      return;
    }
    break;
  case 3:
    puVar1 = (undefined4 *)fn_00145b00(8,&DAT_00812c8c);
    if (puVar1 != (undefined4 *)0x0) {
      puVar1[1] = param_1 + 0x40;
      *puVar1 = &DAT_00858a60;
      return;
    }
    break;
  case 4:
    puVar1 = (undefined4 *)fn_00145b00(8,&DAT_00812c8c);
    if (puVar1 != (undefined4 *)0x0) {
      puVar1[1] = param_1 + 0x40;
      *puVar1 = &DAT_008589e8;
      return;
    }
    break;
  case 5:
    puVar1 = (undefined4 *)fn_00145b00(8,&DAT_00812c8c);
    if (puVar1 != (undefined4 *)0x0) {
      puVar1[1] = param_1 + 0x40;
      *puVar1 = &DAT_00858a24;
      return;
    }
    break;
  case 6:
    puVar1 = (undefined4 *)fn_00145b00(8,&DAT_00812c8c);
    if (puVar1 != (undefined4 *)0x0) {
      puVar1[1] = param_1 + 0x40;
      *puVar1 = &DAT_00858a4c;
      return;
    }
    break;
  default:
    puVar1 = (undefined4 *)fn_00145b00(8,&DAT_00812c8c);
    if (puVar1 != (undefined4 *)0x0) {
      puVar1[1] = param_1 + 0x40;
      *puVar1 = &DAT_00858a10;
      return;
    }
  }
  return;
}



void fn_005e2770(int param_1,int param_2,int param_3,int param_4,float *param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  iVar2 = param_2 * 0x278 + 4;
  if (param_4 == 0) {
    *(byte *)(param_1 + 0x164) = *(byte *)(param_1 + 0x164) | 1;
    iVar2 = *(int *)(param_1 + 0xc) + iVar2 + param_3 * 0x2c;
    uVar4 = fn_0044eca8();
    iVar1 = fn_0044eca8();
    *(uint *)(iVar2 + 0x14) = uVar4 | iVar1 << 0x10;
    uVar3 = fn_0044eca8();
    *(undefined4 *)(iVar2 + 0x18) = uVar3;
    *(undefined1 *)(iVar2 + 0x1c) = 1;
    return;
  }
  if (param_4 != 2) {
    return;
  }
  fVar8 = 0.0;
  *(byte *)(param_1 + 0x164) = *(byte *)(param_1 + 0x164) | 1;
  fVar6 = -*param_5;
  iVar2 = *(int *)(param_1 + 0xc) + iVar2 + param_3 * 0x2c;
  fVar9 = 8191.0;
  uVar3 = 0;
  fVar7 = fVar6;
  if (fVar6 != 0.0) {
    fVar7 = (float)((int)fVar6 << 1);
  }
  if (fVar6 != 0.0 && (uint)fVar7 >> 0x18 != 0xff) {
    fVar7 = (fVar6 + 2.0) * 2048.0;
    fVar6 = fVar8;
    if (0.0 <= fVar7) {
      bVar5 = SBORROW4((int)fVar7,0x46000000);
      iVar1 = (int)fVar7 + -0x46000000;
      if ((int)fVar7 < 0x46000000) {
        bVar5 = SBORROW4((int)fVar7,0x45800000);
        iVar1 = (int)fVar7 + -0x45800000;
      }
      else {
        fVar7 = fVar9;
      }
      fVar6 = fVar7;
      if (iVar1 < 0 == bVar5) {
        uVar4 = VectorFloatToUnsigned(fVar7 - 4096.0,3);
        goto LAB_005e28bc;
      }
    }
    uVar4 = VectorFloatToUnsigned(fVar6 + 4096.0,3);
  }
  else {
    uVar4 = 0;
  }
LAB_005e28bc:
  fVar6 = -param_5[1];
  fVar7 = fVar6;
  if (fVar6 != 0.0) {
    fVar7 = (float)((int)fVar6 << 1);
  }
  if (fVar6 != 0.0 && (uint)fVar7 >> 0x18 != 0xff) {
    fVar7 = (fVar6 + 2.0) * 2048.0;
    fVar6 = fVar8;
    if (0.0 <= fVar7) {
      bVar5 = SBORROW4((int)fVar7,0x46000000);
      iVar1 = (int)fVar7 + -0x46000000;
      if ((int)fVar7 < 0x46000000) {
        bVar5 = SBORROW4((int)fVar7,0x45800000);
        iVar1 = (int)fVar7 + -0x45800000;
      }
      else {
        fVar7 = fVar9;
      }
      fVar6 = fVar7;
      if (iVar1 < 0 == bVar5) {
        iVar1 = VectorFloatToUnsigned(fVar7 - 4096.0,3);
        goto LAB_005e292c;
      }
    }
    iVar1 = VectorFloatToUnsigned(fVar6 + 4096.0,3);
  }
  else {
    iVar1 = 0;
  }
LAB_005e292c:
  *(uint *)(iVar2 + 0x28) = uVar4 | iVar1 << 0x10;
  fVar6 = -param_5[2];
  fVar7 = fVar6;
  if (fVar6 != 0.0) {
    fVar7 = (float)((int)fVar6 << 1);
  }
  if (fVar6 != 0.0 && (uint)fVar7 >> 0x18 != 0xff) {
    fVar7 = (fVar6 + 2.0) * 2048.0;
    if (0.0 <= fVar7) {
      bVar5 = SBORROW4((int)fVar7,0x46000000);
      iVar1 = (int)fVar7 + -0x46000000;
      if ((int)fVar7 < 0x46000000) {
        bVar5 = SBORROW4((int)fVar7,0x45800000);
        iVar1 = (int)fVar7 + -0x45800000;
        fVar8 = fVar7;
      }
      else {
        fVar8 = fVar9;
      }
      if (iVar1 < 0 == bVar5) {
        uVar3 = VectorFloatToUnsigned(fVar8 - 4096.0,3);
        goto LAB_005e29a0;
      }
    }
    uVar3 = VectorFloatToUnsigned(fVar8 + 4096.0,3);
  }
LAB_005e29a0:
  *(undefined4 *)(iVar2 + 0x2c) = uVar3;
  return;
}


