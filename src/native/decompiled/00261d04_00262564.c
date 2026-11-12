#include "00261d04_00262564.h"



int fn_00262564(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 local_18;
  
  iVar2 = *param_1;
  local_18 = param_4;
  fn_00262bfc(iVar2);
  iVar1 = fn_00145b00(0x84,&DAT_00812c8c);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = fn_0030f93c();
    if (iVar1 != 0) {
      local_18 = fn_00262ad0(iVar2,iVar1);
      fn_0030f7a0(iVar1,param_2);
      fn_0079d450(iVar2 + 0x70,&local_18);
    }
  }
  return iVar1;
}



int fn_002624f8(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 local_18;
  
  iVar2 = *param_1;
  local_18 = param_4;
  fn_00262bfc(iVar2);
  iVar1 = fn_00145b00(0x88,&DAT_00812c8c);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = fn_002ee530();
    if (iVar1 != 0) {
      local_18 = fn_00262ad0(iVar2,iVar1);
      fn_002ee2c8(iVar1,param_2);
      fn_0079d450(iVar2 + 0x70,&local_18);
    }
  }
  return iVar1;
}



int fn_0026248c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 local_18;
  
  iVar2 = *param_1;
  local_18 = param_4;
  fn_00262bfc(iVar2);
  iVar1 = fn_00145b00(0x80,&DAT_00812c8c);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = fn_002ee274();
    if (iVar1 != 0) {
      local_18 = fn_00262ad0(iVar2,iVar1);
      fn_002ee080(iVar1,param_2);
      fn_0079d450(iVar2 + 0x70,&local_18);
    }
  }
  return iVar1;
}



int fn_00262420(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 local_18;
  
  iVar2 = *param_1;
  local_18 = param_4;
  iVar1 = fn_00145b00(0x8c,&DAT_00812c8c);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = fn_002ee00c();
    if (iVar1 != 0) {
      local_18 = fn_00262ad0(iVar2,iVar1);
      fn_002ede44(iVar1,param_2,param_3);
      fn_0079d450(iVar2 + 0x70,&local_18);
    }
  }
  return iVar1;
}



void fn_0026239c(undefined4 *param_1)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  
  piVar2 = (int *)*param_1;
  uVar3 = piVar2[0x1f];
  if (uVar3 != 0xffffffff) {
    uVar1 = piVar2[1] - *piVar2 >> 2;
    if (uVar1 <= uVar3) {
      fn_002ff628(9,&DAT_008c7646,&DAT_008c7646,uVar3,uVar1);
    }
    piVar4 = *(int **)(*piVar2 + uVar3 * 4);
    fn_002631d8(piVar2,piVar4);
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
    piVar2[0x1f] = -1;
  }
  return;
}



int fn_002621bc(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,uint param_8,
                undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                undefined4 param_13)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint local_48 [9];
  
  iVar4 = *param_1;
  iVar2 = fn_00145b00(0x230,&DAT_00812c8c);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = fn_002f45d8();
    if (iVar2 != 0) {
      uVar3 = fn_00262ad0(iVar4,iVar2);
      fn_002f41b0(iVar2,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_11,
                   param_12,param_13);
      fn_006a6834(iVar2,param_10);
      uVar1 = *(int *)(iVar4 + 0x1c) - *(int *)(iVar4 + 0x18) >> 2;
      if (uVar1 <= param_8) {
        fn_002ff628(9,&DAT_008c7670,&DAT_008c7670,param_8,uVar1);
      }
      *(undefined4 *)(*(int *)(iVar4 + 0x18) + param_8 * 4) = uVar3;
      local_48[0] = param_8;
      fn_0079d450(iVar4 + 0x28,local_48);
    }
  }
  return iVar2;
}



int fn_00262130(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_1c;
  
  iVar3 = *param_1;
  iVar1 = fn_00145b00(0xc0,&DAT_00812c8c);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = fn_002d0d88();
    if (iVar1 != 0) {
      local_1c = fn_00262ad0(iVar3,iVar1);
      iVar2 = *(int *)(iVar3 + 0x98);
      *(int *)(iVar3 + 0x98) = iVar2 + 1;
      fn_002d0410(iVar1,param_2,param_3,param_4,iVar2);
      fn_0079d450(iVar3 + 0x40,&local_1c);
    }
  }
  return iVar1;
}



