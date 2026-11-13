#include "005871e0_005882c8a.h"



void fn_00587ad4(int param_1)

{
  fn_002feca8(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}



void fn_00587aa0(int param_1)

{
  int iVar1;
  
  fn_005818e4();
  fn_002feca8(*(undefined4 *)(param_1 + 0x124));
  *(undefined4 *)(param_1 + 0x124) = 0;
  fn_002feef8(*(undefined4 *)(param_1 + 0x11c));
  *(undefined4 *)(param_1 + 0x11c) = 0;
  iVar1 = *(int *)(param_1 + 0x104);
  fn_002feca8(*(undefined4 *)(iVar1 + 8));
  *(undefined4 *)(iVar1 + 8) = 0;
  return;
}



void fn_00587a78(int param_1,int param_2)

{
  undefined4 uVar1;
  
  *(int *)(param_1 + 0xc) = param_2;
  uVar1 = fn_001287d4(param_2 * 0x28,&DAT_00812c8c);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



void fn_00587a18(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
                 undefined1 param_5,undefined1 param_6)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0016a50c();
  puVar1[2] = param_3;
  *puVar1 = &DAT_0084333c;
  puVar1[1] = param_2;
  *(undefined1 *)(puVar1 + 3) = param_4;
  *(undefined1 *)((int)puVar1 + 0xd) = param_5;
  *(undefined1 *)((int)puVar1 + 0xe) = param_6;
  *(undefined1 *)((int)puVar1 + 0xf) = 0;
  puVar1[4] = 0;
  *(undefined1 *)(puVar1 + 5) = 0;
  *(undefined1 *)((int)puVar1 + 0x15) = 0;
  *(undefined1 *)((int)puVar1 + 0x16) = 0;
  return;
}



undefined4 fn_00587364(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float in_s1;
  
  uVar1 = fn_00182994(DAT_008977e4);
  uVar2 = fn_001659c0(uVar1,(int)(char)param_2,(int)(char)param_3);
  uVar1 = fn_00182994(DAT_008977e4);
  iVar3 = fn_0015532c(uVar1,param_2,param_3);
  iVar4 = iVar3;
  if (iVar3 < 0) {
    iVar4 = -iVar3;
  }
  fn_0016c1f4(uVar2,(char *)&DAT_00587468);
  uVar1 = fn_00182994(DAT_008977e4);
  fVar5 = 30.0;
  fn_0015ad60(uVar1,uVar2 & 0xff);
  uVar1 = fn_00182994(DAT_008977e4);
  uVar1 = fn_00174bac(uVar1,uVar2 & 0xff);
  fn_0017a7fc(uVar1,param_3);
  uVar1 = fn_00182994(DAT_008977e4);
  fn_001755cc(uVar1,uVar2 & 0xff,5,iVar4,0,(int)fVar5,(int)in_s1);
  uVar1 = fn_00182994(DAT_008977e4);
  fn_0020838c(uVar1,uVar2 & 0xff,iVar3);
  uVar1 = fn_00182994(DAT_008977e4);
  fn_00182c40(uVar1,uVar2 & 0xff,0,1);
  return 0x2d;
}



void fn_00587294(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_0084322c;
  if (param_1[0x2a] != 0) {
    fn_003cbff8();
    fn_002feef8();
  }
  if ((int *)param_1[0x28] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x28] + 4))();
  }
  fn_002feef8(param_1[0x27]);
  if ((int *)param_1[0x26] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x26] + 4))();
  }
  if ((int *)param_1[0x25] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x25] + 4))();
  }
  if ((int *)param_1[0x24] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x24] + 4))();
  }
  if ((int *)param_1[0x23] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x23] + 4))();
  }
  if ((int *)param_1[0x22] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x22] + 4))();
  }
  fn_0068ad5c(param_1);
  return;
}



undefined4 * fn_005871e0(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)fn_0068ab5c();
  *puVar1 = &PTR_FUN_0084322c;
  puVar1[0x19] = &DAT_00859420;
  puVar1[0x1a] = 0;
  puVar1[0x1b] = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  puVar1[0x1e] = 0;
  uVar3 = *(undefined4 *)(param_2 + 8);
  puVar1[0x20] = 0xffffffff;
  puVar1[0x1f] = uVar3;
  puVar1[0x21] = 0xffffffff;
  puVar1[0x22] = 0;
  puVar1[0x23] = 0;
  puVar1[0x24] = 0;
  puVar1[0x25] = 0;
  puVar1[0x26] = 0;
  puVar2 = (undefined4 *)fn_00145b00(0xc,&DAT_00812c8c);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  puVar1[0x27] = puVar2;
  puVar1[0x28] = 0;
  puVar1[0x2a] = 0;
  return puVar1;
}


