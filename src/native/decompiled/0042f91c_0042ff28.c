#include "0042f91c_0042ff28.h"



void fn_0042ff28(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x68) == 4) {
    piVar1 = *(int **)(param_1 + 0xb0);
    if (piVar1 == (int *)0x0) {
      piVar1 = *(int **)(param_1 + 0xb4);
    }
    if (*(int *)(param_1 + 0x6c) != piVar1[10]) {
      (**(code **)(*piVar1 + 0x34))(piVar1,2);
      *(int *)(*(int *)(param_1 + 0xd4) + 0x3c) = piVar1[10];
      return;
    }
  }
  return;
}



void fn_0042fea4(int param_1,undefined4 param_2)

{
  int *piVar1;
  bool bVar2;
  
  piVar1 = *(int **)(param_1 + 0xb0);
  bVar2 = piVar1 == (int *)0x0;
  if (bVar2) {
    piVar1 = *(int **)(param_1 + 0xb4);
  }
  if (bVar2 && piVar1 == (int *)0x0) {
    return;
  }
  fn_002e3e30(piVar1);
  (**(code **)(*piVar1 + 0x34))(piVar1,0,1);
  fn_00430be0(param_1,piVar1,param_2,1,0,4);
  *(int *)(*(int *)(param_1 + 0xd4) + 0x3c) = piVar1[10];
  return;
}



void fn_0042fe80(int param_1,undefined4 param_2)

{
  *(undefined4 *)(*(int *)(param_1 + 0xd4) + 0x3c) = param_2;
  fn_0068ab44(param_1,0x100094f);
  return;
}



void fn_0042fdf8(int param_1,undefined4 param_2)

{
  int *piVar1;
  bool bVar2;
  
  piVar1 = *(int **)(param_1 + 0xb0);
  bVar2 = piVar1 == (int *)0x0;
  if (bVar2) {
    piVar1 = *(int **)(param_1 + 0xb4);
  }
  if (bVar2 && piVar1 == (int *)0x0) {
    return;
  }
  fn_002e3e30(piVar1);
  (**(code **)(*piVar1 + 0x34))(piVar1,1,0);
  fn_00430be0(param_1,piVar1,param_2,0,0,4);
  *(int *)(*(int *)(param_1 + 0xd4) + 0x3c) = piVar1[10];
  return;
}



