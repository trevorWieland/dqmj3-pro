#include "002415b4_00241ddc.h"



undefined4 * fn_00241ddc(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  
  uVar4 = 0;
  *param_1 = &DAT_0081d340;
  iVar3 = (int)(param_1[2] - param_1[1]) >> 0x1f;
  if ((int)(param_1[2] - param_1[1]) / 0x34 + iVar3 != iVar3) {
    do {
      fn_001433d8(param_1[1] + uVar4 * 0x34);
      piVar5 = (int *)(param_1[4] + uVar4 * 4);
      piVar1 = (int *)*piVar5;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))();
      }
      *piVar5 = 0;
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uint)((int)(param_1[2] - param_1[1]) / 0x34));
  }
  uVar2 = param_1[4];
  uVar4 = uVar2;
  if ((uint)param_1[5] <= uVar2) {
    for (; uVar4 != param_1[5]; uVar4 = uVar4 + 4) {
    }
  }
  fn_001008c4(uVar2,(int)(param_1[6] - uVar2) >> 2,0);
  for (iVar3 = param_1[1]; iVar3 != param_1[2]; iVar3 = iVar3 + 0x34) {
  }
  iVar3 = param_1[1];
  fn_001008c4(iVar3,(param_1[3] - iVar3) / 0x34,0);
  return param_1;
}



int fn_00241d90(int param_1,uint param_2)

{
  if (((int)param_2 < 0) ||
     ((uint)((*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x34) <= param_2)) {
    return 0;
  }
  return *(int *)(param_1 + 4) + param_2 * 0x34;
}



undefined4 * fn_00241c1c(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = &DAT_0081d330;
  fn_001007b8(param_1,param_1 + 6);
  if (param_1[5] != 0) {
    fn_0014720c(param_1[1]);
    param_1[5] = 0;
  }
  fn_00109248(param_1);
  uVar2 = param_1[0x14];
  uVar1 = uVar2;
  if ((uint)param_1[0x15] < uVar2) {
    do {
      uVar1 = uVar1 + 4;
    } while (uVar1 != param_1[0x15]);
  }
  fn_001008c4(uVar2,(int)(param_1[0x16] - uVar2) >> 2,0);
  uVar2 = param_1[0xf];
  uVar1 = uVar2;
  if ((uint)param_1[0x10] <= uVar2) {
    for (; uVar1 != param_1[0x10]; uVar1 = uVar1 + 4) {
    }
  }
  fn_001008c4(uVar2,(int)(param_1[0x11] - uVar2) >> 2,0);
  uVar2 = param_1[10];
  uVar1 = uVar2;
  if ((uint)param_1[0xb] <= uVar2) {
    for (; uVar1 != param_1[0xb]; uVar1 = uVar1 + 4) {
    }
  }
  fn_001008c4(uVar2,(int)(param_1[0xc] - uVar2) >> 2,0);
  uVar2 = param_1[6];
  uVar1 = uVar2;
  if ((uint)param_1[7] <= uVar2) {
    for (; uVar1 != param_1[7]; uVar1 = uVar1 + 4) {
    }
  }
  fn_001008c4(uVar2,(int)(param_1[8] - uVar2) >> 2,0);
  uVar2 = param_1[2];
  uVar1 = uVar2;
  if ((uint)param_1[3] <= uVar2) {
    for (; uVar1 != param_1[3]; uVar1 = uVar1 + 4) {
    }
  }
  fn_001008c4(uVar2,(int)(param_1[4] - uVar2) >> 2,0);
  return param_1;
}



void fn_00241bd4(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x38) != 0) {
    uVar1 = fn_00156024(param_1,(char *)&DAT_0012f194);
    fn_0014720c(uVar1,*(undefined4 *)(param_1 + 0x38));
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  return;
}



void fn_002419f4(int param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *local_24;
  int local_20;
  
  uVar6 = *(undefined4 *)(param_2 + 0x48);
  *(int *)(param_1 + 0x24) = param_2;
  *(undefined4 *)(param_2 + 0x14) = 100;
  iVar7 = *(int *)(param_2 + 4);
  if (iVar7 != 0) {
    fn_0014720c(iVar7,param_2);
    fn_00147178(iVar7,param_2);
  }
  fn_00147178(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x24));
  fn_00162d44(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x24));
  iVar7 = fn_00145b00(0x20,&DAT_00812c8c);
  local_24 = (undefined4 *)0x0;
  if (iVar7 != 0) {
    local_24 = (undefined4 *)fn_00117720(iVar7,(char *)&DAT_00241b98);
    *local_24 = &DAT_007ce640;
  }
  fn_0010fcd0(param_1 + 0x28,&local_24);
  puVar1 = local_24;
  iVar7 = local_24[1];
  local_24[5] = 6;
  if (iVar7 != 0) {
    fn_0014720c(iVar7,local_24);
    fn_00147178(iVar7,puVar1);
  }
  uVar2 = fn_00156024(param_1,(char *)&DAT_00241bb4);
  fn_00147178(uVar2,local_24);
  iVar7 = fn_00145b00(0x34,&DAT_00812c8c);
  local_20 = 0;
  if (iVar7 != 0) {
    uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x20);
    uVar2 = fn_00176d68(uVar6);
    uVar6 = fn_00176d68(uVar6);
    fn_00117984();
    uVar3 = fn_0010fa20();
    local_20 = fn_005e8abc(iVar7,uVar3,uVar6,uVar2,param_3,uVar4,"RenderNodeSubL");
  }
  fn_0010fcd0(param_1 + 0x28,&local_20);
  iVar7 = local_20;
  iVar5 = *(int *)(local_20 + 4);
  *(undefined4 *)(local_20 + 0x14) = 5;
  if (iVar5 != 0) {
    fn_0014720c(iVar5,local_20);
    fn_00147178(iVar5,iVar7);
  }
  fn_00147178(local_24,local_20);
  return;
}



