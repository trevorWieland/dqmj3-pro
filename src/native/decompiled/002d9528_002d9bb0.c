#include "002d9528_002d9bb0.h"



void fn_002d9bb0(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  iVar7 = 0;
  uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
  iVar5 = (int)((longlong)(int)uVar4 * -0x6db6db6d + ((ulonglong)uVar4 << 0x20) >> 0x20);
  iVar5 = (iVar5 >> 5) - (iVar5 >> 0x1f);
  if (0 < iVar5) {
    do {
      iVar6 = *(int *)(param_1 + 4) + iVar7 * 0x38;
      uVar4 = *(uint *)(iVar6 + 8);
      if ((uVar4 & 1) == 0 && (uVar4 & 0x10) == 0) {
        bVar8 = (uVar4 & 0x20) != 0;
        if (bVar8) {
          uVar4 = *(uint *)(iVar6 + 0x14);
        }
        if (bVar8 && uVar4 != 0xffffffff) {
          iVar1 = fn_006f7a70(DAT_008977e0);
          piVar2 = *(int **)(*(int *)(iVar1 + 0x30) + *(int *)(iVar6 + 0x14) * 4);
          *(uint *)(iVar6 + 8) = *(uint *)(iVar6 + 8) & 0xffffffdf;
          (**(code **)(*piVar2 + 0x128))();
        }
        if ((((*(int *)(iVar6 + 0x28) == -1) &&
             (*(int *)(DAT_008977e0 + 0xa8) == *(int *)(iVar6 + 0x18))) &&
            (uVar4 = *(uint *)(iVar6 + 8), (uVar4 & 8) != 0)) &&
           ((uVar4 & 0x10) == 0 && (uVar4 & 1) == 0)) {
          uVar3 = fn_006f72b4();
          uVar3 = fn_0021ed50(uVar3,1,iVar6 + 0x2c,0);
          *(undefined4 *)(iVar6 + 0x28) = uVar3;
        }
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar5);
  }
  return;
}



void fn_002d9840(int param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  iVar1 = fn_006f6fc4(*(undefined4 *)(DAT_008977e0 + 0x40));
  iVar2 = fn_002d8370(0xffffffff);
  iVar5 = DAT_008977e0;
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
    iVar5 = *(int *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
    if (*(int **)(param_1 + 0x58) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x58) + 4))();
      *(undefined4 *)(param_1 + 0x58) = 0;
    }
    fn_003644f0(0xffffffff);
    iVar2 = *(int *)(DAT_008977e0 + 0xa8);
    if (-1 < *(int *)(DAT_008977e0 + 0x188) && -1 < iVar2) {
      pcVar3 = (char *)fn_006afe90(*(undefined4 *)(DAT_008977e0 + 0x1c));
      pcVar4 = (char *)fn_006afe90(*(undefined4 *)(DAT_008977e0 + 0x1c),iVar2);
      uVar7 = (uint)*pcVar3;
      bVar9 = uVar7 == (int)*pcVar4;
      if (bVar9) {
        uVar7 = (uint)*(byte *)(param_1 + 0x3e);
      }
      if (bVar9 && uVar7 == 0) {
        *(int *)(param_1 + 0x40) = (int)*param_2;
        fn_00696340(DAT_008977e0,param_1 + 4);
        if (iVar5 == -1) {
          uVar7 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
          iVar5 = (int)((longlong)(int)uVar7 * -0x6db6db6d + ((ulonglong)uVar7 << 0x20) >> 0x20);
          uVar7 = 0;
          if (iVar5 >> 5 != iVar5 >> 0x1f) {
            do {
              uVar8 = uVar7 + 1;
              *(undefined4 *)(*(int *)(param_1 + 4) + uVar7 * 0x38 + 0x14) = 0xffffffff;
              *(undefined4 *)(*(int *)(param_1 + 4) + uVar7 * 0x38 + 0x28) = 0xffffffff;
              uVar7 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
              iVar5 = (int)((longlong)(int)uVar7 * -0x6db6db6d + ((ulonglong)uVar7 << 0x20) >> 0x20)
              ;
              uVar7 = uVar8;
            } while (uVar8 < (uint)((iVar5 >> 5) - (iVar5 >> 0x1f)));
          }
        }
        else {
          uVar7 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
          iVar5 = (int)((longlong)(int)uVar7 * -0x6db6db6d + ((ulonglong)uVar7 << 0x20) >> 0x20);
          uVar7 = 0;
          if (iVar5 >> 5 != iVar5 >> 0x1f) {
            do {
              uVar8 = uVar7 + 1;
              *(undefined4 *)(*(int *)(param_1 + 4) + uVar7 * 0x38 + 0x14) = 0xffffffff;
              *(undefined4 *)(*(int *)(param_1 + 4) + uVar7 * 0x38 + 0x28) = 0xffffffff;
              iVar5 = *(int *)(param_1 + 4) + uVar7 * 0x38;
              *(uint *)(iVar5 + 8) = *(uint *)(iVar5 + 8) | 1;
              uVar7 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
              iVar5 = (int)((longlong)(int)uVar7 * -0x6db6db6d + ((ulonglong)uVar7 << 0x20) >> 0x20)
              ;
              uVar7 = uVar8;
            } while (uVar8 < (uint)((iVar5 >> 5) - (iVar5 >> 0x1f)));
          }
          iVar5 = fn_002d84c0(param_1,*(undefined4 *)(param_1 + 0x34));
          if (iVar5 != 0) {
            *(uint *)(iVar5 + 8) = *(uint *)(iVar5 + 8) | 0x10;
          }
        }
        fn_006969c0(DAT_008977e0);
        *(undefined1 *)(param_1 + 0x3c) = 0;
        return;
      }
    }
    iVar5 = fn_006f7530(DAT_008977e0);
    if (iVar5 == 0) {
      iVar5 = *(int *)(param_1 + 0x40);
      bVar9 = iVar5 == *param_2;
      if (bVar9) {
        iVar5 = (int)*(char *)(param_1 + 0x3e);
      }
      if (!bVar9 || iVar5 != iVar1) {
        *(undefined1 *)(param_1 + 0x3c) = 1;
        *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
      }
      fn_006969c0(DAT_008977e0);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(DAT_008977e0 + 0x188);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(iVar5 + 0x184);
  }
  iVar5 = *(int *)(param_1 + 0x40);
  bVar9 = iVar5 == *param_2;
  if (bVar9) {
    iVar5 = (int)*(char *)(param_1 + 0x3e);
  }
  if ((bVar9 && iVar5 == iVar1) || (iVar5 = fn_006f7530(DAT_008977e0), iVar5 != 0)) {
    return;
  }
  if (*(int *)(param_1 + 0x48) != 0) {
    fn_0012d73c();
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  uVar7 = *(uint *)(param_1 + 8);
  uVar8 = *(uint *)(param_1 + 4);
  if (uVar8 != uVar7) {
    uVar6 = uVar8;
    if (uVar7 <= uVar8) {
      do {
        uVar6 = uVar6 + 0x38;
      } while (uVar6 != uVar7);
    }
    iVar5 = (int)((longlong)(int)(uVar7 - uVar8) * -0x6db6db6d +
                  ((ulonglong)(uVar7 - uVar8) << 0x20) >> 0x20);
    *(uint *)(param_1 + 8) = uVar7 + ((iVar5 >> 5) - (iVar5 >> 0x1f)) * -0x38;
  }
  *(int *)(param_1 + 0x40) = (int)*param_2;
  iVar5 = fn_006f6fc4(*(undefined4 *)(DAT_008977e0 + 0x40));
  if ((iVar5 == 0) || (iVar5 = fn_002d8370(0xffffffff), iVar5 != 0)) {
    fn_002da2b8(param_1);
  }
  else if (*(char *)(*(int *)(*(int *)(DAT_008977e0 + 0x40) + 4) + 0x20) != '\x01') {
    fn_002d9fbc(param_1);
  }
  *(char *)(param_1 + 0x3e) = (char)iVar1;
  fn_002dbcec(0);
  return;
}



