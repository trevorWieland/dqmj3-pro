#include "004b78f0_004b87dc.h"



int * fn_004b87dc(int *param_1)

{
  code *pcVar1;
  
  if (((char)param_1[2] == '\x04') && (*param_1 != 4)) {
    pcVar1 = *(code **)(*param_1 + -0xc);
    if (pcVar1 == (code *)0x0) {
      fn_0030233c();
    }
    else {
      (*pcVar1)();
    }
  }
  return param_1;
}



void fn_004b87cc(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined1 *)(param_1 + 2) = 6;
  *param_1 = param_3;
  param_1[1] = param_4;
  return;
}



void fn_004b87bc(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined1 *)(param_1 + 2) = 1;
  *param_1 = param_3;
  param_1[1] = param_4;
  return;
}



void fn_004b87a0(undefined8 *param_1)

{
  undefined8 in_d0;
  
  *param_1 = in_d0;
  *(undefined1 *)(param_1 + 1) = 2;
  return;
}



void fn_004b8790(undefined1 *param_1,undefined1 param_2)

{
  *param_1 = param_2;
  param_1[8] = 3;
  return;
}



int fn_004b8770(int param_1)

{
  *(undefined1 *)(param_1 + 8) = 0;
  fn_004b8820(param_1);
  return param_1;
}



void fn_004b8754(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 2) = 5;
  return;
}



int fn_004b8734(int param_1,int param_2)

{
  fn_0015e6f0(param_1,*(undefined4 *)(param_2 + 4));
  *(undefined1 *)(param_1 + 8) = 4;
  return param_1;
}



void fn_004b86b4(int param_1,uint param_2)

{
  uint local_18;
  int local_14;
  
  fn_0013d0fc(&local_18);
  if ((int)param_2 < 0) {
    local_14 = local_14 - (((int)-param_2 >> 0x1f) + (uint)(local_18 < -param_2));
  }
  else {
    local_14 = local_14 + ((int)param_2 >> 0x1f) + (uint)CARRY4(local_18,param_2);
  }
  *(uint *)(param_1 + 0x10) = local_18 + param_2;
  *(int *)(param_1 + 0x14) = local_14;
  *(uint *)(param_1 + 0x18) = param_2;
  *(int *)(param_1 + 0x1c) = (int)param_2 >> 0x1f;
  return;
}



void fn_004b8324(void)

{
  int iVar1;
  
  iVar1 = fn_004b8354();
  if (iVar1 == 0) {
    return;
  }
  if (*(code **)(iVar1 + -8) == (code *)0x0) {
    fn_0030233c();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004b8344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + -8))();
  return;
}



void fn_004b7c24(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  bool bVar5;
  undefined1 auStack_20 [24];
  
  piVar4 = *(int **)(param_1 + 0x350);
  if (DAT_008b6408 == 0) {
    iVar1 = fn_0014f24c(auStack_20,&DAT_008b685c,0x10);
    uVar3 = *(int *)(iVar1 + 0x10) - *(int *)(iVar1 + 0xc);
    uVar2 = piVar4[9];
    bVar5 = uVar2 <= uVar3;
    if (bVar5) {
      uVar2 = piVar4[10];
    }
    if (!bVar5 || uVar2 < uVar3) goto LAB_004b7ca0;
  }
  else {
    iVar1 = fn_0014f24c(auStack_20,&DAT_008e92b8);
    uVar2 = *(int *)(iVar1 + 0x10) - *(int *)(iVar1 + 0xc);
    if ((uVar2 < (uint)piVar4[9]) || ((uint)piVar4[10] < uVar2)) goto LAB_004b7ca0;
  }
  fn_0015ed58(piVar4 + 3,iVar1);
  (**(code **)(*piVar4 + 0x20))(piVar4);
LAB_004b7ca0:
  fn_0014f2b0(auStack_20);
  return;
}



undefined4 fn_004b7ad0(int param_1,int param_2,undefined4 param_3)

