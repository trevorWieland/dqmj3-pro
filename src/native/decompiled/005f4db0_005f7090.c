#include "005f4db0_005f7090.h"



void fn_005f7090(int param_1)

{
  uint uVar1;
  uint in_fpscr;
  uint uVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  
  if ((*(char *)(param_1 + 4) != '\0') && (*(char *)(param_1 + 4) == '\x01')) {
    if (*(char *)(param_1 + 0x4c) == '\0') {
      fVar3 = *(float *)(param_1 + 0x48) + *(float *)(param_1 + 0x3c);
      uVar2 = in_fpscr & 0xfffffff;
      *(float *)(param_1 + 0x48) = fVar3;
      if (*(float *)(param_1 + 0x3c) != 0.0) {
        fVar5 = (float)VectorUnsignedToFloat
                                 (*(undefined4 *)(param_1 + 0x44),(byte)(uVar2 >> 0x16) & 3);
        uVar1 = uVar2 | (uint)(fVar5 == fVar3) << 0x1e;
        uVar2 = uVar1 | (uint)(fVar3 <= fVar5) << 0x1d;
        if ((bool)((byte)(uVar2 >> 0x1d) & 1) && !SUB41(uVar1 >> 0x1e,0)) goto LAB_005f7154;
      }
      uVar4 = VectorUnsignedToFloat(*(undefined4 *)(param_1 + 0x44),(byte)(uVar2 >> 0x16) & 3);
      *(undefined4 *)(param_1 + 0x48) = uVar4;
      fn_005f6f40();
      *(undefined1 *)(param_1 + 0x4c) = 1;
      return;
    }
    fVar3 = *(float *)(param_1 + 0x48) + *(float *)(param_1 + 0x40);
    uVar2 = in_fpscr & 0xfffffff;
    *(float *)(param_1 + 0x48) = fVar3;
    if (*(float *)(param_1 + 0x40) != 0.0) {
      fVar5 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 8),(byte)(uVar2 >> 0x16) & 3);
      uVar1 = uVar2 | (uint)(fVar5 == fVar3) << 0x1e;
      uVar2 = uVar1 | (uint)(fVar3 <= fVar5) << 0x1d;
      if ((bool)((byte)(uVar2 >> 0x1d) & 1) && !SUB41(uVar1 >> 0x1e,0)) {
LAB_005f7154:
        fn_005f6f40();
        return;
      }
    }
    uVar4 = VectorSignedToFloat(*(undefined4 *)(param_1 + 8),(byte)(uVar2 >> 0x16) & 3);
    *(undefined4 *)(param_1 + 0x48) = uVar4;
    fn_005f6f40();
    *(undefined1 *)(param_1 + 4) = 2;
  }
  return;
}



void fn_005f65d4(void)

{
  DAT_0089a4c8 = fn_0010101c();
  return;
}



void fn_005f6270(int *param_1)

{
  int iVar1;
  
  if (*(int *)param_1[7] == 0) {
    (**(code **)(*param_1 + 8))(param_1);
    for (iVar1 = param_1[3]; iVar1 != 0; iVar1 = *(int *)(iVar1 + 8)) {
      fn_005f6270(iVar1);
    }
  }
  return;
}



