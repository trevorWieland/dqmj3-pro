#include "0055f2ac_0055fa10.h"



void fn_0055fa10(int param_1)

{
  undefined4 uVar1;
  uint in_fpscr;
  float in_s0;
  float fVar2;
  float in_s1;
  
  uVar1 = (**(code **)(**(int **)(param_1 + 0x24) + 0xc))();
  fVar2 = (float)VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x16) & 3);
  in_s0 = in_s0 / fVar2;
  uVar1 = (**(code **)(**(int **)(param_1 + 0x24) + 0x10))();
  *(float *)(param_1 + 8) = in_s0;
  fVar2 = (float)VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x16) & 3);
  *(float *)(param_1 + 0xc) = in_s1 / fVar2;
  return;
}



void fn_0055f99c(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint in_fpscr;
  float fVar3;
  
  *(undefined4 *)(param_1[10] + 4) = 0;
  *(undefined1 *)(param_1[10] + 0x45) = 0;
  iVar2 = param_1[10];
  *(undefined1 *)(iVar2 + 0x40) = 0;
  *(undefined4 *)(iVar2 + 0x38) = 0;
  uVar1 = (**(code **)(*(int *)param_1[9] + 0xc))();
  fVar3 = (float)VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x16) & 3);
  *(short *)(iVar2 + 0x3c) = (short)(int)(fVar3 * (float)param_1[8] * (float)param_1[2]);
  *(undefined4 *)(iVar2 + 0x18) = *param_1;
  *(undefined4 *)(iVar2 + 0x1c) = param_1[1];
  return;
}



void fn_0055f674(int param_1,int param_2)

