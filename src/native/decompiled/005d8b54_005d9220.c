#include "005d8b54_005d9220.h"



void fn_005d9220(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  
  uVar5 = 0;
  if (*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) >> 2 != 0) {
    do {
      uVar3 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) >> 2;
      if (uVar3 <= uVar5) {
        fn_002ff628(9,&DAT_008c765d,&DAT_008c765d,uVar5,uVar3);
      }
      piVar4 = *(int **)(*(int *)(param_1 + 8) + uVar5 * 4);
      if (piVar4 != (int *)0x0) {
        if ((undefined4 *)*piVar4 != &DAT_008f9cf4) {
          piVar1 = (undefined4 *)*piVar4 + -3;
          iVar2 = *piVar1;
          if ((iVar2 == -1) || ((piVar1 != &DAT_008f9ce8 && (*piVar1 = iVar2 + -1, iVar2 == 0)))) {
            fn_001008c4(*piVar4 + -0xc,*(int *)(*piVar4 + -8) + 8,0);
          }
        }
        fn_002feef8(piVar4);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < (uint)(*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) >> 2));
  }
  iVar2 = *(int *)(param_1 + 0xc);
  iVar6 = *(int *)(param_1 + 8);
  if (iVar6 != iVar2) {
    uVar5 = fn_007b8b4c(iVar2,iVar2,iVar6);
    uVar3 = *(uint *)(param_1 + 0xc);
    if (uVar3 < uVar5) {
      do {
        uVar5 = uVar5 + 4;
      } while (uVar5 != uVar3);
    }
    *(uint *)(param_1 + 0xc) = uVar3 - (iVar2 - iVar6 & 0xfffffffcU);
  }
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  return;
}



void fn_005d8fc4(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  bool bVar12;
  bool bVar13;
  uint local_30;
  uint local_2c [2];
  
  puVar10 = *(undefined4 **)(param_1 + 8);
  puVar11 = *(undefined4 **)(param_1 + 0xc);
  if (puVar10 == puVar11) {
    return;
  }
  iVar7 = (int)puVar11 - (int)puVar10;
  uVar1 = iVar7 >> 2;
  uVar6 = uVar1 * 4;
  puVar9 = (undefined4 *)0x0;
  iVar3 = DAT_008c6cfc + 1;
  DAT_008c6cfc = iVar3;
  if (((DAT_008c6d00 & 1) == 0) && (iVar4 = fn_00303afc(&DAT_008c6d00), iVar4 != 0)) {
    DAT_008c6d04 = (undefined4 *)&DAT_008f9fe8;
  }
  if (DAT_008c6d04 == (undefined4 *)0x0) {
    uVar6 = 0;
    DAT_008c6cfc = DAT_008c6cfc + -1;
  }
  else {
    fn_002feef8(0);
    if (uVar6 != 0) {
      bVar13 = 0xfff < uVar6;
      bVar12 = uVar6 == 0x1000;
      if (uVar6 < 0x1001) {
        bVar13 = iVar3 != 0;
        bVar12 = iVar3 == 1;
      }
      if (!bVar13 || bVar12) {
        puVar9 = DAT_008c6d04;
      }
      else {
        puVar9 = (undefined4 *)fn_002ff600(uVar6);
        DAT_008c6cfc = DAT_008c6cfc + -1;
      }
      goto LAB_005d909c;
    }
  }
  DAT_008c6cfc = DAT_008c6cfc + -1;
LAB_005d909c:
  local_30 = uVar6 >> 2;
  if (puVar9 != (undefined4 *)0x0) {
    local_2c[0] = uVar1;
    puVar5 = local_2c;
    if ((int)local_30 <= (int)uVar1) {
      puVar5 = &local_30;
    }
    uVar6 = *puVar5;
    puVar8 = puVar9;
    for (puVar2 = puVar10; puVar2 != puVar10 + uVar6; puVar2 = puVar2 + 1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = *puVar2;
      }
      puVar8 = puVar8 + 1;
    }
    fn_007b7658(puVar10,puVar11,puVar9,local_30,0,&LAB_0065ed4c);
    DAT_008c6cfc = DAT_008c6cfc + 1;
    if (((DAT_008c6d00 & 1) == 0) && (iVar3 = fn_00303afc(&DAT_008c6d00), iVar3 != 0)) {
      DAT_008c6d04 = (undefined4 *)&DAT_008f9fe8;
    }
    if (puVar9 == DAT_008c6d04) {
      DAT_008c6cfc = DAT_008c6cfc + -1;
    }
    else {
      fn_002feef8(puVar9);
    }
    DAT_008c6cfc = DAT_008c6cfc + -1;
    return;
  }
  if (iVar7 < 0x3c) {
    fn_007a5bf0(puVar10,puVar11,&LAB_0065ed4c);
    return;
  }
  puVar9 = puVar10 + ((int)(uVar1 - (iVar7 >> 0x1f)) >> 1);
  fn_007b64b4(puVar10,puVar9,&LAB_0065ed4c);
  fn_007b64b4(puVar9,puVar11,&LAB_0065ed4c);
  fn_007b6ef4(puVar10,puVar9,puVar11,(int)puVar9 - (int)puVar10 >> 2,
               (int)puVar11 - (int)puVar9 >> 2,&LAB_0065ed4c);
  return;
}



