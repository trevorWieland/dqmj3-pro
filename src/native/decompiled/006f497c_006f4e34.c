#include "006f497c_006f4e34.h"



int fn_006f4e34(int *param_1,undefined4 param_2,code *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*param_1 != 0) {
    iVar4 = *param_1 + -1;
    iVar3 = 0;
    if (0 < iVar4) {
      do {
        iVar1 = (iVar3 + iVar4) / 2;
        iVar2 = (*param_3)(*(undefined4 *)(param_1[2] + iVar1 * 4),param_2);
        if (0 < iVar2) {
          iVar4 = iVar1;
        }
        if (iVar2 < 0) {
          iVar3 = iVar1 + 1;
        }
        if (iVar2 == 0) {
          return iVar1;
        }
      } while (iVar3 < iVar4);
    }
    iVar4 = (*param_3)(*(undefined4 *)(param_1[2] + iVar3 * 4),param_2);
    if (iVar4 == 0) {
      return iVar3;
    }
  }
  return -1;
}



int fn_006f4d74(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (uint)*(char *)(param_1 + 0x16);
  if ((int)uVar3 < 1) {
    uVar1 = 0;
  }
  else {
    uVar1 = uVar3 & 1;
    iVar2 = 0;
    if (uVar1 != 0) {
      do {
        if (*(short *)(param_1 + iVar2 * 0xe + 0x18) == param_2) {
          return param_1 + iVar2 * 0xe + 0x18;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)uVar1);
    }
  }
  while( true ) {
    if ((int)uVar3 <= (int)uVar1) {
      return 0;
    }
    iVar2 = param_1 + uVar1 * 0xe;
    if (*(short *)(iVar2 + 0x18) == param_2) break;
    if (*(short *)(iVar2 + 0x26) == param_2) {
      return param_1 + uVar1 * 0xe + 0x26;
    }
    uVar1 = uVar1 + 2;
  }
  return param_1 + uVar1 * 0xe + 0x18;
}



int fn_006f4d64(int param_1,int param_2)

{
  char cVar1;
  
  if (param_2 == 0) {
    cVar1 = *(char *)(param_1 + 0x13);
  }
  else {
    cVar1 = *(char *)(param_1 + 0x12);
  }
  return (int)cVar1;
}



int fn_006f4c1c(int param_1,int param_2,int param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int unaff_r6;
  int local_40 [3];
  int local_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  
  piVar4 = local_40;
  local_40[0] = *param_5;
  local_34 = param_1;
  iStack_30 = param_2;
  iStack_2c = param_3;
  iStack_28 = param_4;
  local_40[1] = fn_00176dc0(param_2);
  local_40[1] = -local_40[1];
  local_40[2] = fn_00176dc0(param_2);
  if (local_40[2] < local_40[1]) {
                    /* WARNING: Subroutine does not return */
    fn_00146590();
  }
  if (local_40[0] < local_40[1]) {
    piVar4 = local_40 + 1;
  }
  if (local_40[2] < *piVar4) {
    piVar4 = local_40 + 2;
  }
  iVar1 = *piVar4;
  *param_5 = iVar1;
  fn_00174610(param_2,(int)(short)-(short)iVar1);
  iVar1 = local_34;
  iVar5 = local_34 + 4;
  if (*(char *)(param_2 + 0x414) != '\0') {
    iVar2 = fn_0061be08((int)*(char *)(param_3 + 1));
    if (iVar2 == 0) {
      iVar6 = 0x21;
      unaff_r6 = 0x23;
    }
    else {
      iVar6 = 0x20;
    }
    iVar3 = param_4 + iVar6 * 8;
    if (iVar2 != 0) {
      unaff_r6 = 0x22;
    }
    iVar2 = param_4 + unaff_r6 * 8;
    *(undefined1 *)(iVar3 + 0x4183) = 0;
    *(undefined1 *)(iVar3 + 0x4182) = *(undefined1 *)(param_3 + 1);
    fn_0017419c(param_2,1);
    *(undefined1 *)(iVar2 + 0x4183) = 0;
    *(undefined1 *)(iVar2 + 0x4182) = *(undefined1 *)(param_3 + 1);
    fn_00174398(param_2,1);
    *(undefined1 *)(iVar5 + iVar6 + -4) = *(undefined1 *)(param_3 + 1);
    *(undefined1 *)(iVar5 + unaff_r6 + -4) = *(undefined1 *)(param_3 + 1);
  }
  fn_00629f94(local_34,param_3,param_4);
  fn_0061be08((int)*(char *)(param_3 + 1));
  return (int)*(char *)(iVar1 + 0x18);
}



int fn_006f4c08(int param_1)

