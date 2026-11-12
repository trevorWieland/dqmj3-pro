#include "0046cd70_0046d15c.h"



/* WARNING: Removing unreachable block (ram,0x0046d388) */
/* WARNING: Removing unreachable block (ram,0x0046d394) */

undefined4 fn_0046d15c(int param_1,uint param_2)

{
  int iVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint *puVar12;
  uint uVar13;
  undefined *local_40;
  undefined4 local_3c;
  int *local_38;
  undefined *local_34;
  undefined *local_30;
  uint local_2c;
  
  local_38 = (int *)(param_1 + 4);
  (**(code **)(*local_38 + 8))();
  if (*(char *)(param_1 + 0x2c) != '\x02') {
    (**(code **)(*local_38 + 0xc))();
    return 0;
  }
  uVar13 = 0;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  if (param_2 != 0) {
    local_34 = &DAT_008536ec;
    local_30 = &DAT_00852b50;
    do {
      local_40 = &DAT_00855a94;
      fn_0015e6f0(&local_3c,&DAT_007db524);
      fn_004b6230(&local_40,L"WorkerThread ID %d",uVar13 + 1);
      puVar3 = (undefined4 *)fn_0015ece0(0x34);
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = local_34;
        puVar3[1] = &DAT_00855a94;
        fn_0015e6f0(puVar3 + 2,local_3c);
        puVar3[4] = 0;
        puVar3[6] = 0;
        *(undefined1 *)(puVar3 + 7) = 0;
        *(undefined1 *)((int)puVar3 + 0x1e) = 0;
        puVar3[8] = 0x80000000;
        puVar4 = (undefined4 *)fn_0015ece0(0x10);
        if (puVar4 != (undefined4 *)0x0) {
          *puVar4 = 0;
          puVar4[1] = 0;
          *(undefined1 *)(puVar4 + 3) = 0;
        }
        puVar3[3] = puVar4;
        puVar3[5] = DAT_008b63d4;
        *puVar3 = local_30;
        puVar3[0xb] = 0;
        puVar3[9] = 0;
        puVar3[10] = 0;
      }
      puVar3[0xc] = 0;
      puVar3[9] = fn_0046cfc0;
      puVar3[10] = 0;
      puVar3[0xb] = param_1;
      puVar3[6] = DAT_008b63d0;
      if (*(int *)puVar3[3] == 0) {
        *(undefined1 *)((int)puVar3 + 0x1d) = 0;
        *(undefined1 *)(puVar3 + 7) = 1;
        fn_0047e194(puVar3);
        cVar2 = *(char *)((int)puVar3 + 0x1d);
        while (cVar2 == '\0') {
          fn_00735640(1000000,0);
          cVar2 = *(char *)((int)puVar3 + 0x1d);
        }
      }
      else {
        fn_0015ebe4(L"D:/home/jenkins/workspace/Manual-Pack/5129d543/OnlineCore/src/Platform/Core/ObjectThreadRoot.cpp"
                     ,0x16c,0xe000000e);
      }
      puVar12 = (uint *)(param_1 + 0x30);
      puVar4 = *(undefined4 **)(param_1 + 0x34);
      if (puVar4 == *(undefined4 **)(param_1 + 0x38)) {
        uVar10 = (int)((int)puVar4 - *puVar12) >> 2;
        if (uVar10 < (uint)((int)((int)*(undefined4 **)(param_1 + 0x38) - *puVar12) >> 2)) {
          *(undefined4 **)(param_1 + 0x34) = puVar4 + 1;
          if (puVar4 != (undefined4 *)0x0) {
            *puVar4 = puVar4[-1];
          }
          *puVar4 = puVar3;
        }
        else {
          local_2c = uVar10 + (uVar10 >> 1) + (uVar10 >> 3);
          if (local_2c < uVar10 + 0x20) {
            local_2c = uVar10 + 0x20;
          }
          puVar5 = (undefined4 *)fn_0015ece0(local_2c << 2);
          puVar6 = puVar5;
          for (puVar8 = (undefined4 *)*puVar12; puVar8 != puVar4; puVar8 = puVar8 + 1) {
            if (puVar6 != (undefined4 *)0x0) {
              *puVar6 = *puVar8;
            }
            puVar6 = puVar6 + 1;
          }
          puVar8 = (undefined4 *)(((int)puVar4 - *puVar12 & 0xfffffffc) + (int)puVar5);
          if (puVar8 != (undefined4 *)0x0) {
            *puVar8 = puVar3;
          }
          puVar8 = *(undefined4 **)(param_1 + 0x34);
          puVar3 = (undefined4 *)(((int)puVar4 - *puVar12 & 0xfffffffc) + (int)puVar5);
          for (; puVar4 != puVar8; puVar4 = puVar4 + 1) {
            puVar3 = puVar3 + 1;
            if (puVar3 != (undefined4 *)0x0) {
              *puVar3 = *puVar4;
            }
          }
          uVar7 = *puVar12;
          uVar9 = *(uint *)(param_1 + 0x34);
          uVar10 = uVar9;
          if (uVar7 < uVar9) {
            uVar10 = (uVar9 - uVar7) * 0x20000000;
          }
          iVar1 = (int)(uVar9 - uVar7) >> 2;
          if (uVar7 < uVar9) {
            uVar10 = uVar10 >> 0x1f;
          }
          else {
            uVar10 = 0;
          }
          for (iVar11 = uVar10 + 1; iVar11 < iVar1 + 1; iVar11 = iVar11 + 2) {
          }
          if (uVar7 != 0) {
            if (*(code **)(uVar7 - 8) == (code *)0x0) {
              fn_0030233c();
            }
            else {
              (**(code **)(uVar7 - 8))();
            }
          }
          *(undefined4 **)(param_1 + 0x38) = puVar5 + local_2c;
          *(undefined4 **)(param_1 + 0x34) = puVar5 + iVar1 + 1;
          *puVar12 = (uint)puVar5;
        }
      }
      else {
        *(undefined4 **)(param_1 + 0x34) = puVar4 + 1;
        if (puVar4 != (undefined4 *)0x0) {
          *puVar4 = puVar3;
        }
      }
      fn_00170f54(&local_40);
      uVar13 = uVar13 + 1;
    } while (uVar13 < param_2);
  }
  (**(code **)(*local_38 + 0xc))();
  return 1;
}