void fn_005d8b84(int param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined2 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  int iVar11;
  undefined4 *puVar12;
  uint *puVar13;
  uint uVar14;
  uint local_34;
  uint uStack_30;
  int local_2c;
  uint *puStack_28;
  
  local_2c = param_1;
  puStack_28 = param_2;
  puVar1 = (uint *)fn_00145b00(8,&DAT_00812c8c);
  if (puVar1 == (uint *)0x0) {
    puVar1 = (uint *)0x0;
  }
  else {
    *puVar1 = (uint)&DAT_008f9cf4;
    uVar2 = *param_2;
    piVar3 = (int *)(uVar2 - 0xc);
    if (*piVar3 == -1) {
      if ((puVar1 != param_2) && (uVar14 = *(uint *)(uVar2 - 4), uVar14 != 0)) {
        if (((DAT_008f9ce8 + 1U < 2) && (uVar14 <= DAT_008f9cec)) &&
           (((uVar2 == 0 || (uVar2 < 0x8f9cf4)) || ((int)&DAT_008f9cf4 + DAT_008f9cf0 * 2 <= uVar2))
           )) {
          fn_001006ac(&DAT_008f9cf4,uVar2,uVar14);
          *(uint *)(*puVar1 - 4) = uVar14;
          *(undefined2 *)(*puVar1 + uVar14 * 2) = 0;
        }
        else {
          local_34 = DAT_008f9cf0 + (DAT_008f9cf0 >> 1) + (DAT_008f9cf0 >> 3);
          if (local_34 < DAT_008f9cf0 + 0x80) {
            local_34 = DAT_008f9cf0 + 0x80;
          }
          puVar13 = &uStack_30;
          if (uVar14 <= local_34) {
            puVar13 = &local_34;
          }
          uStack_30 = uVar14;
          uVar5 = *puVar13;
          if (0xfffffff1 < uVar5) {
            fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar5,0xfffffff1);
          }
          if (uVar5 < uVar14) {
            fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar14,uVar5);
          }
          if (uVar5 == 0) {
            puVar12 = &DAT_008f9ce8;
          }
          else {
            puVar12 = (undefined4 *)fn_00100fc6((uVar5 + 8) * 2,0);
            if (puVar12 != (undefined4 *)0x0) {
              *puVar12 = 0;
              puVar12[1] = 0;
              puVar12[2] = 0;
            }
            *puVar12 = 0;
            puVar12[1] = uVar5;
            puVar12[2] = uVar14;
            puVar6 = (undefined2 *)((int)puVar12 + uVar14 * 2 + 0xc);
            if (puVar6 != (undefined2 *)0x0) {
              *puVar6 = 0;
            }
          }
          fn_00301a9c(puVar12 + 3,uVar2,uVar14 << 1);
          if ((undefined4 *)*puVar1 != &DAT_008f9cf4) {
            piVar3 = (undefined4 *)*puVar1 + -3;
            iVar11 = *piVar3;
            if ((iVar11 == -1) ||
               ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar11 + -1, iVar11 == 0)))) {
              fn_001008c4(*puVar1 - 0xc,*(int *)(*puVar1 - 8) + 8,0);
            }
          }
          *puVar1 = (uint)(puVar12 + 3);
        }
      }
    }
    else {
      if (piVar3 != &DAT_008f9ce8) {
        *piVar3 = *piVar3 + 1;
      }
      if ((undefined4 *)*puVar1 != &DAT_008f9cf4) {
        piVar3 = (undefined4 *)*puVar1 + -3;
        iVar11 = *piVar3;
        if ((iVar11 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar11 + -1, iVar11 == 0)))) {
          fn_001008c4(*puVar1 - 0xc,*(int *)(*puVar1 - 8) + 8,0);
        }
      }
      *puVar1 = *param_2;
    }
    *(char *)(puVar1 + 1) = (char)param_2[1];
    *(undefined1 *)((int)puVar1 + 5) = *(undefined1 *)((int)param_2 + 5);
    *(undefined1 *)((int)puVar1 + 6) = *(undefined1 *)((int)param_2 + 6);
    *(undefined1 *)((int)puVar1 + 7) = *(undefined1 *)((int)param_2 + 7);
  }
  iVar11 = local_2c;
  puVar13 = (uint *)(local_2c + 8);
  puVar12 = *(undefined4 **)(local_2c + 0xc);
  if (puVar12 != *(undefined4 **)(local_2c + 0x10)) {
    *(undefined4 **)(local_2c + 0xc) = puVar12 + 1;
    if (puVar12 != (undefined4 *)0x0) {
      *puVar12 = puVar1;
    }
    return;
  }
  uVar2 = (int)((int)puVar12 - *puVar13) >> 2;
  if (uVar2 < (uint)((int)((int)*(undefined4 **)(local_2c + 0x10) - *puVar13) >> 2)) {
    *(undefined4 **)(local_2c + 0xc) = puVar12 + 1;
    if (puVar12 != (undefined4 *)0x0) {
      *puVar12 = puVar12[-1];
    }
    puVar8 = puVar12 + -1;
    puVar9 = puVar12;
    if (puVar12 < puVar8) {
      if (0 < (int)puVar8 - (int)puVar12) {
        iVar11 = (int)puVar8 - (int)puVar12 >> 2;
        iVar7 = 0;
        do {
          iVar11 = iVar11 + -1;
          puVar12[iVar7 + -1] = puVar8[iVar7 + -1];
          iVar7 = iVar7 + -1;
        } while (iVar11 != 0);
      }
    }
    else {
      while (puVar12 != puVar8) {
        puVar8 = puVar8 + -1;
        puVar9[-1] = *puVar8;
        puVar9 = puVar9 + -1;
      }
    }
    *puVar12 = puVar1;
    return;
  }
  uVar14 = uVar2 + (uVar2 >> 1) + (uVar2 >> 3);
  if (uVar14 < uVar2 + 0x20) {
    uVar14 = uVar2 + 0x20;
  }
  puVar4 = (undefined4 *)fn_00100fc6(uVar14 << 2,0);
  puVar9 = puVar4;
  for (puVar8 = (undefined4 *)*puVar13; puVar8 != puVar12; puVar8 = puVar8 + 1) {
    if (puVar9 != (undefined4 *)0x0) {
      *puVar9 = *puVar8;
    }
    puVar9 = puVar9 + 1;
  }
  puVar8 = (undefined4 *)(((int)puVar12 - *puVar13 & 0xfffffffc) + (int)puVar4);
  if (puVar8 != (undefined4 *)0x0) {
    *puVar8 = puVar1;
  }
  puVar9 = *(undefined4 **)(iVar11 + 0xc);
  puVar8 = (undefined4 *)(((int)puVar12 - *puVar13 & 0xfffffffc) + (int)puVar4);
  for (; puVar12 != puVar9; puVar12 = puVar12 + 1) {
    puVar8 = puVar8 + 1;
    if (puVar8 != (undefined4 *)0x0) {
      *puVar8 = *puVar12;
    }
  }
  uVar5 = *puVar13;
  uVar10 = *(uint *)(iVar11 + 0xc);
  uVar2 = uVar5;
  if (uVar10 < uVar5) {
    do {
      uVar2 = uVar2 + 4;
    } while (uVar2 != uVar10);
  }
  fn_001008c4(uVar5,(int)(*(int *)(iVar11 + 0x10) - uVar5) >> 2,0);
  *(undefined4 **)(iVar11 + 0x10) = puVar4 + uVar14;
  *(undefined4 **)(iVar11 + 0xc) = puVar4 + ((int)(uVar10 - uVar5) >> 2) + 1;
  *puVar13 = (uint)puVar4;
  return;
}



