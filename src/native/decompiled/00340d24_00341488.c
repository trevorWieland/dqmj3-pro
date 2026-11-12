#include "00340d24_00341488.h"



void fn_00341488(int param_1)

{
  fn_00144834(*(undefined4 *)(&DAT_008920ac + param_1 * 4));
  return;
}



void fn_00341378(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  
  if (param_1 < 0) {
    uVar4 = 1;
    do {
      fn_00341378(uVar4,param_2);
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0xb);
    return;
  }
  iVar1 = fn_00154ac8(*(undefined4 *)(&DAT_00892080 + param_1 * 4));
  if (iVar1 != param_2) {
    uVar2 = fn_006f751c(DAT_008977e0);
    if (param_2 == 0) {
      fn_0023d3f4(*(undefined4 *)(DAT_008977e0 + 0x2c),0x757c);
      fn_0023d3f4(*(undefined4 *)(DAT_008977e0 + 0x2c),0x9c42);
      fn_00340d24(uVar2);
      DAT_008c9338 = 0;
    }
    else {
      fn_002a4648(*(undefined4 *)(DAT_008977e0 + 0x2c),0x9c42);
      fn_002a4648(*(undefined4 *)(DAT_008977e0 + 0x2c),0x757c);
    }
    piVar3 = (int *)fn_006f7624(DAT_008977e0);
    (**(code **)(*piVar3 + 0x34))();
  }
  if (DAT_00891fac != param_2) {
    DAT_00891fac = (char)param_2;
  }
  fn_00144834(*(undefined4 *)(&DAT_00892080 + param_1 * 4),param_2);
  return;
}



void fn_0034133c(void)

{
  fn_00163890();
  return;
}



