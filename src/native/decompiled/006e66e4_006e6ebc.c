#include "006e66e4_006e6ebc.h"



char fn_006e6ebc(int param_1)

{
  char cVar1;
  
  cVar1 = *(int *)(param_1 + 4) != 0;
  if (*(int *)(param_1 + 8) != 0) {
    cVar1 = cVar1 + '\x01';
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    cVar1 = cVar1 + '\x01';
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    cVar1 = cVar1 + '\x01';
  }
  return cVar1;
}



char fn_006e6e6c(int param_1)

{
  char cVar1;
  
  cVar1 = *(int *)(param_1 + 0x24) != 0;
  if (*(int *)(param_1 + 0x28) != 0) {
    cVar1 = cVar1 + '\x01';
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    cVar1 = cVar1 + '\x01';
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    cVar1 = cVar1 + '\x01';
  }
  return cVar1;
}



void fn_006e69d0(int param_1,int param_2,uint *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int *piVar13;
  undefined4 *puVar14;
  int iVar15;
  int iVar16;
  int local_38;
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [8];
  
  uVar11 = *param_3;
  uVar10 = param_3[1];
  if (uVar11 != uVar10) {
    uVar4 = uVar11;
    if (uVar10 <= uVar11) {
      do {
        uVar4 = uVar4 + 4;
      } while (uVar4 != uVar10);
    }
    param_3[1] = uVar10 - (uVar10 - uVar11 & 0xfffffffc);
  }
  local_38 = 0;
  do {
    piVar13 = (int *)param_3[1];
    iVar15 = *(int *)(param_1 + param_2 * 0x10 + local_38 * 4 + 4);
    if (piVar13 == (int *)param_3[2]) {
      uVar10 = (int)((int)piVar13 - *param_3) >> 2;
      if (uVar10 < (uint)((int)((int)param_3[2] - *param_3) >> 2)) {
        param_3[1] = (uint)(piVar13 + 1);
        if (piVar13 != (int *)0x0) {
          *piVar13 = piVar13[-1];
        }
        piVar5 = piVar13 + -1;
        piVar6 = piVar13;
        if (piVar13 < piVar5) {
          iVar16 = (int)piVar5 - (int)piVar13;
          if (0 < iVar16) {
            if (iVar16 * 0x20000000 < 0) {
              piVar5 = piVar13 + -2;
              piVar6 = piVar13 + -1;
              *piVar6 = *piVar5;
            }
            for (iVar16 = iVar16 >> 3; iVar16 != 0; iVar16 = iVar16 + -1) {
              piVar6[-1] = piVar5[-1];
              piVar5 = piVar5 + -2;
              piVar6 = piVar6 + -2;
              *piVar6 = *piVar5;
            }
          }
        }
        else {
          while (piVar13 != piVar5) {
            piVar5 = piVar5 + -1;
            piVar6[-1] = *piVar5;
            piVar6 = piVar6 + -1;
          }
        }
        *piVar13 = iVar15;
      }
      else {
        uVar11 = uVar10 + (uVar10 >> 1) + (uVar10 >> 3);
        if (uVar11 < uVar10 + 0x20) {
          uVar11 = uVar10 + 0x20;
        }
        piVar1 = (int *)fn_00100fc6(uVar11 << 2,0);
        piVar6 = piVar1;
        for (piVar5 = (int *)*param_3; piVar5 != piVar13; piVar5 = piVar5 + 1) {
          if (piVar6 != (int *)0x0) {
            *piVar6 = *piVar5;
          }
          piVar6 = piVar6 + 1;
        }
        piVar5 = (int *)(((int)piVar13 - *param_3 & 0xfffffffc) + (int)piVar1);
        if (piVar5 != (int *)0x0) {
          *piVar5 = iVar15;
        }
        piVar6 = (int *)param_3[1];
        piVar5 = (int *)(((int)piVar13 - *param_3 & 0xfffffffc) + (int)piVar1);
        for (; piVar13 != piVar6; piVar13 = piVar13 + 1) {
          piVar5 = piVar5 + 1;
          if (piVar5 != (int *)0x0) {
            *piVar5 = *piVar13;
          }
        }
        uVar12 = *param_3;
        uVar4 = param_3[1];
        uVar10 = uVar12;
        if (uVar4 < uVar12) {
          do {
            uVar10 = uVar10 + 4;
          } while (uVar10 != uVar4);
        }
        fn_001008c4(uVar12,(int)(param_3[2] - uVar12) >> 2,0);
        param_3[2] = (uint)(piVar1 + uVar11);
        param_3[1] = (uint)(piVar1 + ((int)(uVar4 - uVar12) >> 2) + 1);
        *param_3 = (uint)piVar1;
      }
    }
    else {
      param_3[1] = (uint)(piVar13 + 1);
      if (piVar13 != (int *)0x0) {
        *piVar13 = iVar15;
      }
    }
    if (iVar15 != 0) {
      uVar2 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),iVar15);
      fn_0020bbc4(auStack_30,uVar2);
      fn_006bfe90(auStack_2c);
      iVar15 = fn_001cab7c();
      iVar16 = 1;
      if (1 < iVar15) {
        do {
          puVar14 = (undefined4 *)param_3[1];
          if (puVar14 == (undefined4 *)param_3[2]) {
            uVar10 = (int)((int)puVar14 - *param_3) >> 2;
            if (uVar10 < (uint)((int)((int)param_3[2] - *param_3) >> 2)) {
              param_3[1] = (uint)(puVar14 + 1);
              if (puVar14 != (undefined4 *)0x0) {
                *puVar14 = puVar14[-1];
              }
              puVar8 = puVar14 + -1;
              puVar9 = puVar14;
              if (puVar14 < puVar8) {
                iVar7 = (int)puVar8 - (int)puVar14;
                if (0 < iVar7) {
                  if (iVar7 * 0x20000000 < 0) {
                    puVar8 = puVar14 + -2;
                    puVar9 = puVar14 + -1;
                    *puVar9 = *puVar8;
                  }
                  for (iVar7 = iVar7 >> 3; iVar7 != 0; iVar7 = iVar7 + -1) {
                    puVar9[-1] = puVar8[-1];
                    puVar8 = puVar8 + -2;
                    puVar9 = puVar9 + -2;
                    *puVar9 = *puVar8;
                  }
                }
              }
              else {
                while (puVar14 != puVar8) {
                  puVar8 = puVar8 + -1;
                  puVar9[-1] = *puVar8;
                  puVar9 = puVar9 + -1;
                }
              }
              *puVar14 = 0;
            }
            else {
              uVar11 = uVar10 + (uVar10 >> 1) + (uVar10 >> 3);
              if (uVar11 < uVar10 + 0x20) {
                uVar11 = uVar10 + 0x20;
              }
              puVar3 = (undefined4 *)fn_00100fc6(uVar11 << 2,0);
              puVar9 = puVar3;
              for (puVar8 = (undefined4 *)*param_3; puVar8 != puVar14; puVar8 = puVar8 + 1) {
                if (puVar9 != (undefined4 *)0x0) {
                  *puVar9 = *puVar8;
                }
                puVar9 = puVar9 + 1;
              }
              puVar8 = (undefined4 *)(((int)puVar14 - *param_3 & 0xfffffffc) + (int)puVar3);
              if (puVar8 != (undefined4 *)0x0) {
                *puVar8 = 0;
              }
              puVar9 = (undefined4 *)param_3[1];
              puVar8 = (undefined4 *)(((int)puVar14 - *param_3 & 0xfffffffc) + (int)puVar3);
              for (; puVar14 != puVar9; puVar14 = puVar14 + 1) {
                puVar8 = puVar8 + 1;
                if (puVar8 != (undefined4 *)0x0) {
                  *puVar8 = *puVar14;
                }
              }
              uVar4 = param_3[1];
              uVar12 = *param_3;
              uVar10 = uVar12;
              if (uVar4 <= uVar12) {
                for (; uVar10 != uVar4; uVar10 = uVar10 + 4) {
                }
              }
              fn_001008c4(uVar12,(int)(param_3[2] - uVar12) >> 2,0);
              *param_3 = (uint)puVar3;
              param_3[1] = (uint)(puVar3 + ((int)(uVar4 - uVar12) >> 2) + 1);
              param_3[2] = (uint)(puVar3 + uVar11);
            }
          }
          else {
            param_3[1] = (uint)(puVar14 + 1);
            if (puVar14 != (undefined4 *)0x0) {
              *puVar14 = 0;
            }
          }
          iVar16 = iVar16 + 1;
        } while (iVar16 < iVar15);
      }
    }
  } while (((uint)((int)(param_3[1] - *param_3) >> 2) < 4) &&
          (local_38 = local_38 + 1, local_38 < 4));
  return;
}



