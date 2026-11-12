#include "0077eaf0_0077f9bc.h"



int fn_0077f9bc(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = fn_006ba284();
  iVar2 = fn_006ba274(param_1);
  uVar3 = iVar1 * iVar2 + param_2;
  if (((int)uVar3 < 0) ||
     ((uint)(*(int *)(param_1 + 0xf4) - *(int *)(param_1 + 0xf0) >> 4) <= uVar3)) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0xf0) + uVar3 * 0x10;
  }
  return iVar1;
}



int fn_0077f968(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_006ba284();
  iVar2 = fn_006ba274(param_1);
  return iVar1 * iVar2 + param_2;
}



undefined4 fn_0077f7d0(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_001296d0(DAT_00898840);
  if ((((iVar1 == 0) && (*(char *)(DAT_00898840 + 0x4e) == '\0')) &&
      (iVar1 = fn_0066e3d8(DAT_00898840), iVar1 == 0)) &&
     (iVar1 = fn_0066e17c(DAT_00898840), iVar1 != 0)) {
    uVar2 = (**(code **)*param_1)(param_1);
    iVar1 = fn_0066e510(DAT_00897850,uVar2);
    if (iVar1 != 0) {
      uVar2 = (**(code **)*param_1)(param_1);
      iVar1 = fn_006b6530(param_1[2],param_2,uVar2);
      if (iVar1 != 0) {
        uVar2 = (**(code **)(*param_1 + 4))(param_1);
        iVar1 = fn_006b6530(param_1[2],param_2,uVar2);
        if (iVar1 != 0) {
          return 1;
        }
      }
    }
  }
  return 0;
}



