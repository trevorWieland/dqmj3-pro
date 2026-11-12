#include "0028c284_0028c898.h"



void fn_0028c898(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0069e7cc();
  *puVar1 = &PTR_FUN_0081e1a4;
  return;
}



void fn_0028c858(undefined4 *param_1)

{
  *param_1 = &DAT_0081e18c;
  if ((int *)param_1[2] != (int *)0x0) {
    (**(code **)(*(int *)param_1[2] + 4))();
  }
  fn_002feef8(param_1);
  return;
}



void fn_0028c80c(int param_1)

{
  if (*(int **)(param_1 + 8) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 8) + 4))();
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}



void fn_0028c6dc(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined1 local_24 [4];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  iVar1 = fn_00145b00(8,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_005f40b4(iVar1,1);
  }
  piVar4 = *(int **)(param_1 + 8);
  if (piVar4 != piVar2) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
    *(int **)(param_1 + 8) = piVar2;
  }
  uVar3 = fn_00176d68(*(undefined4 *)(param_1 + 8));
  fn_006dcca4(uVar3,0,local_24,0,0);
  fn_0017fe34();
  fn_00176d68(*(undefined4 *)(param_1 + 8));
  fn_00545310();
  iVar1 = fn_00176d68(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(iVar1 + 0x294) = 0x3883126f;
  iVar1 = fn_00176d68(*(undefined4 *)(param_1 + 8));
  uVar5 = 0;
  *(undefined4 *)(iVar1 + 0x58) = 0;
  *(undefined4 *)(iVar1 + 0x68) = 0;
  *(undefined4 *)(iVar1 + 0x78) = 0;
  *(uint *)(iVar1 + 0x88) = *(uint *)(iVar1 + 0x88) | 0x800;
  uVar3 = fn_00176d68(*(undefined4 *)(param_1 + 8));
  local_18 = 0xc1c80000;
  local_20 = uVar5;
  local_1c = uVar5;
  fn_005456f4(uVar3,&local_20);
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  if (iVar1 != 0) {
    fn_0024146c(iVar1,*(undefined4 *)(param_1 + 8));
  }
  return;
}



void fn_0028c644(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined1 auStack_40 [2];
  undefined1 local_3e;
  undefined1 local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  puVar1 = (undefined4 *)fn_0028e650(param_1,0x73);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_008943b0) goto LAB_0028c694;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_0028c694:
  fn_003f8160(auStack_40);
  local_3e = 0;
  local_38 = 2;
  local_34 = *param_2;
  uStack_30 = param_2[1];
  uStack_2c = param_2[2];
  uStack_28 = param_2[3];
  uStack_24 = param_2[4];
  fn_003f820c(puVar1,auStack_40,0xce);
  fn_001f73a0(param_1,0x73);
  return;
}



undefined4 fn_0028c5e0(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)fn_0028e650(param_1,0x75);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00894374) {
        puVar2 = &DAT_00894374;
        if (puVar1 != (undefined4 *)0x0) {
          puVar2 = (undefined4 *)(uint)*(byte *)((int)puVar1 + 0x15);
        }
        if (puVar1 != (undefined4 *)0x0 && puVar2 != (undefined4 *)0x0) {
          return 1;
        }
        return 0;
      }
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  return 0;
}



void fn_0028c554(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined1 auStack_30 [2];
  undefined1 local_2e;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  puVar1 = (undefined4 *)fn_0028e650(param_1,0x75);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00894374) goto LAB_0028c5a4;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_0028c5a4:
  fn_00580e58(auStack_30);
  local_2e = 0;
  local_2c = *param_2;
  uStack_28 = param_2[1];
  uStack_24 = param_2[2];
  uStack_20 = param_2[3];
  fn_00580d1c(puVar1,auStack_30);
  fn_001f73a0(param_1,0x75);
  return;
}



