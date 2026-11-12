#include "004a50e4_004a5840.h"



void fn_004a5840(void)

{
  int iVar1;
  
  iVar1 = fn_004a5870();
  if (iVar1 == 0) {
    return;
  }
  if (*(code **)(iVar1 + -8) == (code *)0x0) {
    fn_0030233c();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004a5860. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + -8))();
  return;
}



/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 * fn_004a5348(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint *puVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint uVar10;
  int iVar11;
  undefined4 *puVar12;
  uint uVar13;
  uint *puVar14;
  uint uVar15;
  undefined4 *puVar16;
  int *piVar17;
  undefined4 uVar18;
  uint local_40;
  uint local_3c;
  undefined *local_38;
  uint local_34;
  int local_30;
  undefined4 local_2c;
  
  *param_1 = &PTR_FUN_0085508c;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)((int)param_1 + 5) = 0;
  uVar2 = 0;
  if (DAT_008b637e != '\0') {
    puVar1 = (undefined4 *)fn_001775e8(DAT_008b63d8);
    uVar2 = *puVar1;
  }
  param_1[2] = uVar2;
  puVar1 = (undefined4 *)fn_004745d8(param_1 + 3,0x8000);
  puVar1[0xb] = 0xffffffff;
  *puVar1 = &PTR_LAB_00854110;
  piVar17 = puVar1 + 0xc;
  *piVar17 = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  local_40 = 0;
  local_3c = 0x20;
  puVar3 = (uint *)fn_0015ece0(0x180);
  *piVar17 = (int)puVar3;
  for (uVar10 = local_40; uVar10 != 0; uVar10 = uVar10 - 1) {
    if (puVar3 != (uint *)0x0) {
      *puVar3 = (uint)(puVar1 + -3) & 0xffff0000;
      puVar3[1] = 0;
      puVar3[2] = 0;
    }
    puVar3 = puVar3 + 3;
  }
  puVar1[0xd] = *piVar17 + local_40 * 0xc;
  puVar1[0xe] = *piVar17 + 0x180;
  iVar4 = fn_00101a1c(puVar1 + 0x11,&LAB_00787700,8,2);
  local_40 = local_40 & 0xffff0000;
  local_3c = 0;
  *(undefined4 *)(iVar4 + 0x10) = 0;
  *(undefined4 *)(iVar4 + 0x14) = 0;
  *(undefined4 *)(iVar4 + 0x18) = 0;
  local_30 = 0;
  local_2c = 0x20;
  puVar5 = (undefined2 *)fn_0015ece0(0x100);
  *(int *)(iVar4 + 0x10) = (int)puVar5;
  for (iVar11 = local_30; iVar11 != 0; iVar11 = iVar11 + -1) {
    if (puVar5 != (undefined2 *)0x0) {
      *puVar5 = (undefined2)local_40;
      *(uint *)(puVar5 + 2) = local_3c;
    }
    puVar5 = puVar5 + 4;
  }
  iVar11 = *(int *)(iVar4 + 0x10);
  *(int *)(iVar4 + 0x18) = iVar11 + 0x100;
  *(int *)(iVar4 + 0x14) = iVar11 + local_30 * 8;
  puVar1 = (undefined4 *)fn_004745d8(iVar4 + 0x1c,0x10000);
  *puVar1 = &PTR_LAB_00854110;
  puVar1[0xc] = &DAT_00855d20;
  puVar1 = (undefined4 *)fn_004745d8(puVar1 + 0xe,0x10000);
  *puVar1 = &PTR_LAB_00854110;
  *(undefined1 *)(puVar1 + 0xb) = 0;
  puVar6 = (undefined4 *)fn_0015ece0(8);
  if (puVar6 != (undefined4 *)0x0) {
    *puVar6 = 0;
    puVar6[1] = 0;
    *puVar6 = 0;
    puVar6[1] = 0;
  }
  puVar1[-1] = puVar6;
  puVar1[10] = 0;
  fn_0014ddb8(puVar6,(int)*(char *)(puVar1 + 0xb));
  puVar1 = (undefined4 *)fn_004745d8(puVar1 + 0xc,0x10000);
  puVar6 = puVar1 + -0x35;
  puVar3 = puVar1 + -0x26;
  *puVar1 = &PTR_LAB_00854110;
  local_40 = 2;
  if ((uint)((int)(puVar1[-0x24] - *puVar3) / 0xc) < 2) {
    uVar10 = (int)(puVar1[-0x25] - *puVar3) / 0xc;
    local_3c = uVar10 + (uVar10 >> 1) + (uVar10 >> 3);
    if (local_3c < uVar10 + 0x20) {
      local_3c = uVar10 + 0x20;
    }
    puVar14 = &local_40;
    if (2 < local_3c) {
      puVar14 = &local_3c;
    }
    uVar10 = *puVar14;
    puVar7 = (undefined4 *)fn_0015ece0(uVar10 * 0xc);
    puVar16 = (undefined4 *)puVar1[-0x25];
    puVar9 = puVar7;
    for (puVar12 = (undefined4 *)*puVar3; puVar12 != puVar16; puVar12 = puVar12 + 3) {
      if (puVar9 != (undefined4 *)0x0) {
        uVar2 = puVar12[1];
        uVar18 = puVar12[2];
        *puVar9 = *puVar12;
        puVar9[1] = uVar2;
        puVar9[2] = uVar18;
      }
      puVar9 = puVar9 + 3;
    }
    uVar8 = puVar1[-0x25];
    uVar13 = *puVar3;
    if (uVar13 < uVar8) {
      uVar15 = (int)(uVar8 - uVar13) / 0xc & 1;
    }
    else {
      uVar15 = 0;
    }
    for (iVar11 = uVar15 + 1; iVar11 < (int)(uVar8 - uVar13) / 0xc + 1; iVar11 = iVar11 + 2) {
    }
    if (uVar13 != 0) {
      if (*(code **)(uVar13 - 8) == (code *)0x0) {
        fn_0030233c(uVar13 - 8);
      }
      else {
        (**(code **)(uVar13 - 8))();
      }
    }
    uVar8 = *puVar3;
    *puVar3 = (uint)puVar7;
    puVar1[-0x25] = puVar7 + ((int)(puVar1[-0x25] - uVar8) / 0xc) * 3;
    puVar1[-0x24] = puVar7 + uVar10 * 3;
  }
  fn_0079a8b8(puVar1 + -0x1d,2);
  iVar11 = 0;
  do {
    puVar6[iVar11 + 0x25] = 0;
    iVar4 = fn_0015ece0(0x28);
    puVar12 = (undefined4 *)0x0;
    if (iVar4 != 0) {
      puVar12 = (undefined4 *)fn_004745d8(iVar4,0x10000);
      *puVar12 = &PTR_LAB_00854110;
    }
    puVar6[iVar11 + 0x12] = puVar12;
    *(undefined1 *)((int)puVar6 + iVar11 + 0x34) = 0;
    *(undefined1 *)((int)puVar6 + iVar11 + 0x36) = 0;
    iVar4 = iVar11 + 1;
    *(undefined2 *)(puVar6 + iVar11 * 2 + 0x14) = 0;
    puVar6[iVar11 * 2 + 0x15] = 0;
    iVar11 = iVar4;
  } while (iVar4 < 2);
  puVar12 = (undefined4 *)fn_0015ece0(0x34);
  if (puVar12 == (undefined4 *)0x0) {
    puVar1[10] = 0;
  }
  else {
    local_38 = &DAT_00855a94;
    fn_0015e6f0(&local_34,L"Transport Buffer Thread (send)");
    uVar2 = DAT_008b6438;
    *puVar12 = &DAT_008536ec;
    puVar12[1] = &DAT_00855a94;
    fn_0015e6f0(puVar12 + 2,local_34);
    puVar12[4] = 0;
    puVar12[5] = uVar2;
    puVar12[6] = 0;
    *(undefined1 *)(puVar12 + 7) = 0;
    *(undefined1 *)((int)puVar12 + 0x1e) = 0;
    puVar12[8] = 0x80000000;
    puVar9 = (undefined4 *)fn_0015ece0(0x10);
    if (puVar9 != (undefined4 *)0x0) {
      *puVar9 = 0;
      puVar9[1] = 0;
      *(undefined1 *)(puVar9 + 3) = 0;
    }
    puVar12[3] = puVar9;
    *puVar12 = &DAT_00852b8c;
    puVar12[0xb] = 0;
    puVar12[9] = 0;
    puVar12[10] = 0;
    puVar1[10] = puVar12;
    fn_00170f54(&local_38);
  }
  if (DAT_008b6444 != -0x80000000) {
    *(int *)(puVar1[10] + 0x20) = DAT_008b6444;
  }
  return puVar6;
}



