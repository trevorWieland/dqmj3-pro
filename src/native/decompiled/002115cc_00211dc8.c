#include "002115cc_00211dc8.h"



uint fn_00211dc8(int param_1)

{
  uint uVar1;
  int iStack_28;
  int iStack_24;
  undefined4 uStack_4;
  
  uStack_4 = fn_006afaf4(*(undefined4 *)(DAT_008977e0 + 0x1c));
  iStack_24 = param_1 + 0x1fe;
  iStack_28 = param_1;
  uVar1 = fn_0030091a(&UNK_00873c28,&iStack_28,&uStack_4,0x300941);
  iStack_24 = iStack_24 + 2;
  fn_00300940(0,&iStack_28);
  if (0xff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



uint fn_00211d58(int param_1)

{
  uint uVar1;
  int iStack_28;
  int iStack_24;
  undefined4 uStack_4;
  
  uStack_4 = fn_006afaf4(*(undefined4 *)(DAT_008977e0 + 0x1c));
  iStack_24 = param_1 + 0x1fe;
  iStack_28 = param_1;
  uVar1 = fn_0030091a(L"rom:/data/Field/Lod/%s/VP.lod",&iStack_28,&uStack_4,0x300941);
  iStack_24 = iStack_24 + 2;
  fn_00300940(0,&iStack_28);
  if (0xff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



void fn_00211ce4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = fn_006afaf4(*(undefined4 *)(DAT_008977e0 + 0x1c),param_3,param_3,param_4,param_4);
  fn_00101a50(param_2,0x100,L"rom:/data/Field/Lod/%s/%s",uVar1,param_1);
  return;
}



undefined * fn_00211cd4(int param_1)

{
  return (&PTR_s_o_item01A_007bf8a8)[param_1];
}



void fn_00211c48(undefined4 param_1,undefined1 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_001dbf48(param_1,2);
  *puVar1 = &PTR_FUN_0081c554;
  *(undefined1 *)(puVar1 + 0x5f) = param_2;
  puVar1[0x60] = 0xffffffff;
  puVar1[0x61] = 0xffffffff;
  puVar1[0x62] = 0xffffffff;
  puVar1[99] = 0;
  puVar1[100] = 0;
  puVar1[0x65] = 0;
  puVar1[0x66] = 0;
  puVar1[0x5a] = 0;
  puVar1[0x5b] = 0;
  puVar1[0x5c] = 0;
  puVar1[0x5d] = 0;
  puVar1[0x5e] = DAT_00891888;
  puVar1[0x4e] = puVar1[0x4e] & 0xfffffff7;
  return;
}



void fn_00211a98(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  float local_48;
  float fStack_44;
  float local_40;
  undefined1 auStack_3c [24];
  
  if (*(int *)(param_1 + 0xe4) == 0) {
    return;
  }
  fn_0017fde4();
  iVar1 = fn_006ebe58();
  uVar2 = *(uint *)(iVar1 + 0x40);
  piVar3 = (int *)0x0;
  uVar5 = uVar2 + *(int *)(iVar1 + 0x44) * 0x38;
  if (uVar2 < uVar5) {
    iVar1 = 1;
    iVar4 = (int)((longlong)(int)(uVar5 - uVar2) * -0x6db6db6d +
                  ((ulonglong)(uVar5 - uVar2) << 0x20) >> 0x20);
    if (1 < ((iVar4 >> 5) - (iVar4 >> 0x1f)) + 1) {
      uVar5 = uVar5 - uVar2;
      do {
        if (*(ushort *)(uVar2 + 4) == param_3) goto LAB_00211b48;
        iVar4 = (int)((longlong)(int)uVar5 * -0x6db6db6d + ((ulonglong)uVar5 << 0x20) >> 0x20);
        iVar1 = iVar1 + 1;
        uVar2 = uVar2 + 0x38;
      } while (iVar1 < ((iVar4 >> 5) - (iVar4 >> 0x1f)) + 1);
    }
  }
  else {
    for (; uVar2 != uVar5; uVar2 = uVar2 + 0x38) {
      if (*(ushort *)(uVar2 + 4) == param_3) goto LAB_00211b48;
    }
  }
LAB_00211b78:
  iVar1 = *(int *)(*piVar3 + 8);
  local_78 = *(undefined4 *)(iVar1 + 0xc);
  local_68 = *(undefined4 *)(iVar1 + 0x18);
  local_58 = *(undefined4 *)(iVar1 + 0x24);
  local_74 = *(undefined4 *)(iVar1 + 0x10);
  local_64 = *(undefined4 *)(iVar1 + 0x1c);
  local_54 = *(undefined4 *)(iVar1 + 0x28);
  local_70 = *(undefined4 *)(iVar1 + 0x14);
  local_60 = *(undefined4 *)(iVar1 + 0x20);
  local_50 = *(undefined4 *)(iVar1 + 0x2c);
  local_6c = 0;
  local_5c = 0;
  local_4c = 0;
  local_48 = *(float *)(iVar1 + 0x30) * 0.5;
  fStack_44 = *(float *)(iVar1 + 0x34) * 0.5;
  local_40 = *(float *)(iVar1 + 0x38) * 0.5;
  fn_0016947c(auStack_3c,&local_78,param_4);
  fn_002115cc(param_1,param_2,iVar1,&local_48,&local_78,param_4,param_5,param_6);
  return;
LAB_00211b48:
  piVar3 = *(int **)(uVar2 + 0x34);
  goto LAB_00211b78;
}



void fn_0021197c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,uint param_6)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_58 [64];
  
  lVar2 = (ulonglong)param_6 << 0x20;
  if ((((byte)DAT_008c6300 & 1) == 0) && (iVar1 = fn_00303afc(&DAT_008c6300), iVar1 != 0)) {
    DAT_008f9e38 = 0x3f800000;
    DAT_008f9e3c = (undefined4)lVar2;
    DAT_008f9e4c = 0x3f800000;
    DAT_008f9e60 = 0x3f800000;
    DAT_008f9e40 = DAT_008f9e3c;
    DAT_008f9e44 = DAT_008f9e3c;
    DAT_008f9e48 = DAT_008f9e3c;
    DAT_008f9e50 = DAT_008f9e3c;
    DAT_008f9e54 = DAT_008f9e3c;
    DAT_008f9e58 = DAT_008f9e3c;
    DAT_008f9e5c = DAT_008f9e3c;
    DAT_008f9e64 = DAT_008f9e3c;
  }
  fn_001781f0(auStack_58,&DAT_008f9e38);
  if ((((byte)DAT_008c62fc & 1) == 0) && (iVar1 = fn_00303afc(&DAT_008c62fc), iVar1 != 0)) {
    DAT_008f9e2c = (undefined4)lVar2;
    DAT_008f9e30 = DAT_008f9e2c;
    DAT_008f9e34 = DAT_008f9e2c;
  }
  fn_002115cc(param_1,param_2,&DAT_008f9e2c,param_3,auStack_58,param_4,param_5,
               (int)((ulonglong)lVar2 >> 0x20));
  return;
}



void fn_002115cc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,float *param_7,undefined4 param_8)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  float local_148;
  float local_144;
  float local_140;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_f8;
  float local_f4;
  float local_f0;
  undefined4 local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  undefined4 local_dc;
  float local_d8;
  float local_d4;
  float fStack_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 local_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 local_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  float local_98;
  float local_94;
  float local_90;
  undefined1 auStack_88 [80];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  
  uVar15 = 0;
  uVar1 = in_fpscr & 0xfffffff;
  fVar6 = ABS(param_7[1] * 40.743664);
  fVar5 = ABS(param_7[2] * 40.743664);
  for (fVar7 = ABS(*param_7 * 40.743664); 0x477fffff < (int)fVar7; fVar7 = fVar7 - 65536.0) {
  }
  for (; 0x477fffff < (int)fVar6; fVar6 = fVar6 - 65536.0) {
  }
  for (; 0x477fffff < (int)fVar5; fVar5 = fVar5 - 65536.0) {
  }
  uVar8 = VectorFloatToUnsigned(fVar7,3);
  uVar9 = VectorFloatToUnsigned(fVar6,3);
  uVar10 = VectorFloatToUnsigned(fVar5,3);
  uVar4 = uVar8 & 0xff;
  uVar3 = uVar10 & 0xff;
  fVar13 = (float)VectorUnsignedToFloat(uVar8 & 0xffff,(byte)(uVar1 >> 0x16) & 3);
  uVar8 = uVar9 & 0xff;
  fVar12 = (float)VectorUnsignedToFloat(uVar9 & 0xffff,(byte)(uVar1 >> 0x16) & 3);
  fVar14 = (float)VectorUnsignedToFloat(uVar10 & 0xffff,(byte)(uVar1 >> 0x16) & 3);
  fVar11 = (float)(&DAT_007d6f20)[uVar4 * 4] + (fVar7 - fVar13) * (float)(&DAT_007d6f28)[uVar4 * 4];
  fVar13 = (float)(&DAT_007d6f24)[uVar4 * 4] + (fVar7 - fVar13) * (float)(&DAT_007d6f2c)[uVar4 * 4];
  fVar7 = (float)(&DAT_007d6f20)[uVar8 * 4] + (fVar6 - fVar12) * (float)(&DAT_007d6f28)[uVar8 * 4];
  if (*param_7 * 40.743664 < 0.0) {
    fVar11 = -fVar11;
  }
  local_d4 = (float)(&DAT_007d6f24)[uVar8 * 4] +
             (fVar6 - fVar12) * (float)(&DAT_007d6f2c)[uVar8 * 4];
  fVar12 = (float)(&DAT_007d6f20)[uVar3 * 4] + (fVar5 - fVar14) * (float)(&DAT_007d6f28)[uVar3 * 4];
  fVar6 = (float)(&DAT_007d6f24)[uVar3 * 4] + (fVar5 - fVar14) * (float)(&DAT_007d6f2c)[uVar3 * 4];
  if (param_7[1] * 40.743664 < 0.0) {
    fVar7 = -fVar7;
  }
  if (param_7[2] * 40.743664 < 0.0) {
    fVar12 = -fVar12;
  }
  local_f8 = fVar6 * local_d4;
  local_e8 = fVar12 * local_d4;
  fStack_d0 = fVar13 * local_d4;
  local_d4 = fVar11 * local_d4;
  local_d8 = -fVar7;
  local_f4 = fVar11 * fVar6 * fVar7 - fVar13 * fVar12;
  local_e0 = fVar13 * fVar12 * fVar7 - fVar11 * fVar6;
  local_f0 = fVar11 * fVar12 + fVar13 * fVar6 * fVar7;
  local_e4 = fVar13 * fVar6 + fVar11 * fVar12 * fVar7;
  local_ec = 0;
  local_dc = 0;
  local_cc = 0;
  fn_001ad150(auStack_88,&local_f8,param_6);
  fn_001ad39c(auStack_88,param_8);
  fn_0016947c(&local_38,auStack_88,param_3);
  local_c8 = local_38;
  uStack_c4 = uStack_34;
  uStack_c0 = uStack_30;
  fn_0016947c(&local_148,param_5,param_4);
  fn_0016947c(&local_108,param_5,param_6);
  local_148 = local_148 * local_108;
  local_144 = local_144 * local_104;
  local_140 = local_140 * local_100;
  local_98 = local_148;
  local_94 = local_144;
  local_90 = local_140;
  if ((((byte)DAT_008c6300 & 1) == 0) && (iVar2 = fn_00303afc(&DAT_008c6300), iVar2 != 0)) {
    DAT_008f9e38 = 0x3f800000;
    DAT_008f9e4c = 0x3f800000;
    DAT_008f9e60 = 0x3f800000;
    DAT_008f9e3c = uVar15;
    DAT_008f9e40 = uVar15;
    DAT_008f9e44 = uVar15;
    DAT_008f9e48 = uVar15;
    DAT_008f9e50 = uVar15;
    DAT_008f9e54 = uVar15;
    DAT_008f9e58 = uVar15;
    DAT_008f9e5c = uVar15;
    DAT_008f9e64 = uVar15;
  }
  local_138 = DAT_008f9e38;
  local_134 = DAT_008f9e3c;
  local_130 = DAT_008f9e40;
  uStack_12c = DAT_008f9e44;
  local_128 = DAT_008f9e48;
  local_124 = DAT_008f9e4c;
  local_120 = DAT_008f9e50;
  uStack_11c = DAT_008f9e54;
  local_118 = DAT_008f9e58;
  local_114 = DAT_008f9e5c;
  local_110 = DAT_008f9e60;
  uStack_10c = DAT_008f9e64;
  fn_001ad06c(&local_138,&local_138,&local_f8);
  local_bc = local_138;
  uStack_b8 = local_128;
  uStack_b4 = local_118;
  local_b0 = local_134;
  uStack_ac = local_124;
  uStack_a8 = local_114;
  local_a4 = local_130;
  uStack_a0 = local_120;
  uStack_9c = local_110;
  fn_0065fd9c(param_2,&local_c8);
  return;
}


