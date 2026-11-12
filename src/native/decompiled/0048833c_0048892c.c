#include "0048833c_0048892c.h"



int * fn_0048892c(undefined1 *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x3c) == 0) {
    *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + 1;
    return (int *)0x0;
  }
  piVar1 = *(int **)(param_1 + 0x78);
  if (piVar1 == (int *)0x0) {
    iVar3 = fn_0015ece0(0x20);
    if (iVar3 == 0) {
      return (int *)0x0;
    }
    iVar3 = fn_004b5488(iVar3,*(undefined4 *)(param_1 + 0x48));
  }
  else {
    piVar2 = piVar1 + 1;
    iVar3 = 0;
    (**(code **)(*piVar2 + 8))();
    iVar4 = *piVar1;
    if (*(int *)(iVar4 + 0x18) == 0) {
      piVar1[0xb] = piVar1[0xb] + 1;
    }
    else {
      iVar3 = *(int *)(*(int *)(iVar4 + 4) + *(int *)(iVar4 + 0x14) * 4);
      fn_00169f1c(*(int *)(iVar4 + 0x14) + 1,*(undefined4 *)(iVar4 + 0x1c));
      *(undefined4 *)(iVar4 + 0x14) = extraout_r1;
      *(int *)(iVar4 + 0x18) = *(int *)(iVar4 + 0x18) + -1;
      *(undefined4 *)(iVar3 + 0x10) = 0;
      *(undefined4 *)(iVar3 + 0x18) = 0;
    }
    (**(code **)(*piVar2 + 0xc))(piVar2);
  }
  if (iVar3 == 0) {
    return (int *)0x0;
  }
  *param_1 = 1;
  piVar1 = *(int **)(*(int *)(param_1 + 0x28) + *(int *)(param_1 + 0x38) * 4);
  fn_00169f1c(*(int *)(param_1 + 0x38) + 1,*(undefined4 *)(param_1 + 0x40));
  *(undefined4 *)(param_1 + 0x38) = extraout_r1_00;
  *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + -1;
  *piVar1 = iVar3;
  *(int **)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14) * 4) = piVar1;
  fn_00169f1c(*(int *)(param_1 + 0x14) + 1,*(undefined4 *)(param_1 + 0x20));
  *(undefined4 *)(param_1 + 0x14) = extraout_r1_01;
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  return piVar1;
}



void fn_00488834(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  code *pcVar4;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  int *piVar5;
  int *piVar6;
  
  iVar1 = *(int *)(param_2 + 0x18);
  while (iVar1 != 0) {
    piVar5 = *(int **)(*(int *)(param_2 + 4) + *(int *)(param_2 + 0x14) * 4);
    if (piVar5 != (int *)0x0) {
      piVar2 = (int *)*piVar5;
      if (piVar2 != (int *)0x0) {
        piVar6 = *(int **)(param_1 + 0x78);
        if (piVar6 == (int *)0x0) {
          pcVar4 = *(code **)(*piVar2 + 4);
          piVar3 = piVar2;
        }
        else {
          piVar3 = piVar6 + 1;
          (**(code **)(piVar6[1] + 8))(piVar3);
          iVar1 = *piVar6;
          *(int **)(*(int *)(iVar1 + 4) + *(int *)(iVar1 + 0x10) * 4) = piVar2;
          fn_00169f1c(*(int *)(iVar1 + 0x10) + 1,*(undefined4 *)(iVar1 + 0x1c));
          *(undefined4 *)(iVar1 + 0x10) = extraout_r1;
          *(int *)(iVar1 + 0x18) = *(int *)(iVar1 + 0x18) + 1;
          pcVar4 = *(code **)(*piVar3 + 0xc);
        }
        (*pcVar4)(piVar3);
      }
      *(int **)(*(int *)(param_1 + 0x28) + *(int *)(param_1 + 0x34) * 4) = piVar5;
      fn_00169f1c(*(int *)(param_1 + 0x34) + 1,*(undefined4 *)(param_1 + 0x40));
      *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
      *(undefined4 *)(param_1 + 0x34) = extraout_r1_00;
    }
    fn_00169f1c(*(int *)(param_2 + 0x14) + 1,*(undefined4 *)(param_2 + 0x1c));
    iVar1 = *(int *)(param_2 + 0x18) + -1;
    *(int *)(param_2 + 0x18) = iVar1;
    *(undefined4 *)(param_2 + 0x14) = extraout_r1_01;
  }
  return;
}



