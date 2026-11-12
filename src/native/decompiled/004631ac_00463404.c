#include "004631ac_00463404.h"



/* WARNING: Removing unreachable block (ram,0x004636b0) */
/* WARNING: Removing unreachable block (ram,0x004636b8) */
/* WARNING: Removing unreachable block (ram,0x004636c4) */

void fn_00463404(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 *puVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  byte local_74 [8];
  int local_6c;
  undefined4 local_68;
  uint local_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined *local_58;
  undefined2 local_54;
  byte local_50 [4];
  int local_4c;
  undefined *local_48;
  char local_44;
  int local_40;
  uint local_3c;
  short local_38 [2];
  int local_34;
  int local_2c;
  int iStack_28;
  
  local_40 = *(int *)(param_2 + 0xd8);
  local_48 = &DAT_00852740;
  piVar5 = (int *)(local_40 + 4);
  do {
    bVar7 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar7);
  *piVar5 = *piVar5 + 1;
  local_44 = '\0';
  local_3c = 0;
  local_4c = param_1 + 0x100;
  local_2c = param_1;
  iStack_28 = param_2;
  do {
    if (*(uint *)(local_40 + 0x10) <= local_3c) {
LAB_00463910:
      fn_00454d0c(&local_48);
      return;
    }
    fn_0074a4c8(&local_48,local_74);
    fn_0074a4c8(&local_48,local_50);
    fn_0074a598(&local_48,local_38);
    if (local_44 != '\0') goto LAB_00463910;
    if (*(uint *)(local_40 + 0x10) - local_3c < (uint)local_50[0] * 2) {
      local_44 = '\x01';
      goto LAB_00463910;
    }
    if ((uint)*(ushort *)(local_4c + 4) < (uint)local_74[0]) {
      uVar1 = (uint)local_50[0] * 2 + local_3c;
      if (uVar1 <= *(uint *)(local_40 + 0x10)) {
        local_3c = uVar1;
      }
    }
    else {
      iVar9 = *(int *)(*(int *)(local_2c + 0x9c) + (uint)local_74[0] * 4);
      iVar2 = fn_001249d0();
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(iVar2 + 0xc);
      }
      (**(code **)(*(int *)(iVar2 + 0x50) + 8))();
      puVar12 = (undefined4 *)0x0;
      iVar2 = *(int *)(*(int *)(iVar9 + 0x14) + 8);
      puVar10 = (undefined4 *)0x0;
      puVar11 = (undefined4 *)0x0;
      if (iVar2 == *(int *)(*(int *)(*(int *)(local_2c + 0x9c) + (uint)local_74[0] * 4) + 0x14)) {
        iVar9 = 0;
      }
      else {
        iVar9 = *(int *)(iVar2 + 0x18);
      }
      while( true ) {
        if ((iVar9 == 0) ||
           ((local_38[0] != *(short *)(iVar9 + 0x44) &&
            ((short)(local_38[0] - *(short *)(iVar9 + 0x44)) < 1)))) {
          bVar7 = false;
        }
        else {
          bVar7 = true;
        }
        if (!bVar7) break;
        local_34 = iVar2 + 0x10;
        puVar4 = puVar11;
        if (puVar10 == puVar12) {
          uVar1 = (int)puVar10 - (int)puVar11 >> 3;
          if (uVar1 < (uint)((int)puVar12 - (int)puVar11 >> 3)) {
            puVar11 = puVar10 + 2;
            if (puVar10 != (undefined4 *)0x0) {
              *puVar10 = &DAT_00853688;
              *(undefined2 *)(puVar10 + 1) = *(undefined2 *)(puVar10 + -1);
            }
            iVar8 = 1;
            iVar9 = (int)(puVar10 + -2) - (int)puVar10 >> 3;
            if (1 < iVar9 + 1) {
              puVar3 = puVar10;
              puVar6 = puVar10 + -2;
              do {
                iVar8 = iVar8 + 1;
                *(undefined2 *)(puVar3 + -1) = *(undefined2 *)(puVar6 + -1);
                puVar3 = puVar3 + -2;
                puVar6 = puVar6 + -2;
              } while (iVar8 < iVar9 + 1);
            }
            *(undefined2 *)(puVar10 + 1) = *(undefined2 *)(iVar2 + 0x14);
          }
          else {
            local_64 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
            if (local_64 < uVar1 + 0x20) {
              local_64 = uVar1 + 0x20;
            }
            puVar4 = (undefined4 *)fn_0015ece0(local_64 << 3);
            puVar12 = puVar4;
            for (puVar3 = puVar11; puVar3 != puVar10; puVar3 = puVar3 + 2) {
              if (puVar12 != (undefined4 *)0x0) {
                *puVar12 = &DAT_00853688;
                *(undefined2 *)(puVar12 + 1) = *(undefined2 *)(puVar3 + 1);
              }
              puVar12 = puVar12 + 2;
            }
            puVar12 = (undefined4 *)(((int)puVar10 - (int)puVar11 & 0xfffffff8U) + (int)puVar4);
            if (puVar12 != (undefined4 *)0x0) {
              *puVar12 = &DAT_00853688;
              *(undefined2 *)(puVar12 + 1) = *(undefined2 *)(local_34 + 4);
            }
            local_6c = (int)puVar10 - (int)puVar11 >> 3;
            for (puVar12 = puVar11; puVar12 != puVar10; puVar12 = puVar12 + 2) {
              (**(code **)*puVar12)(puVar12);
            }
            if (puVar11 != (undefined4 *)0x0) {
              if ((code *)puVar11[-2] == (code *)0x0) {
                fn_0030233c(puVar11 + -2);
              }
              else {
                (*(code *)puVar11[-2])();
              }
            }
            puVar11 = puVar4 + local_6c * 2 + 2;
            puVar12 = puVar4 + local_64 * 2;
          }
        }
        else {
          puVar11 = puVar10 + 2;
          if (puVar10 != (undefined4 *)0x0) {
            *puVar10 = &DAT_00853688;
            *(undefined2 *)(puVar10 + 1) = *(undefined2 *)(iVar2 + 0x14);
          }
        }
        iVar9 = *(int *)(iVar2 + 0xc);
        if (*(int *)(iVar2 + 0xc) == 0) {
          iVar9 = *(int *)(iVar2 + 4);
          if (iVar2 == *(int *)(iVar9 + 0xc)) {
            do {
              iVar2 = iVar9;
              iVar9 = *(int *)(iVar2 + 4);
            } while (iVar2 == *(int *)(iVar9 + 0xc));
          }
          if (*(int *)(iVar2 + 0xc) != iVar9) {
            iVar2 = iVar9;
          }
        }
        else {
          do {
            iVar2 = iVar9;
            iVar9 = *(int *)(iVar2 + 8);
          } while (*(int *)(iVar2 + 8) != 0);
        }
        puVar10 = puVar11;
        puVar11 = puVar4;
        if (iVar2 == *(int *)(*(int *)(*(int *)(local_2c + 0x9c) + (uint)local_74[0] * 4) + 0x14)) {
          iVar9 = 0;
        }
        else {
          iVar9 = *(int *)(iVar2 + 0x18);
        }
      }
      iVar2 = fn_001249d0();
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(iVar2 + 0xc);
      }
      (**(code **)(*(int *)(iVar2 + 0x50) + 0xc))();
      uVar1 = 0;
      if ((int)puVar10 - (int)puVar11 >> 3 != 0) {
        do {
          local_68 = *(undefined4 *)(param_2 + 0x100);
          local_64 = *(uint *)(param_2 + 0x104);
          fn_00461210(local_2c,&local_68,puVar11 + uVar1 * 2,local_74[0]);
          uVar1 = uVar1 + 1;
        } while (uVar1 < (uint)((int)puVar10 - (int)puVar11 >> 3));
      }
      iVar2 = 0;
      puVar12 = puVar11;
      if (local_50[0] != 0) {
        do {
          if (*(int *)(local_40 + 0x10) - local_3c < 2) {
            local_44 = '\x01';
            break;
          }
          local_54 = *(undefined2 *)
                      (*(int *)(local_40 + 0x18) + *(int *)(local_40 + 0xc) + local_3c);
          local_58 = &DAT_00853688;
          local_60 = *(undefined4 *)(param_2 + 0x100);
          uStack_5c = *(undefined4 *)(param_2 + 0x104);
          local_3c = local_3c + 2;
          fn_00461210(local_2c,&local_60,&local_58,local_74[0]);
          iVar2 = iVar2 + 1;
        } while (iVar2 < (int)(uint)local_50[0]);
      }
      for (; puVar12 != puVar10; puVar12 = puVar12 + 2) {
        (**(code **)*puVar12)(puVar12);
      }
      if (puVar11 != (undefined4 *)0x0) {
        if ((code *)puVar11[-2] == (code *)0x0) {
          fn_0030233c(puVar11 + -2);
        }
        else {
          (*(code *)puVar11[-2])();
        }
      }
    }
  } while( true );
}



