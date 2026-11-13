#include "001b4980_001b5350.h"



undefined4 fn_001b5350(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_00166d54(param_1,0xffffffff);
  if (iVar1 < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



undefined4 fn_001b5300(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_00173d40(param_1,*(int *)(param_1 + 0x34) + 1);
  iVar1 = *(int *)(*(int *)(*(int *)(iVar1 + 4) + 0x24) + 0x1c) * 2 + 2;
  if (iVar1 < 0xc) {
    iVar1 = 0xc;
  }
  uVar2 = fn_0074254c(param_1,iVar1);
  fn_00742460(uVar2,param_1,0xfffffffe);
  return 1;
}



undefined4 fn_001b4ff8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  
  puVar1 = (uint *)fn_00173d40(param_1,*(undefined4 *)(param_1 + 0x34),param_3,param_4,param_4);
  uVar5 = *puVar1;
  piVar4 = (int *)puVar1[1];
  if ((uVar5 & 0x8000000) != 0) {
    piVar4[1] = piVar4[1] + 1;
  }
  if (uVar5 == 0x8001000) {
    iVar2 = fn_0074234c(piVar4);
    if (iVar2 == 2) {
LAB_001b5054:
      iVar2 = fn_00157ff4(param_1);
      if (1 < iVar2) {
        fn_00742460(piVar4,param_1,2);
      }
      iVar2 = fn_00743584(piVar4,1 < iVar2,1,1,0);
      if (iVar2 < 0) {
        fn_00743388(piVar4,1);
        fn_0019e864(param_1 + 0x40,piVar4 + 0x10);
        iVar2 = piVar4[1];
        piVar4[1] = iVar2 + -1;
        if (iVar2 + -1 == 0) {
          (**(code **)(*piVar4 + 8))(piVar4);
        }
        return 0xffffffff;
      }
      fn_00742460(param_1,piVar4,0xffffffff);
      fn_00173cb8(piVar4,1);
      iVar2 = fn_0074234c(piVar4);
      if (iVar2 == 0) {
        fn_00743388(piVar4,1);
      }
      iVar2 = piVar4[1];
      piVar4[1] = iVar2 + -1;
      if (iVar2 + -1 == 0) {
        (**(code **)(*piVar4 + 8))(piVar4);
      }
      return 1;
    }
    if (iVar2 == 0) {
      uVar3 = fn_001581d0(param_1,(char *)&DAT_001b51fc);
      iVar2 = piVar4[1] + -1;
      piVar4[1] = iVar2;
    }
    else {
      if (iVar2 != 1) goto LAB_001b5054;
      uVar3 = fn_001581d0(param_1,(char *)&DAT_001b5218);
      iVar2 = piVar4[1] + -1;
      piVar4[1] = iVar2;
    }
  }
  else {
    uVar3 = fn_001581d0(param_1,(char *)&DAT_001b5238);
    if ((uVar5 & 0x8000000) == 0) {
      return uVar3;
    }
    iVar2 = piVar4[1] + -1;
    piVar4[1] = iVar2;
  }
  if (iVar2 == 0) {
    (**(code **)(*piVar4 + 8))(piVar4);
  }
  return uVar3;
}



void fn_001b4fe0(uint param_1)

{
  if (param_1 < 10) {
    DAT_008bf75c = param_1;
  }
  return;
}



void fn_001b4f84(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00145b00(0x14,&DAT_00812c8c);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &DAT_007bfc68;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *(undefined1 *)(puVar1 + 4) = 0;
    *(undefined1 *)((int)puVar1 + 0x11) = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
  }
  return;
}



void fn_001b4f10(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)fn_007410e0();
  iVar2 = fn_00740b44(param_1);
  if ((iVar2 == 0) && (iVar2 = fn_001c0e78(param_1), iVar2 == 0)) {
    iVar2 = fn_00740b6c(param_1,&DAT_001b4f7c,puVar1[2],puVar1[3]);
  }
  (*(code *)*puVar1)(iVar2,puVar1[1],param_1);
  fn_007407d4(puVar1);
  fn_00740adc(param_1);
  return;
}



