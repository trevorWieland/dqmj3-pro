#include "00560cdc_005614c4.h"



bool fn_005614c4(int param_1)

{
  int iVar1;
  
  iVar1 = fn_006e62b4();
  if (iVar1 != 0xffff) {
    *(short *)(*(int *)(param_1 + 0xc) + 6) = (short)iVar1;
  }
  return iVar1 != 0xffff;
}



undefined4 * fn_00561428(int param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  
  if ((param_3 & 1) == 0) {
    *param_2 = 0;
    param_2[1] = 0x2006f;
    param_2[2] = 0;
    param_2[3] = &DAT_00200080;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0x1000;
    param_2[7] = 0xb0080;
    uVar1 = *(uint *)(param_1 + 0xc);
    fn_0017821c(param_2 + 8,*(undefined4 *)(param_1 + 8),uVar1);
    param_2 = (undefined4 *)((uVar1 & 0xfffffffc) + (int)(param_2 + 8));
  }
  *(undefined1 *)(param_1 + 0x35) = 1;
  *(undefined1 *)(param_1 + 0x36) = 1;
  *(undefined1 *)(param_1 + 0x5f8) = 0;
  *(undefined1 *)(param_1 + 0x5f9) = 0;
  *(undefined1 *)(param_1 + 0x5fa) = 0;
  *(undefined1 *)(param_1 + 0x5fb) = 0;
  return param_2;
}



void fn_00561320(undefined4 param_1,undefined4 *param_2,uint param_3)

{
  fn_0017821c(param_2,&DAT_007d80fc,0x30);
  if ((param_3 & 0xffffffbf) == 2) {
    param_2[6] = 0xeef0dfe;
    param_2[9] = 0x10004;
    param_2[5] = 0;
  }
  else if ((param_3 & 0xffffffbf) == 3) {
    param_2[6] = 0xeef0dfe;
    param_2[9] = 0x10004;
  }
  if ((param_3 & 0x40) != 0) {
    *param_2 = 0xede0eee;
  }
  return;
}



