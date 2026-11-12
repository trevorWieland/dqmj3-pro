#include "00629d34_0062a40cb.h"



int fn_0062a40c(undefined4 param_1,int param_2)

{
  short sVar1;
  
  switch(*(undefined1 *)(param_2 + 4)) {
  default:
    return 0;
  case 1:
  case 3:
  case 4:
  case 5:
    return (int)*(short *)(param_2 + 0xc);
  case 2:
    sVar1 = fn_001746c0((int)*(short *)(param_2 + 0xc));
    return (int)sVar1;
  }
}



void fn_0062a2f0(int param_1,undefined4 param_2,char *param_3,int param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  fn_00629734();
  cVar1 = fn_001743e8(param_2);
  param_4 = param_4 + 0x180388;
  param_3[0x17c] = cVar1;
  fn_00624960(param_1);
  if (param_3[0xd4] == '\0') {
    fn_00629d34(param_1,param_3,param_4);
    iVar4 = (int)*param_3;
    if ((iVar4 - 0x10U < 8) &&
       (iVar2 = fn_006f44fc(param_4 + iVar4 * 0x418 + -0x4080,0x1a9), iVar2 != 0)) {
      fn_00655ec0(param_1 + 4,iVar4,0x1a9,2);
    }
  }
  iVar4 = fn_00621250(param_4);
  iVar4 = (int)((ulonglong)(uint)(iVar4 * 1000) * 0x28f5c29 >> 0x20);
  iVar2 = fn_0061be08((int)param_3[1]);
  if (*(char *)(param_1 + 0x18) != '\0') {
    iVar4 = (iVar4 * 0x78) / 100;
  }
  if (iVar2 != 1) {
    iVar3 = *(int *)(param_3 + 0x194);
  }
  else {
    iVar3 = *(int *)(param_3 + 0x198);
  }
  if (iVar2 != 1) {
    *(int *)(param_3 + 0x194) = iVar3 + iVar4;
  }
  else {
    *(int *)(param_3 + 0x198) = iVar3 + iVar4;
  }
  return;
}



undefined4 fn_0062a1cc(undefined4 param_1,char param_2,int param_3,int param_4,int param_5)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  short *psVar6;
  bool bVar7;
  bool bVar8;
  undefined4 local_28;
  
  iVar5 = param_3 + 0x180388 + param_2 * 0x418;
  psVar6 = (short *)(iVar5 + -0x4080);
  local_28 = 0;
  iVar4 = fn_006f0934(param_3 + 0x180388,(int)param_2);
  if (iVar4 == 0) {
    if (0 < *psVar6) {
      cVar1 = *(char *)(iVar5 + -0x4019);
      bVar7 = cVar1 == '\0';
      if (bVar7) {
        cVar1 = *(char *)(iVar5 + -0x400a);
      }
      bVar8 = bVar7 && cVar1 == '\0';
      if (bVar7 && cVar1 == '\0') {
        bVar8 = *(char *)(iVar5 + -0x4018) == '\0';
      }
      if (bVar8) {
        iVar4 = 1;
LAB_0062a2dc:
        iVar4 = iVar4 + 1;
        if (iVar4 < 0x61) {
          while ((iVar4 == 0x42 && (iVar2 = fn_0068fbdc(0x42), iVar2 == param_4))) {
            if ('\0' < *(char *)(iVar5 + -0x3f82)) {
              *(char *)(iVar5 + -0x3f82) = *(char *)(iVar5 + -0x3f82) + -1;
            }
            if ((*(char *)(iVar5 + -0x3f82) != '\0') || (*(char *)(iVar5 + -0x3fe3) == '\0')) break;
            *(undefined1 *)(iVar5 + -0x3fe3) = 0;
            *(undefined1 *)(iVar5 + -0x3f82) = 0;
            if (param_5 != 0) {
              *(undefined1 *)(param_5 + 0x42) = 1;
              local_28 = 1;
            }
            iVar4 = 0x44;
          }
          goto LAB_0062a2dc;
        }
      }
    }
    return local_28;
  }
  local_28 = 0;
  uVar3 = 0;
  if (psVar6 != (short *)0x0) {
    if ((0 < *psVar6) && (*(char *)(iVar5 + -0x4019) == '\0')) {
      cVar1 = *(char *)(iVar5 + -0x400a);
      bVar7 = cVar1 == '\0';
      if (bVar7) {
        cVar1 = *(char *)(iVar5 + -0x4018);
      }
      if (bVar7 && cVar1 == '\0') {
        iVar4 = 1;
LAB_0062a1b8:
        iVar4 = iVar4 + 1;
        if (iVar4 < 0x61) {
          while ((iVar4 == 0x42 && (iVar2 = fn_0068fbdc(0x42), iVar2 == param_4))) {
            if ('\0' < *(char *)(iVar5 + -0x3f82)) {
              *(char *)(iVar5 + -0x3f82) = *(char *)(iVar5 + -0x3f82) + -1;
            }
            if ((*(char *)(iVar5 + -0x3f82) != '\0') || (*(char *)(iVar5 + -0x3fe3) == '\0')) break;
            *(undefined1 *)(iVar5 + -0x3fe3) = 0;
            *(undefined1 *)(iVar5 + -0x3f82) = 0;
            if (param_5 != 0) {
              *(undefined1 *)(param_5 + 0x42) = 1;
              local_28 = 1;
            }
            iVar4 = 0x44;
          }
          goto LAB_0062a1b8;
        }
      }
    }
    uVar3 = local_28;
  }
  return uVar3;
}


