#include "0020f2d8_0020f9c0.h"



undefined4 fn_0020f2d8(short *param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  if (*(char *)((int)param_1 + 0x71) == '\0') {
    fn_00661308((int)*param_1);
    iVar2 = fn_0033a374();
    if (iVar2 != 0) {
      iVar2 = 0;
      do {
        iVar6 = (int)(short)iVar2;
        iVar3 = fn_001a46f4(iVar6);
        iVar4 = *(int *)(param_1 + 2);
        if (iVar3 != 0) {
          iVar4 = iVar4 + iVar6 * 0x1c;
        }
        bVar7 = *(char *)(iVar4 + 0x18) != '\0';
        if (bVar7) {
          iVar6 = iVar2;
        }
        if (bVar7 && iVar2 < 0x3ff) {
          iVar3 = (int)(short)iVar2;
          do {
            sVar1 = (short)iVar6;
            iVar4 = fn_001a46f4((int)sVar1);
            iVar5 = *(int *)(param_1 + 2);
            if (iVar4 != 0) {
              iVar5 = iVar5 + sVar1 * 0x1c;
            }
            if (*(char *)(iVar5 + 0x18) != '\0') {
              iVar4 = (int)sVar1;
              fn_0020f3e0(param_1,1,0,iVar3,iVar4);
              fn_0020f3e0(param_1,1,1,iVar3,iVar4);
              fn_0020f3e0(param_1,1,2,iVar3,iVar4);
              if (*(char *)((int)param_1 + 0x71) != '\0') {
                return 1;
              }
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < 0x3ff);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < 0x3ff);
    }
  }
  return 1;
}



void fn_0020f3e0(short *param_1,uint param_2,undefined4 param_3,int param_4,int param_5)

{
  byte bVar1;
  undefined2 uVar3;
  undefined2 uVar2;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  int iVar12;
  int local_98;
  int local_94;
  int local_90;
  undefined2 local_8c;
  undefined2 local_8a;
  uint local_84;
  uint local_80;
  int local_7c;
  int local_78;
  undefined2 local_74;
  undefined2 local_72;
  int local_60;
  int local_58;
  undefined1 local_50 [4];
  int local_4c;
  int local_48;
  undefined2 local_44;
  undefined2 local_42;
  short *psStack_34;
  uint local_30;
  undefined4 local_2c;
  int iStack_28;
  
  if ((*param_1 != param_4 && *param_1 != param_5) &&
     (*(int *)(param_1 + 0x34) - *(int *)(param_1 + 0x32) >> 4 !=
      *(int *)(param_1 + 0x36) - *(int *)(param_1 + 0x32) >> 4)) {
    local_98 = 0;
    local_90 = param_5;
    local_94 = param_4;
    psStack_34 = param_1;
    local_30 = param_2;
    local_2c = param_3;
    iStack_28 = param_4;
    iVar4 = fn_006af07c(param_1 + 2,param_2,param_3,0);
    iVar5 = fn_001a46f4(param_4);
    local_58 = param_4 * 7;
    local_60 = *(int *)(param_1 + 2);
    if (iVar5 != 0) {
      local_60 = local_60 + param_4 * 0x1c;
    }
    iVar5 = fn_001a46f4(param_5);
    local_7c = param_5 * 7;
    if (iVar5 == 0) {
      iVar5 = *(int *)(param_1 + 2);
    }
    else {
      iVar5 = *(int *)(param_1 + 2) + param_5 * 0x1c;
    }
    if (iVar4 != 0) {
      uVar2 = (undefined2)param_4;
      uVar3 = (undefined2)param_5;
      if (iVar4 == 1) {
        if ((char)param_1[0x38] == '\0') {
          local_98 = CONCAT31(((unsigned int)(local_98) >> 8) & 0xffffff,(char)local_30);
          local_8c = uVar2;
          local_8a = uVar3;
          if (local_30 == 1) {
            fn_0020f9c0(param_1,local_2c,param_4,param_5);
          }
          else {
            local_94 = 0;
            local_90 = 0;
            if (param_4 == param_5) {
              if (*(int *)(local_60 + 0x14) != 0) {
                local_94 = *(undefined4 *)(**(int **)(local_60 + 0x10) + 8);
              }
            }
            else {
              if (*(int *)(local_60 + 0x14) != 0) {
                local_94 = *(undefined4 *)(**(int **)(local_60 + 0x10) + 8);
              }
              if (*(int *)(iVar5 + 0x14) != 0) {
                local_90 = *(undefined4 *)(**(int **)(iVar5 + 0x10) + 8);
              }
            }
            fn_0020f1f0(param_1,&local_98);
          }
        }
      }
      else if (iVar4 == 2) {
        local_80 = 0;
        local_84 = 0;
        piVar10 = (int *)**(int **)(local_60 + 0x10);
        if (piVar10 != *(int **)(local_60 + 0x10)) {
          do {
            iVar4 = fn_006b8390(*(undefined4 *)(DAT_00897804 + 0xc),piVar10[2]);
            bVar1 = *(byte *)(iVar4 + 0x3c);
            iVar6 = fn_00661714((int)*(short *)(iVar4 + 0x1c));
            uVar7 = iVar6 - 1;
            if (((uVar7 < 3) && (0x18 < bVar1)) && (bVar1 < 0x32)) {
              iVar4 = fn_00661560();
            }
            else if (((uVar7 < 5) && (0x31 < bVar1)) && (bVar1 < 100)) {
              iVar4 = fn_00661550();
            }
            else if ((uVar7 < 7) && (99 < bVar1)) {
              iVar4 = fn_006615d4();
            }
            else {
              iVar4 = fn_00661308((int)*(short *)(iVar4 + 0x1c));
            }
            iVar6 = fn_00661308(param_4);
            if (iVar6 == iVar4) {
              local_80 = 1;
            }
            piVar9 = (int *)**(int **)(iVar5 + 0x10);
            if (piVar9 != *(int **)(iVar5 + 0x10)) {
              do {
                if (*(char *)((int)param_1 + 0x71) != '\0') {
                  return;
                }
                if (piVar10[2] != piVar9[2]) {
                  iVar4 = fn_006b8390(*(undefined4 *)(DAT_00897804 + 0xc),piVar9[2]);
                  bVar1 = *(byte *)(iVar4 + 0x3c);
                  iVar6 = fn_00661714((int)*(short *)(iVar4 + 0x1c));
                  uVar7 = iVar6 - 1;
                  if (((uVar7 < 3) && (0x18 < bVar1)) && (bVar1 < 0x32)) {
                    iVar4 = fn_00661560();
                  }
                  else if (((uVar7 < 5) && (0x31 < bVar1)) && (bVar1 < 100)) {
                    iVar4 = fn_00661550();
                  }
                  else if ((uVar7 < 7) && (99 < bVar1)) {
                    iVar4 = fn_006615d4();
                  }
                  else {
                    iVar4 = fn_00661308((int)*(short *)(iVar4 + 0x1c));
                  }
                  iVar6 = fn_00661308(param_5);
                  if (iVar6 == iVar4) {
                    local_84 = 1;
                  }
                  iVar6 = piVar10[2];
                  iVar12 = piVar9[2];
                  local_50[0] = (undefined1)local_30;
                  local_90 = param_5;
                  local_98 = iVar12;
                  local_94 = param_4;
                  local_4c = iVar6;
                  local_48 = iVar12;
                  local_44 = uVar2;
                  local_42 = uVar3;
                  iVar4 = fn_006af13c(param_1,local_30,local_2c,iVar6);
                  if (iVar4 != 0) {
                    piVar11 = (int *)(param_1 + 2);
                    local_90 = param_5;
                    local_98 = iVar12;
                    local_94 = param_4;
                    iVar4 = fn_006aee80(piVar11,local_30,local_2c,iVar6);
                    if ((iVar4 != 0) &&
                       (((((param_4 != param_5 && (*(int *)(*piVar11 + local_58 * 4 + 0x14) != 0))
                          && (*(int *)(*piVar11 + local_7c * 4 + 0x14) != 0)) ||
                         ((param_4 == param_5 && (1 < *(uint *)(*piVar11 + local_58 * 4 + 0x14)))))
                        || ((*(char *)(*piVar11 + local_58 * 4 + 0x18) != '\0' &&
                            (*(char *)(*piVar11 + local_7c * 4 + 0x18) != '\0')))))) {
                      fn_0020f1f0(param_1,local_50);
                    }
                  }
                }
                piVar9 = (int *)*piVar9;
              } while (piVar9 != (int *)*(int *)(iVar5 + 0x10));
            }
            piVar10 = (int *)*piVar10;
          } while (piVar10 != (int *)*(int *)(local_60 + 0x10));
        }
        uVar8 = (uint)*(byte *)(param_1 + 0x38);
        uVar7 = uVar8;
        if (uVar8 == 0) {
          uVar7 = local_30;
        }
        if (uVar8 == 0 && uVar7 == 1) {
          if (local_80 == 0 && local_84 == 0) {
            local_98 = 0;
            local_90 = param_5;
            local_94 = param_4;
            fn_0020f198(param_1,1,local_2c,0);
          }
          else if ((local_80 & ~local_84) == 0) {
            if (((local_84 & ~local_80) != 0) &&
               (piVar10 = (int *)**(int **)(iVar5 + 0x10), piVar10 != *(int **)(iVar5 + 0x10))) {
              do {
                local_98 = piVar10[2];
                local_80 = CONCAT31(((unsigned int)(local_80) >> 8) & 0xffffff,1);
                local_7c = 0;
                local_90 = param_5;
                local_94 = param_4;
                local_78 = local_98;
                local_74 = uVar2;
                local_72 = uVar3;
                iVar4 = fn_006af13c(param_1,1,local_2c);
                if (iVar4 != 0) {
                  fn_0020f1f0(param_1,&local_80);
                }
              } while ((*(char *)((int)param_1 + 0x71) == '\0') &&
                      (piVar10 = (int *)*piVar10, piVar10 != (int *)*(int *)(iVar5 + 0x10)));
            }
          }
          else {
            piVar10 = (int *)**(int **)(local_60 + 0x10);
            if (piVar10 != *(int **)(local_60 + 0x10)) {
              do {
                local_7c = piVar10[2];
                local_80 = CONCAT31(((unsigned int)(local_80) >> 8) & 0xffffff,1);
                local_78 = 0;
                local_98 = 0;
                local_90 = param_5;
                local_94 = param_4;
                local_74 = uVar2;
                local_72 = uVar3;
                iVar4 = fn_006af13c(param_1,1,local_2c,local_7c);
                if (iVar4 != 0) {
                  fn_0020f1f0(param_1,&local_80);
                }
              } while ((*(char *)((int)param_1 + 0x71) == '\0') &&
                      (piVar10 = (int *)*piVar10, piVar10 != (int *)*(int *)(local_60 + 0x10)));
            }
          }
        }
      }
    }
  }
  return;
}



undefined4 fn_0020f9c0(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  bool bVar5;
  undefined1 local_30 [4];
  int local_2c;
  int local_28;
  undefined2 local_24;
  undefined2 local_22;
  
  iVar1 = fn_001a46f4(param_3);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 4);
  }
  else {
    iVar1 = *(int *)(param_1 + 4) + param_3 * 0x1c;
  }
  iVar2 = fn_001a46f4(param_4);
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 4);
  }
  else {
    iVar2 = *(int *)(param_1 + 4) + param_4 * 0x1c;
  }
  iVar3 = *(int *)(iVar1 + 0x14);
  bVar5 = iVar3 == 0;
  if (bVar5) {
    iVar3 = *(int *)(iVar2 + 0x14);
  }
  if (bVar5 && iVar3 == 0) {
    iVar1 = fn_0020f198(param_1,1,param_2,0,0,param_3,param_4);
    if (iVar1 != 0) {
      return 1;
    }
  }
  else {
    piVar4 = (int *)**(int **)(iVar1 + 0x10);
    if (piVar4 != *(int **)(iVar1 + 0x10)) {
      do {
        local_2c = piVar4[2];
        local_30[0] = 1;
        local_28 = 0;
        local_24 = (short)param_3;
        local_22 = (short)param_4;
        iVar3 = fn_006af13c(param_1,1,param_2,local_2c,0,param_3,param_4);
        if (iVar3 != 0) {
          fn_0020f1f0(param_1,local_30);
        }
        if (*(char *)(param_1 + 0x71) != '\0') {
          return 1;
        }
        piVar4 = (int *)*piVar4;
      } while (piVar4 != (int *)*(int *)(iVar1 + 0x10));
    }
    if ((param_3 != param_4) &&
       (piVar4 = (int *)**(int **)(iVar2 + 0x10), piVar4 != *(int **)(iVar2 + 0x10))) {
      do {
        local_28 = piVar4[2];
        local_30[0] = 1;
        local_2c = 0;
        local_24 = (short)param_3;
        local_22 = (short)param_4;
        iVar1 = fn_006af13c(param_1,1,param_2,0,local_28,param_3,param_4);
        if (iVar1 != 0) {
          fn_0020f1f0(param_1,local_30);
        }
        if (*(char *)(param_1 + 0x71) != '\0') {
          return 1;
        }
        piVar4 = (int *)*piVar4;
      } while (piVar4 != (int *)*(int *)(iVar2 + 0x10));
    }
  }
  return 0;
}


