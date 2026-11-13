#include "00571b24_005726e0aa.h"



void fn_00571f58(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x20,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00571f88(iVar1,param_1);
  return;
}



void fn_00571b24(int param_1)

{
  undefined *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  int *piVar5;
  undefined2 *puVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  uint uVar10;
  uint *puVar11;
  int *piVar12;
  uint uVar13;
  bool bVar14;
  bool bVar15;
  uint local_4c;
  uint local_48 [3];
  uint local_3c;
  uint auStack_38 [5];
  
  piVar12 = (int *)(param_1 + 0x10);
  uVar2 = fn_00100b58(&DAT_00571eb0);
  puVar3 = (undefined4 *)*piVar12;
  if (uVar2 == 0) {
    piVar5 = puVar3 + -3;
    iVar7 = *piVar5;
    if (iVar7 == 0) {
      puVar3[-1] = 0;
      puVar6 = (undefined2 *)*piVar12;
      goto LAB_00571d34;
    }
    if ((puVar3 != &DAT_008f9cf4) &&
       ((iVar7 == -1 || ((piVar5 != &DAT_008f9ce8 && (*piVar5 = iVar7 + -1, iVar7 == 0)))))) {
      fn_001008c4(*piVar12 + -0xc,*(int *)(*piVar12 + -8) + 8,0);
    }
    *piVar12 = (int)&DAT_008f9cf4;
  }
  else {
    uVar13 = puVar3[-3] + 1;
    bVar15 = puVar3[-3] != -1;
    bVar14 = uVar13 == 1;
    if (uVar13 < 2) {
      bVar15 = (uint)puVar3[-2] <= uVar2;
      bVar14 = uVar2 == puVar3[-2];
    }
    if ((bVar15 && !bVar14) ||
       ((puVar3 < &UNK_00571eb1 && (&DAT_00571eb0 < (undefined *)((int)puVar3 + puVar3[-1] * 2)))))
    {
      uVar13 = puVar3[-1];
      local_4c = uVar13 + (uVar13 >> 1) + (uVar13 >> 3);
      if (local_4c < uVar13 + 0x80) {
        local_4c = uVar13 + 0x80;
      }
      puVar11 = local_48;
      if (uVar2 <= local_4c) {
        puVar11 = &local_4c;
      }
      local_48[0] = uVar2;
      uVar13 = *puVar11;
      if (0xfffffff1 < uVar13) {
        fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar13,0xfffffff1);
      }
      if (uVar13 < uVar2) {
        fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar2,uVar13);
      }
      if (uVar13 == 0) {
        puVar3 = &DAT_008f9ce8;
      }
      else {
        puVar3 = (undefined4 *)fn_00100fc6((uVar13 + 8) * 2,0);
        if (puVar3 != (undefined4 *)0x0) {
          *puVar3 = 0;
          puVar3[1] = 0;
          puVar3[2] = 0;
        }
        puVar3[2] = uVar2;
        puVar6 = (undefined2 *)((int)puVar3 + uVar2 * 2 + 0xc);
        *puVar3 = 0;
        puVar3[1] = uVar13;
        if (puVar6 != (undefined2 *)0x0) {
          *puVar6 = 0;
        }
      }
      fn_00301a9c(puVar3 + 3,&DAT_00571eb0,uVar2 << 1);
      if ((undefined4 *)*piVar12 != &DAT_008f9cf4) {
        piVar5 = (undefined4 *)*piVar12 + -3;
        iVar7 = *piVar5;
        if ((iVar7 == -1) || ((piVar5 != &DAT_008f9ce8 && (*piVar5 = iVar7 + -1, iVar7 == 0)))) {
          fn_001008c4(*piVar12 + -0xc,*(int *)(*piVar12 + -8) + 8,0);
        }
      }
      *piVar12 = (int)(puVar3 + 3);
    }
    else {
      fn_001006ac(puVar3,&DAT_00571eb0,uVar2);
      *(uint *)(*piVar12 + -4) = uVar2;
      puVar6 = (undefined2 *)(*piVar12 + uVar2 * 2);
LAB_00571d34:
      *puVar6 = 0;
    }
  }
  piVar12 = (int *)(param_1 + 0x14);
  uVar2 = fn_002febd8(&DAT_00571eb0);
  puVar3 = &DAT_008f9cf8;
  puVar4 = (undefined *)*piVar12;
  if (uVar2 == 0) {
    piVar5 = (int *)(puVar4 + -0xc);
    iVar7 = *piVar5;
    if (iVar7 != 0) {
      if ((puVar4 != &DAT_008f9d04) &&
         ((iVar7 == -1 || ((piVar5 != &DAT_008f9cf8 && (*piVar5 = iVar7 + -1, iVar7 == 0)))))) {
        fn_001008c4(*piVar12 + -0xc,*(int *)(*piVar12 + -8) + 0xe,0);
      }
      *piVar12 = (int)&DAT_008f9d04;
      goto LAB_00571f48;
    }
    *(undefined4 *)(puVar4 + -4) = 0;
    puVar8 = (undefined1 *)*piVar12;
LAB_00571f44:
    *puVar8 = 0;
  }
  else {
    local_48[0] = uVar2;
    uVar13 = *(int *)(puVar4 + -0xc) + 1;
    bVar15 = *(int *)(puVar4 + -0xc) != -1;
    bVar14 = uVar13 == 1;
    if (uVar13 < 2) {
      bVar15 = *(uint *)(puVar4 + -8) <= uVar2;
      bVar14 = uVar2 == *(uint *)(puVar4 + -8);
    }
    if (!bVar15 || bVar14) {
      puVar9 = puVar4;
      puVar1 = *(undefined **)(puVar4 + -4);
      if (&DAT_00571eb0 >= puVar4) {
        puVar9 = *(undefined **)(puVar4 + -4) + (int)puVar4;
        puVar1 = puVar9;
      }
      if ((&DAT_00571eb0 < puVar4 || puVar1 < &DAT_00571eb0) || puVar9 == &DAT_00571eb0) {
        fn_00301b24(puVar4,&DAT_00571eb0,uVar2);
        *(uint *)(*piVar12 + -4) = uVar2;
        puVar8 = (undefined1 *)(*piVar12 + uVar2);
        goto LAB_00571f44;
      }
    }
    uVar13 = *(uint *)(puVar4 + -4);
    uVar10 = uVar13 + (uVar13 >> 1) + (uVar13 >> 3);
    local_3c = uVar13 + 0x80;
    if (uVar13 + 0x80 <= uVar10) {
      local_3c = uVar10;
    }
    puVar11 = auStack_38;
    if (uVar2 <= local_3c) {
      puVar11 = &local_3c;
    }
    auStack_38[0] = uVar2;
    uVar13 = *puVar11;
    if (0xfffffff1 < uVar13) {
      fn_002ff628(8,&DAT_008c7615,&DAT_008c7615,uVar13,0xfffffff1);
    }
    if (uVar13 < uVar2) {
      fn_002ff628(8,&DAT_008c7615,&DAT_008c7615,uVar2,uVar13);
    }
    if (uVar13 != 0) {
      puVar3 = (undefined4 *)fn_00100fc6(uVar13 + 0xe,0);
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
      }
      puVar3[2] = uVar2;
      puVar8 = (undefined1 *)((int)puVar3 + uVar2 + 0xc);
      *puVar3 = 0;
      puVar3[1] = uVar13;
      if (puVar8 != (undefined1 *)0x0) {
        *puVar8 = 0;
      }
    }
    fn_00301a9c(puVar3 + 3,&DAT_00571eb0,local_48[0]);
    if ((undefined1 *)*piVar12 != &DAT_008f9d04) {
      piVar5 = (int *)((undefined1 *)*piVar12 + -0xc);
      iVar7 = *piVar5;
      if ((iVar7 == -1) || ((piVar5 != &DAT_008f9cf8 && (*piVar5 = iVar7 + -1, iVar7 == 0)))) {
        fn_001008c4(*piVar12 + -0xc,*(int *)(*piVar12 + -8) + 0xe,0);
      }
    }
    *piVar12 = (int)(puVar3 + 3);
  }
LAB_00571f48:
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  return;
}


