#include "0060f464_0060f9e0.h"



void fn_0060f9e0(int *param_1,byte param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  
  cVar1 = *(char *)((int)param_1 + 0x179);
  if (cVar1 != '\x01') {
    param_2 = *(byte *)(param_1 + 0x4e);
  }
  if (cVar1 == '\x01' || (param_2 & 2) == 0) {
    fn_001d9bc8(param_1);
    return;
  }
  if (cVar1 != '\x02') {
    return;
  }
  piVar2 = (int *)fn_006f72e0(DAT_008977e0);
  iVar3 = (**(code **)(*piVar2 + 0x3c))();
  if (iVar3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0060fa54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xd8))(param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0060fa38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xd8))(param_1);
  return;
}



/* WARNING: Removing unreachable block (ram,0x0060f7cc) */
/* WARNING: Removing unreachable block (ram,0x0060f7d0) */
/* WARNING: Removing unreachable block (ram,0x0060f7d4) */
/* WARNING: Removing unreachable block (ram,0x0060f7d8) */
/* WARNING: Removing unreachable block (ram,0x0060f7dc) */

void fn_0060f670(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 *puVar3;
  uint uVar4;
  undefined2 *puVar5;
  int iVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  uint uVar10;
  undefined2 *puVar11;
  int iVar12;
  uint uVar13;
  
  puVar7 = (undefined2 *)0x0;
  puVar8 = (undefined2 *)0x0;
  puVar11 = (undefined2 *)0x0;
  iVar2 = fn_0033cd34();
  iVar12 = 0;
  puVar5 = puVar7;
  puVar9 = puVar8;
  if (0 < iVar2) {
    do {
      uVar1 = fn_0033cc74(iVar12);
      puVar7 = puVar5;
      if (puVar9 == puVar11) {
        uVar10 = (int)puVar9 - (int)puVar5 >> 1;
        if (uVar10 < (uint)((int)puVar11 - (int)puVar5 >> 1)) {
          puVar5 = puVar9 + -1;
          if (puVar9 != (undefined2 *)0x0) {
            *puVar9 = puVar9[-1];
          }
          puVar8 = puVar9 + 1;
          puVar3 = puVar9;
          if (puVar9 < puVar5) {
            iVar6 = (int)puVar5 - (int)puVar9;
            if (0 < iVar6) {
              if (iVar6 * 0x40000000 < 0) {
                puVar5 = puVar9 + -2;
                puVar3 = puVar9 + -1;
                *puVar3 = *puVar5;
              }
              for (iVar6 = iVar6 >> 2; iVar6 != 0; iVar6 = iVar6 + -1) {
                puVar3[-1] = puVar5[-1];
                puVar5 = puVar5 + -2;
                puVar3 = puVar3 + -2;
                *puVar3 = *puVar5;
              }
            }
          }
          else {
            while (puVar9 != puVar5) {
              puVar5 = puVar5 + -1;
              puVar3[-1] = *puVar5;
              puVar3 = puVar3 + -1;
            }
          }
          *puVar9 = uVar1;
        }
        else {
          uVar4 = uVar10 + (uVar10 >> 1) + (uVar10 >> 3);
          uVar13 = uVar10 + 0x20;
          if (uVar10 + 0x20 <= uVar4) {
            uVar13 = uVar4;
          }
          puVar7 = (undefined2 *)fn_00100fc6(uVar13 << 1,0);
          puVar3 = puVar7;
          for (puVar8 = puVar5; puVar8 != puVar9; puVar8 = puVar8 + 1) {
            if (puVar3 != (undefined2 *)0x0) {
              *puVar3 = *puVar8;
            }
            puVar3 = puVar3 + 1;
          }
          puVar8 = (undefined2 *)(((int)puVar9 - (int)puVar5 & 0xfffffffeU) + (int)puVar7);
          if (puVar8 != (undefined2 *)0x0) {
            *puVar8 = uVar1;
          }
          puVar8 = puVar5;
          if (puVar9 < puVar5) {
            do {
              puVar8 = puVar8 + 1;
            } while (puVar8 != puVar9);
          }
          fn_001008c4(puVar5,(int)puVar11 - (int)puVar5 >> 1,0);
          puVar11 = puVar7 + uVar13;
          puVar8 = puVar7 + ((int)puVar9 - (int)puVar5 >> 1) + 1;
        }
      }
      else {
        if (puVar9 != (undefined2 *)0x0) {
          *puVar9 = uVar1;
        }
        puVar8 = puVar9 + 1;
      }
      iVar12 = iVar12 + 1;
      puVar5 = puVar7;
      puVar9 = puVar8;
    } while (iVar12 < iVar2);
  }
  uVar10 = 0;
  if ((int)puVar8 - (int)puVar7 >> 1 != 0) {
    do {
      uVar4 = fn_00163868((int)puVar8 - (int)puVar7 >> 1);
      uVar13 = (int)puVar8 - (int)puVar7 >> 1;
      if (uVar13 <= uVar10) {
        fn_002ff628(9,&DAT_008c7674,&DAT_008c7674,uVar10,uVar13);
      }
      uVar1 = puVar7[uVar10];
      uVar13 = (int)puVar8 - (int)puVar7 >> 1;
      if (uVar13 <= uVar10) {
        fn_002ff628(9,&DAT_008c7674,&DAT_008c7674,uVar10,uVar13);
      }
      uVar13 = (int)puVar8 - (int)puVar7 >> 1;
      if (uVar13 <= uVar4) {
        fn_002ff628(9,&DAT_008c7674,&DAT_008c7674,uVar4,uVar13);
      }
      puVar7[uVar10] = puVar7[uVar4];
      uVar13 = (int)puVar8 - (int)puVar7 >> 1;
      if (uVar13 <= uVar4) {
        fn_002ff628(9,&DAT_008c7674,&DAT_008c7674,uVar4,uVar13);
      }
      uVar10 = uVar10 + 1;
      puVar7[uVar4] = uVar1;
    } while (uVar10 < (uint)((int)puVar8 - (int)puVar7 >> 1));
  }
  uVar10 = 0;
  do {
    uVar13 = (int)puVar8 - (int)puVar7 >> 1;
    if (uVar10 < uVar13) {
      if (uVar13 <= uVar10) {
        fn_002ff628(9,&DAT_008c7674,&DAT_008c7674,uVar10,uVar13);
      }
      if (uVar10 < 7) {
        iVar12 = param_1 + uVar10 * 4;
        *(undefined2 *)(iVar12 + 0x56) = puVar7[uVar10];
        iVar2 = fn_0068f818();
        uVar1 = 0;
        if (iVar2 != 0) {
          uVar1 = fn_0068f6a8();
        }
        *(undefined2 *)(iVar12 + 0x58) = uVar1;
      }
    }
    uVar10 = uVar10 + 1;
  } while ((int)uVar10 < 5);
  puVar5 = puVar7;
  if (puVar8 < puVar7) {
    do {
      puVar5 = puVar5 + 1;
    } while (puVar5 != puVar8);
  }
  fn_002feef8(puVar7,(int)puVar11 - (int)puVar7 >> 1,0);
  return;
}



