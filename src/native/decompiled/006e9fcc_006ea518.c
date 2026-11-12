#include "006e9fcc_006ea518.h"



void fn_006ea518(uint *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  uVar1 = fn_006eb200(param_3);
  *param_1 = (uVar1 & 0xff) << 8 | param_4 & 0xffff00ff;
  param_1[1] = uVar2;
  return;
}



/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_006ea33c(undefined4 param_1,undefined4 *param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 local_30;
  byte bStack_2b;
  
  puVar13 = (undefined4 *)param_2[1];
  param_2 = (undefined4 *)*param_2;
  if (param_2 != puVar13) {
    uVar2 = (int)puVar13 - (int)param_2;
    iVar3 = (int)((longlong)(int)uVar2 * -0x6db6db6d + ((ulonglong)uVar2 << 0x20) >> 0x20);
    fn_007ac718(param_2,puVar13,(iVar3 >> 4) - (iVar3 >> 0x1f));
    if ((int)uVar2 < 0x1c1) {
      fn_007a41b4(param_2,puVar13);
      return;
    }
    fn_007a41b4(param_2,param_2 + 0x70);
    for (param_2 = param_2 + 0x70; param_2 != puVar13; param_2 = param_2 + 7) {
      uVar2 = (uint)local_30 >> 8;
      local_30 = CONCAT31((int3)uVar2,*(undefined1 *)param_2);
      uVar4 = param_2[1];
      fVar9 = (float)param_2[2];
      uVar5 = param_2[3];
      puVar10 = param_2 + -7;
      uVar6 = param_2[4];
      uVar7 = param_2[5];
      uVar8 = param_2[6];
      bStack_2b = (byte)((uint)uVar4 >> 8);
      bVar1 = *(byte *)((int)param_2 + -0x17);
      puVar12 = param_2;
      if (bStack_2b != bVar1) goto joined_r0x006ea410;
      if (fVar9 < (float)param_2[-5]) {
        do {
          while( true ) {
            puVar11 = puVar10;
            uVar14 = puVar11[1];
            uVar15 = puVar11[2];
            uVar16 = puVar11[3];
            uVar17 = puVar11[4];
            uVar18 = puVar11[5];
            uVar19 = puVar11[6];
            *puVar12 = *puVar11;
            puVar12[1] = uVar14;
            puVar12[2] = uVar15;
            puVar12[3] = uVar16;
            puVar12[4] = uVar17;
            puVar12[5] = uVar18;
            puVar12[6] = uVar19;
            puVar10 = puVar11 + -7;
            bVar1 = *(byte *)((int)puVar11 + -0x17);
            puVar12 = puVar11;
            if (bStack_2b != bVar1) break;
            if ((float)puVar11[-5] <= fVar9) goto LAB_006ea458;
          }
joined_r0x006ea410:
        } while (bStack_2b < bVar1);
      }
LAB_006ea458:
      *puVar12 = local_30;
      puVar12[1] = uVar4;
      puVar12[2] = fVar9;
      puVar12[3] = uVar5;
      puVar12[4] = uVar6;
      puVar12[5] = uVar7;
      puVar12[6] = uVar8;
    }
  }
  return;
}



void fn_006ea330(void)

{
  fn_006ea99c();
  return;
}