undefined4 * fn_00560cdc(int param_1,undefined4 *param_2,int *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  uint in_fpscr;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  float fVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  int local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  iVar12 = *param_3;
  puVar9 = param_2;
  if (iVar12 != 0) {
    puVar9 = *(undefined4 **)(iVar12 + 4);
  }
  if (iVar12 != 0 && puVar9 != (undefined4 *)0x0) {
    fn_0017821c(param_2,&DAT_007d800c);
    puVar9 = param_2 + 0xc;
    if ((param_3[0x15] & 1U) == 0) {
      uVar10 = 0x1100;
    }
    else {
      uVar10 = 0x2200;
    }
    param_2[0xb] = 0x200e0;
    param_2[10] = uVar10;
    puVar5 = (undefined4 *)param_3[1];
    if (puVar5 != (undefined4 *)0x0) {
      uVar10 = puVar5[1];
      uVar11 = puVar5[2];
      *(undefined4 *)(param_1 + 0x38) = *puVar5;
      uVar14 = puVar5[3];
      *(undefined4 *)(param_1 + 0x3c) = uVar10;
      uVar10 = puVar5[4];
      *(undefined4 *)(param_1 + 0x40) = uVar11;
      uVar11 = puVar5[5];
      *(undefined4 *)(param_1 + 0x44) = uVar14;
      uVar14 = puVar5[6];
      *(undefined4 *)(param_1 + 0x48) = uVar10;
      uVar10 = puVar5[7];
      *(undefined4 *)(param_1 + 0x4c) = uVar11;
      uVar11 = puVar5[8];
      *(undefined4 *)(param_1 + 0x50) = uVar14;
      uVar15 = puVar5[9];
      *(undefined4 *)(param_1 + 0x54) = uVar10;
      uVar14 = puVar5[10];
      *(undefined4 *)(param_1 + 0x58) = uVar11;
      uVar11 = puVar5[0xb];
      *(undefined4 *)(param_1 + 0x5c) = uVar15;
      uVar10 = puVar5[0xc];
      *(undefined4 *)(param_1 + 0x60) = uVar14;
      uVar14 = puVar5[0xd];
      *(undefined4 *)(param_1 + 100) = uVar11;
      uVar11 = puVar5[0xf];
      *(undefined4 *)(param_1 + 0x70) = puVar5[0xe];
      *(undefined4 *)(param_1 + 0x74) = uVar11;
      *(undefined4 *)(param_1 + 0x68) = uVar10;
      *(undefined4 *)(param_1 + 0x6c) = uVar14;
      local_60 = 5;
      puVar9 = (undefined4 *)fn_00560750(param_1,puVar9,param_1 + 0x38,0);
    }
    puVar5 = (undefined4 *)param_3[3];
    uVar11 = 0x3f800000;
    uVar10 = 0;
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)param_3[2];
      if (puVar5 == (undefined4 *)0x0) {
        if (((DAT_008c6300 & 1) == 0) && (iVar8 = fn_00303afc(&DAT_008c6300), iVar8 != 0)) {
          DAT_008f9e38 = uVar11;
          DAT_008f9e3c = uVar10;
          DAT_008f9e40 = uVar10;
          DAT_008f9e44 = uVar10;
          DAT_008f9e48 = uVar10;
          DAT_008f9e4c = uVar11;
          DAT_008f9e50 = uVar10;
          DAT_008f9e54 = uVar10;
          DAT_008f9e58 = uVar10;
          DAT_008f9e5c = uVar10;
          DAT_008f9e60 = uVar11;
          DAT_008f9e64 = uVar10;
        }
        uVar4 = DAT_008f9e64;
        uVar3 = DAT_008f9e60;
        uVar2 = DAT_008f9e5c;
        uVar1 = DAT_008f9e58;
        uVar24 = DAT_008f9e54;
        uVar23 = DAT_008f9e50;
        uVar22 = DAT_008f9e4c;
        uVar20 = DAT_008f9e48;
        uVar19 = DAT_008f9e44;
        uVar15 = DAT_008f9e40;
        uVar14 = DAT_008f9e3c;
        *(undefined4 *)(param_1 + 0x1f8) = DAT_008f9e38;
        *(undefined4 *)(param_1 + 0x1fc) = uVar14;
        *(undefined4 *)(param_1 + 0x200) = uVar15;
        *(undefined4 *)(param_1 + 0x204) = uVar19;
        *(undefined4 *)(param_1 + 0x208) = uVar20;
        *(undefined4 *)(param_1 + 0x20c) = uVar22;
        *(undefined4 *)(param_1 + 0x210) = uVar23;
        *(undefined4 *)(param_1 + 0x214) = uVar24;
        *(undefined4 *)(param_1 + 0x218) = uVar1;
        *(undefined4 *)(param_1 + 0x21c) = uVar2;
        *(undefined4 *)(param_1 + 0x220) = uVar3;
        *(undefined4 *)(param_1 + 0x224) = uVar4;
      }
      else {
        uVar22 = puVar5[1];
        uVar14 = puVar5[2];
        uVar15 = puVar5[5];
        uVar19 = puVar5[3];
        uVar20 = puVar5[4];
        *(undefined4 *)(param_1 + 0x1f8) = *puVar5;
        uVar23 = puVar5[6];
        *(undefined4 *)(param_1 + 0x1fc) = uVar22;
        uVar22 = puVar5[7];
        *(undefined4 *)(param_1 + 0x200) = uVar14;
        uVar14 = puVar5[8];
        *(undefined4 *)(param_1 + 0x204) = uVar19;
        uVar19 = puVar5[9];
        *(undefined4 *)(param_1 + 0x208) = uVar20;
        uVar20 = puVar5[10];
        uVar24 = puVar5[0xb];
        *(undefined4 *)(param_1 + 0x20c) = uVar15;
        *(undefined4 *)(param_1 + 0x210) = uVar23;
        *(undefined4 *)(param_1 + 0x214) = uVar22;
        *(undefined4 *)(param_1 + 0x218) = uVar14;
        *(undefined4 *)(param_1 + 0x224) = uVar24;
        *(undefined4 *)(param_1 + 0x21c) = uVar19;
        *(undefined4 *)(param_1 + 0x220) = uVar20;
      }
    }
    else if (param_3[2] == 0) {
      uVar23 = puVar5[1];
      uVar15 = puVar5[2];
      uVar14 = puVar5[3];
      uVar20 = puVar5[4];
      uVar22 = puVar5[5];
      *(undefined4 *)(param_1 + 0x1f8) = *puVar5;
      uVar19 = puVar5[6];
      *(undefined4 *)(param_1 + 0x1fc) = uVar23;
      uVar23 = puVar5[7];
      *(undefined4 *)(param_1 + 0x200) = uVar15;
      uVar15 = puVar5[8];
      *(undefined4 *)(param_1 + 0x204) = uVar14;
      uVar14 = puVar5[9];
      *(undefined4 *)(param_1 + 0x208) = uVar20;
      uVar20 = puVar5[10];
      uVar24 = puVar5[0xb];
      *(undefined4 *)(param_1 + 0x20c) = uVar22;
      *(undefined4 *)(param_1 + 0x210) = uVar19;
      *(undefined4 *)(param_1 + 0x214) = uVar23;
      *(undefined4 *)(param_1 + 0x218) = uVar15;
      *(undefined4 *)(param_1 + 0x21c) = uVar14;
      *(undefined4 *)(param_1 + 0x220) = uVar20;
      *(undefined4 *)(param_1 + 0x224) = uVar24;
    }
    else {
      fn_001ad06c(&local_60);
      *(int *)(param_1 + 0x1f8) = local_60;
      *(undefined4 *)(param_1 + 0x1fc) = uStack_5c;
      *(undefined4 *)(param_1 + 0x200) = uStack_58;
      *(undefined4 *)(param_1 + 0x204) = uStack_54;
      *(undefined4 *)(param_1 + 0x208) = uStack_50;
      *(undefined4 *)(param_1 + 0x20c) = uStack_4c;
      *(undefined4 *)(param_1 + 0x210) = uStack_48;
      *(undefined4 *)(param_1 + 0x214) = uStack_44;
      *(undefined4 *)(param_1 + 0x218) = local_40;
      *(undefined4 *)(param_1 + 0x21c) = uStack_3c;
      *(undefined4 *)(param_1 + 0x220) = uStack_38;
      *(undefined4 *)(param_1 + 0x224) = uStack_34;
    }
    local_60 = 3;
    puVar6 = (uint *)fn_00560750(param_1,puVar9,param_1 + 0x1f8,0x20);
    if (*(int *)(iVar12 + 0x38) == 0) {
      uVar13 = 0;
    }
    else {
      uVar13 = 2;
    }
    if ((*(byte *)(iVar12 + 0x40) & 1) != 0) {
      puVar6[1] = 0xf02b0;
      *puVar6 = uVar13 | 0x7fff0005;
      *(undefined1 *)(param_1 + 0x31) = 3;
      *(undefined1 *)(param_1 + 0x32) = 3;
      fVar16 = *(float *)(iVar12 + 0x30);
      fVar17 = *(float *)(iVar12 + 0x2c);
      uVar14 = *(undefined4 *)(iVar12 + 0x28);
      uVar15 = *(undefined4 *)(iVar12 + 0x34);
      fVar18 = (float)VectorSignedToFloat((int)*(short *)(iVar12 + 0x3c),
                                          (byte)(in_fpscr >> 0x16) & 3);
      fVar21 = (float)VectorSignedToFloat((int)*(short *)(iVar12 + 0x3e),
                                          (byte)(in_fpscr >> 0x16) & 3);
      uVar19 = VectorSignedToFloat((int)(short)(int)(fVar18 + fVar21 * fVar16),
                                   (byte)(in_fpscr >> 0x16) & 3);
      *(undefined4 *)(param_1 + 0x228) = uVar19;
      *(undefined4 *)(param_1 + 0x22c) = uVar10;
      *(undefined4 *)(param_1 + 0x230) = uVar10;
      *(undefined4 *)(param_1 + 0x234) = uVar10;
      *(float *)(param_1 + 0x238) = fVar16;
      *(undefined4 *)(param_1 + 0x23c) = uVar15;
      *(undefined4 *)(param_1 + 0x240) = uVar14;
      *(float *)(param_1 + 0x244) = -fVar17;
      *(undefined1 *)(param_1 + 0x31) = 5;
      fn_0055fa84(param_1,iVar12 + 0x20);
      uVar7 = (uint)*(byte *)(param_1 + 0x32);
      local_60 = *(byte *)(param_1 + 0x31) - uVar7;
      puVar9 = (undefined4 *)
               fn_00560750(param_1,puVar6 + 2,param_1 + uVar7 * 0x10 + 0x1f8,uVar7 + 0x20);
      *(undefined1 *)(param_1 + 0x31) = 0;
      *(undefined1 *)(param_1 + 0x32) = 0;
      local_60 = fn_005615b8(param_3 + 0x10);
      uVar14 = fn_005616e8(param_3 + 0xc,0);
      if (*(char *)(param_1 + 0x36) != '\x01') {
        *(undefined1 *)(param_1 + 0x36) = 1;
        fn_0017821c(puVar9,&DAT_007d80cc,0x30);
        puVar9 = puVar9 + 0xc;
      }
      puVar9[1] = 0xf00db;
      *puVar9 = uVar14;
      puVar9[2] = local_60;
      puVar9[3] = 0xf00f3;
      puVar9 = puVar9 + 4;
      if (*(int *)(iVar12 + 0xc) == 0) {
        puVar9 = (undefined4 *)fn_0055fb5c(param_1,puVar9,0xffffffff,iVar12);
      }
      else {
        uVar7 = *(uint *)(iVar12 + 0x14);
        fn_0017821c(puVar9,*(int *)(iVar12 + 0xc),uVar7);
        puVar9 = (undefined4 *)((uVar7 & 0xfffffffc) + (int)puVar9);
      }
      *puVar9 = 0;
      puVar9[1] = &DAT_00200080;
      puVar9[2] = 0;
      puVar6 = puVar9 + 4;
      puVar9[3] = 0;
    }
    puVar6[1] = 0xf02b0;
    *puVar6 = uVar13 | 0x7fff0001;
    *(undefined1 *)(param_1 + 0x31) = 3;
    *(undefined1 *)(param_1 + 0x32) = 3;
    uVar14 = VectorSignedToFloat((int)*(short *)(iVar12 + 0x3c),(byte)(in_fpscr >> 0x16) & 3);
    *(undefined4 *)(param_1 + 0x228) = uVar14;
    *(undefined4 *)(param_1 + 0x22c) = uVar10;
    *(undefined4 *)(param_1 + 0x230) = uVar10;
    *(undefined4 *)(param_1 + 0x234) = uVar10;
    *(undefined4 *)(param_1 + 0x238) = uVar11;
    *(undefined4 *)(param_1 + 0x23c) = uVar11;
    *(undefined4 *)(param_1 + 0x240) = uVar10;
    *(undefined4 *)(param_1 + 0x244) = 0x80000000;
    *(undefined1 *)(param_1 + 0x31) = 5;
    if (param_3[0x14] == 0) {
      fn_0055fa84(param_1,iVar12 + 0x18);
    }
    else {
      fn_0055fa84(param_1);
    }
    uVar13 = (uint)*(byte *)(param_1 + 0x32);
    local_60 = *(byte *)(param_1 + 0x31) - uVar13;
    puVar9 = (undefined4 *)
             fn_00560750(param_1,puVar6 + 2,param_1 + uVar13 * 0x10 + 0x1f8,uVar13 + 0x20);
    *(undefined1 *)(param_1 + 0x31) = 0;
    *(undefined1 *)(param_1 + 0x32) = 0;
    uVar10 = fn_005615b8(param_3 + 8);
    uVar11 = fn_005616e8(param_3 + 4,0);
    if (*(char *)(param_1 + 0x36) != '\x01') {
      *(undefined1 *)(param_1 + 0x36) = 1;
      fn_0017821c(puVar9,&DAT_007d80cc,0x30);
      puVar9 = puVar9 + 0xc;
    }
    puVar9[1] = 0xf00db;
    puVar5 = puVar9 + 4;
    *puVar9 = uVar11;
    puVar9[2] = uVar10;
    puVar9[3] = 0xf00f3;
    if (*(int *)(iVar12 + 0xc) == 0) {
      puVar5 = (undefined4 *)fn_0055fb5c(param_1,puVar5,0xffffffff,iVar12);
    }
    else {
      uVar13 = *(uint *)(iVar12 + 0x14);
      fn_0017821c(puVar5,*(int *)(iVar12 + 0xc),uVar13);
      puVar5 = (undefined4 *)((uVar13 & 0xfffffffc) + (int)puVar5);
    }
    param_2 = puVar5 + 2;
    *puVar5 = 0x7fff0000;
    puVar5[1] = 0xf02b0;
    *(undefined1 *)(param_1 + 0x31) = 0;
    *(undefined1 *)(param_1 + 0x32) = 0;
    *(undefined1 *)(param_1 + 0x33) = 0;
    *(undefined1 *)(param_1 + 0x34) = 0;
  }
  return param_2;
}


