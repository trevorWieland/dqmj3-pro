#include "003c6444_003c700ca.h"



undefined4 fn_003c6a6c(int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  uint *puVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined2 *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  bool bVar11;
  bool bVar12;
  undefined4 local_8c;
  undefined4 local_88;
  int local_84;
  undefined4 *local_70;
  undefined1 auStack_64 [12];
  undefined4 local_58;
  undefined1 auStack_50 [32];
  uint local_30;
  uint uStack_2c;
  undefined4 *local_28;
  
  puVar10 = (undefined4 *)param_1[6];
  if (puVar10 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar10)(puVar10);
    do {
      if (puVar1 == &DAT_00893b10) goto LAB_003c6ab4;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar10 = (undefined4 *)0x0;
LAB_003c6ab4:
  param_1[0x39] = (int)puVar10;
  local_28 = (undefined4 *)fn_001f74d8(param_1,0xed);
  if (local_28 != (undefined4 *)0x0) {
    puVar10 = (undefined4 *)(**(code **)*local_28)(local_28);
    do {
      if (puVar10 == &DAT_008969e0) goto LAB_003c6af8;
      puVar10 = (undefined4 *)*puVar10;
    } while (puVar10 != (undefined4 *)0x0);
  }
  local_28 = (undefined4 *)0x0;
LAB_003c6af8:
  fn_00397774(&local_8c);
  local_8c = DAT_00896748;
  local_88 = DAT_0089674c;
  local_84 = 6;
  puVar10 = (undefined4 *)fn_0022f584((char *)&DAT_003c6e44,0);
  uVar2 = fn_00100b58();
  puVar1 = &DAT_008f9ce8;
  if (uVar2 == 0) {
    piVar4 = local_70 + -3;
    iVar7 = *piVar4;
    if (iVar7 != 0) {
      if ((local_70 != &DAT_008f9cf4) &&
         ((iVar7 == -1 || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar7 + -1, iVar7 == 0)))))) {
        fn_001008c4(local_70 + -3,local_70[-2] + 8,0);
      }
      local_70 = &DAT_008f9cf4;
      goto LAB_003c6d48;
    }
    local_70[-1] = 0;
    puVar10 = local_70;
  }
  else {
    uVar8 = local_70[-3] + 1;
    bVar12 = local_70[-3] != -1;
    bVar11 = uVar8 == 1;
    if (uVar8 < 2) {
      bVar12 = (uint)local_70[-2] <= uVar2;
      bVar11 = uVar2 == local_70[-2];
    }
    if (bVar12 && !bVar11) {
LAB_003c6b98:
      uVar8 = local_70[-1];
      uVar9 = uVar8 + (uVar8 >> 1) + (uVar8 >> 3);
      local_30 = uVar8 + 0x80;
      if (uVar8 + 0x80 <= uVar9) {
        local_30 = uVar9;
      }
      puVar3 = &uStack_2c;
      if (uVar2 <= local_30) {
        puVar3 = &local_30;
      }
      uStack_2c = uVar2;
      uVar8 = *puVar3;
      if (0xfffffff1 < uVar8) {
        fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar8,0xfffffff1);
      }
      if (uVar8 < uVar2) {
        fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar2,uVar8);
      }
      if (uVar8 != 0) {
        puVar1 = (undefined4 *)fn_00100fc6((uVar8 + 8) * 2,0);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = 0;
          puVar1[1] = 0;
          puVar1[2] = 0;
        }
        puVar1[2] = uVar2;
        puVar6 = (undefined2 *)((int)puVar1 + uVar2 * 2 + 0xc);
        *puVar1 = 0;
        puVar1[1] = uVar8;
        if (puVar6 != (undefined2 *)0x0) {
          *puVar6 = 0;
        }
      }
      fn_00301a9c(puVar1 + 3,puVar10,uVar2 << 1);
      if (local_70 != &DAT_008f9cf4) {
        piVar4 = local_70 + -3;
        iVar7 = *piVar4;
        if ((iVar7 == -1) || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar7 + -1, iVar7 == 0)))) {
          fn_001008c4(local_70 + -3,local_70[-2] + 8,0);
        }
      }
      local_70 = puVar1 + 3;
      goto LAB_003c6d48;
    }
    if (puVar10 != (undefined4 *)0x0) {
      bVar11 = puVar10 <= local_70;
      if (local_70 <= puVar10) {
        bVar11 = (undefined4 *)((int)local_70 + local_70[-1] * 2) <= puVar10;
      }
      if (!bVar11) goto LAB_003c6b98;
    }
    fn_001006ac(local_70,puVar10,uVar2);
    local_70[-1] = uVar2;
    puVar10 = (undefined4 *)((int)local_70 + uVar2 * 2);
  }
  *(undefined2 *)puVar10 = 0;
LAB_003c6d48:
  local_58 = 1;
  fn_00397618(param_1,&local_8c);
  uVar5 = fn_0022f584((char *)&DAT_003c6e6c,0);
  (**(code **)(*param_1 + 0x13c))(param_1,0,0,uVar5);
  iVar7 = 0;
  if (0 < local_84) {
    do {
      uVar5 = fn_0058417c(local_28,iVar7);
      uVar5 = fn_0022f584(uVar5,0);
      fn_0031b78c(param_1,iVar7,0,uVar5);
      iVar7 = iVar7 + 1;
    } while (iVar7 < local_84);
  }
  fn_00689930(param_1,0xed,0);
  fn_00100414(auStack_50,&LAB_0059e0e0,8,4);
  iVar7 = fn_001588d4(auStack_64);
  iVar7 = fn_001588d4(iVar7 + -4);
  iVar7 = fn_001588d4(iVar7 + -4);
  fn_001588d4(iVar7 + -4);
  return 1;
}



