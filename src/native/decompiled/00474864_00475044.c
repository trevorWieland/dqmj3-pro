#include "00474864_00475044.h"



void fn_00475044(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined4 local_38;
  undefined1 local_34 [4];
  undefined *local_30;
  code *pcStack_2c;
  undefined4 uStack_28;
  undefined *local_24;
  undefined1 auStack_20 [12];
  
  iVar1 = fn_001249d0();
  iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x6c));
  if (iVar1 == 0) {
    local_38 = 0x80010004;
  }
  else {
    if (*(char *)(param_1 + 0xb0) != '\x02') {
      local_30 = *(undefined **)(param_1 + 0xd8);
      pcStack_2c = *(code **)(param_1 + 0xdc);
      uStack_28 = *(undefined4 *)(param_1 + 0xe0);
      fn_004b2e84(param_1,&local_30);
      return;
    }
    if (*(int *)(param_1 + 0x108) - 1U < 299) {
      fn_0047525c(&local_30,param_1,param_1 + 0x10c);
      fn_004b2e84(param_1,&local_30);
      return;
    }
    local_34[0] = 0;
    puVar3 = *(undefined1 **)(param_1 + 0x110);
    if (puVar3 == *(undefined1 **)(param_1 + 0x114)) {
      fn_0079b730(param_1 + 0x10c,puVar3,local_34);
    }
    else {
      *(undefined1 **)(param_1 + 0x110) = puVar3 + 1;
      if (puVar3 != (undefined1 *)0x0) {
        *puVar3 = 0;
      }
    }
    local_38 = 0x8005000b;
    if ((*(char *)(param_1 + 0x118) == '\0') && (iVar1 = *(int *)(param_1 + 0x108), iVar1 != 0x19d))
    {
      if (iVar1 < 0x19d) {
        if (iVar1 == 0x133) {
          iVar1 = fn_004b626c(*(undefined4 *)(param_1 + 0x120),&DAT_00475258);
          if ((iVar1 == 0) && (*(uint *)(param_1 + 0x104) < 5)) {
            fn_00170fa4(param_1 + 0x70,param_1 + 0x11c);
LAB_004751a8:
            pcStack_2c = fn_00475e00;
            uStack_28 = 0;
            local_24 = &DAT_00475258;
            local_30 = &DAT_00853500;
            fn_00479c98(param_1,&local_30);
            return;
          }
LAB_004751fc:
          local_38 = 0x80050019;
          uVar2 = fn_004b8d4c(auStack_20,&local_38);
          fn_004b2e84(param_1,uVar2);
          return;
        }
        if (iVar1 == 400 || iVar1 == 0x193) goto LAB_00475178;
      }
      else {
        if (iVar1 == 500) {
          if (*(int *)(param_1 + 0x104) == 0) goto LAB_004751a8;
          goto LAB_004751fc;
        }
        if (iVar1 == 0x1f7) {
          local_38 = 0x8005001b;
          goto LAB_00475178;
        }
      }
      local_38 = 0x8005001a;
    }
  }
LAB_00475178:
  uVar2 = fn_004b8d4c(&local_30,&local_38);
  fn_004b2e84(param_1,uVar2);
  return;
}



undefined4 * fn_00474f88(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  *param_1 = &DAT_0085343c;
  (**(code **)(DAT_008e778c + 8))();
  if (*(char *)(param_1 + 4) != '\0') {
    if (param_1[1] == 0) {
      puVar1 = &DAT_008e76a0;
    }
    else {
      puVar1 = *(undefined4 **)(*DAT_008e76e4 + param_1[1] * 4);
    }
    if ((uint)param_1[2] < 0xf) {
      puVar1[param_1[2] + 1] = 0;
    }
    else {
      fn_0015ebe4(L"D:/home/jenkins/workspace/Manual-Pack/5129d543/OnlineCore/src/Core/InstantiationContext.cpp"
                   ,0x55,0xe0000003,0);
    }
  }
  (**(code **)(DAT_008e778c + 0xc))(&DAT_008e778c);
  return param_1;
}



undefined4 * fn_00474f84(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  *param_1 = &DAT_0085343c;
  (**(code **)(DAT_008e778c + 8))();
  if (*(char *)(param_1 + 4) != '\0') {
    if (param_1[1] == 0) {
      puVar1 = &DAT_008e76a0;
    }
    else {
      puVar1 = *(undefined4 **)(*DAT_008e76e4 + param_1[1] * 4);
    }
    if ((uint)param_1[2] < 0xf) {
      puVar1[param_1[2] + 1] = 0;
    }
    else {
      fn_0015ebe4(L"D:/home/jenkins/workspace/Manual-Pack/5129d543/OnlineCore/src/Core/InstantiationContext.cpp"
                   ,0x55,0xe0000003,0);
    }
  }
  (**(code **)(DAT_008e778c + 0xc))(&DAT_008e778c);
  return param_1;
}



