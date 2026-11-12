#include "00261004_00261c10.h"



void fn_00261c10(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_001ccc2c();
  *puVar1 = &DAT_0081df00;
  puVar1[0x15] = &DAT_00859270;
  *(undefined1 *)(puVar1 + 0x16) = 0;
  *(undefined1 *)((int)puVar1 + 0x59) = 0;
  *(undefined1 *)((int)puVar1 + 0x5a) = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x1a] = 0xffffffff;
  puVar1[0x19] = 0;
  puVar1[0x1b] = 0xffffffff;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  *(undefined1 *)(puVar1 + 0x1e) = 0xff;
  puVar1[0x1f] = 0;
  puVar1[0x20] = 0;
  puVar1[0x21] = 0;
  puVar1[0x22] = 0;
  return;
}



void fn_00261b38(int *param_1,undefined1 param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float local_28;
  undefined4 local_24;
  float local_20;
  undefined4 local_1c;
  float local_18;
  undefined4 uStack_14;
  
  *(undefined1 *)(param_1 + 0x1e) = param_2;
  iVar1 = fn_00261004();
  param_1[0x1f] = iVar1;
  fVar3 = 40.743664;
  local_28 = *(float *)(iVar1 + 8);
  local_24 = *(undefined4 *)(iVar1 + 0xc);
  local_20 = *(float *)(iVar1 + 0x10);
  iVar1 = param_1[0x1f];
  local_1c = *(undefined4 *)(iVar1 + 0x20);
  local_18 = *(float *)(iVar1 + 0x24);
  uStack_14 = *(undefined4 *)(iVar1 + 0x28);
  fVar2 = local_18 * 40.743664;
  fn_00525abc();
  fVar3 = local_18 * fVar3;
  fn_00194408();
  local_28 = local_28 + fVar2 * -850.0;
  local_20 = local_20 + fVar3 * -850.0;
  local_24 = 0xc3fa0000;
  (**(code **)(*param_1 + 0x18))(param_1,&local_28);
  (**(code **)(*param_1 + 0x24))(param_1,&local_1c);
  *(undefined1 *)((int)param_1 + 0x5a) = 1;
  return;
}



int fn_002616fc(int *param_1,uint param_2,uint param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  
  iVar1 = fn_00145b00(0xc,&DAT_00812c8c);
  if (iVar1 == 0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = (int *)fn_005e846c();
  }
  piVar2 = (int *)param_1[1];
  if (piVar2 != piVar5) {
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    param_1[1] = (int)piVar5;
  }
  iVar1 = fn_0068eb30(DAT_008977e8);
  if ((int)param_2 < 0) {
LAB_0026179c:
    iVar1 = 0;
  }
  else {
    if ((uint)((*(int *)(iVar1 + 8) - *(int *)(iVar1 + 4)) / 0x34) <= param_2) goto LAB_0026179c;
    iVar1 = *(int *)(iVar1 + 4) + param_2 * 0x34;
  }
  iVar1 = fn_0069ee40(param_1[1],iVar1,0);
  if (iVar1 == 0) goto LAB_002618b8;
  if (param_3 != 0xffffffff) {
    iVar3 = fn_0068eb30(DAT_008977e8);
    if ((int)param_3 < 0) {
LAB_00261808:
      iVar3 = 0;
    }
    else {
      if ((uint)((*(int *)(iVar3 + 8) - *(int *)(iVar3 + 4)) / 0x34) <= param_3) goto LAB_00261808;
      iVar3 = *(int *)(iVar3 + 4) + param_3 * 0x34;
    }
    fn_0069eb10(param_1[1],iVar3,0);
  }
  (**(code **)(*param_1 + 0x28))(param_1);
  iVar6 = 0;
  fn_0017fde4(param_1[1]);
  iVar3 = fn_006ebee0();
  if (0 < iVar3) {
    do {
      uVar4 = fn_0017fde4(param_1[1]);
      fn_006ebf54(uVar4,iVar6);
      uVar4 = fn_0017fde4(param_1[1]);
      fn_005ea624(uVar4,iVar6);
      iVar6 = iVar6 + 1;
      fn_0017fde4(param_1[1]);
      iVar3 = fn_006ebee0();
    } while (iVar6 < iVar3);
  }
LAB_002618b8:
  param_1[0x19] = param_4;
  return iVar1;
}



/* WARNING: Removing unreachable block (ram,0x002610e0) */
/* WARNING: Removing unreachable block (ram,0x002610b4) */
/* WARNING: Removing unreachable block (ram,0x002610b8) */
/* WARNING: Removing unreachable block (ram,0x002610bc) */
/* WARNING: Removing unreachable block (ram,0x002610c0) */
/* WARNING: Removing unreachable block (ram,0x002610c4) */
/* WARNING: Removing unreachable block (ram,0x002612bc) */
/* WARNING: Removing unreachable block (ram,0x002612c0) */
/* WARNING: Removing unreachable block (ram,0x002612c4) */
/* WARNING: Removing unreachable block (ram,0x002612c8) */
/* WARNING: Removing unreachable block (ram,0x002612cc) */

undefined4 fn_00261004(int param_1)

