#include "001bee5c_001bf8f4.h"



void fn_001bf8f4(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = fn_00145b00(0x1a0,&DAT_00812c8c);
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)fn_00211c48(iVar1,0x27);
    puVar2[0x67] = 0xffffffff;
    *puVar2 = &DAT_007bf5f4;
  }
  return;
}



undefined4 fn_001bf6d4(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  uint in_fpscr;
  uint local_20;
  int *local_1c;
  uint local_18;
  int *local_14;
  
  piVar1 = (int *)fn_00173d40(param_1,*(undefined4 *)(param_1 + 0x34));
  iVar3 = *piVar1;
  if (iVar3 == 0x1000008) {
    local_20 = 0x5000004;
    local_1c = (int *)VectorUnsignedToFloat((uint)(piVar1[1] != 0),(byte)(in_fpscr >> 0x16) & 3);
    fn_00173d1c(param_1,&local_20);
    if ((local_20 & 0x8000000) == 0) {
      return 1;
    }
    iVar3 = local_1c[1] + -1;
    local_1c[1] = iVar3;
  }
  else if (iVar3 == 0x5000002 || iVar3 == 0x5000004) {
    local_1c = (int *)piVar1[1];
    local_20 = 0x5000004;
    if (iVar3 == 0x5000002) {
      local_1c = (int *)VectorSignedToFloat(local_1c,(byte)(in_fpscr >> 0x16) & 3);
    }
    fn_00173d1c(param_1,&local_20);
    if ((local_20 & 0x8000000) == 0) {
      return 1;
    }
    iVar3 = local_1c[1] + -1;
    local_1c[1] = iVar3;
  }
  else {
    if (iVar3 != 0x8000010) {
      fn_00173d1c(param_1,&DAT_008c06e8);
      return 1;
    }
    local_1c = (int *)0x0;
    local_20 = 0x1000001;
    iVar3 = fn_001c132c(piVar1[1] + 0x1c,&local_20);
    if (iVar3 == 0) {
      if (((local_20 & 0x8000000) != 0) &&
         (iVar3 = local_1c[1], local_1c[1] = iVar3 + -1, iVar3 + -1 == 0)) {
        (**(code **)(*local_1c + 8))();
      }
      uVar2 = fn_001581d0(param_1,(char *)&DAT_001bf8d8);
      return uVar2;
    }
    local_18 = 0x5000004;
    local_14 = local_1c;
    if (local_20 == 0x5000002) {
      local_14 = (int *)VectorSignedToFloat(local_1c,(byte)(in_fpscr >> 0x16) & 3);
    }
    fn_00173d1c(param_1,&local_18);
    if (((local_18 & 0x8000000) != 0) &&
       (iVar3 = local_14[1], local_14[1] = iVar3 + -1, iVar3 + -1 == 0)) {
      (**(code **)(*local_14 + 8))();
    }
    if ((local_20 & 0x8000000) == 0) {
      return 1;
    }
    iVar3 = local_1c[1] + -1;
    local_1c[1] = iVar3;
  }
  if (iVar3 == 0) {
    (**(code **)(*local_1c + 8))();
  }
  return 1;
}



void fn_001bf6ac(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = fn_001c04c4(param_1,param_2,0x138);
  *(undefined1 *)(iVar1 + 0x11) = 0;
  *(undefined4 *)(iVar1 + 0x130) = 0;
  *(undefined4 *)(iVar1 + 0x134) = 0x4bd20;
  return;
}



void fn_001bf510(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00145b00(4,&DAT_00812c8c);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &DAT_007bf928;
  }
  return;
}



void fn_001bf270(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  undefined4 uVar5;
  
  iVar1 = DAT_008bf51c;
  iVar2 = fn_001851bc();
  if (iVar2 == 0) {
    iVar2 = fn_00191f08();
    if (iVar2 != 0) {
      iVar2 = fn_00192114();
      *(undefined1 *)(iVar2 + 0xc0) = 1;
      iVar2 = fn_00192114();
      *(undefined4 *)(iVar2 + 200) = 10;
    }
    *(code **)(param_1 + 0x28) = fn_001bc9a0;
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(int *)(param_1 + 0x20) = iVar1;
    *(undefined4 *)(param_1 + 0x1c) = 0xe4c0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined1 *)(param_1 + 0x10) = 0;
    *(code **)(param_1 + 0xc) = fn_001b3dd0;
    fn_001b3dd0(param_1,0);
    return;
  }
  if (iVar2 == 0xb) {
    iVar2 = fn_001b97d4();
    if (iVar2 == -3) {
      iVar2 = fn_00192114();
      *(undefined4 *)(iVar2 + 200) = 0xc;
    }
    else {
      if (iVar2 == -2) {
        if (DAT_008bf50d == '\0') {
          iVar2 = fn_00192114();
          *(undefined4 *)(iVar2 + 200) = 6;
          fn_001b10b8(1);
          goto LAB_001bf3e8;
        }
        uVar3 = fn_00184b48((char *)&DAT_001bf420);
        bVar4 = uVar3 == 0;
        if (bVar4) {
          uVar3 = (uint)DAT_008bf510;
        }
        if (bVar4 && uVar3 == 0) {
          uVar5 = *(undefined4 *)(iVar1 + 0xe4c8);
          DAT_008bf510 = 1;
          fn_001af244(0);
          iVar2 = fn_0018501c();
          if (iVar2 == 5 || iVar2 == 0xb) {
            iVar2 = fn_00192114();
            *(undefined4 *)(iVar2 + 200) = 4;
          }
          DAT_008bf510 = 0;
          *(undefined4 *)(iVar1 + 0xe4c8) = uVar5;
          goto LAB_001bf3e8;
        }
      }
      iVar2 = fn_00192114();
      *(undefined4 *)(iVar2 + 200) = 4;
      fn_001b10b8(1);
    }
  }
