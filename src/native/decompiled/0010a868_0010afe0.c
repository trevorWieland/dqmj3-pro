#include "0010a868_0010afe0.h"



int * fn_0010afe0(int *param_1)

{
  if ((int *)param_1[10] != (int *)0x0) {
    (**(code **)(*(int *)param_1[10] + 4))();
  }
  if ((int *)param_1[9] != (int *)0x0) {
    (**(code **)(*(int *)param_1[9] + 4))();
  }
  if ((int *)param_1[8] != (int *)0x0) {
    (**(code **)(*(int *)param_1[8] + 8))();
  }
  if ((int *)param_1[7] != (int *)0x0) {
    (**(code **)(*(int *)param_1[7] + 4))();
  }
  if ((int *)param_1[6] != (int *)0x0) {
    (**(code **)(*(int *)param_1[6] + 4))();
  }
  if ((int *)param_1[5] != (int *)0x0) {
    (**(code **)(*(int *)param_1[5] + 4))();
  }
  if ((int *)param_1[4] != (int *)0x0) {
    (**(code **)(*(int *)param_1[4] + 4))();
  }
  if ((int *)param_1[3] != (int *)0x0) {
    (**(code **)(*(int *)param_1[3] + 4))();
  }
  if ((int *)param_1[2] != (int *)0x0) {
    (**(code **)(*(int *)param_1[2] + 4))();
  }
  if ((int *)param_1[1] != (int *)0x0) {
    (**(code **)(*(int *)param_1[1] + 4))();
  }
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 4))();
  }
  return param_1;
}



int fn_0010af68(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0xff;
  *(undefined1 *)((int)param_1 + 0x35) = 0xff;
  *(undefined1 *)((int)param_1 + 0x36) = 0;
  *(undefined1 *)((int)param_1 + 0x37) = 0;
  iVar1 = fn_00113c58(param_1 + 0xe);
  iVar1 = fn_00117074(iVar1 + 0x18);
  *(undefined4 *)(iVar1 + 0x4b8) = 1;
  *(undefined1 *)(iVar1 + 0x4bc) = 0;
  return iVar1 + -0x50;
}



undefined4 * fn_0010aea8(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  puVar1 = (undefined4 *)fn_00113378(param_1,0);
  *puVar1 = &DAT_00822e10;
  *(undefined1 *)(puVar1 + 0x13) = 0;
  *(undefined1 *)((int)puVar1 + 0x4d) = 2;
  *(undefined1 *)((int)puVar1 + 0x4e) = 0xff;
  *(undefined1 *)((int)puVar1 + 0x4f) = 0xff;
  puVar1[0x14] = 0;
  *(undefined1 *)(puVar1 + 0x15) = 0;
  *(undefined1 *)((int)puVar1 + 0x55) = 2;
  *(undefined1 *)((int)puVar1 + 0x56) = 0xff;
  *(undefined1 *)((int)puVar1 + 0x57) = 0xff;
  puVar1[0x16] = 0;
  *(undefined1 *)(puVar1 + 0x17) = 0;
  *(undefined1 *)((int)puVar1 + 0x5d) = 2;
  *(undefined1 *)((int)puVar1 + 0x5e) = 0xff;
  *(undefined1 *)((int)puVar1 + 0x5f) = 0xff;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  puVar1[0x1a] = 0;
  iVar2 = fn_00145b00(8,&DAT_00812c8c);
  piVar3 = (int *)0x0;
  if (iVar2 != 0) {
    piVar3 = (int *)fn_00117b04();
  }
  piVar4 = (int *)puVar1[0x19];
  if (piVar4 != piVar3) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
    puVar1[0x19] = piVar3;
  }
  return puVar1;
}



int fn_0010ae78(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &DAT_00822e00;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  iVar1 = fn_001283fc(param_1 + 4);
  *(undefined1 *)(iVar1 + 0x34) = 0;
  return iVar1 + -0x10;
}



int * fn_0010ace4(int *param_1)

