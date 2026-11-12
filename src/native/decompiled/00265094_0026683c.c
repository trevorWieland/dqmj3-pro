#include "00265094_0026683c.h"



void fn_0026683c(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  *(undefined1 *)(iVar1 + 0x70) = 1;
  *(undefined4 *)(iVar1 + 0x4c) = param_2;
                    /* WARNING: Subroutine does not return */
  fn_001638a0();
}



undefined4 * fn_002667cc(undefined4 *param_1)

{
  undefined1 *puVar1;
  
  *param_1 = &DAT_0081df70;
  puVar1 = (undefined1 *)fn_00145b00(0x24,&DAT_00812c8c);
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 4) = 0;
    *(undefined4 *)(puVar1 + 8) = 0;
  }
  param_1[1] = puVar1;
  return param_1;
}



int fn_0026567c(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [4];
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  puVar1 = (undefined4 *)fn_001129d0(param_1,0x8c);
  piVar4 = puVar1 + 7;
  *puVar1 = &DAT_0081df60;
  *piVar4 = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar2 = (undefined4 *)fn_00100fc6(0x230,0);
  iVar3 = 0x8c;
  *piVar4 = (int)puVar2;
  do {
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0;
    }
    iVar3 = iVar3 + -1;
    puVar2 = puVar2 + 1;
  } while (iVar3 != 0);
  puVar1[8] = *piVar4 + 0x230;
  puVar1[9] = *piVar4 + 0x230;
  iVar3 = fn_007860fc(puVar1 + 10,auStack_48,auStack_44);
  iVar3 = fn_007860fc(iVar3 + 0x1c,auStack_40,auStack_3c);
  iVar3 = fn_007860fc(iVar3 + 0x1c,auStack_38,auStack_34);
  iVar3 = fn_007860fc(iVar3 + 0x1c,auStack_30,auStack_2c);
  iVar3 = fn_007860fc(iVar3 + 0x1c,auStack_28,auStack_24);
  iVar3 = fn_007860fc(iVar3 + 0x1c,auStack_20,auStack_1c);
  return iVar3 + -0xb4;
}



void fn_0026561c(undefined4 param_1)

{
  fn_00264f50(param_1,0x43,L"rom:/data/Race/Obj/o_rac_19.bch",0,0);
  return;
}



void fn_002655b0(undefined4 param_1)

{
  int iVar1;
  wchar16 *local_34 [8];
  
  iVar1 = 0;
  local_34[0] = L"rom:/data/Field/Item/o_item01B.bch";
  local_34[1] = L"rom:/data/Race/Obj/o_rac_23.bch";
  local_34[2] = L"rom:/data/Race/Obj/o_rac_28.bch";
  local_34[3] = L"rom:/data/Race/Obj/o_rac_25.bch";
  local_34[4] = L"rom:/data/Race/Obj/o_rac_26.bch";
  local_34[5] = L"rom:/data/Race/Obj/o_rac_27.bch";
  local_34[6] = L"rom:/data/Race/Obj/o_rac_29.bch";
  do {
    fn_00264f50(param_1,iVar1 + 0x85,local_34[iVar1],0,0);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 7);
  return;
}



void fn_00265538(int param_1,uint param_2)

{
  if (-1 < (int)param_2) {
    if (param_2 < (uint)((*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x34)) {
      if (*(int *)(param_1 + 4) + param_2 * 0x34 != 0) {
        fn_0012f208(param_1,param_2);
      }
    }
  }
  if (*(int *)(*(int *)(param_1 + 0x1c) + param_2 * 4) != 0) {
    fn_0012d73c();
    *(undefined4 *)(*(int *)(param_1 + 0x1c) + param_2 * 4) = 0;
  }
  return;
}



void fn_00265490(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_90 [132];
  
  uVar1 = fn_0068c6ac(DAT_008977e8);
  iVar2 = fn_006adb24(uVar1,param_2);
  if (iVar2 != -1) {
    fn_00101a50(auStack_90,0x80,L"rom:/data/Field/Sky/sky%03d.bch",iVar2);
    fn_00264f50(param_1,1,auStack_90,1,0);
  }
  return;
}



void fn_002653fc(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_90 [132];
  
  uVar1 = fn_0068c6ac(DAT_008977e8);
  uVar1 = fn_006adb48(uVar1,param_2);
  fn_00101a50(auStack_90,0x80,L"rom:/data/Race/Map/%s.bch",uVar1);
  fn_00264f50(param_1,0,auStack_90,1,0);
  return;
}



int fn_002653b0(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = param_2 + 0x85;
  if (((int)uVar1 < 0) || ((uint)((*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x34) <= uVar1))
  {
    return 0;
  }
  return *(int *)(param_1 + 4) + uVar1 * 0x34;
}



undefined4 fn_0026536c(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined2 local_10 [2];
  int local_c;
  
  local_10[0] = fn_00242950(param_2);
  fn_00785f5c(&local_c,param_1 + 0x98,local_10);
  if (local_c == *(int *)(param_1 + 0xa8)) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined4 *)(local_c + 0x14);
  }
  return uVar1;
}



