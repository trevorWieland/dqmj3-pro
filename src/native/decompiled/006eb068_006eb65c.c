#include "006eb068_006eb65c.h"



void fn_006eb65c(undefined4 *param_1,int *param_2)

{
  uint uVar1;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 local_10;
  
  uVar1 = (uint)*(byte *)(*param_2 + 0x19);
  if (uVar1 != 0xff) {
    fn_00781324(*(undefined4 *)(*(int *)(*param_2 + 0xc) + uVar1 * 4),&local_30);
  }
  *param_1 = local_30;
  param_1[1] = uStack_2c;
  param_1[2] = uStack_28;
  param_1[3] = uStack_24;
  param_1[4] = uStack_20;
  param_1[5] = uStack_1c;
  param_1[6] = uStack_18;
  param_1[7] = uStack_14;
  param_1[8] = local_10;
  return;
}



void fn_006eb628(int *param_1)

{
  uint uVar1;
  undefined1 local_10 [16];
  
  uVar1 = (uint)*(byte *)(*param_1 + 0x20);
  if (uVar1 != 0xff) {
    fn_00781894(*(undefined4 *)(*(int *)(*param_1 + 0xc) + uVar1 * 4),local_10);
  }
  return;
}



undefined4 fn_006eb5e4(int *param_1,int param_2)

{
  param_1 = (int *)*param_1;
  if (param_2 != 0) {
    if (param_2 == 1) {
      param_1 = param_1 + 2;
    }
    else if (param_2 == 2) {
      param_1 = param_1 + 4;
    }
  }
  return *(undefined4 *)(*param_1 + 0x10);
}



void fn_006eb49c(undefined4 *param_1,int *param_2)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  *param_1 = 0xffffffff;
  uVar1 = fn_00781908(**(undefined4 **)(*param_2 + 0xc),&local_18);
  fVar2 = 0.0;
  fVar3 = 1.0;
  if ((uVar1 & 0x10000) != 0) {
    if (1.0 < local_18) {
      local_18 = fVar3;
    }
    else if (local_18 < 0.0) {
      local_18 = fVar2;
    }
    uVar4 = VectorFloatToUnsigned(local_18 * 255.0 + 0.5,3);
    *(char *)param_1 = (char)uVar4;
  }
  if ((uVar1 & 0x20000) != 0) {
    if (1.0 < local_14) {
      local_14 = fVar3;
    }
    else if (local_14 < 0.0) {
      local_14 = fVar2;
    }
    uVar4 = VectorFloatToUnsigned(local_14 * 255.0 + 0.5,3);
    *(char *)((int)param_1 + 1) = (char)uVar4;
  }
  if ((uVar1 & 0x40000) != 0) {
    if (1.0 < local_10) {
      local_10 = fVar3;
    }
    else if (local_10 < 0.0) {
      local_10 = fVar2;
    }
    uVar4 = VectorFloatToUnsigned(local_10 * 255.0 + 0.5,3);
    *(char *)((int)param_1 + 2) = (char)uVar4;
  }
  if ((uVar1 & 0x80000) != 0) {
    if (1.0 < local_c) {
    }
    else {
      fVar3 = fVar2;
      if (0.0 <= local_c) {
        fVar3 = local_c;
      }
    }
    uVar4 = VectorFloatToUnsigned(fVar3 * 255.0 + 0.5,3);
    *(char *)((int)param_1 + 3) = (char)uVar4;
  }
  return;
}



undefined4 fn_006eb3e8(int param_1)

{
  float fVar1;
  float fVar2;
  
  if (((*(byte *)(*(int *)(param_1 + 0x14) + 4) & 1) == 0) && (*(char *)(param_1 + 0x10) != '\x01'))
  {
    return 0;
  }
  fVar1 = *(float *)(param_1 + 4);
  fVar2 = *(float *)(param_1 + 8);
  if (NAN(fVar2)) {
    if (fVar1 <= 0.0) {
      return 0;
    }
    if (-fVar2 < fVar1) {
      return 0;
    }
  }
  else if ((fVar1 < *(float *)(param_1 + 0xc) - fVar2) || (*(float *)(param_1 + 0xc) <= fVar1)) {
    return 0;
  }
  return 1;
}



undefined4 fn_006eb3c0(int param_1)

