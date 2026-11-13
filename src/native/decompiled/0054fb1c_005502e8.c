#include "0054fb1c_005502e8.h"



undefined4
fn_005502e8(int param_1,undefined4 param_2,int param_3,undefined4 param_4,float *param_5,
            float *param_6)

{
  char cVar1;
  int iVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  
  fn_006e1ee8(param_3);
  if ((*(byte *)(param_3 + 0xce) & 1) == 0) {
    fn_0054e2f0(param_1,0);
  }
  else {
    fn_0054e2f0(param_1,0xd00);
  }
  if ((*(byte *)(param_3 + 0xce) & 8) == 0) {
    fVar3 = *param_5 + *param_6;
    fVar5 = param_5[1] - param_6[2];
    fVar6 = (*(float *)(param_3 + 0x40) - param_6[2]) - param_6[3];
    fVar4 = (*(float *)(param_3 + 0x3c) - *param_6) - param_6[1];
  }
  else {
    fVar9 = (float)VectorSignedToFloat((int)*(short *)(param_3 + 0xa4),(byte)(in_fpscr >> 0x16) & 3)
    ;
    fVar7 = (float)VectorSignedToFloat((int)*(short *)(param_3 + 0xa6),(byte)(in_fpscr >> 0x16) & 3)
    ;
    fVar6 = (float)VectorSignedToFloat((int)*(short *)(param_3 + 0xa8),(byte)(in_fpscr >> 0x16) & 3)
    ;
    fVar4 = (float)VectorSignedToFloat((int)*(short *)(param_3 + 0xaa),(byte)(in_fpscr >> 0x16) & 3)
    ;
    fVar3 = (*param_5 + *param_6) - fVar9 * 0.0625;
    fVar5 = (param_5[1] - param_6[2]) + fVar6 * 0.0625;
    fVar6 = (((*(float *)(param_3 + 0x40) - param_6[2]) + fVar6 * 0.0625) - param_6[3]) +
            fVar4 * 0.0625;
    fVar4 = (((*(float *)(param_3 + 0x3c) - *param_6) + fVar9 * 0.0625) - param_6[1]) +
            fVar7 * 0.0625;
  }
  iVar2 = param_1 + (uint)*(byte *)(param_1 + 0x33) * 0x10;
  uVar8 = VectorUnsignedToFloat(*(byte *)(param_1 + 0x33) + 0x20,(byte)(in_fpscr >> 0x16) & 3);
  *(undefined4 *)(param_1 + 0x600) = uVar8;
  cVar1 = *(char *)(param_1 + 0x33);
  *(float *)(iVar2 + 0x400) = fVar3;
  *(float *)(iVar2 + 0x404) = fVar5;
  *(float *)(iVar2 + 0x3f8) = fVar4;
  *(float *)(iVar2 + 0x3fc) = fVar6;
  *(char *)(param_1 + 0x33) = cVar1 + '\x01';
  fn_00560974(param_1);
  return param_2;
}



