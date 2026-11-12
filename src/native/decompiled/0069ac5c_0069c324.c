#include "0069ac5c_0069c324.h"



void fn_0069c324(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  *(undefined4 *)(param_1 + 4) = param_2;
  uVar1 = fn_001481c8(param_2,DAT_0088fe10,&DAT_0069c3b8,1,1);
  *(undefined4 *)(param_1 + 8) = uVar1;
  uVar1 = fn_001923e0(*(undefined4 *)(param_1 + 4),DAT_0088fe14,0,1);
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  uVar1 = fn_00178f9c(*(undefined4 *)(param_1 + 4),uVar1);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  iVar2 = fn_001828f0(uVar1,DAT_0088fe18);
  *(int *)(param_1 + 0x18) = iVar2;
  if (iVar2 != 0) {
    uVar1 = *(undefined4 *)(iVar2 + 0x20);
    uVar3 = *(undefined4 *)(iVar2 + 0x24);
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(iVar2 + 0x1c);
    *(undefined4 *)(param_1 + 0x20) = uVar1;
    *(undefined4 *)(param_1 + 0x24) = uVar3;
  }
  fn_0069c3c0(param_1,*(undefined4 *)(param_1 + 0x14));
  return;
}



void fn_0069c2c8(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_008513cc;
  return;
}



void fn_0069c190(undefined4 *param_1)

{
  *param_1 = &DAT_008513bc;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}