undefined4 * fn_00488798(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  *param_1 = &DAT_00853a0c;
  param_1[1] = 0;
  param_1[2] = 0;
  iVar1 = DAT_008b64a4;
  if (DAT_008b637d != '\0') {
    piVar2 = (int *)(DAT_008b64a4 + 0x18);
    (**(code **)(*(int *)(DAT_008b64a4 + 0x18) + 8))();
    if (*(int *)(iVar1 + 8) == *(int *)(iVar1 + 0x10)) {
      *(undefined4 **)(iVar1 + 8) = param_1;
      *(undefined4 **)(iVar1 + 0xc) = param_1;
    }
    else {
      *(undefined4 **)(*(int *)(iVar1 + 0xc) + 4) = param_1;
      param_1[2] = *(undefined4 *)(iVar1 + 0xc);
      *(undefined4 **)(iVar1 + 0xc) = param_1;
    }
    *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + 1;
    (**(code **)(*piVar2 + 0xc))(piVar2);
  }
  return param_1;
}



void fn_004886b0(void)

{
  int iVar1;
  
  iVar1 = fn_004886e0();
  if (iVar1 == 0) {
    return;
  }
  if (*(code **)(iVar1 + -8) == (code *)0x0) {
    fn_0030233c();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004886d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + -8))();
  return;
}



int fn_004886e0(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  *param_1 = &DAT_008539fc;
  if (DAT_008b637d != '\0') {
    (**(code **)(param_1[6] + 8))();
    piVar2 = (int *)param_1[2];
    if (piVar2 != (int *)param_1[4]) {
      do {
        (**(code **)(*piVar2 + 8))(piVar2);
        piVar2 = (int *)piVar2[1];
      } while (piVar2 != (int *)param_1[4]);
    }
    (**(code **)(param_1[6] + 0xc))(param_1 + 6);
  }
  DAT_008b637d = 0;
  param_1[6] = &PTR_LAB_008533fc;
  param_1[7] = &DAT_0085319c;
  iVar1 = fn_00754610(param_1 + 1);
  return iVar1 + -4;
}



void fn_004885e4(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  if (DAT_008b637d == '\0') {
    return;
  }
  piVar4 = (int *)(param_1 + 0x18);
  (**(code **)(*(int *)(param_1 + 0x18) + 8))(piVar4);
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(param_1 + 0x10);
  if (iVar1 != iVar2) {
    do {
      while( true ) {
        if (iVar1 != iVar2) {
          param_3 = iVar1;
        }
        if (iVar1 == iVar2 || iVar1 == param_2) break;
        iVar1 = *(int *)(param_3 + 4);
      }
      iVar3 = iVar1;
      if (iVar1 != iVar2) {
        iVar3 = *(int *)(iVar1 + 4);
        param_3 = *(int *)(iVar1 + 8);
        if (param_3 != 0) {
          *(int *)(param_3 + 4) = iVar3;
        }
        *(undefined4 *)(iVar1 + 8) = 0;
        if (iVar3 != 0) {
          *(int *)(iVar3 + 8) = param_3;
        }
        *(undefined4 *)(iVar1 + 4) = 0;
        if (*(int *)(param_1 + 8) == iVar1) {
          *(int *)(param_1 + 8) = iVar3;
        }
        if (*(int *)(param_1 + 0xc) == iVar1) {
          *(int *)(param_1 + 0xc) = param_3;
        }
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
      }
      iVar2 = *(int *)(param_1 + 0x10);
      iVar1 = iVar3;
    } while (iVar3 != iVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x004886a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar4 + 0xc))(piVar4);
  return;
}



void fn_00488564(int param_1,undefined4 param_2)

