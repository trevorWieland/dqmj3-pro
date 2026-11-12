#include "00262bfc_002631d8.h"



void fn_002631d8(int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(uint *)(param_2 + 0x4c);
  uVar3 = param_1[1] - *param_1 >> 2;
  if (uVar3 <= uVar2) {
    fn_002ff628(9,&DAT_008c7646,&DAT_008c7646,uVar2,uVar3);
  }
  (**(code **)(**(int **)(*param_1 + uVar2 * 4) + 0x14))();
  fn_00263114(param_1,param_1 + 0x10,uVar2);
  fn_00263114(param_1,param_1 + 0x13,uVar2);
  fn_00263114(param_1,param_1 + 0x16,uVar2);
  fn_00263114(param_1,param_1 + 0x19,uVar2);
  fn_00263114(param_1,param_1 + 0x1c,uVar2);
  uVar3 = 0;
  if (param_1[7] - param_1[6] >> 2 != 0) {
    do {
      uVar1 = param_1[7] - param_1[6] >> 2;
      if (uVar1 <= uVar3) {
        fn_002ff628(9,&DAT_008c7670,&DAT_008c7670,uVar3,uVar1);
      }
      if (*(uint *)(param_1[6] + uVar3 * 4) == uVar2) {
        uVar1 = param_1[7] - param_1[6] >> 2;
        if (uVar1 <= uVar3) {
          fn_002ff628(9,&DAT_008c7670,&DAT_008c7670,uVar3,uVar1);
        }
        *(undefined4 *)(param_1[6] + uVar3 * 4) = 0xffffffff;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)(param_1[7] - param_1[6] >> 2));
  }
  uVar3 = 0;
  if (param_1[4] - param_1[3] >> 2 != 0) {
    do {
      uVar1 = param_1[4] - param_1[3] >> 2;
      if (uVar1 <= uVar3) {
        fn_002ff628(9,&DAT_008c7670,&DAT_008c7670,uVar3,uVar1);
      }
      if (*(uint *)(param_1[3] + uVar3 * 4) == uVar2) {
        uVar1 = param_1[4] - param_1[3] >> 2;
        if (uVar1 <= uVar3) {
          fn_002ff628(9,&DAT_008c7670,&DAT_008c7670,uVar3,uVar1);
        }
        *(undefined4 *)(param_1[3] + uVar3 * 4) = 0xffffffff;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)(param_1[4] - param_1[3] >> 2));
  }
  if (param_1[0x1f] == uVar2) {
    param_1[0x1f] = -1;
  }
  uVar3 = param_1[1] - *param_1 >> 2;
  if (uVar3 <= uVar2) {
    fn_002ff628(9,&DAT_008c7646,&DAT_008c7646,uVar2,uVar3);
  }
  *(undefined4 *)(*param_1 + uVar2 * 4) = 0;
  return;
}