int fn_002620c4(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 local_18;
  
  iVar2 = *param_1;
  local_18 = param_4;
  iVar1 = fn_00145b00(0x8c,&DAT_00812c8c);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = fn_002ce868();
    if (iVar1 != 0) {
      local_18 = fn_00262ad0(iVar2,iVar1);
      fn_002ce5d8(iVar1,param_2,param_3);
      fn_0079d450(iVar2 + 0x70,&local_18);
    }
  }
  return iVar1;
}



int fn_00262058(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 local_18;
  
  iVar2 = *param_1;
  local_18 = param_4;
  iVar1 = fn_00145b00(0x90,&DAT_00812c8c);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = fn_002ce38c();
    if (iVar1 != 0) {
      local_18 = fn_00262ad0(iVar2,iVar1);
      fn_002ce220(iVar1,param_2,param_3);
      fn_0079d450(iVar2 + 0x70,&local_18);
    }
  }
  return iVar1;
}



int fn_00262044(int *param_1)

{
  return *(int *)(*param_1 + 0x38) - *(int *)(*param_1 + 0x34) >> 2;
}



int fn_00261f54(int *param_1)

{
  return *(int *)(*param_1 + 0x74) - *(int *)(*param_1 + 0x70) >> 2;
}



undefined4 fn_00261e88(undefined4 *param_1,uint param_2)

{
  undefined4 uVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  
  piVar2 = (int *)*param_1;
  uVar4 = piVar2[0xe] - piVar2[0xd] >> 2;
  if (uVar4 <= param_2) {
    fn_002ff628(9,&DAT_008c7670,&DAT_008c7670,param_2,uVar4);
  }
  uVar3 = *(uint *)(piVar2[0xd] + param_2 * 4);
  uVar4 = piVar2[7] - piVar2[6] >> 2;
  if (uVar4 <= uVar3) {
    fn_002ff628(9,&DAT_008c7670,&DAT_008c7670,uVar3,uVar4);
  }
  uVar4 = *(uint *)(piVar2[6] + uVar3 * 4);
  if ((int)uVar4 < 0) {
    uVar1 = 0;
  }
  else {
    uVar3 = piVar2[1] - *piVar2 >> 2;
    if (uVar3 <= uVar4) {
      fn_002ff628(9,&DAT_008c7646,&DAT_008c7646,uVar4,uVar3);
    }
    uVar1 = *(undefined4 *)(*piVar2 + uVar4 * 4);
  }
  return uVar1;
}



int fn_00261d7c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,uint param_8,
                undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint local_44 [8];
  
  iVar4 = *param_1;
  iVar2 = fn_00145b00(0x238,&DAT_00812c8c);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = fn_0024d650();
    if (iVar2 != 0) {
      uVar3 = fn_00262ad0(iVar4,iVar2);
      fn_0024d3e4(iVar2,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_11,
                   param_12);
      fn_006a6834(iVar2,param_10);
      uVar1 = *(int *)(iVar4 + 0x1c) - *(int *)(iVar4 + 0x18) >> 2;
      if (uVar1 <= param_8) {
        fn_002ff628(9,&DAT_008c7670,&DAT_008c7670,param_8,uVar1);
      }
      *(undefined4 *)(*(int *)(iVar4 + 0x18) + param_8 * 4) = uVar3;
      local_44[0] = param_8;
      fn_0079d450(iVar4 + 0x34,local_44);
    }
  }
  return iVar2;
}



int fn_00261d04(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 local_18;
  
  iVar2 = *param_1;
  local_18 = param_4;
  iVar1 = fn_00145b00(0xb8,&DAT_00812c8c);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = fn_002339e0();
    if (iVar1 != 0) {
      local_18 = fn_00262ad0(iVar2,iVar1);
      *(int *)(iVar2 + 0x98) = *(int *)(iVar2 + 0x98) + 1;
      fn_0023322c(iVar1,param_2,param_3);
      fn_0079d450(iVar2 + 0x4c,&local_18);
    }
  }
  return iVar1;
}


