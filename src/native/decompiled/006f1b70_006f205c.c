#include "006f1b70_006f205c.h"



void fn_006f205c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  fn_006f1a78(param_1,param_4,(int)*(char *)(param_1 + 4),param_3,0,1);
  return;
}



undefined4 fn_006f202c(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_006f34b4(param_2);
  if ((iVar1 == 0) && (*(char *)(param_2 + 0x7d) < '\x01')) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



int fn_006f1ff8(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_0061be08((int)*(char *)(param_1 + 4));
  if (iVar1 == 0) {
    iVar1 = 0x23;
  }
  else {
    iVar1 = 0x22;
  }
  iVar2 = *(int *)(param_1 + 8) + iVar1 * 8;
  iVar1 = 0;
  if (iVar2 != -0x4180) {
    iVar1 = (int)*(char *)(iVar2 + 0x4182);
  }
  return iVar1;
}



undefined4 fn_006f1f6c(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = fn_00691d78(param_2);
  iVar2 = fn_001639e4(param_2);
  if (iVar2 == 0x18) {
    iVar1 = fn_00691af0(param_2,0);
  }
  if (0x2ba < iVar1 - 1U) {
    iVar1 = param_2;
  }
  iVar1 = fn_00691a0c(iVar1,param_3);
  if ((iVar1 == 0) || (iVar1 = fn_006f44fc(*(undefined4 *)(param_1 + 0xc),param_4), iVar1 == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}



undefined4 fn_006f1f18(int param_1,int param_2,int param_3)

{
  short *psVar1;
  
  if (param_2 < param_3) {
    do {
      psVar1 = (short *)(*(int *)(param_1 + 0x14) + param_2 * 6 + -0x60);
      if ((psVar1 != (short *)0x0) && ((int)*psVar1 - 1U < 699)) {
        return 1;
      }
      param_2 = (int)(char)((char)param_2 + '\x01');
    } while (param_2 < param_3);
  }
  return 0;
}



int fn_006f1e88(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int extraout_r1;
  int iVar3;
  int iVar4;
  char local_10 [4];
  
  iVar4 = 0;
  local_10[0] = '\0';
  local_10[1] = '\0';
  local_10[2] = '\0';
  local_10[3] = '\0';
  if (param_2 < param_3) {
    iVar3 = *(int *)(param_1 + 8);
    do {
      iVar1 = iVar3 + param_2 * 0x418;
      if ((0 < *(short *)(iVar1 + -0x4080)) && (*(char *)(iVar1 + -0x4019) == '\0')) {
        local_10[iVar4] = (char)param_2;
        iVar4 = (int)(char)((char)iVar4 + '\x01');
      }
      param_2 = (int)(char)((char)param_2 + '\x01');
    } while (param_2 < param_3);
    if (iVar4 != 0) {
      uVar2 = fn_0063a5a4();
      fn_00169f1c(uVar2,iVar4);
      return (int)local_10[extraout_r1];
    }
  }
  return 0;
}



uint fn_006f1d3c(int param_1,uint param_2)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  undefined8 uVar8;
  
  iVar4 = 0x10;
  iVar5 = 0;
  iVar6 = 0x7fffffff;
  do {
    cVar1 = (char)iVar4;
    if (*(char *)(*(int *)(param_1 + 8) + 0xfb) != '\0') {
      uVar3 = iVar4 - 0x10;
      if (uVar3 >= 8) {
        param_2 = iVar4 - 0x18;
      }
      if (uVar3 < 8 || param_2 < 8) {
        bVar7 = uVar3 < 4;
        if (!bVar7) {
          uVar3 = iVar4 - 0x18;
        }
        if ((bVar7 || uVar3 < 4) || (iVar4 == 0x20 || iVar4 == 0x22)) {
          cVar2 = cVar1 + '\x04';
        }
        else {
          cVar2 = cVar1 + -4;
        }
        iVar4 = (int)cVar2;
      }
      else if (iVar4 - 0x20U < 2) {
        if (iVar4 == 0x20 || iVar4 == 0x22) {
          iVar4 = 0x21;
        }
        else {
          iVar4 = 0x20;
        }
      }
      else if (iVar4 - 0x22U < 2) {
        if (iVar4 == 0x20 || iVar4 == 0x22) {
          iVar4 = 0x23;
        }
        else {
          iVar4 = 0x22;
        }
      }
      else {
        iVar4 = 0;
      }
    }
    uVar8 = fn_006f14a4(param_1,iVar4);
    param_2 = (uint)((ulonglong)uVar8 >> 0x20);
    if ((int)uVar8 != 0) {
      uVar8 = fn_00620b48(iVar4,*(undefined4 *)(param_1 + 8),1);
      param_2 = (uint)((ulonglong)uVar8 >> 0x20);
      if ((int)uVar8 < iVar6) {
        iVar5 = iVar4;
        iVar6 = (int)uVar8;
      }
    }
    iVar4 = (int)(char)(cVar1 + '\x01');
  } while (iVar4 < 0x18);
  if (*(char *)(param_1 + 4) == 0 || iVar5 == 0) {
    uVar3 = 0;
  }
  else {
    iVar6 = fn_0061be08((int)*(char *)(param_1 + 4));
    if (iVar6 == 0) {
      uVar3 = fn_0061be08(iVar5);
      return uVar3 ^ 1;
    }
    uVar3 = fn_0061be08(iVar5);
  }
  return uVar3;
}



int fn_006f1be0(int param_1,uint param_2,int param_3,int param_4,uint param_5,undefined4 *param_6)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  ushort *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  
  fn_006f14ec(param_1,param_3,param_3,param_4,param_4);
  uVar7 = param_5 & 0xf | (param_2 & 0xfff) << 4;
  iVar6 = (int)(char)((char)param_3 + -0x10);
  iVar8 = (int)(char)((char)param_4 + -0x10);
  iVar1 = 0;
  uVar3 = (uint)*(byte *)(*(int *)(param_1 + 0x20) + iVar6 * 0x10 + iVar8);
  if (uVar3 != 0) {
    do {
      iVar4 = *(int *)(param_1 + 0x20) + iVar6 * 0x3600 + iVar8 * 0x360 + iVar1 * 8;
      puVar5 = (ushort *)(iVar4 + 0x100);
      if (*puVar5 == uVar7) {
        if (puVar5 != (ushort *)0x0) {
          iVar1 = *(int *)(iVar4 + 0x104);
          goto LAB_006f1c74;
        }
        break;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)uVar3);
  }
  iVar1 = fn_006f0d48(param_1,param_2,param_3,param_4,param_5);
  iVar8 = *(int *)(param_1 + 0x20) + param_3 * 0x10 + param_4;
  iVar6 = *(int *)(param_1 + 0x20) + param_3 * 0x3600 + param_4 * 0x360 +
          (uint)*(byte *)(iVar8 + -0x110) * 8;
  *(uint *)(iVar6 + -0x39500) = param_2 & 0xffff0000 | uVar7;
  *(int *)(iVar6 + -0x394fc) = iVar1;
  *(char *)(iVar8 + -0x110) = *(char *)(iVar8 + -0x110) + '\x01';
LAB_006f1c74:
  if (param_6 != (undefined4 *)0x0) {
    iVar6 = fn_006f14a4(param_1,param_4);
    if ((iVar6 == 0) || (iVar1 < *(short *)(iVar6 + 0x1c))) {
      *param_6 = 0;
    }
    else {
      uVar2 = fn_001cab7c((int)*(char *)(iVar6 + 0x59));
      *param_6 = uVar2;
    }
  }
  return iVar1;
}



int fn_006f1b70(int param_1)

{
  int iVar1;
  int iVar2;
  
  if ((int)*(char *)(param_1 + 4) - 0x22U < 2) {
    iVar1 = fn_0061be08();
    if (iVar1 == 0) {
      iVar1 = 0x23;
    }
    else {
      iVar1 = 0x22;
    }
    iVar1 = *(int *)(param_1 + 8) + iVar1 * 8;
  }
  else {
    iVar1 = fn_0061be08();
    if (iVar1 == 0) {
      iVar1 = 0x21;
    }
    else {
      iVar1 = 0x20;
    }
    iVar1 = *(int *)(param_1 + 8) + iVar1 * 8;
  }
  iVar2 = 0;
  if (iVar1 != -0x4180) {
    iVar2 = (int)*(char *)(iVar1 + 0x4182);
  }
  return iVar2;
}


