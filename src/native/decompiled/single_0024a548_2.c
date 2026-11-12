#include "single_0024a548_2.h"



undefined1 * fn_0024a548(undefined1 *param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  short *psVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined4 local_50 [7];
  undefined1 local_34 [4];
  undefined1 auStack_30 [12];
  
  if (param_3 == 0) {
    return param_1;
  }
  if (DAT_008cd540 != DAT_008cd544) {
    piVar7 = DAT_008cd540;
    if (DAT_008cd544 <= DAT_008cd540) {
      do {
        piVar7 = piVar7 + 1;
      } while (piVar7 != DAT_008cd544);
    }
    DAT_008cd544 = (int *)((int)DAT_008cd544 - ((int)DAT_008cd544 - (int)DAT_008cd540 & 0xfffffffcU)
                          );
  }
  if (DAT_008cd54c != DAT_008cd550) {
    piVar7 = DAT_008cd54c;
    if (DAT_008cd550 <= DAT_008cd54c) {
      do {
        piVar7 = piVar7 + 1;
      } while (piVar7 != DAT_008cd550);
    }
    DAT_008cd550 = (int *)((int)DAT_008cd550 - ((int)DAT_008cd550 - (int)DAT_008cd54c & 0xfffffffcU)
                          );
  }
  iVar9 = 0;
  iVar2 = fn_00371254();
  if (0 < iVar2) {
    do {
      psVar3 = (short *)fn_003711a8(iVar9);
      piVar4 = DAT_008cd550;
      piVar7 = DAT_008cd544;
      if ((char)psVar3[2] != '\x01') {
        if (*psVar3 == 1) {
          puVar10 = &DAT_008cd540;
          if (DAT_008cd544 != DAT_008cd548) {
            piVar4 = DAT_008cd544 + 1;
            goto joined_r0x0024a65c;
          }
          uVar1 = (int)DAT_008cd544 - (int)DAT_008cd540 >> 2;
          if ((uint)((int)DAT_008cd548 - (int)DAT_008cd540 >> 2) <= uVar1) {
            uVar11 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
            if (uVar11 < uVar1 + 0x20) {
              uVar11 = uVar1 + 0x20;
            }
            piVar6 = (int *)fn_00100fc6(uVar11 << 2,0);
            piVar5 = piVar6;
            for (piVar4 = DAT_008cd540; piVar4 != piVar7; piVar4 = piVar4 + 1) {
              if (piVar5 != (int *)0x0) {
                *piVar5 = *piVar4;
              }
              piVar5 = piVar5 + 1;
            }
            piVar4 = (int *)(((int)piVar7 - (int)DAT_008cd540 & 0xfffffffcU) + (int)piVar6);
            if (piVar4 != (int *)0x0) {
              *piVar4 = iVar9;
            }
            piVar5 = DAT_008cd544;
            piVar4 = (int *)(((int)piVar7 - (int)DAT_008cd540 & 0xfffffffcU) + (int)piVar6);
            for (; piVar7 != piVar5; piVar7 = piVar7 + 1) {
              piVar4 = piVar4 + 1;
              if (piVar4 != (int *)0x0) {
                *piVar4 = *piVar7;
              }
            }
            iVar2 = (int)DAT_008cd544 - (int)DAT_008cd540 >> 2;
            piVar7 = DAT_008cd540;
            piVar4 = DAT_008cd540;
            if (DAT_008cd544 < DAT_008cd540) {
              do {
                piVar7 = piVar7 + 1;
              } while (piVar7 != DAT_008cd544);
            }
            goto LAB_0024a914;
          }
          piVar4 = DAT_008cd544 + 1;
          if (DAT_008cd544 != (int *)0x0) {
            *DAT_008cd544 = DAT_008cd544[-1];
            DAT_008cd544 = piVar4;
            piVar4 = DAT_008cd544;
          }
          DAT_008cd544 = piVar4;
          piVar4 = piVar7 + -1;
          piVar5 = piVar7;
          if (piVar7 < piVar4) {
            iVar2 = (int)piVar4 - (int)piVar7;
            if (0 < iVar2) {
              if (iVar2 * 0x20000000 < 0) {
                piVar4 = piVar7 + -2;
                piVar5 = piVar7 + -1;
                *piVar5 = *piVar4;
              }
              for (iVar2 = iVar2 >> 3; iVar2 != 0; iVar2 = iVar2 + -1) {
                piVar5[-1] = piVar4[-1];
                piVar4 = piVar4 + -2;
                piVar5 = piVar5 + -2;
                *piVar5 = *piVar4;
              }
            }
          }
          else {
            while (piVar7 != piVar4) {
              piVar4 = piVar4 + -1;
              piVar5[-1] = *piVar4;
              piVar5 = piVar5 + -1;
            }
          }
LAB_0024a84c:
          *piVar7 = iVar9;
        }
        else {
          puVar10 = &DAT_008cd54c;
          if (DAT_008cd550 == DAT_008cd554) {
            uVar1 = (int)DAT_008cd550 - (int)DAT_008cd54c >> 2;
            if (uVar1 < (uint)((int)DAT_008cd554 - (int)DAT_008cd54c >> 2)) {
              piVar7 = DAT_008cd550 + 1;
              if (DAT_008cd550 != (int *)0x0) {
                *DAT_008cd550 = DAT_008cd550[-1];
                DAT_008cd550 = piVar7;
                piVar7 = DAT_008cd550;
              }
              DAT_008cd550 = piVar7;
              piVar5 = piVar4 + -1;
              piVar6 = piVar4;
              piVar7 = piVar4;
              if (piVar4 < piVar5) {
                iVar2 = (int)piVar5 - (int)piVar4;
                if (0 < iVar2) {
                  if (iVar2 * 0x20000000 < 0) {
                    piVar5 = piVar4 + -2;
                    piVar4 = piVar4 + -1;
                    *piVar4 = *piVar5;
                  }
                  for (iVar2 = iVar2 >> 3; iVar2 != 0; iVar2 = iVar2 + -1) {
                    piVar4[-1] = piVar5[-1];
                    piVar5 = piVar5 + -2;
                    piVar4 = piVar4 + -2;
                    *piVar4 = *piVar5;
                  }
                }
              }
              else {
                while (piVar4 != piVar5) {
                  piVar5 = piVar5 + -1;
                  piVar6[-1] = *piVar5;
                  piVar6 = piVar6 + -1;
                }
              }
              goto LAB_0024a84c;
            }
            uVar11 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
            if (uVar11 < uVar1 + 0x20) {
              uVar11 = uVar1 + 0x20;
            }
            piVar6 = (int *)fn_00100fc6(uVar11 << 2,0);
            piVar5 = piVar6;
            for (piVar7 = DAT_008cd54c; piVar7 != piVar4; piVar7 = piVar7 + 1) {
              if (piVar5 != (int *)0x0) {
                *piVar5 = *piVar7;
              }
              piVar5 = piVar5 + 1;
            }
            piVar7 = (int *)(((int)piVar4 - (int)DAT_008cd54c & 0xfffffffcU) + (int)piVar6);
            if (piVar7 != (int *)0x0) {
              *piVar7 = iVar9;
            }
            piVar5 = DAT_008cd550;
            piVar7 = (int *)(((int)piVar4 - (int)DAT_008cd54c & 0xfffffffcU) + (int)piVar6);
            for (; piVar4 != piVar5; piVar4 = piVar4 + 1) {
              piVar7 = piVar7 + 1;
              if (piVar7 != (int *)0x0) {
                *piVar7 = *piVar4;
              }
            }
            iVar2 = (int)DAT_008cd550 - (int)DAT_008cd54c >> 2;
            piVar7 = DAT_008cd54c;
            piVar4 = DAT_008cd54c;
            if (DAT_008cd550 < DAT_008cd54c) {
              do {
                piVar7 = piVar7 + 1;
              } while (piVar7 != DAT_008cd550);
            }
LAB_0024a914:
            fn_001008c4(piVar4,puVar10[2] - (int)piVar4 >> 2,0);
            puVar10[2] = piVar6 + uVar11;
            puVar10[1] = piVar6 + iVar2 + 1;
            *puVar10 = piVar6;
          }
          else {
            piVar4 = DAT_008cd544;
            piVar7 = DAT_008cd550;
            DAT_008cd550 = DAT_008cd550 + 1;
joined_r0x0024a65c:
            DAT_008cd544 = piVar4;
            if (piVar7 != (int *)0x0) {
              *piVar7 = iVar9;
            }
          }
        }
      }
      iVar9 = iVar9 + 1;
      iVar2 = fn_00371254();
    } while (iVar9 < iVar2);
  }
  fn_00692e98(auStack_30,param_3);
  fn_00183718(local_50,auStack_30,(char *)&DAT_0024a9c8);
  local_34[0] = 0;
  fn_0079c770(&DAT_008cd570,local_50[0],local_34);
  uVar8 = fn_0024ad8c();
  fn_0024ae30(param_1,param_2,auStack_30,uVar8);
  return auStack_30;
}


