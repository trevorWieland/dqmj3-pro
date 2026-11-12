#include "003c7b44_003c8540.h"



void fn_003c8540(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float local_48;
  float local_44;
  float local_40;
  
  uVar3 = 0;
  fVar8 = 800.0;
  uVar1 = *(int *)(param_1 + 0x78) - *(int *)(param_1 + 0x74);
  iVar2 = (int)((longlong)(int)uVar1 * -0x6db6db6d + ((ulonglong)uVar1 << 0x20) >> 0x20);
  if (iVar2 >> 4 != iVar2 >> 0x1f) {
    fVar9 = 45.0;
    fVar10 = 40.743664;
    uVar7 = 0;
    uVar11 = 0x3cc90fdb;
    do {
      uVar6 = (undefined4)uVar7;
      fVar4 = (float)VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x16) & 3);
      fVar4 = fVar4 * fVar9;
      fn_0017fe34();
      fVar4 = fVar4 * fVar10;
      fn_00194408();
      fVar4 = fVar4 * fVar8;
      fVar5 = (float)VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x16) & 3);
      fVar5 = fVar5 * fVar9;
      fn_0017fe34();
      fVar5 = fVar5 * fVar10;
      fn_00525abc();
      local_40 = fVar5 * fVar8;
      uVar7 = CONCAT44(local_40,uVar6);
      local_48 = fVar4;
      local_44 = (float)uVar6;
      fn_00243cdc(*(undefined4 *)(*(int *)(param_1 + 0x74) + uVar3 * 0x1c),&local_48);
      fVar4 = -fVar4;
      fn_00525bd0();
      local_44 = fVar4 * (float)uVar11;
      local_48 = (float)uVar7;
      local_40 = local_48;
      fn_002440a8(*(undefined4 *)(*(int *)(param_1 + 0x74) + uVar3 * 0x1c),&local_48);
      uVar3 = uVar3 + 1;
      uVar1 = *(int *)(param_1 + 0x78) - *(int *)(param_1 + 0x74);
      iVar2 = (int)((longlong)(int)uVar1 * -0x6db6db6d + ((ulonglong)uVar1 << 0x20) >> 0x20);
    } while (uVar3 < (uint)((iVar2 >> 4) - (iVar2 >> 0x1f)));
  }
  return;
}



void fn_003c7fbc(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = 0;
  uVar1 = *(int *)(param_1 + 0x78) - *(int *)(param_1 + 0x74);
  iVar2 = (int)((longlong)(int)uVar1 * -0x6db6db6d + ((ulonglong)uVar1 << 0x20) >> 0x20);
  if (iVar2 >> 4 != iVar2 >> 0x1f) {
    do {
      fn_0024405c(*(undefined4 *)(*(int *)(param_1 + 0x74) + uVar4 * 0x1c),0);
      fn_00243d10(*(undefined4 *)(*(int *)(param_1 + 0x74) + uVar4 * 0x1c));
      piVar3 = *(int **)(*(int *)(param_1 + 0x74) + uVar4 * 0x1c);
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 4))();
      }
      uVar4 = uVar4 + 1;
      uVar1 = *(int *)(param_1 + 0x78) - *(int *)(param_1 + 0x74);
      iVar2 = (int)((longlong)(int)uVar1 * -0x6db6db6d + ((ulonglong)uVar1 << 0x20) >> 0x20);
    } while (uVar4 < (uint)((iVar2 >> 4) - (iVar2 >> 0x1f)));
  }
  uVar5 = *(uint *)(param_1 + 0x74);
  *(undefined4 *)(param_1 + 0x74) = 0;
  uVar4 = *(uint *)(param_1 + 0x78);
  *(undefined4 *)(param_1 + 0x78) = 0;
  iVar2 = *(int *)(param_1 + 0x7c);
  *(undefined4 *)(param_1 + 0x7c) = 0;
  uVar1 = uVar5;
  if (uVar4 < uVar5) {
    do {
      uVar1 = uVar1 + 0x1c;
    } while (uVar1 != uVar4);
  }
  uVar1 = iVar2 - uVar5;
  iVar2 = (int)((longlong)(int)uVar1 * -0x6db6db6d + ((ulonglong)uVar1 << 0x20) >> 0x20);
  fn_001008c4(uVar5,(iVar2 >> 4) - (iVar2 >> 0x1f),0);
  fn_001cad48(*(undefined4 *)(param_1 + 0x80));
  iVar2 = *(int *)(param_1 + 0x70);
  fn_00159f34(*(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar2 + 0x10));
  fn_00159f34(*(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar2 + 0x18));
  fn_00159f34(*(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar2 + 0x24));
  fn_0016a43c(*(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar2 + 0xc));
  fn_0016a43c(*(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar2 + 0x14));
  fn_0016a43c(*(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar2 + 0x20));
                    /* WARNING: Subroutine does not return */
  fn_001482f4(*(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar2 + 8));
}