void fn_005f4db0(int param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  char *pcVar11;
  uint in_fpscr;
  undefined4 uVar12;
  undefined4 local_130;
  undefined1 *local_12c;
  undefined1 *puStack_128;
  undefined1 *local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 uStack_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 uStack_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined1 auStack_d8 [48];
  undefined1 auStack_a8 [56];
  undefined1 auStack_70 [80];
  
  fn_005f56f4(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28),
               *(undefined4 *)(param_1 + 0x2c));
  cVar1 = *(char *)(param_1 + 0x24);
  iVar3 = *(int *)(*(int *)(param_1 + 0x20) + 4);
  if (cVar1 == '\0') {
    uVar10 = 400;
  }
  else {
    uVar10 = 0x140;
  }
  fn_005f535c(iVar3,uVar10,0xf0);
  fn_005f4de0(iVar3,uVar10,0xf0,auStack_70,auStack_d8);
  uVar10 = 0;
  local_130 = 0;
  local_124 = (undefined1 *)0x0;
  local_120 = 0;
  local_11c = 0;
  local_118 = 0;
  uVar12 = 0x3f800000;
  local_12c = auStack_70;
  local_114 = 0;
  uStack_110 = 0x3f800000;
  local_10c = 0x3f800000;
  local_108 = 0x3f800000;
  local_104 = 0x3f800000;
  local_100 = 0;
  local_fc = 0;
  local_f8 = 0;
  local_f4 = 0;
  uStack_f0 = 0x3f800000;
  local_ec = 0x3f800000;
  local_e8 = 0x3f800000;
  local_e4 = 0x3f800000;
  local_e0 = 0;
  local_dc = 0;
  puStack_128 = auStack_d8;
  if ((((byte)DAT_008c6300 & 1) == 0) && (iVar4 = fn_00303afc(&DAT_008c6300), iVar4 != 0)) {
    DAT_008f9e38 = uVar12;
    DAT_008f9e3c = uVar10;
    DAT_008f9e40 = uVar10;
    DAT_008f9e44 = uVar10;
    DAT_008f9e48 = uVar10;
    DAT_008f9e4c = uVar12;
    DAT_008f9e50 = uVar10;
    DAT_008f9e54 = uVar10;
    DAT_008f9e58 = uVar10;
    DAT_008f9e5c = uVar10;
    DAT_008f9e60 = uVar12;
    DAT_008f9e64 = uVar10;
  }
  fn_001781f0(auStack_a8,&DAT_008f9e38);
  local_124 = auStack_a8;
  local_130 = *(undefined4 *)(iVar3 + 0x65c);
  local_e0 = 0;
  *(undefined4 *)(iVar3 + 0x680) = 0;
  iVar4 = *(int *)(iVar3 + 0x660);
  *(undefined4 *)(iVar4 + 0x10) = uVar10;
  *(undefined4 *)(iVar4 + 0x14) = uVar10;
  iVar4 = *(int *)(iVar3 + 0x660);
  uVar12 = VectorSignedToFloat(*(undefined4 *)(iVar3 + 0x684),(byte)(in_fpscr >> 0x16) & 3);
  uVar10 = VectorSignedToFloat(*(undefined4 *)(iVar3 + 0x688),(byte)(in_fpscr >> 0x16) & 3);
  *(undefined4 *)(iVar4 + 8) = uVar12;
  *(undefined4 *)(iVar4 + 0xc) = uVar10;
  fn_0055f99c(*(undefined4 *)(iVar3 + 0x660));
  pcVar11 = *(char **)(iVar3 + 0x664);
  do {
    while( true ) {
      if (pcVar11 == (char *)0x0) goto LAB_005f52a4;
      if (pcVar11[1] == cVar1) break;
      pcVar5 = (char *)0x0;
      if (*pcVar11 == '\0') {
        pcVar11 = pcVar11 + 6;
        iVar6 = fn_002febd8(pcVar11);
        uVar9 = (uint)(pcVar11 + iVar6 + 1) & 3;
        iVar4 = 0;
        if (uVar9 != 0) {
          iVar4 = 4 - uVar9;
        }
        pcVar5 = pcVar11 + iVar6 + 1 + iVar4;
      }
      else if (*pcVar11 == '\x01') {
        pcVar5 = pcVar11 + 6;
      }
      pcVar11 = pcVar5;
      if (*(char **)(iVar3 + 0x66c) <= pcVar5) goto LAB_005f52a4;
    }
    if (*pcVar11 == '\0') {
      puVar7 = *(undefined4 **)(iVar3 + 0x660);
      uVar10 = *(undefined4 *)(pcVar11 + 2);
      *puVar7 = uVar10;
      puVar7[1] = uVar10;
      pcVar5 = pcVar11 + 6;
      cVar2 = *pcVar5;
      while (cVar2 != '\0') {
        iVar4 = fn_002febd8(pcVar5);
        iVar6 = fn_001030a6(pcVar5,10);
        if (iVar6 == 0) {
          fn_0075f5d0(*(undefined4 *)(iVar3 + 0x660),pcVar5);
        }
        else {
          iVar6 = iVar6 - (int)pcVar5;
          iVar8 = fn_002fecec(iVar6 + 2);
          fn_00301a9c(iVar8,pcVar5,iVar6 + 1);
          *(undefined1 *)(iVar8 + iVar6 + 2 + -1) = 0;
          uVar12 = *(undefined4 *)(iVar3 + 0x660);
          uVar10 = fn_002febd8(iVar8);
          fn_0075f574(uVar12,iVar8,uVar10);
          iVar4 = iVar6 + 1;
          uVar10 = VectorSignedToFloat(*(int *)(iVar3 + 0x680) * *(int *)(iVar3 + 0x684),
                                       (byte)(in_fpscr >> 0x16) & 3);
          *(undefined4 *)(*(int *)(iVar3 + 0x660) + 0x10) = uVar10;
          fn_0030233c(iVar8);
        }
        pcVar5 = pcVar5 + iVar4;
        cVar2 = *pcVar5;
      }
    }
    else if (*pcVar11 == '\x01') {
      iVar4 = *(int *)(iVar3 + 0x660);
      uVar10 = VectorSignedToFloat((int)*(short *)(pcVar11 + 2) * *(int *)(iVar3 + 0x684),
                                   (byte)(in_fpscr >> 0x16) & 3);
      uVar12 = VectorSignedToFloat((int)*(short *)(pcVar11 + 4) * *(int *)(iVar3 + 0x688),
                                   (byte)(in_fpscr >> 0x16) & 3);
      *(undefined4 *)(iVar4 + 0x10) = uVar10;
      *(undefined4 *)(iVar4 + 0x14) = uVar12;
      *(int *)(iVar3 + 0x680) = (int)*(short *)(pcVar11 + 2);
    }
    pcVar5 = (char *)0x0;
    if (*pcVar11 == '\0') {
      pcVar11 = pcVar11 + 6;
      iVar6 = fn_002febd8(pcVar11);
      uVar9 = (uint)(pcVar11 + iVar6 + 1) & 3;
      iVar4 = 0;
      if (uVar9 != 0) {
        iVar4 = 4 - uVar9;
      }
      pcVar5 = pcVar11 + iVar6 + 1 + iVar4;
    }
    else if (*pcVar11 == '\x01') {
      pcVar5 = pcVar11 + 6;
    }
    pcVar11 = pcVar5;
  } while (pcVar5 < *(char **)(iVar3 + 0x66c));
LAB_005f52a4:
  fn_00560638(iVar3 + 0x48,*(undefined4 *)(iVar3 + 0x660),0,0,0,0);
  uVar10 = fn_00560b5c();
  (**(code **)(*(int *)(iVar3 + 0x48) + 0xc))(iVar3 + 0x48,uVar10,0);
  fn_00560b6c();
  uVar10 = fn_00560b5c();
  (**(code **)(*(int *)(iVar3 + 0x48) + 0x14))(iVar3 + 0x48,uVar10,&local_130);
  fn_00560b6c();
  uVar10 = fn_00560b5c();
  (**(code **)(*(int *)(iVar3 + 0x48) + 0x10))(iVar3 + 0x48,uVar10,0);
  fn_00560b6c();
  return;
}


