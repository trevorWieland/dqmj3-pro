#include "0014495c_001453b4.h"



undefined4 * fn_001453b4(char *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  iVar5 = *(int *)(param_1 + 8) + *(int *)(param_1 + 0x10) + -1;
  uVar6 = (*(int *)(param_1 + 4) + *(int *)(param_1 + 0xc)) - 1;
  if (*param_1 == '\0') {
    uVar3 = 0;
  }
  else {
    uVar3 = 3;
  }
  *param_2 = uVar3;
  param_2[1] = 0x802f0065;
  uVar2 = *(uint *)(param_1 + 4);
  if ((int)uVar2 < 0) {
    uVar2 = 0;
  }
  else if (*(int *)(param_1 + 0x14) <= (int)uVar2) {
    uVar2 = *(int *)(param_1 + 0x14) - 1;
  }
  iVar4 = *(int *)(param_1 + 8);
  if (iVar4 < 0) {
    uVar1 = 0;
  }
  else {
    if (*(int *)(param_1 + 0x18) <= iVar4) {
      iVar4 = *(int *)(param_1 + 0x18) + -1;
    }
    uVar1 = iVar4 << 0x10;
  }
  param_2[2] = uVar1 | uVar2;
  if ((int)uVar6 < 0) {
    uVar6 = 0;
  }
  else {
    if (iVar5 < 0) {
      iVar5 = 0;
    }
    uVar6 = uVar6 | iVar5 << 0x10;
  }
  param_2[3] = uVar6;
  return param_2 + 4;
}



undefined1 fn_0014524c(int *param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  char *pcVar10;
  
  if (*param_2 == '\x01') {
    iVar4 = param_1[1];
  }
  else {
    iVar4 = *param_1;
  }
  iVar6 = param_1[iVar4 + 3];
  iVar5 = *(int *)(iVar6 + 0x30);
  iVar9 = *(int *)(iVar6 + 0x38) + iVar6;
  pcVar10 = param_2;
  iVar4 = fn_002febd8(param_3);
  uVar8 = 0;
  if (*(int *)(iVar6 + 0x34) != 0) {
    do {
      piVar7 = (int *)(iVar5 + iVar6 + uVar8 * 8);
      iVar3 = fn_00147e6c(param_3,*piVar7 + iVar9,iVar4,param_4,param_1,pcVar10);
      if ((iVar3 == 0) &&
         ((cVar1 = *(char *)(*piVar7 + iVar9 + iVar4), cVar1 == '\0' || (cVar1 == '.')))) {
        *(int *)(param_2 + 4) = *piVar7 + iVar9;
        uVar8 = piVar7[1] & 0xff;
        cVar1 = (char)piVar7[1];
        param_2[2] = cVar1;
        cVar2 = (char)((uint)piVar7[1] >> 0x10);
        param_2[3] = cVar2;
        if (0x87 < uVar8) {
          return 0;
        }
        if (uVar8 < 0x78) {
          if (uVar8 < 0x70) {
            if (uVar8 < 0x10) {
              if (param_2[1] != '\x01') {
                return 0;
              }
            }
            else {
              param_2[2] = cVar1 + -0x10;
              param_2[3] = cVar2 + -0x10;
              if (param_2[1] != '\x02') {
                return 0;
              }
            }
          }
          else {
            param_2[2] = cVar1 + -0x70;
            param_2[3] = cVar2 + -0x70;
            if (param_2[1] != '\x03') {
              return 0;
            }
          }
        }
        else {
          param_2[2] = cVar1 + -0x78;
          param_2[3] = cVar2 + -0x78;
          if (param_2[1] != '\x04') {
            return 0;
          }
        }
        return 1;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(uint *)(iVar6 + 0x34));
  }
  return 0;
}



void fn_00144ac0(undefined4 *param_1,int param_2,uint *param_3)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  int *piVar11;
  uint uVar12;
  int iVar13;
  
  uVar12 = 0;
  iVar13 = 0;
  piVar11 = (int *)*param_1;
  uVar8 = 0;
  do {
    uVar9 = piVar11[7] - piVar11[6] >> 2;
    if (uVar9 <= uVar8) {
      fn_002ff628(9,&DAT_008c760c,&DAT_008c760c,uVar8,uVar9);
    }
    iVar1 = uVar8 * 4;
    uVar8 = uVar8 + 1;
    if (-1 < *(int *)(piVar11[6] + iVar1)) {
      iVar13 = iVar13 + 1;
    }
  } while ((int)uVar8 < 4);
  if (0 < iVar13) {
    do {
      uVar9 = uVar12 & 0xff;
      uVar8 = piVar11[7] - piVar11[6] >> 2;
      if (uVar8 <= uVar9) {
        fn_002ff628(9,&DAT_008c760c,&DAT_008c760c,uVar9,uVar8);
      }
      uVar8 = *(uint *)(piVar11[6] + uVar9 * 4);
      if (-1 < (int)uVar8) {
        uVar9 = piVar11[1] - *piVar11 >> 2;
        if (uVar9 <= uVar8) {
          fn_002ff628(9,&DAT_008c7608,&DAT_008c7608,uVar8,uVar9);
        }
        iVar13 = *(int *)(*piVar11 + uVar8 * 4);
        if ((iVar13 != 0) && (iVar1 = fn_00156f30(iVar13,0), iVar1 == param_2)) {
          piVar10 = (int *)param_3[1];
          if (piVar10 == (int *)param_3[2]) {
            uVar8 = (int)((int)piVar10 - *param_3) >> 2;
            if (uVar8 < (uint)((int)((int)param_3[2] - *param_3) >> 2)) {
              param_3[1] = (uint)(piVar10 + 1);
              if (piVar10 != (int *)0x0) {
                *piVar10 = piVar10[-1];
              }
              piVar5 = piVar10 + -1;
              piVar6 = piVar10;
              if (piVar10 < piVar5) {
                if (0 < (int)piVar5 - (int)piVar10) {
                  iVar1 = (int)piVar5 - (int)piVar10 >> 2;
                  iVar4 = 0;
                  do {
                    iVar1 = iVar1 + -1;
                    piVar10[iVar4 + -1] = piVar5[iVar4 + -1];
                    iVar4 = iVar4 + -1;
                  } while (iVar1 != 0);
                }
              }
              else {
                while (piVar10 != piVar5) {
                  piVar5 = piVar5 + -1;
                  piVar6[-1] = *piVar5;
                  piVar6 = piVar6 + -1;
                }
              }
              *piVar10 = iVar13;
            }
            else {
              uVar9 = uVar8 + (uVar8 >> 1) + (uVar8 >> 3);
              if (uVar9 < uVar8 + 0x20) {
                uVar9 = uVar8 + 0x20;
              }
              piVar2 = (int *)fn_00100fc6(uVar9 << 2,0);
              piVar6 = piVar2;
              for (piVar5 = (int *)*param_3; piVar5 != piVar10; piVar5 = piVar5 + 1) {
                if (piVar6 != (int *)0x0) {
                  *piVar6 = *piVar5;
                }
                piVar6 = piVar6 + 1;
              }
              piVar5 = (int *)(((int)piVar10 - *param_3 & 0xfffffffc) + (int)piVar2);
              if (piVar5 != (int *)0x0) {
                *piVar5 = iVar13;
              }
              piVar6 = (int *)param_3[1];
              piVar5 = (int *)(((int)piVar10 - *param_3 & 0xfffffffc) + (int)piVar2);
              for (; piVar10 != piVar6; piVar10 = piVar10 + 1) {
                piVar5 = piVar5 + 1;
                if (piVar5 != (int *)0x0) {
                  *piVar5 = *piVar10;
                }
              }
              uVar3 = *param_3;
              uVar7 = param_3[1];
              uVar8 = uVar3;
              if (uVar7 < uVar3) {
                do {
                  uVar8 = uVar8 + 4;
                } while (uVar8 != uVar7);
              }
              fn_001008c4(uVar3,(int)(param_3[2] - uVar3) >> 2,0);
              param_3[2] = (uint)(piVar2 + uVar9);
              param_3[1] = (uint)(piVar2 + ((int)(uVar7 - uVar3) >> 2) + 1);
              *param_3 = (uint)piVar2;
            }
          }
          else {
            param_3[1] = (uint)(piVar10 + 1);
            if (piVar10 != (int *)0x0) {
              *piVar10 = iVar13;
            }
          }
        }
      }
      iVar13 = 0;
      uVar8 = 0;
      uVar12 = uVar12 + 1;
      do {
        uVar9 = piVar11[7] - piVar11[6] >> 2;
        if (uVar9 <= uVar8) {
          fn_002ff628(9,&DAT_008c760c,&DAT_008c760c,uVar8,uVar9);
        }
        iVar1 = uVar8 * 4;
        uVar8 = uVar8 + 1;
        if (-1 < *(int *)(piVar11[6] + iVar1)) {
          iVar13 = iVar13 + 1;
        }
      } while ((int)uVar8 < 4);
    } while ((int)uVar12 < iVar13);
  }
  return;
}