undefined4 * fn_005d8b54(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint *puVar10;
  uint uVar11;
  uint local_20;
  uint local_1c [3];
  
  iVar1 = fn_00145b00(0x18,&DAT_00812c8c);
  if (iVar1 == 0) {
    return (undefined4 *)0x0;
  }
  puVar2 = (undefined4 *)fn_0028e264(iVar1,param_1);
  puVar10 = puVar2 + 2;
  *puVar2 = &DAT_0084cee8;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  *(undefined1 *)(puVar2 + 5) = 0;
  *(undefined1 *)((int)puVar2 + 0x15) = 0;
  local_20 = 4;
  if ((uint)((int)(puVar2[4] - puVar2[2]) >> 2) < 4) {
    uVar11 = (int)(puVar2[3] - puVar2[2]) >> 2;
    local_1c[0] = uVar11 + (uVar11 >> 1) + (uVar11 >> 3);
    if (local_1c[0] < uVar11 + 0x20) {
      local_1c[0] = uVar11 + 0x20;
    }
    puVar3 = local_1c;
    if (local_1c[0] < 5) {
      puVar3 = &local_20;
    }
    uVar11 = *puVar3;
    puVar4 = (undefined4 *)fn_00100fc6(uVar11 << 2,0);
    puVar9 = (undefined4 *)puVar2[3];
    puVar5 = puVar4;
    for (puVar8 = (undefined4 *)*puVar10; puVar8 != puVar9; puVar8 = puVar8 + 1) {
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = *puVar8;
      }
      puVar5 = puVar5 + 1;
    }
    uVar6 = *puVar10;
    uVar7 = uVar6;
    if ((uint)puVar2[3] < uVar6) {
      do {
        uVar7 = uVar7 + 4;
      } while (uVar7 != puVar2[3]);
    }
    fn_001008c4(uVar6,(int)(puVar2[4] - uVar6) >> 2,0);
    uVar7 = *puVar10;
    puVar2[2] = puVar4;
    puVar2[3] = (puVar2[3] - uVar7 & 0xfffffffc) + (int)puVar4;
    puVar2[4] = puVar4 + uVar11;
  }
  return puVar2;
}


