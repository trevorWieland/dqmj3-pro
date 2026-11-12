#include "003a1d14_003a1fd4bb.h"



/* WARNING: Removing unreachable block (ram,0x003a21cc) */
/* WARNING: Removing unreachable block (ram,0x003a21d0) */
/* WARNING: Removing unreachable block (ram,0x003a21d4) */
/* WARNING: Removing unreachable block (ram,0x003a21d8) */
/* WARNING: Removing unreachable block (ram,0x003a21dc) */

void fn_003a1fd4(int *param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  uint uVar12;
  int *piVar13;
  uint uVar14;
  
  piVar10 = (int *)0x0;
  piVar11 = (int *)0x0;
  piVar13 = (int *)0x0;
  uVar12 = 0;
  piVar7 = piVar11;
  if (0 < *param_1) {
    do {
      bVar1 = true;
      uVar14 = param_1[2] - param_1[1] >> 2;
      if (uVar14 <= uVar12) {
        fn_002ff628(9,&DAT_008c7670,&DAT_008c7670,uVar12,uVar14);
      }
      iVar2 = fn_002043cc(DAT_00897840,*(undefined4 *)(param_1[1] + uVar12 * 4));
      iVar2 = *(int *)(iVar2 + 0x79c);
      uVar14 = 0;
      if ((int)piVar7 - (int)piVar10 >> 2 == 0) {
LAB_003a20a8:
        if (piVar7 == piVar13) {
          uVar14 = (int)piVar7 - (int)piVar10 >> 2;
          if (uVar14 < (uint)((int)piVar13 - (int)piVar10 >> 2)) {
            piVar8 = piVar7 + -1;
            if (piVar7 != (int *)0x0) {
              *piVar7 = piVar7[-1];
            }
            piVar11 = piVar7 + 1;
            piVar4 = piVar7;
            if (piVar7 < piVar8) {
              iVar9 = (int)piVar8 - (int)piVar7;
              if (0 < iVar9) {
                if (iVar9 * 0x20000000 < 0) {
                  piVar8 = piVar7 + -2;
                  piVar4 = piVar7 + -1;
                  *piVar4 = *piVar8;
                }
                for (iVar9 = iVar9 >> 3; iVar9 != 0; iVar9 = iVar9 + -1) {
                  piVar4[-1] = piVar8[-1];
                  piVar8 = piVar8 + -2;
                  piVar4 = piVar4 + -2;
                  *piVar4 = *piVar8;
                }
              }
            }
            else {
              while (piVar7 != piVar8) {
                piVar8 = piVar8 + -1;
                piVar4[-1] = *piVar8;
                piVar4 = piVar4 + -1;
              }
            }
            *piVar7 = iVar2;
          }
          else {
            uVar3 = uVar14 + (uVar14 >> 1) + (uVar14 >> 3);
            if (uVar3 < uVar14 + 0x20) {
              uVar3 = uVar14 + 0x20;
            }
            piVar4 = (int *)fn_00100fc6(uVar3 << 2,0);
            piVar8 = piVar4;
            for (piVar11 = piVar10; piVar11 != piVar7; piVar11 = piVar11 + 1) {
              if (piVar8 != (int *)0x0) {
                *piVar8 = *piVar11;
              }
              piVar8 = piVar8 + 1;
            }
            piVar11 = (int *)(((int)piVar7 - (int)piVar10 & 0xfffffffcU) + (int)piVar4);
            if (piVar11 != (int *)0x0) {
              *piVar11 = iVar2;
            }
            piVar11 = piVar10;
            if (piVar7 <= piVar10) {
              for (; piVar11 != piVar7; piVar11 = piVar11 + 1) {
              }
            }
            fn_001008c4(piVar10,(int)piVar13 - (int)piVar10 >> 2,0);
            piVar11 = piVar4 + ((int)piVar7 - (int)piVar10 >> 2) + 1;
            piVar13 = piVar4 + uVar3;
            piVar10 = piVar4;
          }
        }
        else {
          piVar11 = piVar7 + 1;
          if (piVar7 != (int *)0x0) {
            *piVar7 = iVar2;
          }
        }
      }
      else {
        do {
          uVar3 = (int)piVar7 - (int)piVar10 >> 2;
          if (uVar3 <= uVar14) {
            fn_002ff628(9,&DAT_008c7670,&DAT_008c7670,uVar14,uVar3);
          }
          piVar11 = piVar10 + uVar14;
          uVar14 = uVar14 + 1;
          if (*piVar11 == iVar2) {
            bVar1 = false;
          }
        } while (uVar14 < (uint)((int)piVar7 - (int)piVar10 >> 2));
        piVar11 = piVar7;
        if (bVar1) goto LAB_003a20a8;
      }
      uVar12 = uVar12 + 1;
      piVar7 = piVar11;
    } while ((int)uVar12 < *param_1);
  }
  if (piVar10 != piVar11) {
    fn_007b1030(piVar10,piVar11,(int)piVar11 - (int)piVar10 >> 2);
    piVar7 = piVar10;
    if ((int)piVar11 - (int)piVar10 < 0x41) {
      while (piVar8 = piVar7 + 1, piVar8 != piVar11) {
        iVar2 = *piVar8;
        piVar4 = piVar8;
        if (*piVar10 < iVar2) {
          piVar4 = piVar7 + 2;
          piVar6 = piVar8;
          if (piVar10 < piVar8) {
            iVar9 = (int)piVar8 - (int)piVar10;
            if (0 < iVar9) {
              if (iVar9 * 0x20000000 < 0) {
                *piVar8 = *piVar7;
                piVar6 = piVar7;
                piVar4 = piVar8;
              }
              for (iVar9 = iVar9 >> 3; iVar9 != 0; iVar9 = iVar9 + -1) {
                piVar4[-1] = piVar6[-1];
                piVar6 = piVar6 + -2;
                piVar4 = piVar4 + -2;
                *piVar4 = *piVar6;
              }
            }
          }
          else {
            while (piVar10 != piVar6) {
              piVar4 = piVar4 + -1;
              *piVar4 = piVar6[-1];
              piVar6 = piVar6 + -1;
            }
          }
          *piVar10 = iVar2;
          piVar7 = piVar8;
        }
        else {
          while( true ) {
            if (iVar2 <= piVar4[-1]) break;
            *piVar4 = piVar4[-1];
            piVar4 = piVar4 + -1;
          }
          *piVar4 = iVar2;
          piVar7 = piVar8;
        }
      }
    }
    else {
      piVar8 = piVar10 + 0x10;
      while (piVar4 = piVar7 + 1, piVar4 != piVar8) {
        iVar2 = *piVar4;
        piVar6 = piVar4;
        if (*piVar10 < iVar2) {
          piVar6 = piVar7 + 2;
          piVar5 = piVar4;
          if (piVar10 < piVar4) {
            iVar9 = (int)piVar4 - (int)piVar10;
            if (0 < iVar9) {
              if (iVar9 * 0x20000000 < 0) {
                *piVar4 = *piVar7;
                piVar5 = piVar7;
                piVar6 = piVar4;
              }
              for (iVar9 = iVar9 >> 3; iVar9 != 0; iVar9 = iVar9 + -1) {
                piVar6[-1] = piVar5[-1];
                piVar5 = piVar5 + -2;
                piVar6 = piVar6 + -2;
                *piVar6 = *piVar5;
              }
            }
          }
          else {
            while (piVar10 != piVar5) {
              piVar6 = piVar6 + -1;
              *piVar6 = piVar5[-1];
              piVar5 = piVar5 + -1;
            }
          }
          *piVar10 = iVar2;
          piVar7 = piVar4;
        }
        else {
          while( true ) {
            if (iVar2 <= piVar6[-1]) break;
            *piVar6 = piVar6[-1];
            piVar6 = piVar6 + -1;
          }
          *piVar6 = iVar2;
          piVar7 = piVar4;
        }
      }
      for (; piVar8 != piVar11; piVar8 = piVar8 + 1) {
        iVar2 = *piVar8;
        piVar7 = piVar8;
        while( true ) {
          if (iVar2 <= piVar7[-1]) break;
          *piVar7 = piVar7[-1];
          piVar7 = piVar7 + -1;
        }
        *piVar7 = iVar2;
      }
    }
  }
  iVar2 = fn_00204404(DAT_00897840);
  if (*(char *)(iVar2 + 0x1081) == '\0') {
    *(undefined1 *)(param_1 + 9) = 100;
  }
  else {
    iVar2 = *(int *)(iVar2 + 0x79c);
    uVar12 = 0;
    if ((int)piVar11 - (int)piVar10 >> 2 != 0) {
      do {
        uVar14 = (int)piVar11 - (int)piVar10 >> 2;
        if (uVar14 <= uVar12) {
          fn_002ff628(9,&DAT_008c7670,&DAT_008c7670,uVar12,uVar14);
        }
        if (piVar10[uVar12] == iVar2) {
          *(char *)(param_1 + 9) = (char)uVar12;
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < (uint)((int)piVar11 - (int)piVar10 >> 2));
    }
  }
  piVar7 = piVar10;
  if (piVar11 < piVar10) {
    do {
      piVar7 = piVar7 + 1;
    } while (piVar7 != piVar11);
  }
  fn_002feef8(piVar10,(int)piVar13 - (int)piVar10 >> 2,0);
  return;
}



void fn_003a1f98(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0028e264();
  *puVar1 = &DAT_0082da64;
  *(undefined1 *)(puVar1 + 2) = 0xff;
  *(undefined1 *)((int)puVar1 + 9) = 0xff;
  puVar1[3] = 4;
  return;
}