undefined4 * fn_00474e88(undefined4 *param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  
  *param_1 = &DAT_0085343c;
  (**(code **)(DAT_008e778c + 8))();
  *(undefined1 *)(param_1 + 4) = 0;
  if (param_3 == 0) {
    iVar1 = fn_0048e1f0(&DAT_008e76a0,param_1,param_2);
    if (iVar1 == 0) goto LAB_00474f5c;
LAB_00474f14:
    param_1[1] = param_3;
    param_1[2] = param_2;
    param_1[3] = 0;
    *(undefined1 *)(param_1 + 4) = 1;
  }
  else {
    if (param_3 < (uint)(DAT_008e76e4[1] - *DAT_008e76e4 >> 2)) {
      iVar1 = *(int *)(*DAT_008e76e4 + param_3 * 4);
      if (iVar1 == 0) {
        fn_0015ebe4(L"D:/home/jenkins/workspace/Manual-Pack/5129d543/OnlineCore/src/Core/InstanceTable.cpp"
                     ,0x9e,0xe0000008,0);
        goto LAB_00474f5c;
      }
      iVar1 = fn_0048e1f0(iVar1,param_1,param_2);
      if (iVar1 != 0) goto LAB_00474f14;
    }
    fn_0015ebe4(L"D:/home/jenkins/workspace/Manual-Pack/5129d543/OnlineCore/src/Core/InstanceTable.cpp"
                 ,0xa5,0xe0000003,0);
  }
LAB_00474f5c:
  (**(code **)(DAT_008e778c + 0xc))(&DAT_008e778c);
  return param_1;
}



void fn_00474e4c(int param_1,undefined4 param_2)

{
  (**(code **)(DAT_008e778c + 8))(&DAT_008e778c);
  *(undefined4 *)(param_1 + 0xc) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00474e80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(DAT_008e778c + 0xc))(&DAT_008e778c);
  return;
}



void fn_00474c1c(void)

{
  int iVar1;
  
  iVar1 = fn_00474c4c();
  if (iVar1 == 0) {
    return;
  }
  if (*(code **)(iVar1 + -8) == (code *)0x0) {
    fn_0030233c();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00474c3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + -8))();
  return;
}