void fn_00241948(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  *(int *)(param_1 + 0x48) = param_2;
  *(undefined4 *)(param_2 + 0x14) = 4;
  iVar2 = *(int *)(param_2 + 4);
  if (iVar2 != 0) {
    fn_0014720c(iVar2,param_2);
    fn_00147178(iVar2,param_2);
  }
  uVar1 = fn_00156024(param_1,(char *)&DAT_0012f1f8);
  fn_00147178(uVar1,param_2);
  *(int *)(param_1 + 0x4c) = param_3;
  *(undefined4 *)(param_3 + 0x14) = 4;
  iVar2 = *(int *)(param_3 + 4);
  if (iVar2 != 0) {
    fn_0014720c(iVar2,param_3);
    fn_00147178(iVar2,param_3);
  }
  uVar1 = fn_00156024(param_1,(char *)&DAT_0012f194);
  fn_00147178(uVar1,param_3);
  return;
}



void fn_00241760(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int local_24 [2];
  
  uVar4 = *(undefined4 *)(param_2 + 0x48);
  *(int *)(param_1 + 0x14) = param_2;
  *(undefined4 *)(param_2 + 0x14) = 100;
  iVar6 = *(int *)(param_2 + 4);
  if (iVar6 != 0) {
    fn_0014720c(iVar6,param_2);
    fn_00147178(iVar6,param_2);
  }
  fn_00147178(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x14));
  fn_00162d44(*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x24));
  iVar6 = fn_00145b00(0x34,&DAT_00812c8c);
  local_24[0] = 0;
  if (iVar6 != 0) {
    uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x20);
    uVar1 = fn_00176d68(uVar4);
    uVar4 = fn_00176d68(uVar4);
    fn_00117984();
    uVar2 = fn_0010fa20();
    local_24[0] = fn_005e8abc(iVar6,uVar2,uVar4,uVar1,param_3,uVar3,"RenderNodeL");
  }
  fn_0010fcd0(param_1 + 0x18,local_24);
  iVar6 = local_24[0];
  iVar5 = *(int *)(local_24[0] + 4);
  *(undefined4 *)(local_24[0] + 0x14) = 0x10;
  if (iVar5 != 0) {
    fn_0014720c(iVar5,local_24[0]);
    fn_00147178(iVar5,iVar6);
  }
  uVar4 = fn_00156024(param_1,(char *)&DAT_00241920);
  fn_00147178(uVar4,local_24[0]);
  iVar5 = fn_00145b00(0x24,&DAT_00812c8c);
  iVar6 = 0;
  if (iVar5 != 0) {
    iVar6 = fn_00109a7c(iVar5,DAT_00897810,(char *)&DAT_00241930);
  }
  local_24[0] = iVar6;
  fn_0010fcd0(param_1 + 0x18,local_24);
  iVar6 = local_24[0];
  iVar5 = *(int *)(local_24[0] + 4);
  *(undefined4 *)(local_24[0] + 0x14) = 0xc;
  if (iVar5 != 0) {
    fn_0014720c(iVar5,local_24[0]);
    fn_00147178(iVar5,iVar6);
  }
  uVar4 = fn_00156024(param_1,(char *)&DAT_00241920);
  fn_00147178(uVar4,local_24[0]);
  return;
}



void fn_002416b4(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  *(int *)(param_1 + 0x34) = param_2;
  *(undefined4 *)(param_2 + 0x14) = 10;
  iVar2 = *(int *)(param_2 + 4);
  if (iVar2 != 0) {
    fn_0014720c(iVar2,param_2);
    fn_00147178(iVar2,param_2);
  }
  uVar1 = fn_00156024(param_1,(char *)&DAT_0012f1f8);
  fn_00147178(uVar1,param_2);
  *(int *)(param_1 + 0x38) = param_3;
  *(undefined4 *)(param_3 + 0x14) = 10;
  iVar2 = *(int *)(param_3 + 4);
  if (iVar2 != 0) {
    fn_0014720c(iVar2,param_3);
    fn_00147178(iVar2,param_3);
  }
  uVar1 = fn_00156024(param_1,(char *)&DAT_0012f194);
  fn_00147178(uVar1,param_3);
  return;
}



void fn_002415b4(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  
  *param_1 = &PTR_FUN_0081d30c;
  fn_00117984();
  fn_0010fa20();
  fn_006eb278();
  fn_005e2a9c();
  bVar4 = *(char *)((int)param_1 + 0x75) != '\0';
  iVar1 = 0;
  if (bVar4) {
    iVar1 = param_1[8];
  }
  if (bVar4 && iVar1 != 0) {
    fn_0010c7e8();
    fn_002feef8();
  }
  uVar2 = param_1[0x1a];
  uVar3 = uVar2;
  if ((uint)param_1[0x1b] < uVar2) {
    do {
      uVar3 = uVar3 + 4;
    } while (uVar3 != param_1[0x1b]);
  }
  fn_001008c4(uVar2,(int)(param_1[0x1c] - uVar2) >> 2,0);
  if ((int *)param_1[0x13] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x13] + 4))();
  }
  if (param_1[0xb] != 0) {
    fn_005e40b4();
    fn_002feef8();
  }
  if (param_1[10] != 0) {
    fn_001cd614();
    fn_002feef8();
  }
  if ((int *)param_1[9] != (int *)0x0) {
    (**(code **)(*(int *)param_1[9] + 4))();
  }
  fn_005e6a40(param_1);
  return;
}