int fn_006e690c(int param_1,int param_2)

{
  return *(int *)(param_1 + 8) + param_2 * 0x88;
}



uint fn_006e68b4(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  uVar1 = (*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8)) / 0x88;
  if (uVar1 != 0) {
    do {
      if (*(short *)(*(int *)(param_1 + 8) + uVar2 * 0x88 + 2) == 0) {
        return uVar2;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  return uVar1;
}



int fn_006e6820(int param_1)

{
  return *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10) >> 3;
}



int fn_006e6814(int param_1,int param_2)

{
  return *(int *)(param_1 + 0x10) + param_2 * 8;
}



bool fn_006e67bc(undefined4 param_1,uint param_2)

{
  return (param_2 & 1) != 0;
}



/* WARNING: Removing unreachable block (ram,0x006e670c) */
/* WARNING: Removing unreachable block (ram,0x006e675c) */
/* WARNING: Removing unreachable block (ram,0x006e6720) */

int fn_006e67ac(undefined4 param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  iVar5 = 0;
  do {
    iVar2 = fn_002043cc(DAT_00897840,(int)(char)((char)iVar5 * '\x02' + '\x01'));
    iVar5 = iVar5 + 1;
    if (iVar4 < *(int *)(iVar2 + 0x798)) {
      iVar4 = *(int *)(iVar2 + 0x798);
    }
  } while (iVar5 < 4);
  iVar2 = 0;
  iVar5 = 0;
  do {
    cVar1 = (char)iVar5 * '\x02' + '\x01';
    iVar3 = fn_002043cc(DAT_00897840,(int)cVar1);
    if (iVar4 == *(int *)(iVar3 + 0x798)) {
      if (iVar2 == param_2) {
        return (int)cVar1;
      }
      iVar2 = iVar2 + 1;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 4);
  return 0;
}



/* WARNING: Removing unreachable block (ram,0x006e6704) */
/* WARNING: Removing unreachable block (ram,0x006e6760) */
/* WARNING: Removing unreachable block (ram,0x006e6724) */

int fn_006e66e4(undefined4 param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  iVar5 = 0;
  do {
    iVar2 = fn_002043cc(DAT_00897840,(int)(char)((char)iVar5 << 1));
    iVar5 = iVar5 + 1;
    if (iVar4 < *(int *)(iVar2 + 0x798)) {
      iVar4 = *(int *)(iVar2 + 0x798);
    }
  } while (iVar5 < 4);
  iVar2 = 0;
  iVar5 = 0;
  do {
    cVar1 = (char)iVar5 << 1;
    iVar3 = fn_002043cc(DAT_00897840,(int)cVar1);
    if (iVar4 == *(int *)(iVar3 + 0x798)) {
      if (iVar2 == param_2) {
        return (int)cVar1;
      }
      iVar2 = iVar2 + 1;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 4);
  return 0;
}


