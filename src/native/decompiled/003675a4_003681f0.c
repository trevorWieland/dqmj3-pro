#include "003675a4_003681f0.h"



short * fn_003681f0(int *param_1,int param_2,undefined4 param_3)

{
  short *psVar1;
  
  psVar1 = (short *)(param_1[1] + param_2 * 0x34);
  if ((psVar1[6] != 0) &&
     (psVar1 = (short *)(**(code **)(*param_1 + 0x50))
                                  (param_1,(int)*psVar1,(int)*(char *)((int)psVar1 + 7),param_3),
     psVar1 == (short *)0x0)) {
    psVar1 = (short *)(param_1[1] + param_2 * 0x34);
  }
  return psVar1 + 8;
}



int fn_00367f24(int param_1,uint *param_2,int param_3,uint param_4,undefined4 *param_5)

{
  uint uVar1;
  short *psVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  
  iVar13 = 0;
  iVar6 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10);
  uVar12 = 0;
  iVar9 = iVar6 >> 0x1f;
  uVar11 = param_4;
  if (iVar6 / 0x34 + iVar9 != iVar9) {
    do {
      psVar2 = (short *)(*(int *)(param_1 + 0x10) + uVar12 * 0x34);
      if ((*psVar2 == param_3) &&
         (uVar3 = (uint)*(char *)((int)psVar2 + 7),
         (uVar3 == param_4 || param_4 == 0xffffffff) || uVar3 == 0xffffffff)) {
        if (param_5 != (undefined4 *)0x0) {
          puVar7 = (uint *)param_5[1];
          puVar4 = (uint *)*param_5;
          while( true ) {
            if (puVar4 != puVar7) {
              uVar11 = *puVar4;
            }
            if (puVar4 == puVar7 || uVar11 == uVar12) break;
            puVar4 = puVar4 + 1;
          }
          if (puVar4 != puVar7) goto LAB_003681b8;
        }
        if (param_2 != (uint *)0x0) {
          puVar4 = (uint *)param_2[1];
          if (puVar4 == (uint *)param_2[2]) {
            uVar11 = (int)((int)puVar4 - *param_2) >> 2;
            if (uVar11 < (uint)((int)((int)param_2[2] - *param_2) >> 2)) {
              param_2[1] = (uint)(puVar4 + 1);
              if (puVar4 != (uint *)0x0) {
                *puVar4 = puVar4[-1];
              }
              puVar7 = puVar4 + -1;
              puVar10 = puVar4;
              if (puVar4 < puVar7) {
                iVar9 = (int)puVar7 - (int)puVar4;
                if (0 < iVar9) {
                  uVar11 = iVar9 * 0x20000000;
                  if ((int)uVar11 < 0) {
                    puVar7 = puVar4 + -2;
                    uVar11 = *puVar7;
                    puVar10 = puVar4 + -1;
                    *puVar10 = uVar11;
                  }
                  for (iVar9 = iVar9 >> 3; iVar9 != 0; iVar9 = iVar9 + -1) {
                    puVar10[-1] = puVar7[-1];
                    puVar7 = puVar7 + -2;
                    uVar11 = *puVar7;
                    puVar10 = puVar10 + -2;
                    *puVar10 = uVar11;
                  }
                }
              }
              else {
                while (puVar4 != puVar7) {
                  puVar7 = puVar7 + -1;
                  uVar11 = *puVar7;
                  puVar10[-1] = uVar11;
                  puVar10 = puVar10 + -1;
                }
              }
              *puVar4 = uVar12;
            }
            else {
              uVar3 = uVar11 + (uVar11 >> 1) + (uVar11 >> 3);
              if (uVar3 < uVar11 + 0x20) {
                uVar3 = uVar11 + 0x20;
              }
              puVar5 = (uint *)fn_00100fc6(uVar3 << 2,0);
              puVar10 = puVar5;
              for (puVar7 = (uint *)*param_2; puVar7 != puVar4; puVar7 = puVar7 + 1) {
                if (puVar10 != (uint *)0x0) {
                  *puVar10 = *puVar7;
                }
                puVar10 = puVar10 + 1;
              }
              puVar7 = (uint *)((int)puVar5 + ((int)puVar4 - *param_2 & 0xfffffffc));
              if (puVar7 != (uint *)0x0) {
                *puVar7 = uVar12;
              }
              puVar10 = (uint *)param_2[1];
              puVar7 = (uint *)((int)puVar5 + ((int)puVar4 - *param_2 & 0xfffffffc));
              for (; puVar4 != puVar10; puVar4 = puVar4 + 1) {
                puVar7 = puVar7 + 1;
                if (puVar7 != (uint *)0x0) {
                  *puVar7 = *puVar4;
                }
              }
              uVar8 = param_2[1];
              uVar11 = *param_2;
              iVar9 = uVar8 - uVar11;
              uVar1 = uVar11;
              if (uVar8 <= uVar11) {
                for (; uVar1 != uVar8; uVar1 = uVar1 + 4) {
                }
              }
              fn_001008c4(uVar11,(int)(param_2[2] - uVar11) >> 2,0);
              param_2[2] = (uint)(puVar5 + uVar3);
              *param_2 = (uint)puVar5;
              param_2[1] = (uint)(puVar5 + (iVar9 >> 2) + 1);
            }
          }
          else {
            param_2[1] = (uint)(puVar4 + 1);
            if (puVar4 != (uint *)0x0) {
              *puVar4 = uVar12;
            }
          }
        }
        iVar13 = iVar13 + 1;
      }
LAB_003681b8:
      uVar12 = uVar12 + 1;
    } while (uVar12 < (uint)((*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10)) / 0x34));
  }
  return iVar13;
}