undefined4 fn_0069bf6c(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int *local_44;
  int *local_40;
  int local_3c;
  
  local_44 = (int *)0x0;
  local_40 = (int *)0x0;
  local_3c = 0;
  iVar2 = fn_006f7a0c(DAT_008977e0);
  (**(code **)(**(int **)(iVar2 + 0x50) + 0x10))(*(int **)(iVar2 + 0x50),&local_44);
  iVar7 = 0;
  iVar2 = ((int)local_40 - (int)local_44) / 0x28;
  if (0 < iVar2) {
    do {
      piVar6 = local_44 + iVar7 * 10;
      pcVar8 = (char *)*piVar6;
      cVar1 = *pcVar8;
      if (cVar1 == 'w') {
        iVar3 = fn_003035b0(pcVar8,(char *)&DAT_0069c180);
        if (iVar3 == 0) {
          piVar4 = (int *)fn_00145b00(0x10,&DAT_00812c8c);
          if (piVar4 != (int *)0x0) {
            iVar3 = piVar6[5];
            iVar9 = piVar6[1];
            iVar10 = piVar6[2];
            iVar11 = piVar6[3];
            fn_005df8f8();
            piVar4[3] = iVar3;
            *piVar4 = iVar9;
            piVar4[1] = iVar10;
            piVar4[2] = iVar11;
          }
          if (*(int **)(param_1 + 4) != piVar4) {
            fn_002feef8();
            *(int **)(param_1 + 4) = piVar4;
          }
        }
        else {
          fn_0069b4c0(param_1,pcVar8,piVar6 + 1,piVar6 + 4,piVar6 + 7);
        }
      }
      else if (cVar1 == 'u') {
        fn_0069af50(param_1,pcVar8,piVar6 + 1,piVar6 + 4,1);
      }
      else if (cVar1 == 'd') {
        fn_0069af50(param_1,pcVar8,piVar6 + 1,piVar6 + 4,0);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar2);
  }
  fn_0069b1f8(param_1);
  piVar4 = local_40;
  for (piVar6 = local_44; piVar6 != piVar4; piVar6 = piVar6 + 10) {
    if ((undefined1 *)*piVar6 != &DAT_008f9d04) {
      piVar5 = (int *)((undefined1 *)*piVar6 + -0xc);
      iVar2 = *piVar5;
      if ((iVar2 == -1) || ((piVar5 != &DAT_008f9cf8 && (*piVar5 = iVar2 + -1, iVar2 == 0)))) {
        fn_001008c4(*piVar6 + -0xc,*(int *)(*piVar6 + -8) + 0xe,0);
      }
    }
  }
  fn_001008c4(local_44,(local_3c - (int)local_44) / 0x28,0);
  return 1;
}



/* WARNING: Removing unreachable block (ram,0x0069b380) */
/* WARNING: Removing unreachable block (ram,0x0069b384) */
/* WARNING: Removing unreachable block (ram,0x0069b388) */
/* WARNING: Removing unreachable block (ram,0x0069b38c) */
/* WARNING: Removing unreachable block (ram,0x0069b390) */

void fn_0069b1f8(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  
  puVar9 = (undefined4 *)0x0;
  puVar10 = (undefined4 *)0x0;
  puVar13 = (undefined4 *)0x0;
  iVar11 = 0;
  iVar2 = (*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14)) / 0x18;
  puVar5 = puVar9;
  puVar3 = puVar10;
  if (0 < iVar2) {
    do {
      puVar12 = (undefined4 *)(*(int *)(param_1 + 0x14) + iVar11 * 0x18 + 0x14);
      puVar10 = puVar3;
      if (puVar5 == puVar13) {
        uVar1 = (int)puVar5 - (int)puVar3 >> 2;
        if (uVar1 < (uint)((int)puVar13 - (int)puVar3 >> 2)) {
          puVar3 = puVar5 + -1;
          if (puVar5 != (undefined4 *)0x0) {
            *puVar5 = puVar5[-1];
          }
          puVar9 = puVar5 + 1;
          puVar6 = puVar5;
          if (puVar5 < puVar3) {
            iVar4 = (int)puVar3 - (int)puVar5;
            if (0 < iVar4) {
              if (iVar4 * 0x20000000 < 0) {
                puVar3 = puVar5 + -2;
                puVar6 = puVar5 + -1;
                *puVar6 = *puVar3;
              }
              for (iVar4 = iVar4 >> 3; iVar4 != 0; iVar4 = iVar4 + -1) {
                puVar6[-1] = puVar3[-1];
                puVar3 = puVar3 + -2;
                puVar6 = puVar6 + -2;
                *puVar6 = *puVar3;
              }
            }
          }
          else {
            while (puVar5 != puVar3) {
              puVar3 = puVar3 + -1;
              puVar6[-1] = *puVar3;
              puVar6 = puVar6 + -1;
            }
          }
          *puVar5 = *puVar12;
        }
        else {
          uVar7 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
          if (uVar7 < uVar1 + 0x20) {
            uVar7 = uVar1 + 0x20;
          }
          puVar10 = (undefined4 *)fn_00100fc6(uVar7 << 2,0);
          puVar6 = puVar10;
          for (puVar9 = puVar3; puVar9 != puVar5; puVar9 = puVar9 + 1) {
            if (puVar6 != (undefined4 *)0x0) {
              *puVar6 = *puVar9;
            }
            puVar6 = puVar6 + 1;
          }
          puVar9 = (undefined4 *)((int)puVar10 + ((int)puVar5 - (int)puVar3 & 0xfffffffcU));
          if (puVar9 != (undefined4 *)0x0) {
            *puVar9 = *puVar12;
          }
          puVar9 = puVar3;
          if (puVar5 < puVar3) {
            do {
              puVar9 = puVar9 + 1;
            } while (puVar9 != puVar5);
          }
          fn_001008c4(puVar3,(int)puVar13 - (int)puVar3 >> 2,0);
          puVar9 = puVar10 + ((int)puVar5 - (int)puVar3 >> 2) + 1;
          puVar13 = puVar10 + uVar7;
        }
      }
      else {
        if (puVar5 != (undefined4 *)0x0) {
          *puVar5 = *puVar12;
        }
        puVar9 = puVar5 + 1;
      }
      iVar11 = iVar11 + 1;
      puVar5 = puVar9;
      puVar3 = puVar10;
    } while (iVar11 < iVar2);
  }
  iVar11 = 0;
  if (0 < iVar2) {
    do {
      iVar4 = puVar10[iVar11];
      if ((iVar4 != -1) && (iVar8 = 0, 0 < iVar2)) {
        do {
          if ((iVar8 != iVar11) && (puVar10[iVar8] == iVar4)) {
            *(int *)(*(int *)(param_1 + 0x14) + iVar11 * 0x18 + 0x14) = iVar8;
            *(int *)(*(int *)(param_1 + 0x14) + iVar8 * 0x18 + 0x14) = iVar11;
            puVar10[iVar8] = 0xffffffff;
            puVar10[iVar11] = 0xffffffff;
          }
          do {
            iVar8 = iVar8 + 1;
            if (iVar2 <= iVar8) goto LAB_0069b47c;
          } while (iVar4 == -1);
        } while( true );
      }
LAB_0069b47c:
      iVar11 = iVar11 + 1;
    } while (iVar11 < iVar2);
  }
  puVar5 = puVar10;
  if (puVar9 < puVar10) {
    do {
      puVar5 = puVar5 + 1;
    } while (puVar5 != puVar9);
  }
  fn_002feef8(puVar10,(int)puVar13 - (int)puVar10 >> 2,0);
  return;
}



