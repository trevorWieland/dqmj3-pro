#include "0023d0ec_0023d424.h"



void fn_0023d424(int param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  
  piVar1 = *(int **)(*(int *)(param_1 + 0xc) + param_2 * 4);
  if (piVar1 == (int *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0023d440. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 0x30))(piVar1,param_3);
  return;
}



void fn_0023d3f4(int param_1)

{
  fn_002a4bd0(*(undefined4 *)(param_1 + 8));
  return;
}



void fn_0023d3e8(int *param_1)

{
  fn_002a4bd0(*(undefined4 *)(*(int *)(*param_1 + 0x48) + 8));
  return;
}



void fn_0023d3d0(undefined4 param_1)

{
  fn_0026a494(DAT_00897818,param_1,1);
  return;
}



void fn_0023d364(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x14))(param_1);
  while (iVar1 != 0) {
    fn_0012d6a4(10000000,0);
    fn_005f6270(param_1);
    fn_00119854(DAT_00898840);
    iVar1 = (**(code **)(*param_1 + 0x14))(param_1);
  }
  return;
}



void fn_0023d34c(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  int *piVar8;
  
  iVar2 = *(int *)(DAT_00897804 + 0x58);
  uVar7 = 0;
  piVar6 = *(int **)(param_1 + 0x10);
  piVar8 = (int *)*piVar6;
  do {
    iVar4 = *(int *)(*(int *)(iVar2 + 4) + uVar7 * 0x20 + 0x98);
    if (iVar4 != 0) {
      piVar5 = piVar8;
      if (piVar8 != piVar6) {
        do {
          piVar1 = piVar5 + 4;
          if (iVar4 != *piVar1) {
            piVar5 = (int *)*piVar5;
          }
        } while (iVar4 != *piVar1 && piVar5 != piVar6);
      }
      if (piVar5 == piVar6) {
        puVar3 = (undefined4 *)fn_006bc1dc(iVar2);
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
        puVar3[3] = 0;
        *(undefined2 *)(puVar3 + 6) = 0;
        puVar3[4] = 0;
        puVar3[5] = 0;
      }
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 < 0x10);
  return;
}



void fn_0023d2e4(undefined4 param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined1 auStack_18 [12];
  
  uVar1 = *(undefined4 *)(DAT_00897804 + 0x58);
  fn_006f5e08(auStack_18,DAT_00898840);
  fn_006d3d30(&local_20,auStack_18);
  local_28 = local_20;
  uStack_24 = uStack_1c;
  uVar2 = fn_00691514(&local_28);
  fn_002e2acc(uVar1,param_1,(int)uVar2,(int)((ulonglong)uVar2 >> 0x20));
  return;
}



void fn_0023d2cc(undefined4 param_1)

{
  fn_002e290c(*(undefined4 *)(DAT_00897804 + 0x58),param_1);
  return;
}



void fn_0023d2b8(void)

{
  fn_006bc43c(*(undefined4 *)(DAT_00897804 + 0x58));
  return;
}



void fn_0023d270(undefined4 param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(DAT_00897804 + 0x58);
  uVar1 = fn_006bc47c(uVar2,param_1);
  if (uVar1 < param_2) {
    fn_002e2990(uVar2,param_1,param_2);
    return;
  }
  return;
}



void fn_0023d168(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  
  uVar9 = *(undefined4 *)(DAT_00897804 + 0x58);
  iVar1 = fn_006bc53c(uVar9);
  iVar8 = 0;
  if (0 < iVar1) {
    do {
      iVar2 = fn_006bc4b0(uVar9,iVar8);
      piVar3 = (int *)param_1[1];
      iVar7 = param_1[4];
      if (piVar3 == (int *)0x0) {
        if (param_1[2] == param_1[3]) {
          if (*param_1 == 0) {
            uVar6 = 0x20;
          }
          else {
            uVar4 = *(uint *)(*param_1 + 4);
            uVar6 = uVar4 + (uVar4 >> 1) + (uVar4 >> 3);
            if (uVar6 < uVar4 + 0x20) {
              uVar6 = uVar4 + 0x20;
            }
          }
          piVar3 = (int *)fn_0015ece0(0xc);
          iVar5 = fn_0015ece0(uVar6 * 0xc);
          piVar3[2] = iVar5;
          *piVar3 = *param_1;
          piVar3[1] = uVar6;
          *param_1 = (int)piVar3;
          iVar5 = piVar3[2];
          param_1[2] = iVar5;
          param_1[3] = iVar5 + uVar6 * 0xc;
        }
        piVar3 = (int *)param_1[2];
        param_1[2] = (int)(piVar3 + 3);
      }
      else {
        param_1[1] = *piVar3;
      }
      iVar8 = iVar8 + 1;
      if (piVar3 + 2 != (int *)0x0) {
        piVar3[2] = iVar2;
      }
      *piVar3 = iVar7;
      piVar3[1] = *(int *)(iVar7 + 4);
      **(undefined4 **)(iVar7 + 4) = piVar3;
      *(int **)(iVar7 + 4) = piVar3;
      param_1[5] = param_1[5] + 1;
    } while (iVar8 < iVar1);
  }
  return;
}



void fn_0023d150(undefined4 param_1)

{
  fn_006bc4a0(*(undefined4 *)(DAT_00897804 + 0x58),param_1);
  return;
}



void fn_0023d13c(void)

{
  fn_002e29fc(*(undefined4 *)(DAT_00897804 + 0x58));
  return;
}



void fn_0023d11c(undefined4 param_1,undefined4 param_2)

{
  fn_002e297c(*(undefined4 *)(DAT_00897804 + 0x58),param_1,param_2);
  return;
}



void fn_0023d104(undefined4 param_1)

{
  fn_006bc47c(*(undefined4 *)(DAT_00897804 + 0x58),param_1);
  return;
}



void fn_0023d0ec(undefined4 param_1)

{
  fn_006bc46c(*(undefined4 *)(DAT_00897804 + 0x58),param_1);
  return;
}


