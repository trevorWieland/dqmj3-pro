#include "001b536c_001b5a4c.h"



undefined4 * fn_001b5a30(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)0x0;
  if (DAT_008bf6c6 != '\0') {
    puVar1 = &DAT_008e9a99;
  }
  return puVar1;
}



undefined4 fn_001b5a14(void)

{
  undefined4 uVar1;
  
  if (DAT_008bf755 == '\0') {
    uVar1 = 0;
  }
  else {
    uVar1 = DAT_008bf764;
  }
  return uVar1;
}



undefined4 fn_001b59f8(void)

{
  undefined4 uVar1;
  
  if (DAT_008bf754 == '\0') {
    uVar1 = 0;
  }
  else {
    uVar1 = DAT_008bf76c;
  }
  return uVar1;
}



void fn_001b586c(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *local_b0 [25];
  int local_4c;
  undefined1 auStack_48 [24];
  undefined1 auStack_30 [16];
  
  puVar1 = (undefined4 *)fn_007410e0();
  iVar2 = fn_00740b44(param_1);
  if ((iVar2 == 0) && (iVar2 = fn_001c0e78(param_1), iVar2 == 0)) {
    local_b0[0] = &local_4c;
    iVar3 = fn_00740b6c(param_1,(char *)&DAT_001b59bc,auStack_48,0x10);
    iVar2 = iVar3;
    if (iVar3 == 0) {
      iVar2 = local_4c;
    }
    if (iVar3 == 0 && iVar2 == 0x10) {
      iVar3 = fn_00740a4c();
      if (iVar3 == 0) {
        iVar2 = -0x191;
      }
      else {
        local_b0[0] = (int *)&DAT_00000001;
        iVar2 = fn_00740840(iVar3,(char *)&DAT_001b59c8,puVar1[3],0x100);
        if (iVar2 == 0) {
          fn_001b24a0(local_b0);
          fn_003019f0(local_b0,auStack_48,0x10);
          uVar4 = fn_001b490c();
          fn_003019f0(local_b0,uVar4,0x10);
          fn_001b2214(local_b0,auStack_30);
          local_b0[0] = (int *)&DAT_00000001;
          iVar2 = fn_00740840(iVar3,(char *)&DAT_001b59e0,auStack_30,0x10);
          if ((iVar2 == 0) &&
             (iVar2 = fn_00740ee8(iVar3,(char *)&DAT_001b59ec,fn_001b54ec,puVar1), iVar2 == 0))
          goto LAB_001b59ac;
        }
        fn_00740adc(iVar3);
      }
    }
    else {
      iVar2 = -0x386;
    }
  }
  fn_001ba680(0);
  (*(code *)*puVar1)(iVar2,puVar1[1],param_1);
  fn_007407d4(puVar1);
LAB_001b59ac:
  fn_00740adc(param_1);
  return;
}



undefined4 *
fn_001b57b8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  iVar1 = fn_00145b00(0x194,&DAT_00812c8c,param_3,param_4,param_4);
  puVar3 = (undefined4 *)0x0;
  if (iVar1 != 0) {
    iVar1 = fn_00693f00(iVar1,param_1);
    puVar2 = (undefined4 *)fn_00289390(iVar1 + 0x174,iVar1);
    puVar3 = puVar2 + -0x5d;
    *puVar2 = &DAT_007bfa8c;
    *puVar3 = &DAT_007bf944;
    if (1 < (int)(puVar2[-9] - puVar2[-10]) / 0xc) {
      fn_001da490(puVar3,0,0,0xffffffff,0);
      fn_001da490(puVar3,1,1,0xffffffff,1);
    }
  }
  return puVar3;
}