void fn_004a521c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint extraout_r1;
  uint uVar5;
  uint extraout_r1_00;
  int iVar6;
  undefined4 local_18;
  
  local_18 = param_4;
  if ((char)param_1[1] == '\0') {
    *(undefined1 *)(param_1 + 1) = 1;
    iVar6 = param_1[0x10] - param_1[0xf] >> 0x1f;
    iVar4 = (param_1[0x10] - param_1[0xf]) / 0xc + iVar6;
    iVar6 = iVar4 - iVar6;
    if (0 < iVar6) {
      iVar4 = param_1[0xf];
    }
    iVar3 = 0;
    if (0 < iVar6) {
      do {
        iVar1 = iVar3 * 2;
        iVar2 = iVar3 * 0xc;
        iVar3 = iVar3 + 1;
        *(undefined2 *)((int)&local_18 + iVar1) = *(undefined2 *)(iVar4 + iVar2);
      } while (iVar3 < iVar6);
    }
    iVar4 = 0;
    if (0 < iVar6) {
      do {
        (**(code **)(*param_1 + 0x14))(param_1,*(undefined2 *)((int)&local_18 + iVar4 * 2));
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar6);
    }
    fn_0015dfc0(param_1[0x28]);
    if ((char)param_1[0x34] != '\0') {
      fn_0013c428(param_1[0x28]);
    }
    uVar5 = 0;
    if (*(char *)(param_1[0x3f] + 0x1c) != '\0') {
      fn_0047e514();
      uVar5 = extraout_r1;
    }
    iVar4 = 0;
    do {
      iVar6 = param_1[iVar4 + 0x25];
      if (iVar6 != 0) {
        uVar5 = (uint)*(byte *)(iVar6 + 0x1c);
      }
      if (iVar6 != 0 && uVar5 != 0) {
        fn_0047e514();
        uVar5 = extraout_r1_00;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 2);
  }
  return;
}



