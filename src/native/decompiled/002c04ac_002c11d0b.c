#include "002c04ac_002c11d0b.h"



undefined4 fn_002c0d44(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  
  iVar1 = fn_00172c98(param_2,(char *)&DAT_002c0e10);
  uVar3 = 0;
  if (iVar1 != 0) {
    iVar2 = fn_00145b00(0x38,&DAT_00812c8c);
    piVar4 = (int *)0x0;
    if (iVar2 != 0) {
      uVar3 = (**(code **)(*param_1 + 8))(param_1);
      piVar4 = (int *)fn_00393a3c(iVar2,uVar3);
    }
    piVar5 = (int *)param_1[0x2f];
    if (piVar5 != piVar4) {
      if (piVar5 != (int *)0x0) {
        (**(code **)(*piVar5 + 0x20))(piVar5);
      }
      param_1[0x2f] = (int)piVar4;
    }
    fn_00393360(param_1[0x2f],iVar1,param_1,param_1[0x12],param_3,(int)*(char *)(param_4 + 0x18),
                 (int)*(char *)(param_4 + 0x14),(int)*(char *)(param_4 + 0x15),
                 (int)*(char *)(param_4 + 0x17),(int)*(char *)(param_4 + 0x19));
    uVar3 = 1;
  }
  return uVar3;
}



void fn_002c0bfc(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  float in_s0;
  float in_s1;
  float in_s2;
  undefined4 local_28;
  float local_24;
  float local_20;
  float local_1c;
  
  local_28 = 0;
  piVar1 = (int *)fn_002c11d0(param_1,param_3,&local_28);
  iVar2 = (**(code **)(*piVar1 + 0xc))(piVar1,param_2);
  fn_00688ff8(*(undefined4 *)(iVar2 + 0x48));
  local_24 = in_s0 + DAT_008cabd0;
  local_20 = in_s1 + DAT_008cabd4;
  local_1c = in_s2 + DAT_008cabd8;
  iVar2 = *(int *)(param_1[0x25] + 0x48);
  *(float *)(iVar2 + 0x1c) = local_24;
  *(float *)(iVar2 + 0x20) = local_20;
  *(float *)(iVar2 + 0x24) = local_1c;
  *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xef | 0x10;
  fn_0025e7cc(param_1[0x26],&local_24);
  if ((param_3 == 5 && param_2 == 2) && (iVar2 = fn_002c11d0(param_1,5,&local_28), iVar2 != 0)) {
    iVar3 = fn_002e3e9c(iVar2,0);
    iVar2 = fn_002e3e9c(iVar2,0,1);
    if (iVar3 != 0 && iVar2 != 0) {
      fn_0025f978();
    }
  }
  uVar4 = fn_002e3e9c(piVar1,local_28,param_2);
  uVar5 = uVar4;
  if (uVar4 == 0) {
    uVar5 = (uint)*(byte *)(param_1 + 0x1f);
  }
  if (uVar4 == 0 && uVar5 == 1) {
    uVar4 = param_1[0x1d];
  }
  (**(code **)(*param_1 + 400))(param_1,uVar4);
  fn_0025f978(0);
  return;
}



void fn_002c0bc0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = fn_002c11d0(param_1,iVar2,0);
    if (iVar1 != 0) {
      fn_002e3f30(iVar1,param_2);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 6);
  return;
}



int fn_002c11d0(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  
  if (param_2 == 0) {
    param_2 = *(int *)(param_1 + 100);
  }
  switch(param_2) {
  case 1:
    if (*(int *)(param_1 + 0xa4) - (int)*(int **)(param_1 + 0xa0) >> 2 != 0) {
      return **(int **)(param_1 + 0xa0);
    }
    break;
  case 2:
    if (*(int *)(param_1 + 0xa4) - *(int *)(param_1 + 0xa0) >> 2 != 0) {
      return *(int *)(*(int *)(param_1 + 0xa4) + -4);
    }
    break;
  case 3:
    iVar1 = *(int *)(param_1 + 0x9c);
    goto joined_r0x002c12a4;
  case 4:
    if (*(int *)(param_1 + 0xac) != 0) {
      return *(int *)(param_1 + 0xac);
    }
    if (*(int *)(param_1 + 0xb0) != 0) {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = *(undefined4 *)(*(int *)(param_1 + 0xb0) + 0x28);
      }
      return *(int *)(param_1 + 0xb0);
    }
    if (*(int *)(param_1 + 0xb4) != 0) {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = *(undefined4 *)(*(int *)(param_1 + 0xb4) + 0x28);
      }
      return *(int *)(param_1 + 0xb4);
    }
    if (*(int *)(param_1 + 0xb8) == 0) {
      return 0;
    }
    return *(int *)(param_1 + 0xb8);
  case 5:
    iVar1 = *(int *)(param_1 + 0xbc);
joined_r0x002c12a4:
    if (iVar1 != 0) {
      return iVar1;
    }
  }
  return 0;
}



undefined4 fn_002c09f8(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  
  iVar1 = fn_00172c98(param_2,(char *)&DAT_002c0aac);
  uVar3 = 0;
  if (iVar1 != 0) {
    iVar2 = fn_00145b00(0x2c,&DAT_00812c8c);
    piVar4 = (int *)0x0;
    if (iVar2 != 0) {
      uVar3 = (**(code **)(*param_1 + 8))(param_1);
      piVar4 = (int *)fn_0042c214(iVar2,uVar3);
    }
    piVar5 = (int *)param_1[0x27];
    if (piVar5 != piVar4) {
      if (piVar5 != (int *)0x0) {
        (**(code **)(*piVar5 + 0x20))(piVar5);
      }
      param_1[0x27] = (int)piVar4;
    }
    fn_0042bbf4(param_1[0x27],iVar1,param_1,param_1[0x12],param_3 + 8,
                 (int)*(char *)(param_3 + 0x18),(int)*(char *)(param_3 + 0x14));
    uVar3 = 1;
  }
  return uVar3;
}



undefined1 * fn_002c096c(undefined4 param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [4];
  
  iVar5 = 0;
  iVar4 = 0;
  do {
    iVar1 = fn_0028b348(*(undefined4 *)(DAT_00897804 + 0xc),iVar5);
    puVar3 = (undefined1 *)0x0;
    if (iVar1 != 0) {
      fn_0020bbc4(auStack_20);
      uVar2 = fn_006bf5e0(auStack_1c);
      *(undefined4 *)(*param_2 + iVar4 * 4) = uVar2;
      fn_006bfe90(auStack_1c);
      iVar1 = fn_001cab7c();
      iVar4 = iVar4 + iVar1;
      puVar3 = auStack_20;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 4);
  return puVar3;
}