{
  uint uVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  int iVar8;
  uint *puVar9;
  uint **ppuVar10;
  uint uVar11;
  uint *puVar12;
  uint *puVar13;
  uint *puVar14;
  uint uVar15;
  bool bVar16;
  bool bVar17;
  uint *local_30;
  uint local_2c;
  uint local_28;
  
  ppuVar10 = &local_30;
  uVar3 = fn_0014481c(DAT_008977e8);
  local_2c = fn_006b6754(uVar3,0);
  puVar12 = (uint *)0x0;
  puVar13 = (uint *)0x0;
  if (0x3fffffff < local_2c) {
    local_30 = (uint *)0x3fffffff;
    fn_002ff628(8,&DAT_008c763d);
  }
  if (local_2c != 0) {
    if (0x1f < local_2c) {
      ppuVar10 = (uint **)&local_2c;
    }
    local_30 = (uint *)&DAT_00000020;
    uVar15 = (uint)*ppuVar10;
    puVar12 = (uint *)fn_00100fc6(uVar15 << 2,0);
    fn_001008c4(0,0,0);
    puVar13 = puVar12 + uVar15;
  }
  uVar15 = 0;
  fn_0014481c(DAT_008977e8);
  iVar4 = fn_006b6bc4();
  puVar14 = puVar12;
  puVar7 = puVar12;
  if (0 < iVar4) {
    do {
      uVar3 = fn_0014481c(DAT_008977e8);
      uVar3 = fn_006b71a8(uVar3,uVar15 & 0xff);
      uVar5 = fn_00156f30(uVar3,0);
      puVar7 = puVar14;
      if ((int)*(char *)(param_1 + 0x78) != uVar5) {
        uVar3 = fn_00144810(DAT_008977e8);
        iVar4 = fn_006a88b8(uVar3,uVar15,0);
        uVar5 = uVar5 & 0xffff | iVar4 << 0x10;
        if (puVar14 == puVar13) {
          uVar1 = (int)puVar14 - (int)puVar12 >> 2;
          if (uVar1 < (uint)((int)puVar13 - (int)puVar12 >> 2)) {
            puVar9 = puVar14 + -1;
            if (puVar14 != (uint *)0x0) {
              *puVar14 = puVar14[-1];
            }
            puVar7 = puVar14 + 1;
            puVar6 = puVar14;
            if (puVar14 < puVar9) {
              iVar4 = (int)puVar9 - (int)puVar14;
              if (0 < iVar4) {
                if (iVar4 * 0x20000000 < 0) {
                  puVar9 = puVar14 + -2;
                  puVar6 = puVar14 + -1;
                  *puVar6 = *puVar9;
                }
                for (iVar4 = iVar4 >> 3; iVar4 != 0; iVar4 = iVar4 + -1) {
                  puVar6[-1] = puVar9[-1];
                  puVar9 = puVar9 + -2;
                  puVar6 = puVar6 + -2;
                  *puVar6 = *puVar9;
                }
              }
            }
            else {
              while (puVar14 != puVar9) {
                puVar9 = puVar9 + -1;
                puVar6[-1] = *puVar9;
                puVar6 = puVar6 + -1;
              }
            }
            *puVar14 = uVar5;
          }
          else {
            uVar11 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
            local_2c = uVar1 + 0x20;
            if (uVar1 + 0x20 <= uVar11) {
              local_2c = uVar11;
            }
            local_30 = (uint *)fn_00100fc6(local_2c << 2,0);
            puVar9 = local_30;
            for (puVar7 = puVar12; puVar7 != puVar14; puVar7 = puVar7 + 1) {
              if (puVar9 != (uint *)0x0) {
                *puVar9 = *puVar7;
              }
              puVar9 = puVar9 + 1;
            }
            puVar7 = (uint *)((int)local_30 + ((int)puVar14 - (int)puVar12 & 0xfffffffcU));
            if (puVar7 != (uint *)0x0) {
              *puVar7 = uVar5;
            }
            puVar7 = puVar12;
            if (puVar14 < puVar12) {
              do {
                puVar7 = puVar7 + 1;
              } while (puVar7 != puVar14);
            }
            fn_001008c4(puVar12,(int)puVar13 - (int)puVar12 >> 2,0);
            puVar13 = local_30 + local_2c;
            puVar7 = local_30 + ((int)puVar14 - (int)puVar12 >> 2) + 1;
            puVar12 = local_30;
          }
        }
        else {
          puVar7 = puVar14 + 1;
          if (puVar14 != (uint *)0x0) {
            *puVar14 = uVar5;
          }
        }
      }
      uVar15 = uVar15 + 1;
      fn_0014481c(DAT_008977e8);
      iVar4 = fn_006b6bc4();
      puVar14 = puVar7;
    } while ((int)uVar15 < iVar4);
  }
  if (puVar12 == puVar7) goto LAB_002615b8;
  iVar4 = (int)puVar7 - (int)puVar12;
  uVar5 = iVar4 >> 2;
  puVar14 = (uint *)0x0;
  uVar15 = uVar5 * 4;
  local_2c = DAT_008c6cfc + 1;
  DAT_008c6cfc = local_2c;
  if (((DAT_008c6d00 & 1) == 0) && (iVar8 = fn_00303afc(&DAT_008c6d00), iVar8 != 0)) {
    DAT_008c6d04 = (uint *)&DAT_008f9fe8;
  }
  if (DAT_008c6d04 == (uint *)0x0) {
    uVar15 = 0;
    DAT_008c6cfc = DAT_008c6cfc - 1;
LAB_0026141c:
    DAT_008c6cfc = DAT_008c6cfc - 1;
  }
  else {
    fn_002feef8(0);
    if (uVar15 == 0) goto LAB_0026141c;
    bVar17 = 0xfff < uVar15;
    bVar16 = uVar15 == 0x1000;
    if (uVar15 < 0x1001) {
      bVar17 = local_2c != 0;
      bVar16 = local_2c == 1;
    }
    if (bVar17 && !bVar16) {
      puVar14 = (uint *)fn_002ff600(uVar15);
      goto LAB_0026141c;
    }
    puVar14 = DAT_008c6d04;
  }
  if (puVar14 == (uint *)0x0) {
    if (iVar4 < 0x3c) {
      fn_007a52d8(puVar12,puVar7);
    }
    else {
      puVar14 = puVar12 + ((int)(uVar5 - (iVar4 >> 0x1f)) >> 1);
      fn_007b6310(puVar12,puVar14);
      fn_007b6310(puVar14,puVar7);
      local_30 = (uint *)((int)puVar7 - (int)puVar14 >> 2);
      fn_007b6840(puVar12,puVar14,puVar7,(int)puVar14 - (int)puVar12 >> 2);
    }
  }
  else {
    local_28 = uVar5;
    puVar9 = &local_28;
    if ((int)(uVar15 >> 2) <= (int)uVar5) {
      puVar9 = &local_2c;
    }
    local_2c = uVar15 >> 2;
    uVar15 = *puVar9;
    puVar6 = puVar14;
    for (puVar9 = puVar12; puVar9 != puVar12 + uVar15; puVar9 = puVar9 + 1) {
      if (puVar6 != (uint *)0x0) {
        *puVar6 = *puVar9;
      }
      puVar6 = puVar6 + 1;
    }
    local_30 = (uint *)0x0;
    fn_007b721c(puVar12,puVar7,puVar14);
    puVar9 = puVar14;
    if (puVar14 + uVar15 < puVar14) {
      do {
        puVar9 = puVar9 + 1;
      } while (puVar9 != puVar14 + uVar15);
    }
    DAT_008c6cfc = DAT_008c6cfc + 1;
    if (((DAT_008c6d00 & 1) == 0) && (iVar4 = fn_00303afc(&DAT_008c6d00), iVar4 != 0)) {
      DAT_008c6d04 = (uint *)&DAT_008f9fe8;
    }
    if (puVar14 == DAT_008c6d04) {
      DAT_008c6cfc = DAT_008c6cfc + -1;
    }
    else {
      fn_002feef8(puVar14);
    }
    DAT_008c6cfc = DAT_008c6cfc - 1;
  }
LAB_002615b8:
  puVar14 = (uint *)((int)puVar7 - (int)puVar12 >> 2);
  if (puVar14 == (uint *)0x0) {
    local_30 = puVar14;
    fn_002ff628(9,&DAT_008c763c);
  }
  sVar2 = *(short *)((int)puVar12 + 2);
  iVar4 = 0;
  puVar14 = (uint *)&DAT_00000001;
  if ((uint)((int)puVar7 - (int)puVar12 >> 2) < 2) {
    puVar14 = (uint *)0x0;
  }
  else {
    do {
      puVar9 = (uint *)((int)puVar7 - (int)puVar12 >> 2);
      if (puVar9 <= puVar14) {
        local_30 = puVar9;
        fn_002ff628(9,&DAT_008c763c,&DAT_008c763c,puVar14);
      }
      iVar8 = (int)puVar14 * 4;
      puVar14 = (uint *)((int)puVar14 + 1);
      if (*(short *)((int)puVar12 + iVar8 + 2) == sVar2) {
        iVar4 = iVar4 + 1;
      }
    } while (puVar14 < (uint *)((int)puVar7 - (int)puVar12 >> 2));
    puVar14 = (uint *)0x0;
    if (iVar4 != 0) {
      puVar14 = (uint *)fn_00163868();
    }
  }
  puVar9 = (uint *)((int)puVar7 - (int)puVar12 >> 2);
  if (puVar9 <= puVar14) {
    local_30 = puVar9;
    fn_002ff628(9,&DAT_008c763c,&DAT_008c763c,puVar14);
  }
  uVar15 = puVar12[(int)puVar14];
  uVar3 = fn_0014481c(DAT_008977e8);
  uVar3 = fn_006b6f3c(uVar3,(char)uVar15,0);
  puVar14 = puVar12;
  if (puVar7 < puVar12) {
    do {
      puVar14 = puVar14 + 1;
    } while (puVar14 != puVar7);
  }
  fn_001008c4(puVar12,(int)puVar13 - (int)puVar12 >> 2,0);
  return uVar3;
}