void fn_004a50e4(int param_1,undefined4 param_2,uint param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  ushort *puVar4;
  int *piVar5;
  
  if (DAT_008b637e != '\0') {
    fn_00477090(*(undefined4 *)(param_1 + 8));
  }
  cVar1 = *(char *)(param_1 + 4);
  while (cVar1 == '\0') {
    bVar2 = false;
    fn_00170704(param_1 + 0x74);
    puVar4 = *(ushort **)(param_1 + 0x60);
    if (*(ushort **)(param_1 + 100) != puVar4) {
      do {
        if (*(int *)(puVar4 + 2) != 0) {
          param_3 = *(uint *)(param_1 + 0x38);
        }
        if ((*(int *)(puVar4 + 2) != 0 && param_3 != *puVar4) &&
           (iVar3 = fn_004a7300(), iVar3 != 0)) {
          bVar2 = true;
        }
        puVar4 = puVar4 + 4;
      } while (*(ushort **)(param_1 + 100) != puVar4);
    }
    fn_001707b4(param_1 + 0x74);
    if (*(char *)(param_1 + 5) != '\0') {
      fn_00735640(2000000,0);
    }
    if (!bVar2) {
      fn_00170704(param_1 + 0xdc);
      piVar5 = (int *)(param_1 + 0xd4);
      fn_00170704(param_1 + 0xac);
      *(int *)(param_1 + 0xcc) = *(int *)(param_1 + 0xcc) + 1;
      fn_001707b4(param_1 + 0xac);
      (**(code **)(*piVar5 + 0xc))(piVar5);
      fn_0015def0(*(undefined4 *)(param_1 + 0xa0));
      (**(code **)(*piVar5 + 8))(piVar5);
      fn_00170704(param_1 + 0xac);
      *(int *)(param_1 + 0xcc) = *(int *)(param_1 + 0xcc) + -1;
      fn_001707b4(param_1 + 0xac);
      fn_001707b4(param_1 + 0xdc);
    }
    cVar1 = *(char *)(param_1 + 4);
  }
  return;
}


