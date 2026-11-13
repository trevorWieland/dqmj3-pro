#include "006d7180_006d73fc.h"



int fn_006d73fc(int param_1,int param_2,int *param_3,uint param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  uint local_28;
  
  piVar2 = (int *)(param_2 + -0x100000);
  iVar3 = -0x1f1eb7da;
  bVar4 = (int *)0x3fefffff < piVar2;
  if (!bVar4) {
    piVar2 = param_3 + -0x40000;
  }
  if (!(bVar4 || (int *)0x3fefffff < piVar2)) {
    local_28 = param_4;
    iVar1 = fn_004ef8e8();
    if (iVar1 + 0x10U <= param_4) {
      local_28 = 0;
      iVar3 = fn_006d7180(param_1,param_2,&local_28,param_4);
      if (-1 < iVar3) {
        iVar1 = param_2 + local_28;
        iVar3 = fn_006d74bc(param_1 + 0x10,iVar1,&local_28,param_4 - local_28);
        if (-1 < iVar3) {
          *param_3 = (local_28 + iVar1) - param_2;
          return 0;
        }
      }
    }
  }
  return iVar3;
}



int fn_006d7308(int param_1,int param_2,int *param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  bool bVar5;
  uint local_28;
  
  piVar3 = (int *)(param_2 + -0x100000);
  bVar5 = piVar3 < (int *)0x3ff00000;
  if (bVar5) {
    piVar3 = param_3 + -0x40000;
  }
  if (bVar5 && piVar3 < (int *)0x3ff00000) {
    local_28 = param_4;
    iVar1 = fn_004ef8e8();
    iVar2 = fn_004efb40();
    if ((uint)(iVar2 + iVar1 + 0x10) <= param_4) {
      local_28 = 0;
      iVar1 = fn_006d7180(param_1,param_2,&local_28,param_4);
      if (iVar1 < 0) {
        return iVar1;
      }
      iVar2 = param_2 + local_28;
      iVar4 = param_4 - local_28;
      iVar1 = fn_006d74bc(param_1 + 0x10,iVar2,&local_28,iVar4);
      if (iVar1 < 0) {
        return iVar1;
      }
      iVar2 = iVar2 + local_28;
      iVar1 = fn_006d80a0(param_1 + 0x4c0,iVar2,&local_28,iVar4 - local_28);
      if (iVar1 < 0) {
        return iVar1;
      }
      *param_3 = (local_28 + iVar2) - param_2;
      return 0;
    }
  }
  return -0x1f1eb7da;
}



undefined4 fn_006d7248(undefined1 *param_1,undefined1 *param_2,int *param_3,uint param_4)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined1 *puVar4;
  
  uVar1 = 0xe0e14826;
  piVar2 = param_3;
  if (param_2 + -0x100000 < (undefined1 *)0x3ff00000) {
    piVar2 = param_3 + -0x40000;
  }
  if ((param_2 + -0x100000 < (undefined1 *)0x3ff00000 && piVar2 < (int *)0x3ff00000) &&
     (0xf < param_4)) {
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    param_2[2] = param_1[2];
    param_2[3] = param_1[3];
    fn_004ed504(param_2 + 4,*(undefined2 *)(param_1 + 4));
    puVar4 = param_2 + 6;
    iVar3 = 0;
    do {
      *puVar4 = param_1[iVar3 + 6];
      iVar3 = iVar3 + 1;
      puVar4 = puVar4 + 1;
    } while (iVar3 < 10);
    *param_3 = (int)puVar4 - (int)param_2;
    uVar1 = 0;
  }
  return uVar1;
}



undefined4 fn_006d7180(undefined1 *param_1,undefined1 *param_2,int *param_3,uint param_4)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined1 *puVar4;
  
  uVar1 = 0xe0e14826;
  piVar2 = param_3;
  if (param_2 + -0x100000 < (undefined1 *)0x3ff00000) {
    piVar2 = param_3 + -0x40000;
  }
  if ((param_2 + -0x100000 < (undefined1 *)0x3ff00000 && piVar2 < (int *)0x3ff00000) &&
     (0xf < param_4)) {
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    param_2[2] = param_1[2];
    param_2[3] = param_1[3];
    fn_004ed504(param_2 + 4,*(undefined2 *)(param_1 + 4));
    puVar4 = param_2 + 6;
    iVar3 = 0;
    do {
      *puVar4 = param_1[iVar3 + 6];
      iVar3 = iVar3 + 1;
      puVar4 = puVar4 + 1;
    } while (iVar3 < 10);
    *param_3 = (int)puVar4 - (int)param_2;
    uVar1 = 0;
  }
  return uVar1;
}