int fn_0060f4c8(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  
  puVar1 = *(undefined4 **)(param_1 + 0x98);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00898eac) goto LAB_0060f508;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_0060f508:
  if (*(char *)(puVar1 + 9) == '\0') {
    iVar4 = 0;
    cVar5 = puVar1[0xb] != 0;
    if (puVar1[0xc] != 0) {
      cVar5 = cVar5 + '\x01';
    }
    if (puVar1[0xd] != 0) {
      cVar5 = cVar5 + '\x01';
    }
    if (puVar1[0xe] != 0) {
      cVar5 = cVar5 + '\x01';
    }
    if (cVar5 != '\0') {
      do {
        if (puVar1[iVar4 + 0xb] == puVar1[0x1d]) {
          return iVar4;
        }
        uVar3 = (uint)(puVar1[0xb] != 0);
        if (puVar1[0xc] != 0) {
          uVar3 = uVar3 + 1;
        }
        if (puVar1[0xd] != 0) {
          uVar3 = uVar3 + 1;
        }
        iVar4 = iVar4 + 1;
        if (puVar1[0xe] != 0) {
          uVar3 = uVar3 + 1;
        }
      } while (iVar4 < (int)uVar3);
    }
    return -1;
  }
  iVar4 = 0;
  cVar5 = puVar1[0x13] != 0;
  if (puVar1[0x14] != 0) {
    cVar5 = cVar5 + '\x01';
  }
  if (puVar1[0x15] != 0) {
    cVar5 = cVar5 + '\x01';
  }
  if (puVar1[0x16] != 0) {
    cVar5 = cVar5 + '\x01';
  }
  if (cVar5 != '\0') {
    do {
      if (puVar1[iVar4 + 0x13] == puVar1[0x1e]) {
        return iVar4;
      }
      uVar3 = (uint)(puVar1[0x13] != 0);
      if (puVar1[0x14] != 0) {
        uVar3 = uVar3 + 1;
      }
      if (puVar1[0x15] != 0) {
        uVar3 = uVar3 + 1;
      }
      iVar4 = iVar4 + 1;
      if (puVar1[0x16] != 0) {
        uVar3 = uVar3 + 1;
      }
    } while (iVar4 < (int)uVar3);
  }
  return -1;
}



