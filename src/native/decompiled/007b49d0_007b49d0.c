#include "007b49d0_007b49d0.h"



void fn_007b49d0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,int param_4,
                 int param_5,undefined4 *param_6,int param_7,undefined4 param_8,code *param_9)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  int extraout_r1;
  undefined4 *puVar10;
  undefined4 *puVar11;
  bool bVar12;
  undefined4 uVar13;
  int local_74;
  undefined4 *local_6c;
  undefined4 *local_68;
  
  if ((param_4 <= param_5) && (param_4 <= param_7)) {
    puVar2 = (undefined4 *)fn_007b8ab0(param_1,param_2,param_6);
    while (param_6 != puVar2 && param_2 != param_3) {
      iVar3 = (*param_9)(param_2,param_6);
      if (iVar3 == 0) {
        puVar11 = param_6 + 2;
        uVar4 = *param_6;
        uVar9 = param_6[1];
      }
      else {
        uVar4 = *param_2;
        uVar9 = param_2[1];
        puVar11 = param_6;
        param_2 = param_2 + 2;
      }
      *param_1 = uVar4;
      param_1[1] = uVar9;
      param_1 = param_1 + 2;
      param_6 = puVar11;
    }
    uVar4 = fn_007b8ab0(param_6,puVar2,param_1);
    fn_007b8ab0(param_2,param_3,uVar4);
    return;
  }
  if (param_7 < param_5) {
    if (param_5 < param_4) {
      local_74 = param_4 / 2;
      local_6c = param_1 + local_74 * 2;
      iVar3 = (int)param_3 - (int)param_2 >> 3;
      local_68 = param_2;
      while (iVar1 = iVar3, 0 < iVar1) {
        iVar3 = iVar1 / 2;
        iVar6 = (*param_9)(local_68 + iVar3 * 2,local_6c);
        if (iVar6 != 0) {
          local_68 = local_68 + iVar3 * 2 + 2;
          iVar3 = (iVar1 - iVar3) + -1;
        }
      }
      iVar3 = (int)local_68 - (int)param_2 >> 3;
    }
    else {
      iVar3 = param_5 / 2;
      local_68 = param_2 + iVar3 * 2;
      puVar2 = local_68;
      iVar1 = (int)param_2 - (int)param_1 >> 3;
      local_6c = param_1;
      while (iVar6 = iVar1, 0 < iVar6) {
        iVar1 = iVar6 / 2;
        iVar7 = (*param_9)(puVar2,local_6c + iVar1 * 2);
        if (iVar7 == 0) {
          local_6c = local_6c + iVar1 * 2 + 2;
          iVar1 = (iVar6 - iVar1) + -1;
        }
      }
      local_74 = (int)local_6c - (int)param_1 >> 3;
    }
    param_4 = param_4 - local_74;
    if ((iVar3 < param_4) && (iVar3 <= param_7)) {
      puVar2 = local_6c;
      uVar4 = fn_007b8ab0(param_2,local_68,param_6);
      fn_007a1ca0(puVar2,param_2,local_68);
      puVar2 = (undefined4 *)fn_007b8ab0(param_6,uVar4,puVar2);
    }
    else if (param_7 < param_4) {
      puVar2 = local_6c;
      if (local_6c != param_2 && param_2 != local_68) {
        iVar1 = (int)param_2 - (int)local_6c >> 3;
        iVar6 = (int)local_68 - (int)local_6c >> 3;
        iVar7 = iVar1;
        while (iVar7 != 0) {
          fn_00300f74(iVar6,iVar7);
          iVar6 = iVar7;
          iVar7 = extraout_r1;
        }
        while (iVar6 != 0) {
          iVar6 = iVar6 + -1;
          puVar10 = local_6c + iVar6 * 2;
          uVar9 = *puVar10;
          uVar4 = puVar10[1];
          puVar11 = puVar10;
          puVar5 = puVar10 + iVar1 * 2;
          while (puVar5 != puVar10) {
            uVar13 = puVar5[1];
            iVar7 = (int)local_68 - (int)puVar5 >> 3;
            if (iVar1 < iVar7) {
              puVar8 = puVar5 + iVar1 * 2;
            }
            else {
              puVar8 = local_6c + (iVar1 - iVar7) * 2;
            }
            *puVar11 = *puVar5;
            puVar11[1] = uVar13;
            puVar11 = puVar5;
            puVar5 = puVar8;
          }
          *puVar11 = uVar9;
          puVar11[1] = uVar4;
        }
      }
      puVar2 = puVar2 + iVar3 * 2;
    }
    else {
      puVar2 = local_6c;
      uVar4 = fn_007b8ab0(local_6c,param_2,param_6);
      fn_007b8ab0(param_2,local_68,puVar2);
      puVar2 = (undefined4 *)fn_007a1ca0(param_6,uVar4,local_68);
    }
    fn_007b49d0(param_1,local_6c,puVar2,local_74,iVar3,param_6,param_7,0,param_9);
    fn_007b49d0(puVar2,local_68,param_3,param_4,param_5 - iVar3,param_6,param_7,0,param_9);
    return;
  }
  puVar2 = (undefined4 *)fn_007b8ab0(param_2,param_3,param_6);
  if (param_1 == param_2) {
    param_2 = puVar2;
  }
  else {
    if (param_6 != puVar2) {
      param_2 = param_2 + -2;
      puVar2 = puVar2 + -2;
      do {
        while( true ) {
          puVar11 = param_3;
          iVar3 = (*param_9)(puVar2,param_2);
          if (iVar3 == 0) break;
          uVar4 = *param_2;
          uVar9 = param_2[1];
          bVar12 = param_1 != param_2;
          if (bVar12) {
            param_2 = param_2 + -2;
          }
          param_3 = puVar11 + -2;
          *param_3 = uVar4;
          puVar11[-1] = uVar9;
          if (!bVar12) {
            puVar5 = puVar2 + 2;
            if (puVar5 <= param_6) {
              if (param_6 == puVar5) {
                return;
              }
              do {
                puVar2 = puVar5 + -2;
                uVar4 = puVar5[-1];
                param_3[-2] = *puVar2;
                param_3[-1] = uVar4;
                puVar5 = puVar2;
                param_3 = param_3 + -2;
              } while (param_6 != puVar2);
              return;
            }
            iVar3 = (int)puVar5 - (int)param_6;
            if (iVar3 < 1) {
              return;
            }
            if (iVar3 * 0x10000000 < 0) {
              uVar4 = puVar2[1];
              param_3 = puVar11 + -4;
              *param_3 = *puVar2;
              puVar11[-3] = uVar4;
              puVar5 = puVar2;
            }
            iVar3 = iVar3 >> 4;
            if (iVar3 == 0) {
              return;
            }
            do {
              uVar4 = puVar5[-1];
              iVar3 = iVar3 + -1;
              param_3[-2] = puVar5[-2];
              param_3[-1] = uVar4;
              uVar4 = puVar5[-3];
              param_3[-4] = puVar5[-4];
              param_3[-3] = uVar4;
              puVar5 = puVar5 + -4;
              param_3 = param_3 + -4;
            } while (iVar3 != 0);
            return;
          }
        }
        uVar4 = *puVar2;
        uVar9 = puVar2[1];
        bVar12 = param_6 != puVar2;
        if (bVar12) {
          puVar2 = puVar2 + -2;
        }
        param_3 = puVar11 + -2;
        *param_3 = uVar4;
        puVar11[-1] = uVar9;
      } while (bVar12);
      puVar2 = param_2 + 2;
      if (puVar2 <= param_1) {
        if (param_1 == puVar2) {
          return;
        }
        do {
          puVar11 = puVar2 + -2;
          uVar4 = puVar2[-1];
          param_3[-2] = *puVar11;
          param_3[-1] = uVar4;
          puVar2 = puVar11;
          param_3 = param_3 + -2;
        } while (param_1 != puVar11);
        return;
      }
      iVar3 = (int)puVar2 - (int)param_1;
      if (iVar3 < 1) {
        return;
      }
      if (iVar3 * 0x10000000 < 0) {
        uVar4 = param_2[1];
        param_3 = puVar11 + -4;
        *param_3 = *param_2;
        puVar11[-3] = uVar4;
        puVar2 = param_2;
      }
      iVar3 = iVar3 >> 4;
      if (iVar3 == 0) {
        return;
      }
      do {
        uVar4 = puVar2[-1];
        iVar3 = iVar3 + -1;
        param_3[-2] = puVar2[-2];
        param_3[-1] = uVar4;
        uVar4 = puVar2[-3];
        param_3[-4] = puVar2[-4];
        param_3[-3] = uVar4;
        puVar2 = puVar2 + -4;
        param_3 = param_3 + -4;
      } while (iVar3 != 0);
      return;
    }
    param_6 = param_1;
  }
  fn_007a1ca0(param_6,param_2,param_3);
  return;
}