undefined4 fn_001b4ee0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_00157ff4();
  iVar1 = fn_00157c74(param_1,iVar1 + -1,1,0);
  if (iVar1 < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



undefined4 fn_001b4e58(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = fn_00173d40(param_1,*(int *)(param_1 + 0x34) + 1);
  iVar3 = *(int *)(iVar1 + 4);
  iVar4 = *(int *)(iVar3 + 0x1c);
  uVar2 = fn_00173d40(param_1,*(undefined4 *)(param_1 + 0x34));
  fn_00173d1c(param_1,uVar2);
  iVar1 = 0;
  if (0 < iVar4) {
    do {
      fn_00173d1c(param_1,*(int *)(iVar3 + 0x18) + iVar1 * 8);
      iVar1 = iVar1 + 1;
    } while (iVar1 < iVar4);
  }
  iVar1 = fn_00157c74(param_1,iVar4,1,1);
  if (iVar1 < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



void fn_001b4c84(undefined4 *param_1)

{
  uint local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined *puStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_38 = DAT_008e996c | 0x80000000;
  if (DAT_008e994c == '\0') {
    local_34 = 0xf02c0;
    puStack_2c = &DAT_007f02c1;
    uStack_c = 0;
    local_30 = param_1[3];
    local_28 = param_1[2];
    local_24 = param_1[1];
    local_20 = *param_1;
    local_1c = param_1[7];
    local_18 = param_1[6];
    local_14 = param_1[5];
    local_10 = param_1[4];
    fn_00734b4c(&local_38,0x30,1);
    return;
  }
  local_34 = 0xf02c0;
  puStack_2c = &DAT_007f02c1;
  uStack_c = 0;
  local_30 = *param_1;
  local_28 = param_1[1];
  local_24 = param_1[2];
  local_20 = param_1[3];
  local_1c = param_1[4];
  local_18 = param_1[5];
  local_14 = param_1[6];
  local_10 = param_1[7];
  fn_00734b4c(&local_38,0x30,1);
  return;
}



undefined4 fn_001b4bfc(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_0074279c(param_1,0xfffffffe);
  if (iVar1 < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



undefined4 fn_001b4980(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint local_30;
  int *local_2c;
  uint local_28;
  int *local_24;
  
  local_2c = (int *)0x0;
  local_30 = 0x1000001;
  iVar1 = fn_00157ff4(param_1);
  uVar6 = 0;
  uVar5 = 0;
  uVar2 = fn_00173d40(param_1,*(undefined4 *)(param_1 + 0x34));
  fn_0019e864(&local_30,uVar2);
  puVar3 = (uint *)fn_00173d40(param_1,*(int *)(param_1 + 0x34) + 1);
  uVar4 = *puVar3;
  if (uVar4 != 0x1000001 && (uVar4 & 0x4000000) != 0) {
    if (uVar4 == 0x5000004) {
      uVar6 = (uint)(float)puVar3[1];
    }
    else {
      uVar6 = puVar3[1];
    }
  }
  if (iVar1 < 3) {
    uVar5 = fn_00166e14(param_1,1);
  }
  else {
    puVar3 = (uint *)fn_00173d40(param_1,*(int *)(param_1 + 0x34) + 2);
    if ((*puVar3 & 0x4000000) != 0) {
      if (*puVar3 == 0x5000004) {
        uVar5 = (uint)(float)puVar3[1];
      }
      else {
        uVar5 = puVar3[1];
      }
    }
  }
  iVar1 = local_2c[5];
  if ((int)uVar6 < 0) {
    uVar6 = uVar6 + iVar1;
  }
  if ((int)uVar5 < 0) {
    uVar5 = uVar5 + iVar1;
  }
  if ((int)uVar5 < (int)uVar6) {
    uVar2 = fn_001581d0(param_1,(char *)&DAT_001b4bd4);
    if ((local_30 & 0x8000000) == 0) {
      return uVar2;
    }
    iVar1 = local_2c[1] + -1;
    local_2c[1] = iVar1;
  }
  else {
    if ((int)uVar5 <= iVar1) {
      local_24 = (int *)fn_0019ba68(*(undefined4 *)(param_1 + 0x8c),(int)local_2c + uVar6 + 0x1c,
                                     uVar5 - uVar6);
      local_28 = 0x8000010;
      if (local_24 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        fn_00146590();
      }
      local_24[1] = local_24[1] + 1;
      fn_00173d1c(param_1,&local_28);
      if (((local_28 & 0x8000000) != 0) &&
         (iVar1 = local_24[1], local_24[1] = iVar1 + -1, iVar1 + -1 == 0)) {
        (**(code **)(*local_24 + 8))();
      }
      if (((local_30 & 0x8000000) != 0) &&
         (iVar1 = local_2c[1], local_2c[1] = iVar1 + -1, iVar1 + -1 == 0)) {
        (**(code **)(*local_2c + 8))();
      }
      return 1;
    }
    uVar2 = fn_001581d0(param_1,(char *)&DAT_001b4be4);
    if ((local_30 & 0x8000000) == 0) {
      return uVar2;
    }
    iVar1 = local_2c[1] + -1;
    local_2c[1] = iVar1;
  }
  if (iVar1 == 0) {
    (**(code **)(*local_2c + 8))();
  }
  return uVar2;
}


