#include "005108ec_00510ec8.h"



void fn_00510ec8(uint *param_1,uint param_2,uint *param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint unaff_r7;
  uint uVar6;
  uint uVar7;
  
  uVar2 = 0;
  uVar7 = *(uint *)(DAT_008bf4d4 + 0x30);
  *param_3 = 0;
  *param_4 = 0;
  if (uVar7 != 0) {
    do {
      uVar1 = 1 << (uVar2 & 0xff);
      uVar4 = (uint)((param_1[0xb] & uVar1) != 0);
      uVar5 = (uint)((uVar1 & param_2) != 0);
      if (uVar7 != 0) {
        unaff_r7 = *param_1;
      }
      uVar6 = 1;
      uVar3 = 0;
      if (uVar7 != 0) {
        do {
          if (*(short *)(unaff_r7 + (uVar2 * uVar7 + uVar3) * 2) != 0) {
            uVar6 = 0;
            break;
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < uVar7);
      }
      if ((uVar5 & uVar6) == 0) {
        if ((uVar5 & ~uVar6 & uVar4) == 0) {
          if ((uVar5 & ~uVar6 & ~uVar4) == 0) {
            if ((uVar6 & ~uVar5 & uVar4) == 0) {
              if (((uVar6 & ~uVar5 & ~uVar4) != 0) || ((uVar4 & ~(uVar5 | uVar6)) == 0))
              goto LAB_00510ffc;
            }
            else if (((char)param_1[0xd] == '\0') || ((byte)param_1[10] != uVar2))
            goto LAB_00510f90;
            *param_3 = *param_3 | uVar1;
          }
        }
        else {
LAB_00510f90:
          *param_4 = *param_4 | uVar1;
        }
      }
      else if ((char)param_1[0xd] != '\0') {
        if (uVar7 != 0) {
          uVar5 = param_1[5];
        }
        uVar4 = 0;
        if (uVar7 != 0) {
          do {
            unaff_r7 = (uint)*(byte *)(uVar4 + uVar2 * uVar7 + uVar5);
            if (unaff_r7 == 1) goto LAB_00510f90;
            uVar4 = uVar4 + 1;
          } while (uVar4 < uVar7);
        }
      }
LAB_00510ffc:
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar7);
  }
  return;
}



void fn_00510eb0(int param_1,ushort param_2)

{
  *(ushort *)(param_1 + 0x1e) = param_2 & 0xfffe;
  DAT_008ed95e = param_2 & 0xfffe;
  return;
}



undefined8 fn_00510e04(int param_1,uint param_2,uint param_3,uint param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = DAT_008bf4d4;
  uVar3 = *(uint *)(DAT_008bf4d4 + 0x30);
  if (param_2 < uVar3 && param_3 < uVar3) {
    *(char *)(param_3 + param_2 * uVar3 + *(int *)(param_1 + 8)) = (char)param_4;
    if ((uVar3 <= param_4) && (DAT_008c0630 != 0)) {
      iVar2 = 8;
    }
    uVar1 = 0;
  }
  else {
    uVar1 = 0xe0e14826;
  }
  return CONCAT44(iVar2,uVar1);
}



undefined4 fn_00510c90(int *param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  uVar2 = 1;
  uVar1 = *(uint *)(DAT_008bf4d4 + 0x30);
  if (1 < uVar1) {
    do {
      if ((uVar2 != param_2) && (uVar3 = 0, uVar2 != 0)) {
        do {
          if ((uVar3 != param_2) &&
             ((*(byte *)(uVar3 + uVar2 * uVar1 + param_1[2]) == param_2 && (uVar6 = 0, uVar1 != 0)))
             ) {
            do {
              if (((param_3 & 1 << (uVar6 & 0xff)) != 0 && uVar6 != uVar2) &&
                 (uVar6 != uVar3 && uVar6 != param_2)) {
                iVar5 = *param_1;
                uVar7 = (uint)*(ushort *)(iVar5 + (uVar2 * uVar1 + uVar6) * 2);
                if ((((uVar7 != 0) &&
                     (uVar4 = (uint)*(ushort *)(iVar5 + (uVar6 * uVar1 + uVar3) * 2), uVar4 != 0))
                    && (uVar4 + uVar7 <= (uint)*(ushort *)(param_1 + 7))) &&
                   ((uVar7 = *(byte *)(param_1[3] + uVar6) + 2,
                    uVar7 <= *(ushort *)((int)param_1 + 0x1e) &&
                    ((uint)*(ushort *)(iVar5 + (uVar2 * uVar1 + uVar6) * 2) +
                     (uint)*(ushort *)(iVar5 + (uVar6 * uVar1 + uVar3) * 2) <= param_4 &&
                     uVar7 <= param_5)))) {
                  *(char *)(uVar3 + uVar2 * uVar1 + param_1[2]) = (char)uVar6;
                  *(char *)(uVar2 + uVar3 * uVar1 + param_1[2]) = (char)uVar6;
                  *(char *)(param_1[3] + uVar6) = *(char *)(param_1[3] + uVar6) + '\x02';
                  *(char *)(param_1[3] + param_2) = *(char *)(param_1[3] + param_2) + -2;
                  return 1;
                }
              }
              uVar6 = uVar6 + 1;
            } while (uVar6 < uVar1);
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < uVar2);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  return 0;
}



undefined4 fn_005108ec(int *param_1,uint param_2,int param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined2 *puVar6;
  undefined1 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint uVar10;
  
  if ((param_2 == 0) || (0xc < param_2)) {
    return 0xe0e14826;
  }
  uVar10 = param_2 * param_2;
  uVar2 = fn_004ed2e8();
  iVar3 = fn_00656e14(uVar10 * 2,uVar2);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    uVar4 = 0;
    if (uVar10 != 0) {
      do {
        puVar6 = (undefined2 *)(iVar3 + uVar4 * 2);
        uVar4 = uVar4 + 1;
        if (puVar6 != (undefined2 *)0x0) {
          *puVar6 = 0;
        }
      } while (uVar4 < uVar10);
    }
  }
  *param_1 = iVar3;
  if (iVar3 - 0x100000U < 0x3ff00000) {
    fn_00158f6c(iVar3,uVar10 * 2);
    uVar2 = fn_004ed2e8();
    iVar3 = fn_00656e14(param_2 << 1,uVar2);
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      uVar4 = 0;
      if (param_2 != 0) {
        do {
          puVar6 = (undefined2 *)(iVar3 + uVar4 * 2);
          uVar4 = uVar4 + 1;
          if (puVar6 != (undefined2 *)0x0) {
            *puVar6 = 0;
          }
        } while (uVar4 < param_2);
      }
    }
    param_1[1] = iVar3;
    if (iVar3 - 0x100000U < 0x3ff00000) {
      fn_00158f6c(iVar3,param_2 << 1);
      uVar2 = fn_004ed2e8();
      iVar3 = fn_00656e14(uVar10,uVar2);
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        uVar4 = 0;
        if (uVar10 != 0) {
          do {
            puVar7 = (undefined1 *)(iVar3 + uVar4);
            uVar4 = uVar4 + 1;
            if (puVar7 != (undefined1 *)0x0) {
              *puVar7 = 0;
            }
          } while (uVar4 < uVar10);
        }
      }
      param_1[2] = iVar3;
      if (iVar3 - 0x100000U < 0x3ff00000) {
        uVar4 = 0;
        if (param_2 != 0) {
          do {
            if (param_2 != 0) {
              uVar5 = param_2 & 1;
              uVar1 = (undefined1)uVar4;
              if (uVar5 == 1) {
                *(undefined1 *)(uVar4 * param_2 + param_1[2]) = uVar1;
              }
              uVar8 = (uint)(uVar5 == 1);
              for (; uVar5 < param_2; uVar5 = uVar5 + 2) {
                *(undefined1 *)(uVar8 + uVar4 * param_2 + param_1[2]) = uVar1;
                *(undefined1 *)(uVar8 + 1 + uVar4 * param_2 + param_1[2]) = uVar1;
                uVar8 = uVar8 + 2;
              }
            }
            uVar4 = uVar4 + 1;
          } while (uVar4 < param_2);
        }
        uVar2 = fn_004ed2e8();
        iVar3 = fn_00656e14(param_2,uVar2);
        if (iVar3 == 0) {
          iVar3 = 0;
        }
        else {
          uVar4 = 0;
          if (param_2 != 0) {
            do {
              puVar7 = (undefined1 *)(iVar3 + uVar4);
              uVar4 = uVar4 + 1;
              if (puVar7 != (undefined1 *)0x0) {
                *puVar7 = 0;
              }
            } while (uVar4 < param_2);
          }
        }
        param_1[3] = iVar3;
        if (iVar3 - 0x100000U < 0x3ff00000) {
          fn_00158f6c(iVar3,param_2);
          uVar2 = fn_004ed2e8();
          iVar3 = fn_00656e14(param_2 << 2,uVar2);
          if (iVar3 == 0) {
            iVar3 = 0;
          }
          else {
            uVar4 = 0;
            if (param_2 != 0) {
              do {
                puVar9 = (undefined4 *)(iVar3 + uVar4 * 4);
                uVar4 = uVar4 + 1;
                if (puVar9 != (undefined4 *)0x0) {
                  *puVar9 = 0;
                }
              } while (uVar4 < param_2);
            }
          }
          param_1[4] = iVar3;
          if (iVar3 - 0x100000U < 0x3ff00000) {
            fn_00158f6c(iVar3,param_2 << 2);
            *(char *)(param_1 + 0xd) = (char)param_3;
            if (param_3 != 0) {
              uVar2 = fn_004ed2e8();
              iVar3 = fn_00656e14(uVar10,uVar2);
              if (iVar3 == 0) {
                iVar3 = 0;
              }
              else {
                uVar4 = 0;
                if (uVar10 != 0) {
                  do {
                    puVar7 = (undefined1 *)(iVar3 + uVar4);
                    uVar4 = uVar4 + 1;
                    if (puVar7 != (undefined1 *)0x0) {
                      *puVar7 = 0;
                    }
                  } while (uVar4 < uVar10);
                }
              }
              param_1[5] = iVar3;
              if (0x3fefffff < iVar3 - 0x100000U) {
                return 0xe0614820;
              }
              fn_00158f6c(iVar3,uVar10);
            }
            uVar2 = fn_004ed2e8();
            iVar3 = fn_00656e14(param_2,uVar2);
            if (iVar3 == 0) {
              iVar3 = 0;
            }
            else {
              uVar4 = 0;
              if (param_2 != 0) {
                do {
                  puVar7 = (undefined1 *)(iVar3 + uVar4);
                  uVar4 = uVar4 + 1;
                  if (puVar7 != (undefined1 *)0x0) {
                    *puVar7 = 0;
                  }
                } while (uVar4 < param_2);
              }
            }
            param_1[6] = iVar3;
            if (iVar3 - 0x100000U < 0x3ff00000) {
              fn_00158f6c(iVar3,param_2);
              uVar2 = fn_004ed2e8();
              iVar3 = fn_00656e14(uVar10,uVar2);
              if (iVar3 == 0) {
                iVar3 = 0;
              }
              else {
                uVar4 = 0;
                if (uVar10 != 0) {
                  do {
                    puVar7 = (undefined1 *)(iVar3 + uVar4);
                    uVar4 = uVar4 + 1;
                    if (puVar7 != (undefined1 *)0x0) {
                      *puVar7 = 0;
                    }
                  } while (uVar4 < uVar10);
                }
              }
              param_1[0xe] = iVar3;
              if (iVar3 - 0x100000U < 0x3ff00000) {
                fn_001694e4(iVar3,param_1[2],uVar10);
                return 0;
              }
            }
          }
        }
      }
    }
  }
  return 0xe0614820;
}


