#include "004787f4_00478d5c.h"



void fn_00478d5c(int param_1)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  uint *puVar4;
  int iVar5;
  bool bVar6;
  int *local_20;
  int *local_1c;
  
  piVar1 = *(int **)(*(int *)(param_1 + 0x174) + 8);
  while (piVar3 = *(int **)(param_1 + 0x174), piVar1 != (int *)piVar3[4]) {
    if ((piVar1[0x36] == 0) || ((*(byte *)(piVar1[0x36] + 0x1c) & 4) == 0)) {
      piVar1 = (int *)piVar1[3];
    }
    else {
      local_1c = piVar1;
      (**(code **)(*piVar3 + 0x14))(&local_20,piVar3,&local_1c);
      piVar1 = local_20;
    }
  }
  piVar1 = *(int **)(param_1 + 0x17c);
  while (piVar1 != *(int **)(param_1 + 0x184)) {
    if ((piVar1[0x36] == 0) || ((*(byte *)(piVar1[0x36] + 0x1c) & 4) == 0)) {
      piVar1 = (int *)piVar1[7];
    }
    else {
      puVar4 = (uint *)(piVar1 + 1);
      do {
        uVar2 = *puVar4 - 1;
        bVar6 = (bool)hasExclusiveAccess(puVar4);
      } while (!bVar6);
      *puVar4 = uVar2;
      bVar6 = uVar2 == 0;
      if (bVar6) {
        uVar2 = (uint)*(byte *)(piVar1 + 2);
      }
      if (bVar6 && uVar2 == 0) {
        *(undefined1 *)(piVar1 + 2) = 1;
        (**(code **)(*piVar1 + 4))(piVar1);
      }
      iVar5 = piVar1[8];
      piVar3 = (int *)piVar1[7];
      if (iVar5 != 0) {
        *(int **)(iVar5 + 0x1c) = piVar3;
      }
      piVar1[8] = 0;
      if (piVar3 != (int *)0x0) {
        piVar3[8] = iVar5;
      }
      piVar1[7] = 0;
      if (*(int **)(param_1 + 0x17c) == piVar1) {
        *(int **)(param_1 + 0x17c) = piVar3;
      }
      if (*(int **)(param_1 + 0x180) == piVar1) {
        *(int *)(param_1 + 0x180) = iVar5;
      }
      *(int *)(param_1 + 0x188) = *(int *)(param_1 + 0x188) + -1;
      piVar1 = piVar3;
    }
  }
  piVar1 = *(int **)(param_1 + 0x164);
  while (piVar1 != *(int **)(param_1 + 0x16c)) {
    if ((piVar1[0x36] == 0) || ((*(byte *)(piVar1[0x36] + 0x1c) & 4) == 0)) {
      piVar1 = (int *)piVar1[3];
    }
    else {
      puVar4 = (uint *)(piVar1 + 1);
      do {
        uVar2 = *puVar4 - 1;
        bVar6 = (bool)hasExclusiveAccess(puVar4);
      } while (!bVar6);
      *puVar4 = uVar2;
      bVar6 = uVar2 == 0;
      if (bVar6) {
        uVar2 = (uint)*(byte *)(piVar1 + 2);
      }
      if (bVar6 && uVar2 == 0) {
        *(undefined1 *)(piVar1 + 2) = 1;
        (**(code **)(*piVar1 + 4))(piVar1);
      }
      local_1c = piVar1;
      fn_00459d70(&local_20,param_1 + 0x15c);
      piVar1 = local_20;
    }
  }
  return;
}



