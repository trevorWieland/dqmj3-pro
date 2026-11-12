#include "003b1830_003b1ab8.h"



int fn_003b1ab8(uint param_1,int param_2,int *param_3)

{
  uint uVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined2 *puVar10;
  int iVar11;
  
  iVar11 = 0;
  uVar3 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10);
  iVar4 = (int)((longlong)(int)uVar3 * -0x4de9bd37 + ((ulonglong)uVar3 << 0x20) >> 0x20);
  iVar4 = (iVar4 >> 6) - (iVar4 >> 0x1f);
  uVar3 = param_1;
  if (0 < iVar4) {
    uVar3 = *(uint *)(param_1 + 0x10);
  }
  iVar5 = 0;
  if (0 < iVar4) {
    do {
      if (*(short *)(uVar3 + iVar5 * 0x5c) == param_2) {
        iVar4 = uVar3 + iVar5 * 0x5c;
        if (iVar4 == 0) {
          return 0;
        }
        iVar5 = 0;
        do {
          iVar6 = iVar4 + iVar5 * 8;
          if (*(short *)(iVar6 + 0xc) != 0) {
            puVar10 = (undefined2 *)param_3[1];
            if (puVar10 == (undefined2 *)param_3[2]) {
              fn_0079e460(param_3);
            }
            else {
              param_3[1] = (int)(puVar10 + 1);
              if (puVar10 != (undefined2 *)0x0) {
                *puVar10 = *(undefined2 *)(iVar6 + 0xc);
              }
            }
            iVar11 = iVar11 + 1;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < 10);
        iVar5 = 0;
        do {
          sVar2 = *(short *)(iVar4 + iVar5 * 8 + 0xc);
          if (sVar2 != 0) {
            uVar3 = *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c);
            iVar6 = (int)((longlong)(int)uVar3 * -0x7bdef7bd + ((ulonglong)uVar3 << 0x20) >> 0x20);
            iVar6 = (iVar6 >> 6) - (iVar6 >> 0x1f);
            uVar3 = param_1;
            if (0 < iVar6) {
              uVar3 = *(uint *)(param_1 + 0x1c);
            }
            iVar7 = 0;
            if (0 < iVar6) {
              do {
                if (*(short *)(uVar3 + iVar7 * 0x7c) == sVar2) {
                  iVar6 = uVar3 + iVar7 * 0x7c;
                  if (iVar6 != 0) {
                    uVar3 = (uint)*(ushort *)(iVar6 + 10);
                  }
                  if (iVar6 != 0 && uVar3 != 0) {
                    puVar10 = (undefined2 *)param_3[1];
                    if (puVar10 == (undefined2 *)param_3[2]) {
                      fn_0079e460(param_3);
                    }
                    else {
                      param_3[1] = (int)(puVar10 + 1);
                      if (puVar10 != (undefined2 *)0x0) {
                        *puVar10 = *(undefined2 *)(iVar6 + 10);
                      }
                    }
                    iVar11 = iVar11 + 1;
                  }
                  break;
                }
                iVar7 = iVar7 + 1;
              } while (iVar7 < iVar6);
            }
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < 10);
        iVar5 = 0;
        do {
          sVar2 = *(short *)(iVar4 + iVar5 * 8 + 0xc);
          if (sVar2 != 0) {
            uVar3 = *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c);
            iVar6 = (int)((longlong)(int)uVar3 * -0x7bdef7bd + ((ulonglong)uVar3 << 0x20) >> 0x20);
            iVar6 = (iVar6 >> 6) - (iVar6 >> 0x1f);
            uVar3 = param_1;
            if (0 < iVar6) {
              uVar3 = *(uint *)(param_1 + 0x1c);
            }
            iVar7 = 0;
            if (0 < iVar6) {
              do {
                if (*(short *)(uVar3 + iVar7 * 0x7c) == sVar2) {
                  iVar6 = uVar3 + iVar7 * 0x7c;
                  goto LAB_003b1cd0;
                }
                iVar7 = iVar7 + 1;
              } while (iVar7 < iVar6);
            }
            iVar6 = 0;
LAB_003b1cd0:
            iVar7 = 0;
            do {
              iVar8 = iVar6 + iVar7 * 8;
              if ((*(short *)(iVar8 + 0x6c) == 10) && (sVar2 = *(short *)(iVar8 + 0x6e), sVar2 != 0)
                 ) {
                iVar8 = (*(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x28)) / 0x28;
                uVar3 = param_1;
                if (0 < iVar8) {
                  uVar3 = *(uint *)(param_1 + 0x28);
                }
                iVar9 = 0;
                if (0 < iVar8) {
                  do {
                    if (*(short *)(uVar3 + iVar9 * 0x28) == sVar2) {
                      iVar8 = uVar3 + iVar9 * 0x28;
                      goto LAB_003b1d50;
                    }
                    iVar9 = iVar9 + 1;
                  } while (iVar9 < iVar8);
                }
                iVar8 = 0;
LAB_003b1d50:
                puVar10 = (undefined2 *)param_3[1];
                uVar3 = 0;
                if ((int)puVar10 - *param_3 >> 1 != 0) {
                  do {
                    uVar1 = (int)puVar10 - *param_3 >> 1;
                    if (uVar1 <= uVar3) {
                      fn_002ff628(9,&DAT_008c7674,&DAT_008c7674,uVar3,uVar1);
                    }
                    if (*(short *)(iVar8 + 8) == *(short *)(*param_3 + uVar3 * 2))
                    goto LAB_003b1df8;
                    puVar10 = (undefined2 *)param_3[1];
                    uVar3 = uVar3 + 1;
                  } while (uVar3 < (uint)((int)puVar10 - *param_3 >> 1));
                }
                if (puVar10 == (undefined2 *)param_3[2]) {
                  fn_0079e460(param_3);
                }
                else {
                  param_3[1] = (int)(puVar10 + 1);
                  if (puVar10 != (undefined2 *)0x0) {
                    *puVar10 = *(undefined2 *)(iVar8 + 8);
                  }
                }
                iVar11 = iVar11 + 1;
              }
LAB_003b1df8:
              iVar7 = iVar7 + 1;
            } while (iVar7 < 2);
          }
          iVar5 = iVar5 + 1;
          if (9 < iVar5) {
            iVar5 = 0;
            do {
              iVar6 = (int)*(short *)(iVar4 + iVar5 * 8 + 0xc);
              if (iVar6 != 0) {
                iVar6 = fn_003b1e5c(param_1,iVar6,param_3);
                iVar11 = iVar11 + iVar6;
              }
              iVar5 = iVar5 + 1;
            } while (iVar5 < 10);
            return iVar11;
          }
        } while( true );
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar4);
  }
  return 0;
}