undefined4 fn_00265328(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined2 local_10 [2];
  int local_c;
  
  local_10[0] = fn_00242950(param_2);
  fn_00785f5c(&local_c,param_1 + 0x7c,local_10);
  if (local_c == *(int *)(param_1 + 0x8c)) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined4 *)(local_c + 0x14);
  }
  return uVar1;
}



int fn_0026520c(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_128;
  int local_124;
  undefined2 local_120 [2];
  int local_11c;
  undefined1 auStack_118 [128];
  undefined1 auStack_98 [128];
  undefined1 auStack_18 [8];
  
  fn_00301f50(auStack_118,0x80);
  fn_001f8424(auStack_118,0x80,param_2,param_3);
  fn_00101a50(auStack_98,0x80,L"rom:/data/Motion/%s.bch",auStack_118);
  local_120[0] = fn_00242950(param_2);
  fn_00785f5c(&local_11c,param_1 + 0x98,local_120);
  if (local_11c == *(int *)(param_1 + 0xa8)) {
    iVar1 = 0x5b;
    do {
      if (*(int *)(*(int *)(param_1 + 0x1c) + iVar1 * 4) == 0) goto LAB_002652b0;
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0x79);
    iVar1 = -1;
LAB_002652b0:
    local_128 = 1;
    iVar1 = fn_00264f50(param_1,iVar1,auStack_98,1);
    if (iVar1 != -1) {
      local_128 = CONCAT22(((unsigned int)(local_128) >> 16) & 0xffff,local_120[0]);
      local_124 = iVar1;
      fn_00785fc4(auStack_18,param_1 + 0x98,&local_128);
    }
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}



int fn_00265110(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 local_ac [2];
  undefined1 auStack_a8 [128];
  int local_28 [2];
  undefined2 local_20 [2];
  int local_1c;
  undefined1 auStack_18 [12];
  
  uVar1 = fn_00242950(param_2);
  local_ac[0] = (undefined2)uVar1;
  fn_00101a50(auStack_a8,0x80,L"rom:/data/Motion/m%03dr.bch",uVar1);
  fn_00785f5c(local_28,param_1 + 0x7c,local_ac);
  if (local_28[0] == *(int *)(param_1 + 0x8c)) {
    iVar2 = 0x5b;
    do {
      if (*(int *)(*(int *)(param_1 + 0x1c) + iVar2 * 4) == 0) goto LAB_0026518c;
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x79);
    iVar2 = -1;
LAB_0026518c:
    iVar2 = fn_00264f50(param_1,iVar2,auStack_a8,0,1);
    if (iVar2 != -1) {
      local_20[0] = local_ac[0];
      local_1c = iVar2;
      fn_00785fc4(auStack_18,param_1 + 0x7c,local_20);
    }
  }
  else {
    iVar2 = -1;
  }
  return iVar2;
}



undefined4 fn_002650cc(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined2 local_10 [2];
  int local_c;
  
  local_10[0] = fn_00242950(param_2);
  fn_00785f5c(&local_c,param_1 + 0x60,local_10);
  if (local_c == *(int *)(param_1 + 0x70)) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined4 *)(local_c + 0x14);
  }
  return uVar1;
}



undefined4 fn_00265094(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int local_18 [2];
  int iStack_10;
  undefined4 uStack_c;
  
  iStack_10 = param_1;
  uStack_c = param_2;
  fn_00785f5c(local_18,param_1 + 0x44,&uStack_c);
  if (local_18[0] == *(int *)(param_1 + 0x54)) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined4 *)(local_18[0] + 0x14);
  }
  return uVar1;
}