void fn_003c7da0(int param_1)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  float *pfVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined1 auStack_60 [4];
  undefined1 auStack_5c [56];
  
  uVar5 = 0;
  uVar1 = *(int *)(param_1 + 0x78) - *(int *)(param_1 + 0x74);
  iVar2 = (int)((longlong)(int)uVar1 * -0x6db6db6d + ((ulonglong)uVar1 << 0x20) >> 0x20);
  if (iVar2 >> 4 != iVar2 >> 0x1f) {
    fVar17 = 0.01;
    fVar18 = 16.0;
    uVar16 = 0x4100000000000000;
    fVar14 = 0.0;
    uVar19 = 0x3f80000042200000;
    uVar20 = 0x3e19999a3dcccccd;
    do {
      fVar9 = (float)((ulonglong)uVar16 >> 0x20);
      puVar6 = (undefined4 *)(*(int *)(param_1 + 0x74) + uVar5 * 0x1c);
      iVar2 = fn_006be0f4(*(undefined4 *)(param_1 + 0x68),uVar5);
      if ((*(char *)(iVar2 + 0x514) < 0) || (iVar2 + *(char *)(iVar2 + 0x514) * 0xf0 == -0x154)) {
        uVar16 = CONCAT44(fVar9,(int)uVar19);
        fVar11 = fVar18;
      }
      else {
        fVar8 = fVar9;
        fn_0020bbc4(auStack_60);
        fn_006bfda8(auStack_5c);
        pbVar3 = (byte *)fn_00242a30();
        iVar2 = fn_006bfe90(auStack_5c);
        fVar7 = (float)VectorSignedToFloat(*(undefined4 *)(&DAT_007c8a10 + iVar2 * 4),
                                           (byte)(in_fpscr >> 0x16) & 3);
        fVar11 = (float)VectorUnsignedToFloat((uint)*pbVar3,(byte)(in_fpscr >> 0x16) & 3);
        fVar9 = (float)VectorUnsignedToFloat((uint)pbVar3[1],(byte)(in_fpscr >> 0x16) & 3);
        fVar11 = fVar11 * fVar7 * fVar17;
        fVar9 = fVar9 * fVar7 * fVar17;
        iVar2 = fn_006bfe90(auStack_5c);
        fVar7 = (float)VectorSignedToFloat(*(undefined4 *)(&DAT_007c8a24 + iVar2 * 4),
                                           (byte)(in_fpscr >> 0x16) & 3);
        fVar10 = (float)VectorUnsignedToFloat((uint)pbVar3[2],(byte)(in_fpscr >> 0x16) & 3);
        uVar16 = CONCAT44(fVar8,fVar10 * fVar7 * fVar17);
      }
      pfVar4 = (float *)fn_006b52cc(*puVar6);
      fVar8 = *pfVar4;
      fVar9 = fVar11 - fVar9;
      fVar7 = pfVar4[2];
      fVar10 = fVar8 - fVar14;
      uVar5 = uVar5 + 1;
      fVar13 = fVar7 - fVar14;
      fVar12 = (float)((ulonglong)uVar19 >> 0x20) /
               SQRT(fVar10 * fVar10 + fVar9 * fVar9 + fVar13 * fVar13);
      fVar15 = (float)uVar16;
      puVar6[1] = fVar8 - fVar10 * fVar12 * fVar15;
      puVar6[2] = (fVar11 - fVar9 * fVar12 * fVar15) + fVar15 * (float)uVar20;
      puVar6[3] = fVar7 - fVar13 * fVar12 * fVar15;
      puVar6[4] = fVar8;
      puVar6[5] = fVar11 - fVar15 * (float)((ulonglong)uVar20 >> 0x20);
      puVar6[6] = fVar7;
      uVar1 = *(int *)(param_1 + 0x78) - *(int *)(param_1 + 0x74);
      iVar2 = (int)((longlong)(int)uVar1 * -0x6db6db6d + ((ulonglong)uVar1 << 0x20) >> 0x20);
    } while (uVar5 < (uint)((iVar2 >> 4) - (iVar2 >> 0x1f)));
  }
  return;
}



