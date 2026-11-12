#include "00668320_00668814.h"



/* WARNING: Removing unreachable block (ram,0x0014f0d0) */
/* WARNING: Removing unreachable block (ram,0x0014f0e8) */
/* WARNING: Removing unreachable block (ram,0x0014ef7c) */
/* WARNING: Removing unreachable block (ram,0x0014ef80) */
/* WARNING: Removing unreachable block (ram,0x0014ef84) */
/* WARNING: Removing unreachable block (ram,0x0014ef88) */
/* WARNING: Removing unreachable block (ram,0x0014ef8c) */
/* WARNING: Removing unreachable block (ram,0x0014efdc) */
/* WARNING: Removing unreachable block (ram,0x0014efe0) */
/* WARNING: Removing unreachable block (ram,0x0014efe4) */
/* WARNING: Removing unreachable block (ram,0x0014efe8) */
/* WARNING: Removing unreachable block (ram,0x0014efec) */
/* WARNING: Removing unreachable block (ram,0x0014f010) */
/* WARNING: Removing unreachable block (ram,0x0014f01c) */
/* WARNING: Removing unreachable block (ram,0x0014f060) */
/* WARNING: Removing unreachable block (ram,0x0014f064) */
/* WARNING: Removing unreachable block (ram,0x0014f068) */
/* WARNING: Removing unreachable block (ram,0x0014f06c) */
/* WARNING: Removing unreachable block (ram,0x0014f070) */
/* WARNING: Removing unreachable block (ram,0x0014f08c) */
/* WARNING: Removing unreachable block (ram,0x0014f09c) */
/* WARNING: Removing unreachable block (ram,0x0014f0fc) */
/* WARNING: Removing unreachable block (ram,0x0014f0c0) */
/* WARNING: Removing unreachable block (ram,0x0014f0b0) */
/* WARNING: Removing unreachable block (ram,0x0014f0c8) */
/* WARNING: Removing unreachable block (ram,0x0014f0a0) */
/* WARNING: Removing unreachable block (ram,0x0014f0ec) */
/* WARNING: Removing unreachable block (ram,0x0014f0f4) */

void fn_00668814(int param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  uint uVar11;
  undefined1 *puVar12;
  bool bVar13;
  uint local_30 [5];
  
  if (*(uint *)(param_1 + 0x5a4) <= param_2) {
    return;
  }
  puVar7 = (undefined4 *)**(undefined4 **)(param_1 + 0x5a0);
  if (param_2 != 0) {
    if (param_2 < 0x80000000) {
      if (0 < (int)param_2) {
        if ((param_2 & 1) != 0) {
          puVar7 = (undefined4 *)*puVar7;
        }
        for (iVar6 = (int)param_2 >> 1; iVar6 != 0; iVar6 = iVar6 + -1) {
          puVar7 = *(undefined4 **)*puVar7;
        }
      }
    }
    else {
      do {
        puVar7 = (undefined4 *)*puVar7;
        param_2 = param_2 - 1;
      } while (param_2 != 0);
    }
  }
  iVar6 = puVar7[3];
  *param_3 = *(undefined4 *)(iVar6 + 8);
  puVar7 = param_3 + 1;
  puVar8 = (undefined1 *)0x0;
  puVar9 = (undefined1 *)0x0;
  *puVar7 = *(undefined4 *)(iVar6 + 0x34);
  *(undefined2 *)(param_3 + 2) = *(undefined2 *)(iVar6 + 0x16);
  *(undefined1 *)((int)param_3 + 10) = *(undefined1 *)(iVar6 + 0x48);
  param_3[3] = *(undefined4 *)(iVar6 + 0xa8);
  puVar10 = *(undefined1 **)(iVar6 + 0x4c);
  puVar12 = *(undefined1 **)(iVar6 + 0x50);
  if (puVar10 != puVar12) {
    uVar11 = (int)puVar12 - (int)puVar10;
    if (uVar11 == 0) {
      puVar9 = (undefined1 *)0x0;
      do {
        if (puVar9 != (undefined1 *)0x0) {
          *puVar9 = *puVar10;
        }
        puVar10 = puVar10 + 1;
        puVar9 = puVar9 + 1;
      } while (puVar10 != puVar12);
      puVar9 = (undefined1 *)0x0;
    }
    else {
      puVar3 = local_30 + 1;
      if (0x1f < uVar11) {
        puVar3 = local_30;
      }
      local_30[0] = uVar11;
      local_30[1] = 0x20;
      puVar8 = (undefined1 *)fn_0015ece0(*puVar3);
      puVar9 = puVar8;
      for (; puVar10 != puVar12; puVar10 = puVar10 + 1) {
        if (puVar9 != (undefined1 *)0x0) {
          *puVar9 = *puVar10;
        }
        puVar9 = puVar9 + 1;
      }
      fn_0014f1bc(0);
      puVar9 = puVar8 + uVar11;
    }
  }
  iVar4 = (int)puVar9 - (int)puVar8;
  bVar13 = iVar4 == 0x100;
  iVar5 = iVar4;
  if (0x100 < iVar4) {
    iVar5 = 0x100;
  }
  iVar1 = iVar4 + -0x100;
  if (0x100 >= iVar4) {
    bVar13 = iVar5 == 0;
    iVar1 = iVar5;
  }
  if (!bVar13 && iVar1 < 0 == (0x100 < iVar4 && SBORROW4(iVar4,0x100))) {
    puVar10 = puVar8;
    iVar4 = 0;
    do {
      iVar5 = iVar5 + -1;
      *(undefined1 *)((int)puVar7 + iVar4 + 0xc) = *puVar10;
      puVar10 = puVar10 + 1;
      iVar4 = iVar4 + 1;
    } while (iVar5 != 0);
  }
  iVar5 = 0;
  do {
    uVar2 = fn_006d1a88(iVar6,iVar5);
    iVar4 = iVar5 + 1;
    puVar7[iVar5 + 0x43] = uVar2;
    iVar5 = iVar4;
  } while (iVar4 < 4);
  puVar10 = puVar8;
  if (puVar8 < puVar9) {
    if (0 < (int)puVar9 - (int)puVar8) {
      for (iVar6 = (int)puVar9 - (int)puVar8 >> 1; iVar6 != 0; iVar6 = iVar6 + -1) {
      }
    }
  }
  else {
    for (; puVar10 != puVar9; puVar10 = puVar10 + 1) {
    }
  }
  if (puVar8 == (undefined1 *)0x0) {
    return;
  }
  if (*(code **)(puVar8 + -8) == (code *)0x0) {
    fn_0030233c();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0014f1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(puVar8 + -8))();
  return;
}



