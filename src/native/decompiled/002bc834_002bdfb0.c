#include "002bc834_002bdfb0.h"



void fn_002bdfb0(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = DAT_00897800;
  uVar1 = fn_0016ba34(DAT_00897800,L"rom:/data/Message/GoldBankMessage.mes",(char *)&DAT_00864934,0);
  fn_0031b78c(param_1,0,2,uVar1);
  uVar1 = fn_0016ba34(uVar2,L"rom:/data/Message/GoldBankMessage.mes",(char *)&DAT_00864944,0);
  fn_0031b78c(param_1,1,2,uVar1);
  uVar2 = fn_0016ba34(uVar2,L"rom:/data/Message/GoldBankMessage.mes",&DAT_00864930,0);
  fn_0031b78c(param_1,2,2,uVar2);
  return;
}



void fn_002bde84(int *param_1)

{
  fn_0068ab44(param_1,0x100094c);
  fn_003952f0(param_1[0x2c]);
                    /* WARNING: Could not recover jumptable at 0x002bdeb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x28))(param_1,0,0);
  return;
}



void fn_002bd400(undefined4 param_1)

{
                    /* WARNING: Subroutine does not return */
  fn_006ba250(param_1);
}



void fn_002bd26c(undefined4 param_1)

{
  undefined4 uVar1;
  
  fn_00192cb4(DAT_00897800,0x9f,1);
  uVar1 = *(undefined4 *)(DAT_00897804 + 0x28);
  fn_006ba284(param_1);
  fn_006b2a40(uVar1);
                    /* WARNING: Subroutine does not return */
  fn_006ba250(param_1);
}



undefined4 *
fn_002bd1a4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 unaff_r4;
  undefined4 *puVar5;
  
  iVar1 = fn_00145b00(0xd4,&DAT_00812c8c);
  if (iVar1 == 0) {
    return (undefined4 *)0x0;
  }
  puVar2 = (undefined4 *)fn_003975cc(iVar1,param_1,param_3,param_4,unaff_r4);
  puVar5 = (undefined4 *)0x0;
  *puVar2 = &DAT_0081ee04;
  *(undefined1 *)(puVar2 + 0x2e) = 0;
  puVar2[0x2f] = 0;
  puVar2[0x30] = 0;
  puVar2[0x31] = 0;
  puVar2[0x32] = 0;
  puVar2[0x34] = 0;
  puVar3 = (undefined4 *)fn_00689c1c(puVar2,0x73);
  if (puVar3 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)(**(code **)*puVar3)(puVar3);
    do {
      if (puVar4 == &DAT_008943b0) goto LAB_002bd6e8;
      puVar4 = (undefined4 *)*puVar4;
    } while (puVar4 != (undefined4 *)0x0);
  }
  puVar3 = (undefined4 *)0x0;
LAB_002bd6e8:
  puVar2[0x32] = puVar3;
  puVar3 = (undefined4 *)fn_001f74ec(puVar2,0x74);
  if (puVar3 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)(**(code **)*puVar3)(puVar3);
    do {
      if (puVar4 == &DAT_008943ac) goto LAB_002bd72c;
      puVar4 = (undefined4 *)*puVar4;
    } while (puVar4 != (undefined4 *)0x0);
  }
  puVar3 = (undefined4 *)0x0;
LAB_002bd72c:
  puVar2[0x33] = puVar3;
  puVar3 = (undefined4 *)fn_001f74d8(puVar2,0x3e);
  if (puVar3 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)(**(code **)*puVar3)(puVar3);
    do {
      if (puVar4 == &DAT_00894020) {
        puVar5 = puVar3;
        break;
      }
      puVar4 = (undefined4 *)*puVar4;
    } while (puVar4 != (undefined4 *)0x0);
  }
  puVar2[0x34] = puVar5;
  return puVar2;
}



void fn_002bd14c(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(DAT_00897804 + 0x28);
  iVar1 = fn_006ba284(param_1);
  uVar2 = fn_006b2a74(uVar2,*(undefined4 *)(*(int *)(param_1 + 0xbc) + (param_2 + iVar1 * 10) * 4))
  ;
  fn_003dd770(*(undefined4 *)(param_1 + 0xd0),uVar2);
                    /* WARNING: Subroutine does not return */
  fn_002c3de4(param_1,param_2);
}



void fn_002bd128(void)

{
                    /* WARNING: Subroutine does not return */
  fn_006ba250();
}



void fn_002bc9d8(undefined4 *param_1)

{
  *param_1 = &DAT_0081ede0;
  if ((int *)param_1[3] != (int *)0x0) {
    (**(code **)(*(int *)param_1[3] + 4))();
  }
  *param_1 = &DAT_0081d408;
  fn_002feef8(param_1);
  return;
}



void fn_002bc964(undefined4 *param_1,undefined4 param_2)

{
  param_1[1] = param_2;
  *param_1 = &DAT_0081ede0;
  param_1[2] = param_1;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0xffffffff;
  param_1[10] = 0;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0x10) = 1;
  *(undefined1 *)((int)param_1 + 0x41) = 0;
  *(undefined1 *)((int)param_1 + 0x42) = 0;
  *(undefined1 *)((int)param_1 + 0x43) = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  param_1[0x12] = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  return;
}



void fn_002bc924(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)fn_002b6b28(param_1 + 8,0);
  piVar2 = *(int **)(param_1 + 0xc);
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    *(int **)(param_1 + 0xc) = piVar1;
  }
  return;
}



undefined4 fn_002bc834(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  uint extraout_r1;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  undefined8 uVar7;
  uint local_18;
  
  uVar5 = 0x1a;
  piVar6 = *(int **)(param_1 + 0xc);
  local_18 = param_4;
  if (piVar6 != (int *)0x0) {
    uVar1 = (**(code **)(*piVar6 + 8))(piVar6);
    fn_003a7cf0(piVar6,&local_18,uVar1);
    uVar5 = local_18 & 0xff;
  }
  uVar7 = fn_00182988(DAT_008977e4);
  uVar4 = (uint)((ulonglong)uVar7 >> 0x20);
  if (*(char *)((int)uVar7 + 0x39c) != '\0') {
    fn_001c2374(DAT_008977e4);
    fn_0025fbf0();
    uVar4 = extraout_r1;
  }
  if (uVar5 == 0x19) {
    return 7;
  }
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar2 != 0) {
    uVar4 = (uint)*(byte *)(iVar2 + 0xd);
  }
  if (iVar2 == 0 || uVar4 == 0x1a) {
    if (uVar5 == 0x1a) {
      return 7;
    }
    piVar3 = (int *)fn_002b6b28(param_1 + 8,uVar5);
    piVar6 = *(int **)(param_1 + 0xc);
    if (piVar6 == piVar3) {
      return 7;
    }
  }
  else {
    piVar3 = (int *)fn_002b6b28(param_1 + 8);
    piVar6 = *(int **)(param_1 + 0xc);
    if (piVar6 == piVar3) {
      return 7;
    }
  }
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 4))();
  }
  *(int **)(param_1 + 0xc) = piVar3;
  return 7;
}


