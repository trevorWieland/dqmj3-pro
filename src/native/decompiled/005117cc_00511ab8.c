#include "005117cc_00511ab8.h"



void fn_00511ab8(int param_1)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar3 = 0;
  uVar2 = *(uint *)(DAT_008bf4d4 + 0x30);
  if (uVar2 != 0) {
    do {
      if (uVar2 != 0) {
        uVar4 = uVar2 & 1;
        uVar1 = (undefined1)uVar3;
        if (uVar4 == 1) {
          *(undefined1 *)(uVar3 * uVar2 + *(int *)(param_1 + 8)) = uVar1;
        }
        uVar5 = (uint)(uVar4 == 1);
        for (; uVar4 < uVar2; uVar4 = uVar4 + 2) {
          *(undefined1 *)(uVar5 + uVar3 * uVar2 + *(int *)(param_1 + 8)) = uVar1;
          *(undefined1 *)(uVar5 + 1 + uVar3 * uVar2 + *(int *)(param_1 + 8)) = uVar1;
          uVar5 = uVar5 + 2;
        }
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  return;
}



undefined1 * fn_005118f4(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uVar9;
  uint uVar10;
  byte *pbVar11;
  byte *pbVar12;
  uint uVar13;
  bool bVar14;
  bool bVar15;
  
  uVar3 = *(uint *)(DAT_008bf4d4 + 0x30);
  fn_00158f6c(*(undefined4 *)(param_1 + 0xc));
  uVar4 = 0;
  if (uVar3 != 0) {
    do {
      uVar1 = 0;
      if (uVar3 != 0) {
        do {
          uVar5 = (uint)*(byte *)(uVar1 + uVar4 * uVar3 + *(int *)(param_1 + 8));
          bVar15 = uVar5 != uVar4;
          uVar6 = uVar4;
          if (bVar15) {
            uVar6 = uVar1;
          }
          bVar14 = uVar6 <= uVar5;
          if (bVar15 && uVar5 != uVar1) {
            bVar14 = uVar5 <= uVar3;
          }
          if (bVar14 && ((bVar15 && uVar5 != uVar1) && uVar3 != uVar5)) {
            *(char *)(*(int *)(param_1 + 0xc) + uVar5) =
                 *(char *)(*(int *)(param_1 + 0xc) + uVar5) + '\x01';
          }
          uVar1 = uVar1 + 1;
        } while (uVar1 < uVar3);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
  }
  if (*(char *)(*(int *)(param_1 + 0xc) + param_2) != '\0') {
    uVar1 = 1;
    bVar15 = true;
    if (uVar3 != 0) {
      uVar1 = uVar3 * uVar3;
    }
    uVar6 = 0;
    if (uVar3 != 0) {
      do {
        bVar14 = param_2 <= uVar6;
        if (uVar6 != param_2) {
          uVar4 = uVar6 + 1;
          bVar14 = uVar4 <= uVar3;
        }
        if (bVar14 && (uVar6 != param_2 && uVar3 != uVar4)) {
          do {
            if (uVar4 != param_2) {
              pbVar11 = (byte *)(uVar6 * uVar3 + *(int *)(param_1 + 8));
              if (pbVar11[uVar4] == param_2) {
                uVar5 = uVar3;
                if (uVar3 != 0) {
                  pbVar8 = *(byte **)(param_1 + 0xc);
                  uVar2 = 0;
                  pbVar12 = (byte *)(*(int *)(param_1 + 8) + uVar4);
                  pbVar7 = pbVar11;
                  uVar9 = uVar3;
                  uVar10 = uVar1;
                  do {
                    if ((uVar2 != uVar6 && uVar2 != uVar4) && uVar2 != param_2) {
                      uVar13 = (uint)*pbVar7;
                      bVar14 = uVar13 == uVar2;
                      if (bVar14) {
                        uVar13 = (uint)*pbVar12;
                      }
                      if ((bVar14 && uVar13 == uVar4) && (*pbVar8 < uVar10)) {
                        uVar5 = uVar2;
                        uVar10 = (uint)*pbVar8;
                      }
                    }
                    uVar9 = uVar9 - 1;
                    pbVar7 = pbVar7 + 1;
                    pbVar8 = pbVar8 + 1;
                    uVar2 = uVar2 + 1;
                    pbVar12 = pbVar12 + uVar3;
                  } while (uVar9 != 0);
                }
                if (uVar5 == uVar3) {
                  bVar15 = false;
                }
                else {
                  pbVar11[uVar4] = (byte)uVar5;
                  *(byte *)(uVar6 + uVar4 * uVar3 + *(int *)(param_1 + 8)) = (byte)uVar5;
                  *(char *)(*(int *)(param_1 + 0xc) + param_2) =
                       *(char *)(*(int *)(param_1 + 0xc) + param_2) + -2;
                  *(char *)(*(int *)(param_1 + 0xc) + uVar5) =
                       *(char *)(*(int *)(param_1 + 0xc) + uVar5) + '\x02';
                }
              }
            }
            uVar4 = uVar4 + 1;
          } while (uVar4 < uVar3);
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar3);
      if (!bVar15) {
        return &DAT_d8814829;
      }
    }
  }
  return (undefined1 *)0x0;
}



void fn_005117cc(int *param_1,uint param_2)

{
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  int unaff_r9;
  byte *in_r12;
  
  do {
    iVar1 = fn_00512164(param_1,param_2);
  } while (iVar1 != 0);
  while( true ) {
    pbVar5 = (byte *)0x0;
    pbVar4 = (byte *)0x0;
    pbVar3 = *(byte **)(DAT_008bf4d4 + 0x30);
    pbVar2 = DAT_008bf4d4;
    if (pbVar3 != (byte *)0x0) {
      do {
        pbVar2 = (byte *)(param_2 & 1 << ((uint)pbVar4 & 0xff));
        if (pbVar2 != (byte *)0x0) {
          in_r12 = pbVar4 + 1;
        }
        if (pbVar2 != (byte *)0x0 && in_r12 < pbVar3) {
          do {
            if ((((param_2 & 1 << ((uint)in_r12 & 0xff)) != 0) &&
                (pbVar2 = (byte *)(uint)in_r12[(int)pbVar4 * (int)pbVar3 + param_1[2]],
                pbVar2 != pbVar4 && pbVar2 != in_r12)) &&
               (pbVar2 = (byte *)((uint)*(ushort *)
                                         (*param_1 + (int)(in_r12 + (int)pbVar2 * (int)pbVar3) * 2)
                                 + (uint)*(ushort *)
                                          (*param_1 + (int)(pbVar2 + (int)pbVar4 * (int)pbVar3) * 2)
                                 ), pbVar5 < pbVar2)) {
              pbVar5 = pbVar2;
            }
            in_r12 = in_r12 + 1;
          } while (in_r12 < pbVar3);
        }
        pbVar4 = pbVar4 + 1;
      } while (pbVar4 < pbVar3);
    }
    if (pbVar3 != (byte *)0x0) {
      pbVar2 = (byte *)param_1[3];
    }
    pbVar4 = (byte *)0x0;
    if (pbVar3 == (byte *)0x0) break;
    iVar1 = 0;
    do {
      in_r12 = (byte *)(uint)*pbVar2;
      pbVar2 = pbVar2 + 1;
      if (pbVar4 < in_r12) {
        pbVar4 = in_r12;
        unaff_r9 = iVar1;
      }
      pbVar3 = pbVar3 + -1;
      iVar1 = iVar1 + 1;
    } while (pbVar3 != (byte *)0x0);
    if (pbVar4 == (byte *)0x0) {
      return;
    }
    iVar1 = fn_00510c90(param_1,unaff_r9,param_2,(uint)pbVar5 & 0xffff,(uint)(pbVar4 + -1) & 0xffff
                        );
    if (iVar1 == 0) {
      return;
    }
  }
  return;
}