undefined4 fn_0046d014(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  piVar1 = (int *)(param_1 + 4);
  (**(code **)(*piVar1 + 8))();
  if (*(char *)(param_1 + 0x2c) != '\0') {
    (**(code **)(*piVar1 + 0xc))(piVar1);
    return 0;
  }
  *(undefined1 *)(param_1 + 0x2c) = 1;
  (**(code **)(*piVar1 + 0xc))(piVar1);
  uVar5 = 0;
  uVar2 = *(int *)(param_1 + 0x34) - *(int *)(param_1 + 0x30);
  if ((int)uVar2 >> 2 != 0) {
    do {
      fn_0047e514(*(undefined4 *)(*(int *)(param_1 + 0x30) + uVar5 * 4),0xffffffff);
      piVar1 = *(int **)(*(int *)(param_1 + 0x30) + uVar5 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))();
      }
      uVar5 = uVar5 + 1;
      uVar2 = *(int *)(param_1 + 0x34) - *(int *)(param_1 + 0x30);
    } while (uVar5 < (uint)((int)uVar2 >> 2));
  }
  uVar5 = *(uint *)(param_1 + 0x34);
  uVar4 = *(uint *)(param_1 + 0x30);
  if (uVar4 != uVar5) {
    if (uVar4 < uVar5) {
      uVar2 = uVar5 - uVar4;
    }
    if (uVar4 < uVar5) {
      uVar2 = uVar2 << 0x1d;
    }
    if (uVar4 < uVar5) {
      uVar2 = uVar2 >> 0x1f;
    }
    else {
      uVar2 = 0;
    }
    iVar3 = uVar2 + 1;
    if (iVar3 < ((int)(uVar5 - uVar4) >> 2) + 1) {
      do {
        iVar3 = iVar3 + 2;
      } while (iVar3 < ((int)(uVar5 - uVar4) >> 2) + 1);
    }
    *(uint *)(param_1 + 0x34) = uVar5 - (uVar5 - uVar4 & 0xfffffffc);
  }
  piVar1 = (int *)(param_1 + 4);
  (**(code **)(*(int *)(param_1 + 4) + 8))(piVar1);
  *(undefined1 *)(param_1 + 0x2c) = 2;
  (**(code **)(*piVar1 + 0xc))(piVar1);
  return 1;
}



void fn_0046cfc0(int *param_1)

