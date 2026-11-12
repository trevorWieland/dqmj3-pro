#include "005390a0_0053a474aa.h"



undefined4 *
fn_00539d4c(undefined4 param_1,undefined4 *param_2,int param_3,float *param_4,int param_5,
            int param_6,int param_7)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  
  iVar1 = param_7;
  puVar2 = &param_6;
  if (param_3 != 0) {
    puVar2 = *(undefined4 **)(param_3 + 0x154);
  }
  if ((param_3 != 0 && puVar2 != (undefined4 *)0x0) && (puVar2[0x1605] != 0)) {
    iVar3 = param_3 + param_6 * 0x10;
    iVar4 = *(int *)(param_3 + 0x150);
    iVar6 = param_3 + param_5 * 0x10;
    fVar9 = *(float *)(iVar3 + 0xc4) * *(float *)(iVar4 + 0x1c0) * param_4[2];
    fVar13 = *(float *)(iVar6 + 0xc4) * *(float *)(iVar4 + 0x1a0) * param_4[2];
    uVar14 = VectorFloatToUnsigned(*(float *)(iVar4 + 0x94) * 255.0,3);
    fVar8 = *(float *)(iVar3 + 0xc0) * *(float *)(iVar4 + 0x1bc) * param_4[1];
    fVar7 = *(float *)(iVar3 + 0xbc) * *(float *)(iVar4 + 0x1b8) * *param_4;
    fVar11 = *(float *)(iVar6 + 0xbc) * *(float *)(iVar4 + 0x198) * *param_4;
    fVar12 = *(float *)(iVar6 + 0xc0) * *(float *)(iVar4 + 0x19c) * param_4[1];
    uVar15 = VectorFloatToUnsigned(fVar9 * 255.0,3);
    uVar10 = VectorFloatToUnsigned(fVar8 * 255.0,3);
    uVar16 = VectorFloatToUnsigned(fVar7 * 255.0,3);
    puVar2 = (undefined4 *)
             fn_006dc64c(iVar4 + 0x240,param_2,uVar16 & 0xff,uVar10 & 0xff,uVar15 & 0xff,
                          uVar14 & 0xff,0);
    puVar2[3] = 0x23f02c1;
    *puVar2 = 0x8000004c;
    puVar2[1] = 0xf02c0;
    puVar2[4] = *(undefined4 *)(*(int *)(*(int *)(param_3 + 0x154) + 0x5814) + 0x334);
    if (iVar1 == 0) {
      uVar5 = *(undefined4 *)(param_3 + 0x68);
      puVar2[6] = 0x3f800000;
      puVar2[2] = uVar5;
      puVar2[5] = 0;
    }
    else {
      puVar2[2] = 0x3f800000;
      puVar2[5] = 0x3f800000;
      puVar2[6] = 0;
    }
    puVar2[7] = *(float *)(param_3 + 0x9c) - *(float *)(param_3 + 0xa4);
    puVar2[8] = *(float *)(param_3 + 0x98) + *(float *)(param_3 + 0xa0);
    puVar2[9] = *(float *)(param_3 + 0x7c) - *(float *)(param_3 + 0x84);
    puVar2[10] = *(float *)(param_3 + 0x78) + *(float *)(param_3 + 0x80);
    puVar2[0xb] = 0;
    puVar2[0xc] = *(undefined4 *)(param_3 + 0x74);
    puVar2[0xd] = *(undefined4 *)(param_3 + 0x8c);
    puVar2[0xe] = *(undefined4 *)(param_3 + 0x88);
    puVar2[0xf] = 0;
    puVar2[0x10] = *(undefined4 *)(param_3 + 0x94);
    puVar2[0x11] = *(undefined4 *)(param_3 + 0xac);
    puVar2[0x12] = *(undefined4 *)(param_3 + 0xa8);
    puVar2[0x13] = *(undefined4 *)(*(int *)(param_3 + 0x150) + 0x94);
    puVar2[0x14] = fVar13;
    puVar2[0x15] = fVar12;
    puVar2[0x16] = fVar11;
    puVar2[0x17] = *(undefined4 *)(*(int *)(param_3 + 0x150) + 0x94);
    puVar2[0x18] = fVar9;
    puVar2[0x19] = fVar8;
    puVar2[0x1a] = fVar7;
    puVar2[0x1b] = *(undefined4 *)(*(int *)(param_3 + 0x150) + 100);
    puVar2[0x1c] = *(undefined4 *)(*(int *)(param_3 + 0x150) + 0x60);
    puVar2[0x1d] = *(undefined4 *)(*(int *)(param_3 + 0x150) + 0x5c);
    puVar2[0x1e] = *(undefined4 *)(*(int *)(param_3 + 0x150) + 0x58);
    puVar2[0x1f] = *(undefined4 *)(*(int *)(param_3 + 0x150) + 0x74);
    puVar2[0x20] = *(undefined4 *)(*(int *)(param_3 + 0x150) + 0x70);
    puVar2[0x21] = *(undefined4 *)(*(int *)(param_3 + 0x150) + 0x6c);
    puVar2[0x22] = *(undefined4 *)(*(int *)(param_3 + 0x150) + 0x68);
    puVar2[0x23] = *(undefined4 *)(*(int *)(param_3 + 0x150) + 0x84);
    puVar2[0x24] = *(undefined4 *)(*(int *)(param_3 + 0x150) + 0x80);
    puVar2[0x25] = *(undefined4 *)(*(int *)(param_3 + 0x150) + 0x7c);
    param_2 = puVar2 + 0x28;
    puVar2[0x26] = *(undefined4 *)(*(int *)(param_3 + 0x150) + 0x78);
    puVar2[0x27] = 0;
  }
  return param_2;
}



