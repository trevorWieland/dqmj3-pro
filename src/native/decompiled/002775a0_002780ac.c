#include "002775a0_002780ac.h"



int fn_002780ac(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_98 [132];
  
  iVar1 = 0x1d0;
  do {
    if (*(int *)(*(int *)(param_1 + 0x20) + iVar1 * 0x14) == 0) goto LAB_002780e8;
    iVar1 = iVar1 + 4;
  } while (iVar1 < 0x1ec);
  iVar1 = -1;
LAB_002780e8:
  uVar2 = fn_006afaf4(*(undefined4 *)(DAT_008977e0 + 0x1c),param_2);
  fn_00101a50(auStack_98,0x80,L"rom:/data/Field/Map/%s.bch",uVar2);
  fn_002775a0(param_1,iVar1,auStack_98,0,0,0x80,(int)(short)param_2);
  return iVar1;
}



void fn_00277e84(undefined4 *param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_c0 [128];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 auStack_30 [24];
  
  fn_001c6d44(&local_40);
  fn_005f5cd8(auStack_30);
  fn_00101a50(auStack_c0,0x80,L"rom:/data/Field/Env/env%03d.xbb",param_3);
  uVar1 = fn_00118290();
  uVar1 = fn_0011c184(auStack_c0,uVar1,0x80,5);
  fn_00279cb4(*(undefined4 *)(param_2 + 0x2c),uVar1,auStack_c0,4,0);
  uVar1 = fn_00145ac0(uVar1);
  fn_005f5cac(auStack_30,uVar1);
  iVar2 = fn_006eddec(auStack_30,0);
  if (iVar2 != 0) {
    uVar1 = fn_006edd88(auStack_30,0);
    iVar2 = fn_00179fc4(param_2,0x13d,uVar1);
    if (iVar2 != 0) {
      local_40 = 0x13d;
    }
  }
  iVar2 = fn_006eddec(auStack_30,1);
  if (iVar2 != 0) {
    uVar1 = fn_006edd88(auStack_30,1);
    iVar2 = fn_00179fc4(param_2,0x13e,uVar1);
    if (iVar2 != 0) {
      local_3c = 0x13e;
    }
  }
  if (param_4 != -1) {
    fn_00101a50(auStack_c0,0x80,L"rom:/data/Field/Env/env%03d.xbb",param_4);
    uVar1 = fn_00118290();
    uVar1 = fn_0011c184(auStack_c0,uVar1,0x80,5);
    fn_00279cb4(*(int *)(param_2 + 0x2c) + 0x14,uVar1,auStack_c0,4,0);
    uVar1 = fn_00145ac0(uVar1);
    fn_005f5cac(auStack_30,uVar1);
    iVar2 = fn_006eddec(auStack_30,0);
    if (iVar2 != 0) {
      uVar1 = fn_006edd88(auStack_30,0);
      iVar2 = fn_00179fc4(param_2,0x13f,uVar1);
      if (iVar2 != 0) {
        local_38 = 0x13f;
      }
    }
  }
  fn_005f5d3c(auStack_30);
  *param_1 = local_40;
  param_1[1] = local_3c;
  param_1[2] = local_38;
  return;
}



void fn_00277e5c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = 0x5e;
  do {
    fn_00279ae4(param_1,iVar1);
    iVar1 = iVar1 + -1;
  } while (0xe < iVar1);
  return;
}



void fn_00277d7c(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0x156;
  iVar3 = iVar4;
  do {
    if (*(int *)(*(int *)(param_2 + 0x20) + iVar3 * 0x14) == 0) goto LAB_00277dcc;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x17e);
  iVar3 = -1;
LAB_00277dcc:
  uVar1 = fn_00278c50(param_2,iVar3,param_3,0,0,1,0);
  do {
    if (*(int *)(*(int *)(param_2 + 0x20) + iVar4 * 0x14) == 0) goto LAB_00277e20;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x17e);
  iVar4 = -1;
LAB_00277e20:
  uVar2 = fn_00278c50(param_2,iVar4,param_3,1,0,0,0);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = 0xffffffff;
  return;
}



undefined4 fn_00277c48(int param_1,short param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 auStack_98 [132];
  
  uVar2 = 0x13b;
  if (*(int *)(*(int *)(param_1 + 0x20) + 0x189c) != 0) {
    uVar2 = 0xffffffff;
  }
  if (param_3 == 0) {
    uVar1 = fn_006afaf4(*(undefined4 *)(DAT_008977e0 + 0x1c));
    fn_00101a50(auStack_98,0x80,L"rom:/data/Field/Hit/%s_W.bin",uVar1);
  }
  else {
    uVar1 = fn_006afaf4(*(undefined4 *)(DAT_008977e0 + 0x1c));
    fn_00101a50(auStack_98,0x80,L"rom:/data/Field/Hit/%s_GT_W.bin",uVar1);
  }
  fn_002775a0(param_1,uVar2,auStack_98,4,0,0xffffff80,(int)param_2);
  return uVar2;
}



undefined4 fn_00277bd0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_90 [128];
  
  uVar1 = 0x185;
  if (*(int *)(*(int *)(param_1 + 0x20) + 0x1e64) != 0) {
    uVar1 = 0xffffffff;
  }
  fn_00101a50(auStack_90,0x80,L"rom:/data/Field/Pos/%c_lucky.xbb",param_2);
  fn_002775a0(param_1,uVar1,auStack_90,4,0,0x80,0);
  return uVar1;
}