int fn_0060f464(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  
  puVar1 = *(undefined4 **)(param_1 + 0x98);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00898eac) goto LAB_0060f4a4;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_0060f4a4:
  if (*(char *)(puVar1 + 9) == '\0') {
    iVar4 = 0;
    cVar5 = puVar1[0xb] != 0;
    if (puVar1[0xc] != 0) {
      cVar5 = cVar5 + '\x01';
    }
    if (puVar1[0xd] != 0) {
      cVar5 = cVar5 + '\x01';
    }
    if (puVar1[0xe] != 0) {
      cVar5 = cVar5 + '\x01';
    }
    if (cVar5 != '\0') {
      do {
        if (puVar1[iVar4 + 0xb] == puVar1[0x1b]) {
          return iVar4;
        }
        uVar3 = (uint)(puVar1[0xb] != 0);
        if (puVar1[0xc] != 0) {
          uVar3 = uVar3 + 1;
        }
        if (puVar1[0xd] != 0) {
          uVar3 = uVar3 + 1;
        }
        iVar4 = iVar4 + 1;
        if (puVar1[0xe] != 0) {
          uVar3 = uVar3 + 1;
        }
      } while (iVar4 < (int)uVar3);
    }
    return -1;
  }
  iVar4 = 0;
  cVar5 = puVar1[0x13] != 0;
  if (puVar1[0x14] != 0) {
    cVar5 = cVar5 + '\x01';
  }
  if (puVar1[0x15] != 0) {
    cVar5 = cVar5 + '\x01';
  }
  if (puVar1[0x16] != 0) {
    cVar5 = cVar5 + '\x01';
  }
  if (cVar5 != '\0') {
    do {
      if (puVar1[iVar4 + 0x13] == puVar1[0x1c]) {
        return iVar4;
      }
      uVar3 = (uint)(puVar1[0x13] != 0);
      if (puVar1[0x14] != 0) {
        uVar3 = uVar3 + 1;
      }
      if (puVar1[0x15] != 0) {
        uVar3 = uVar3 + 1;
      }
      iVar4 = iVar4 + 1;
      if (puVar1[0x16] != 0) {
        uVar3 = uVar3 + 1;
      }
    } while (iVar4 < (int)uVar3);
  }
  return -1;
}


