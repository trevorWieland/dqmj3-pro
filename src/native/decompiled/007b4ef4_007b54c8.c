#include "007b4ef4_007b54c8.h"



void fn_007b54c8(int param_1,int param_2,int param_3,int param_4,uint param_5)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  ulonglong uVar13;
  int local_48;
  uint local_44;
  int local_40 [3];
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int local_28;
  
  local_28 = param_4;
  iStack_2c = param_3;
  iStack_30 = param_2;
  iStack_34 = param_1;
  uVar13 = (ulonglong)param_5;
  local_44 = param_5;
  while (param_4 * 2 <= (param_2 - param_1) / 0x34) {
    local_48 = (int)uVar13;
    iVar7 = param_1 + param_4 * 0x68;
    iVar5 = param_1 + local_28 * 0x34;
    iVar4 = iVar5;
    while (param_1 != iVar5 && iVar4 != iVar7) {
      iVar1 = fn_006f0908(&local_48,iVar4,param_1);
      if (iVar1 == 0) {
        *(undefined1 *)(param_3 + 4) = *(undefined1 *)(param_1 + 4);
        *(undefined1 *)(param_3 + 5) = *(undefined1 *)(param_1 + 5);
        *(undefined1 *)(param_3 + 6) = *(undefined1 *)(param_1 + 6);
        *(undefined4 *)(param_3 + 8) = *(undefined4 *)(param_1 + 8);
        fn_006f94f4(param_3 + 0xc,param_1 + 0xc);
        *(undefined4 *)(param_3 + 0xc) = *(undefined4 *)(param_1 + 0xc);
        puVar6 = (undefined4 *)(param_1 + 0x18);
        *(undefined2 *)(param_3 + 0xc) = *(undefined2 *)(param_1 + 0xc);
        *(undefined2 *)(param_3 + 0xc) = *(undefined2 *)(param_1 + 0xc);
        *(undefined2 *)(param_3 + 0xc) = *(undefined2 *)(param_1 + 0xc);
        *(undefined1 *)(param_3 + 0x16) = *(undefined1 *)(param_1 + 0x16);
        uVar2 = *(undefined4 *)(param_1 + 0x1c);
        uVar8 = *(undefined4 *)(param_1 + 0x20);
        uVar9 = *(undefined4 *)(param_1 + 0x24);
        uVar10 = *(undefined4 *)(param_1 + 0x28);
        uVar11 = *(undefined4 *)(param_1 + 0x2c);
        uVar12 = *(undefined4 *)(param_1 + 0x30);
        param_1 = param_1 + 0x34;
        *(undefined4 *)(param_3 + 0x18) = *puVar6;
        *(undefined4 *)(param_3 + 0x1c) = uVar2;
        *(undefined4 *)(param_3 + 0x20) = uVar8;
        *(undefined4 *)(param_3 + 0x24) = uVar9;
        *(undefined4 *)(param_3 + 0x28) = uVar10;
        *(undefined4 *)(param_3 + 0x2c) = uVar11;
        *(undefined4 *)(param_3 + 0x30) = uVar12;
      }
      else {
        *(undefined1 *)(param_3 + 4) = *(undefined1 *)(iVar4 + 4);
        *(undefined1 *)(param_3 + 5) = *(undefined1 *)(iVar4 + 5);
        *(undefined1 *)(param_3 + 6) = *(undefined1 *)(iVar4 + 6);
        *(undefined4 *)(param_3 + 8) = *(undefined4 *)(iVar4 + 8);
        fn_006f94f4(param_3 + 0xc,iVar4 + 0xc);
        *(undefined4 *)(param_3 + 0xc) = *(undefined4 *)(iVar4 + 0xc);
        puVar6 = (undefined4 *)(iVar4 + 0x18);
        *(undefined2 *)(param_3 + 0xc) = *(undefined2 *)(iVar4 + 0xc);
        *(undefined2 *)(param_3 + 0xc) = *(undefined2 *)(iVar4 + 0xc);
        *(undefined2 *)(param_3 + 0xc) = *(undefined2 *)(iVar4 + 0xc);
        *(undefined1 *)(param_3 + 0x16) = *(undefined1 *)(iVar4 + 0x16);
        uVar2 = *(undefined4 *)(iVar4 + 0x1c);
        uVar8 = *(undefined4 *)(iVar4 + 0x20);
        uVar9 = *(undefined4 *)(iVar4 + 0x24);
        uVar10 = *(undefined4 *)(iVar4 + 0x28);
        uVar11 = *(undefined4 *)(iVar4 + 0x2c);
        uVar12 = *(undefined4 *)(iVar4 + 0x30);
        iVar4 = iVar4 + 0x34;
        *(undefined4 *)(param_3 + 0x18) = *puVar6;
        *(undefined4 *)(param_3 + 0x1c) = uVar2;
        *(undefined4 *)(param_3 + 0x20) = uVar8;
        *(undefined4 *)(param_3 + 0x24) = uVar9;
        *(undefined4 *)(param_3 + 0x28) = uVar10;
        *(undefined4 *)(param_3 + 0x2c) = uVar11;
        *(undefined4 *)(param_3 + 0x30) = uVar12;
      }
      param_3 = param_3 + 0x34;
    }
    uVar2 = fn_007b8a24(param_1,iVar5,param_3);
    param_3 = fn_007b8a24(iVar4,iVar7,uVar2);
    local_44 = (uint)uVar13;
    param_1 = iVar7;
  }
  local_40[0] = (param_2 - param_1) / 0x34;
  piVar3 = local_40;
  if (local_28 < local_40[0]) {
    piVar3 = &local_28;
  }
  local_28 = *piVar3;
  iVar4 = param_1 + local_28 * 0x34;
  local_48 = param_3;
  fn_007b91e4(param_1,iVar4,iVar4,param_2);
  return;
}