undefined1 * fn_003c6698(int param_1,int param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [12];
  
  puVar1 = (undefined1 *)fn_006be0f4(*(undefined4 *)(param_1 + 0x1a8));
  puVar4 = puVar1;
  if (((char)puVar1[0x514] != -1) &&
     (puVar4 = puVar1 + (char)puVar1[0x514] * 0xf0,
     puVar1 + (char)puVar1[0x514] * 0xf0 != (undefined1 *)0xfffffeac)) {
    fn_0020bbc4(auStack_20);
    if (*(int *)(param_1 + 0x19c) != -1) {
      (**(code **)(**(int **)(param_1 + 0x7c) + 0xc))();
    }
    iVar5 = *(int *)(*(int *)(*(int *)(param_1 + 0x1ac) + param_2 * 4) + 0x148);
    fn_006bfe90(auStack_1c);
    fn_002cd59c();
    fn_006bfda8(auStack_1c);
    iVar2 = fn_00242b6c();
    if (iVar2 == 0) {
      uVar3 = fn_0017fde4(*(undefined4 *)(iVar5 + 0x14));
      uVar3 = fn_0016a9b0(*(undefined4 *)(param_1 + 0x7c),0xc742,uVar3,0);
      *(undefined4 *)(param_1 + 0x19c) = uVar3;
    }
    else if (iVar2 == 1) {
      uVar3 = fn_0017fde4(*(undefined4 *)(iVar5 + 0x14));
      uVar3 = fn_0016a9b0(*(undefined4 *)(param_1 + 0x7c),0xc741,uVar3,1);
      *(undefined4 *)(param_1 + 0x19c) = uVar3;
    }
    else if (iVar2 == 2) {
      uVar3 = fn_0017fde4(*(undefined4 *)(iVar5 + 0x14));
      uVar3 = fn_0016a9b0(*(undefined4 *)(param_1 + 0x7c),0xc740,uVar3,2);
      *(undefined4 *)(param_1 + 0x19c) = uVar3;
    }
    fn_0023dd30(*(undefined4 *)(param_1 + 0x7c),*(undefined4 *)(param_1 + 0x19c));
    puVar4 = auStack_20;
  }
  return puVar4;
}



void fn_003c65e0(int *param_1)

{
  int iVar1;
  
  if ((char)param_1[3] == '\x03') {
    if (param_1[0x1c] == 0) {
      (**(code **)(*param_1 + 0x108))(param_1,0);
    }
    (**(code **)(*param_1 + 0x108))(param_1,1);
    if (*(char *)((int)param_1 + 0x6a) != (char)param_1[0x1a]) {
      (**(code **)(*param_1 + 0x108))(param_1,2);
    }
    iVar1 = param_1[0x1a];
    param_1[0x1b] = param_1[0x1b] + 1;
    *(char *)((int)param_1 + 0x69) = (char)iVar1;
    *(char *)(param_1 + 0x1a) = *(char *)((int)param_1 + 0x6a);
    if ((char)iVar1 == *(char *)((int)param_1 + 0x6a)) {
      iVar1 = param_1[0x1c] + 1;
    }
    else {
      iVar1 = 0;
    }
    param_1[0x1c] = iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x003c6608. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x108))(param_1,3);
  return;
}



void fn_003c6444(int param_1)

{
  int iVar1;
  int iVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [28];
  
  fVar5 = *(float *)(param_1 + 0xa8) - *(float *)(param_1 + 0x9c);
  fVar4 = *(float *)(param_1 + 0xb0) - *(float *)(param_1 + 0xa4);
  fVar3 = *(float *)(param_1 + 0xac) - *(float *)(param_1 + 0xa0);
  fVar9 = 0.01;
  fVar8 = 0.0;
  fVar6 = 1.0 / SQRT(fVar5 * fVar5 + fVar3 * fVar3 + fVar4 * fVar4);
  uVar7 = CONCAT44(fVar3 * fVar6,fVar5 * fVar6);
  fVar4 = fVar4 * fVar6;
  iVar1 = fn_006be0f4(*(undefined4 *)(param_1 + 0x1a8));
  if ((*(char *)(iVar1 + 0x514) != -1) && (iVar1 + *(char *)(iVar1 + 0x514) * 0xf0 != -0x154)) {
    fn_0020bbc4(auStack_30);
    fn_006bfda8(auStack_2c);
    iVar1 = fn_00242a30();
    iVar2 = fn_006bfe90(auStack_2c);
    fVar3 = (float)VectorSignedToFloat(*(undefined4 *)(&DAT_007c89e4 + iVar2 * 4),
                                       (byte)(in_fpscr >> 0x16) & 3);
    fVar8 = (float)VectorUnsignedToFloat((uint)*(byte *)(iVar1 + 2),(byte)(in_fpscr >> 0x16) & 3);
    fVar8 = fVar3 * fVar9 * fVar8;
  }
  fVar8 = fVar8 * fVar9;
  *(float *)(param_1 + 0xa4) = *(float *)(param_1 + 0xa4) + fVar4 * fVar8;
  *(float *)(param_1 + 0x9c) = *(float *)(param_1 + 0x9c) + (float)uVar7 * fVar8;
  *(float *)(param_1 + 0xa0) =
       *(float *)(param_1 + 0xa0) + (float)((ulonglong)uVar7 >> 0x20) * fVar8;
  return;
}


