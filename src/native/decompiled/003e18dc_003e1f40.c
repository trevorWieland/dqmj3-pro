#include "003e18dc_003e1f40.h"



/* WARNING: Removing unreachable block (ram,0x003e1ff8) */

void fn_003e1f40(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  bool bVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  
  fn_0039c4c8();
  iVar3 = *(int *)(param_1 + 0xa8);
  iVar1 = fn_006b5350(iVar3 + 0xa0);
  if ((iVar1 != 0) && (*(char *)(iVar3 + 0x14c) == '\0')) {
    fn_0024405c(*(undefined4 *)(param_1 + 0xa8),1);
    fVar8 = *(float *)(param_1 + 200) * 0.4;
    fVar9 = fVar8;
    fn_00525bd0();
    fVar8 = fVar8 * -0.024543693;
    uVar7 = 0x41400000;
    fn_0017fe34();
    iVar1 = *(int *)(*(int *)(param_1 + 0xa8) + 0x148);
    bVar6 = iVar1 == 0;
    if (bVar6) {
      iVar1 = *(int *)(*(int *)(param_1 + 0xa8) + 0x140);
    }
    if (!bVar6 || iVar1 != 0) {
      *(float *)(iVar1 + 0x1c) = fVar9;
      *(undefined4 *)(iVar1 + 0x20) = 0;
      *(undefined4 *)(iVar1 + 0x24) = 0;
      *(undefined4 *)(iVar1 + 0x28) = uVar7;
      *(float *)(iVar1 + 0x2c) = fVar8;
      *(undefined4 *)(iVar1 + 0x30) = 0;
    }
  }
  puVar5 = *(undefined4 **)(param_1 + 0xe8);
  for (puVar4 = *(undefined4 **)(param_1 + 0xe4); puVar4 != puVar5; puVar4 = puVar4 + 1) {
    (**(code **)(*(int *)*puVar4 + 0x14))((int *)*puVar4);
  }
  iVar1 = fn_00176d68(*(undefined4 *)(param_1 + 0xb0));
  uVar7 = *(undefined4 *)(param_1 + 0xc4);
  uVar2 = *(undefined4 *)(param_1 + 200);
  *(undefined4 *)(iVar1 + 0x58) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(iVar1 + 0x68) = uVar7;
  *(undefined4 *)(iVar1 + 0x78) = uVar2;
  *(uint *)(iVar1 + 0x88) = *(uint *)(iVar1 + 0x88) | 0x800;
  uVar7 = fn_00176d68(*(undefined4 *)(param_1 + 0xb0));
  fn_005456f4(uVar7,param_1 + 0xb4);
  fn_00243e04(*(undefined4 *)(param_1 + 0xa8));
  fn_002b1a28(*(undefined4 *)(param_1 + 0xac));
  return;
}



void fn_003e1e0c(int *param_1)

{
  bool bVar1;
  int iVar2;
  short local_a8;
  undefined1 auStack_a6 [30];
  undefined1 auStack_88 [96];
  short local_28;
  char local_26;
  undefined1 auStack_24 [20];
  
  fn_0039c400();
  (**(code **)(*param_1 + 0x124))(param_1);
  local_a8 = 0;
  fn_00158f6c(auStack_a6,0x1e);
  fn_00301f50(auStack_88,0x60);
  local_28 = 0;
  local_26 = -1;
  fn_00301f50(auStack_24,0x12);
  fn_003e1714(param_1,&local_a8);
  if (*(char *)(param_1[0x27] + 0x905) != '\0') {
    if ((((local_a8 == (short)param_1[0x3d]) &&
         (iVar2 = fn_001010c8(auStack_a6,(int)param_1 + 0xf6,0x1e), iVar2 == 0)) &&
        (iVar2 = fn_001010c8(auStack_88,param_1 + 0x45,0x60), iVar2 == 0)) &&
       (((local_28 == (short)param_1[0x5d] && (local_26 == *(char *)((int)param_1 + 0x176))) &&
        (iVar2 = fn_001010c8(auStack_24,param_1 + 0x5e,0x12), iVar2 == 0)))) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) goto LAB_003e1f28;
  }
  fn_003e1abc(param_1);
  fn_003e1ce0(param_1,&local_a8);
LAB_003e1f28:
  (**(code **)(*param_1 + 0x120))(param_1);
  return;
}