void fn_007b4ef4(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,int param_4,
                 int param_5,undefined4 *param_6,int param_7,undefined4 param_8,code *param_9)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int extraout_r1;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  bool bVar10;
  undefined4 *local_44;
  int local_3c;
  int local_38;
  
  if ((param_5 < param_4) || (param_7 < param_4)) {
    iVar2 = (int)param_2 - (int)param_1 >> 2;
    if (param_7 < param_5) {
      if (param_5 < param_4) {
        local_38 = param_4 / 2;
        puVar1 = param_1 + local_38;
        iVar2 = (int)param_3 - (int)param_2 >> 2;
        local_44 = param_2;
        while (iVar9 = iVar2, 0 < iVar9) {
          iVar2 = iVar9 / 2;
          iVar4 = (*param_9)(local_44[iVar2],*puVar1);
          if (iVar4 != 0) {
            local_44 = local_44 + iVar2 + 1;
            iVar2 = (iVar9 - iVar2) + -1;
          }
        }
        local_3c = (int)local_44 - (int)param_2 >> 2;
      }
      else {
        local_3c = param_5 / 2;
        local_44 = param_2 + local_3c;
        puVar1 = param_1;
        while (iVar9 = iVar2, 0 < iVar9) {
          iVar2 = iVar9 / 2;
          iVar4 = (*param_9)(*local_44,puVar1[iVar2]);
          if (iVar4 == 0) {
            puVar1 = puVar1 + iVar2 + 1;
            iVar2 = (iVar9 - iVar2) + -1;
          }
        }
        local_38 = (int)puVar1 - (int)param_1 >> 2;
      }
      param_4 = param_4 - local_38;
      if ((local_3c < param_4) && (local_3c <= param_7)) {
        uVar3 = fn_007b8b4c(param_2,local_44,param_6);
        puVar5 = local_44;
        if (puVar1 < param_2) {
          if (0 < (int)param_2 - (int)puVar1) {
            iVar2 = (int)param_2 - (int)puVar1 >> 2;
            iVar9 = 0;
            do {
              iVar2 = iVar2 + -1;
              local_44[iVar9 + -1] = param_2[iVar9 + -1];
              iVar9 = iVar9 + -1;
            } while (iVar2 != 0);
          }
        }
        else {
          while (puVar1 != param_2) {
            param_2 = param_2 + -1;
            puVar5[-1] = *param_2;
            puVar5 = puVar5 + -1;
          }
        }
        puVar5 = (undefined4 *)fn_007b8b4c(param_6,uVar3,puVar1);
      }
      else if (param_7 < param_4) {
        if (puVar1 != param_2 && param_2 != local_44) {
          iVar2 = (int)param_2 - (int)puVar1 >> 2;
          iVar9 = (int)local_44 - (int)puVar1 >> 2;
          iVar4 = iVar2;
          while (iVar4 != 0) {
            fn_00300f74(iVar9,iVar4);
            iVar9 = iVar4;
            iVar4 = extraout_r1;
          }
          while (iVar9 != 0) {
            iVar9 = iVar9 + -1;
            puVar7 = puVar1 + iVar9;
            uVar3 = *puVar7;
            puVar5 = puVar7;
            puVar6 = puVar7 + iVar2;
            while (puVar6 != puVar7) {
              *puVar5 = *puVar6;
              iVar4 = (int)local_44 - (int)puVar6 >> 2;
              puVar5 = puVar6;
              if (iVar2 < iVar4) {
                puVar6 = puVar6 + iVar2;
              }
              else {
                puVar6 = puVar1 + (iVar2 - iVar4);
              }
            }
            *puVar5 = uVar3;
          }
        }
        puVar5 = puVar1 + local_3c;
      }
      else {
        puVar6 = (undefined4 *)fn_007b8b4c(puVar1,param_2,param_6);
        fn_007b8b4c(param_2,local_44,puVar1);
        puVar5 = local_44;
        if (param_6 < puVar6) {
          uVar8 = (int)puVar6 - (int)param_6;
          if (0 < (int)uVar8) {
            iVar2 = (int)uVar8 >> 2;
            iVar9 = 0;
            do {
              iVar2 = iVar2 + -1;
              local_44[iVar9 + -1] = puVar6[iVar9 + -1];
              iVar9 = iVar9 + -1;
            } while (iVar2 != 0);
            puVar5 = (undefined4 *)((int)local_44 - (uVar8 & 0xfffffffc));
          }
        }
        else {
          while (param_6 != puVar6) {
            puVar6 = puVar6 + -1;
            puVar5[-1] = *puVar6;
            puVar5 = puVar5 + -1;
          }
        }
      }
      fn_007b4ef4(param_1,puVar1,puVar5,local_38,local_3c,param_6,param_7,0,param_9);
      fn_007b4ef4(puVar5,local_44,param_3,param_4,param_5 - local_3c,param_6,param_7,0,param_9);
      return;
    }
    puVar1 = (undefined4 *)fn_007b8b4c(param_2,param_3);
    if (param_1 == param_2) {
      if (param_6 < puVar1) {
        if (0 < (int)puVar1 - (int)param_6) {
          iVar2 = (int)puVar1 - (int)param_6 >> 2;
          iVar9 = 0;
          do {
            iVar2 = iVar2 + -1;
            param_3[iVar9 + -1] = puVar1[iVar9 + -1];
            iVar9 = iVar9 + -1;
          } while (iVar2 != 0);
          return;
        }
      }
      else if (param_6 != puVar1) {
        do {
          puVar1 = puVar1 + -1;
          param_3 = param_3 + -1;
          *param_3 = *puVar1;
        } while (param_6 != puVar1);
        return;
      }
    }
    else if (param_6 == puVar1) {
      if (param_2 <= param_1) {
        do {
          param_2 = param_2 + -1;
          param_3 = param_3 + -1;
          *param_3 = *param_2;
        } while (param_1 != param_2);
        return;
      }
      if (0 < (int)param_2 - (int)param_1) {
        iVar9 = 0;
        do {
          iVar2 = iVar2 + -1;
          param_3[iVar9 + -1] = param_2[iVar9 + -1];
          iVar9 = iVar9 + -1;
        } while (iVar2 != 0);
        return;
      }
    }
    else {
      puVar1 = puVar1 + -1;
      param_2 = param_2 + -1;
      do {
        while (iVar2 = (*param_9)(*puVar1,*param_2), iVar2 == 0) {
          uVar3 = *puVar1;
          bVar10 = param_6 != puVar1;
          if (bVar10) {
            puVar1 = puVar1 + -1;
          }
          param_3 = param_3 + -1;
          *param_3 = uVar3;
          if (!bVar10) {
            param_2 = param_2 + 1;
            if (param_1 < param_2) {
              if ((int)param_2 - (int)param_1 < 1) {
                return;
              }
              iVar2 = (int)param_2 - (int)param_1 >> 2;
              iVar9 = 0;
              do {
                iVar2 = iVar2 + -1;
                param_3[iVar9 + -1] = param_2[iVar9 + -1];
                iVar9 = iVar9 + -1;
              } while (iVar2 != 0);
              return;
            }
            if (param_1 == param_2) {
              return;
            }
            do {
              param_2 = param_2 + -1;
              param_3 = param_3 + -1;
              *param_3 = *param_2;
            } while (param_1 != param_2);
            return;
          }
        }
        uVar3 = *param_2;
        bVar10 = param_1 != param_2;
        if (bVar10) {
          param_2 = param_2 + -1;
        }
        param_3 = param_3 + -1;
        *param_3 = uVar3;
      } while (bVar10);
      puVar1 = puVar1 + 1;
      if (param_6 < puVar1) {
        if (0 < (int)puVar1 - (int)param_6) {
          iVar2 = (int)puVar1 - (int)param_6 >> 2;
          iVar9 = 0;
          do {
            iVar2 = iVar2 + -1;
            param_3[iVar9 + -1] = puVar1[iVar9 + -1];
            iVar9 = iVar9 + -1;
          } while (iVar2 != 0);
          return;
        }
      }
      else if (param_6 != puVar1) {
        do {
          puVar1 = puVar1 + -1;
          param_3 = param_3 + -1;
          *param_3 = *puVar1;
        } while (param_6 != puVar1);
        return;
      }
    }
  }
  else {
    puVar1 = (undefined4 *)fn_007b8b4c(param_1,param_2,param_6);
    while (param_6 != puVar1 && param_2 != param_3) {
      iVar2 = (*param_9)(*param_2,*param_6);
      if (iVar2 == 0) {
        puVar5 = param_6 + 1;
        uVar3 = *param_6;
      }
      else {
        uVar3 = *param_2;
        puVar5 = param_6;
        param_2 = param_2 + 1;
      }
      *param_1 = uVar3;
      param_1 = param_1 + 1;
      param_6 = puVar5;
    }
    uVar3 = fn_007b8b4c(param_6,puVar1,param_1);
    fn_007b8b4c(param_2,param_3,uVar3);
  }
  return;
}


