#include "0057979c_00579dbca.h"



void fn_00579c3c(int param_1,int param_2)

{
  undefined4 uVar1;
  
  *(int *)(param_1 + 0xc) = param_2;
  uVar1 = fn_001287d4(param_2 * 0x3c,&DAT_00812c8c);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



void fn_00579ad0(undefined4 *param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  
  *param_1 = &DAT_00841658;
  if (param_1[0x37] != -1) {
    fn_0016a43c(param_1[0x39]);
  }
  uVar1 = 0;
  do {
    if (param_1[uVar1 * 0xc + 4] != -1) {
      piVar2 = (int *)param_1[uVar1 * 0xc + 5];
      iVar3 = param_1[uVar1 * 0xc + 0xc];
      if (piVar2 != (int *)0x0 && iVar3 != 0) {
        (**(code **)(*piVar2 + 0x14))(piVar2,iVar3);
        (**(code **)(*piVar2 + 0xc))(piVar2,iVar3);
      }
      piVar2 = (int *)param_1[uVar1 * 0xc + 5];
      iVar3 = param_1[uVar1 * 0xc + 0xd];
      if (piVar2 != (int *)0x0 && iVar3 != 0) {
        (**(code **)(*piVar2 + 0x14))(piVar2,iVar3);
        (**(code **)(*piVar2 + 0xc))(piVar2,iVar3);
      }
      piVar2 = (int *)param_1[uVar1 * 0xc + 5];
      iVar3 = param_1[uVar1 * 0xc + 0xe];
      if (piVar2 != (int *)0x0 && iVar3 != 0) {
        (**(code **)(*piVar2 + 0x14))(piVar2,iVar3);
        (**(code **)(*piVar2 + 0xc))(piVar2,iVar3);
      }
      piVar2 = (int *)param_1[uVar1 * 0xc + 5];
      iVar3 = param_1[uVar1 * 0xc + 0xf];
      if (piVar2 != (int *)0x0 && iVar3 != 0) {
        (**(code **)(*piVar2 + 0x14))(piVar2,iVar3);
        (**(code **)(*piVar2 + 0xc))(piVar2,iVar3);
      }
      fn_0016a43c(param_1[0x39],param_1[uVar1 * 0xc + 4]);
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 4);
  if (param_1[0x36] != -1) {
    fn_00192f50(param_1[0x39]);
    param_1[0x36] = 0xffffffff;
  }
  fn_006896f4(param_1);
  return;
}



int fn_00579a04(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined1 param_5,undefined4 param_6)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)fn_0068af70();
  *puVar1 = &DAT_00841658;
  iVar2 = fn_00101a1c(puVar1 + 4,&LAB_0057992c,0x30,4);
  *(undefined1 *)(iVar2 + 0xd0) = param_5;
  *(undefined4 *)(iVar2 + 0xd4) = param_3;
  *(undefined1 *)(iVar2 + 0xd8) = 0;
  *(undefined1 *)(iVar2 + 0xd9) = 0;
  *(undefined4 *)(iVar2 + 0xdc) = 0xffffffff;
  uVar3 = fn_0016dd18(param_3,10);
  *(undefined4 *)(iVar2 + 200) = uVar3;
  uVar3 = fn_0016dcdc(param_3,uVar3,param_4,1,1,param_6);
  *(undefined4 *)(iVar2 + 0xcc) = uVar3;
  *(undefined4 *)(iVar2 + 0xc4) = 0;
  uVar3 = fn_00178f9c(param_3,uVar3);
  *(undefined4 *)(iVar2 + 0xc4) = uVar3;
  *(undefined4 *)(iVar2 + 0xc0) = 0;
  return iVar2 + -0x10;
}



void fn_00579968(int param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  iVar1 = *(int *)(*(int *)(param_1 + 0xd4) + 0x10);
  *(undefined4 *)(iVar1 + 0x1c) = *param_2;
  *(undefined4 *)(iVar1 + 0x20) = uVar3;
  *(undefined4 *)(iVar1 + 0x24) = uVar4;
  *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xef | 0x10;
  uVar2 = 0;
  do {
    uVar3 = param_2[1];
    uVar4 = param_2[2];
    iVar5 = param_1 + uVar2 * 0x30;
    uVar2 = uVar2 + 1;
    iVar1 = *(int *)(*(int *)(iVar5 + 0x14) + 0x10);
    *(undefined4 *)(iVar1 + 0x1c) = *param_2;
    *(undefined4 *)(iVar1 + 0x20) = uVar3;
    *(undefined4 *)(iVar1 + 0x24) = uVar4;
    *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xef | 0x10;
    iVar1 = *(int *)(iVar5 + 0x24);
    iVar5 = *(int *)(iVar5 + 0x18);
    uVar3 = *(undefined4 *)(iVar1 + 0x20);
    uVar4 = *(undefined4 *)(iVar1 + 0x24);
    *(undefined4 *)(iVar5 + 0x1c) = *(undefined4 *)(iVar1 + 0x1c);
    *(undefined4 *)(iVar5 + 0x20) = uVar3;
    *(undefined4 *)(iVar5 + 0x24) = uVar4;
    *(byte *)(iVar5 + 0x44) = *(byte *)(iVar5 + 0x44) & 0xef | 0x10;
  } while (uVar2 < 4);
  return;
}



void fn_005798b4(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  *(undefined1 *)(param_1 + param_2 + 0xd0) = 1;
  if (param_3 == 0) {
    param_1 = param_1 + param_2 * 0x30;
    iVar1 = *(int *)(param_1 + 0x1c);
    *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe | 1;
    iVar1 = *(int *)(param_1 + 0x20);
    *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe;
    return;
  }
  if (*(char *)(param_1 + 0xe8) == '\0') {
    *(byte *)(*(int *)(param_1 + 0x7c) + 0x44) =
         *(byte *)(*(int *)(param_1 + 0x7c) + 0x44) & 0xfe | 1;
    *(byte *)(*(int *)(param_1 + 0x80) + 0x44) = *(byte *)(*(int *)(param_1 + 0x80) + 0x44) & 0xfe;
  }
  return;
}



bool fn_00579864(int param_1,int param_2)

{
  float in_s0;
  undefined1 auStack_40 [28];
  float local_24;
  
  fn_001781f0(auStack_40,*(int *)(param_1 + param_2 * 0x30 + 0x28) + 0x48);
  return in_s0 <= local_24;
}



bool fn_00579814(int param_1,int param_2)

{
  float in_s0;
  undefined1 auStack_40 [28];
  float local_24;
  
  fn_001781f0(auStack_40,*(int *)(param_1 + param_2 * 0x30 + 0x28) + 0x48);
  return local_24 <= in_s0;
}



void fn_005797d8(int param_1,undefined4 *param_2,int param_3)

{
  undefined1 auStack_38 [12];
  undefined4 local_2c;
  undefined4 local_1c;
  
  fn_001781f0(auStack_38,*(int *)(param_1 + param_3 * 0x30 + 0x28) + 0x48);
  *param_2 = local_2c;
  param_2[1] = local_1c;
  return;
}



void fn_0057979c(int param_1,undefined4 *param_2,int param_3)

{
  undefined1 auStack_38 [12];
  undefined4 local_2c;
  undefined4 local_1c;
  
  fn_001781f0(auStack_38,*(int *)(param_1 + param_3 * 0x30 + 0x2c) + 0x48);
  *param_2 = local_2c;
  param_2[1] = local_1c;
  return;
}


