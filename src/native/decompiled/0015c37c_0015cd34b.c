#include "0015c37c_0015cd34b.h"



void fn_0015cd34(undefined4 param_1,undefined4 param_2,float *param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  float local_20;
  float local_1c;
  
  iVar1 = fn_00174864(DAT_008977e4);
  uVar2 = fn_00176d68(*(undefined4 *)(iVar1 + 4));
  fn_00174708(&local_20,param_2,uVar2);
  local_20 = local_20 + *param_3;
  local_1c = local_1c + param_3[1];
  uVar2 = fn_0016e8ec(param_1,&local_20);
  fn_0016e7a0(param_1,uVar2,param_4);
  return;
}



undefined4 *
fn_0015ccb8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
            undefined1 param_5)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0016a50c();
  *puVar1 = &DAT_0083773c;
  puVar1[2] = param_3;
  *(undefined1 *)(puVar1 + 3) = param_4;
  *(undefined1 *)((int)puVar1 + 0xd) = param_5;
  *(undefined1 *)((int)puVar1 + 0xe) = 0;
  *(undefined1 *)((int)puVar1 + 0xf) = 10;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[1] = param_2;
  puVar1[9] = 0;
  fn_0016c358(param_2,puVar1 + 5,puVar1 + 6,puVar1 + 7);
  return puVar1;
}



void fn_0015ccac(int param_1)

{
  *(undefined1 *)(param_1 + 0x89) = 1;
  return;
}



void fn_0015cca0(int param_1)

{
  *(undefined1 *)(param_1 + 0x89) = 0;
  return;
}



void fn_0015cba8(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = *(int **)(param_1 + 0x18);
  piVar1 = (int *)*piVar2;
  if (piVar1 != piVar2) {
    while (iVar3 = piVar1[2], *(int *)(iVar3 + 4) != param_2) {
      piVar1 = (int *)*piVar1;
      if (piVar1 == piVar2) {
        return;
      }
    }
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + -1;
  }
  return;
}