/* WARNING: Removing unreachable block (ram,0x002d96b8) */
/* WARNING: Removing unreachable block (ram,0x002d96bc) */
/* WARNING: Removing unreachable block (ram,0x002d96c0) */
/* WARNING: Removing unreachable block (ram,0x002d96c4) */
/* WARNING: Removing unreachable block (ram,0x002d96c8) */

undefined4 fn_002d9528(int param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  int iVar12;
  
  piVar8 = (int *)0x0;
  piVar9 = (int *)0x0;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  piVar11 = (int *)0x0;
  uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
  iVar4 = (int)((longlong)(int)uVar3 * -0x6db6db6d + ((ulonglong)uVar3 << 0x20) >> 0x20);
  iVar12 = 0;
  iVar4 = (iVar4 >> 5) - (iVar4 >> 0x1f);
  piVar10 = piVar9;
  if (0 < iVar4) {
    do {
      piVar9 = piVar10;
      if (*(int *)(DAT_008977e0 + 0xa8) == *(int *)(*(int *)(param_1 + 4) + iVar12 * 0x38 + 0x18)) {
        if (piVar10 == piVar11) {
          uVar3 = (int)piVar10 - (int)piVar8 >> 2;
          if (uVar3 < (uint)((int)piVar11 - (int)piVar8 >> 2)) {
            piVar1 = piVar10 + -1;
            if (piVar10 != (int *)0x0) {
              *piVar10 = piVar10[-1];
            }
            piVar9 = piVar10 + 1;
            piVar2 = piVar10;
            if (piVar10 < piVar1) {
              iVar5 = (int)piVar1 - (int)piVar10;
              if (0 < iVar5) {
                if (iVar5 * 0x20000000 < 0) {
                  piVar1 = piVar10 + -2;
                  piVar2 = piVar10 + -1;
                  *piVar2 = *piVar1;
                }
                for (iVar5 = iVar5 >> 3; iVar5 != 0; iVar5 = iVar5 + -1) {
                  piVar2[-1] = piVar1[-1];
                  piVar1 = piVar1 + -2;
                  piVar2 = piVar2 + -2;
                  *piVar2 = *piVar1;
                }
              }
            }
            else {
              while (piVar10 != piVar1) {
                piVar1 = piVar1 + -1;
                piVar2[-1] = *piVar1;
                piVar2 = piVar2 + -1;
              }
            }
            *piVar10 = iVar12;
          }
          else {
            uVar6 = uVar3 + (uVar3 >> 1) + (uVar3 >> 3);
            if (uVar6 < uVar3 + 0x20) {
              uVar6 = uVar3 + 0x20;
            }
            piVar2 = (int *)fn_00100fc6(uVar6 << 2,0);
            piVar1 = piVar2;
            for (piVar9 = piVar8; piVar9 != piVar10; piVar9 = piVar9 + 1) {
              if (piVar1 != (int *)0x0) {
                *piVar1 = *piVar9;
              }
              piVar1 = piVar1 + 1;
            }
            piVar9 = (int *)(((int)piVar10 - (int)piVar8 & 0xfffffffcU) + (int)piVar2);
            if (piVar9 != (int *)0x0) {
              *piVar9 = iVar12;
            }
            piVar9 = piVar8;
            if (piVar10 < piVar8) {
              do {
                piVar9 = piVar9 + 1;
              } while (piVar9 != piVar10);
            }
            fn_001008c4(piVar8,(int)piVar11 - (int)piVar8 >> 2,0);
            piVar9 = piVar2 + ((int)piVar10 - (int)piVar8 >> 2) + 1;
            piVar11 = piVar2 + uVar6;
            piVar8 = piVar2;
          }
        }
        else {
          piVar9 = piVar10 + 1;
          if (piVar10 != (int *)0x0) {
            *piVar10 = iVar12;
          }
        }
      }
      iVar12 = iVar12 + 1;
      piVar10 = piVar9;
    } while (iVar12 < iVar4);
  }
  iVar4 = fn_002d8ba8(param_1);
  if (((iVar4 == 1) && (iVar4 = fn_006bb17c(param_1), iVar4 == 2)) ||
     (iVar4 = fn_002dbe04(), iVar4 != 0)) {
    fn_002dbe14(0);
    iVar4 = *(int *)(param_1 + 4);
    uVar6 = 0;
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(iVar4 + *piVar8 * 0x38);
    uVar3 = (int)piVar9 - (int)piVar8 >> 2;
    if (uVar3 != 0) {
      do {
        if (*(int *)(iVar4 + piVar8[uVar6] * 0x38 + 4) == 1) {
          *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(iVar4 + piVar8[uVar6] * 0x38);
          break;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar3);
    }
  }
  else {
    iVar4 = fn_00163868((int)piVar9 - (int)piVar8 >> 2);
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(*(int *)(param_1 + 4) + piVar8[iVar4] * 0x38);
  }
  uVar7 = *(undefined4 *)(param_1 + 0x2c);
  piVar10 = piVar8;
  if (piVar9 <= piVar8) {
    for (; piVar10 != piVar9; piVar10 = piVar10 + 1) {
    }
  }
  fn_001008c4(piVar8,(int)piVar11 - (int)piVar8 >> 2,0);
  return uVar7;
}


