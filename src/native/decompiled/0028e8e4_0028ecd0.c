#include "0028e8e4_0028ecd0.h"



undefined4 *
fn_0028ecd0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  
  puVar1 = (undefined4 *)fn_006896e0();
  *puVar1 = &DAT_0081e218;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  piVar2 = (int *)fn_00100fc6(0xc,0);
  iVar3 = fn_00100fc6(0xc,0);
  piVar2[2] = iVar3;
  *piVar2 = puVar1[6];
  piVar2[1] = 1;
  puVar1[6] = piVar2;
  iVar3 = piVar2[2];
  puVar1[8] = iVar3;
  puVar1[9] = iVar3 + 0xc;
  puVar1[10] = iVar3;
  puVar1[8] = iVar3 + 0xc;
  *(int *)iVar3 = iVar3;
  iVar3 = puVar1[10];
  *(int *)(iVar3 + 4) = iVar3;
  puVar1[0xc] = 0;
  iVar3 = fn_00145b00(0x80,&DAT_00812c8c);
  uVar4 = 0;
  if (iVar3 != 0) {
    uVar4 = fn_0069d3a0();
  }
  puVar1[0xd] = uVar4;
  puVar1[0xe] = param_3;
  *(undefined1 *)(puVar1 + 0xf) = param_4;
  return puVar1;
}



undefined4 fn_0028ec90(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)**(int **)(param_1 + 0x28);
  while( true ) {
    if (piVar1 == *(int **)(param_1 + 0x28)) {
      return 1;
    }
    if (*(char *)(*(int *)piVar1[2] + 0xc) != '\x03') break;
    piVar1 = (int *)*piVar1;
  }
  return 0;
}



void fn_0028ec58(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0x28);
  for (piVar1 = (int *)*piVar2; piVar1 != piVar2; piVar1 = (int *)*piVar1) {
    (**(code **)(**(int **)piVar1[2] + 0x18))();
  }
  return;
}



void fn_0028ec1c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0028eaf4();
  if (puVar1 == (undefined4 *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0028ec50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)*puVar1 + 0x28))((int *)*puVar1,param_3,param_4,0);
  return;
}



void fn_0028ebc8(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0x28);
  for (piVar1 = (int *)*piVar2; piVar1 != piVar2; piVar1 = (int *)*piVar1) {
    fn_0028fb1c(*(undefined4 *)piVar1[2]);
  }
  return;
}



void fn_0028eb48(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)fn_0028eaf4();
  if ((piVar1 == (int *)0x0) || (iVar2 = fn_006f69f4(*piVar1), iVar2 != 0)) {
    iVar2 = fn_0028e3b4(param_1,param_2);
    if (iVar2 != 0) {
      fn_0028e718(param_1,iVar2,param_3,param_4);
      return;
    }
  }
  else if (*(char *)(*piVar1 + 0x1d) != '\0') {
    fn_00689c30(*piVar1);
    return;
  }
  return;
}



undefined4 fn_0028eae4(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(undefined4 **)(param_1 + 0x30) != (undefined4 *)0x0) {
    uVar1 = **(undefined4 **)(param_1 + 0x30);
  }
  return uVar1;
}



undefined4 fn_0028eadc(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x14) + 0x30);
  uVar2 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = *puVar1;
  }
  return uVar2;
}



undefined4 fn_0028eac8(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)fn_0028eaf4();
  uVar2 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = *puVar1;
  }
  return uVar2;
}



undefined4 fn_0028eac0(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)fn_0028eaf4(*(undefined4 *)(param_1 + 0x14));
  uVar2 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = *puVar1;
  }
  return uVar2;
}



undefined4 fn_0028eaf4(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = (int *)**(int **)(param_1 + 0x28);
  while( true ) {
    if (piVar1 == *(int **)(param_1 + 0x28)) {
      return 0;
    }
    if (*(int *)**(undefined4 **)(piVar1[2] + 4) == param_2) break;
    piVar1 = (int *)*piVar1;
  }
  return piVar1[2];
}



void fn_0028e8e4(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
  piVar3 = (int *)**(undefined4 **)(param_1 + 0x28);
  do {
    while( true ) {
      if (piVar3 == *(int **)(param_1 + 0x28)) {
        return;
      }
      piVar5 = (int *)piVar3[2];
      (**(code **)(*(int *)*piVar5 + 0x20))();
      if (*(char *)(*piVar5 + 0xc) == '\a') break;
      piVar3 = (int *)*piVar3;
    }
    piVar1 = *(int **)(param_1 + 0x28);
    if (piVar5[2] == 0) {
      if (piVar3 != piVar1) {
        piVar1 = (int *)*piVar3;
        *(int *)piVar3[1] = *piVar3;
        *(int *)(*piVar3 + 4) = piVar3[1];
        *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -1;
        *piVar3 = *(int *)(param_1 + 0x1c);
        *(int **)(param_1 + 0x1c) = piVar3;
      }
      if (*(int **)(param_1 + 0x30) == piVar5) {
        *(undefined4 *)(param_1 + 0x30) = 0;
        piVar3 = *(int **)(param_1 + 0x28);
        if (piVar3 != (int *)*piVar3) {
          do {
            piVar3 = (int *)piVar3[1];
            if (*(char *)(**(int **)(piVar3[2] + 4) + 0x10) == '\0') {
              *(int *)(param_1 + 0x30) = piVar3[2];
              break;
            }
          } while (piVar3 != (int *)**(undefined4 **)(param_1 + 0x28));
        }
        piVar4 = *(int **)(param_1 + 0x30);
        piVar2 = (int *)(param_1 + 0x34);
        piVar3 = piVar2;
        if (piVar4 != (int *)0x0) {
          piVar2 = (int *)*piVar2;
          piVar3 = piVar4;
        }
        if (piVar4 == (int *)0x0) {
          *(undefined4 *)(*piVar3 + 4) = 0;
        }
        else {
          piVar2[1] = *piVar3 + 0x20;
        }
      }
    }
    else {
      if (piVar3 != piVar1) {
        piVar1 = (int *)*piVar3;
        *(int *)piVar3[1] = *piVar3;
        *(int *)(*piVar3 + 4) = piVar3[1];
        *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -1;
        *piVar3 = *(int *)(param_1 + 0x1c);
        *(int **)(param_1 + 0x1c) = piVar3;
      }
      piVar3 = *(int **)(param_1 + 0x28);
      fn_0028e718(param_1,piVar5[2],(int)(char)piVar5[3],(int)*(char *)((int)piVar5 + 0xd));
      if (piVar1 == piVar3) {
        piVar1 = (int *)**(int **)(param_1 + 0x28);
      }
    }
    piVar3 = piVar1;
    if (piVar5 != (int *)0x0) {
      fn_0068aab0(*piVar5);
      if ((int *)*piVar5 != (int *)0x0) {
        (**(code **)(*(int *)*piVar5 + 4))();
      }
      fn_002feef8(piVar5);
    }
  } while( true );
}


