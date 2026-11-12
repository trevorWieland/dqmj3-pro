#include "00264700_00264fd4a.h"



undefined4 fn_002649e8(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_98 [128];
  undefined1 auStack_18 [12];
  
  uVar1 = fn_0068c6ac(DAT_008977e8);
  uVar1 = fn_006ada94(uVar1,param_2);
  fn_00101a50(auStack_98,0x80,L"rom:/data/Field/Env/env%03d.xbb",uVar1);
  uVar1 = fn_00118290();
  iVar2 = fn_0011c184(auStack_98,uVar1,0x80,5);
  iVar3 = fn_00145ac0();
  if (iVar3 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    *(int *)(*(int *)(param_1 + 0x1c) + 0xd4) = iVar2;
    uVar1 = 0;
    if (iVar2 != 0) {
      uVar1 = fn_00145ac0();
    }
    fn_00118624(auStack_18,uVar1);
    uVar1 = fn_006edd88(auStack_18,0);
    iVar2 = fn_00179fc4(param_1,0x36,uVar1);
    if (iVar2 == 0) {
      fn_005f5d3c(auStack_18);
      return 0xffffffff;
    }
    fn_005f5d3c(auStack_18);
    uVar1 = 0x36;
  }
  return uVar1;
}



undefined4 fn_002649b0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int local_18 [2];
  int iStack_10;
  undefined4 uStack_c;
  
  iStack_10 = param_1;
  uStack_c = param_2;
  fn_00785f5c(local_18,param_1 + 0x28,&uStack_c);
  if (local_18[0] == *(int *)(param_1 + 0x38)) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined4 *)(local_18[0] + 0x14);
  }
  return uVar1;
}



undefined4 fn_002648f8(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_90 [128];
  
  uVar1 = fn_0068c6ac(DAT_008977e8);
  uVar1 = fn_006adb48(uVar1,param_2);
  fn_00101a50(auStack_90,0x80,L"rom:/data/Race/Hit/%s_S.bin",uVar1);
  uVar1 = 0x39;
  uVar2 = fn_00118290();
  uVar2 = fn_0011c184(auStack_90,uVar2,0x80,5);
  iVar3 = fn_00145ac0();
  if (iVar3 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xe4) = uVar2;
  }
  return uVar1;
}



undefined4 fn_002648b8(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  if ((uint)((*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x34) < 0x82) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)(*(int *)(param_1 + 4) + 0x1a34);
  }
  if (*piVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 0x81;
  }
  return uVar2;
}



undefined4 fn_002647b8(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_90 [128];
  
  uVar1 = fn_0068c6ac(DAT_008977e8);
  uVar1 = fn_006adb48(uVar1,param_2);
  fn_00101a50(auStack_90,0x80,L"rom:/data/Race/NaviMesh/%s_Navi.bin",uVar1);
  uVar1 = 0x84;
  uVar2 = fn_001287b4();
  uVar2 = fn_0011c184(auStack_90,uVar2,0x80,5);
  iVar3 = fn_00145ac0();
  if (iVar3 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x210) = uVar2;
  }
  return uVar1;
}



undefined4 fn_00264700(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_90 [128];
  
  uVar1 = fn_0068c6ac(DAT_008977e8);
  uVar1 = fn_006adb48(uVar1,param_2);
  fn_00101a50(auStack_90,0x80,L"rom:/data/Race/Hit/%s_F.bin",uVar1);
  uVar1 = 0x37;
  uVar2 = fn_00118290();
  uVar2 = fn_0011c184(auStack_90,uVar2,0x80,5);
  iVar3 = fn_00145ac0();
  if (iVar3 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xdc) = uVar2;
  }
  return uVar1;
}


