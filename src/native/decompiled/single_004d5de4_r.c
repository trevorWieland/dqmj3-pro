#include "single_004d5de4_r.h"


extern undefined4 SupervisorCall;

/* WARNING: Type propagation algorithm not settling */

longlong fn_004d5de4(int param_1,int *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  undefined4 *puVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  bool bVar18;
  undefined8 uVar19;
  
  piVar8 = param_2;
  if (*(int *)(param_1 + 0x14) == 0) {
    puVar1 = (undefined1 *)0xe0e14826;
    if ((param_2[0x11] != 0) && ((uint)param_2[0x11] < 0x21)) {
      uVar12 = *(uint *)(DAT_008c0634 + 4);
      iVar2 = fn_004f0230(1);
      iVar3 = fn_00169f1c((uVar12 & 0xfffffffc) - 0x1c,iVar2);
      iVar4 = 0;
      iVar9 = 0;
      uVar12 = 0;
      do {
        uVar13 = param_2[uVar12];
LAB_004d5f0c:
        iVar7 = param_1 + uVar12 * 8;
        piVar8 = (int *)(iVar7 + 0x5c8);
        *piVar8 = iVar4;
        *(uint *)(iVar7 + 0x5cc) = uVar13;
        if ((iVar3 * iVar2 - 0x28U & 0xfffffffc) < uVar13) {
          if (DAT_008c0630 != 0) goto LAB_004d5f84;
          goto LAB_004d605c;
        }
        if (uVar13 != 0) {
          piVar8 = (int *)(uVar13 + 3 & 0xfffffffc);
          iVar9 = uVar12 + 1;
          iVar4 = iVar4 + (int)piVar8;
        }
        uVar12 = uVar12 + 1;
        if (0x10 < uVar12) {
          if (iVar9 == 0) {
            if (DAT_008c0630 != 0) {
              piVar8 = (int *)&SupervisorCall;
            }
          }
          else {
            *(int *)(param_1 + 0x650) = iVar4;
            piVar10 = (int *)(param_1 + 0x658);
            piVar8 = (int *)(param_2[0x11] * 2 + 1);
            *piVar10 = param_2[0x11];
            *(int **)(param_1 + 0x65c) = piVar8;
            iVar2 = param_2[0x12];
            *(int *)(param_1 + 0x664) = iVar2;
            if (iVar2 < 1) {
              iVar2 = 0;
            }
            *(int *)(param_1 + 0x664) = iVar2;
            uVar12 = param_2[0x14];
            *(uint *)(param_1 + 0x6b8) = uVar12;
            if (uVar12 < 10) {
              if (uVar12 == 0) {
LAB_004d624c:
                uVar6 = 0;
              }
              else {
                if (uVar12 != 1 && uVar12 != 5) {
                  if (uVar12 != 9) {
                    uVar13 = DAT_008c0630;
                  }
                  if ((uVar12 != 9 && uVar13 != 0) &&
                     (piVar10 = (int *)0x0, *(int *)(param_1 + 0x6b8) == 0)) goto LAB_004d624c;
                }
                uVar6 = 1;
              }
              *(undefined1 *)(param_1 + 0x6b5) = uVar6;
              *(undefined4 *)(param_1 + 0x6cc) = 2;
              iVar2 = DAT_008bf4d4;
              uVar12 = *(uint *)(DAT_008bf4d4 + 0x30);
              *(uint *)(param_1 + 0x14) = uVar12;
              uVar5 = fn_004ed2e8(iVar2,uVar6,piVar10);
              iVar2 = fn_00656e14(uVar12 << 5,uVar5);
              if (iVar2 == 0) {
                iVar2 = 0;
              }
              else {
                uVar13 = 0;
                if (uVar12 != 0) {
                  do {
                    puVar11 = (undefined4 *)(iVar2 + uVar13 * 0x20);
                    if (puVar11 != (undefined4 *)0x0) {
                      *puVar11 = 0;
                      puVar11[1] = 0;
                      puVar11[2] = 0;
                      puVar11[3] = 0;
                      puVar11[4] = 0;
                      puVar11[5] = 0;
                      puVar11[6] = 0;
                      puVar11[7] = 0;
                    }
                    uVar13 = uVar13 + 1;
                  } while (uVar13 < uVar12);
                }
              }
              *(int *)(param_1 + 0x5b4) = iVar2;
              uVar12 = *(int *)(param_1 + 0x14) * *(int *)(param_1 + 0x65c);
              uVar5 = fn_004ed2e8();
              iVar2 = fn_00656e14(uVar12 * 4,uVar5);
              if (iVar2 == 0) {
                iVar2 = 0;
              }
              else {
                uVar13 = 0;
                if (uVar12 != 0) {
                  do {
                    puVar11 = (undefined4 *)(iVar2 + uVar13 * 4);
                    uVar13 = uVar13 + 1;
                    if (puVar11 != (undefined4 *)0x0) {
                      *puVar11 = 0;
                    }
                  } while (uVar13 < uVar12);
                }
              }
              *(int *)(param_1 + 0x5b8) = iVar2;
              uVar12 = *(uint *)(param_1 + 0x65c);
              uVar5 = fn_004ed2e8();
              iVar2 = fn_00656e14(uVar12 << 2,uVar5);
              if (iVar2 == 0) {
                iVar2 = 0;
              }
              else {
                uVar13 = 0;
                if (uVar12 != 0) {
                  do {
                    puVar11 = (undefined4 *)(iVar2 + uVar13 * 4);
                    uVar13 = uVar13 + 1;
                    if (puVar11 != (undefined4 *)0x0) {
                      *puVar11 = 0;
                    }
                  } while (uVar13 < uVar12);
                }
              }
              *(int *)(param_1 + 0x5bc) = iVar2;
              uVar12 = *(int *)(param_1 + 0x14) * *(int *)(param_1 + 0x65c) *
                       *(int *)(param_1 + 0x650);
              uVar5 = fn_004ed2e8();
              iVar2 = fn_00656e14(uVar12,uVar5);
              if (iVar2 == 0) {
                iVar2 = 0;
              }
              else {
                uVar13 = 0;
                if (uVar12 != 0) {
                  do {
                    puVar1 = (undefined1 *)(iVar2 + uVar13);
                    uVar13 = uVar13 + 1;
                    if (puVar1 != (undefined1 *)0x0) {
                      *puVar1 = 0;
                    }
                  } while (uVar13 < uVar12);
                }
              }
              *(int *)(param_1 + 0x5c0) = iVar2;
              fn_00158f6c(iVar2,uVar12);
              uVar12 = *(uint *)(param_1 + 0x14);
              uVar5 = fn_004ed2e8();
              iVar2 = fn_00656e14(uVar12 << 2,uVar5);
              if (iVar2 == 0) {
                iVar2 = 0;
              }
              else {
                uVar13 = 0;
                if (uVar12 != 0) {
                  do {
                    puVar11 = (undefined4 *)(iVar2 + uVar13 * 4);
                    uVar13 = uVar13 + 1;
                    if (puVar11 != (undefined4 *)0x0) {
                      *puVar11 = 0;
                    }
                  } while (uVar13 < uVar12);
                }
              }
              *(int *)(param_1 + 0x5c4) = iVar2;
              fn_00158f6c(iVar2,*(int *)(param_1 + 0x14) << 2);
              *(undefined1 *)(param_1 + 0x18) = 0xfd;
              *(undefined1 *)(param_1 + 0x19) = 0;
              *(undefined1 *)(param_1 + 0x67c) = 0;
              *(undefined4 *)(param_1 + 0x680) = 0;
              *(undefined4 *)(param_1 + 0x684) = 0;
              *(undefined1 *)(param_1 + 0x688) = 0;
              *(undefined1 *)(param_1 + 0x689) = 0;
              *(undefined1 *)(param_1 + 0x68a) = 0;
              *(undefined4 *)(param_1 + 0x68c) = 0;
              *(undefined4 *)(param_1 + 0x690) = 0;
              *(undefined4 *)(param_1 + 0x694) = 0;
              *(undefined4 *)(param_1 + 0x698) = 0;
              *(undefined4 *)(param_1 + 0x6b0) = 0;
              if (*(char *)(param_1 + 0x6b5) != '\0') {
                iVar2 = fn_004ecfe0(0x50);
                uVar5 = 0;
                if (iVar2 != 0) {
                  uVar5 = fn_004edb64();
                }
                *(undefined4 *)(param_1 + 0x6bc) = uVar5;
                uVar5 = fn_004ed2e8();
                iVar2 = fn_00656e14(0x96c4,uVar5);
                if (iVar2 == 0) {
                  iVar2 = 0;
                }
                else {
                  uVar12 = 0;
                  do {
                    puVar11 = (undefined4 *)(iVar2 + uVar12 * 4);
                    uVar12 = uVar12 + 1;
                    if (puVar11 != (undefined4 *)0x0) {
                      *puVar11 = 0;
                    }
                  } while (uVar12 < 0x25b1);
                }
                *(int *)(param_1 + 0x6c0) = iVar2;
                fn_004ed840(*(undefined4 *)(param_1 + 0x6bc),iVar2,0x96c4);
                uVar5 = fn_004ed2e8();
                iVar2 = fn_00656e14(0x594,uVar5);
                if (iVar2 == 0) {
                  iVar2 = 0;
                }
                else {
                  uVar12 = 0;
                  do {
                    puVar11 = (undefined4 *)(iVar2 + uVar12 * 4);
                    uVar12 = uVar12 + 1;
                    if (puVar11 != (undefined4 *)0x0) {
                      *puVar11 = 0;
                    }
                  } while (uVar12 < 0x165);
                }
                *(int *)(param_1 + 0x5b0) = iVar2;
              }
              iVar2 = fn_004ecfe0(0x48);
              uVar5 = 0;
              if (iVar2 != 0) {
                uVar5 = fn_004eeffc();
              }
              *(undefined4 *)(param_1 + 0x6c4) = uVar5;
              uVar5 = fn_004ed2e8();
              iVar2 = fn_00656e14(0x9bcc,uVar5);
              if (iVar2 == 0) {
                iVar2 = 0;
              }
              else {
                uVar12 = 0;
                do {
                  puVar11 = (undefined4 *)(iVar2 + uVar12 * 4);
                  uVar12 = uVar12 + 1;
                  if (puVar11 != (undefined4 *)0x0) {
                    *puVar11 = 0;
                  }
                } while (uVar12 < 0x26f3);
              }
              *(int *)(param_1 + 0x6c8) = iVar2;
              fn_004eedb8(*(undefined4 *)(param_1 + 0x6c4),iVar2);
              uVar12 = *(uint *)(param_1 + 0x65c);
              uVar5 = fn_004ed2e8();
              iVar2 = fn_00656e14(uVar12 << 2,uVar5);
              if (iVar2 == 0) {
                iVar2 = 0;
              }
              else {
                uVar13 = 0;
                if (uVar12 != 0) {
                  do {
                    puVar11 = (undefined4 *)(iVar2 + uVar13 * 4);
                    uVar13 = uVar13 + 1;
                    if (puVar11 != (undefined4 *)0x0) {
                      *puVar11 = 0;
                    }
                  } while (uVar13 < uVar12);
                }
              }
              uVar16 = 0;
              uVar13 = 3;
              *(int *)(param_1 + 0x6e0) = iVar2;
              uVar17 = 0;
              uVar15 = 1;
              uVar12 = 0;
              *(undefined4 *)(param_1 + 0x6ec) = 3;
              do {
                for (uVar14 = 0; uVar14 < uVar13 && uVar12 < 0x40; uVar14 = uVar14 + 1) {
                  uVar19 = fn_00301bb0(1,0);
                  uVar12 = uVar12 + 1;
                  uVar16 = uVar16 | (uint)uVar19;
                  uVar17 = uVar17 | (uint)((ulonglong)uVar19 >> 0x20);
                }
                for (uVar14 = 0; uVar14 < uVar15 && uVar12 < 0x40; uVar14 = uVar14 + 1) {
                  uVar12 = uVar12 + 1;
                }
                bVar18 = uVar13 == 1;
                if (1 < uVar13) {
                  uVar13 = uVar13 - 1;
                }
                if ((bVar18) && (uVar15 < 4)) {
                  uVar15 = uVar15 + 1;
                }
              } while (uVar12 < 0x40);
              *(uint *)(param_1 + 0x6f0) = uVar16;
              *(uint *)(param_1 + 0x6f4) = uVar17;
              DAT_008eda0a = (char)param_2[0x13] != '\0';
              if ((uint)param_2[0x11] < 0x100) {
                DAT_008eda0b = (undefined1)param_2[0x11];
              }
              else {
                DAT_008eda0b = 0xff;
              }
              DAT_008eda0c = param_2[0x12];
              DAT_008eda20 = (char)param_2[0x14];
              DAT_008eda10 = (short)*param_2;
              DAT_008eda12 = (short)param_2[1];
              DAT_008eda14 = (short)param_2[2];
              DAT_008eda16 = (short)param_2[3];
              DAT_008eda18 = (short)param_2[4];
              DAT_008eda1a = (short)param_2[5];
              DAT_008eda1c = (short)param_2[6];
              DAT_008eda1e = (short)param_2[7];
              return (ulonglong)(uint)param_2[7] << 0x20;
            }
            if (DAT_008c0630 != 0) {
              piVar8 = (int *)&SupervisorCall;
            }
          }
          goto LAB_004d605c;
        }
        uVar13 = 0;
      } while (uVar12 < 0x10);
      if ((uVar12 == 0x10) && ((char)param_2[0x13] != '\0')) {
        uVar13 = 4;
      }
      goto LAB_004d5f0c;
    }
    if (DAT_008c0630 != 0) {
LAB_004d5f84:
      piVar8 = (int *)&SupervisorCall;
    }
  }
  else {
    puVar1 = &DAT_e0a14821;
  }
LAB_004d605c:
  return CONCAT44(piVar8,puVar1);
}