undefined4 fn_00478b90(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined4 uVar10;
  bool bVar11;
  uint local_234;
  undefined1 auStack_230 [480];
  undefined *local_50;
  int local_4c;
  int local_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  
  uVar10 = 1;
  iStack_30 = param_1;
  local_2c = param_2;
  uStack_28 = param_3;
  fn_00101a1c(auStack_230,fn_00456a78,0x20,0xf);
  local_234 = 0;
  fn_0048df6c(auStack_230,0xf,&local_234);
  uVar8 = 0;
  if (local_234 != 0) {
    do {
      puVar9 = auStack_230 + uVar8 * 0x20;
      iVar2 = fn_004b5930(param_1 + 0x204,puVar9);
      iVar3 = fn_004b47c0(param_1 + 0x214,puVar9);
      uVar1 = local_2c;
      if (iVar2 == 0 && iVar3 == 0) {
        uVar10 = 0;
      }
      else if (iVar3 == 0) {
        local_50 = &DAT_008528bc;
        local_48 = 0;
        local_4c = 0x200;
        fn_006d1068(*(int *)(param_1 + 0x210) + 0x78,puVar9,&local_50);
        piVar4 = (int *)fn_00469dc8(uVar1,6,puVar9);
        if (piVar4 != (int *)0x0) {
          if (((*(ushort *)(piVar4 + 0xf) & 0x40) == 0) || (piVar4[0x46] != 0)) {
            piVar4[0x38] = local_4c;
            piVar4[0x39] = local_48;
            piVar4[0x3a] = iStack_44;
            piVar4[0x3b] = iStack_40;
            piVar4[0x3c] = iStack_3c;
            piVar4[0x3d] = iStack_38;
            piVar4[0x3e] = iStack_34;
            piVar5 = *(int **)(*(int *)(param_1 + 0x210) + 0xa8);
            (**(code **)(*piVar5 + 0x20))
                      (piVar5,param_3,*(undefined1 *)(*(int *)(param_1 + 0x210) + 4),1,1,piVar4,1);
            puVar7 = (uint *)(piVar4 + 1);
            do {
              uVar6 = *puVar7 - 1;
              bVar11 = (bool)hasExclusiveAccess(puVar7);
            } while (!bVar11);
            *puVar7 = uVar6;
            bVar11 = uVar6 == 0;
            if (bVar11) {
              uVar6 = (uint)*(byte *)(piVar4 + 2);
            }
            if (!bVar11 || uVar6 != 0) goto LAB_00478d20;
            *(undefined1 *)(piVar4 + 2) = 1;
          }
          (**(code **)(*piVar4 + 4))(piVar4);
        }
      }
      else {
        fn_004b4860(param_1 + 0x214,local_2c,puVar9,param_3);
      }
LAB_00478d20:
      uVar8 = uVar8 + 1;
    } while (uVar8 < local_234);
  }
  fn_00100414(auStack_230,&DAT_00456a9c,0x20,0xf);
  return uVar10;
}



void fn_004787f4(int param_1)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  int *piVar7;
  int iVar8;
  code *pcVar9;
  bool bVar10;
  undefined *local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined *local_30;
  undefined4 local_2c;
  
  iVar8 = *(int *)(param_1 + 0x144);
  if (*(int *)(param_1 + 0x148) != iVar8) {
    local_30 = &DAT_008528bc;
    do {
      piVar7 = *(int **)(iVar8 + 4);
      if ((char)piVar7[0x10] == '\0') {
        if (*(char *)(param_1 + 0xfe) == '\0') {
          iVar1 = fn_001249d0();
          local_4c = 1;
          local_50 = (undefined *)0x0;
          piVar2 = (int *)(iVar1 + 0x4c);
          (**(code **)(*(int *)(iVar1 + 0x4c) + 8))();
          if (*(char *)(iVar1 + 0x30) == '\x01') {
            (**(code **)(*piVar2 + 0xc))(piVar2);
          }
          else {
            *(char *)(iVar1 + 0x30) = (char)local_4c;
            fn_0013d0fc(&local_48);
            pcVar3 = *(code **)(iVar1 + 0x40);
            *(undefined4 *)(iVar1 + 0x38) = local_48;
            *(undefined4 *)(iVar1 + 0x3c) = uStack_44;
            pcVar9 = (code *)0x0;
            if (pcVar3 != (code *)0x0) {
              local_50 = *(undefined **)(iVar1 + 0x44);
              *(undefined4 *)(iVar1 + 0x40) = 0;
              pcVar9 = pcVar3;
            }
            (**(code **)(*piVar2 + 0xc))(piVar2);
            if (pcVar9 != (code *)0x0) {
              (*pcVar9)(local_50);
            }
          }
        }
        *(undefined1 *)(param_1 + 0xfe) = 1;
      }
      local_2c = *(undefined4 *)(param_1 + 0x54);
      fn_00467564(piVar7,local_2c);
      iVar1 = 0;
      while( true ) {
        iVar5 = (**(code **)(*piVar7 + 0x18))(piVar7);
        if ((((iVar5 == 0) || (iVar1 != 0)) || (iVar1 = fn_00455040(0x20,0), iVar1 == 0)) ||
           (piVar2 = (int *)fn_0045b64c(iVar1,local_2c), piVar2 == (int *)0x0)) goto LAB_00478a08;
        if (piVar2[3] == 0) break;
        local_50 = local_30;
        local_48 = 0;
        local_4c = 0x200;
        iVar1 = (**(code **)(*piVar7 + 0x10))(piVar7,piVar2,&local_50);
        if (iVar1 == 0) {
          fn_00478a24(param_1,piVar7,piVar2,&local_50);
          *(int *)(param_1 + 600) = *(int *)(param_1 + 600) + 1;
        }
        puVar6 = (uint *)(piVar2 + 1);
        do {
          uVar4 = *puVar6 - 1;
          bVar10 = (bool)hasExclusiveAccess(puVar6);
        } while (!bVar10);
        *puVar6 = uVar4;
        bVar10 = uVar4 == 0;
        if (bVar10) {
          uVar4 = (uint)*(byte *)(piVar2 + 2);
        }
        if (bVar10 && uVar4 == 0) {
          *(undefined1 *)(piVar2 + 2) = 1;
          (**(code **)(*piVar2 + 4))(piVar2);
        }
      }
      (**(code **)(*piVar2 + 4))(piVar2);
LAB_00478a08:
      iVar8 = iVar8 + 8;
    } while (*(int *)(param_1 + 0x148) != iVar8);
  }
  return;
}



