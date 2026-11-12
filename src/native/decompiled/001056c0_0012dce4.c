#include "001056c0_0012dce4.h"



undefined4 fn_0012dce4(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_10;
  undefined4 uStack_c;
  
  iVar1 = fn_00157fb0(param_1,0xfffffffe,&local_10);
  if ((iVar1 < 0) || (iVar1 = fn_00157f58(param_1,0xffffffff,&uStack_c), iVar1 < 0)) {
    uVar2 = fn_001581d0(param_1,&DAT_00148920);
    return uVar2;
  }
  uVar2 = fn_001485e8(DAT_00898898,local_10,uStack_c);
  fn_001580cc(param_1,uVar2);
  return 1;
}



undefined4 fn_0012dc54(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_18;
  undefined1 local_14 [4];
  undefined4 local_10 [2];
  
  iVar1 = fn_00157f58(param_1,0xfffffffd,&local_18);
  if (((iVar1 < 0) || (iVar1 = fn_00157f00(param_1,0xfffffffe,local_14), iVar1 < 0)) ||
     (iVar1 = fn_00157f58(param_1,0xffffffff,local_10), iVar1 < 0)) {
    uVar2 = fn_001581d0(param_1,&DAT_00148920);
    return uVar2;
  }
  fn_001485a8(DAT_00898898,local_18,local_10[0]);
  return 0;
}



void fn_0012d73c(undefined4 param_1)

{
  fn_00142b64(DAT_00898154,param_1);
  return;
}



void fn_0012d6b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  fn_001529b0(DAT_00898154,param_1,param_4,param_2,param_3);
  return;
}



void fn_0012b2f0(uint param_1,undefined4 param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  
  uVar2 = param_1 & 0x1f;
  for (puVar4 = (uint *)(&DAT_008e3084)[uVar2]; puVar4 != (uint *)0x0; puVar4 = (uint *)puVar4[0x10]
      ) {
    if (*puVar4 == param_1) {
      if (puVar4 != (uint *)0x0) goto LAB_0012b3e4;
      break;
    }
  }
  if (param_1 != 0) {
    if (DAT_0089a520 == (code *)0x0) {
      puVar4 = (uint *)0x0;
    }
    else {
      param_3 = 0;
      puVar4 = (uint *)(*DAT_0089a520)(0x10000,0x100,0,0x44);
    }
    fn_00301f50(puVar4,0x44);
    puVar4[0xb] = 0x300;
    *puVar4 = param_1;
    puVar3 = (uint *)(&DAT_008e3084)[uVar2];
    if (puVar3 == (uint *)0x0) {
      (&DAT_008e3084)[uVar2] = puVar4;
    }
    else if (param_1 < *puVar3) {
      puVar4[0x10] = (uint)puVar3;
      (&DAT_008e3084)[uVar2] = puVar4;
    }
    else {
      for (puVar1 = (uint *)puVar3[0x10]; puVar1 != (uint *)0x0; puVar1 = (uint *)puVar1[0x10]) {
        param_3 = *puVar1;
        if (param_1 < param_3) {
          puVar3[0x10] = (uint)puVar4;
          puVar4[0x10] = (uint)puVar1;
          if (puVar1 != (uint *)0x0) goto LAB_0012b3e4;
          break;
        }
        puVar3 = puVar1;
      }
      puVar3[0x10] = (uint)puVar4;
    }
  }
LAB_0012b3e4:
  if (DAT_008e3104 != (uint *)0x0) {
    param_3 = DAT_008bf790 - *(int *)((int)DAT_008e3104 + 4);
    *(uint *)((int)DAT_008e3104 + 0xc) = param_3;
  }
  DAT_008e3104 = puVar4;
  if (puVar4 != (uint *)0x0) {
    param_3 = puVar4[1];
  }
  if (puVar4 != (uint *)0x0 && param_3 != 0) {
    DAT_008bf790 = puVar4[3] + param_3;
    DAT_008bf794 = puVar4[2] + param_3;
    return;
  }
  DAT_008bf794 = 0;
  DAT_008bf790 = 0;
  return;
}



void fn_0012b2a4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11)

{
  fn_00146a80(DAT_008e3104,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
               param_10,param_11);
  return;
}



undefined4 fn_0012b1c0(int param_1)

{
  int iVar1;
  
  DAT_008bfae0 = param_1;
  fn_00301f50(param_1,0x854);
  iVar1 = fn_00146fb0();
  *(int *)(DAT_008bfae0 + 0x800) = iVar1;
  if (iVar1 != 0) {
    DAT_008bfae4 = 1;
    return 0;
  }
  if (DAT_0089a524 != (code *)0x0) {
    (*DAT_0089a524)(0x10000,0x100,0);
  }
  DAT_008bfae0 = 0;
  return 0xffffffff;
}