{
  ushort uVar1;
  ushort uVar2;
  undefined *puVar3;
  bool bVar4;
  int *piVar5;
  int iVar6;
  undefined *puVar7;
  int *piVar8;
  undefined1 auStack_30 [4];
  undefined *local_2c;
  undefined1 auStack_28 [4];
  undefined *local_24;
  
  piVar5 = (int *)(param_1 + 0x50);
  (**(code **)(*piVar5 + 8))();
  piVar8 = (int *)**(int **)(param_1 + 0x88);
  do {
    if (piVar8 == (int *)*(int *)(param_1 + 0x88)) {
      (**(code **)(*piVar5 + 0xc))(piVar5);
      return 0;
    }
    fn_006d0734(auStack_30,piVar8 + 2);
    fn_006d0734(auStack_28,param_2);
    if (local_2c == local_24) {
LAB_004b7b88:
      if (*(char *)(piVar8 + 0x1b) == '\0') {
        fn_0014ea80(piVar8 + 2);
      }
      uVar1 = *(ushort *)(piVar8[3] + 6);
      if (*(char *)(param_2 + 100) == '\0') {
        fn_0014ea80(param_2);
      }
      uVar2 = *(ushort *)(*(int *)(param_2 + 4) + 6);
      if ((ushort)(uVar1 << 8 | uVar1 >> 8) != (ushort)(uVar2 << 8 | uVar2 >> 8)) goto LAB_004b7bd4;
      bVar4 = true;
    }
    else {
      if (local_2c == (undefined *)0x0) {
        puVar7 = local_24;
        puVar3 = &DAT_007db524;
LAB_004b7b7c:
        iVar6 = fn_004b626c(puVar3,puVar7);
        if (iVar6 != 0) goto LAB_004b7b88;
      }
      else {
        if (local_24 == (undefined *)0x0) {
          puVar7 = &DAT_007db524;
          puVar3 = local_2c;
          goto LAB_004b7b7c;
        }
        iVar6 = fn_00101d80();
        if (iVar6 == 0) goto LAB_004b7b88;
      }
LAB_004b7bd4:
      bVar4 = false;
    }
    fn_00170f54(auStack_28);
    fn_00170f54(auStack_30);
    if (bVar4) {
      fn_0014e7cc(piVar8 + 2,param_3);
      (**(code **)(*piVar5 + 0xc))(piVar5);
      return 1;
    }
    piVar8 = (int *)*piVar8;
  } while( true );
}



undefined4 fn_004b78f0(int param_1,undefined4 param_2)

{
  undefined *puVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  int *piVar5;
  undefined1 auStack_30 [4];
  undefined *local_2c;
  undefined1 auStack_28 [4];
  undefined *local_24;
  
  piVar2 = (int *)(param_1 + 0x50);
  (**(code **)(*piVar2 + 8))();
  piVar5 = (int *)**(undefined4 **)(param_1 + 0x88);
  do {
    if (piVar5 == *(int **)(param_1 + 0x88)) {
      (**(code **)(*piVar2 + 0xc))(piVar2);
      return 0;
    }
    fn_006d0734(auStack_30,piVar5 + 2);
    fn_006d0734(auStack_28,param_2);
    if (local_2c == local_24) {
LAB_004b7a48:
      iVar3 = 1;
    }
    else {
      if (local_2c == (undefined *)0x0) {
        puVar4 = local_24;
        puVar1 = &DAT_007db524;
      }
      else {
        if (local_24 != (undefined *)0x0) {
          iVar3 = fn_00101d80();
          if (iVar3 == 0) goto LAB_004b7a48;
          iVar3 = 0;
          goto LAB_004b7978;
        }
        puVar4 = &DAT_007db524;
        puVar1 = local_2c;
      }
      iVar3 = fn_004b626c(puVar1,puVar4);
    }
LAB_004b7978:
    fn_00170f54(auStack_28);
    fn_00170f54(auStack_30);
    if (iVar3 != 0) {
      if (piVar5 != *(int **)(param_1 + 0x88)) {
        *(int *)piVar5[1] = *piVar5;
        *(int *)(*piVar5 + 4) = piVar5[1];
        *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + -1;
        (**(code **)piVar5[2])(piVar5 + 2);
        *piVar5 = *(int *)(param_1 + 0x7c);
        *(int **)(param_1 + 0x7c) = piVar5;
      }
      (**(code **)(*(int *)(param_1 + 0x50) + 8))();
      piVar5 = *(int **)(param_1 + 0x7c);
      iVar3 = *(int *)(param_1 + 0x88);
      if (piVar5 == (int *)0x0) {
        if (*(int *)(param_1 + 0x80) == *(int *)(param_1 + 0x84)) {
          fn_0078638c(param_1 + 0x78);
        }
        piVar5 = *(int **)(param_1 + 0x80);
        *(int **)(param_1 + 0x80) = piVar5 + 0x1c;
      }
      else {
        *(int *)(param_1 + 0x7c) = *piVar5;
      }
      if (piVar5 + 2 != (int *)0x0) {
        fn_0013cd7c(piVar5 + 2,param_2);
      }
      *piVar5 = iVar3;
      piVar5[1] = *(int *)(iVar3 + 4);
      **(undefined4 **)(iVar3 + 4) = piVar5;
      *(int **)(iVar3 + 4) = piVar5;
      *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + 1;
      (**(code **)(*(int *)(param_1 + 0x50) + 0xc))((int *)(param_1 + 0x50));
      (**(code **)(*piVar2 + 0xc))(piVar2);
      return 1;
    }
    piVar5 = (int *)*piVar5;
  } while( true );
}