int fn_003b1a34(int param_1,short param_2,short param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar2 = (int)param_2;
  iVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
  iVar1 = iVar3 >> 0x1f;
  iVar3 = iVar3 / 0x28 + iVar1;
  iVar5 = iVar3;
  while( true ) {
    if (iVar3 != iVar1) {
      iVar5 = *(int *)(param_1 + 4);
    }
    uVar4 = 0;
    if (iVar3 == iVar1) break;
    while (*(short *)(iVar5 + uVar4 * 0x28 + 10) != iVar2) {
      uVar4 = uVar4 + 1;
      if ((uint)(iVar3 - iVar1) <= uVar4) goto LAB_003b1aa0;
    }
    iVar2 = (int)(short)((short)iVar2 + param_3);
    if (iVar2 < 1) {
      return 0;
    }
  }
LAB_003b1aa0:
  if (iVar2 < 1) {
    return 0;
  }
  return iVar2;
}



int fn_003b19d0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (*(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x28)) / 0x28;
  if (0 < iVar1) {
    param_1 = *(int *)(param_1 + 0x28);
  }
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      if (*(short *)(param_1 + iVar2 * 0x28) == param_2) {
        return param_1 + iVar2 * 0x28;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  return 0;
}



undefined4 fn_003b1974(int param_1,int param_2)

{
  switch(*(undefined2 *)(param_1 + param_2 * 0xe + 0x24)) {
  default:
    return 1;
  case 2:
    return 2;
  case 3:
    return 3;
  case 4:
    return 4;
  case 5:
    return 5;
  }
}



int fn_003b1928(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x38) - *(int *)(param_1 + 0x34) >> 2;
  if (0 < iVar1) {
    param_1 = *(int *)(param_1 + 0x34);
  }
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      if (*(short *)(param_1 + iVar2 * 4) == param_2) {
        return param_1 + iVar2 * 4;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  return 0;
}



undefined4 fn_003b1844(undefined4 param_1)

{
  switch(param_1) {
  default:
    return 1;
  case 1:
    return 2;
  case 2:
    return 3;
  case 3:
    return 0xd;
  case 4:
    return 4;
  case 5:
    return 5;
  case 6:
    return 6;
  case 7:
    return 0xc;
  case 8:
    return 7;
  case 9:
    return 8;
  case 10:
    return 9;
  case 0xb:
    return 10;
  case 0xc:
    return 0xb;
  case 0xd:
    return 0x12;
  case 0xe:
    return 0xe;
  case 0xf:
    return 0xf;
  case 0x10:
    return 0x13;
  case 0x11:
    return 0x14;
  }
}



undefined4 fn_003b1830(int param_1,int param_2,int param_3)

{
  switch(*(undefined1 *)(param_1 + param_2 * 0xe + param_3 * 4 + 0x2a)) {
  default:
    return 1;
  case 1:
    return 2;
  case 2:
    return 3;
  case 3:
    return 0xd;
  case 4:
    return 4;
  case 5:
    return 5;
  case 6:
    return 6;
  case 7:
    return 0xc;
  case 8:
    return 7;
  case 9:
    return 8;
  case 10:
    return 9;
  case 0xb:
    return 10;
  case 0xc:
    return 0xb;
  case 0xd:
    return 0x12;
  case 0xe:
    return 0xe;
  case 0xf:
    return 0xf;
  case 0x10:
    return 0x13;
  case 0x11:
    return 0x14;
  }
}