{
  return param_1 + *(int *)(param_1 + 0x6c) * 3 + 0x50;
}



undefined4 fn_006f4ba8(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  uVar1 = *(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x44) >> 2;
  if (uVar1 != 0) {
    do {
      if (*(short *)(*(int *)(param_1 + 0x44) + uVar2 * 4) == param_2) {
        if (*(char *)(*(int *)(param_1 + 0x44) + uVar2 * 4 + 2) == param_3) {
          return 1;
        }
        return 0;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  return 1;
}



int fn_006f4b80(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x6c) < *(int *)(param_1 + 0x68) + -1) {
    iVar1 = param_1 + *(int *)(param_1 + 0x6c) * 3 + 0x53;
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}



void fn_006f4ac4(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  iVar6 = 0;
  iVar3 = (int)*(char *)(*(int *)(param_1 + 0x6c) * 3 + param_1 + 0x50);
  while( true ) {
    iVar2 = *(int *)(param_1 + 0x6c) + iVar6;
    if (*(int *)(param_1 + 0x68) <= iVar2) {
      return;
    }
    iVar2 = iVar2 * 3 + param_1;
    if (*(char *)(iVar2 + 0x51) == '\0') break;
    cVar1 = *(char *)(iVar2 + 0x50);
    iVar2 = (int)cVar1;
    uVar4 = iVar2 - 0x10;
    bVar7 = uVar4 < 4;
    if (!bVar7) {
      uVar4 = iVar2 - 0x18;
    }
    if ((bVar7 || uVar4 < 4) || (iVar2 == 0x20 || iVar2 == 0x22)) {
      iVar2 = 1;
    }
    else {
      iVar2 = 0;
    }
    if ((iVar3 - 0x10U < 4 || iVar3 - 0x18U < 4) || (iVar3 == 0x20 || iVar3 == 0x22)) {
      iVar5 = 1;
    }
    else {
      iVar5 = 0;
    }
    if (iVar2 != iVar5) {
      return;
    }
    *(char *)(param_2 + iVar6) = cVar1;
    iVar6 = iVar6 + 1;
    if (3 < iVar6) {
      return;
    }
  }
  return;
}



int fn_006f4ab4(int param_1,int param_2)

{
  char cVar1;
  
  if (param_2 == 0) {
    cVar1 = *(char *)(param_1 + 0x11);
  }
  else {
    cVar1 = *(char *)(param_1 + 0x10);
  }
  return (int)cVar1;
}



bool fn_006f4a98(int param_1)

{
  return *(int *)(param_1 + 0x68) + -1 <= *(int *)(param_1 + 0x6c);
}



undefined1 fn_006f4a50(int param_1,int param_2)

{
  int iVar1;
  undefined1 uVar2;
  
  uVar2 = 0;
  if (*(char *)(param_1 + param_2) != '\0') {
    iVar1 = fn_0068f87c(param_2);
    uVar2 = iVar1 == 1;
    if ((!(bool)uVar2) && (iVar1 == 3)) {
      uVar2 = 2;
    }
  }
  return uVar2;
}



uint fn_006f497c(byte *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  
  uVar2 = (uint)*param_1;
  if (uVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = uVar2 & 1;
    uVar3 = 0;
    if ((*param_1 & 1) != 0) {
      do {
        if (*(short *)(param_1 + uVar3 * 2 + 4) == param_2) goto LAB_006f49f4;
        uVar3 = (uint)(short)((short)uVar3 + 1);
      } while ((int)uVar3 < (int)uVar1);
    }
  }
  if (uVar1 < uVar2) {
    do {
      uVar3 = uVar1;
      if (*(short *)(param_1 + uVar1 * 2 + 4) == param_2) {
LAB_006f49f4:
        if ((int)uVar3 < 0) {
          return 0xffffffff;
        }
        uVar2 = *(uint *)(param_1 + ((int)uVar3 >> 6) * 8 + 0x150);
        uVar1 = *(uint *)(param_1 + ((int)uVar3 >> 6) * 8 + 0x154);
        uVar4 = fn_00301bb0(1,0,uVar3 & 0x3f);
        if (((uint)uVar4 & uVar2) == 0 && ((uint)((ulonglong)uVar4 >> 0x20) & uVar1) == 0) {
          return 0xffffffff;
        }
        return uVar3;
      }
      if (*(short *)(param_1 + uVar1 * 2 + 6) == param_2) {
        uVar3 = (uint)(short)((short)uVar1 + 1);
        goto LAB_006f49f4;
      }
      uVar1 = (uint)(short)((short)uVar1 + 2);
    } while ((int)uVar1 < (int)uVar2);
  }
  return 0xffffffff;
}