{
  uint in_fpscr;
  float fVar1;
  
  if (*(char *)(param_1 + 0x2c) == '\0') {
    fVar1 = (float)VectorUnsignedToFloat((uint)*(byte *)(param_2 + 6),(byte)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat((int)*(char *)(param_2 + 4),(byte)(in_fpscr >> 0x16) & 3);
    fVar1 = fVar1 * *(float *)(param_1 + 8);
  }
  else {
    fVar1 = *(float *)(param_1 + 0x1c);
    VectorUnsignedToFloat((uint)*(byte *)(param_2 + 6),(byte)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat((int)*(char *)(param_2 + 4),(byte)(in_fpscr >> 0x16) & 3);
  }
  fn_0055f704(param_1);
  *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x10) + fVar1;
  return;
}



void fn_0055f704(undefined4 *param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  undefined2 *puVar8;
  uint uVar9;
  uint uVar10;
  uint in_fpscr;
  float in_s0;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  
  uVar6 = (uint)*(byte *)(param_2 + 5);
  uVar7 = (uint)*(ushort *)(param_2 + 0xc);
  uVar10 = (uint)*(byte *)(param_2 + 7);
  uVar9 = (uint)*(ushort *)(param_2 + 0xe);
  uVar4 = (uint)*(ushort *)(param_2 + 10);
  uVar1 = (uint)*(ushort *)(param_2 + 8);
  fVar11 = (float)param_1[5];
  fVar12 = (float)param_1[3];
  fVar13 = (float)param_1[2];
  if (*(char *)(param_1[9] + 5) == '\0') {
    fVar16 = (float)VectorUnsignedToFloat(uVar4,(byte)(in_fpscr >> 0x16) & 3);
    fVar23 = (float)VectorUnsignedToFloat(uVar9 + uVar10,(byte)(in_fpscr >> 0x16) & 3);
    fVar19 = (float)VectorUnsignedToFloat(uVar4,(byte)(in_fpscr >> 0x16) & 3);
    fVar14 = (float)VectorUnsignedToFloat(uVar7,(byte)(in_fpscr >> 0x16) & 3);
    fVar17 = (float)VectorUnsignedToFloat(uVar1,(byte)(in_fpscr >> 0x16) & 3);
    fVar22 = (float)VectorUnsignedToFloat(uVar9,(byte)(in_fpscr >> 0x16) & 3);
    fVar15 = (float)VectorUnsignedToFloat(uVar7 + uVar6,(byte)(in_fpscr >> 0x16) & 3);
    fVar18 = (float)VectorUnsignedToFloat(uVar1,(byte)(in_fpscr >> 0x16) & 3);
    fVar20 = (float)VectorUnsignedToFloat(uVar10,(byte)(in_fpscr >> 0x16) & 3);
    fVar23 = fVar23 / fVar19;
    fVar19 = (float)VectorUnsignedToFloat(uVar6,(byte)(in_fpscr >> 0x16) & 3);
    fVar22 = fVar22 / fVar16;
    fVar14 = fVar14 / fVar17;
    fVar15 = fVar15 / fVar18;
  }
  else {
    fVar21 = (float)VectorUnsignedToFloat(uVar9,(byte)(in_fpscr >> 0x16) & 3);
    fVar22 = (float)VectorUnsignedToFloat(uVar4,(byte)(in_fpscr >> 0x16) & 3);
    fVar23 = (float)VectorUnsignedToFloat(uVar4,(byte)(in_fpscr >> 0x16) & 3);
    fVar16 = (float)VectorUnsignedToFloat(uVar9 + uVar10,(byte)(in_fpscr >> 0x16) & 3);
    fVar14 = (float)VectorUnsignedToFloat(uVar1,(byte)(in_fpscr >> 0x16) & 3);
    fVar15 = (float)VectorUnsignedToFloat(uVar1,(byte)(in_fpscr >> 0x16) & 3);
    fVar17 = (float)VectorUnsignedToFloat(uVar7,(byte)(in_fpscr >> 0x16) & 3);
    in_s0 = in_s0 - fVar13 * 0.5;
    fVar18 = (float)VectorUnsignedToFloat(uVar7 + uVar6,(byte)(in_fpscr >> 0x16) & 3);
    fVar20 = (float)VectorUnsignedToFloat(uVar10,(byte)(in_fpscr >> 0x16) & 3);
    fVar11 = fVar11 - fVar12 * 0.5;
    fVar19 = (float)VectorUnsignedToFloat(uVar6,(byte)(in_fpscr >> 0x16) & 3);
    fVar22 = (fVar21 - 0.5) / fVar22;
    fVar20 = fVar20 + 1.0;
    fVar19 = fVar19 + 1.0;
    fVar14 = (fVar17 - 0.5) / fVar14;
    fVar23 = (fVar16 + 0.5) / fVar23;
    fVar15 = (fVar18 + 0.5) / fVar15;
  }
  puVar5 = (uint *)param_1[10];
  uVar1 = puVar5[1];
  if (uVar1 < *puVar5) {
    puVar5[1] = uVar1 + 1;
    puVar8 = (undefined2 *)(*(int *)(param_1[10] + 8) + uVar1 * 0x24);
    *puVar8 = (short)(int)(fVar19 * fVar13 * 16.0);
    puVar8[1] = (short)(int)(fVar20 * fVar12 * 16.0);
    puVar8[2] = (short)(int)(in_s0 * 4.0);
    puVar8[3] = (short)(int)(fVar11 * 4.0);
    *(undefined4 *)(puVar8 + 4) = *param_1;
    *(undefined4 *)(puVar8 + 6) = param_1[1];
    *(undefined1 *)(puVar8 + 0x10) = *(undefined1 *)((int)param_1 + 0x2d);
    puVar8[8] = (short)(int)(fVar14 * 16384.0);
    puVar8[9] = (short)(int)((1.0 - fVar22) * 16384.0);
    puVar8[10] = (short)(int)(fVar15 * 16384.0);
    puVar8[0xb] = (short)(int)((1.0 - fVar23) * 16384.0);
    uVar2 = (**(code **)(*(int *)param_1[9] + 0xc))();
    fVar11 = (float)VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
    puVar8[0xe] = (short)(int)(fVar11 * (float)param_1[8] * (float)param_1[2]);
    puVar8[0xf] = *(undefined2 *)(param_2 + 0x12);
    iVar3 = (**(code **)(*(int *)param_1[9] + 0x78))();
    *(uint *)(puVar8 + 0xc) = *(uint *)(param_2 + 0x14) | (uint)(iVar3 != 0);
  }
  return;
}



undefined4 fn_0055f5f4(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  fn_00170704(param_1 + 4);
  fn_00170704(param_1 + 4);
  uVar1 = fn_0055f2ac(param_1 + 0x10,param_2,fn_0055f5b0,0);
  fn_001707b4(param_1 + 4);
  fn_001707b4(param_1 + 4);
  return uVar1;
}



void fn_0055f5b0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_00141104();
  iVar2 = fn_00140e98(iVar1,6);
  *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar1 + 0x184);
  *(undefined1 *)(iVar2 + 4) = 0x31;
  *(undefined4 *)(iVar2 + 0x10) = param_1;
  *(undefined4 *)(iVar2 + 0x14) = param_2;
  fn_001411b8(iVar1,iVar2);
  return;
}



void fn_0055f524(int *param_1)

