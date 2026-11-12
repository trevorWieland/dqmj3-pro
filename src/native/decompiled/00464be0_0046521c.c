#include "00464be0_0046521c.h"



int fn_0046521c(int param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  char cVar3;
  uint uVar4;
  int *piVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  bool bVar11;
  
  uVar7 = (uint)*(byte *)(param_2 + 0x84);
  iVar8 = *(int *)(param_2 + 0xd8);
  iVar9 = iVar8;
  if (*(int *)(*(int *)(param_1 + 0x130) + uVar7 * 4) == 0) {
    *(int *)(*(int *)(param_1 + 0x130) + uVar7 * 4) = iVar8;
    iVar9 = 0;
    piVar5 = (int *)(iVar8 + 4);
    do {
      bVar11 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar11);
    *piVar5 = *piVar5 + 1;
  }
  if (*(char *)(param_2 + 100) == '\0') {
    iVar8 = 1;
  }
  else {
    iVar8 = 0;
    if (*(char *)(*(int *)(param_1 + 0x13c) + uVar7) != *(char *)(param_2 + 100)) {
      piVar5 = *(int **)(*(int *)(param_1 + 0x130) + uVar7 * 4);
      if (piVar5 == (int *)0x0) {
        return 0;
      }
      puVar6 = (uint *)(piVar5 + 1);
      do {
        uVar4 = *puVar6 - 1;
        bVar11 = (bool)hasExclusiveAccess(puVar6);
      } while (!bVar11);
      *puVar6 = uVar4;
      bVar11 = uVar4 == 0;
      if (bVar11) {
        uVar4 = (uint)*(byte *)(piVar5 + 2);
      }
      if (bVar11 && uVar4 == 0) {
        *(undefined1 *)(piVar5 + 2) = 1;
        (**(code **)(*piVar5 + 4))();
      }
      *(undefined4 *)(*(int *)(param_1 + 0x130) + uVar7 * 4) = 0;
      return 0;
    }
  }
  if (iVar9 != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x130) + uVar7 * 4);
    if ((*(byte *)(iVar1 + 0x1c) & 4) != 0) {
      uVar4 = *(int *)(iVar1 + 0x10) + *(int *)(iVar9 + 0x10);
      if (uVar4 < 0x555) {
        iVar1 = fn_004b5298();
        if (iVar1 == 0) {
          return 0;
        }
      }
      else {
        iVar1 = fn_0015ece0(0x20);
        if (iVar1 == 0) {
          uVar10 = 0;
        }
        else {
          uVar10 = fn_004b5488(iVar1,uVar4);
        }
        fn_004b5540(uVar10,*(undefined4 *)(*(int *)(param_1 + 0x130) + uVar7 * 4));
        piVar5 = *(int **)(*(int *)(param_1 + 0x130) + uVar7 * 4);
        puVar6 = (uint *)(piVar5 + 1);
        do {
          uVar4 = *puVar6 - 1;
          bVar11 = (bool)hasExclusiveAccess(puVar6);
        } while (!bVar11);
        *puVar6 = uVar4;
        bVar11 = uVar4 == 0;
        if (bVar11) {
          uVar4 = (uint)*(byte *)(piVar5 + 2);
        }
        if (bVar11 && uVar4 == 0) {
          *(undefined1 *)(piVar5 + 2) = 1;
          (**(code **)(*piVar5 + 4))();
        }
        *(undefined4 *)(*(int *)(param_1 + 0x130) + uVar7 * 4) = uVar10;
      }
    }
    fn_0015ef58(*(undefined4 *)(*(int *)(param_1 + 0x130) + uVar7 * 4),
                 *(int *)(iVar9 + 0xc) + *(int *)(iVar9 + 0x18),*(undefined4 *)(iVar9 + 0x10),
                 0xffffffff);
  }
  if (iVar8 == 0) {
    pcVar2 = (char *)(*(int *)(param_1 + 0x13c) + uVar7);
    cVar3 = *pcVar2 + '\x01';
    *pcVar2 = cVar3;
    if (cVar3 == '\0') {
      *(undefined1 *)(*(int *)(param_1 + 0x13c) + uVar7) = 1;
    }
  }
  return iVar8;
}