{
  char cVar1;
  
  (**(code **)(*param_1 + 8))(param_1);
  cVar1 = (char)param_1[0xb];
  while (cVar1 == '\0') {
    (**(code **)(*param_1 + 0x10))(param_1);
    cVar1 = (char)param_1[0xb];
  }
                    /* WARNING: Could not recover jumptable at 0x0046d010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xc))(param_1);
  return;
}



int fn_0046cf1c(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined1 *puVar3;
  
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  *(char *)(param_1 + 0x1d) = (char)param_1;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  piVar1 = (int *)fn_0015ece0(0xc);
  iVar2 = fn_0015ece0(0x300);
  piVar1[2] = iVar2;
  *piVar1 = *(int *)(param_1 + 4);
  piVar1[1] = 0x20;
  *(int *)(param_1 + 4) = (int)piVar1;
  puVar3 = (undefined1 *)piVar1[2];
  *(undefined1 **)(param_1 + 0xc) = puVar3;
  *(undefined1 **)(param_1 + 0x10) = puVar3 + 0x300;
  *(undefined1 **)(param_1 + 0xc) = puVar3 + 0x18;
  *(undefined4 *)(puVar3 + 8) = 0;
  *(undefined4 *)(puVar3 + 0xc) = 0;
  *puVar3 = 0;
  *(undefined1 **)(param_1 + 0x14) = puVar3;
  *(undefined4 *)(puVar3 + 4) = 0;
  *(int *)(*(int *)(param_1 + 0x14) + 8) = *(int *)(param_1 + 0x14);
  *(int *)(*(int *)(param_1 + 0x14) + 0xc) = *(int *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x20) = param_2;
  return param_1;
}



void fn_0046cd70(int param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  bool bVar5;
  int local_20;
  int local_1c;
  undefined1 auStack_18 [4];
  
  puVar4 = (uint *)(param_2 + 1);
  do {
    uVar1 = *puVar4 - 1;
    bVar5 = (bool)hasExclusiveAccess(puVar4);
  } while (!bVar5);
  *puVar4 = uVar1;
  bVar5 = uVar1 == 0;
  if (bVar5) {
    uVar1 = (uint)*(byte *)(param_2 + 2);
  }
  if (bVar5 && uVar1 == 0) {
    *(undefined1 *)(param_2 + 2) = 1;
    (**(code **)(*param_2 + 4))(param_2);
  }
  if (param_2[1] == 1) {
    local_1c = *(int *)(param_1 + 0x14);
    iVar2 = *(int *)(*(int *)(param_1 + 0x14) + 4);
    while (iVar2 != 0) {
      if (*(uint *)(iVar2 + 0x10) < (uint)param_2[0xc]) {
        iVar2 = *(int *)(iVar2 + 0xc);
      }
      else {
        local_1c = iVar2;
        iVar2 = *(int *)(iVar2 + 8);
      }
    }
    local_20 = *(int *)(param_1 + 0x14);
    iVar2 = *(int *)(*(int *)(param_1 + 0x14) + 4);
    while (iVar3 = local_1c, iVar2 != 0) {
      if ((uint)param_2[0xc] < *(uint *)(iVar2 + 0x10)) {
        local_20 = iVar2;
        iVar2 = *(int *)(iVar2 + 8);
      }
      else {
        iVar2 = *(int *)(iVar2 + 0xc);
      }
    }
    while (iVar3 != local_20) {
      iVar2 = *(int *)(iVar3 + 0xc);
      if (*(int *)(iVar3 + 0xc) == 0) {
        iVar2 = *(int *)(iVar3 + 4);
        if (iVar3 == *(int *)(iVar2 + 0xc)) {
          do {
            iVar3 = iVar2;
            iVar2 = *(int *)(iVar3 + 4);
          } while (iVar3 == *(int *)(iVar2 + 0xc));
        }
        if (*(int *)(iVar3 + 0xc) != iVar2) {
          iVar3 = iVar2;
        }
      }
      else {
        do {
          iVar3 = iVar2;
          iVar2 = *(int *)(iVar3 + 8);
        } while (*(int *)(iVar3 + 8) != 0);
      }
    }
    fn_00778f4c(auStack_18,param_1 + 4,&local_1c,&local_20);
    puVar4 = (uint *)(param_2 + 1);
    do {
      uVar1 = *puVar4 - 1;
      bVar5 = (bool)hasExclusiveAccess(puVar4);
    } while (!bVar5);
    *puVar4 = uVar1;
    bVar5 = uVar1 == 0;
    if (bVar5) {
      uVar1 = (uint)*(byte *)(param_2 + 2);
    }
    if (bVar5 && uVar1 == 0) {
      *(undefined1 *)(param_2 + 2) = 1;
                    /* WARNING: Could not recover jumptable at 0x0046cf10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 4))();
      return;
    }
  }
  return;
}


