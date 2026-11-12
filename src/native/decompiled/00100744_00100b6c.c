#include "00100744_00100b6c.h"



undefined4 fn_00100b6c(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int local_18;
  int local_14;
  
  local_14 = param_1;
  if (param_2 != 0) {
    local_14 = param_1 + param_2 + -1;
  }
  local_18 = param_1;
  uVar1 = fn_002fecb6(param_3,&local_18,param_4,&LAB_0010118c_1);
  if (param_2 != 0) {
    fn_002fecdc(0,&local_18);
  }
  return uVar1;
}



void fn_00100b50(void)

{
  fn_00100b58();
  return;
}



int fn_00100a66(undefined4 param_1,undefined4 param_2,undefined4 *param_3,int param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 *local_30;
  
  local_30 = (undefined1 *)0x0;
  uVar1 = param_3[1];
  iVar5 = 0;
  iVar6 = param_3[2];
  iVar2 = (*(code *)param_3[6])(param_2);
  if (param_4 == 0 && param_5 == 0) {
    while (iVar4 = (*(code *)param_3[8])(iVar2), iVar4 != 0) {
      iVar5 = iVar5 + 1;
      iVar2 = (*(code *)param_3[6])(param_2);
    }
  }
  if (iVar2 == -1) {
    iVar5 = -1;
  }
  else {
    if ((uVar1 & 1) == 0) {
      puVar3 = (undefined4 *)*param_3;
      *param_3 = puVar3 + 1;
      local_30 = (undefined1 *)*puVar3;
    }
    while ((0 < iVar6 && (iVar2 != -1))) {
      if (param_4 == 0) {
        if ((param_5 == 0) && (iVar4 = (*(code *)param_3[8])(iVar2), iVar4 != 0)) break;
      }
      else if ((*(uint *)(((int)(((uint)(iVar2 >> 0x1f) >> 0x1b) + iVar2) >> 5) * 4 + param_4) &
               1 << (iVar2 % 0x20 & 0xffU)) == 0) break;
      if ((uVar1 & 1) == 0) {
        *local_30 = (char)iVar2;
        local_30 = local_30 + 1;
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + -1;
      iVar2 = (*(code *)param_3[6])(param_2);
    }
    (*(code *)param_3[7])(param_2);
    if (((param_5 == 0) && (0 < iVar5)) && ((uVar1 & 1) == 0)) {
      *local_30 = 0;
    }
    if (((int)param_3[2] <= iVar6) || ((param_5 != 0 && (iVar6 != 0)))) {
      iVar5 = -2;
    }
  }
  return iVar5;
}



int fn_0010091c(undefined4 param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_30;
  int local_2c;
  int local_1c;
  
  uVar5 = param_4[1];
  local_2c = 0;
  iVar7 = param_4[2];
  iVar9 = -1;
  do {
    iVar8 = iVar9;
    iVar9 = iVar8 + 1;
    local_30 = (*(code *)param_4[6])(param_2);
    iVar1 = (*(code *)param_4[8])();
  } while (iVar1 != 0);
  if (local_30 == -1) {
    return -1;
  }
  uVar6 = uVar5 & 0xfffff9ff;
  iVar1 = iVar7;
  iVar2 = iVar9;
  local_1c = param_3;
  if (iVar7 < 1) {
LAB_00100984:
    uVar5 = uVar6;
    if (param_3 != 0) goto LAB_001009f8;
    local_1c = 10;
  }
  else {
    if ((int)(uVar5 << 0x19) < 0) {
      if (local_30 != 0x2b) {
        if (local_30 != 0x2d) goto LAB_0010097e;
        uVar6 = uVar6 | 0x400;
      }
      iVar9 = iVar8 + 2;
      local_30 = (*(code *)param_4[6])(param_2);
      iVar7 = iVar7 + -1;
      iVar1 = iVar7;
      iVar2 = iVar9;
      if (iVar7 < 1) goto LAB_00100984;
    }
LAB_0010097e:
    iVar1 = iVar7;
    iVar2 = iVar9;
    if (local_30 != 0x30) goto LAB_00100984;
    uVar5 = uVar6 | 0x200;
    iVar1 = iVar7 + -1;
    iVar2 = iVar9 + 1;
    local_30 = (*(code *)param_4[6])(param_2);
    if ((iVar1 < 1) || ((local_30 != 0x78 && (local_30 != 0x58)))) {
      if (param_3 != 0) goto LAB_001009f8;
      local_1c = 8;
      uVar6 = uVar5;
    }
    else {
      if ((param_3 != 0) && (param_3 != 0x10)) goto LAB_001009f8;
      iVar1 = iVar7 + -2;
      iVar2 = iVar9 + 2;
      local_30 = (*(code *)param_4[6])(param_2);
      local_1c = 0x10;
    }
  }
  uVar5 = uVar6;
LAB_001009f8:
  while ((0 < iVar1 && (iVar9 = fn_002ff284(local_30,local_1c), -1 < iVar9))) {
    iVar1 = iVar1 + -1;
    local_2c = local_1c * local_2c + iVar9;
    iVar2 = iVar2 + 1;
    local_30 = (*(code *)param_4[6])(param_2);
    uVar5 = uVar5 | 0x200;
  }
  (*(code *)param_4[7])(param_2);
  if ((int)(uVar5 << 0x16) < 0) {
    if ((uVar5 & 1) == 0) {
      if ((int)(uVar5 << 0x19) < 0) {
        if ((int)(uVar5 << 0x15) < 0) {
          local_2c = -local_2c;
        }
        puVar3 = (undefined4 *)*param_4;
        *param_4 = puVar3 + 1;
        piVar4 = (int *)*puVar3;
        if ((int)(uVar5 << 0x14) < 0) {
          *(char *)piVar4 = (char)local_2c;
        }
        else if ((int)(uVar5 << 0x1c) < 0) {
          *(short *)piVar4 = (short)local_2c;
        }
        else {
          *piVar4 = local_2c;
        }
      }
      else {
        puVar3 = (undefined4 *)*param_4;
        *param_4 = puVar3 + 1;
        piVar4 = (int *)*puVar3;
        if ((int)(uVar5 << 0x14) < 0) {
          *(char *)piVar4 = (char)local_2c;
        }
        else if ((int)(uVar5 << 0x1c) < 0) {
          *(short *)piVar4 = (short)local_2c;
        }
        else {
          *piVar4 = local_2c;
        }
      }
    }
  }
  else {
    iVar2 = -2;
  }
  return iVar2;
}



int * fn_001008cc(int *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = fn_002febd8(param_2);
  if (iVar1 != 0) {
    piVar2 = (int *)fn_002ff19c(param_1,0,*(undefined4 *)(*param_1 + -4),param_2,iVar1);
    return piVar2;
  }
  if (*(int *)(*param_1 + -0xc) == 0) {
    *(undefined4 *)(*param_1 + -4) = 0;
    *(undefined1 *)*param_1 = 0;
  }
  else {
    fn_002ff1b4(param_1);
    *param_1 = (int)&DAT_008f9d04;
  }
  return param_1;
}



void fn_001008c4(void)

{
  fn_002feef8();
  return;
}



void fn_001007b8(undefined4 param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined4 unaff_r4;
  int *piVar11;
  undefined4 in_lr;
  
  iVar1 = (int)(param_2[1] - *param_2) >> 2;
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    iVar3 = *(int *)(*param_2 + iVar1 * 4);
    iVar9 = *(int *)(iVar3 + 4);
    if (iVar9 != 0) {
      iVar6 = *(int *)(iVar9 + 0xc);
      iVar7 = 0;
      if (iVar6 == iVar3) {
        *(undefined4 *)(iVar9 + 0xc) = *(undefined4 *)(iVar3 + 8);
      }
      else {
        iVar7 = iVar6;
        for (iVar6 = *(int *)(iVar6 + 8); iVar6 != iVar3; iVar6 = *(int *)(iVar6 + 8)) {
          iVar7 = iVar6;
        }
        *(undefined4 *)(iVar7 + 8) = *(undefined4 *)(iVar3 + 8);
      }
      if (*(int *)(iVar9 + 0x10) == iVar3) {
        *(int *)(iVar9 + 0x10) = iVar7;
      }
      *(undefined4 *)(iVar3 + 8) = 0;
      *(undefined4 *)(iVar3 + 4) = 0;
    }
    piVar11 = (int *)(*param_2 + iVar1 * 4);
    piVar4 = (int *)*piVar11;
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))();
    }
    *piVar11 = 0;
  }
  uVar5 = *param_2;
  *param_2 = 0;
  uVar8 = param_2[1];
  param_2[1] = 0;
  uVar10 = param_2[2];
  param_2[2] = 0;
  uVar2 = uVar5;
  if (uVar8 <= uVar5) {
    for (; uVar2 != uVar8; uVar2 = uVar2 + 4) {
    }
  }
  fn_002feef8(uVar5,(int)(uVar10 - uVar5) >> 2,0,uVar10,unaff_r4,in_lr);
  return;
}



undefined4 fn_0010075e(int param_1)

{
  if ((((((param_1 - 9U < 5) || (param_1 == 0x20)) || (param_1 == 0xa0)) ||
       ((param_1 == 0x1680 || (param_1 == 0x180e)))) ||
      ((param_1 - 0x2000U < 0xb || ((param_1 == 0x2028 || (param_1 == 0x2029)))))) ||
     ((param_1 == 0x202f || ((param_1 == 0x205f || (param_1 == 0x3000)))))) {
    return 1;
  }
  return 0;
}



char * fn_00100744(char *param_1,char param_2)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = (char *)0x0;
  do {
    cVar1 = *param_1;
    if (cVar1 == param_2) {
      pcVar2 = param_1;
    }
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  return pcVar2;
}