void fn_00464be0(uint *param_1,int *param_2,uint param_3,uint param_4,int param_5,
                 undefined4 param_6,uint param_7)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  code *pcVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  bool bVar14;
  uint local_48;
  uint local_44;
  uint local_40;
  uint uStack_3c;
  uint local_38;
  undefined4 local_34;
  uint local_30 [3];
  
  iVar2 = (**(code **)(*param_2 + 0x2c))(param_2);
  if ((iVar2 == 0) && (iVar2 = (**(code **)(*param_2 + 0x30))(param_2), iVar2 == 0)) {
    param_1[2] = 0x71;
    *param_1 = 0x80050002;
    param_1[1] = (uint)&DAT_007dba44;
    return;
  }
  iVar3 = fn_004b7748();
  iVar2 = 0;
  if (iVar3 != 0) {
    iVar2 = *(int *)(iVar3 + 0x90);
  }
  iVar13 = 0;
  if (iVar3 == 0) {
    iVar2 = 0;
  }
  if (*(char *)(iVar2 + 0xfe) != '\0') {
    iVar2 = fn_001249d0();
    if (iVar2 != 0) {
      iVar13 = *(int *)(iVar2 + 0xc);
    }
    piVar4 = (int *)(iVar13 + 0x50);
    (**(code **)(*piVar4 + 8))();
    fn_00460e38(param_2,3);
    param_1[2] = 0x71;
    *param_1 = 0x80050002;
    param_1[1] = (uint)&DAT_007dba44;
                    /* WARNING: Could not recover jumptable at 0x00464ca0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar4 + 0xc))(piVar4);
    return;
  }
  if ((*(byte *)(param_3 + 0x1c) & 4) != 0) {
    if (DAT_008b637e != '\0') {
      fn_001775e8(DAT_008b63d8);
    }
    iVar2 = fn_00170de0(&DAT_008e769c,0xe);
    if (iVar2 != 0) {
      if (DAT_008b637e != '\0') {
        fn_001775e8(DAT_008b63d8);
      }
      iVar2 = fn_00170de0(&DAT_008e769c,0xe);
      if (DAT_008b637e != '\0') {
        fn_001775e8(DAT_008b63d8);
      }
      uVar5 = fn_00170de0(&DAT_008e769c,0xe);
      iVar2 = fn_0048bd54(uVar5,0x554,*(undefined4 *)(iVar2 + 0x2c));
      if (iVar2 == 0) goto LAB_00464f64;
    }
  }
  iVar2 = fn_004b7748();
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(iVar2 + 0x90);
  }
  local_30[0] = *(uint *)(iVar2 + 0x54);
  iVar2 = fn_004b7748();
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(iVar2 + 0x90);
  }
  iVar2 = *(int *)(iVar2 + 0x54);
  uVar12 = iVar2 - 0x40;
  iVar3 = fn_004b7748();
  if (iVar3 == 0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = *(int **)(iVar3 + 0x90);
  }
  iVar3 = (**(code **)(*piVar4 + 0x2c))();
  if (*(char *)(iVar3 + 8) == '\0') {
    iVar3 = fn_004b7748();
    if (iVar3 == 0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = *(int **)(iVar3 + 0x90);
    }
    iVar3 = (**(code **)(*piVar4 + 0x28))();
    if (((*(char *)(iVar3 + 4) != '\0') || ((char)param_2[0x53] == '\0')) ||
       (((char)param_2[0x53] == '\x01' && ((param_2[0x54] & 0xffU) == 0)))) {
      uVar12 = iVar2 - 100;
    }
  }
  else {
    uVar12 = iVar2 - 0x6c;
  }
  uVar11 = 0;
  if ((param_4 & 1) != 0) {
    uVar11 = 0x60;
  }
  if ((param_4 & 2) != 0) {
    uVar11 = uVar11 | 0x100;
  }
  if ((param_4 & 0x10) != 0) {
    uVar11 = uVar11 | 0x200;
  }
  if ((param_4 & 0x20) != 0) {
    uVar11 = uVar11 | 0x400;
  }
  uVar8 = param_4 & 8;
  if ((param_4 & 4) != 0) {
    uVar11 = uVar11 | 0x800;
  }
  bVar14 = (param_4 & 1) != 0;
  uVar1 = uVar8 >> 3;
  if (bVar14) {
    uVar8 = *(uint *)(param_3 + 0x10);
  }
  if (bVar14 && uVar12 < uVar8) {
    param_2[0xc2] = param_2[0xc2] + 1;
    local_34 = param_6;
    local_38 = param_7;
    local_44 = 2;
    local_48 = uVar12;
    local_40 = uVar11;
    uStack_3c = uVar1;
    fn_0046470c(param_1,param_2,param_3,local_30[0]);
    return;
  }
  if (uVar12 < *(uint *)(param_3 + 0x10)) {
    param_2[0xac] = param_2[0xac] + 1;
    param_1[2] = 0x71;
    *param_1 = 0x8001000a;
    param_1[1] = (uint)&DAT_007dba44;
    return;
  }
  if ((*(byte *)(param_3 + 0x1c) & 4) == 0) {
    iVar2 = fn_0015ece0(0x150);
    if (iVar2 == 0) {
      piVar4 = (int *)0x0;
    }
    else {
      local_44 = param_7;
      local_48 = param_3;
      piVar4 = (int *)fn_004bc1a4(iVar2,param_2,2,uVar11);
    }
LAB_00464fb0:
    if (param_5 == 0) goto LAB_004650d4;
    if ((*(byte *)(param_3 + 0x1c) & 4) == 0) {
      iVar2 = fn_0015ece0(0x20);
      if (iVar2 == 0) {
        piVar6 = (int *)0x0;
      }
      else {
        piVar6 = (int *)fn_004b5488(iVar2,*(undefined4 *)(param_3 + 0x14));
      }
LAB_00465080:
      fn_004b5540(piVar6,param_3);
      piVar7 = (int *)piVar4[0x36];
      puVar10 = (uint *)(piVar7 + 1);
      do {
        uVar12 = *puVar10 - 1;
        bVar14 = (bool)hasExclusiveAccess(puVar10);
      } while (!bVar14);
      *puVar10 = uVar12;
      bVar14 = uVar12 == 0;
      if (bVar14) {
        uVar12 = (uint)*(byte *)(piVar7 + 2);
      }
      if (bVar14 && uVar12 == 0) {
        *(undefined1 *)(piVar7 + 2) = 1;
        (**(code **)(*piVar7 + 4))();
      }
      piVar4[0x36] = (int)piVar6;
LAB_004650d4:
      *(char *)(piVar4 + 0x4c) = (char)uVar1;
      *(undefined1 *)(piVar4 + 0x19) = 0;
      *(char *)(piVar4 + 9) = (char)param_2[0x53];
      *(char *)(piVar4 + 0x21) = (char)param_6;
      fn_0045fd08(&local_40,param_2,piVar4);
      if ((int)local_40 < 0) {
        puVar10 = (uint *)(piVar4 + 1);
        do {
          uVar12 = *puVar10 - 1;
          bVar14 = (bool)hasExclusiveAccess(puVar10);
        } while (!bVar14);
        *puVar10 = uVar12;
        bVar14 = uVar12 == 0;
        if (bVar14) {
          uVar12 = (uint)*(byte *)(piVar4 + 2);
        }
        if (bVar14 && uVar12 == 0) {
          *(undefined1 *)(piVar4 + 2) = 1;
          (**(code **)(*piVar4 + 4))();
        }
        *param_1 = local_40;
        param_1[1] = uStack_3c;
        param_1[2] = local_38;
        return;
      }
      bVar14 = (*(ushort *)(piVar4 + 0xf) & 0x20) != 0;
      uVar12 = (uint)*(ushort *)(piVar4 + 0xf);
      if (bVar14) {
        uVar12 = param_7;
      }
      if (bVar14 && uVar12 != 0) {
        local_30[0] = param_7;
        local_30[1] = 0;
        fn_001777e0(&local_48,param_2 + 0xd0,local_30);
        *(undefined4 *)(local_48 + 0x14) = 1;
      }
      puVar10 = (uint *)(piVar4 + 1);
      do {
        uVar12 = *puVar10 - 1;
        bVar14 = (bool)hasExclusiveAccess(puVar10);
      } while (!bVar14);
      *puVar10 = uVar12;
      bVar14 = uVar12 == 0;
      if (bVar14) {
        uVar12 = (uint)*(byte *)(piVar4 + 2);
      }
      if (bVar14 && uVar12 == 0) {
        *(undefined1 *)(piVar4 + 2) = 1;
        (**(code **)(*piVar4 + 4))();
      }
      param_1[2] = 0x71;
      *param_1 = 0x10001;
      param_1[1] = (uint)&DAT_007dba44;
      return;
    }
    iVar2 = fn_00455040(0x20,0);
    if ((iVar2 != 0) &&
       (piVar6 = (int *)fn_0045b64c(iVar2,*(int *)(param_3 + 0x10) + *(int *)(param_3 + 0x18)),
       piVar6 != (int *)0x0)) {
      if (piVar6[3] != 0) goto LAB_00465080;
      (**(code **)(*piVar6 + 4))(piVar6);
    }
    puVar10 = (uint *)(piVar4 + 1);
    do {
      uVar12 = *puVar10 - 1;
      bVar14 = (bool)hasExclusiveAccess(puVar10);
    } while (!bVar14);
    *puVar10 = uVar12;
    bVar14 = uVar12 == 0;
    if (bVar14) {
      uVar12 = (uint)*(byte *)(piVar4 + 2);
    }
    if (!bVar14 || uVar12 != 0) goto LAB_00464f64;
    *(undefined1 *)(piVar4 + 2) = 1;
    pcVar9 = *(code **)(*piVar4 + 4);
  }
  else {
    iVar2 = fn_00455040(0x150,0);
    if (iVar2 == 0) {
      piVar4 = (int *)0x0;
    }
    else {
      local_44 = param_7;
      local_48 = param_3;
      piVar4 = (int *)fn_00491934(iVar2,param_2,2,uVar11);
      if (piVar4 == (int *)0x0) goto LAB_00464f64;
      if (((*(ushort *)(piVar4 + 0xf) & 0x40) == 0) || (piVar4[0x46] != 0)) goto LAB_00464fb0;
    }
    if (piVar4 == (int *)0x0) goto LAB_00464f64;
    pcVar9 = *(code **)(*piVar4 + 4);
  }
  (*pcVar9)(piVar4);
LAB_00464f64:
  param_1[2] = 0x71;
  *param_1 = 0x8005001f;
  param_1[1] = (uint)&DAT_007dba44;
  return;
}


