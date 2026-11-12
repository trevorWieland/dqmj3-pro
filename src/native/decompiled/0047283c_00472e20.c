#include "0047283c_00472e20.h"



int fn_00472e20(int param_1)

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
  iVar2 = fn_0015ece0(0x280);
  piVar1[2] = iVar2;
  *piVar1 = *(int *)(param_1 + 4);
  piVar1[1] = 0x20;
  *(int *)(param_1 + 4) = (int)piVar1;
  puVar3 = (undefined1 *)piVar1[2];
  *(undefined1 **)(param_1 + 0xc) = puVar3;
  *(undefined1 **)(param_1 + 0x10) = puVar3 + 0x280;
  *(undefined1 **)(param_1 + 0xc) = puVar3 + 0x14;
  *(undefined4 *)(puVar3 + 8) = 0;
  *(undefined4 *)(puVar3 + 0xc) = 0;
  *puVar3 = 0;
  *(undefined1 **)(param_1 + 0x14) = puVar3;
  *(undefined4 *)(puVar3 + 4) = 0;
  *(int *)(*(int *)(param_1 + 0x14) + 8) = *(int *)(param_1 + 0x14);
  *(int *)(*(int *)(param_1 + 0x14) + 0xc) = *(int *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined1 *)(param_1 + 0x38) = 1;
  *(undefined1 *)(param_1 + 0x39) = 1;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  piVar1 = (int *)fn_0015ece0(0xc);
  iVar2 = fn_0015ece0(0x400);
  piVar1[2] = iVar2;
  *piVar1 = *(int *)(param_1 + 0x20);
  piVar1[1] = 0x20;
  *(int *)(param_1 + 0x20) = (int)piVar1;
  puVar3 = (undefined1 *)piVar1[2];
  *(undefined1 **)(param_1 + 0x28) = puVar3;
  *(undefined1 **)(param_1 + 0x2c) = puVar3 + 0x400;
  *(undefined1 **)(param_1 + 0x28) = puVar3 + 0x20;
  *(undefined4 *)(puVar3 + 8) = 0;
  *(undefined4 *)(puVar3 + 0xc) = 0;
  *puVar3 = 0;
  *(undefined1 **)(param_1 + 0x30) = puVar3;
  *(undefined4 *)(puVar3 + 4) = 0;
  *(int *)(*(int *)(param_1 + 0x30) + 8) = *(int *)(param_1 + 0x30);
  *(int *)(*(int *)(param_1 + 0x30) + 0xc) = *(int *)(param_1 + 0x30);
  *(undefined1 *)(param_1 + 0x3c) = 0;
  return param_1;
}



void fn_00472d20(int param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  
  iVar1 = fn_001249d0();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(iVar1 + 0xc);
  }
  piVar5 = (int *)(iVar1 + 0x50);
  (**(code **)(*piVar5 + 8))(piVar5);
  iVar1 = *(int *)(*(int *)(param_1 + 0x30) + 8);
  while (iVar1 != *(int *)(param_1 + 0x30)) {
    iVar2 = *(int *)(*(int *)(iVar1 + 0x18) + 0x118);
    if ((uint)(*(int *)(iVar2 + 0x10) == 0) <= (uint)-*(int *)(iVar2 + 0x14)) {
      uVar4 = param_2[1];
      iVar2 = *(int *)(*(int *)(iVar1 + 0x18) + 0x118);
      uVar3 = *(uint *)(iVar2 + 0x14);
      if (uVar4 <= uVar3 && (uint)(*(uint *)(iVar2 + 0x10) <= *param_2) <= uVar4 - uVar3) {
        iVar2 = *(int *)(*(int *)(iVar1 + 0x18) + 0x118);
        *(uint *)(iVar2 + 0x10) = *param_2;
        *(uint *)(iVar2 + 0x14) = uVar4;
      }
    }
    iVar2 = *(int *)(iVar1 + 0xc);
    if (*(int *)(iVar1 + 0xc) == 0) {
      iVar2 = *(int *)(iVar1 + 4);
      if (iVar1 == *(int *)(iVar2 + 0xc)) {
        do {
          iVar1 = iVar2;
          iVar2 = *(int *)(iVar1 + 4);
        } while (iVar1 == *(int *)(iVar2 + 0xc));
      }
      if (*(int *)(iVar1 + 0xc) != iVar2) {
        iVar1 = iVar2;
      }
    }
    else {
      do {
        iVar1 = iVar2;
        iVar2 = *(int *)(iVar1 + 8);
      } while (*(int *)(iVar1 + 8) != 0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00472de8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar5 + 0xc))(piVar5);
  return;
}



void fn_0047283c(int param_1,undefined4 param_2,uint *param_3)