undefined4 * fn_00367cd8(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_00827548;
  uVar1 = param_1[0xe];
  uVar2 = uVar1;
  if ((uint)param_1[0xf] < uVar1) {
    do {
      uVar2 = uVar2 + 0x34;
    } while (uVar2 != param_1[0xf]);
  }
  fn_001008c4(uVar1,(int)(param_1[0x10] - uVar1) / 0x34,0);
  uVar1 = param_1[0xb];
  uVar2 = uVar1;
  if ((uint)param_1[0xc] < uVar1) {
    do {
      uVar2 = uVar2 + 0x34;
    } while (uVar2 != param_1[0xc]);
  }
  fn_001008c4(uVar1,(int)(param_1[0xd] - uVar1) / 0x34,0);
  if ((int *)param_1[10] != (int *)0x0) {
    (**(code **)(*(int *)param_1[10] + 4))();
  }
  if ((int *)param_1[9] != (int *)0x0) {
    (**(code **)(*(int *)param_1[9] + 4))();
  }
  uVar1 = param_1[6];
  uVar2 = uVar1;
  if ((uint)param_1[7] <= uVar1) {
    for (; uVar2 != param_1[7]; uVar2 = uVar2 + 0x2c) {
    }
  }
  fn_001008c4(uVar1,(int)(param_1[8] - uVar1) / 0x2c,0);
  if (param_1[3] != 0) {
    fn_004286f8();
    fn_002feef8();
  }
  if (param_1[2] != 0) {
    fn_002feef8(param_1[2]);
  }
  return param_1;
}



undefined4 * fn_00367b10(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint *puVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  uint local_20;
  uint local_1c;
  
  puVar1 = (undefined4 *)fn_0069c2c8();
  puVar1[1] = 0;
  *puVar1 = &PTR_FUN_00827548;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0xbf800000;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  *(undefined1 *)(puVar1 + 0x11) = 0;
  local_20 = 0x14;
  puVar9 = puVar1 + 6;
  if ((uint)((int)(puVar1[8] - puVar1[6]) / 0x2c) < 0x14) {
    uVar10 = (int)(puVar1[7] - puVar1[6]) / 0x2c;
    local_1c = uVar10 + (uVar10 >> 1) + (uVar10 >> 3);
    if (local_1c < uVar10 + 0x20) {
      local_1c = uVar10 + 0x20;
    }
    puVar2 = &local_1c;
    if (local_1c < 0x15) {
      puVar2 = &local_20;
    }
    uVar10 = *puVar2;
    puVar3 = (undefined4 *)fn_00100fc6(uVar10 * 0x2c,0);
    puVar8 = (undefined4 *)puVar1[7];
    puVar4 = puVar3;
    for (puVar7 = (undefined4 *)*puVar9; puVar7 != puVar8; puVar7 = puVar7 + 0xb) {
      if (puVar4 != (undefined4 *)0x0) {
        uVar11 = puVar7[1];
        uVar12 = puVar7[2];
        uVar13 = puVar7[3];
        uVar14 = puVar7[4];
        uVar15 = puVar7[5];
        uVar16 = puVar7[6];
        uVar17 = puVar7[7];
        *puVar4 = *puVar7;
        puVar4[1] = uVar11;
        puVar4[2] = uVar12;
        puVar4[3] = uVar13;
        puVar4[4] = uVar14;
        puVar4[5] = uVar15;
        puVar4[6] = uVar16;
        puVar4[7] = uVar17;
        uVar11 = puVar7[9];
        uVar12 = puVar7[10];
        puVar4[8] = puVar7[8];
        puVar4[9] = uVar11;
        puVar4[10] = uVar12;
      }
      puVar4 = puVar4 + 0xb;
    }
    uVar5 = *puVar9;
    uVar6 = uVar5;
    if ((uint)puVar1[7] < uVar5) {
      do {
        uVar6 = uVar6 + 0x2c;
      } while (uVar6 != puVar1[7]);
    }
    fn_001008c4(uVar5,(int)(puVar1[8] - uVar5) / 0x2c,0);
    uVar6 = *puVar9;
    *puVar9 = (uint)puVar3;
    puVar1[7] = puVar3 + ((int)(puVar1[7] - uVar6) / 0x2c) * 0xb;
    puVar1[8] = puVar3 + uVar10 * 0xb;
  }
  return puVar1;
}



void fn_003675a4(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x2c);
  iVar1 = *(int *)(param_1 + 0x30);
  if (iVar4 != iVar1) {
    uVar2 = fn_007b8834(iVar1,iVar1,iVar4);
    uVar3 = *(uint *)(param_1 + 0x30);
    if (uVar3 < uVar2) {
      do {
        uVar2 = uVar2 + 0x34;
      } while (uVar2 != uVar3);
    }
    *(uint *)(param_1 + 0x30) = uVar3 + ((iVar1 - iVar4) / 0x34) * -0x34;
  }
  iVar1 = *(int *)(param_1 + 0x3c);
  iVar4 = *(int *)(param_1 + 0x38);
  if (iVar4 != iVar1) {
    uVar2 = fn_007b8834(iVar1,iVar1,iVar4);
    uVar3 = *(uint *)(param_1 + 0x3c);
    if (uVar3 < uVar2) {
      do {
        uVar2 = uVar2 + 0x34;
      } while (uVar2 != uVar3);
    }
    *(uint *)(param_1 + 0x3c) = uVar3 + ((iVar1 - iVar4) / 0x34) * -0x34;
  }
  return;
}