uint fn_003412c0(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 1;
  while ((*(int *)(&DAT_00892080 + uVar3 * 4) < 1 || (iVar1 = fn_00154ac8(), iVar1 == 0))) {
    while( true ) {
      uVar3 = uVar3 + 1;
      if (10 < uVar3) {
        return 0xffffffff;
      }
      if (-1 < (int)uVar3) break;
      uVar2 = 1;
      do {
        iVar1 = fn_00341260(uVar2);
        if (iVar1 != 0) {
          return uVar3;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < 0xb);
    }
  }
  return uVar3;
}



undefined4 fn_003411d8(uint param_1)

{
  int iVar1;
  uint uVar2;
  
code_r0x003411d8:
  do {
    if (-1 < (int)param_1) {
      return *(undefined4 *)(&DAT_00892080 + param_1 * 4);
    }
    param_1 = 1;
    while ((*(int *)(&DAT_00892080 + param_1 * 4) < 1 || (iVar1 = fn_00154ac8(), iVar1 == 0))) {
      while( true ) {
        param_1 = param_1 + 1;
        if (10 < param_1) {
          param_1 = 0xffffffff;
          goto code_r0x003411d8;
        }
        if (-1 < (int)param_1) break;
        uVar2 = 1;
        do {
          iVar1 = fn_00341260(uVar2);
          if (iVar1 != 0) goto code_r0x003411d8;
          uVar2 = uVar2 + 1;
        } while (uVar2 < 0xb);
      }
    }
  } while( true );
}



undefined4 fn_00341260(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if (param_1 < 0) {
    uVar3 = 1;
    do {
      iVar1 = fn_00341260(uVar3);
      if (iVar1 != 0) {
        return 1;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0xb);
  }
  else if (0 < *(int *)(&DAT_00892080 + param_1 * 4)) {
    uVar2 = fn_00154ac8();
    return uVar2;
  }
  return 0;
}



void fn_003410f8(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  uVar1 = fn_006f7a9c(DAT_008977e0);
  uVar2 = fn_00277748(uVar1,param_2);
  uVar3 = fn_006b7664(uVar1,uVar2);
  fn_0033fe38(param_1,uVar3);
  fn_00279ae4(uVar1,uVar2);
  iVar8 = *(int *)(param_1 + 0x10);
  iVar7 = *(int *)(param_1 + 0x14);
  iVar6 = iVar8;
  if (iVar8 != iVar7) {
    do {
      iVar5 = *(int *)(iVar6 + 8);
      for (iVar4 = iVar5; iVar4 != *(int *)(iVar6 + 0xc); iVar4 = iVar4 + 0x20) {
      }
      fn_001008c4(iVar5,*(int *)(iVar6 + 0x10) - iVar5 >> 5,0);
      iVar6 = iVar6 + 0x14;
    } while (iVar6 != iVar7);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + ((iVar7 - iVar8) / 0x14) * -0x14;
  }
  return;
}



void fn_003410ec(int param_1,int param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + param_2 + 0x53) = param_3;
  return;
}



void fn_00340fe4(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  puVar4 = *(undefined4 **)(param_1 + 0x1c);
  puVar5 = *(undefined4 **)(param_1 + 0x20);
  if (puVar4 != puVar5) {
    uVar2 = (int)puVar5 - (int)puVar4;
    iVar3 = (int)((longlong)(int)uVar2 * -0x6db6db6d + ((ulonglong)uVar2 << 0x20) >> 0x20);
    fn_007aa78c(puVar4,puVar5,(iVar3 >> 4) - (iVar3 >> 0x1f),fn_00611424);
    if ((int)uVar2 < 0x1c1) {
      fn_007a33a4(puVar4,puVar5,fn_00611424);
    }
    else {
      fn_007a33a4(puVar4,puVar4 + 0x70,fn_00611424);
      for (puVar4 = puVar4 + 0x70; puVar4 != puVar5; puVar4 = puVar4 + 7) {
        local_40 = *puVar4;
        uStack_3c = puVar4[1];
        uStack_38 = puVar4[2];
        uStack_34 = puVar4[3];
        uStack_30 = puVar4[4];
        uStack_2c = puVar4[5];
        uStack_28 = puVar4[6];
        iVar3 = fn_00611424(&local_40);
        puVar1 = puVar4;
        while (iVar3 != 0) {
          *puVar1 = puVar1[-7];
          puVar1[1] = puVar1[-6];
          puVar1[2] = puVar1[-5];
          puVar1[3] = puVar1[-4];
          puVar1[4] = puVar1[-3];
          puVar1[5] = puVar1[-2];
          puVar1[6] = puVar1[-1];
          iVar3 = fn_00611424(&local_40);
          puVar1 = puVar1 + -7;
        }
        *puVar1 = local_40;
        puVar1[1] = uStack_3c;
        puVar1[2] = uStack_38;
        puVar1[3] = uStack_34;
        puVar1[4] = uStack_30;
        puVar1[5] = uStack_2c;
        puVar1[6] = uStack_28;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  return;
}



undefined1 * fn_00340eb4(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_s0;
  undefined1 auStack_20 [12];
  
  if (DAT_008c9338 == '\0') {
    fn_00128f40(auStack_20);
    fn_006f751c(DAT_008977e0);
    uVar1 = fn_00118290();
    iVar2 = fn_0011c184(L"rom:/data/Field/Table/holy_rail_param.nut",uVar1,4,5);
    if (iVar2 != 0) {
      fn_00145ac0();
    }
    uVar1 = fn_0012a26c(iVar2);
    uVar3 = fn_00145ac0(iVar2);
    fn_00128ee0(auStack_20,uVar3,uVar1);
    fn_0012d73c(iVar2);
    DAT_008c9338 = '\x01';
    fn_005f6dac(auStack_20,(char *)&DAT_00340fd0,0);
    DAT_008c933c = in_s0;
    fn_005f6dac(auStack_20,(char *)&DAT_00340fd0,1);
    DAT_008c9340 = in_s0;
    fn_005f6dac(auStack_20,(char *)&DAT_00340fd0,2);
    DAT_008c9344 = in_s0;
    fn_005f6dac(auStack_20,(char *)&DAT_00340fd0,3);
    DAT_008c9348 = in_s0;
    fn_00128fc4(auStack_20);
  }
  return &DAT_008c9338;
}



void fn_00340e64(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_2 == 3) {
    iVar1 = 500;
  }
  else {
    if (param_2 != 2) {
      param_3 = param_3 * 10;
      goto LAB_00340e8c;
    }
    iVar1 = 100;
  }
  param_3 = param_3 * iVar1;
LAB_00340e8c:
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + param_3;
  fn_00688bf4(*(undefined4 *)(param_1 + 0x3c));
  fn_00341c34(*(undefined4 *)(param_1 + 0x3c));
  return;
}



void fn_00340d24(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 unaff_r4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 in_lr;
  
  iVar8 = *(int *)(param_1 + 0x10);
  iVar6 = *(int *)(param_1 + 0x14);
  iVar5 = iVar8;
  if (iVar8 != iVar6) {
    do {
      iVar3 = *(int *)(iVar5 + 8);
      for (iVar1 = iVar3; iVar1 != *(int *)(iVar5 + 0xc); iVar1 = iVar1 + 0x20) {
      }
      fn_001008c4(iVar3,*(int *)(iVar5 + 0x10) - iVar3 >> 5,0);
      iVar5 = iVar5 + 0x14;
    } while (iVar5 != iVar6);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + ((iVar6 - iVar8) / 0x14) * -0x14;
  }
  uVar4 = *(uint *)(param_1 + 0x1c);
  uVar7 = *(uint *)(param_1 + 0x20);
  if (uVar4 != uVar7) {
    uVar2 = uVar4;
    if (uVar7 <= uVar4) {
      do {
        uVar2 = uVar2 + 0x1c;
      } while (uVar2 != uVar7);
    }
    iVar5 = (int)((longlong)(int)(uVar7 - uVar4) * -0x6db6db6d +
                  ((ulonglong)(uVar7 - uVar4) << 0x20) >> 0x20);
    *(uint *)(param_1 + 0x20) = uVar7 + ((iVar5 >> 4) - (iVar5 >> 0x1f)) * -0x1c;
  }
  uVar7 = *(uint *)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  uVar2 = *(uint *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x20) = 0;
  iVar5 = *(int *)(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x24) = 0;
  uVar4 = uVar7;
  if (uVar2 < uVar7) {
    do {
      uVar4 = uVar4 + 0x1c;
    } while (uVar4 != uVar2);
  }
  uVar4 = iVar5 - uVar7;
  iVar5 = (int)((longlong)(int)uVar4 * -0x6db6db6d + ((ulonglong)uVar4 << 0x20) >> 0x20);
  fn_002feef8(uVar7,(iVar5 >> 4) - (iVar5 >> 0x1f),0,uVar7,unaff_r4,in_lr);
  return;
}