{
  undefined4 uVar1;
  
  if (((*(byte *)(*(int *)(param_1 + 0x14) + 4) & 1) == 0) && (*(char *)(param_1 + 0x10) != '\x01'))
  {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



bool fn_006eb3a4(int param_1)

{
  return *(float *)(param_1 + 0xc) <= *(float *)(param_1 + 4);
}



void fn_006eb304(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *param_2;
  uVar1 = fn_002febd8(param_3);
  iVar2 = fn_00190fe0(*(int *)(iVar2 + 0x30) + 0x40,param_3,uVar1);
  *param_1 = *(undefined4 *)(*(int *)(*(int *)(*param_2 + 0x30) + 0x3c) + iVar2 * 4);
  return;
}



int fn_006eb2b4(int param_1)

{
  return *(int *)(param_1 + 4) + 0x68;
}



int fn_006eb290(int param_1)

{
  return *(int *)(param_1 + 4) + 0x10;
}



int fn_006eb278(int param_1)

{
  return *(int *)(param_1 + 4) + 8;
}



int fn_006eb248(int param_1)

{
  return (int)*(char *)(*(int *)(param_1 + 8) +
                       (uint)*(ushort *)(param_1 + 4) * 0x278 + **(int **)(param_1 + 0x4c) + 0x168);
}



int fn_006eb218(int param_1)

{
  return (int)*(char *)(*(int *)(param_1 + 8) +
                       (uint)*(ushort *)(param_1 + 4) * 0x278 + **(int **)(param_1 + 0x4c) + 0x170);
}



/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_006eb074(undefined4 param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 local_30;
  byte bStack_2b;
  
  puVar11 = (undefined4 *)param_2[1];
  param_2 = (undefined4 *)*param_2;
  if (param_2 != puVar11) {
    uVar1 = (int)puVar11 - (int)param_2;
    iVar2 = (int)((longlong)(int)uVar1 * -0x6db6db6d + ((ulonglong)uVar1 << 0x20) >> 0x20);
    fn_007ae40c(param_2,puVar11,(iVar2 >> 4) - (iVar2 >> 0x1f));
    if ((int)uVar1 < 0x1c1) {
      fn_007a4f44(param_2,puVar11);
      return;
    }
    fn_007a4f44(param_2,param_2 + 0x70);
    for (param_2 = param_2 + 0x70; param_2 != puVar11; param_2 = param_2 + 7) {
      uVar1 = (uint)local_30 >> 8;
      local_30 = CONCAT31((int3)uVar1,*(undefined1 *)param_2);
      uVar3 = param_2[1];
      fVar7 = (float)param_2[2];
      uVar4 = param_2[3];
      puVar8 = param_2 + -7;
      iVar2 = param_2[4];
      uVar5 = param_2[5];
      uVar6 = param_2[6];
      bStack_2b = (byte)((uint)uVar3 >> 8);
      puVar10 = param_2;
      if ((iVar2 != param_2[-3]) || (bStack_2b == *(byte *)((int)param_2 + -0x17))) {
        fVar13 = (float)param_2[-5];
        goto joined_r0x006eb154;
      }
      puVar9 = param_2;
      if (bStack_2b < *(byte *)((int)param_2 + -0x17)) {
        do {
          while( true ) {
            puVar10 = puVar8;
            uVar12 = puVar10[1];
            uVar14 = puVar10[2];
            uVar15 = puVar10[3];
            uVar16 = puVar10[4];
            uVar17 = puVar10[5];
            uVar18 = puVar10[6];
            *puVar9 = *puVar10;
            puVar9[1] = uVar12;
            puVar9[2] = uVar14;
            puVar9[3] = uVar15;
            puVar9[4] = uVar16;
            puVar9[5] = uVar17;
            puVar9[6] = uVar18;
            puVar8 = puVar10 + -7;
            if ((iVar2 != puVar10[-3]) || (bStack_2b == *(byte *)((int)puVar10 + -0x17))) break;
            puVar9 = puVar10;
            if (*(byte *)((int)puVar10 + -0x17) <= bStack_2b) goto LAB_006eb1a8;
          }
          fVar13 = (float)puVar10[-5];
joined_r0x006eb154:
          puVar9 = puVar10;
        } while (fVar13 < fVar7);
      }
LAB_006eb1a8:
      *puVar10 = local_30;
      puVar10[1] = uVar3;
      puVar10[2] = fVar7;
      puVar10[3] = uVar4;
      puVar10[4] = iVar2;
      puVar10[5] = uVar5;
      puVar10[6] = uVar6;
    }
  }
  return;
}



void fn_006eb068(void)

{
  fn_006ea99c();
  return;
}