{
  int iVar1;
  int *piVar2;
  uint extraout_r1;
  uint extraout_r1_00;
  uint uVar3;
  uint extraout_r1_01;
  int iVar4;
  uint *puVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  bool bVar10;
  int local_64;
  uint local_60 [2];
  uint local_58;
  uint local_54;
  uint local_50;
  undefined1 auStack_4c [8];
  uint *local_44;
  uint *local_40;
  uint *local_3c;
  uint local_38;
  uint local_34;
  undefined1 auStack_2c [12];
  
  iVar1 = fn_001249d0();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(iVar1 + 0xc);
  }
  piVar2 = (int *)(iVar1 + 0x50);
  (**(code **)(*piVar2 + 8))();
  local_44 = (uint *)0x0;
  local_40 = (uint *)0x0;
  local_3c = (uint *)0x0;
  uVar3 = extraout_r1;
  iVar1 = *(int *)(*(int *)(param_1 + 0x30) + 8);
  puVar5 = local_40;
  while (local_40 = puVar5, iVar1 != *(int *)(param_1 + 0x30)) {
    iVar7 = *(int *)(*(int *)(iVar1 + 0x18) + 0x118);
    iVar4 = *(int *)(iVar7 + 0xc);
    bVar10 = *(uint *)(iVar7 + 8) < DAT_008b6510;
    if ((int)(iVar4 - (DAT_008b6514 + (uint)bVar10)) < 0 ==
        (SBORROW4(iVar4,DAT_008b6514) != SBORROW4(iVar4 - DAT_008b6514,(uint)bVar10))) {
      param_3 = *(uint **)(iVar7 + 0x14);
      if ((uint)(*(int *)(iVar7 + 0x10) == 0) <= (uint)-(int)param_3) {
        fn_0013d0fc(&local_58);
        param_3 = *(uint **)(iVar7 + 0x14);
        bVar10 = *(uint *)(iVar7 + 0x10) < local_58;
        if ((int)((int)param_3 - (local_54 + bVar10)) < 0 !=
            (SBORROW4((int)param_3,local_54) != SBORROW4((int)param_3 - local_54,(uint)bVar10)))
        goto LAB_00472890;
      }
      iVar4 = *(int *)(iVar7 + 0x20);
      uVar3 = 0;
      if (*(char *)(iVar4 + 0x30) == '\0') break;
      uVar8 = *(uint *)(iVar4 + 0x38);
      iVar4 = *(int *)(iVar4 + 0x3c);
      fn_0013d0fc(&local_38);
      uVar3 = uVar8 - local_38;
      if ((int)(iVar4 - (local_34 + (uVar8 < local_38))) < 0 ==
          (SBORROW4(iVar4,local_34) != SBORROW4(iVar4 - local_34,(uint)(uVar8 < local_38)))) break;
    }
LAB_00472890:
    local_60[0] = *(uint *)(iVar1 + 0x18);
    iVar4 = *(int *)(iVar1 + 0xc);
    if (*(int *)(iVar1 + 0xc) == 0) {
      iVar4 = *(int *)(iVar1 + 4);
      iVar7 = iVar1;
      if (iVar1 == *(int *)(iVar4 + 0xc)) {
        do {
          iVar7 = iVar4;
          iVar4 = *(int *)(iVar7 + 4);
        } while (iVar7 == *(int *)(iVar4 + 0xc));
      }
      if (*(int *)(iVar7 + 0xc) != iVar4) {
        iVar7 = iVar4;
      }
    }
    else {
      do {
        iVar7 = iVar4;
        iVar4 = *(int *)(iVar7 + 8);
      } while (*(int *)(iVar7 + 8) != 0);
    }
    local_64 = iVar1;
    fn_00769544(auStack_4c,param_1 + 0x20,&local_64);
    local_54 = *(uint *)(param_1 + 0x14);
    uVar3 = *(uint *)(*(uint *)(param_1 + 0x14) + 4);
    while (uVar3 != 0) {
      if (*(uint *)(uVar3 + 0x10) < local_60[0]) {
        uVar3 = *(uint *)(uVar3 + 0xc);
      }
      else {
        local_54 = uVar3;
        uVar3 = *(uint *)(uVar3 + 8);
      }
    }
    local_50 = *(uint *)(param_1 + 0x14);
    uVar3 = *(uint *)(*(uint *)(param_1 + 0x14) + 4);
    while (uVar8 = local_54, uVar3 != 0) {
      if (local_60[0] < *(uint *)(uVar3 + 0x10)) {
        local_50 = uVar3;
        uVar3 = *(uint *)(uVar3 + 8);
      }
      else {
        uVar3 = *(uint *)(uVar3 + 0xc);
      }
    }
    while (uVar8 != local_50) {
      uVar3 = *(uint *)(uVar8 + 0xc);
      if (*(uint *)(uVar8 + 0xc) == 0) {
        uVar3 = *(uint *)(uVar8 + 4);
        if (uVar8 == *(uint *)(uVar3 + 0xc)) {
          do {
            uVar8 = uVar3;
            uVar3 = *(uint *)(uVar8 + 4);
          } while (uVar8 == *(uint *)(uVar3 + 0xc));
        }
        if (*(uint *)(uVar8 + 0xc) != uVar3) {
          uVar8 = uVar3;
        }
      }
      else {
        do {
          uVar8 = uVar3;
          uVar3 = *(uint *)(uVar8 + 8);
        } while (*(uint *)(uVar8 + 8) != 0);
      }
    }
    local_38 = local_54;
    local_34 = local_50;
    fn_0076ea8c(auStack_2c,param_1 + 4,&local_54,&local_50);
    iVar1 = iVar7;
    if (local_40 == local_3c) {
      param_3 = local_60;
      fn_00798d0c(&local_44);
      uVar3 = extraout_r1_00;
      puVar5 = local_40;
    }
    else {
      uVar3 = 0;
      param_3 = local_3c;
      puVar5 = local_40 + 1;
      if (local_40 != (uint *)0x0) {
        *local_40 = local_60[0];
        uVar3 = local_60[0];
      }
    }
  }
  puVar5 = local_44;
  if (local_40 != local_44) {
    do {
      piVar6 = (int *)*puVar5;
      piVar9 = (int *)piVar6[0x47];
      if ((*(ushort *)(piVar6 + 0xf) & 0xf) == 4) {
        fn_004600b4(piVar9,uVar3);
      }
      else {
        iVar1 = fn_004b61c8(piVar9[1]);
        if (((uint)*(ushort *)(piVar6 + 0x48) < *(uint *)(iVar1 + 0x60)) &&
           (iVar1 = fn_006d39e4(piVar6[0x46]), iVar1 == 0)) {
          fn_00460784(piVar9,piVar6);
        }
        else {
          if (((*(ushort *)(piVar6 + 0xf) & 0xf) == 3) &&
             (iVar1 = (**(code **)(*piVar9 + 0x54))(piVar9), iVar1 == 3)) {
            (**(code **)(*piVar9 + 0x58))(piVar9,0);
          }
          if (((*(ushort *)(piVar6 + 0xf) & 0xf) < 2) &&
             (iVar1 = (**(code **)(*piVar9 + 0x54))(piVar9), iVar1 == 1)) {
            (**(code **)(*piVar9 + 0x58))(piVar9,0);
          }
          iVar1 = fn_006d39e4(piVar6[0x46]);
          if (iVar1 == 0) {
            *(undefined1 *)((int)piVar9 + 0x14a) = 0xd;
            (**(code **)(*piVar9 + 0x28))(piVar9);
          }
          else {
            piVar9[0xaa] = piVar9[0xaa] + 1;
            *(undefined1 *)((int)piVar9 + 0x14a) = 0xc;
            (**(code **)(*piVar9 + 0x28))(piVar9);
          }
          iVar1 = (**(code **)(*piVar9 + 0x28))(piVar9);
          if (iVar1 == 0) {
            (**(code **)(*piVar9 + 0x88))(piVar9,7,0);
          }
        }
      }
      uVar3 = 0xffffffff;
      param_3 = (uint *)(piVar6 + 1);
      do {
        uVar8 = *param_3 - 1;
        bVar10 = (bool)hasExclusiveAccess(param_3);
      } while (!bVar10);
      *param_3 = uVar8;
      bVar10 = uVar8 == 0;
      if (bVar10) {
        uVar8 = (uint)*(byte *)(piVar6 + 2);
      }
      if (bVar10 && uVar8 == 0) {
        *(undefined1 *)(piVar6 + 2) = 1;
        (**(code **)(*piVar6 + 4))(piVar6);
        uVar3 = extraout_r1_01;
      }
      puVar5 = puVar5 + 1;
    } while (local_40 != puVar5);
  }
  if (local_44 < local_40) {
    param_3 = (uint *)((int)local_40 - (int)local_44);
  }
  if (local_44 < local_40) {
    param_3 = (uint *)((int)param_3 << 0x1d);
  }
  if (local_44 < local_40) {
    uVar3 = (uint)param_3 >> 0x1f;
  }
  else {
    uVar3 = 0;
  }
  for (iVar1 = uVar3 + 1; iVar1 < ((int)local_40 - (int)local_44 >> 2) + 1; iVar1 = iVar1 + 2) {
  }
  if (local_44 != (uint *)0x0) {
    if ((code *)local_44[-2] == (code *)0x0) {
      fn_0030233c();
    }
    else {
      (*(code *)local_44[-2])();
    }
  }
  (**(code **)(*piVar2 + 0xc))(piVar2);
  return;
}