undefined4 * fn_001b55a4(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint local_30;
  uint local_2c [2];
  
  puVar1 = (undefined4 *)fn_00145b00(0x44,&DAT_00812c8c);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &DAT_007bfba4;
    iVar2 = fn_00145b00(8,&DAT_00812c8c);
    uVar3 = 0;
    if (iVar2 != 0) {
      uVar3 = fn_00692eac();
    }
    piVar7 = puVar1 + 5;
    puVar1[1] = uVar3;
    puVar1[3] = 0xffffffff;
    puVar1[2] = 0;
    puVar1[4] = 0xffffffff;
    *piVar7 = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
    puVar1[0x10] = 0;
    local_30 = 0x14;
    if ((uint)((puVar1[7] - *piVar7) / 0x2c) < 0x14) {
      uVar9 = (puVar1[6] - *piVar7) / 0x2c;
      local_2c[0] = uVar9 + (uVar9 >> 1) + (uVar9 >> 3);
      if (local_2c[0] < uVar9 + 0x20) {
        local_2c[0] = uVar9 + 0x20;
      }
      puVar6 = local_2c;
      if (local_2c[0] < 0x15) {
        puVar6 = &local_30;
      }
      uVar9 = *puVar6;
      iVar4 = fn_00100fc6(uVar9 * 0x2c,0);
      iVar10 = puVar1[6];
      iVar8 = iVar4;
      for (iVar2 = *piVar7; iVar2 != iVar10; iVar2 = iVar2 + 0x2c) {
        if (iVar8 != 0) {
          iVar5 = fn_001c6ba4(iVar8,iVar2);
          *(undefined4 *)(iVar5 + 0x28) = *(undefined4 *)(iVar2 + 0x28);
        }
        iVar8 = iVar8 + 0x2c;
      }
      iVar8 = puVar1[6];
      for (iVar2 = *piVar7; iVar2 != iVar8; iVar2 = iVar2 + 0x2c) {
        fn_002fedf4(iVar2);
      }
      fn_001008c4(*piVar7,(puVar1[7] - *piVar7) / 0x2c,0);
      iVar2 = *piVar7;
      *piVar7 = iVar4;
      puVar1[6] = iVar4 + ((puVar1[6] - iVar2) / 0x2c) * 0x2c;
      puVar1[7] = iVar4 + uVar9 * 0x2c;
    }
  }
  return puVar1;
}



void fn_001b54ec(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int local_24;
  undefined1 auStack_20 [16];
  
  puVar2 = (undefined4 *)fn_007410e0();
  iVar3 = fn_00740b44(param_1);
  if ((iVar3 == 0) && (iVar3 = fn_001c0e78(param_1), iVar3 == 0)) {
    iVar4 = fn_00740b6c(param_1,(char *)&DAT_001b5598,auStack_20,0x10,&local_24);
    iVar1 = iVar4;
    if (iVar4 == 0) {
      iVar1 = local_24;
    }
    if (iVar4 == 0 && iVar1 == 0x10) {
      fn_001b4928(auStack_20);
      goto LAB_001b5528;
    }
    iVar3 = -0x386;
  }
  fn_001ba680(0);
LAB_001b5528:
  (*(code *)*puVar2)(iVar3,puVar2[1],param_1);
  fn_007407d4(puVar2);
  fn_00740adc(param_1);
  return;
}



undefined4 fn_001b53f4(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  fn_00113d34();
  iVar1 = fn_0044bcec();
  uVar3 = 0xfffffc7a;
  if (iVar1 == 0) {
    uVar2 = fn_0044bb24();
    if ((uVar2 & 0x80000000) != 0) {
      if (uVar2 == 0x209ff9) {
        uVar3 = 0xfffffe6e;
      }
      return uVar3;
    }
    DAT_00899ea5 = 1;
  }
  iVar1 = fn_0052c6ec();
  if (iVar1 == 0) {
    uVar2 = fn_0052c494();
    if ((uVar2 & 0x80000000) != 0) {
      return 0xfffffc7a;
    }
    DAT_00899ea6 = 1;
  }
  fn_001b5a4c();
  return 0;
}



void fn_001b5a4c(void)

{
  int iVar1;
  code *local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  undefined *local_10;
  undefined1 *local_c;
  
  DAT_00899eb8 = (undefined4 *)fn_00741220(8);
  if (DAT_00899eb8 == (undefined4 *)0x0) {
    DAT_00899eb8 = (undefined4 *)0x0;
  }
  else {
    *DAT_00899eb8 = 0;
    *(undefined1 *)(DAT_00899eb8 + 1) = 1;
  }
  DAT_00899eb4 = 1;
  local_18 = 4;
  local_14 = &LAB_0010fbd0;
  local_1c = fn_00603934;
  local_10 = &DAT_0010fbec;
  local_c = &LAB_0010fbe0;
  iVar1 = fn_0044fb14(DAT_00899eb8,&local_18,&DAT_0010b2a0,&local_1c,0x500,0x10,0xfffffffe);
  if (iVar1 < 0) {
    fn_0015e294();
  }
  return;
}



undefined4 fn_001b536c(int param_1)

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
  iVar1 = fn_00157c74(param_1,iVar4,1,0);
  if (iVar1 < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