undefined4
fn_0054ff18(int param_1,undefined4 param_2,int param_3,undefined4 param_4,float *param_5,
            float *param_6)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint in_fpscr;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  float local_b8 [33];
  int iStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  undefined4 local_28;
  
  uVar4 = 0;
  local_b8[0] = *param_5;
  local_b8[1] = param_5[1];
  local_b8[6] = param_6[1];
  local_b8[0xb] = param_6[3];
  local_b8[2] = *param_6;
  local_b8[3] = param_6[2];
  local_b8[0x11] = local_b8[1] - local_b8[3];
  local_b8[4] = (local_b8[0] + *(float *)(param_3 + 0x3c)) - local_b8[6];
  local_b8[9] = (local_b8[1] - *(float *)(param_3 + 0x40)) + local_b8[0xb];
  local_b8[0x18] = local_b8[0] + local_b8[2];
  local_b8[0x13] = (*(float *)(param_3 + 0x40) - local_b8[3]) - local_b8[0xb];
  local_b8[0x1a] = (*(float *)(param_3 + 0x3c) - local_b8[2]) - local_b8[6];
  local_b8[5] = local_b8[1];
  local_b8[7] = local_b8[3];
  local_b8[8] = local_b8[0];
  local_b8[10] = local_b8[2];
  local_b8[0xc] = local_b8[4];
  local_b8[0xd] = local_b8[9];
  local_b8[0xe] = local_b8[6];
  local_b8[0xf] = local_b8[0xb];
  local_b8[0x10] = local_b8[0];
  local_b8[0x12] = local_b8[2];
  local_b8[0x14] = local_b8[4];
  local_b8[0x15] = local_b8[0x11];
  local_b8[0x16] = local_b8[6];
  local_b8[0x17] = local_b8[0x13];
  local_b8[0x19] = local_b8[1];
  local_b8[0x1b] = local_b8[3];
  local_b8[0x1c] = local_b8[0x18];
  local_b8[0x1d] = local_b8[9];
  local_b8[0x1e] = local_b8[0x1a];
  local_b8[0x1f] = local_b8[0xb];
  iStack_34 = param_1;
  uStack_30 = param_2;
  iStack_2c = param_3;
  local_28 = param_4;
  if ((*(byte *)(param_3 + 0xce) & 2) == 0) {
    do {
      if ((((uVar4 & 0xff) < (uint)*(byte *)(param_3 + 0xcd)) &&
          (iVar5 = *(int *)(*(int *)(param_3 + 0xd0) + (uVar4 & 0xff) * 8 + 4), iVar5 != 0)) &&
         ((*(ushort *)(iVar5 + 0x76) & 3) != 0)) {
        if ((((0x17 < *(byte *)(param_1 + 0x30) + 1) || (0x20 < *(byte *)(param_1 + 0x31))) ||
            (0x20 < *(byte *)(param_1 + 0x33) + 7)) && (*(byte *)(param_1 + 0x30) != 0)) {
          param_2 = fn_0054f158(param_1,param_2);
        }
        uVar2 = fn_0054df04(param_1,param_2,iVar5);
        uVar2 = fn_005506e0(param_1,uVar2,iVar5);
        uVar13 = fn_0054ec64(param_1,uVar2,local_28,param_3,iVar5,0);
        iVar5 = (int)((ulonglong)uVar13 >> 0x20);
        param_2 = (undefined4)uVar13;
        uVar3 = uVar4 & 0xff;
        bVar8 = uVar3 < 8;
        if (bVar8) {
          iVar5 = *(int *)(param_3 + 0xd0);
        }
        if (bVar8) {
          uVar3 = (uint)*(byte *)(iVar5 + uVar3 * 8);
        }
        if (!bVar8) {
          uVar3 = 0;
        }
        uVar3 = (&DAT_0085aed0)[uVar4 & 0xff] | (&DAT_0085aeb8)[uVar3];
        if ((*(byte *)(param_3 + 0xce) & 1) == 0) {
          uVar3 = uVar3 | 0x40000000;
        }
        fn_0054e2f0(param_1,uVar3);
        fVar11 = local_b8[uVar4 * 4];
        fVar12 = local_b8[uVar4 * 4 + 1];
        fVar9 = local_b8[uVar4 * 4 + 2];
        fVar10 = local_b8[uVar4 * 4 + 3];
        iVar5 = param_1 + (uint)*(byte *)(param_1 + 0x33) * 0x10;
        uVar2 = VectorUnsignedToFloat(*(byte *)(param_1 + 0x33) + 0x20,(byte)(in_fpscr >> 0x16) & 3)
        ;
        *(undefined4 *)(param_1 + 0x600) = uVar2;
        cVar1 = *(char *)(param_1 + 0x33);
        *(float *)(iVar5 + 0x3f8) = fVar9;
        *(float *)(iVar5 + 0x3fc) = fVar10;
        *(float *)(iVar5 + 0x400) = fVar11;
        *(float *)(iVar5 + 0x404) = fVar12;
        *(char *)(param_1 + 0x33) = cVar1 + '\x01';
        fn_00560974(param_1);
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < 8);
  }
  else {
    bVar8 = true;
    do {
      if ((((uVar4 & 0xff) < (uint)*(byte *)(param_3 + 0xcd)) &&
          (iVar5 = *(int *)(*(int *)(param_3 + 0xd0) + (uVar4 & 0xff) * 8 + 4), iVar5 != 0)) &&
         ((*(ushort *)(iVar5 + 0x76) & 3) != 0)) {
        if (bVar8) {
          uVar2 = fn_0054df04(param_1,param_2,iVar5);
          uVar2 = fn_005506e0(param_1,uVar2,iVar5);
          uVar13 = fn_005507c4(param_1,uVar2,local_28,param_3,iVar5);
          bVar8 = false;
        }
        else {
          uVar3 = *(byte *)(param_1 + 0x30) + 1;
          bVar6 = 0x16 < uVar3;
          bVar7 = uVar3 == 0x17;
          if (uVar3 < 0x18) {
            bVar6 = 0x1f < *(byte *)(param_1 + 0x31);
            bVar7 = *(byte *)(param_1 + 0x31) == 0x20;
          }
          if (((bVar6 && !bVar7) || (0x20 < *(byte *)(param_1 + 0x33) + 1)) &&
             (*(byte *)(param_1 + 0x30) != 0)) {
            param_2 = fn_0054f158(param_1,param_2);
          }
          uVar13 = fn_005506e0(param_1,param_2,iVar5);
        }
        iVar5 = (int)((ulonglong)uVar13 >> 0x20);
        param_2 = (undefined4)uVar13;
        uVar3 = uVar4 & 0xff;
        bVar7 = uVar3 < 8;
        if (bVar7) {
          iVar5 = *(int *)(param_3 + 0xd0);
        }
        if (bVar7) {
          uVar3 = (uint)*(byte *)(iVar5 + uVar3 * 8);
        }
        if (!bVar7) {
          uVar3 = 0;
        }
        uVar3 = (&DAT_0085aed0)[uVar4 & 0xff] | (&DAT_0085aeb8)[uVar3];
        if ((*(byte *)(param_3 + 0xce) & 1) == 0) {
          uVar3 = uVar3 | 0x40000000;
        }
        fn_0054e2f0(param_1,uVar3);
        fVar11 = local_b8[uVar4 * 4];
        fVar12 = local_b8[uVar4 * 4 + 1];
        fVar9 = local_b8[uVar4 * 4 + 2];
        fVar10 = local_b8[uVar4 * 4 + 3];
        iVar5 = param_1 + (uint)*(byte *)(param_1 + 0x33) * 0x10;
        uVar2 = VectorUnsignedToFloat(*(byte *)(param_1 + 0x33) + 0x20,(byte)(in_fpscr >> 0x16) & 3)
        ;
        *(undefined4 *)(param_1 + 0x600) = uVar2;
        cVar1 = *(char *)(param_1 + 0x33);
        *(float *)(iVar5 + 0x3f8) = fVar9;
        *(float *)(iVar5 + 0x3fc) = fVar10;
        *(float *)(iVar5 + 0x400) = fVar11;
        *(float *)(iVar5 + 0x404) = fVar12;
        *(char *)(param_1 + 0x33) = cVar1 + '\x01';
        fn_00560974(param_1);
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < 8);
  }
  return param_2;
}



undefined4
fn_0054fb1c(int param_1,undefined4 param_2,int param_3,undefined4 param_4,float *param_5,
            float *param_6)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint in_fpscr;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  float local_78 [17];
  int iStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  undefined4 local_28;
  
  iStack_34 = param_1;
  uStack_30 = param_2;
  iStack_2c = param_3;
  local_28 = param_4;
  fn_00101a1c(local_78,&LAB_0054d22c,8,4);
  local_78[8] = *param_5;
  local_78[9] = param_5[1];
  local_78[0] = *(float *)(param_3 + 0x3c) - param_6[1];
  local_78[1] = param_6[2];
  local_78[0xb] = param_5[1];
  local_78[10] = (*param_5 + *(float *)(param_3 + 0x3c)) - param_6[1];
  local_78[2] = param_6[1];
  local_78[3] = *(float *)(param_3 + 0x40) - param_6[3];
  local_78[0xc] = *param_5;
  local_78[0xd] = param_5[1] - param_6[2];
  local_78[4] = *param_6;
  local_78[5] = *(float *)(param_3 + 0x40) - param_6[2];
  local_78[0xe] = *param_5 + *param_6;
  uVar4 = 0;
  local_78[0xf] = (param_5[1] - *(float *)(param_3 + 0x40)) + param_6[3];
  local_78[6] = *(float *)(param_3 + 0x3c) - *param_6;
  local_78[7] = param_6[3];
  if ((*(byte *)(param_3 + 0xce) & 2) == 0) {
    do {
      if ((((uVar4 & 0xff) < (uint)*(byte *)(param_3 + 0xcd)) &&
          (iVar5 = *(int *)(*(int *)(param_3 + 0xd0) + (uVar4 & 0xff) * 8 + 4), iVar5 != 0)) &&
         ((*(ushort *)(iVar5 + 0x76) & 3) != 0)) {
        if ((((0x17 < *(byte *)(param_1 + 0x30) + 1) || (0x20 < *(byte *)(param_1 + 0x31))) ||
            (0x20 < *(byte *)(param_1 + 0x33) + 7)) && (*(byte *)(param_1 + 0x30) != 0)) {
          param_2 = fn_0054f158(param_1,param_2);
        }
        uVar2 = fn_0054df04(param_1,param_2,iVar5);
        uVar2 = fn_005506e0(param_1,uVar2,iVar5);
        param_2 = fn_0054ec64(param_1,uVar2,local_28,param_3,iVar5,0);
        uVar3 = uVar4 & 0xff;
        bVar8 = uVar3 < 8;
        if (bVar8) {
          uVar3 = (uint)*(byte *)(*(int *)(param_3 + 0xd0) + uVar3 * 8);
        }
        if (!bVar8) {
          uVar3 = 0;
        }
        uVar3 = (&DAT_0085aea8)[uVar4 & 0xff] | (&DAT_0085ae90)[uVar3];
        if ((*(byte *)(param_3 + 0xce) & 1) == 0) {
          uVar3 = uVar3 | 0x40000000;
        }
        fn_0054e2f0(param_1,uVar3);
        fVar9 = local_78[uVar4 * 2 + 8];
        fVar10 = local_78[uVar4 * 2 + 9];
        fVar11 = local_78[uVar4 * 2];
        fVar12 = local_78[uVar4 * 2 + 1];
        iVar5 = param_1 + (uint)*(byte *)(param_1 + 0x33) * 0x10;
        uVar2 = VectorUnsignedToFloat(*(byte *)(param_1 + 0x33) + 0x20,(byte)(in_fpscr >> 0x16) & 3)
        ;
        *(undefined4 *)(param_1 + 0x600) = uVar2;
        cVar1 = *(char *)(param_1 + 0x33);
        *(float *)(iVar5 + 0x400) = fVar9;
        *(float *)(iVar5 + 0x404) = fVar10;
        *(float *)(iVar5 + 0x3f8) = fVar11;
        *(float *)(iVar5 + 0x3fc) = fVar12;
        *(char *)(param_1 + 0x33) = cVar1 + '\x01';
        fn_00560974(param_1);
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < 4);
  }
  else {
    bVar8 = true;
    do {
      if ((((uVar4 & 0xff) < (uint)*(byte *)(param_3 + 0xcd)) &&
          (iVar5 = *(int *)(*(int *)(param_3 + 0xd0) + (uVar4 & 0xff) * 8 + 4), iVar5 != 0)) &&
         ((*(ushort *)(iVar5 + 0x76) & 3) != 0)) {
        if (bVar8) {
          uVar2 = fn_0054df04(param_1,param_2,iVar5);
          uVar2 = fn_005506e0(param_1,uVar2,iVar5);
          uVar13 = fn_005507c4(param_1,uVar2,local_28,param_3,iVar5);
          bVar8 = false;
        }
        else {
          uVar3 = *(byte *)(param_1 + 0x30) + 1;
          bVar6 = 0x16 < uVar3;
          bVar7 = uVar3 == 0x17;
          if (uVar3 < 0x18) {
            bVar6 = 0x1f < *(byte *)(param_1 + 0x31);
            bVar7 = *(byte *)(param_1 + 0x31) == 0x20;
          }
          if (((bVar6 && !bVar7) || (0x20 < *(byte *)(param_1 + 0x33) + 1)) &&
             (*(byte *)(param_1 + 0x30) != 0)) {
            param_2 = fn_0054f158(param_1,param_2);
          }
          uVar13 = fn_005506e0(param_1,param_2,iVar5);
        }
        iVar5 = (int)((ulonglong)uVar13 >> 0x20);
        param_2 = (undefined4)uVar13;
        uVar3 = uVar4 & 0xff;
        bVar7 = uVar3 < 8;
        if (bVar7) {
          iVar5 = *(int *)(param_3 + 0xd0);
        }
        if (bVar7) {
          uVar3 = (uint)*(byte *)(iVar5 + uVar3 * 8);
        }
        if (!bVar7) {
          uVar3 = 0;
        }
        uVar3 = (&DAT_0085aea8)[uVar4 & 0xff] | (&DAT_0085ae90)[uVar3];
        if ((*(byte *)(param_3 + 0xce) & 1) == 0) {
          uVar3 = uVar3 | 0x40000000;
        }
        fn_0054e2f0(param_1,uVar3);
        fVar9 = local_78[uVar4 * 2];
        fVar10 = local_78[uVar4 * 2 + 1];
        fVar11 = local_78[uVar4 * 2 + 8];
        fVar12 = local_78[uVar4 * 2 + 9];
        iVar5 = param_1 + (uint)*(byte *)(param_1 + 0x33) * 0x10;
        uVar2 = VectorUnsignedToFloat(*(byte *)(param_1 + 0x33) + 0x20,(byte)(in_fpscr >> 0x16) & 3)
        ;
        *(undefined4 *)(param_1 + 0x600) = uVar2;
        cVar1 = *(char *)(param_1 + 0x33);
        *(float *)(iVar5 + 0x3f8) = fVar9;
        *(float *)(iVar5 + 0x3fc) = fVar10;
        *(float *)(iVar5 + 0x400) = fVar11;
        *(float *)(iVar5 + 0x404) = fVar12;
        *(char *)(param_1 + 0x33) = cVar1 + '\x01';
        fn_00560974(param_1);
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < 4);
  }
  return param_2;
}


