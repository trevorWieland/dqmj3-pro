#include "003834b0_003834b0.h"



/* WARNING: Type propagation algorithm not settling */

void fn_003834b0(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  bool bVar8;
  undefined1 auStack_250 [512];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  iVar7 = *(int *)(param_1 + 0x80);
  iVar2 = *(int *)(param_1 + 0x68);
  if ((*(char *)(iVar7 + 0xe11) == '\0') || (iVar2 != 3 && iVar2 != 1)) {
    if (iVar2 == 0) {
      if (param_2 == 0) {
        fn_003840f0(param_1,0,0);
        fn_001f7810(param_1,0x14,1,0);
        if (9 < *(int *)(param_1 + 0x98)) {
                    /* WARNING: Subroutine does not return */
          fn_001638a0();
        }
        return;
      }
      if (param_2 != 1) goto LAB_00383dcc;
      iVar2 = fn_006ad868(param_1,1,0);
      if (iVar2 == 0) {
        return;
      }
      if (*(int *)(param_1 + 0x98) < 10) {
                    /* WARNING: Subroutine does not return */
        fn_001638a0();
      }
      uVar6 = 1;
    }
    else if (iVar2 == 1) {
      if (param_2 != 1) goto LAB_00383dcc;
      iVar2 = fn_001c9330(*(undefined4 *)(param_1 + 0x84),**(undefined4 **)(param_1 + 0xb0));
      bVar1 = *(byte *)(iVar2 + 0x2c) & 1;
      if ((*(byte *)(iVar2 + 0x2c) & 1) != 0) {
        bVar1 = 1;
      }
      if (bVar1 != 1) {
        return;
      }
      fn_003840f0(param_1,1,0);
      uVar6 = 3;
    }
    else {
      if (iVar2 == 3) {
        if (param_2 == 0) {
          return;
        }
        if (param_2 != 1) goto LAB_00383dcc;
        iVar2 = fn_001c9330(*(undefined4 *)(param_1 + 0x84),
                             *(undefined4 *)(*(int *)(param_1 + 0xb0) + 4));
        bVar1 = *(byte *)(iVar2 + 0x2c) & 1;
        if ((*(byte *)(iVar2 + 0x2c) & 1) != 0) {
          bVar1 = 1;
        }
        if (bVar1 != 1) {
          return;
        }
        uVar4 = fn_0065baa0(*(int *)(param_1 + 0x80) + 8,*(undefined4 *)(param_1 + 0x98));
        if (uVar4 < 0xe) {
          if (uVar4 - 2 < 7) {
            *(undefined1 *)(param_1 + 0xd4) = 1;
          }
          fn_003840f0(param_1,uVar4,0);
          uVar6 = 4;
          goto LAB_00383a90;
        }
      }
      else {
        if (iVar2 == 2) {
          if (param_2 == 0) {
            fn_001f7810(param_1,0x14,1,0);
            fn_003840f0(param_1,10,0);
code_r0x00383838:
                    /* WARNING: Subroutine does not return */
            fn_001638a0();
          }
          if (param_2 == 1) {
            iVar2 = fn_006ad868(param_1,1,0);
            if (iVar2 == 0) {
              return;
            }
            iVar2 = fn_001c9330(*(undefined4 *)(param_1 + 0x84),
                                 *(undefined4 *)(*(int *)(param_1 + 0xb0) + 0x28));
            bVar1 = *(byte *)(iVar2 + 0x2c) & 1;
            if ((*(byte *)(iVar2 + 0x2c) & 1) != 0) {
              bVar1 = 1;
            }
            if (bVar1 != 1) {
              return;
            }
            uVar6 = 4;
            goto LAB_00383a90;
          }
LAB_00383dcc:
          iVar2 = 0;
          if (param_2 != 3) {
            return;
          }
          do {
            if (*(int *)(*(int *)(param_1 + 0xb0) + iVar2 * 4) != -1) {
              piVar5 = (int *)fn_001c9330(*(undefined4 *)(param_1 + 0x84));
              if ((*(byte *)(piVar5 + 0xb) & 1) != 0) {
                (**(code **)(*piVar5 + 0x10))(piVar5,0);
              }
              if ((char)piVar5[5] != '\0') {
                (**(code **)(*piVar5 + 0xc))(piVar5);
              }
            }
            iVar2 = iVar2 + 1;
          } while (iVar2 < 0xe);
          return;
        }
        if (iVar2 == 4) {
          if (param_2 == 0) {
            if (*(char *)(iVar7 + 0xe15) == '\x01') {
              return;
            }
            goto code_r0x00383838;
          }
          if (param_2 == 1) {
            iVar2 = fn_001c9330(*(undefined4 *)(param_1 + 0x84),
                                 *(undefined4 *)
                                  (*(int *)(param_1 + 0xb0) + *(int *)(param_1 + 0x98) * 4));
            bVar1 = *(byte *)(iVar2 + 0x2c) & 1;
            if ((*(byte *)(iVar2 + 0x2c) & 1) != 0) {
              bVar1 = 1;
            }
            if (bVar1 != 1) {
              return;
            }
            iVar2 = *(int *)(param_1 + 0x98) + 1;
            fn_003840f0(param_1,iVar2,1,0);
            if (iVar2 < 10) {
              fn_00383fb8(param_1,iVar2);
            }
            uVar6 = 5;
            *(undefined4 *)(param_1 + 0xd8) = 0;
            goto LAB_00383a90;
          }
          goto LAB_00383dcc;
        }
        if (iVar2 == 5) {
          if (param_2 == 0) {
            fn_00301f50(auStack_250,0x200);
            fn_0065bb2c(auStack_250,0x100,iVar7 + 8,*(undefined4 *)(param_1 + 0x98),
                         *(undefined4 *)(param_1 + 0xd8));
LAB_00383c18:
            fn_0036c5f4(*(undefined4 *)(param_1 + 0x7c),auStack_250,1,0,1,1,0,0,1);
            fn_00689bd0(param_1,0x48,0);
            return;
          }
          if (param_2 != 1) goto LAB_00383dcc;
          if (*(char *)(*(int *)(param_1 + 0x7c) + 0x31) != '\x01') {
            return;
          }
          if (*(char *)(iVar7 + 0xe15) == '\x01') {
            uVar4 = *(int *)(param_1 + 0xd8) + 1;
            *(uint *)(param_1 + 0xd8) = uVar4;
            if (uVar4 < *(uint *)(iVar7 + 0xe18)) {
              fn_00301f50(auStack_250,0x200);
              fn_0065bb2c(auStack_250,0x100,iVar7 + 8,*(undefined4 *)(param_1 + 0x98),uVar4);
              goto LAB_00383c18;
            }
          }
          if (*(char *)(param_1 + 0xd5) != '\0') {
            *(undefined4 *)(param_1 + 0x70) = 9;
            uVar6 = fn_0022f584((char *)&DAT_00384204,0);
            fn_0036c5f4(*(undefined4 *)(param_1 + 0x7c),uVar6,1,0,1,1,0,0,1);
            fn_00689bd0(param_1,0x48,0);
            return;
          }
          uVar4 = fn_0065baa0(iVar7 + 8,*(undefined4 *)(param_1 + 0x98));
          if (((9 < uVar4) && (*(char *)(param_1 + 0xd4) != '\0')) &&
             (iVar2 = fn_00154ac8(0x32a), iVar2 == 0)) {
            fn_00144834(0x32a,1);
            uVar6 = 8;
            goto LAB_00383a90;
          }
          if (uVar4 != 0xe) {
            fn_003840f0(param_1,uVar4,0);
            if (9 < (int)uVar4) {
              iVar7 = 0;
              iVar2 = *(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xbc) >> 2;
              if (0 < iVar2) {
                do {
                  (**(code **)(**(int **)(param_1 + 0x88) + 0xc))
                            (*(int **)(param_1 + 0x88),
                             *(undefined4 *)(*(int *)(param_1 + 0xbc) + iVar7 * 4));
                  iVar7 = iVar7 + 1;
                } while (iVar7 < iVar2);
              }
            }
            *(undefined4 *)(param_1 + 0x70) = 4;
            return;
          }
        }
        else {
          if (iVar2 == 6) {
            if (param_2 == 0) {
LAB_00383ef4:
              fn_001f7d54(param_1,0x14,1,0);
              return;
            }
            if (param_2 == 1) {
              iVar2 = fn_006ad868(param_1,1,0);
              if (iVar2 == 0) {
                return;
              }
              uVar6 = 7;
              goto LAB_00383a90;
            }
            goto LAB_00383dcc;
          }
          if (iVar2 == 7) {
            if (param_2 == 0) {
              fn_00301f50(auStack_250,0x200);
              iVar2 = *(int *)(param_1 + 0x98);
              if (iVar2 == 0xd || iVar2 == 0xb) {
                fn_0065bb2c(auStack_250,0x100,iVar7 + 8,iVar2,*(undefined4 *)(param_1 + 0xd8));
              }
              else {
                iVar2 = fn_00100b58(iVar7 + 0x10);
                if (iVar2 == 0) {
                  uVar6 = fn_0022f584((char *)&DAT_00383e68,0);
                  local_50 = 0;
                  local_4c = 0;
                  local_48 = 0;
                  uVar4 = 0;
                  local_44 = 0;
                  local_40 = 0;
                  local_3c = 0;
                  local_38 = 0;
                  local_34 = 0;
                  do {
                    if (0 < *(int *)(param_1 + 0x9c + uVar4 * 4)) {
                      fn_001028d4(&local_50,(char *)&DAT_00383e84,uVar4 + 1);
                      fn_0015b0f8(*(undefined4 *)(param_1 + 0x9c + uVar4 * 4));
                      uVar3 = fn_0022f584(&local_50,0);
                      fn_00101a50(auStack_250,0x100,L"%ls%ls\n",auStack_250,uVar3);
                    }
                    uVar4 = uVar4 + 1;
                  } while (uVar4 < 4);
                  fn_00101a50(auStack_250,0x100,L"%ls%ls",auStack_250,uVar6);
                }
                else {
                  fn_001003e0(auStack_250,iVar7 + 0x10);
                  fn_00158f6c(iVar7 + 0x10,0x200);
                }
              }
              goto LAB_00383c18;
            }
            if (param_2 == 1) {
              if (*(char *)(*(int *)(param_1 + 0x7c) + 0x31) != '\x01') {
                return;
              }
              *(undefined4 *)(param_1 + 0x98) = 9;
              uVar4 = fn_0065baa0(iVar7 + 8,9);
              if (((9 < uVar4) && (*(char *)(param_1 + 0xd4) != '\0')) &&
                 (iVar2 = fn_00154ac8(0x32a), iVar2 == 0)) {
                fn_00144834(0x32a,1);
                *(undefined4 *)(param_1 + 0x70) = 8;
                return;
              }
              goto LAB_003830f4;
            }
            goto LAB_00383dcc;
          }
          if (iVar2 == 8) {
            if (param_2 == 0) {
              uVar6 = fn_0022f584((char *)&DAT_00383ec4,0);
              fn_0036c5f4(*(undefined4 *)(param_1 + 0x7c),uVar6,1,0,1,1,0,0,1);
              fn_00689bd0(param_1,0x48,0);
              return;
            }
            if (param_2 == 1) {
              if (*(char *)(*(int *)(param_1 + 0x7c) + 0x31) != '\x01') {
                return;
              }
              uVar4 = fn_0065baa0(iVar7 + 8,*(undefined4 *)(param_1 + 0x98));
LAB_003830f4:
              if (uVar4 == 0xe) {
                uVar6 = 10;
              }
              else {
                fn_003840f0(param_1,uVar4,0);
                if (9 < (int)uVar4) {
                  iVar7 = 0;
                  iVar2 = *(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xbc) >> 2;
                  if (0 < iVar2) {
                    do {
                      (**(code **)(**(int **)(param_1 + 0x88) + 0xc))
                                (*(int **)(param_1 + 0x88),
                                 *(undefined4 *)(*(int *)(param_1 + 0xbc) + iVar7 * 4));
                      iVar7 = iVar7 + 1;
                    } while (iVar7 < iVar2);
                  }
                }
                uVar6 = 4;
              }
              *(undefined4 *)(param_1 + 0x70) = uVar6;
              uVar4 = *(uint *)(DAT_00897808 + 0x18);
              uVar4 = uVar4 << 0x18 | ((uVar4 & 0xffff) >> 8) << 0x10 |
                      ((uVar4 & 0xffffff) >> 0x10) << 8 | uVar4 >> 0x18;
              bVar8 = uVar4 == 0xff;
              if (bVar8) {
                uVar4 = *(uint *)(param_1 + 0x70);
              }
              if (!(bVar8 && uVar4 == 4)) {
                return;
              }
              fn_001f7810(param_1,1,1,0);
              return;
            }
            goto LAB_00383dcc;
          }
          if (iVar2 != 9) {
            if (iVar2 == 10) {
              if (param_2 == 0) {
                if (*(char *)(iVar7 + 0xe14) == '\0') {
                  return;
                }
                goto LAB_00383ef4;
              }
              if (param_2 == 1) {
                if (*(char *)(*(int *)(param_1 + 0x7c) + 0x31) != '\x01') {
                  return;
                }
                if (*(char *)(iVar7 + 0xe14) != '\0') {
                  iVar2 = fn_006ad868(param_1,1,0);
                  if (iVar2 == 0) {
                    return;
                  }
                  iVar7 = 0;
                  iVar2 = *(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xbc) >> 2;
                  if (0 < iVar2) {
                    do {
                      (**(code **)(**(int **)(param_1 + 0x88) + 0xc))
                                (*(int **)(param_1 + 0x88),
                                 *(undefined4 *)(*(int *)(param_1 + 0xbc) + iVar7 * 4));
                      iVar7 = iVar7 + 1;
                    } while (iVar7 < iVar2);
                  }
                }
                uVar6 = 0xb;
                goto LAB_00383a90;
              }
            }
            else if (iVar2 == 0xb && param_2 == 0) {
              *(undefined1 *)(iVar7 + 0xe10) = 1;
              *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_1 + 0x94);
              *(undefined4 *)(param_1 + 0x94) = 0xffffffff;
              return;
            }
            goto LAB_00383dcc;
          }
          if (param_2 == 0) {
            fn_00144834(0x33e,1);
            return;
          }
          if (param_2 != 1) goto LAB_00383dcc;
          if (*(char *)(*(int *)(param_1 + 0x7c) + 0x31) != '\x01') {
            return;
          }
        }
      }
      uVar6 = 10;
    }
LAB_00383a90:
    *(undefined4 *)(param_1 + 0x70) = uVar6;
    return;
  }
  if (*(short *)(iVar7 + 8) < 1) {
    if (*(short *)(iVar7 + 10) < 1) {
      if (*(short *)(iVar7 + 0xc) < 1) {
        if (*(short *)(iVar7 + 0xe) < 1) {
          iVar2 = *(int *)(param_1 + 0x98);
          if ((iVar2 != 3 && iVar2 != 5) && (iVar2 != 7 && iVar2 != 9)) goto LAB_003835d0;
        }
        else {
          *(undefined4 *)(param_1 + 0x98) = 9;
        }
        goto LAB_003835cc;
      }
      uVar6 = 7;
    }
    else {
      uVar6 = 5;
    }
    *(undefined4 *)(param_1 + 0x98) = uVar6;
  }
  else {
    *(undefined4 *)(param_1 + 0x98) = 3;
  }
LAB_003835cc:
  *(undefined1 *)(param_1 + 0xd4) = 1;
LAB_003835d0:
  *(int *)(param_1 + 0x9c) = (int)*(short *)(iVar7 + 8);
  *(int *)(param_1 + 0xa0) = (int)*(short *)(iVar7 + 10);
  *(int *)(param_1 + 0xa4) = (int)*(short *)(iVar7 + 0xc);
  *(int *)(param_1 + 0xa8) = (int)*(short *)(iVar7 + 0xe);
  *(undefined4 *)(param_1 + 0x70) = 6;
  *(undefined1 *)(iVar7 + 0xe14) = 1;
  return;
}