void fn_003c7d60(undefined4 *param_1)

{
  *param_1 = &DAT_00830828;
  fn_001008c4(param_1[0x5b],(int)(param_1[0x5f] - param_1[0x5b]) >> 2,0);
  fn_0039fb3c(param_1);
  fn_002feef8();
  return;
}



undefined4 * fn_003c7d20(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0044aa1c();
  *puVar1 = &DAT_00830828;
  puVar1[0x59] = 0;
  puVar1[0x5a] = 0;
  puVar1[0x5b] = 0;
  puVar1[0x5c] = 0;
  puVar1[0x5d] = 0;
  puVar1[0x5e] = 0;
  puVar1[0x5f] = 0;
  return puVar1;
}



void fn_003c7b44(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint *puVar6;
  bool bVar7;
  
  iVar1 = fn_006ba220();
  if (iVar1 == 0) {
    fn_0068ab44(param_1,0x100094b);
    fn_0039e6a8(param_1,param_2);
    iVar1 = fn_006cea38(param_1,param_2);
    iVar1 = iVar1 + *(int *)(param_1 + 0x170);
    puVar6 = (uint *)(*(int *)(param_1 + 0x16c) +
                     ((int)(iVar1 + ((uint)(iVar1 >> 0x1f) >> 0x1b)) >> 5) * 4);
    uVar5 = iVar1 % 0x20;
    bVar7 = (int)uVar5 < 0;
    if (bVar7) {
      uVar5 = uVar5 + 0x20;
    }
    uVar5 = 1 << (uVar5 & 0xff);
    if (bVar7) {
      puVar6 = puVar6 + -1;
    }
    iVar1 = fn_006c5268(param_1,param_2);
    if (iVar1 == 0) {
      uVar5 = *puVar6 & ~uVar5;
    }
    else {
      uVar5 = *puVar6 | uVar5;
    }
    *puVar6 = uVar5;
    return;
  }
  iVar1 = fn_006c7aa8(param_1);
  iVar2 = fn_006b876c(*(undefined4 *)(DAT_00897804 + 0x38));
  iVar3 = fn_006e7c24(*(undefined4 *)(param_1 + 0x164));
  iVar2 = iVar3 + iVar2 + -0x1e;
  if (iVar1 < iVar2) {
    fn_0015b0f8(iVar2 - iVar1);
    uVar4 = fn_0022f584((char *)&DAT_003c7c9c,0);
    fn_0068974c(param_1,uVar4,0,1);
    fn_0044a864(param_1,0);
    return;
  }
  uVar4 = fn_0022f584((char *)&DAT_003c7c7c,0);
  fn_0068974c(param_1,uVar4,1);
  fn_0044a864(param_1,2);
  return;
}


