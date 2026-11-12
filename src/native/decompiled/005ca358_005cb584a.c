#include "005ca358_005cb584a.h"



void fn_005cacf0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_003bc118();
  *puVar1 = &PTR_LAB_0084b2b4;
  *(undefined2 *)(puVar1 + 0x2a) = 0;
  puVar1[0x2b] = 0;
  return;
}



void fn_005ca88c(undefined4 param_1,undefined4 param_2,uint param_3)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  uint uVar3;
  int iVar4;
  undefined2 uStack_32;
  undefined2 local_30 [18];
  
  puVar1 = (undefined2 *)fn_0022f584((char *)&DAT_005ca910,0);
  uVar3 = 0;
  if (0 < (int)param_3) {
    puVar2 = &uStack_32;
    if ((param_3 & 1) != 0) {
      local_30[0] = *puVar1;
      puVar2 = local_30;
    }
    for (iVar4 = (int)param_3 >> 1; iVar4 != 0; iVar4 = iVar4 + -1) {
      puVar2[1] = *puVar1;
      puVar2 = puVar2 + 2;
      *puVar2 = *puVar1;
    }
    uVar3 = param_3;
  }
  local_30[uVar3] = 0;
  fn_00190d50(param_2);
  return;
}



void fn_005ca68c(int param_1)

{
  short sVar1;
  
  sVar1 = *(short *)(*(int *)(param_1 + 0x98) + 0x1c);
  if (*(short *)(param_1 + 0xa8) != sVar1) {
    *(short *)(param_1 + 0xa8) = sVar1;
  }
  return;
}



void fn_005ca640(int param_1)

{
  if (*(int **)(param_1 + 0xac) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xac) + 0x18))();
    if (*(int **)(param_1 + 0xac) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0xac) + 4))();
      *(undefined4 *)(param_1 + 0xac) = 0;
    }
  }
  fn_0022ccb4(param_1);
  return;
}



void fn_005ca500(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x58) == 0) {
    iVar2 = fn_006b0d10(*(undefined4 *)(param_1 + 0x14),1);
    if (iVar2 == 0) {
      fn_0021718c(param_1,1,0x3c);
      return;
    }
  }
  else if ((*(int *)(param_1 + 0x58) == 1) &&
          (iVar2 = *(int *)(param_1 + 0x14), *(float *)(iVar2 + 0xf8) == 0.0)) {
    piVar1 = (int *)fn_002fdd54(param_1,(int)*(short *)(*(int *)(iVar2 + 0x19c) + 10),iVar2 + 0x20,
                                 0);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0xd8))(piVar1);
      fn_00215aec(piVar1,10);
      piVar1[0x72] = *(int *)(*(int *)(param_1 + 0x14) + 0x1c8);
      fn_00217988(piVar1);
    }
    (**(code **)(**(int **)(param_1 + 0x14) + 0x1c4))(*(int **)(param_1 + 0x14),1);
    (**(code **)(**(int **)(param_1 + 0x14) + 0x54))(*(int **)(param_1 + 0x14),0);
    *(undefined1 *)(*(int *)(param_1 + 0x14) + 4) = 0;
  }
  return;
}



undefined4 fn_005ca4a8(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x14) + 0x44))(*(int **)(param_1 + 0x14),0,4);
  (**(code **)(**(int **)(param_1 + 0x14) + 0x188))(*(int **)(param_1 + 0x14),1);
  return 1;
}



void fn_005ca478(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x005ca4a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x14) + 0x188))(*(int **)(param_1 + 0x14),0);
  return;
}



undefined4 fn_005ca358(int *param_1,int param_2)

{
  if (param_2 == 0) {
    (**(code **)(*param_1 + 0xc))(param_1);
  }
  else if (param_2 == 2) {
    (**(code **)(*param_1 + 0x14))(param_1);
  }
  else if (param_2 == 1) {
    (**(code **)(*param_1 + 0x10))(param_1);
  }
  else if (param_2 == 0x12) {
    fn_0023ddec(*(undefined4 *)(DAT_008977e0 + 0x2c),0x7d0a);
    (**(code **)(*(int *)param_1[5] + 0xe4))((int *)param_1[5],0x1000981,0);
    if (*(short *)(*(int *)(param_1[5] + 0x19c) + 10) == 0) {
      fn_00217988();
      fn_0021718c(param_1,1,0x3c);
    }
    else {
      param_1[0x16] = 1;
      *(undefined1 *)(param_1[5] + 4) = 1;
      fn_00215d9c(param_1[5],10,1,1);
    }
  }
  return 1;
}