uint * fn_005390a0(undefined4 param_1,uint *param_2,int *param_3,int param_4,float *param_5)

{
  int iVar1;
  uint *puVar2;
  int *piVar3;
  uint in_fpscr;
  float in_s0;
  float fVar4;
  float fVar5;
  float in_s1;
  float fVar6;
  float fVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  
  iVar1 = DAT_008c3454;
  puVar2 = param_2;
  if (param_3 != (int *)0x0) {
    param_2[1] = 0xf02c0;
    *param_2 = iVar1 * 4 + 1U | 0x80000000;
    param_2[3] = 0x1ff02c1;
    fVar10 = *(float *)(*(int *)(*param_3 + 0x150) + 0x1a4) * in_s0;
    param_2[2] = (uint)fVar10;
    fVar11 = param_5[2];
    fVar12 = param_5[1];
    fVar6 = *param_5;
    fVar4 = (float)param_3[param_4 * 0x16 + 3];
    fVar13 = (float)param_3[param_4 * 0x16 + 4];
    fVar14 = (float)param_3[param_4 * 0x16 + 5];
    param_2[4] = (uint)(fVar14 + fVar11);
    param_2[5] = (uint)(fVar13 + fVar12);
    param_2[6] = (uint)(fVar4 + fVar6);
    param_2[7] = 0;
    uVar15 = param_3[param_4 * 0x16 + 0x18];
    param_2[8] = uVar15;
    uVar16 = param_3[param_4 * 0x16 + 0x17];
    param_2[9] = uVar16;
    uVar17 = param_3[param_4 * 0x16 + 0x16];
    param_2[10] = uVar17;
    param_2[0xb] = param_3[param_4 * 0x16 + 6];
    uVar18 = param_3[param_4 * 0x16 + 0x15];
    param_2[0xc] = uVar18;
    uVar19 = param_3[param_4 * 0x16 + 0x14];
    param_2[0xd] = uVar19;
    uVar20 = param_3[param_4 * 0x16 + 0x13];
    param_2[0xe] = uVar20;
    piVar3 = param_3 + 0x1605;
    fVar5 = *(float *)(*param_3 + 0x9c) + in_s1 * *(float *)(*piVar3 + 0x3e4);
    param_2[0xf] = (uint)fVar5;
    fVar7 = (float)VectorUnsignedToFloat
                             (*(undefined4 *)(*piVar3 + 0x3e0),(byte)(in_fpscr >> 0x16) & 3);
    uVar8 = VectorFloatToUnsigned(fVar7 + *(float *)(*param_3 + 0x98),3);
    param_2[0x10] = uVar8;
    fVar9 = *(float *)(*param_3 + 0x7c) + in_s1 * *(float *)(*piVar3 + 0x36c);
    param_2[0x11] = (uint)fVar9;
    fVar7 = (float)VectorUnsignedToFloat
                             (*(undefined4 *)(*piVar3 + 0x368),(byte)(in_fpscr >> 0x16) & 3);
    uVar8 = VectorFloatToUnsigned(fVar7 + *(float *)(*param_3 + 0x78),3);
    param_2[0x12] = uVar8;
    param_2[0x13] = (uint)fVar10;
    param_2[0x14] = (uint)(fVar14 + fVar11);
    param_2[0x15] = (uint)(fVar13 + fVar12);
    param_2[0x16] = (uint)(fVar4 + fVar6);
    param_2[0x17] = 0;
    param_2[0x18] = uVar15;
    param_2[0x19] = uVar16;
    param_2[0x1a] = uVar17;
    param_2[0x1b] = (uint)-(float)param_3[param_4 * 0x16 + 6];
    param_2[0x1f] = (uint)fVar5;
    param_2[0x1c] = uVar18;
    param_2[0x1d] = uVar19;
    param_2[0x1e] = uVar20;
    param_2[0x20] = *(uint *)(*param_3 + 0x98);
    param_2[0x21] = (uint)fVar9;
    puVar2 = param_2 + 0x24;
    param_2[0x22] = *(uint *)(*param_3 + 0x78);
    param_2[0x23] = 0;
  }
  return puVar2;
}