void fn_006ea1e8(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  puVar6 = (undefined4 *)*param_2;
  puVar7 = (undefined4 *)param_2[1];
  if (puVar6 != puVar7) {
    uVar4 = (int)puVar7 - (int)puVar6;
    iVar5 = (int)((longlong)(int)uVar4 * -0x6db6db6d + ((ulonglong)uVar4 << 0x20) >> 0x20);
    fn_007ac308(puVar6,puVar7,(iVar5 >> 4) - (iVar5 >> 0x1f),param_1);
    if ((int)uVar4 < 0x1c1) {
      fn_007a3fc0(puVar6,puVar7,param_1);
      return;
    }
    fn_007a3fc0(puVar6,puVar6 + 0x70,param_1);
    for (puVar6 = puVar6 + 0x70; puVar6 != puVar7; puVar6 = puVar6 + 7) {
      uVar4 = (uint)local_38 >> 8;
      local_38 = CONCAT31((int3)uVar4,*(undefined1 *)puVar6);
      local_34 = puVar6[1];
      uStack_30 = puVar6[2];
      local_2c = puVar6[3];
      local_28 = puVar6[4];
      local_24 = puVar6[5];
      local_20 = puVar6[6];
      iVar5 = (**(code **)(**(int **)(param_1 + 8) + 8))
                        (*(int **)(param_1 + 8),&local_38,puVar6 + -7);
      puVar3 = puVar6 + -7;
      puVar2 = puVar6;
      while (puVar1 = puVar3, iVar5 != 0) {
        uVar8 = puVar1[1];
        uVar9 = puVar1[2];
        uVar10 = puVar1[3];
        uVar11 = puVar1[4];
        uVar12 = puVar1[5];
        uVar13 = puVar1[6];
        *puVar2 = *puVar1;
        puVar2[1] = uVar8;
        puVar2[2] = uVar9;
        puVar2[3] = uVar10;
        puVar2[4] = uVar11;
        puVar2[5] = uVar12;
        puVar2[6] = uVar13;
        iVar5 = (**(code **)(**(int **)(param_1 + 8) + 8))(*(int **)(param_1 + 8),&local_38);
        puVar3 = puVar1 + -7;
        puVar2 = puVar1;
      }
      *puVar2 = local_38;
      puVar2[1] = local_34;
      puVar2[2] = uStack_30;
      puVar2[3] = local_2c;
      puVar2[4] = local_28;
      puVar2[5] = local_24;
      puVar2[6] = local_20;
    }
  }
  return;
}



void fn_006ea16c(uint *param_1,int param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  
  if (*(char *)(param_2 + 0xd) == '\x01') {
    uVar2 = 0;
    uVar1 = fn_006eb200(param_3);
    *param_1 = (uVar1 & 0xff) << 8 | param_4 & 0xffff00ff;
    param_1[1] = uVar2;
    return;
  }
  fn_006ea99c();
  return;
}



/* WARNING: Removing unreachable block (ram,0x006ea0b8) */

void fn_006ea04c(uint *param_1,int param_2,ushort *param_3,int param_4,uint *param_5)

{
  int iVar1;
  uint **ppuVar2;
  ushort *puVar3;
  uint uVar4;
  uint uVar5;
  uint *local_30;
  uint uStack_2c;
  uint local_28;
  uint local_24;
  
  uVar5 = 0;
  if (*(char *)(param_2 + 0xd) == '\x01') {
    uVar4 = (uint)param_5 & 0xff;
    puVar3 = *(ushort **)(*(int *)(*(int *)(param_3 + 0x16) + 0x34) + (uint)*param_3 * 0x2c);
    if (puVar3 != (ushort *)0x0) {
      uVar4 = uVar4 | (uint)*puVar3 << 0x10;
    }
    uVar4 = uVar4 | (uint)(byte)param_3[3] << 8;
  }
  else {
    local_30 = param_5;
    fn_006ea87c(&local_28,param_2,param_3,param_4);
    uVar4 = local_28;
    uVar5 = local_24;
  }
  if (param_4 != 0) {
    iVar1 = fn_006ebf6c(param_4);
    local_30 = (uint *)(iVar1 + ((uVar4 & 0xffff) >> 8));
    uStack_2c = 0;
    local_28 = 0xff;
    ppuVar2 = (uint **)local_30;
    if ((int)local_30 < 0) {
      ppuVar2 = (uint **)&uStack_2c;
    }
    if (local_30 < (uint *)0x80000000) {
      ppuVar2 = &local_30;
    }
    if (0xff < (int)*ppuVar2) {
      ppuVar2 = (uint **)&local_28;
    }
    uVar4 = uVar4 & 0xffff00ff | (uint)(byte)*ppuVar2 << 8;
  }
  *param_1 = uVar4;
  param_1[1] = uVar5;
  return;
}



void fn_006ea028(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = fn_00156130(param_1 + 0x14,*param_2,*(undefined4 *)(param_1 + 0x5c),1);
  *param_2 = uVar1;
  return;
}



void fn_006ea01c(void)

{
  return;
}



int fn_006ea000(int param_1)

{
  return *(int *)(param_1 + 4) + 0x164;
}



int fn_006e9fd8(int param_1)

{
  return (*(int *)(*(int *)(param_1 + 4) + 0x188) - *(int *)(*(int *)(param_1 + 4) + 0x184)) / 0x28;
}



int fn_006e9fcc(int param_1)

{
  return *(int *)(param_1 + 4) + 0xc;
}