int fn_004748d8(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 local_44 [2];
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28 [2];
  
  param_1[1] = 0;
  param_1[1] = 1;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[3] = &DAT_00855a94;
  *param_1 = &DAT_0085342c;
  fn_0015e6f0(param_1 + 4,&DAT_007db524);
  puVar1 = (undefined4 *)fn_00488798(param_1 + 5);
  *puVar1 = &DAT_0085335c;
  puVar1[3] = 0;
  puVar1 = (undefined4 *)fn_004745d8(puVar1 + 4,1);
  *puVar1 = &PTR_LAB_00854110;
  iVar2 = fn_004b4334(puVar1 + 10);
  iVar3 = fn_00169c08(&local_3c,0xffff8000);
  if (iVar3 < 0) {
    fn_0015e294();
  }
  local_38 = local_3c;
  local_34 = 0;
  fn_001777e0(local_28,iVar2,&local_38);
  *(undefined4 *)(local_28[0] + 0x14) = 0;
  puVar1 = (undefined4 *)fn_00488798(iVar2 + 0x1c);
  *puVar1 = &DAT_0085335c;
  puVar1[3] = 0;
  puVar1 = (undefined4 *)fn_004745d8(puVar1 + 4,1);
  *puVar1 = &PTR_LAB_00854110;
  iVar2 = fn_004b4334(puVar1 + 10);
  iVar3 = fn_00169c08(&local_38,0xffff8000);
  if (iVar3 < 0) {
    fn_0015e294();
  }
  local_30 = local_38;
  local_2c = 0;
  fn_001777e0(local_28,iVar2,&local_30);
  *(undefined4 *)(local_28[0] + 0x14) = 0;
  puVar1 = (undefined4 *)fn_00488798(iVar2 + 0x1c);
  *puVar1 = &DAT_00853340;
  puVar1[3] = 0;
  puVar1 = (undefined4 *)fn_004745d8(puVar1 + 4,1);
  *puVar1 = &PTR_LAB_00854110;
  puVar1[10] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  *(undefined1 *)(puVar1 + 0x10) = 0;
  *(char *)((int)puVar1 + 0x41) = (char)puVar1;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  piVar7 = puVar1 + 10;
  puVar1[0xb] = 0;
  piVar4 = (int *)fn_0015ece0(0xc);
  iVar2 = fn_0015ece0(0x300);
  piVar4[2] = iVar2;
  *piVar4 = *piVar7;
  piVar4[1] = 0x20;
  *piVar7 = (int)piVar4;
  iVar2 = piVar4[2];
  puVar1[0xc] = iVar2;
  puVar1[0xd] = iVar2 + 0x300;
  puVar5 = (undefined1 *)puVar1[0xc];
  puVar1[0xc] = puVar5 + 0x18;
  *(undefined4 *)(puVar5 + 8) = 0;
  *(undefined4 *)(puVar5 + 0xc) = 0;
  *puVar5 = 0;
  puVar1[0xe] = puVar5;
  *(undefined4 *)(puVar5 + 4) = 0;
  *(undefined4 *)(puVar1[0xe] + 8) = puVar1[0xe];
  *(undefined4 *)(puVar1[0xe] + 0xc) = puVar1[0xe];
  iVar2 = fn_00169c08(local_44,0xffff8000);
  if (iVar2 < 0) {
    fn_0015e294();
  }
  local_38 = local_44[0];
  puVar6 = (undefined4 *)fn_00785e14(piVar7,&local_38);
  *puVar6 = 0;
  piVar7 = puVar1 + 0x11;
  *piVar7 = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  *(undefined1 *)(puVar1 + 0x17) = 0;
  *(char *)((int)puVar1 + 0x5d) = (char)puVar6;
  puVar1[0x14] = 0;
  puVar1[0x13] = 0;
  puVar1[0x12] = 0;
  piVar4 = (int *)fn_0015ece0(0xc);
  iVar2 = fn_0015ece0(0x480);
  piVar4[2] = iVar2;
  *piVar4 = *piVar7;
  piVar4[1] = 0x20;
  *piVar7 = (int)piVar4;
  iVar2 = piVar4[2];
  puVar1[0x13] = iVar2;
  puVar1[0x14] = iVar2 + 0x480;
  puVar5 = (undefined1 *)puVar1[0x13];
  puVar1[0x13] = puVar5 + 0x24;
  *(undefined4 *)(puVar5 + 8) = 0;
  *(undefined4 *)(puVar5 + 0xc) = 0;
  *puVar5 = 0;
  puVar1[0x15] = puVar5;
  *(undefined4 *)(puVar5 + 4) = 0;
  *(undefined4 *)(puVar1[0x15] + 8) = puVar1[0x15];
  *(undefined4 *)(puVar1[0x15] + 0xc) = puVar1[0x15];
  puVar1 = (undefined4 *)fn_004b32f4(puVar1 + 0x18);
  *puVar1 = &DAT_00855c68;
  *(undefined1 *)(puVar1 + 4) = 2;
  *(undefined1 *)((int)puVar1 + 0x11) = 0;
  puVar1 = (undefined4 *)fn_004b32f4(puVar1 + 7);
  *puVar1 = &DAT_00855ce4;
  puVar1[4] = 1;
  puVar1[5] = 0;
  iVar2 = fn_0045a5c8(puVar1 + 6);
  *(undefined4 *)(iVar2 + 0x20) = 0;
  *(undefined4 *)(iVar2 + 0x24) = 0;
  *(undefined4 *)(iVar2 + 0x28) = 0;
  *(undefined1 *)(iVar2 + 0x2c) = 1;
  DAT_008b637c = 0;
  fn_0013d438(iVar2 + -0x154,L"255.255.255.255");
  return iVar2 + -0x160;
}



int fn_00474864(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  (**(code **)(DAT_008e932c + 8))();
  if (DAT_008b63dc == 0) {
    (**(code **)(DAT_008e932c + 0xc))(&DAT_008e932c);
    return 0;
  }
  iVar3 = *(int *)(DAT_008b63dc + 4);
  iVar2 = fn_001249d0();
  iVar1 = 0;
  if (iVar2 != 0) {
    iVar1 = iVar3;
  }
  if ((iVar2 != 0 && iVar3 != 0) && -1 < iVar1) {
    iVar3 = iVar3 + -1;
  }
  (**(code **)(DAT_008e932c + 0xc))(&DAT_008e932c);
  return iVar3;
}