uint fn_00478a24(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  char *local_50;
  int local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  uint local_30;
  char local_2c [8];
  
  if ((*(char *)(DAT_008b6404 + 4) == '\x01') &&
     (*(short *)(DAT_008b6404 + 0x4e) == *(short *)(param_4 + 6) &&
      *(int *)(DAT_008b6404 + 0x50) == *(int *)(param_4 + 8))) {
    return 1;
  }
  local_30 = 1;
  iVar2 = 0;
  local_4c = param_1 + 0x94;
  local_2c[0] = '\0';
  if (*(char *)(param_2 + 0x38) != '\0') {
    if (*(uint *)(param_3 + 0x10) < 3) goto LAB_00478b34;
    iVar2 = *(uint *)(param_3 + 0x10) - 2;
    fn_0015ef58(param_3,*(int *)(param_3 + 0x18) + *(int *)(param_3 + 0xc) + 2,iVar2,0);
    *(int *)(param_3 + 0x10) = iVar2;
  }
  iVar2 = 0;
  do {
    local_50 = local_2c;
    iVar1 = fn_00467160(param_2,local_4c,param_4,param_3);
    if (iVar1 == 0) break;
    iVar2 = iVar2 + 1;
    *(ushort *)(iVar1 + 0x86) = *(ushort *)(param_2 + 0xe) << 8 | *(ushort *)(param_2 + 0xe) >> 8;
    (**(code **)(*(int *)(param_1 + 0x15c) + 0xc))((int *)(param_1 + 0x15c),iVar1,1);
  } while (*(int *)(param_3 + 0x10) != 0);
LAB_00478b34:
  if ((local_2c[0] == '\0' && iVar2 == 0) && (*(int *)(param_3 + 0x10) != 0)) {
    local_50 = &DAT_008528bc;
    local_4c = *(undefined4 *)(param_4 + 4);
    uStack_48 = *(undefined4 *)(param_4 + 8);
    uStack_44 = *(undefined4 *)(param_4 + 0xc);
    uStack_40 = *(undefined4 *)(param_4 + 0x10);
    uStack_3c = *(undefined4 *)(param_4 + 0x14);
    uStack_38 = *(undefined4 *)(param_4 + 0x18);
    uStack_34 = *(undefined4 *)(param_4 + 0x1c);
    local_30 = fn_00468d84(param_1,param_3,&local_50);
    local_30 = local_30 ^ 1;
  }
  return local_30;
}


