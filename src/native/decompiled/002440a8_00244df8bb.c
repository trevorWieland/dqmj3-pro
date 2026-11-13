#include "002440a8_00244df8bb.h"



void fn_00244df8(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  if (*(char *)(param_1 + 8) != '\0') {
    piVar3 = *(int **)(param_1 + 0x1c);
    for (piVar2 = (int *)*piVar3; piVar2 != piVar3; piVar2 = (int *)*piVar2) {
      (**(code **)(*(int *)piVar2[2] + 0x1c))();
      if (*(char *)(piVar2[2] + 0x46) != '\0') {
        (**(code **)(*(int *)piVar2[2] + 0x20))();
      }
    }
    piVar3 = *(int **)(param_1 + 0x1c);
    for (piVar2 = (int *)*piVar3; piVar2 != piVar3; piVar2 = (int *)*piVar2) {
      iVar1 = (**(code **)(*(int *)piVar2[2] + 0x54))();
      if (iVar1 < 0) {
        iVar1 = (**(code **)(*(int *)piVar2[2] + 0x34))();
        if (iVar1 == 0) {
          iVar1 = (**(code **)(*(int *)piVar2[2] + 0x38))();
          if (iVar1 == 0) {
            iVar1 = (**(code **)(*(int *)piVar2[2] + 0x3c))();
            if (iVar1 == 0) {
              iVar1 = (**(code **)(*(int *)piVar2[2] + 0x40))();
              if ((iVar1 != 0) && ((code *)piVar2[0xc] != (code *)0x0)) {
                (*(code *)piVar2[0xc])(param_1,*(undefined4 *)(param_1 + 0x24),piVar2[2],piVar2[7]);
              }
            }
            else if ((code *)piVar2[0xb] != (code *)0x0) {
              (*(code *)piVar2[0xb])(param_1,*(undefined4 *)(param_1 + 0x24),piVar2[2],piVar2[6]);
            }
          }
          else if ((code *)piVar2[10] != (code *)0x0) {
            (*(code *)piVar2[10])(param_1,*(undefined4 *)(param_1 + 0x24),piVar2[2],piVar2[5]);
          }
        }
        else if ((code *)piVar2[9] != (code *)0x0) {
          (*(code *)piVar2[9])(param_1,*(undefined4 *)(param_1 + 0x24),piVar2[2],piVar2[4]);
        }
      }
      else if ((code *)piVar2[8] != (code *)0x0) {
        (*(code *)piVar2[8])(param_1,*(undefined4 *)(param_1 + 0x24),piVar2[2],piVar2[3]);
      }
    }
  }
  return;
}



void fn_00244dc4(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002c4694();
  puVar1[0x2c] = 0;
  *puVar1 = &DAT_0081d450;
  puVar1[0x2e] = 0;
  return;
}



void fn_00244a2c(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int local_34;
  int local_30;
  int local_2c;
  undefined1 auStack_28 [4];
  
  fn_002c3e78();
  iVar2 = fn_006c2278(*(undefined4 *)(param_1 + 0xb0));
  iVar9 = 0;
  if (0 < iVar2) {
    do {
      puVar3 = (undefined4 *)fn_006c226c(*(undefined4 *)(param_1 + 0xb0),iVar9);
      cVar1 = *(char *)(puVar3 + 1);
      uVar6 = *puVar3;
      fn_00168a24(&local_2c,&DAT_00244788,auStack_28);
      if (cVar1 == '\0') {
        uVar4 = fn_00230a84(0);
        fn_00147974(&local_2c,uVar4);
      }
      else if (cVar1 == '\x01') {
        uVar4 = fn_00230a84(1,0);
        fn_00147974(&local_2c,uVar4);
      }
      fn_0031b78c(param_1,iVar9,8,local_2c);
      fn_00168a24(&local_34,&DAT_00244788,auStack_28);
      fn_00231210(&local_30,uVar6,0);
      uVar5 = *(uint *)(local_34 + -4);
      iVar7 = *(int *)(local_30 + -4);
      if ((*(uint *)(local_34 + -8) < uVar5 + iVar7) || (1 < *(int *)(local_34 + -0xc) + 1U)) {
        if (-iVar7 - 0xfU < uVar5) {
          fn_002ff628(8,&DAT_008c760f,&DAT_008c760f,uVar5,-iVar7 - 0xfU);
        }
        fn_00177c88(&local_34,*(undefined4 *)(local_34 + -4),0,local_30,
                     *(undefined4 *)(local_30 + -4),0,iVar7);
      }
      else {
        fn_00301a9c(local_34 + uVar5 * 2,local_30,(iVar7 + 1) * 2);
        *(uint *)(local_34 + -4) = uVar5 + iVar7;
      }
      fn_001588d4(&local_30);
      fn_0031b78c(param_1,iVar9,0,local_34);
      fn_001588d4(&local_34);
      fn_001588d4(&local_2c);
      uVar6 = *puVar3;
      fn_00168a24(&local_34,&DAT_00244788,&local_30);
      iVar7 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),uVar6);
      if (*(int *)(iVar7 + 0xe0) == 0) {
        uVar6 = fn_0022f584((char *)&DAT_00244794,0);
        uVar8 = *(undefined4 *)(local_34 + -4);
        uVar4 = fn_00100b58(uVar6);
        fn_00177c88(&local_34,uVar8,0,uVar6,uVar4,0,uVar4);
      }
      else {
        fn_0023097c(&local_2c,(int)*(short *)(iVar7 + 0xe4),0);
        uVar5 = *(uint *)(local_34 + -4);
        iVar7 = *(int *)(local_2c + -4);
        if ((*(uint *)(local_34 + -8) < uVar5 + iVar7) || (1 < *(int *)(local_34 + -0xc) + 1U)) {
          if (-iVar7 - 0xfU < uVar5) {
            fn_002ff628(8,&DAT_008c760f,&DAT_008c760f,uVar5,-iVar7 - 0xfU);
          }
          fn_00177c88(&local_34,*(undefined4 *)(local_34 + -4),0,local_2c,
                       *(undefined4 *)(local_2c + -4),0,iVar7);
        }
        else {
          fn_00301a9c(local_34 + uVar5 * 2,local_2c,(iVar7 + 1) * 2);
          *(uint *)(local_34 + -4) = uVar5 + iVar7;
        }
        fn_001588d4(&local_2c);
      }
      fn_0031b78c(param_1,iVar9,6,local_34);
      fn_001588d4(&local_34);
      iVar9 = iVar9 + 1;
    } while (iVar9 < iVar2);
  }
  return;
}