int fn_00277b10(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_98 [132];
  
  iVar1 = 0x1ba;
  do {
    if (*(int *)(*(int *)(param_1 + 0x20) + iVar1 * 0x14) == 0) goto LAB_00277b4c;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x1c4);
  iVar1 = -1;
LAB_00277b4c:
  fn_00101a50(auStack_98,0x80,L"rom:/data/Motion/Face/%s.bch",param_2);
  fn_002775a0(param_1,iVar1,auStack_98,1,0,0x80,0);
  return iVar1;
}



void fn_00277ae0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = 0x181;
  do {
    fn_00279ae4(param_1,iVar1);
    iVar1 = iVar1 + -1;
  } while (0x17d < iVar1);
  return;
}



void fn_00277aa4(undefined4 param_1)

{
  int iVar1;
  
  fn_00279ae4(param_1,0x1cf);
  iVar1 = 0x155;
  do {
    fn_00279ae4(param_1,iVar1);
    iVar1 = iVar1 + -1;
  } while (0x141 < iVar1);
  return;
}



undefined4 fn_00277a14(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0x1cd;
  if (*(int *)(*(int *)(param_1 + 0x20) + 0x2404) != 0) {
    uVar1 = 0xffffffff;
  }
  fn_002775a0(param_1,uVar1,L"rom:/data/Model/Boy.bch",2,0,0x80,0);
  return uVar1;
}



int fn_00277960(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_90 [128];
  
  iVar1 = 0x5f;
  do {
    if (*(int *)(*(int *)(param_1 + 0x20) + iVar1 * 0x14) == 0) goto LAB_0027799c;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x61);
  iVar1 = -1;
LAB_0027799c:
  fn_00101a50(auStack_90,0x80,L"rom:/data/Parameter/%s.tb",param_2);
  fn_002775a0(param_1,iVar1,auStack_90,4,0,0x80,0);
  return iVar1;
}



undefined4 fn_002778ac(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_90 [128];
  
  uVar1 = 0x186;
  if (*(int *)(*(int *)(param_1 + 0x20) + 0x1e78) != 0) {
    uVar1 = 0xffffffff;
  }
  fn_00101a50(auStack_90,0x80,L"rom:/data/Field/Pos/%c_aura.xbb",param_2);
  fn_002775a0(param_1,uVar1,auStack_90,4,0,0x80,0);
  return uVar1;
}



int fn_002777fc(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_90 [128];
  
  iVar1 = 0x188;
  do {
    if (*(int *)(*(int *)(param_1 + 0x20) + iVar1 * 0x14) == 0) goto LAB_00277838;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x1ba);
  iVar1 = -1;
LAB_00277838:
  fn_00101a50(auStack_90,0x80,L"rom:/data/Motion/%s.bch",param_2);
  fn_002775a0(param_1,iVar1,auStack_90,1,0,0x80,0);
  return iVar1;
}



undefined4 fn_00277748(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_90 [128];
  
  uVar1 = 0x1ee;
  if (*(int *)(*(int *)(param_1 + 0x20) + 0x2698) != 0) {
    uVar1 = 0xffffffff;
  }
  fn_00101a50(auStack_90,0x80,L"rom:/data/Field/Obj/%s_RAIL.bin",param_2);
  fn_002775a0(param_1,uVar1,auStack_90,4,0,0x80,0);
  return uVar1;
}



undefined4
fn_002775a0(int param_1,int param_2,undefined4 param_3,int param_4,int param_5,undefined4 param_6,
            undefined4 param_7)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  if (param_4 == 4) {
    if (param_5 == 0) {
      uVar1 = fn_00118290();
      uVar1 = fn_0011c184(param_3,uVar1,param_6,5);
    }
    else {
      uVar1 = fn_00118290();
      uVar1 = fn_0012d6b0(param_3,uVar1,param_6,5);
    }
  }
  else if (param_5 == 0) {
    uVar1 = fn_001287b0();
    uVar1 = fn_0011c184(param_3,uVar1,0x80,5);
  }
  else {
    uVar1 = fn_001287b0();
    uVar1 = fn_0012d6b0(param_3,uVar1,0x80,5);
  }
  fn_00279cb4(*(int *)(param_1 + 0x20) + param_2 * 0x14,uVar1,param_3,param_4,param_7);
  if (param_5 == 0) {
    puVar2 = (undefined4 *)(*(int *)(param_1 + 0x20) + param_2 * 0x14);
    switch(*(undefined1 *)(puVar2 + 4)) {
    case 0:
      uVar1 = fn_00145ac0(*puVar2);
      uVar3 = fn_006f7a9c(DAT_008977e0);
      fn_00179fc4(uVar3,param_2,uVar1);
      break;
    case 1:
      uVar1 = fn_00145ac0(*puVar2);
      uVar3 = fn_006f7a9c(DAT_008977e0);
      fn_0014a614(uVar3,param_2,uVar1);
      break;
    case 2:
      uVar1 = fn_00145ac0(*puVar2);
      uVar3 = fn_006f7a9c(DAT_008977e0);
      fn_00179dc0(uVar3,param_2,uVar1);
    }
  }
  return 1;
}