{
  int *piVar1;
  
  if (DAT_008b637d == '\0') {
    return;
  }
  (**(code **)(*(int *)(param_1 + 0x18) + 8))();
  piVar1 = *(int **)(param_1 + 8);
  if (piVar1 != *(int **)(param_1 + 0x10)) {
    do {
      (**(code **)(*piVar1 + 0x10))(piVar1,param_2);
      piVar1 = (int *)piVar1[1];
    } while (piVar1 != *(int **)(param_1 + 0x10));
  }
                    /* WARNING: Could not recover jumptable at 0x004885d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0x18) + 0xc))((int *)(param_1 + 0x18));
  return;
}



int fn_004884dc(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  *param_1 = &DAT_008539ec;
  piVar2 = (int *)param_1[6];
  piVar3 = (int *)*piVar2;
  while (piVar3 != piVar2) {
    piVar4 = (int *)param_1[6];
    if (piVar3 != (int *)param_1[6]) {
      piVar4 = (int *)*piVar3;
      *(int **)piVar3[1] = piVar4;
      *(int *)(*piVar3 + 4) = piVar3[1];
      param_1[7] = param_1[7] + -1;
      (**(code **)piVar3[2])(piVar3 + 2);
      *piVar3 = param_1[3];
      param_1[3] = piVar3;
    }
    piVar3 = piVar4;
  }
  iVar1 = fn_00786480(param_1 + 2);
  return iVar1 + -8;
}



int fn_00488440(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  *param_1 = &DAT_008539ec;
  iVar1 = fn_004b4c44(param_1 + 2);
  *(undefined4 *)(iVar1 + -4) = 0;
  piVar4 = (int *)**(int **)(param_2 + 0x10);
  do {
    if (piVar4 == (int *)*(int *)(param_2 + 0x10)) {
      return iVar1 + -8;
    }
    iVar2 = (int)(piVar4 + 2);
    iVar3 = fn_006d0810(iVar2,L"RVCID",0);
    if (iVar3 == 0) {
LAB_004884b8:
      fn_00786404(iVar1,iVar2);
    }
    else {
      iVar3 = fn_006d0810(iVar2,L"RVCID",0);
      if (*(int *)(iVar1 + -4) == 0 || *(int *)(iVar1 + -4) == iVar3) {
        *(int *)(iVar1 + -4) = iVar3;
        goto LAB_004884b8;
      }
    }
    piVar4 = (int *)*piVar4;
  } while( true );
}



int fn_0048833c(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  int *piVar5;
  undefined4 local_18;
  int local_14;
  undefined1 auStack_10 [4];
  
  *param_1 = &DAT_008539c4;
  iVar1 = fn_00170f54(param_1 + 0x44);
  piVar5 = (int *)(iVar1 + -0x1c);
  iVar2 = *(int *)(iVar1 + -0xc);
  if (iVar2 != 0) {
    local_18 = *(undefined4 *)(iVar2 + 8);
    local_14 = iVar2;
    fn_0077b244(auStack_10,piVar5,&local_18,&local_14);
    iVar2 = *(int *)(iVar1 + -0xc);
    *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar1 + -0x18);
    *(int *)(iVar1 + -0x18) = iVar2;
    piVar3 = (int *)*piVar5;
    while (piVar3 != (int *)0x0) {
      *piVar5 = *piVar3;
      if (piVar3[2] != 0) {
        pcVar4 = *(code **)(piVar3[2] + -8);
        if (pcVar4 == (code *)0x0) {
          fn_0030233c();
        }
        else {
          (*pcVar4)();
        }
      }
      if (piVar3 != (int *)0x0) {
        if ((code *)piVar3[-2] == (code *)0x0) {
          fn_0030233c(piVar3 + -2);
        }
        else {
          (*(code *)piVar3[-2])();
        }
      }
      piVar3 = (int *)*piVar5;
    }
  }
  iVar1 = fn_00456728(iVar1 + -0x90);
  iVar1 = fn_0045f5e4(iVar1 + -0x30);
  iVar1 = fn_0045f5e4(iVar1 + -0x1c);
  iVar1 = fn_00786480(iVar1 + -0x18);
  return iVar1 + -0x1c;
}