void fn_001248e0(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  
  *param_1 = param_2;
  param_1[1] = 0xffffffff;
  iVar1 = fn_001241b4(param_1 + 3);
  *(undefined1 *)(iVar1 + 0x24) = 1;
  *(undefined4 *)(iVar1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x30) = 0xffffffff;
  return;
}



void fn_0012336c(void)

{
  fn_001231e8();
  return;
}



void fn_0011c1b4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9)

{
  fn_00127ef8(DAT_00898154,param_1,param_9,param_2,param_3,param_4,param_5,param_6,param_7,param_8)
  ;
  return;
}



void fn_0011c184(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  fn_00127e6c(DAT_00898154,param_1,param_4,param_2,param_3);
  return;
}



void fn_00117a60(int param_1)

{
  int iVar1;
  
  if (DAT_0089a504 != 0) {
    iVar1 = fn_0012a1dc(*(undefined4 *)(*(int *)(DAT_0089a504 + 4) + 0x60),param_1);
    if (iVar1 != 0) {
      fn_00143198(*(undefined4 *)(*(int *)(DAT_0089a504 + 4) + 0x60),1);
    }
    iVar1 = fn_0011838c(1);
    if (*(int *)(*(int *)(DAT_0089a504 + 4) + iVar1 * 4 + 0x98) == param_1) {
      fn_00118a68(*(int *)(DAT_0089a504 + 4) + 0x6c);
      return;
    }
  }
  return;
}



void fn_00117528(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  if (param_1 == 0x10000) {
    fn_00143a58(param_4);
    return;
  }
  if (param_1 == 0x20000) {
    iVar1 = *DAT_0089a514;
  }
  else {
    if (param_1 != 0x30000) {
      return;
    }
    iVar1 = DAT_0089a514[1];
  }
  piVar4 = *(int **)(iVar1 + 4);
  iVar1 = *piVar4;
  while( true ) {
    if (iVar1 == 0) {
      return;
    }
    if (*(int *)(iVar1 + 0x10) == param_4) break;
    iVar1 = *(int *)(iVar1 + 4);
  }
  if (*(int *)(iVar1 + 4) != 0) {
    *(undefined4 *)(*(int *)(iVar1 + 4) + 8) = *(undefined4 *)(iVar1 + 8);
  }
  if (*(int *)(iVar1 + 8) != 0) {
    *(undefined4 *)(*(int *)(iVar1 + 8) + 4) = *(undefined4 *)(iVar1 + 4);
  }
  if (*piVar4 == iVar1) {
    *piVar4 = *(int *)(iVar1 + 4);
  }
  if (piVar4[1] == iVar1) {
    piVar4[1] = *(int *)(iVar1 + 8);
  }
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined4 *)(iVar1 + 4) = 0;
  iVar3 = *(int *)(iVar1 + 0x14);
  iVar2 = *(int *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  fn_00143d68(piVar4);
  fn_00143b98(piVar4,iVar1 - iVar2,iVar3 + iVar2);
  return;
}



void fn_0010bcb4(void)

{
  int iVar1;
  char cVar2;
  int extraout_r1;
  int local_24;
  int local_20;
  undefined4 uStack_1c;
  
  cVar2 = DAT_0089a584;
  if (DAT_0089a584 != '\0') {
    DAT_0089a584 = '\0';
    fn_00125220(3);
    fn_00125818(0);
  }
  fn_00115e64(0);
  if (DAT_0089a5bc != (code *)0x0) {
    (*DAT_0089a5bc)(DAT_0089a5fc);
  }
  fn_001156f4(2,0,&local_20,&local_24,0);
  iVar1 = extraout_r1;
  if (local_20 != 0) {
    iVar1 = local_24;
  }
  if (local_20 != 0 && local_20 != iVar1) {
    fn_00115c6c();
    fn_001157a4(local_20,0,0,DAT_0089a54c);
  }
  else {
    fn_00115be0();
    fn_00115128(0,0,DAT_0089a54c);
  }
  local_20 = DAT_0089a558;
  uStack_1c = DAT_0089a55c;
  fn_001152bc(0,0,0,0,0);
  if (cVar2 == '\0') {
    return;
  }
  DAT_0089a584 = 1;
  fn_00115a18();
  return;
}



void fn_00108c60(undefined4 *param_1)

{
  *param_1 = &DAT_0081c1b4;
  param_1[2] = param_1 + 2;
  param_1[1] = 0;
  param_1[3] = param_1 + 2;
  param_1[4] = DAT_008977f0;
  return;
}



void fn_001056c0(void)

{
  if (DAT_008981a8 != (int *)0x0) {
    (**(code **)(*DAT_008981a8 + 4))();
    DAT_008981a8 = (int *)0x0;
  }
  return;
}