void fn_003e1ce0(int param_1,short *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(*(int *)(param_1 + 4) + 0x20);
  *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x24) + 8);
  iVar1 = fn_00176d68();
  uVar3 = *(undefined4 *)(iVar1 + 0x68);
  uVar4 = *(undefined4 *)(iVar1 + 0x78);
  *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(iVar1 + 0x58);
  *(undefined4 *)(param_1 + 0xdc) = uVar3;
  *(undefined4 *)(param_1 + 0xe0) = uVar4;
  fn_00176d68(*(undefined4 *)(param_1 + 0xb0));
  puVar2 = (undefined4 *)fn_006dcd40();
  uVar3 = puVar2[1];
  uVar4 = puVar2[2];
  *(undefined4 *)(param_1 + 0xcc) = *puVar2;
  *(undefined4 *)(param_1 + 0xd0) = uVar3;
  *(undefined4 *)(param_1 + 0xd4) = uVar4;
  iVar1 = fn_0069ccf8((int)*param_2);
  if (iVar1 != 0) {
    iVar1 = fn_001a46f4((int)param_2[0x40]);
    if (iVar1 == 0) {
      fn_00243b9c(*(undefined4 *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0xac),(int)*param_2,
                   param_2 + 1,param_2 + 0x10);
      *(undefined4 *)(param_1 + 0xb4) = 0;
      *(undefined4 *)(param_1 + 0xb8) = 0x41200000;
      *(undefined4 *)(param_1 + 0xbc) = 0;
      *(undefined4 *)(param_1 + 0xc0) = 0;
      *(undefined4 *)(param_1 + 0xc4) = 0x41200000;
      *(undefined4 *)(param_1 + 200) = 0x42480000;
    }
    else {
      fn_00243c20(*(undefined4 *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0xac),(int)*param_2,
                   (int)param_2[0x40],(int)(char)param_2[0x41],param_2 + 1,param_2 + 0x10,
                   param_2 + 0x42);
      fn_003e18dc(param_1);
    }
  }
  fn_0017821c(param_1 + 0xf4,param_2,0x96);
  return;
}



void fn_003e1c08(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x9c);
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x74) + 0x10);
  fn_0039c438(param_1);
  fn_0036ee14(uVar2,*(undefined1 *)(iVar1 + 0x38));
  fn_0036e37c(uVar2,(int)*(short *)(iVar1 + 0x152),(int)*(short *)(iVar1 + 0x150),
               (int)*(short *)(iVar1 + 0x14e));
  fn_0039bcf8(param_1,*(undefined2 *)(iVar1 + 0x74),(char *)&DAT_003e1cc8);
  fn_0036ec38(uVar2,*(undefined4 *)(iVar1 + 0x34));
  uVar2 = fn_00246ec4(iVar1 + 0x16c,4);
  fn_0036e8fc(*(undefined4 *)(*(int *)(param_1 + 0x74) + 0x10),uVar2);
  fn_003e14c0(param_1,iVar1 + 0x1c);
  uVar2 = fn_001827b0(*(undefined4 *)(param_1 + 0x74),(char *)&DAT_003e14b0);
  fn_00190d50(uVar2,iVar1 + 0x50);
  fn_0031c7bc(param_1);
  fn_0031ca48(param_1);
  fn_0031c02c(param_1);
  return;
}