LAB_001bf3e8:
  if (*(code **)(iVar1 + 0xe4d4) == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x001bf40c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 0xe4d4))(param_1,0);
  return;
}



void fn_001bf16c(int param_1,int param_2,int param_3)

{
  uint *puVar1;
  uint local_18;
  undefined4 local_14;
  undefined4 uStack_10;
  uint local_c;
  
  puVar1 = &local_18;
  if (param_2 == 0) {
    puVar1 = (uint *)&DAT_007e0ee4;
  }
  else {
    if (param_2 != 3) {
      local_14 = 0x802f00c0;
      uStack_10 = 0;
      local_c = (uint)(param_2 == 2) | (uint)(param_2 == 2) << 0x10;
      local_18 = *(uint *)(param_1 + 0x50) | *(uint *)(param_1 + 0x50) << 0x10 | 0xee00ee0;
      fn_00734b4c(&local_18,0x10,1);
      goto LAB_001bf1d4;
    }
    local_14 = 0x802f00c0;
    uStack_10 = 0;
    local_c = 0;
    local_18 = *(int *)(param_1 + 0x50) << 0x10 | 0xee00eee;
  }
  fn_00734b4c(puVar1,0x10,1);
LAB_001bf1d4:
  if (param_3 == 0) {
    return;
  }
  fn_00734b4c(&DAT_007e0f14,0x50,1);
  return;
}



int * fn_001bf140(int *param_1,int param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  
  bVar2 = -1 < param_2;
  bVar3 = param_2 == 0;
  if (bVar2) {
    param_4 = *param_1;
  }
  piVar1 = (int *)0x0;
  if (bVar2) {
    bVar3 = param_4 == param_2;
  }
  if (!bVar3 && (bVar2 && param_2 <= param_4)) {
    piVar1 = param_1 + param_2 * 0x17 + 1;
  }
  return piVar1;
}



undefined4 fn_001bf0e8(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 local_18 [3];
  
  iVar1 = fn_001560d8(param_1 + 0x138,local_18);
  *(int *)(param_1 + 0x14) = iVar1;
  if (iVar1 < 0) {
    *(undefined4 *)(param_1 + 4) = 0xb;
    *(undefined4 *)(param_1 + 8) = 0xffffff80;
  }
  else {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *param_2 = local_18[0];
  }
  return *(undefined4 *)(param_1 + 4);
}



undefined4 fn_001bf0cc(void)

{
  undefined4 uVar1;
  
  if (DAT_008bf755 == '\0') {
    uVar1 = 0;
  }
  else {
    uVar1 = DAT_008bf774;
  }
  return uVar1;
}



undefined4 fn_001bf004(int param_1)

{
  int *piVar1;
  int iVar2;
  uint local_18;
  int *local_14;
  undefined1 local_10 [4];
  
  piVar1 = (int *)fn_00173d40(param_1,*(undefined4 *)(param_1 + 0x34));
  if (*piVar1 == 0x5000004) {
    local_10[0] = (undefined1)(int)(float)piVar1[1];
  }
  else {
    local_10[0] = (undefined1)piVar1[1];
  }
  local_14 = (int *)fn_0019ba68(*(undefined4 *)(param_1 + 0x8c),local_10,1);
  local_18 = 0x8000010;
  if (local_14 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    fn_00146590();
  }
  local_14[1] = local_14[1] + 1;
  fn_00173d1c(param_1,&local_18);
  if (((local_18 & 0x8000000) != 0) &&
     (iVar2 = local_14[1], local_14[1] = iVar2 + -1, iVar2 + -1 == 0)) {
    (**(code **)(*local_14 + 8))();
  }
  return 1;
}



void fn_001bee5c(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int local_1c [2];
  
  puVar1 = (undefined4 *)fn_007410e0();
  iVar2 = fn_00740b44(param_1);
  if ((iVar2 != 0) || (iVar2 = fn_001c0e78(param_1), iVar2 != 0)) goto LAB_001bef2c;
  local_1c[0] = 0;
  iVar2 = fn_00740b6c(param_1,(char *)&DAT_001bef54,puVar1[4] + 0x10,4,local_1c);
  if (local_1c[0] == 4) {
    if (iVar2 != 0) goto LAB_001bef2c;
    local_1c[0] = 0;
    iVar2 = fn_00740b6c(param_1,(char *)&DAT_001bef64,puVar1[4] + 0x14,4,local_1c);
    if (local_1c[0] == 4) {
      if (iVar2 != 0) goto LAB_001bef2c;
      local_1c[0] = 0;
      iVar2 = fn_00740b6c(param_1,(char *)&DAT_001bef74,puVar1[4],0x10,local_1c);
      if (local_1c[0] == 0x10) goto LAB_001bef2c;
    }
  }
  iVar2 = -0x386;
LAB_001bef2c:
  (*(code *)*puVar1)(iVar2,puVar1[1],param_1);
  fn_007407d4(puVar1);
  fn_00740adc(param_1);
  return;
}