{
  fn_0011360c();
  if (param_1[0xd] != 0) {
    fn_002feef8();
    param_1[0xd] = 0;
  }
  if (param_1[0xc] != 0) {
    fn_002feef8();
    param_1[0xc] = 0;
  }
  *(undefined1 *)((int)param_1 + 0x3a) = 0;
  *(undefined1 *)((int)param_1 + 0x39) = 0xff;
  fn_002feef8(param_1[0xd]);
  fn_002feef8(param_1[0xc]);
  if (param_1[0xb] != 0) {
    fn_00122d10();
    fn_002feef8();
  }
  if (param_1[10] != 0) {
    fn_0012303c();
    fn_002feef8();
  }
  if ((int *)param_1[9] != (int *)0x0) {
    (**(code **)(*(int *)param_1[9] + 4))();
  }
  if ((int *)param_1[8] != (int *)0x0) {
    (**(code **)(*(int *)param_1[8] + 8))();
  }
  if ((int *)param_1[7] != (int *)0x0) {
    (**(code **)(*(int *)param_1[7] + 4))();
  }
  if ((int *)param_1[6] != (int *)0x0) {
    (**(code **)(*(int *)param_1[6] + 4))();
  }
  if ((int *)param_1[5] != (int *)0x0) {
    (**(code **)(*(int *)param_1[5] + 4))();
  }
  if ((int *)param_1[4] != (int *)0x0) {
    (**(code **)(*(int *)param_1[4] + 4))();
  }
  if ((int *)param_1[3] != (int *)0x0) {
    (**(code **)(*(int *)param_1[3] + 4))();
  }
  if ((int *)param_1[2] != (int *)0x0) {
    (**(code **)(*(int *)param_1[2] + 4))();
  }
  if ((int *)param_1[1] != (int *)0x0) {
    (**(code **)(*(int *)param_1[1] + 4))();
  }
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 4))();
  }
  return param_1;
}



/* WARNING: Removing unreachable block (ram,0x0010aa98) */
/* WARNING: Removing unreachable block (ram,0x0010aaac) */
/* WARNING: Removing unreachable block (ram,0x0010aa6c) */
/* WARNING: Removing unreachable block (ram,0x0010aa74) */
/* WARNING: Removing unreachable block (ram,0x0010aa7c) */
/* WARNING: Removing unreachable block (ram,0x0010aad0) */
/* WARNING: Removing unreachable block (ram,0x0010aaf0) */
/* WARNING: Removing unreachable block (ram,0x0010aab0) */
/* WARNING: Removing unreachable block (ram,0x0010aab8) */
/* WARNING: Removing unreachable block (ram,0x0010aac0) */
/* WARNING: Removing unreachable block (ram,0x0010aac8) */