bool fn_004631ac(int param_1,int param_2)

{
  short sVar1;
  ushort uVar2;
  
  uVar2 = *(ushort *)(param_2 + 0x3c);
  if ((uVar2 & 0xf) == 2 && (uVar2 & 0x20) == 0) {
    if ((uVar2 & 0x10) == 0) {
      if ((uVar2 & 0x2000) == 0) {
        if ((uVar2 & 0x600) == 0) {
          sVar1 = *(short *)(param_1 + 0xf4) - *(short *)(param_2 + 0x44);
        }
        else {
          if (*(char *)(param_1 + 0x14b) == '\0') {
            return false;
          }
          sVar1 = *(short *)(param_1 + 0x100) - *(short *)(param_2 + 0x44);
        }
        if (0 < sVar1) {
          *(int *)(param_1 + 0x2fc) = *(int *)(param_1 + 0x2fc) + 1;
          return true;
        }
      }
    }
    else if ((uint)*(byte *)(param_2 + 0x84) <= (uint)*(ushort *)(param_1 + 0x104)) {
      return 0 < (short)(*(short *)(*(int *)(*(int *)(param_1 + 0x9c) +
                                            (uint)*(byte *)(param_2 + 0x84) * 4) + 0x38) -
                        *(short *)(param_2 + 0x44));
    }
  }
  return false;
}