undefined4 fn_0077f778(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_001296d0(DAT_00898840);
  if ((((iVar1 == 0) && (*(char *)(DAT_00898840 + 0x4e) == '\0')) &&
      (iVar1 = fn_0066e3d8(DAT_00898840), iVar1 == 0)) &&
     (iVar1 = fn_0066e17c(DAT_00898840), iVar1 != 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



undefined4 fn_0077f664(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_001296d0(DAT_00898840);
  if ((((iVar1 == 0) && (*(char *)(DAT_00898840 + 0x4e) == '\0')) &&
      (iVar1 = fn_0066e3d8(DAT_00898840), iVar1 == 0)) &&
     (iVar1 = fn_0066e17c(DAT_00898840), iVar1 != 0)) {
    uVar2 = (**(code **)*param_1)(param_1);
    iVar1 = fn_0066e510(DAT_00897850,uVar2);
    if (iVar1 != 0) {
      uVar2 = (**(code **)*param_1)(param_1);
      iVar1 = fn_006b6530(param_1[2],param_2,uVar2);
      if (iVar1 != 0) {
        uVar2 = (**(code **)(*param_1 + 4))(param_1);
        iVar1 = fn_006b6530(param_1[2],param_2,uVar2);
        if (iVar1 != 0) {
          return 1;
        }
      }
    }
  }
  return 0;
}



undefined4 fn_0077f550(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_001296d0(DAT_00898840);
  if ((((iVar1 == 0) && (*(char *)(DAT_00898840 + 0x4e) == '\0')) &&
      (iVar1 = fn_0066e3d8(DAT_00898840), iVar1 == 0)) &&
     (iVar1 = fn_0066e17c(DAT_00898840), iVar1 != 0)) {
    uVar2 = (**(code **)*param_1)(param_1);
    iVar1 = fn_0066e510(DAT_00897850,uVar2);
    if (iVar1 != 0) {
      uVar2 = (**(code **)*param_1)(param_1);
      iVar1 = fn_006b6530(param_1[2],param_2,uVar2);
      if (iVar1 != 0) {
        uVar2 = (**(code **)(*param_1 + 4))(param_1);
        iVar1 = fn_006b6530(param_1[2],param_2,uVar2);
        if (iVar1 != 0) {
          return 1;
        }
      }
    }
  }
  return 0;
}



undefined4 fn_0077f4ac(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_001296d0(DAT_00898840);
  if ((((iVar1 == 0) && (*(char *)(DAT_00898840 + 0x4e) == '\0')) &&
      (iVar1 = fn_0066e3d8(DAT_00898840), iVar1 == 0)) &&
     ((iVar1 = fn_0066e17c(DAT_00898840), iVar1 != 0 &&
      (iVar1 = fn_0066e510(DAT_00897850,param_3), iVar1 != 0)))) {
    uVar2 = (**(code **)*param_1)(param_1);
    uVar2 = fn_006b6530(param_1[2],param_2,uVar2);
    return uVar2;
  }
  return 0;
}



int * fn_0077f3f8(int *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  
  if (param_1[2] != 0) {
    uVar3 = 0;
    if (param_1[1] != 0) {
      do {
        puVar1 = (uint *)(*param_1 + uVar3 * 8);
        if ((*puVar1 & 0x8000000) != 0) {
          iVar2 = *(int *)(puVar1[1] + 4) + -1;
          *(int *)(puVar1[1] + 4) = iVar2;
          if (iVar2 == 0) {
            (**(code **)(*(int *)puVar1[1] + 8))();
          }
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < (uint)param_1[1]);
    }
    fn_0019d680(*param_1,param_1[2] << 3);
  }
  return param_1;
}



void fn_0077f348(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = &DAT_0085a070;
  uVar1 = param_1[1];
  uVar2 = uVar1;
  if ((uint)param_1[2] < uVar1) {
    do {
      uVar2 = uVar2 + 4;
    } while (uVar2 != param_1[2]);
  }
  fn_001008c4(uVar1,(int)(param_1[3] - uVar1) >> 2,0);
  fn_002feef8(param_1);
  return;
}



void fn_0077f2c4(int param_1,undefined4 param_2)

{
  int iVar1;
  int local_28 [4];
  undefined4 local_18;
  undefined1 *local_14;
  undefined *local_10;
  undefined1 *local_c;
  
  local_18 = 4;
  local_14 = &LAB_0074a1b0;
  local_10 = &DAT_0074a290;
  local_c = &LAB_0074a270;
  local_28[0] = param_1;
  iVar1 = fn_0014e2f4(param_1 + 4,&local_18,&LAB_0077f2b8,local_28,param_1 + 0x10010,param_2,
                       0xfffffffe,0);
  if (iVar1 < 0) {
    fn_0015e294();
  }
  return;
}



int * fn_0077f1f8(int param_1,uint param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  
  if ((int)param_2 < 1) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_2 & 1;
    uVar3 = 0;
    if (uVar2 != 0) {
      do {
        if (*(int *)(param_1 + uVar3 * 0xf0) == 0) goto LAB_0077f278;
        uVar3 = uVar3 + 1;
      } while ((int)uVar3 < (int)uVar2);
    }
  }
  while( true ) {
    uVar3 = uVar2;
    if ((int)param_2 <= (int)uVar3) {
      return (int *)0x0;
    }
    piVar4 = (int *)(param_1 + uVar3 * 0xf0);
    if (*piVar4 == 0) goto LAB_0077f278;
    if (piVar4[0x3c] == 0) break;
    uVar2 = uVar3 + 2;
  }
  piVar4 = (int *)(param_1 + uVar3 * 0xf0 + 0xf0);
LAB_0077f28c:
  if (piVar4 == (int *)0x0) {
    return (int *)0x0;
  }
  iVar1 = *param_3;
  *param_3 = iVar1 + 1;
  *piVar4 = iVar1 + 1;
  return piVar4;
LAB_0077f278:
  piVar4 = (int *)(param_1 + uVar3 * 0xf0);
  goto LAB_0077f28c;
}



void fn_0077f0c8(uint param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  
  if (param_3 == 0) {
    return;
  }
  iVar1 = (int)param_3 / 2;
  uVar2 = *(uint *)(param_2 + iVar1 * 0xa88);
  if ((uVar2 != 0) && (param_1 > uVar2 || uVar2 == param_1)) {
    if (param_1 <= uVar2) {
      return;
    }
    param_2 = param_2 + ((param_3 & 1) + iVar1) * 0xa88;
  }
  fn_0077f0c8(param_1,param_2,iVar1);
  return;
}



int * fn_0077efd0(int *param_1)

{
  if (param_1[1] != 0) {
    param_1[1] = 0;
  }
  if (*param_1 != 0) {
    (*(code *)param_1[2])();
    *param_1 = 0;
  }
  return param_1;
}



void fn_0077eaf0(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return;
  }
  do {
    fn_0077eaf0(param_1,*(undefined4 *)(param_2 + 0xc));
    iVar1 = *(int *)(param_2 + 8);
    *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_1 + 4);
    *(int *)(param_1 + 4) = param_2;
    param_2 = iVar1;
  } while (iVar1 != 0);
  return;
}