void fn_0042fb68(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  bool bVar8;
  undefined4 local_28 [2];
  int local_20;
  
  fn_002bf2cc();
  if (param_1[0x19] == 6) {
    iVar3 = (**(code **)(*(int *)param_1[0x38] + 0xa8))();
    if (iVar3 < 0) {
      iVar3 = (**(code **)(*(int *)param_1[0x38] + 0xb8))();
      if (iVar3 < 0) {
        iVar5 = (**(code **)(*(int *)param_1[0x38] + 0xc0))();
        if (iVar5 < 0) {
          iVar3 = (**(code **)(*(int *)param_1[0x38] + 0x3c))();
          if (iVar3 != 0) {
            uVar4 = (**(code **)(*(int *)param_1[0x38] + 0x5c))();
            (**(code **)(*param_1 + 0x14c))(param_1,param_1[0x19],uVar4);
          }
          iVar3 = (**(code **)(*(int *)param_1[0x38] + 0x40))();
          if (iVar3 != 0) {
            uVar4 = (**(code **)(*(int *)param_1[0x38] + 0x5c))();
            (**(code **)(*param_1 + 0x150))(param_1,param_1[0x19],uVar4);
          }
        }
        else {
          fn_002c07c0(local_28);
          local_28[0] = 6;
          local_20 = iVar3;
          (**(code **)(*param_1 + 0x140))(param_1,local_28);
        }
      }
      else {
        fn_002c07c0(local_28);
        local_28[0] = 6;
        local_20 = iVar3;
        (**(code **)(*param_1 + 0x13c))(param_1,local_28);
      }
    }
    else {
      (**(code **)(*param_1 + 0x158))(param_1);
    }
  }
  cVar1 = (char)param_1[0x1f];
  bVar8 = cVar1 == '\0';
  if (bVar8) {
    cVar1 = *(char *)((int)param_1 + 0xe5);
  }
  if (bVar8 && cVar1 == '\0') {
    iVar3 = (**(code **)(*(int *)param_1[0x36] + 0x34))();
    iVar5 = (**(code **)(*(int *)param_1[0x36] + 0x38))();
    if (iVar3 != 0 || iVar5 != 0) {
      piVar7 = (int *)param_1[0x2c];
      bVar8 = piVar7 == (int *)0x0;
      if (bVar8) {
        piVar7 = (int *)param_1[0x2d];
      }
      if (!bVar8 || piVar7 != (int *)0x0) {
        iVar6 = piVar7[10];
        iVar2 = 0;
        if (iVar3 != 0) {
          iVar2 = iVar6;
        }
        if ((iVar3 == 0 || iVar6 == 0) || iVar2 < 0) {
          if (((iVar5 != 0) && (iVar6 < piVar7[0xb] + -1)) &&
             (iVar3 = (**(code **)(*piVar7 + 0x2c))(piVar7), iVar3 != 0)) {
            (**(code **)(*param_1 + 0x1b0))(param_1,piVar7[10]);
          }
        }
        else {
          iVar3 = (**(code **)(*piVar7 + 0x30))(piVar7);
          if (iVar3 != 0) {
            (**(code **)(*param_1 + 0x1ac))(param_1,piVar7[10]);
          }
        }
      }
    }
    iVar3 = (**(code **)(*(int *)param_1[0x38] + 100))();
    if (-1 < iVar3) {
      if (param_1[0x19] != 6) {
        local_28[0] = 1;
        (**(code **)(*param_1 + 0x110))(param_1,6,0);
      }
                    /* WARNING: Could not recover jumptable at 0x0042fdec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x19c))(param_1,iVar3);
      return;
    }
  }
  return;
}



undefined4 fn_0042fa70(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  uint in_fpscr;
  
  iVar1 = fn_002be0c4();
  uVar4 = 0;
  if ((iVar1 != 0) &&
     (iVar1 = fn_00178f9c(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x88)),
     uVar4 = 0, iVar1 != 0)) {
    fn_00431218(param_1,iVar1,param_2);
    fn_004307c4(param_1,iVar1,param_2);
    iVar1 = fn_00172c98(iVar1,&DAT_00431480);
    if (iVar1 != 0) {
      iVar2 = fn_00145b00(0x24,&DAT_00812c8c);
      piVar3 = (int *)0x0;
      if (iVar2 != 0) {
        VectorSignedToFloat(*(undefined4 *)(param_2 + 0x58),(byte)(in_fpscr >> 0x16) & 3);
        piVar3 = (int *)fn_00243834(iVar2,*(undefined4 *)(param_1 + 4),iVar1,
                                     (int)*(char *)(param_2 + 0x5e),*(undefined4 *)(param_1 + 0x48))
        ;
      }
      piVar5 = *(int **)(param_1 + 0xdc);
      if (piVar5 != piVar3) {
        if (piVar5 != (int *)0x0) {
          (**(code **)(*piVar5 + 4))(piVar5);
        }
        *(int **)(param_1 + 0xdc) = piVar3;
      }
      (**(code **)(**(int **)(param_1 + 0xdc) + 0x10))();
      if (*(char *)(param_2 + 0x5e) != '\0') {
        fn_00243550(*(undefined4 *)(param_1 + 0xdc),*(undefined4 *)(param_2 + 0x54));
      }
    }
    uVar4 = 1;
  }
  return uVar4;
}



void fn_0042f94c(int param_1)

{
  fn_0042f5c0();
  fn_0042f6e4(param_1);
  fn_0042f790(param_1);
  fn_0042f848(param_1);
  if (*(int **)(param_1 + 0x9c) == (int *)0x0) {
    return;
  }
  (**(code **)(**(int **)(param_1 + 0x9c) + 0xc))();
                    /* WARNING: Could not recover jumptable at 0x0042f99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x9c) + 0x14))();
  return;
}



undefined4 *
fn_0042f91c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 unaff_r4;
  
  iVar1 = fn_00145b00(0xa0,&DAT_00812c8c);
  if (iVar1 == 0) {
    return (undefined4 *)0x0;
  }
  puVar2 = (undefined4 *)fn_0068ab5c(iVar1,param_1,param_3,param_4,unaff_r4);
  *puVar2 = &DAT_0083bdb0;
  puVar2[0x1a] = 0xffffffff;
  puVar2[0x19] = 0;
  puVar2[0x1b] = 0xffffffff;
  *(undefined1 *)(puVar2 + 0x1c) = 0;
  *(undefined1 *)((int)puVar2 + 0x71) = 0;
  *(undefined1 *)((int)puVar2 + 0x72) = 0;
  *(undefined1 *)((int)puVar2 + 0x73) = 0;
  puVar2[0x26] = 0;
  puVar2[0x27] = 0;
  puVar3 = (undefined4 *)fn_001f74ec(puVar2,0x6d);
  if (puVar3 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)(**(code **)*puVar3)(puVar3);
    do {
      if (puVar4 == &DAT_00893fac) goto LAB_0042fa28;
      puVar4 = (undefined4 *)*puVar4;
    } while (puVar4 != (undefined4 *)0x0);
  }
  puVar3 = (undefined4 *)0x0;
LAB_0042fa28:
  puVar2[0x1d] = 0;
  puVar2[0x1e] = 0;
  puVar2[0x1f] = 0;
  puVar2[0x20] = 0;
  puVar2[0x21] = 0;
  puVar2[0x22] = 0;
  puVar2[0x23] = 0;
  puVar2[0x24] = 0;
  puVar2[0x25] = 0;
  puVar2[0x26] = puVar3;
  return puVar2;
}


