#include "004b310c_004b3550b.h"



uint fn_004b3550(int param_1,int param_2,uint *param_3,uint param_4,int param_5)

{
  ushort uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  uint *puVar7;
  int *piVar8;
  int *piVar9;
  ushort uVar10;
  bool bVar11;
  int local_80;
  int *local_78;
  int *local_74;
  int *local_70;
  uint local_6c;
  int *local_68 [3];
  int local_5c;
  undefined *local_58;
  int *local_54;
  int *local_50;
  int *local_4c;
  uint local_48;
  int local_44;
  int iStack_34;
  int local_30;
  uint *puStack_2c;
  uint local_28;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    piVar2 = *(int **)(param_1 + 4);
    iVar5 = *(int *)(*(int *)(param_5 + 8) + 0x10);
    local_58 = &DAT_00855b04;
    local_54 = (int *)0x0;
    local_50 = (int *)0x0;
    local_4c = (int *)0x0;
    local_48 = 0;
    local_80 = iVar5;
    iStack_34 = param_1;
    local_30 = param_2;
    puStack_2c = param_3;
    local_28 = param_4;
    if (piVar2 != *(int **)(param_1 + 0xc)) {
      local_44 = param_2 + 0xe0;
      local_5c = param_2 + 0x100;
      do {
        uVar1 = DAT_008b63a6;
        if (DAT_008b63a4 <= local_48) break;
        if ((*(ushort *)((int)piVar2 + 0x122) < DAT_008b63a6) &&
           (*(char *)((int)piVar2 + 0x131) == '\0')) {
          if ((uint)piVar2[0x45] <= param_3[1] &&
              (uint)(*param_3 <= (uint)piVar2[0x44]) <= piVar2[0x45] - param_3[1]) break;
          if (((((DAT_008b6393 == '\0') ||
                (uVar10 = *(ushort *)(local_30 + 0x3c), (uVar10 & 0xf) != 2)) ||
               (*(byte *)(local_30 + 0x25) >> 4 != 1)) ||
              ((DAT_008b6395 == '\0' && (uVar10 & 0x30) == 0 ||
               ((((DAT_008b6394 == '\0' || ((uVar10 & 0x10) != 0)) && ((uVar10 & 0x30) != 0)) ||
                ((*(char *)(local_5c + 0x31) != '\0' ||
                 (*(char *)((int)piVar2 + 0x66) != *(char *)(local_30 + 0x66))))))))) ||
             ((*(short *)((int)piVar2 + 0x86) != *(short *)(local_30 + 0x86) ||
              ((((*(char *)(DAT_008b6404 + 4) != '\x01' ||
                 ((*(ushort *)(piVar2 + 0xf) & 0x200) == 0)) || ((uVar10 & 0x200) == 0)) &&
               ((piVar2[0x39] != *(int *)(local_44 + 4) ||
                (*(short *)((int)piVar2 + 0xe2) != *(short *)(local_44 + 2))))))))) {
            piVar2 = (int *)piVar2[7];
          }
          else {
            if (local_28 < (uint)(piVar2[0x4d] + local_80)) break;
            if (local_54 == local_4c) {
              local_50 = piVar2;
            }
            else {
              piVar2[5] = (int)local_54;
              local_54[6] = (int)piVar2;
            }
            local_48 = local_48 + 1;
            uVar10 = *(short *)((int)piVar2 + 0x122) + 1;
            *(ushort *)((int)piVar2 + 0x122) = uVar10;
            local_80 = piVar2[0x4d] + local_80;
            local_54 = piVar2;
            if (uVar10 < uVar1) {
              piVar2 = (int *)piVar2[7];
            }
            else {
              piVar8 = piVar2 + 1;
              do {
                bVar11 = (bool)hasExclusiveAccess(piVar8);
              } while (!bVar11);
              *piVar8 = *piVar8 + 1;
              local_74 = piVar2;
              fn_004a34f4(local_68,param_1,&local_74);
              piVar2 = local_68[0];
            }
          }
        }
        else {
          local_78 = piVar2;
          fn_004a34f4(&local_70,param_1,&local_78);
          piVar2 = local_70;
        }
      } while (piVar2 != *(int **)(param_1 + 0xc));
    }
    while (piVar2 != *(int **)(param_1 + 0xc)) {
      if (param_3[1] < (uint)piVar2[0x45] ||
          piVar2[0x45] - param_3[1] < (uint)(*param_3 <= (uint)piVar2[0x44])) {
        piVar2 = (int *)piVar2[7];
      }
      else {
        local_78 = piVar2;
        fn_004a34f4(&local_74,param_1,&local_78);
        piVar2 = local_74;
      }
    }
    if (local_80 != iVar5) {
      local_6c = local_48;
      piVar2 = (int *)fn_0015ece0(0x10);
      if (piVar2 == (int *)0x0) {
        piVar2 = (int *)0x0;
      }
      else {
        *piVar2 = (int)&DAT_00852740;
        iVar3 = fn_0015ece0(0x20);
        iVar5 = 0;
        if (iVar3 != 0) {
          iVar5 = fn_004b54dc();
        }
        piVar2[2] = iVar5;
        *(undefined1 *)(piVar2 + 1) = 0;
        piVar2[3] = 0;
      }
      iVar5 = fn_004b7748();
      piVar8 = local_54;
      if (local_54 != local_4c) {
        do {
          iVar3 = piVar2[2];
          *(undefined4 *)(iVar3 + 0x10) = 0;
          *(undefined4 *)(iVar3 + 0x18) = 0;
          *(undefined1 *)(piVar2 + 1) = 0;
          piVar2[3] = 0;
          (**(code **)(*(int *)(iVar5 + 0x104) + 0x20))((int *)(iVar5 + 0x104),piVar8,piVar2);
          if ((char)piVar8[0x4e] == '\0') {
            *(undefined1 *)(piVar8 + 0x4e) = 1;
          }
          if (*(ushort *)((int)piVar8 + 0x122) < DAT_008b63a6) {
            piVar9 = (int *)piVar8[5];
          }
          else {
            piVar9 = (int *)piVar8[5];
            piVar6 = (int *)piVar8[6];
            if (piVar6 != (int *)0x0) {
              piVar6[5] = (int)piVar9;
            }
            piVar8[6] = 0;
            if (piVar9 != (int *)0x0) {
              piVar9[6] = (int)piVar6;
            }
            piVar8[5] = 0;
            if (local_54 == piVar8) {
              local_54 = piVar9;
            }
            if (local_50 == piVar8) {
              local_50 = piVar6;
            }
            puVar7 = (uint *)(piVar8 + 1);
            local_48 = local_48 - 1;
            do {
              uVar4 = *puVar7 - 1;
              bVar11 = (bool)hasExclusiveAccess(puVar7);
            } while (!bVar11);
            *puVar7 = uVar4;
            bVar11 = uVar4 == 0;
            if (bVar11) {
              uVar4 = (uint)*(byte *)(piVar8 + 2);
            }
            if (bVar11 && uVar4 == 0) {
              *(undefined1 *)(piVar8 + 2) = 1;
              (**(code **)(*piVar8 + 4))(piVar8);
            }
          }
          iVar3 = piVar2[2];
          fn_0015ef58(*(undefined4 *)(param_5 + 8),*(int *)(iVar3 + 0xc) + *(int *)(iVar3 + 0x18),
                       *(undefined4 *)(iVar3 + 0x10),0xffffffff);
          piVar8 = piVar9;
        } while (piVar9 != local_4c);
      }
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 4))(piVar2);
      }
      uVar4 = local_6c;
      fn_00754700(&local_58);
      return uVar4;
    }
    fn_00754700(&local_58);
  }
  return 0;
}