int * fn_0028c480(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = (int *)param_1[4];
  if (piVar3 != (int *)0x0) {
    piVar2 = (int *)*piVar3;
    while (piVar1 = piVar2, piVar1 != piVar3) {
      piVar2 = (int *)param_1[4];
      if (piVar1 != (int *)param_1[4]) {
        piVar2 = (int *)*piVar1;
        *(int *)piVar1[1] = *piVar1;
        *(int *)(*piVar1 + 4) = piVar1[1];
        param_1[5] = param_1[5] + -1;
        *piVar1 = param_1[1];
        param_1[1] = (int)piVar1;
      }
    }
    piVar3 = (int *)param_1[4];
    *piVar3 = param_1[1];
    param_1[1] = (int)piVar3;
    piVar3 = (int *)*param_1;
    while (piVar3 != (int *)0x0) {
      *param_1 = *piVar3;
      fn_001008c4(piVar3[2],piVar3[1],0);
      fn_001008c4(piVar3,1,0);
      piVar3 = (int *)*param_1;
    }
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return param_1;
}



int * fn_0028c400(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  piVar1 = (int *)fn_00100fc6(0xc,0);
  iVar2 = fn_00100fc6(0x18,0);
  piVar1[2] = iVar2;
  *piVar1 = *param_1;
  piVar1[1] = 1;
  *param_1 = (int)piVar1;
  iVar2 = piVar1[2];
  param_1[2] = iVar2;
  param_1[3] = iVar2 + 0x18;
  param_1[4] = iVar2;
  param_1[2] = iVar2 + 0x18;
  *(int *)iVar2 = iVar2;
  *(int *)(param_1[4] + 4) = param_1[4];
  return param_1;
}



void fn_0028c2fc(int param_1)

{
  int *piVar1;
  bool bVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
  piVar5 = (int *)**(undefined4 **)(param_1 + 0x10);
LAB_0028c310:
  do {
    piVar4 = *(int **)(param_1 + 0x10);
    if (piVar5 == piVar4) {
      return;
    }
    if ((char)piVar5[5] == '\0') {
LAB_0028c3e8:
      piVar5 = (int *)*piVar5;
      goto LAB_0028c310;
    }
    bVar2 = true;
    if ((*(byte *)(piVar5 + 2) & 10) != 0) {
      if (*(int *)(DAT_0089780c + 0x14) == *(int *)(DAT_0089780c + 0xc)) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
    }
    if ((*(byte *)(piVar5 + 2) & 5) != 0) {
      bVar2 = (bool)(bVar2 & *(int *)(DAT_00897808 + 0x14) == *(int *)(DAT_00897808 + 0xc));
    }
    if (!bVar2) goto LAB_0028c3e8;
    piVar1 = piVar5 + 3;
    piVar5 = (int *)*piVar5;
    for (piVar3 = (int *)*piVar4; piVar3 != piVar4; piVar3 = (int *)*piVar3) {
      if (piVar3[3] == *piVar1) {
        if (piVar3 != piVar4) {
          *(int *)piVar3[1] = *piVar3;
          *(int *)(*piVar3 + 4) = piVar3[1];
          *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
          *piVar3 = *(undefined4 *)(param_1 + 4);
          *(int **)(param_1 + 4) = piVar3;
        }
        break;
      }
    }
  } while( true );
}



bool fn_0028c2e8(void)

{
  int iVar1;
  
  iVar1 = fn_0028c0f0();
  return iVar1 != 0;
}



void fn_0028c284(undefined4 param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5)

{
  byte bVar1;
  byte local_18 [4];
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  undefined1 local_b;
  
  if (param_3 == 0 && param_4 == 0) {
    return;
  }
  bVar1 = 0;
  if (param_3 != 0) {
    bVar1 = 4;
  }
  local_18[0] = 0;
  local_c = 0;
  if (param_3 != 0) {
    local_18[0] = bVar1;
  }
  local_14 = 0;
  local_10 = 0;
  local_b = 0;
  if (param_4 != 0) {
    local_18[0] = local_18[0] | 8;
  }
  fn_0028c190(param_1,local_18,param_2,param_5);
  return;
}