void fn_0069ae48(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = &DAT_008513ac;
  fn_0069a318();
  uVar1 = param_1[1];
  uVar2 = uVar1;
  if ((uint)param_1[2] < uVar1) {
    do {
      uVar2 = uVar2 + 0x6c;
    } while (uVar2 != param_1[2]);
  }
  fn_001008c4(uVar1,(int)(param_1[3] - uVar1) / 0x6c,0);
  fn_002feef8(param_1);
  return;
}



undefined4 * fn_0069ac5c(undefined4 *param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint local_30;
  uint local_2c [2];
  
  *param_1 = &DAT_008513ac;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  iVar3 = 0;
  do {
    iVar4 = iVar3 + 1;
    param_1[iVar3 * 2 + 0xc] = 0xffffffff;
    *(undefined1 *)(param_1 + iVar3 * 2 + 0xd) = 0;
    param_1[iVar3 * 2 + 0x10] = 0xffffffff;
    param_1[iVar3 * 2 + 0x11] = 0xffffffff;
    param_1[0x14] = 0xffffffff;
    param_1[0x16] = 0;
    param_1[0x15] = 0xffffffff;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    *(undefined1 *)(param_1 + 0x1e) = 0;
    iVar3 = iVar4;
  } while (iVar4 < 2);
  local_30 = 100;
  puVar5 = param_1 + 1;
  if ((uint)((int)(param_1[3] - param_1[1]) / 0x6c) < 100) {
    uVar7 = (int)(param_1[2] - param_1[1]) / 0x6c;
    local_2c[0] = uVar7 + (uVar7 >> 1) + (uVar7 >> 3);
    if (local_2c[0] < uVar7 + 0x20) {
      local_2c[0] = uVar7 + 0x20;
    }
    puVar1 = local_2c;
    if (local_2c[0] < 0x65) {
      puVar1 = &local_30;
    }
    uVar8 = *puVar1;
    uVar2 = fn_00100fc6(uVar8 * 0x6c,0);
    uVar9 = param_1[2];
    uVar6 = uVar2;
    for (uVar7 = *puVar5; uVar7 != uVar9; uVar7 = uVar7 + 0x6c) {
      if (uVar6 != 0) {
        fn_0017821c(uVar6,uVar7,0x6c);
      }
      uVar6 = uVar6 + 0x6c;
    }
    uVar6 = *puVar5;
    uVar7 = uVar6;
    if ((uint)param_1[2] < uVar6) {
      do {
        uVar7 = uVar7 + 0x6c;
      } while (uVar7 != param_1[2]);
    }
    fn_001008c4(uVar6,(int)(param_1[3] - uVar6) / 0x6c,0);
    uVar7 = *puVar5;
    *puVar5 = uVar2;
    param_1[2] = uVar2 + ((int)(param_1[2] - uVar7) / 0x6c) * 0x6c;
    param_1[3] = uVar2 + uVar8 * 0x6c;
  }
  fn_0069a418();
  return param_1;
}


