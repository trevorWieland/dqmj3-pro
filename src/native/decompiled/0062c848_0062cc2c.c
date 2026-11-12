#include "0062c848_0062cc2c.h"



/* WARNING: Removing unreachable block (ram,0x0062cf64) */

void fn_0062cc2c(undefined4 param_1,int param_2,int param_3,undefined1 **param_4,int param_5)

{
  short sVar1;
  byte bVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 **ppuVar8;
  undefined1 **ppuVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined1 *local_60;
  undefined1 *local_5c;
  undefined1 *apuStack_58 [2];
  undefined1 *local_50 [4];
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  
  ppuVar9 = param_4;
  iVar5 = fn_001639e4();
  iVar12 = param_3 + param_2 * 0x418;
  if (iVar5 == 0x28) {
    uVar13 = 1;
    do {
      cVar3 = *(char *)(iVar12 + -0x4025 + (uVar13 & 0xff));
      iVar5 = fn_0068fea8((int)(short)uVar13,(int)cVar3);
      if (iVar5 != 0) {
        *(char *)(param_5 + uVar13) = -cVar3;
        *(bool *)(param_5 + uVar13 + 0x61) = cVar3 != 0;
      }
      uVar13 = uVar13 + 1;
    } while ((int)uVar13 < 0x61);
    return;
  }
  if (iVar5 == 0x29) {
    puVar6 = (undefined1 *)fn_00691af0(param_1,0);
    puVar7 = (undefined1 *)fn_00691af0(param_1,1);
    uVar13 = 1;
    do {
      iVar5 = (int)*(char *)(iVar12 + -0x4025 + (uVar13 & 0xff));
      iVar11 = fn_0068fd00((int)(short)uVar13,iVar5);
      if (iVar11 != 0) {
        local_60 = (undefined1 *)-iVar5;
        local_50[0] = puVar7;
        local_5c = puVar6;
        if ((int)puVar7 < (int)puVar6) {
                    /* WARNING: Subroutine does not return */
          fn_00146590();
        }
        if ((int)local_60 < (int)puVar6) {
          ppuVar9 = &local_5c;
        }
        else {
          ppuVar9 = &local_60;
        }
        if ((int)puVar7 < (int)*ppuVar9) {
          ppuVar9 = local_50;
        }
        else if ((int)local_60 < (int)puVar6) {
          ppuVar9 = &local_5c;
        }
        else {
          ppuVar9 = &local_60;
        }
        *(undefined1 *)(param_5 + uVar13) = *(undefined1 *)ppuVar9;
        *(bool *)(param_5 + uVar13 + 0x61) = iVar5 != 0;
      }
      uVar13 = uVar13 + 1;
    } while ((int)uVar13 < 0x61);
    return;
  }
  if (iVar5 == 0x39) {
    return;
  }
  if (iVar5 == 0x3b) {
    uVar13 = 1;
    do {
      iVar5 = (int)*(char *)(iVar12 + -0x4025 + (uVar13 & 0xff));
      iVar11 = fn_0068fd00((int)(short)uVar13,iVar5);
      if (iVar11 != 0) {
        local_60 = (undefined1 *)-iVar5;
        local_50[0] = (undefined1 *)0x4;
        local_5c = (undefined1 *)0xfffffffc;
        if ((int)local_60 < -4) {
          ppuVar9 = &local_5c;
        }
        else {
          ppuVar9 = &local_60;
        }
        if ((int)*ppuVar9 < 5) {
          if ((int)local_60 < -4) {
            ppuVar9 = &local_5c;
          }
          else {
            ppuVar9 = &local_60;
          }
        }
        else {
          ppuVar9 = local_50;
        }
        *(undefined1 *)(param_5 + uVar13) = *(undefined1 *)ppuVar9;
        *(bool *)(param_5 + uVar13 + 0x61) = iVar5 != 0;
      }
      uVar13 = uVar13 + 1;
    } while ((int)uVar13 < 0x61);
    return;
  }
  bVar2 = *(byte *)((int)param_4 + 0xf);
  iVar5 = fn_00145adc(param_3 + 0xe8);
  if (iVar5 == 0) {
    iVar5 = fn_00692304(param_1);
  }
  else {
    iVar5 = fn_0061be08(param_2);
    if (iVar5 == 0) {
      iVar5 = fn_0069242c(param_1);
    }
    else {
      iVar5 = fn_00692410();
    }
  }
  iVar12 = 0;
  local_50[0] = &LAB_006917d4;
  local_50[1] = &LAB_00691840;
  local_50[2] = &LAB_00691794;
  local_50[3] = &LAB_006917b4;
  puStack_40 = &LAB_006916c4;
  puStack_3c = &LAB_006916a4;
  puStack_38 = &LAB_00691820;
  puStack_34 = &LAB_00691774;
  do {
    if (iVar12 == iVar5) {
      local_5c = (undefined1 *)(*(code *)local_50[bVar2])((int)(short)iVar12);
      goto LAB_0062cedc;
    }
    iVar12 = iVar12 + 1;
  } while (iVar12 < 0x10);
  local_5c = (undefined1 *)0x64;
LAB_0062cedc:
  local_50[0] = (undefined1 *)0x64;
  apuStack_58[0] = (undefined1 *)0x0;
  ppuVar8 = (undefined1 **)0x0;
  if ((int)local_5c < 0) {
    ppuVar9 = apuStack_58;
  }
  if (local_5c < (undefined1 *)0x80000000) {
    ppuVar9 = &local_5c;
  }
  if ((int)*ppuVar9 < 0x65) {
    if ((int)local_5c < 0) {
      ppuVar8 = apuStack_58;
    }
    if (local_5c < (undefined1 *)0x80000000) {
      ppuVar8 = &local_5c;
    }
  }
  else {
    ppuVar8 = local_50;
  }
  local_5c = *ppuVar8;
  local_50[0] = (undefined1 *)0x7fffffff;
  if ((int)*ppuVar8 < 0) {
    ppuVar9 = apuStack_58;
  }
  else {
    ppuVar9 = &local_5c;
  }
  iVar5 = fn_00655488(*ppuVar9,100);
  iVar12 = 0;
  do {
    puVar10 = (undefined4 *)fn_006925d4(param_1,(int)(short)iVar12);
    uVar14 = *puVar10;
    sVar1 = (short)uVar14;
    iVar11 = fn_006914c4((int)sVar1);
    if (iVar11 != 0) {
      *(char *)(param_5 + sVar1) = (char)((uint)uVar14 >> 0x10);
      if (iVar5 != 0) {
        uVar4 = fn_006207d0((int)sVar1,param_2,param_3);
        *(undefined1 *)((int)sVar1 + param_5 + 0x61) = uVar4;
      }
    }
    iVar12 = iVar12 + 1;
  } while (iVar12 < 4);
  return;
}