undefined4 * fn_0010a898(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint *puVar11;
  int iVar12;
  uint uVar13;
  undefined4 uVar14;
  uint local_28;
  uint local_24;
  
  puVar1 = (undefined4 *)fn_001129d0(param_1,1);
  *puVar1 = &DAT_008210a8;
  puVar11 = puVar1 + 7;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar2 = (undefined4 *)*puVar11;
  puVar7 = (undefined4 *)puVar1[8];
  uVar13 = (int)puVar7 - (int)puVar2 >> 3;
  if (uVar13 == 0) {
    iVar12 = 1;
    if (puVar1[9] - (int)puVar2 >> 3 == 0) {
      local_28 = 1;
      uVar13 = (int)(puVar1[8] - *puVar11) >> 3;
      local_24 = uVar13 + (uVar13 >> 1) + (uVar13 >> 3);
      if (local_24 < uVar13 + 0x20) {
        local_24 = uVar13 + 0x20;
      }
      puVar8 = &local_24;
      if (local_24 < 2) {
        puVar8 = &local_28;
      }
      uVar13 = *puVar8;
      puVar4 = (undefined4 *)fn_00100fc6(uVar13 << 3,0);
      puVar9 = puVar4;
      for (puVar2 = (undefined4 *)*puVar11; puVar2 != puVar7; puVar2 = puVar2 + 2) {
        if (puVar9 != (undefined4 *)0x0) {
          uVar14 = puVar2[1];
          *puVar9 = *puVar2;
          puVar9[1] = uVar14;
        }
        puVar9 = puVar9 + 2;
      }
      puVar2 = (undefined4 *)(((int)puVar7 - *puVar11 & 0xfffffff8) + (int)puVar4);
      do {
        if (puVar2 != (undefined4 *)0x0) {
          *puVar2 = 0;
          puVar2[1] = 0;
        }
        iVar12 = iVar12 + -1;
        puVar2 = puVar2 + 2;
      } while (iVar12 != 0);
      puVar9 = (undefined4 *)puVar1[8];
      puVar2 = puVar4 + (((int)((int)puVar7 - *puVar11) >> 3) + 1) * 2;
      for (; puVar7 != puVar9; puVar7 = puVar7 + 2) {
        if (puVar2 != (undefined4 *)0x0) {
          uVar14 = puVar7[1];
          *puVar2 = *puVar7;
          puVar2[1] = uVar14;
        }
        puVar2 = puVar2 + 2;
      }
      uVar5 = *puVar11;
      uVar10 = puVar1[8];
      uVar6 = uVar5;
      if (uVar10 < uVar5) {
        do {
          uVar6 = uVar6 + 8;
        } while (uVar6 != uVar10);
      }
      fn_001008c4(uVar5,(int)(puVar1[9] - uVar5) >> 3,0);
      puVar1[9] = puVar4 + uVar13 * 2;
      puVar1[8] = puVar4 + ((int)(uVar10 - uVar5) >> 3) * 2 + 2;
      *puVar11 = (uint)puVar4;
    }
    else {
      puVar2 = puVar7 + 2;
      puVar1[8] = puVar7 + 2;
      if (puVar2 < puVar7) {
        puVar3 = puVar7 + -2;
        puVar9 = puVar7;
        for (puVar4 = puVar3; puVar4 != puVar7; puVar4 = puVar4 + 2) {
          if (puVar9 != (undefined4 *)0x0) {
            uVar14 = puVar4[1];
            *puVar9 = *puVar4;
            puVar9[1] = uVar14;
          }
          puVar9 = puVar9 + 2;
        }
        puVar9 = puVar7;
        if (puVar7 < puVar3) {
          iVar12 = (int)puVar3 - (int)puVar7;
          if (0 < iVar12) {
            if (iVar12 * 0x10000000 < 0) {
              puVar3 = puVar7 + -4;
              puVar9 = puVar7 + -2;
              *puVar9 = *puVar3;
              puVar7[-1] = puVar7[-3];
            }
            for (iVar12 = iVar12 >> 4; iVar12 != 0; iVar12 = iVar12 + -1) {
              uVar14 = puVar3[-1];
              puVar9[-2] = puVar3[-2];
              puVar9[-1] = uVar14;
              uVar14 = puVar3[-3];
              puVar9[-4] = puVar3[-4];
              puVar9[-3] = uVar14;
              puVar3 = puVar3 + -4;
              puVar9 = puVar9 + -4;
            }
          }
        }
        else {
          for (; puVar7 != puVar3; puVar3 = puVar3 + -2) {
            uVar14 = puVar3[-1];
            puVar9[-2] = puVar3[-2];
            puVar9[-1] = uVar14;
            puVar9 = puVar9 + -2;
          }
        }
        if (puVar7 < puVar2) {
          iVar12 = (int)puVar2 - (int)puVar7;
          if (0 < iVar12) {
            if (iVar12 * 0x10000000 < 0) {
              puVar2 = puVar7 + 1;
              *puVar7 = 0;
              puVar7 = puVar7 + 2;
              *puVar2 = 0;
            }
            for (iVar12 = iVar12 >> 4; iVar12 != 0; iVar12 = iVar12 + -1) {
              *puVar7 = 0;
              puVar7[1] = 0;
              puVar2 = puVar7 + 3;
              puVar7[2] = 0;
              puVar7 = puVar7 + 4;
              *puVar2 = 0;
            }
          }
        }
        else {
          for (; puVar7 != puVar2; puVar7 = puVar7 + 2) {
            *puVar7 = 0;
            puVar7[1] = 0;
          }
        }
      }
      else {
        do {
          if (puVar7 != (undefined4 *)0x0) {
            *puVar7 = 0;
            puVar7[1] = 0;
          }
          iVar12 = iVar12 + -1;
          puVar7 = puVar7 + 2;
        } while (iVar12 != 0);
      }
    }
  }
  else if ((1 < uVar13) && (puVar9 = puVar2 + 2, puVar2 != puVar7)) {
    puVar2 = puVar9;
    if (puVar7 < puVar9) {
      do {
        puVar2 = puVar2 + 2;
      } while (puVar2 != puVar7);
    }
    puVar1[8] = (int)puVar7 - ((int)puVar7 - (int)puVar9 & 0xfffffff8U);
  }
  return puVar1;
}



undefined4 * fn_0010a868(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00119ba8();
  *puVar1 = &DAT_00820924;
  puVar1[8] = 0;
  fn_00113474(puVar1);
  return puVar1;
}


