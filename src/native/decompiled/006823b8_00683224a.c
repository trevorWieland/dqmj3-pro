#include "006823b8_00683224a.h"



uint fn_00682bbc(short *param_1)

{
  uint uVar1;
  
  uVar1 = 1;
  if ((((*param_1 == 0) && (param_1[1] == 0)) && (param_1[2] == 0)) && (param_1[3] == 0)) {
    uVar1 = 0;
  }
  return uVar1 ^ 1;
}



uint fn_00682bb4(int param_1)

{
  uint uVar1;
  
  uVar1 = 1;
  if ((((*(short *)(param_1 + 8) == 0) && (*(short *)(param_1 + 10) == 0)) &&
      (*(short *)(param_1 + 0xc) == 0)) && (*(short *)(param_1 + 0xe) == 0)) {
    uVar1 = 0;
  }
  return uVar1 ^ 1;
}



undefined4 * fn_00682b74(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00850dcc;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    DAT_00897898 = fn_005244d0();
    if (DAT_00897898 < 0) {
      fn_00146594();
    }
  }
  return param_1;
}



void fn_00682b30(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00850dcc;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    DAT_00897898 = fn_005244d0();
    if (DAT_00897898 < 0) {
      fn_00146594();
    }
  }
  fn_002feef8(param_1);
  return;
}



undefined4 * fn_00682ae8(undefined4 *param_1)

{
  param_1[1] = 0;
  *param_1 = &PTR_FUN_00850dcc;
  DAT_00897898 = fn_00520dac();
  if ((DAT_00897898 & 0x80000000) == 0) {
    param_1[1] = param_1[1] | 1;
  }
  return param_1;
}



undefined4 fn_006823b8(undefined4 param_1,uint *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 *puVar11;
  bool bVar12;
  undefined1 auStack_148 [256];
  undefined1 auStack_48 [4];
  ushort local_44;
  undefined4 uStack_34;
  uint *puStack_30;
  uint uStack_2c;
  uint local_28;
  
  uStack_34 = param_1;
  puStack_30 = param_2;
  uStack_2c = param_3;
  local_28 = param_4;
  fn_005210dc(auStack_48,auStack_148,0x40);
  fn_005210a0(auStack_48);
  uVar9 = *param_2;
  uVar10 = param_2[1];
  if (uVar9 != uVar10) {
    uVar1 = uVar9;
    if (uVar10 <= uVar9) {
      do {
        uVar1 = uVar1 + 4;
      } while (uVar1 != uVar10);
    }
    param_2[1] = uVar10 - (uVar10 - uVar9 & 0xfffffffc);
  }
  do {
    DAT_00897898 = fn_005214f0(param_3 | 0x10000,auStack_48);
    iVar4 = 0x27bf07ba;
    if (DAT_00897898 == 0xd840f846) {
      uVar9 = param_2[1];
      uVar10 = *param_2;
      if (uVar10 != uVar9) {
        uVar1 = uVar10;
        if (uVar9 <= uVar10) {
          do {
            uVar1 = uVar1 + 4;
          } while (uVar1 != uVar9);
        }
        param_2[1] = uVar9 - (uVar9 - uVar10 & 0xfffffffc);
      }
      fn_005210a0(auStack_48);
      DAT_00897898 = 0xd840f845;
    }
    else {
      bVar12 = (DAT_00897898 & 0x80000000) != 0;
      if (bVar12) {
        iVar4 = 0x27bf07bb;
      }
      if (bVar12 && DAT_00897898 + iVar4 != 0) {
        return 0;
      }
      if (((DAT_00897898 != 0xc8a0f842) && (-1 < (int)DAT_00897898)) && (uVar9 = 0, local_44 != 0))
      {
        do {
          uVar2 = fn_005210b0(auStack_48,uVar9 & 0xffff);
          puVar11 = (undefined4 *)param_2[1];
          if (puVar11 == (undefined4 *)param_2[2]) {
            uVar10 = (int)((int)puVar11 - *param_2) >> 2;
            if (uVar10 < (uint)((int)((int)param_2[2] - *param_2) >> 2)) {
              param_2[1] = (uint)(puVar11 + 1);
              if (puVar11 != (undefined4 *)0x0) {
                *puVar11 = puVar11[-1];
              }
              puVar6 = puVar11 + -1;
              puVar7 = puVar11;
              if (puVar11 < puVar6) {
                iVar4 = (int)puVar6 - (int)puVar11;
                if (0 < iVar4) {
                  if (iVar4 * 0x20000000 < 0) {
                    puVar6 = puVar11 + -2;
                    puVar7 = puVar11 + -1;
                    *puVar7 = *puVar6;
                  }
                  for (iVar4 = iVar4 >> 3; iVar4 != 0; iVar4 = iVar4 + -1) {
                    puVar7[-1] = puVar6[-1];
                    puVar6 = puVar6 + -2;
                    puVar7 = puVar7 + -2;
                    *puVar7 = *puVar6;
                  }
                }
              }
              else {
                while (puVar11 != puVar6) {
                  puVar6 = puVar6 + -1;
                  puVar7[-1] = *puVar6;
                  puVar7 = puVar7 + -1;
                }
              }
              *puVar11 = uVar2;
            }
            else {
              uVar5 = uVar10 + (uVar10 >> 1) + (uVar10 >> 3);
              uVar1 = uVar10 + 0x20;
              if (uVar10 + 0x20 <= uVar5) {
                uVar1 = uVar5;
              }
              puVar3 = (undefined4 *)fn_00100fc6(uVar1 << 2,0);
              puVar7 = puVar3;
              for (puVar6 = (undefined4 *)*param_2; puVar6 != puVar11; puVar6 = puVar6 + 1) {
                if (puVar7 != (undefined4 *)0x0) {
                  *puVar7 = *puVar6;
                }
                puVar7 = puVar7 + 1;
              }
              puVar6 = (undefined4 *)(((int)puVar11 - *param_2 & 0xfffffffc) + (int)puVar3);
              if (puVar6 != (undefined4 *)0x0) {
                *puVar6 = uVar2;
              }
              puVar7 = (undefined4 *)param_2[1];
              puVar6 = (undefined4 *)(((int)puVar11 - *param_2 & 0xfffffffc) + (int)puVar3);
              for (; puVar11 != puVar7; puVar11 = puVar11 + 1) {
                puVar6 = puVar6 + 1;
                if (puVar6 != (undefined4 *)0x0) {
                  *puVar6 = *puVar11;
                }
              }
              uVar5 = *param_2;
              uVar8 = param_2[1];
              uVar10 = uVar5;
              if (uVar8 < uVar5) {
                do {
                  uVar10 = uVar10 + 4;
                } while (uVar10 != uVar8);
              }
              fn_001008c4(uVar5,(int)(param_2[2] - uVar5) >> 2,0);
              param_2[2] = (uint)(puVar3 + uVar1);
              param_2[1] = (uint)(puVar3 + ((int)(uVar8 - uVar5) >> 2) + 1);
              *param_2 = (uint)puVar3;
            }
          }
          else {
            param_2[1] = (uint)(puVar11 + 1);
            if (puVar11 != (undefined4 *)0x0) {
              *puVar11 = uVar2;
            }
          }
          uVar9 = uVar9 + 1;
        } while ((int)uVar9 < (int)(uint)local_44);
      }
    }
    if ((DAT_00897898 != 0xd840f845) || (local_28 <= (uint)((int)(param_2[1] - *param_2) >> 2))) {
      return 1;
    }
  } while( true );
}