{
  int iVar1;
  
  if ((char)param_1[0x48] == '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x48) = 0;
  *(undefined1 *)((int)param_1 + 0x121) = 0;
  fn_00557f84(param_1);
  iVar1 = param_1[0x47];
  fn_0017d90c(iVar1 + 8,param_1 + 0x3e);
  (**(code **)(*param_1 + 0x10))(param_1);
  fn_0017d948(iVar1 + 0x14,iVar1 + 0x18,param_1 + 0x3e);
  return;
}



void fn_0055f4bc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                 undefined1 param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = fn_00141104();
  iVar2 = fn_00140e98(iVar1,0xb);
  *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar1 + 0x184);
  *(undefined1 *)(iVar2 + 4) = 0x22;
  *(int *)(iVar2 + 0x10) = param_1 + 0x124;
  uVar3 = param_4[1];
  uVar4 = param_4[2];
  *(undefined4 *)(iVar2 + 0x14) = *param_4;
  *(undefined4 *)(iVar2 + 0x18) = uVar3;
  *(undefined4 *)(iVar2 + 0x1c) = uVar4;
  *(undefined4 *)(iVar2 + 0x20) = param_2;
  *(undefined4 *)(iVar2 + 0x24) = param_3;
  *(undefined1 *)(iVar2 + 0x28) = param_5;
  fn_001411b8(iVar1,iVar2);
  *(undefined1 *)(param_1 + 0x121) = 1;
  return;
}



void fn_0055f414(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x11c);
  iVar2 = (uint)*(byte *)(param_1 + 0x9d) + *(int *)(param_1 + 0x50);
  iVar1 = UnsignedSaturate(iVar2,7);
  UnsignedDoesSaturate(iVar2,7);
  fn_0017d90c(iVar4 + 8,param_1 + 0xf8);
  piVar3 = *(int **)(iVar4 + 0xc);
  if (piVar3 != (int *)(iVar4 + 0xc)) {
    do {
      iVar2 = piVar3[-0x2a] + (uint)*(byte *)((int)piVar3 + -0x5b);
      if (iVar2 < 0x80) {
        if (iVar2 < 0) {
          iVar2 = 0;
        }
      }
      else {
        iVar2 = 0x7f;
      }
    } while ((iVar2 <= iVar1) && (piVar3 = (int *)*piVar3, piVar3 != (int *)(iVar4 + 0xc)));
  }
  fn_0017d948(iVar4 + 8,piVar3,param_1 + 0xf8);
  return;
}



void fn_0055f3c4(int param_1,undefined1 param_2,undefined1 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_00141104();
  iVar2 = fn_00140e98(iVar1,6);
  *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar1 + 0x184);
  *(undefined1 *)(iVar2 + 4) = 0x25;
  *(int *)(iVar2 + 0x10) = param_1 + 0x124;
  *(undefined1 *)(iVar2 + 0x14) = param_2;
  *(undefined1 *)(iVar2 + 0x15) = param_3;
  fn_001411b8(iVar1,iVar2);
  return;
}



void fn_0055f344(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = fn_00141104();
  iVar2 = fn_00140e98(iVar1,0xe);
  *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar1 + 0x184);
  *(undefined1 *)(iVar2 + 4) = 0x23;
  *(int *)(iVar2 + 0x10) = param_1 + 0x124;
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  *(undefined4 *)(iVar2 + 0x14) = *param_3;
  *(undefined4 *)(iVar2 + 0x18) = uVar3;
  *(undefined4 *)(iVar2 + 0x1c) = uVar4;
  *(undefined4 *)(iVar2 + 0x24) = param_2[1];
  *(undefined4 *)(iVar2 + 0x20) = *param_2;
  *(undefined4 *)(iVar2 + 0x28) = param_2[3];
  uVar3 = ((undefined4 *)param_2[2])[1];
  *(undefined4 *)(iVar2 + 0x2c) = *(undefined4 *)param_2[2];
  *(undefined4 *)(iVar2 + 0x30) = uVar3;
  *(undefined4 *)(iVar2 + 0x34) = *param_3;
  fn_001411b8(iVar1);
  return;
}



void fn_0055f31c(int param_1)

{
  fn_005579dc();
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined1 *)(param_1 + 0x120) = 1;
  *(undefined1 *)(param_1 + 0x121) = 0;
  return;
}



undefined4 * fn_0055f2ac(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)fn_00150d40(*param_1,(param_2 + 0x1fU & 0xffffffe0) + 0x20,0x20);
  puVar2 = puVar1;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = puVar1 + 8;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = puVar2;
    puVar1[3] = param_2;
    puVar1[4] = param_3;
    puVar1[5] = param_4;
    fn_0017d948(param_1[3] + 8,param_1[3] + 0xc,puVar1);
  }
  return puVar2;
}