void fn_003e1abc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined2 *)(param_1 + 0xf4) = 0;
  fn_00158f6c(param_1 + 0xf6,0x1e);
  fn_00301f50(param_1 + 0x114,0x60);
  *(undefined2 *)(param_1 + 0x174) = 0;
  *(undefined1 *)(param_1 + 0x176) = 0xff;
  fn_00301f50(param_1 + 0x178,0x12);
  if ((((byte)DAT_008c62fc & 1) == 0) && (iVar1 = fn_00303afc(&DAT_008c62fc), iVar1 != 0)) {
    DAT_008f9e2c = 0;
    DAT_008f9e30 = 0;
    DAT_008f9e34 = 0;
  }
  uVar3 = DAT_008f9e34;
  uVar2 = DAT_008f9e30;
  *(undefined4 *)(param_1 + 0xb4) = DAT_008f9e2c;
  *(undefined4 *)(param_1 + 0xb8) = uVar2;
  *(undefined4 *)(param_1 + 0xbc) = uVar3;
  if (((DAT_008c62f8 & 1) == 0) && (iVar1 = fn_00303afc(&DAT_008c62f8), iVar1 != 0)) {
    DAT_008f9e20 = 0x3f800000;
    DAT_008f9e24 = 0x3f800000;
    DAT_008f9e28 = 0x3f800000;
  }
  uVar3 = DAT_008f9e28;
  uVar2 = DAT_008f9e24;
  *(undefined4 *)(param_1 + 0xc0) = DAT_008f9e20;
  *(undefined4 *)(param_1 + 0xc4) = uVar2;
  *(undefined4 *)(param_1 + 200) = uVar3;
  fn_00243d10(*(undefined4 *)(param_1 + 0xa8));
  iVar1 = fn_00176d68(*(undefined4 *)(param_1 + 0xb0));
  uVar2 = *(undefined4 *)(param_1 + 0xdc);
  uVar3 = *(undefined4 *)(param_1 + 0xe0);
  *(undefined4 *)(iVar1 + 0x58) = *(undefined4 *)(param_1 + 0xd8);
  *(undefined4 *)(iVar1 + 0x68) = uVar2;
  *(undefined4 *)(iVar1 + 0x78) = uVar3;
  *(uint *)(iVar1 + 0x88) = *(uint *)(iVar1 + 0x88) | 0x800;
  uVar2 = fn_00176d68(*(undefined4 *)(param_1 + 0xb0));
  fn_005456f4(uVar2,param_1 + 0xcc);
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  return;
}



void fn_003e1a58(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0xe4);
  if (*(int **)(param_1 + 0xe8) != piVar1) {
    do {
      if ((int *)*piVar1 != (int *)0x0) {
        (**(code **)(*(int *)*piVar1 + 0x18))();
        if ((int *)*piVar1 != (int *)0x0) {
          (**(code **)(*(int *)*piVar1 + 4))();
        }
        *piVar1 = 0;
      }
      piVar1 = piVar1 + 1;
    } while (*(int **)(param_1 + 0xe8) != piVar1);
  }
  return;
}



void fn_003e1a28(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x18c,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003e208c(iVar1,param_1);
  return;
}



void fn_003e18dc(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [24];
  
  iVar3 = 0;
  iVar2 = (int)*(char *)(*(int *)(param_1 + 0x9c) + 0x52c);
  if ((iVar2 < 0) || (*(int *)(param_1 + 0x9c) + iVar2 * 0xf0 == -0x16c)) {
    uVar1 = 0;
  }
  else {
    fn_0020bbc4(auStack_30);
    uVar1 = fn_006bfda8(auStack_2c);
  }
  iVar2 = (int)*(char *)(*(int *)(param_1 + 0x9c) + 0x52c);
  if (-1 < iVar2) {
    iVar3 = *(int *)(param_1 + 0x9c) + iVar2 * 0xf0 + 0x16c;
  }
  fn_0020bbc4(auStack_30,iVar3);
  iVar2 = fn_006bfe90(auStack_2c);
  uVar7 = 0;
  iVar3 = fn_00242a30(uVar1);
  fVar5 = (float)VectorUnsignedToFloat((uint)*(byte *)(iVar3 + 2),(byte)(in_fpscr >> 0x16) & 3);
  fVar6 = (float)VectorUnsignedToFloat((uint)*(byte *)(iVar3 + 1),(byte)(in_fpscr >> 0x16) & 3);
  fVar6 = fVar6 * *(float *)(&DAT_007c7210 + iVar2 * 4);
  fVar5 = fVar5 * *(float *)(&DAT_007c7210 + iVar2 * 4) * 1.2;
  iVar2 = fn_00242b0c(uVar1);
  if (iVar2 == 0) {
    fVar4 = 0.7;
  }
  else {
    fVar4 = 0.9;
  }
  *(undefined4 *)(param_1 + 0xb4) = uVar7;
  *(undefined4 *)(param_1 + 0xc0) = uVar7;
  *(float *)(param_1 + 200) = fVar5;
  *(float *)(param_1 + 0xb8) = fVar6 * fVar4;
  *(undefined4 *)(param_1 + 0xbc) = uVar7;
  *(float *)(param_1 + 0xc4) = fVar6 * fVar4;
  return;
}


