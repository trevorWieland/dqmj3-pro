#include "0064d578_0064d600.h"



bool fn_0064d5e4(int param_1,int param_2)

{
  return '\0' < *(char *)((uint)*(byte *)(param_1 + 4) + param_2 + 0x5b);
}



int fn_0064d578(undefined4 param_1,int param_2)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  pbVar2 = (byte *)(param_2 + 0x120);
  iVar5 = 0;
  iVar4 = 0x7fffffff;
  uVar3 = 0;
  if (*(char *)(param_2 + 0x120) != '\0') {
    do {
      if (pbVar2[uVar3 + 0xe0] != 2) {
        iVar1 = fn_0064d600(param_1,(int)*(short *)(pbVar2 + uVar3 * 2 + 4));
        if (iVar1 < iVar4) {
          iVar5 = (int)*(short *)(pbVar2 + uVar3 * 2 + 4);
          iVar4 = iVar1;
        }
      }
      uVar3 = uVar3 + 1 & 0xff;
    } while (uVar3 < *pbVar2);
  }
  return iVar5;
}



int fn_0064d600(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  char extraout_r1;
  int iVar12;
  uint uVar13;
  char cVar14;
  uint uVar15;
  int iVar16;
  char acStack_698 [4];
  int aiStack_694 [383];
  char local_98 [4];
  int local_94 [24];
  int iStack_34;
  int local_30;
  uint uStack_2c;
  uint local_28;
  
  local_28 = param_4;
  iVar4 = fn_00691d78(param_2);
  if (iVar4 - 1U < 699) {
    param_2 = iVar4;
  }
  iVar4 = fn_00691d5c(param_2);
  if ((((iVar4 != 3) ||
       ((iVar4 = fn_006924f4(param_2), iVar4 == 0 &&
        ((iVar4 = fn_001639e4(param_2), iVar4 != 0x1a ||
         (iVar4 = fn_00163c80(param_2), iVar4 != 4)))))) &&
      (iVar4 = fn_001639e4(param_2), iVar4 != 1)) &&
     (iVar4 = fn_006919b0(param_2,0x2f), iVar4 == 0)) {
switchD_0064d69c_caseD_0:
    return 0x7fffffff;
  }
  uVar5 = fn_00163cbc(param_2);
  switch(uVar5) {
  default:
    goto switchD_0064d69c_caseD_0;
  case 1:
    iVar4 = fn_0061be08((int)*(char *)(param_1 + 4));
    if (iVar4 == 0) {
      uVar13 = 0x18;
    }
    else {
      uVar13 = 0x14;
    }
    iVar4 = fn_0061be08((int)*(char *)(param_1 + 4));
    if (iVar4 == 0) {
LAB_0064d724:
      uVar15 = 0x14;
      goto LAB_0064d728;
    }
    break;
  case 2:
    iVar4 = fn_0061be08((int)*(char *)(param_1 + 4));
    if (iVar4 == 0) {
      uVar13 = 0x14;
    }
    else {
      uVar13 = 0x10;
    }
    iVar4 = fn_0061be08((int)*(char *)(param_1 + 4));
    if (iVar4 == 0) {
      uVar15 = 0x18;
    }
    else {
      uVar15 = 0x14;
    }
    iVar4 = 0;
    if (uVar13 < uVar15) {
      do {
        iVar6 = fn_006f14a4(param_1,uVar13);
        if (iVar6 != 0) {
          sVar2 = fn_0064d364(param_1,param_2,(int)*(char *)(param_1 + 4),uVar13);
          iVar16 = (int)*(char *)(param_1 + 4);
          if (uVar13 == 0 || iVar16 == 0) {
LAB_0064d7f8:
            iVar6 = *(int *)(param_1 + 0xc);
          }
          else {
            iVar7 = fn_0061be08();
            if (iVar7 == 0) {
              uVar8 = fn_0061be08(iVar16);
              uVar8 = uVar8 ^ 1;
            }
            else {
              uVar8 = fn_0061be08(iVar16);
            }
            if (uVar8 == 0) goto LAB_0064d7f8;
          }
          sVar3 = *(short *)(iVar6 + 0x1c);
          iVar6 = fn_00176dc0();
          iVar6 = ((int)sVar3 + (int)sVar2) - iVar6;
          if (iVar6 < 0) {
            iVar6 = iVar6 * 2;
          }
          if (iVar6 < 0) {
            iVar6 = -iVar6;
          }
          iVar4 = iVar4 + iVar6;
        }
        uVar13 = (uint)(char)((char)uVar13 + '\x01');
      } while ((int)uVar13 < (int)uVar15);
    }
    return iVar4;
  case 4:
    iVar4 = fn_0061be08((int)*(char *)(param_1 + 4));
    if (iVar4 == 0) {
      uVar13 = 0x18;
    }
    else {
      uVar13 = 0x14;
    }
    iVar4 = fn_0061be08((int)*(char *)(param_1 + 4));
    if (iVar4 == 0) {
      uVar15 = 0x14;
    }
    else {
      uVar15 = 0x10;
    }
    iVar4 = 0;
    iStack_34 = param_1;
    local_30 = param_2;
    uStack_2c = uVar15;
    local_28 = uVar13;
    fn_00301f50(local_98,0x60);
    if (uVar15 < uVar13) {
      do {
        iVar6 = fn_006f14a4(param_1,uVar15);
        if (iVar6 != 0) {
          local_98[iVar4 * 0xc] = (char)uVar15;
          local_94[iVar4 * 3] = (int)*(short *)(iVar6 + 0x1c);
          iVar6 = fn_00176dc0();
          local_94[iVar4 * 3 + 1] = iVar6;
          iVar4 = (int)(char)((char)iVar4 + '\x01');
        }
        uVar15 = (uint)(char)((char)uVar15 + '\x01');
      } while ((int)uVar15 < (int)uVar13);
    }
    iVar16 = 0;
    iVar6 = fn_001639e4(local_30);
    if (iVar6 == 0x26) {
      cVar1 = fn_00691af0(local_30,2);
      if (cVar1 < '\x01') goto LAB_006538a8;
    }
    else {
      cVar1 = '\x01';
    }
    cVar14 = '\0';
    do {
      uVar5 = fn_0063a5a4();
      fn_00169f1c(uVar5,iVar4);
      iVar10 = (int)extraout_r1;
      iVar11 = fn_0064d364(param_1,local_30,(int)*(char *)(param_1 + 4),(int)local_98[iVar10 * 0xc]
                           );
      iVar7 = local_94[iVar10 * 3];
      iVar6 = ((short)iVar11 + iVar7) - local_94[iVar10 * 3 + 1];
      if (iVar6 < 0) {
        iVar6 = iVar6 * 2;
      }
      if (iVar6 < 0) {
        iVar6 = -iVar6;
      }
      local_98[iVar10 * 0xc + 1] = '\x01';
      iVar12 = local_94[iVar10 * 3 + 1];
      iVar16 = iVar16 + iVar6;
      iVar7 = iVar7 + iVar11;
      local_94[iVar10 * 3] = iVar7;
      if (iVar12 < iVar7) {
        iVar7 = iVar12;
      }
      local_94[iVar10 * 3] = iVar7;
      cVar14 = cVar14 + '\x01';
    } while (cVar14 < cVar1);
LAB_006538a8:
    iVar6 = 0;
    if (0 < iVar4) {
      do {
        if (local_98[iVar6 * 0xc + 1] == '\0') {
          iVar7 = local_94[iVar6 * 3] - local_94[iVar6 * 3 + 1];
          if (iVar7 < 0) {
            iVar7 = iVar7 * 2;
          }
          if (iVar7 < 0) {
            iVar7 = -iVar7;
          }
          iVar16 = iVar16 + iVar7;
        }
        iVar6 = (int)(char)((char)iVar6 + '\x01');
      } while (iVar6 < iVar4);
    }
    return iVar16;
  case 7:
    iVar4 = fn_0061be08((int)*(char *)(param_1 + 4));
    if (iVar4 == 0) {
      uVar13 = 0x14;
    }
    else {
      uVar13 = 0x18;
    }
    iVar4 = fn_0061be08((int)*(char *)(param_1 + 4));
    if (iVar4 != 0) goto LAB_0064d724;
    break;
  case 8:
    iVar4 = fn_0061be08((int)*(char *)(param_1 + 4));
    if (iVar4 == 0) {
      uVar13 = 0x10;
    }
    else {
      uVar13 = 0x14;
    }
    iVar4 = fn_0061be08((int)*(char *)(param_1 + 4));
    if (iVar4 == 0) {
      uVar15 = 0x14;
    }
    else {
      uVar15 = 0x18;
    }
    iVar4 = 0;
    if (uVar13 < uVar15) {
      do {
        iVar6 = fn_006f14a4(param_1,uVar13);
        if (iVar6 != 0) {
          sVar2 = fn_0064d364(param_1,param_2,(int)*(char *)(param_1 + 4),uVar13);
          iVar16 = (int)*(char *)(param_1 + 4);
          if (uVar13 == 0 || iVar16 == 0) {
LAB_0064d960:
            iVar6 = *(int *)(param_1 + 0xc);
          }
          else {
            iVar7 = fn_0061be08(uVar13);
            if (iVar7 == 0) {
              uVar8 = fn_0061be08(iVar16);
              uVar8 = uVar8 ^ 1;
            }
            else {
              uVar8 = fn_0061be08(iVar16);
            }
            if (uVar8 == 0) goto LAB_0064d960;
          }
          sVar3 = *(short *)(iVar6 + 0x1c);
          iVar6 = fn_00176dc0();
          iVar6 = ((int)sVar3 + (int)sVar2) - iVar6;
          if (iVar6 < 0) {
            iVar6 = iVar6 * 2;
          }
          if (iVar6 < 0) {
            iVar6 = -iVar6;
          }
          iVar4 = iVar4 + iVar6;
        }
        uVar13 = (uint)(char)((char)uVar13 + '\x01');
      } while ((int)uVar13 < (int)uVar15);
    }
    return iVar4;
  case 0xb:
    local_28 = *(undefined4 *)(param_1 + 0xc);
    iVar4 = fn_00650f84(param_1,param_2,(int)*(char *)(param_1 + 4),(int)*(char *)(param_1 + 4));
    return iVar4;
  }
  uVar15 = 0x10;
LAB_0064d728:
  iVar4 = 0x7fffffff;
  if (uVar15 < uVar13) {
    do {
      iVar6 = fn_006f14a4(param_1,uVar15);
      if (iVar6 != 0) {
        iVar16 = (int)*(char *)(param_1 + 4);
        if (uVar15 == 0 || iVar16 == 0) {
LAB_006524b0:
          iVar6 = *(int *)(param_1 + 0xc);
        }
        else {
          iVar7 = fn_0061be08();
          if (iVar7 == 0) {
            uVar8 = fn_0061be08(iVar16);
            uVar8 = uVar8 ^ 1;
          }
          else {
            uVar8 = fn_0061be08(iVar16);
          }
          if (uVar8 == 0) goto LAB_006524b0;
        }
        sVar3 = fn_0064d364(param_1,param_2,(int)*(char *)(param_1 + 4),uVar15);
        sVar2 = *(short *)(iVar6 + 0x1c);
        iVar6 = fn_00176dc0(iVar6);
        iVar6 = ((int)sVar2 + (int)sVar3) - iVar6;
        if (iVar6 < 0) {
          iVar6 = iVar6 * 2;
        }
        if (iVar6 < 0) {
          iVar6 = -iVar6;
        }
        iVar16 = fn_0061be08((int)*(char *)(param_1 + 4));
        if (iVar16 == 0) {
          uVar8 = 0x14;
        }
        else {
          uVar8 = 0x10;
        }
        iVar16 = fn_0061be08((int)*(char *)(param_1 + 4));
        if (iVar16 == 0) {
          uVar9 = 0x18;
        }
        else {
          uVar9 = 0x14;
        }
        if (uVar8 < uVar9) {
          do {
            if ((uVar8 != uVar15) && (iVar16 = fn_006f14a4(param_1,uVar8), iVar16 != 0)) {
              sVar2 = *(short *)(iVar16 + 0x1c);
              iVar16 = fn_00176dc0();
              iVar16 = sVar2 - iVar16;
              if (iVar16 < 0) {
                iVar16 = iVar16 * 2;
              }
              if (iVar16 < 0) {
                iVar16 = -iVar16;
              }
              iVar6 = iVar6 + iVar16;
            }
            uVar8 = (uint)(char)((char)uVar8 + '\x01');
            iVar16 = fn_0061be08((int)*(char *)(param_1 + 4));
            if (iVar16 == 0) {
              iVar16 = 0x18;
            }
            else {
              iVar16 = 0x14;
            }
          } while ((int)uVar8 < iVar16);
        }
        if (iVar6 < iVar4) {
          iVar4 = iVar6;
        }
      }
      uVar15 = (uint)(char)((char)uVar15 + '\x01');
    } while ((int)uVar15 < (int)uVar13);
  }
  return iVar4;
}


