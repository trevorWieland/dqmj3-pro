#include "002e42dc_002e4bbc.h"



void fn_002e4bbc(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xc0,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_002e511c(iVar1,param_1);
  return;
}



void fn_002e4aec(int param_1)

{
  fn_002c3d68();
  fn_0068ab44(param_1,0x100094c);
  fn_006899f4(param_1,0,0);
  fn_00689d04(param_1,0);
  fn_00689878(param_1,0);
                    /* WARNING: Could not recover jumptable at 0x002e4b44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0xb0) + 0xc))();
  return;
}



void fn_002e474c(undefined4 *param_1)

{
  *param_1 = &DAT_00820a0c;
  if ((int *)param_1[9] != (int *)0x0) {
    (**(code **)(*(int *)param_1[9] + 4))();
  }
  fn_00100414(param_1 + 5,fn_0079ede4,4);
  fn_0069e808(param_1);
  fn_002feef8();
  return;
}



int fn_002e4578(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 param_4,
                undefined4 param_5)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 uStack_34;
  undefined4 local_30;
  int *piStack_2c;
  undefined4 uStack_28;
  
  uStack_34 = param_1;
  local_30 = param_2;
  piStack_2c = param_3;
  uStack_28 = param_4;
  puVar1 = (undefined4 *)fn_0069e7cc(param_1,param_2,param_3,param_4,param_5);
  *puVar1 = &DAT_00820a0c;
  iVar2 = fn_00101a1c(puVar1 + 5,&LAB_001ad800,4);
  iVar6 = 0;
  *(undefined4 *)(iVar2 + 0x10) = 0;
  do {
    local_58 = 0;
    local_54 = 0;
    local_50 = 0;
    local_4c = 0;
    local_48 = 0;
    local_44 = 0;
    local_40 = 0;
    local_3c = 0;
    fn_0017d96c(&local_58,0x20,0x1f,(char *)&DAT_002e4738,iVar6);
    piVar3 = (int *)(**(code **)(*param_3 + 0x2c))(param_3,&local_58,1);
    if (piVar3 != (int *)0x0) {
      puVar1 = (undefined4 *)(**(code **)(*piVar3 + 8))(piVar3);
      do {
        if (puVar1 == &DAT_0089a928) goto LAB_002e4658;
        puVar1 = (undefined4 *)*puVar1;
      } while (puVar1 != (undefined4 *)0x0);
    }
    piVar3 = (int *)0x0;
LAB_002e4658:
    iVar7 = iVar2 + -0x14 + iVar6 * 4;
    piVar8 = (int *)(iVar7 + 0x14);
    iVar4 = fn_00145b00(0x34,&DAT_00812c8c);
    if (iVar4 == 0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = (int *)fn_0037cf68(iVar4,local_30,piVar3,1,*(undefined4 *)(iVar2 + -4));
    }
    piVar5 = (int *)*piVar8;
    if (piVar5 != piVar3) {
      if (piVar5 != (int *)0x0) {
        (**(code **)(*piVar5 + 4))();
      }
      *piVar8 = (int)piVar3;
    }
    (**(code **)(**(int **)(iVar7 + 0x14) + 0x10))();
    iVar6 = iVar6 + 1;
    if (3 < iVar6) {
      iVar6 = fn_00145b00(0x5c,&DAT_00812c8c);
      if (iVar6 == 0) {
        piVar3 = (int *)0x0;
      }
      else {
        piVar3 = (int *)fn_0025e920(iVar6,local_30,param_3);
      }
      piVar8 = *(int **)(iVar2 + 0x10);
      if (piVar8 != piVar3) {
        if (piVar8 != (int *)0x0) {
          (**(code **)(*piVar8 + 4))();
        }
        *(int **)(iVar2 + 0x10) = piVar3;
      }
      return iVar2 + -0x14;
    }
  } while( true );
}



void fn_002e44f0(int param_1,int param_2,int param_3)

{
  int iVar1;
  float in_s0;
  float in_s1;
  float in_s2;
  float local_20;
  float local_1c;
  float local_18;
  
  iVar1 = param_1 + param_2 * 4;
  fn_0037cf4c(*(undefined4 *)(iVar1 + 0x14),param_3);
  fn_0025e31c(*(undefined4 *)(param_1 + 0x24),param_3);
  if (param_3 != 0) {
    fn_00688ff8(*(undefined4 *)(*(int *)(iVar1 + 0x14) + 0x1c));
    local_20 = in_s0;
    local_1c = in_s1;
    local_18 = in_s2;
    fn_00688ff8(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x2c));
    local_20 = local_20 - in_s0;
    local_1c = local_1c - in_s1;
    local_18 = local_18 - in_s2;
    fn_0025e7cc(*(undefined4 *)(param_1 + 0x24),&local_20);
  }
  return;
}



void fn_002e44a8(int param_1)

{
  int iVar1;
  
  (**(code **)(**(int **)(param_1 + 0x24) + 0x14))();
  iVar1 = 0;
  do {
    (**(code **)(**(int **)(param_1 + iVar1 * 4 + 0x14) + 0x18))();
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  return;
}



void fn_002e4474(int param_1)

{
  int iVar1;
  
  fn_0069e748();
  iVar1 = 0;
  do {
    (**(code **)(**(int **)(param_1 + iVar1 * 4 + 0x14) + 0x14))();
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  return;
}



void fn_002e4458(void)

{
  return;
}



void fn_002e4414(void)

{
  undefined4 *puVar1;
  undefined4 in_stack_00000004;
  undefined1 in_stack_00000008;
  undefined1 in_stack_0000000c;
  
  puVar1 = (undefined4 *)fn_0069e7cc();
  *(undefined1 *)(puVar1 + 5) = in_stack_00000008;
  *puVar1 = &DAT_008209c8;
  *(undefined1 *)((int)puVar1 + 0x15) = in_stack_0000000c;
  puVar1[6] = in_stack_00000004;
  return;
}



undefined4 * fn_002e4388(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = &PTR_LAB_0010414a_1_00820994;
  if (param_1[4] != 0) {
    fn_002454a4(param_1[6]);
    if ((int *)param_1[4] != (int *)0x0) {
      (**(code **)(*(int *)param_1[4] + 4))();
      param_1[4] = 0;
    }
  }
  uVar1 = param_1[1];
  uVar2 = uVar1;
  if ((uint)param_1[2] < uVar1) {
    do {
      uVar2 = uVar2 + 4;
    } while (uVar2 != param_1[2]);
  }
  fn_001008c4(uVar1,(int)(param_1[3] - uVar1) >> 2,0);
  return param_1;
}



undefined4 * fn_002e42dc(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  *param_1 = &PTR_LAB_0010414a_1_00820994;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  puVar1 = (undefined4 *)fn_00100fc6(0x80,0);
  iVar2 = 4;
  param_1[1] = puVar1;
  do {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
    }
    iVar2 = iVar2 + -1;
    puVar1 = puVar1 + 1;
  } while (iVar2 != 0);
  iVar2 = param_1[1];
  param_1[2] = iVar2 + 0x10;
  param_1[3] = iVar2 + 0x80;
  param_1[4] = 0;
  param_1[5] = param_2;
  param_1[6] = 0;
  param_1[8] = 1;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined1 *)((int)param_1 + 0x25) = 0;
  return param_1;
}