int fn_00144a40(int *param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *param_1;
  iVar1 = fn_00100b58(param_2);
  uVar2 = fn_00154328(param_2,iVar1 << 1);
  iVar4 = *(int *)(iVar3 + 0x10);
  iVar1 = iVar4;
  iVar3 = *(int *)(iVar4 + 4);
  while (iVar3 != 0) {
    if (*(uint *)(iVar3 + 0x10) < uVar2) {
      iVar3 = *(int *)(iVar3 + 0xc);
    }
    else {
      iVar1 = iVar3;
      iVar3 = *(int *)(iVar3 + 8);
    }
  }
  if ((iVar1 == iVar4) || (uVar2 < *(uint *)(iVar1 + 0x10))) {
    iVar1 = iVar4;
  }
  if (iVar1 == iVar4) {
    iVar1 = 0;
  }
  else {
    iVar1 = iVar1 + 0x14;
  }
  return iVar1;
}



int fn_0014495c(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int unaff_r9;
  int local_38 [5];
  
  iVar5 = *param_1;
  iVar3 = 0;
  do {
    if (0 < iVar3) {
      unaff_r9 = (int)(short)iVar3;
    }
    iVar4 = 0;
    local_38[iVar3] = 0;
    if (0 < iVar3) {
      do {
        if ((char)iVar4 == -1) {
          iVar6 = 0;
        }
        else {
          iVar6 = iVar5 + (char)iVar4 * 2;
          iVar6 = (int)*(short *)(iVar6 + 0x1a) + (int)*(short *)(iVar6 + 0x12);
        }
        if ((char)unaff_r9 == -1) {
          iVar1 = 0;
        }
        else {
          iVar1 = iVar5 + (char)unaff_r9 * 2;
          iVar1 = (int)*(short *)(iVar1 + 0x12) + (int)*(short *)(iVar1 + 0x1a);
        }
        if (iVar6 < iVar1) {
          iVar2 = local_38[iVar4];
        }
        else {
          iVar2 = local_38[iVar3];
        }
        if (iVar6 < iVar1) {
          local_38[iVar4] = iVar2 + 1;
        }
        else {
          local_38[iVar3] = iVar2 + 1;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar3);
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 4);
  iVar3 = 0;
  do {
    if (local_38[iVar3] == param_2) {
      return (int)(char)iVar3;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 4);
  return -1;
}