void fn_00263114(undefined4 param_1,undefined4 *param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar4;
  int *piVar3;
  int *piVar5;
  int iVar6;
  
  piVar2 = (int *)*param_2;
  if ((int *)param_2[1] != piVar2) {
    do {
      if (*piVar2 == param_3) {
        piVar5 = (int *)param_2[1];
        if ((int *)*param_2 != piVar5) {
          piVar3 = piVar2 + 1;
          if (piVar3 != piVar5) {
            piVar1 = piVar2;
            if (piVar3 < piVar5) {
              iVar6 = (int)piVar5 - (int)piVar3;
              if (0 < iVar6) {
                piVar5 = piVar2;
                piVar1 = piVar2 + -1;
                if (iVar6 * 0x20000000 < 0) {
                  *piVar2 = *piVar3;
                  piVar5 = piVar3;
                  piVar1 = piVar2;
                }
                for (iVar6 = iVar6 >> 3; iVar6 != 0; iVar6 = iVar6 + -1) {
                  piVar1[1] = piVar5[1];
                  piVar5 = piVar5 + 2;
                  piVar1 = piVar1 + 2;
                  *piVar1 = *piVar5;
                }
              }
            }
            else {
              do {
                piVar4 = piVar3 + 1;
                *piVar1 = *piVar3;
                piVar1 = piVar1 + 1;
                piVar3 = piVar4;
              } while (piVar4 != piVar5);
            }
          }
          param_2[1] = param_2[1] + -4;
        }
      }
      else {
        piVar2 = piVar2 + 1;
      }
    } while ((int *)param_2[1] != piVar2);
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x00262df4) */
/* WARNING: Removing unreachable block (ram,0x00262df8) */
/* WARNING: Removing unreachable block (ram,0x00262dfc) */
/* WARNING: Removing unreachable block (ram,0x00262e00) */
/* WARNING: Removing unreachable block (ram,0x00262e04) */

void fn_00262bfc(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  int iVar15;
  int iVar16;
  int *local_5c;
  
  piVar11 = (int *)0x0;
  local_5c = (int *)0x0;
  piVar10 = (int *)0x0;
  uVar12 = 0;
  piVar2 = piVar10;
  if (0 < param_1[0x1d] - param_1[0x1c] >> 2) {
    do {
      uVar13 = param_1[0x1d] - param_1[0x1c] >> 2;
      if (uVar13 <= uVar12) {
        fn_002ff628(9,&DAT_008c7670,&DAT_008c7670,uVar12,uVar13);
      }
      uVar13 = *(uint *)(param_1[0x1c] + uVar12 * 4);
      if ((int)uVar13 < 0) {
        iVar15 = 0;
      }
      else {
        uVar3 = param_1[1] - *param_1 >> 2;
        if (uVar3 <= uVar13) {
          fn_002ff628(9,&DAT_008c7646,&DAT_008c7646,uVar13,uVar3);
        }
        iVar15 = *(int *)(*param_1 + uVar13 * 4);
      }
      iVar1 = fn_006b66e4(iVar15);
      piVar10 = piVar2;
      if ((iVar1 != 0) && (*(int *)(iVar15 + 0x58) == param_2)) {
        if (piVar2 == local_5c) {
          uVar13 = (int)piVar2 - (int)piVar11 >> 2;
          if (uVar13 < (uint)((int)local_5c - (int)piVar11 >> 2)) {
            piVar6 = piVar2 + -1;
            if (piVar2 != (int *)0x0) {
              *piVar2 = piVar2[-1];
            }
            piVar10 = piVar2 + 1;
            piVar7 = piVar2;
            if (piVar2 < piVar6) {
              if (0 < (int)piVar6 - (int)piVar2) {
                iVar1 = (int)piVar6 - (int)piVar2 >> 2;
                iVar16 = 0;
                do {
                  iVar1 = iVar1 + -1;
                  piVar2[iVar16 + -1] = piVar6[iVar16 + -1];
                  iVar16 = iVar16 + -1;
                } while (iVar1 != 0);
              }
            }
            else {
              while (piVar2 != piVar6) {
                piVar6 = piVar6 + -1;
                piVar7[-1] = *piVar6;
                piVar7 = piVar7 + -1;
              }
            }
            *piVar2 = iVar15;
          }
          else {
            uVar3 = uVar13 + (uVar13 >> 1) + (uVar13 >> 3);
            if (uVar3 < uVar13 + 0x20) {
              uVar3 = uVar13 + 0x20;
            }
            piVar7 = (int *)fn_00100fc6(uVar3 << 2,0);
            piVar6 = piVar7;
            for (piVar10 = piVar11; piVar10 != piVar2; piVar10 = piVar10 + 1) {
              if (piVar6 != (int *)0x0) {
                *piVar6 = *piVar10;
              }
              piVar6 = piVar6 + 1;
            }
            piVar10 = (int *)(((int)piVar2 - (int)piVar11 & 0xfffffffcU) + (int)piVar7);
            if (piVar10 != (int *)0x0) {
              *piVar10 = iVar15;
            }
            piVar10 = piVar11;
            if (piVar2 < piVar11) {
              do {
                piVar10 = piVar10 + 1;
              } while (piVar10 != piVar2);
            }
            fn_001008c4(piVar11,(int)local_5c - (int)piVar11 >> 2,0);
            piVar10 = piVar7 + ((int)piVar2 - (int)piVar11 >> 2) + 1;
            local_5c = piVar7 + uVar3;
            piVar11 = piVar7;
          }
        }
        else {
          piVar10 = piVar2 + 1;
          if (piVar2 != (int *)0x0) {
            *piVar2 = iVar15;
          }
        }
      }
      uVar12 = uVar12 + 1;
      piVar2 = piVar10;
    } while ((int)uVar12 < param_1[0x1d] - param_1[0x1c] >> 2);
  }
  iVar15 = ((int)piVar10 - (int)piVar11 >> 2) + -2;
  if (0 < iVar15) {
    uVar12 = 0;
    do {
      uVar13 = (int)piVar10 - (int)piVar11 >> 2;
      if (uVar13 <= uVar12) {
        fn_002ff628(9,&DAT_008c764e,&DAT_008c764e,uVar12,uVar13);
      }
      iVar1 = piVar11[uVar12];
      piVar2 = (int *)param_1[0x20];
      if ((int *)param_1[0x21] != piVar2) {
        do {
          if (*piVar2 == iVar1) goto LAB_002630c4;
          piVar2 = piVar2 + 1;
        } while ((int *)param_1[0x21] != piVar2);
      }
      for (piVar2 = (int *)param_1[0x23]; (int *)param_1[0x24] != piVar2; piVar2 = piVar2 + 1) {
        if (*piVar2 == iVar1) goto LAB_002630c4;
      }
      piVar2 = (int *)param_1[0x21];
      puVar14 = (uint *)(param_1 + 0x20);
      if (piVar2 == (int *)param_1[0x22]) {
        uVar13 = (int)((int)piVar2 - *puVar14) >> 2;
        if (uVar13 < (uint)((int)(param_1[0x22] - *puVar14) >> 2)) {
          param_1[0x21] = (int)(piVar2 + 1);
          if (piVar2 != (int *)0x0) {
            *piVar2 = piVar2[-1];
          }
          piVar6 = piVar2 + -1;
          piVar7 = piVar2;
          if (piVar2 < piVar6) {
            if (0 < (int)piVar6 - (int)piVar2) {
              iVar16 = (int)piVar6 - (int)piVar2 >> 2;
              iVar9 = 0;
              do {
                iVar16 = iVar16 + -1;
                piVar2[iVar9 + -1] = piVar6[iVar9 + -1];
                iVar9 = iVar9 + -1;
              } while (iVar16 != 0);
            }
          }
          else {
            while (piVar2 != piVar6) {
              piVar6 = piVar6 + -1;
              piVar7[-1] = *piVar6;
              piVar7 = piVar7 + -1;
            }
          }
          *piVar2 = iVar1;
        }
        else {
          uVar3 = uVar13 + (uVar13 >> 1) + (uVar13 >> 3);
          if (uVar3 < uVar13 + 0x20) {
            uVar3 = uVar13 + 0x20;
          }
          piVar4 = (int *)fn_00100fc6(uVar3 << 2,0);
          piVar7 = piVar4;
          for (piVar6 = (int *)*puVar14; piVar6 != piVar2; piVar6 = piVar6 + 1) {
            if (piVar7 != (int *)0x0) {
              *piVar7 = *piVar6;
            }
            piVar7 = piVar7 + 1;
          }
          piVar6 = (int *)((int)piVar4 + ((int)piVar2 - *puVar14 & 0xfffffffc));
          if (piVar6 != (int *)0x0) {
            *piVar6 = iVar1;
          }
          piVar7 = (int *)param_1[0x21];
          piVar6 = (int *)((int)piVar4 + ((int)piVar2 - *puVar14 & 0xfffffffc));
          for (; piVar2 != piVar7; piVar2 = piVar2 + 1) {
            piVar6 = piVar6 + 1;
            if (piVar6 != (int *)0x0) {
              *piVar6 = *piVar2;
            }
          }
          uVar5 = *puVar14;
          uVar8 = param_1[0x21];
          uVar13 = uVar5;
          if (uVar8 < uVar5) {
            do {
              uVar13 = uVar13 + 4;
            } while (uVar13 != uVar8);
          }
          fn_001008c4(uVar5,(int)(param_1[0x22] - uVar5) >> 2,0);
          param_1[0x22] = (int)(piVar4 + uVar3);
          *puVar14 = (uint)piVar4;
          param_1[0x21] = (int)(piVar4 + ((int)(uVar8 - uVar5) >> 2) + 1);
        }
      }
      else {
        param_1[0x21] = (int)(piVar2 + 1);
        if (piVar2 != (int *)0x0) {
          *piVar2 = iVar1;
        }
      }
LAB_002630c4:
      uVar12 = uVar12 + 1;
    } while ((int)uVar12 < iVar15);
  }
  piVar2 = piVar11;
  if (piVar10 < piVar11) {
    do {
      piVar2 = piVar2 + 1;
    } while (piVar2 != piVar10);
  }
  fn_002feef8(piVar11,(int)local_5c - (int)piVar11 >> 2,0);
  return;
}