/* WARNING: Removing unreachable block (ram,0x0062cbe8) */

void fn_0062c848(int param_1,int param_2,int param_3,undefined4 param_4,int *param_5,
                 undefined4 param_6)

{
  undefined1 uVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int local_3c [6];
  
  iVar4 = param_3 + param_2 * 0x418;
  iVar11 = iVar4 + -0x4080;
  iVar10 = 0;
  iVar5 = fn_001639e4(param_1);
  if (iVar5 == 0x39) goto switchD_0062c8e8_caseD_3c;
  if (iVar5 < 0x3a) {
    if (iVar5 == 0x2f) {
      uVar6 = fn_00691e30(param_1);
      sVar2 = fn_00176dc0(iVar11);
      sVar3 = fn_00691e14(param_1);
      local_3c[0] = fn_00300f74((int)sVar2 * (int)sVar3,uVar6);
      local_3c[0] = local_3c[0] + 1;
      local_3c[1] = fn_00176dc0(iVar11);
      piVar9 = local_3c;
      if (local_3c[1] < local_3c[0]) {
        piVar9 = local_3c + 1;
      }
      iVar10 = *piVar9;
      goto switchD_0062c8e8_caseD_3c;
    }
    if (iVar5 < 0x2f) {
      if (((iVar5 == 0x1a || iVar5 == 0x28) || iVar5 == 0x29) || (iVar5 != 0x2e))
      goto switchD_0062c8e8_caseD_3c;
    }
    else if (iVar5 != 0x30) {
      if ((iVar5 != 0x31) && (iVar5 == 0x37 && param_1 == 0x220)) {
        iVar10 = *(short *)(iVar4 + -0x4064) + -1;
      }
      goto switchD_0062c8e8_caseD_3c;
    }
switchD_0062c8e8_caseD_3d:
    uVar6 = fn_00691e14(param_1);
    uVar7 = fn_00691e30(param_1);
    iVar10 = fn_0063a510(uVar7,uVar6,param_6);
  }
  else {
    switch(iVar5) {
    case 0x3a:
      uVar1 = fn_00691af0(param_1,0);
      uVar6 = fn_00691af0(param_1,1);
      uVar7 = fn_00691af0(param_1,2);
      iVar10 = fn_0063a510(uVar6,uVar7,param_6);
      switch(uVar1) {
      case 0:
        iVar4 = (int)*(short *)(iVar4 + -0x4054);
        break;
      case 1:
        iVar4 = (int)*(short *)(iVar4 + -0x4052);
        break;
      case 2:
        iVar4 = (int)*(short *)(iVar4 + -0x4050);
        break;
      case 3:
        iVar4 = (int)*(short *)(iVar4 + -0x404e);
        break;
      case 4:
        iVar4 = (int)*(short *)(iVar4 + -0x404c);
        break;
      case 5:
        iVar4 = (int)*(short *)(iVar4 + -0x404a);
        break;
      default:
        iVar4 = 0;
      }
      iVar10 = (iVar4 * iVar10) / 100;
      break;
    case 0x3b:
      iVar10 = fn_0061be08(param_2);
      if ((iVar10 == 0) && (iVar10 = fn_00145adc(param_3 + 0xe8), iVar10 != 0)) {
        uVar6 = 2;
      }
      else {
        uVar6 = 0;
      }
      iVar10 = fn_00691af0(param_1,uVar6);
      iVar4 = fn_0063a510(0x5a,0x6e,param_6);
      iVar10 = (iVar4 * iVar10) / 100;
      break;
    case 0x3d:
      goto switchD_0062c8e8_caseD_3d;
    case 0x3f:
      sVar2 = fn_00691af0(param_1,0);
      uVar6 = fn_00691af0(param_1,1);
      uVar7 = fn_00691af0(param_1,2);
      uVar8 = fn_00691af0(param_1,3);
      sVar3 = fn_00176dc0(iVar11);
      iVar10 = fn_00300f74((int)sVar3 * (int)sVar2,uVar6);
      iVar4 = fn_0063a510(uVar7,uVar8,param_6);
      iVar10 = iVar10 + iVar4;
      break;
    case 0x40:
      sVar2 = fn_00691af0(param_1,0);
      uVar6 = fn_00691af0(param_1,1);
      uVar7 = fn_00691af0(param_1,2);
      uVar8 = fn_00691af0(param_1,3);
      sVar3 = fn_00176e70(iVar11);
      iVar10 = fn_00300f74((int)sVar3 * (int)sVar2,uVar6);
      iVar4 = fn_0063a510(uVar7,uVar8,param_6);
      iVar10 = iVar10 + iVar4;
      break;
    case 0x42:
      iVar10 = fn_00691af0(param_1,0);
    }
  }
switchD_0062c8e8_caseD_3c:
  iVar4 = fn_006924f4(param_1);
  if ((iVar4 != 0) || (iVar4 = fn_006925f4(param_1), iVar4 != 0)) {
    iVar10 = -iVar10;
  }
  local_3c[0] = iVar10;
  local_3c[2] = 9999;
  local_3c[1] = 0xffffd8f1;
  if (iVar10 < -9999) {
    piVar9 = local_3c + 1;
  }
  else {
    piVar9 = local_3c;
  }
  if (*piVar9 < 10000) {
    if (iVar10 < -9999) {
      piVar9 = local_3c + 1;
    }
    else {
      piVar9 = local_3c;
    }
  }
  else {
    piVar9 = local_3c + 2;
  }
  *param_5 = *piVar9;
  return;
}