/* WARNING: Removing unreachable block (ram,0x00668370) */
/* WARNING: Removing unreachable block (ram,0x00668374) */
/* WARNING: Removing unreachable block (ram,0x00668378) */
/* WARNING: Removing unreachable block (ram,0x00668584) */
/* WARNING: Removing unreachable block (ram,0x00668590) */
/* WARNING: Removing unreachable block (ram,0x0066840c) */
/* WARNING: Removing unreachable block (ram,0x0066855c) */
/* WARNING: Removing unreachable block (ram,0x00668560) */
/* WARNING: Removing unreachable block (ram,0x0066856c) */
/* WARNING: Removing unreachable block (ram,0x006685ac) */
/* WARNING: Removing unreachable block (ram,0x006685bc) */
/* WARNING: Removing unreachable block (ram,0x00668594) */
/* WARNING: Removing unreachable block (ram,0x00668404) */
/* WARNING: Removing unreachable block (ram,0x006683d8) */
/* WARNING: Removing unreachable block (ram,0x006683e8) */
/* WARNING: Removing unreachable block (ram,0x006683f4) */
/* WARNING: Removing unreachable block (ram,0x006683f8) */
/* WARNING: Removing unreachable block (ram,0x00668414) */
/* WARNING: Removing unreachable block (ram,0x0066859c) */
/* WARNING: Removing unreachable block (ram,0x006685a0) */
/* WARNING: Removing unreachable block (ram,0x006685a4) */
/* WARNING: Removing unreachable block (ram,0x006685fc) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffed4 : 0x00668604 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 fn_00668320(int param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 local_138;
  undefined4 local_12c;
  undefined *local_58;
  undefined1 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 local_48;
  undefined1 local_47;
  undefined1 *local_44;
  undefined1 *local_40;
  undefined1 *local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined *local_2c;
  
  local_30 = 0;
  local_2c = &DAT_0085436c;
  local_58 = &DAT_0085436c;
  local_54 = 0;
  local_44 = (undefined1 *)0x0;
  local_40 = (undefined1 *)0x0;
  local_3c = (undefined1 *)0x0;
  puVar1 = (undefined1 *)fn_0015ece0();
  local_3c = puVar1 + 0x20;
  local_58 = &DAT_00853730;
  local_50 = 0;
  local_4c = 0;
  local_48 = 1;
  local_47 = 0;
  local_44 = puVar1;
  if ((uint)((int)local_3c - (int)puVar1) < 4) {
    local_138 = 4;
    local_12c = 0x20;
    local_40 = puVar1;
    puVar10 = (undefined1 *)fn_0015ece0(0x20);
    puVar9 = puVar10;
    for (puVar2 = local_44; puVar2 != puVar1; puVar2 = puVar2 + 1) {
      if (puVar9 != (undefined1 *)0x0) {
        *puVar9 = *puVar2;
      }
      puVar9 = puVar9 + 1;
    }
    iVar5 = 4;
    puVar2 = puVar10 + ((int)puVar1 - (int)local_44);
    do {
      if (puVar2 != (undefined1 *)0x0) {
        *puVar2 = 0;
      }
      iVar5 = iVar5 + -1;
      puVar2 = puVar2 + 1;
    } while (iVar5 != 0);
    puVar2 = puVar10 + (int)(puVar1 + (4 - (int)local_44));
    for (; puVar1 != local_40; puVar1 = puVar1 + 1) {
      if (puVar2 != (undefined1 *)0x0) {
        *puVar2 = *puVar1;
      }
      puVar2 = puVar2 + 1;
    }
    iVar5 = (int)local_40 - (int)local_44;
    puVar1 = local_44;
    if (local_44 < local_40) {
      if (0 < iVar5) {
        for (iVar4 = iVar5 >> 1; iVar4 != 0; iVar4 = iVar4 + -1) {
        }
      }
    }
    else {
      for (; puVar1 != local_40; puVar1 = puVar1 + 1) {
      }
    }
    fn_0014f1bc(local_44);
    local_3c = puVar10 + 0x20;
    local_40 = puVar10 + iVar5 + 4;
    local_44 = puVar10;
  }
  else {
    local_40 = puVar1 + 4;
    puVar2 = puVar1 + 4;
    if (puVar2 < puVar1) {
      puVar8 = puVar1 + -4;
      puVar10 = puVar1;
      for (puVar9 = puVar8; puVar9 != puVar1; puVar9 = puVar9 + 1) {
        if (puVar10 != (undefined1 *)0x0) {
          *puVar10 = *puVar9;
        }
        puVar10 = puVar10 + 1;
      }
      puVar9 = puVar1;
      if (puVar1 < puVar8) {
        uVar3 = (int)puVar8 - (int)puVar1;
        if (0 < (int)uVar3) {
          if ((uVar3 & 1) != 0) {
            puVar8 = puVar1 + -5;
            puVar9 = puVar1 + -1;
            *puVar9 = *puVar8;
          }
          for (iVar5 = (int)uVar3 >> 1; iVar5 != 0; iVar5 = iVar5 + -1) {
            puVar9[-1] = puVar8[-1];
            puVar8 = puVar8 + -2;
            puVar9 = puVar9 + -2;
            *puVar9 = *puVar8;
          }
        }
      }
      else {
        while (puVar1 != puVar8) {
          puVar8 = puVar8 + -1;
          puVar9[-1] = *puVar8;
          puVar9 = puVar9 + -1;
        }
      }
      if (puVar1 < puVar2) {
        uVar3 = (int)puVar2 - (int)puVar1;
        if (0 < (int)uVar3) {
          puVar2 = puVar1;
          if ((uVar3 & 1) != 0) {
            puVar2 = puVar1 + 1;
            *puVar1 = 0;
          }
          for (iVar5 = (int)uVar3 >> 1; iVar5 != 0; iVar5 = iVar5 + -1) {
            puVar1 = puVar2 + 1;
            *puVar2 = 0;
            puVar2 = puVar2 + 2;
            *puVar1 = 0;
          }
        }
      }
      else {
        for (; puVar1 != puVar2; puVar1 = puVar1 + 1) {
          *puVar1 = 0;
        }
      }
    }
    else {
      iVar5 = 4;
      do {
        if (puVar1 != (undefined1 *)0x0) {
          *puVar1 = 0;
        }
        iVar5 = iVar5 + -1;
        puVar1 = puVar1 + 1;
      } while (iVar5 != 0);
    }
  }
  local_50 = *(undefined4 *)(param_1 + 0x438);
  local_4c = *(undefined4 *)(param_1 + 0x43c);
  local_48 = *(int *)(param_1 + 0x440) != 0;
  local_47 = *(int *)(param_1 + 0x444) != 0;
  *local_44 = *(undefined1 *)(param_1 + 0x448);
  local_44[1] = *(undefined1 *)(param_1 + 0x449);
  local_38 = *(undefined4 *)(param_1 + 0x450);
  uStack_34 = *(undefined4 *)(param_1 + 0x454);
  if (*(char *)(*(int *)(param_1 + 0x9c) + 0x10) != '\x01') {
    fn_00456400();
  }
  local_158 = 0;
  uStack_154 = 0;
  iVar5 = fn_00491ed4(*(undefined4 *)(param_1 + 0x94),*(undefined4 *)(param_1 + 0x9c),&local_58);
  if (iVar5 == 0) {
    local_30 = 0xffffffff;
    uVar6 = fn_0045a590();
    uVar7 = fn_00482b9c();
    *(undefined4 *)(param_1 + 0x74) = uVar7;
    *(undefined4 *)(param_1 + 0x78) = 1;
    *(undefined1 *)(param_1 + 0x7c) = 1;
    fn_0045a3b0(uVar6,&local_158,0x80);
    fn_0045a5b0();
  }
  else {
    fn_004562e0(*(undefined4 *)(param_1 + 0x9c),0xffffffff);
  }
  uVar6 = local_30;
  local_58 = local_2c;
  fn_004b93c4(&local_44);
  return uVar6;
}