void fn_004b33b4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined1 auStack_20 [12];
  undefined4 local_14 [2];
  
  uVar1 = fn_004ba934(param_2);
  uVar1 = uVar1 & 0x7fff;
  if ((uVar1 == 0) || (3 < uVar1)) {
    local_14[0] = 0x80010002;
    fn_004b8d4c(auStack_20,local_14);
    fn_004ba5a4();
  }
  else if (*(code **)(&DAT_008ed83c + uVar1 * 4) != (code *)0x0) {
                    /* WARNING: Could not emulate address calculation at 0x004b3410 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(&DAT_008ed83c + uVar1 * 4))(param_2,param_3);
    return;
  }
  return;
}



undefined4 * fn_004b32f4(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 local_18 [2];
  
  *param_1 = &DAT_008558d4;
  puVar1 = (undefined4 *)fn_0015ece0(8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &DAT_00853674;
    puVar1[1] = &DAT_008f7d98;
  }
  param_1[1] = puVar1;
  puVar1 = (undefined4 *)fn_0015ece0(0x20);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &DAT_00852ba0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    *(undefined1 *)(puVar1 + 3) = 0;
    *(undefined1 *)((int)puVar1 + 0xd) = 0;
    *(undefined1 *)((int)puVar1 + 0xe) = 0;
    *(undefined1 *)((int)puVar1 + 0xf) = 0;
    *(undefined1 *)(puVar1 + 4) = 0;
    *(undefined1 *)((int)puVar1 + 0x11) = 0;
    *(undefined1 *)((int)puVar1 + 0x12) = 0;
    *(undefined1 *)((int)puVar1 + 0x13) = 0;
    *(undefined1 *)(puVar1 + 5) = 0;
    *(undefined1 *)((int)puVar1 + 0x15) = 0;
    fn_0013d0fc(local_18);
    puVar1[6] = 0;
    puVar1[7] = local_18[0];
  }
  param_1[2] = puVar1;
  param_1[3] = 0;
  return param_1;
}


