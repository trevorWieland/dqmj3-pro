#include "00105760_00105b38.h"



void fn_00105b38(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00105b44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 4) + 8))();
  return;
}



void fn_00105b28(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00105b34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x14) + 0x14))();
  return;
}



void fn_00105b14(int param_1)

{
  if (*(int *)(param_1 + 0x5c) != 0) {
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + -1;
  }
  return;
}



undefined4 * fn_00105a84(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0010d3dc();
  *puVar1 = &DAT_0081c38c;
  puVar1[4] = 0x10;
  puVar1[2] = 0;
  puVar1[3] = 8;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[5] = 0x14;
  puVar1[6] = 0x18;
  *(undefined1 *)(puVar1 + 0xe) = 0;
  *(undefined1 *)((int)puVar1 + 0x39) = 1;
  return puVar1;
}



void fn_001058a4(int param_1)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  
  fn_00116298();
  if (*(int *)(param_1 + 0x34) < 0) {
    if (*(int *)(param_1 + 0x30) == 0) {
      return;
    }
    iVar2 = fn_0016678c(param_1,0xd);
    if (iVar2 != 0) {
      return;
    }
    if (*(char *)(param_1 + 0x39) == '\0') {
      *(undefined1 *)(param_1 + 0x38) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x30) = 0;
      *(undefined4 *)(param_1 + 0x34) = 0xf;
    }
    return;
  }
  iVar2 = *(int *)(param_1 + 0x34) + -1;
  *(int *)(param_1 + 0x34) = iVar2;
  if (iVar2 != 0) {
    return;
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    fn_0015a394(param_1,0xd);
    return;
  }
  if (*(char *)(param_1 + 0x39) == '\0') {
    return;
  }
  iVar2 = *(int *)(param_1 + 0x24);
  *(undefined1 *)(param_1 + 0x38) = 0;
  if (iVar2 == 0) {
    if (*(int *)(param_1 + 0x20) != 0) goto LAB_00105988;
  }
  else {
    if (*(int *)(param_1 + 0x20) != iVar2) {
      fn_0015a394(param_1,0xc,iVar2);
      *(undefined4 *)(param_1 + 0x24) = 0;
      *(int *)(param_1 + 0x20) = iVar2;
    }
    *(undefined4 *)(param_1 + 0x24) = 0;
    fn_00128788(param_1,0xc,1,0);
    bVar3 = *(char *)(param_1 + 0x39) != '\0';
    cVar1 = '\0';
    if (bVar3) {
      cVar1 = *(char *)(param_1 + 0x38);
    }
    if (!bVar3 || cVar1 == '\0') {
LAB_00105988:
      fn_00128788(param_1,0xc,0,0xf);
    }
  }
  iVar2 = *(int *)(param_1 + 0x2c);
  if (iVar2 == 0) {
    if (*(int *)(param_1 + 0x28) != 0) {
      bVar3 = *(char *)(param_1 + 0x39) != '\0';
      cVar1 = '\0';
      if (bVar3) {
        cVar1 = *(char *)(param_1 + 0x38);
      }
      if (!bVar3 || cVar1 == '\0') goto LAB_00105a38;
    }
  }
  else {
    if (*(int *)(param_1 + 0x20) != iVar2) {
      if (*(char *)(param_1 + 0x38) == '\0') {
        fn_0015a394(param_1,0xc,iVar2);
        *(undefined4 *)(param_1 + 0x24) = 0;
        *(int *)(param_1 + 0x20) = iVar2;
      }
      else {
        *(int *)(param_1 + 0x24) = iVar2;
      }
    }
    *(undefined4 *)(param_1 + 0x2c) = 0;
    fn_00128788(param_1,0xf,1,0);
    bVar3 = *(char *)(param_1 + 0x39) == '\0';
    cVar1 = '\0';
    if (!bVar3) {
      cVar1 = *(char *)(param_1 + 0x38);
    }
    if (bVar3 || cVar1 == '\0') {
LAB_00105a38:
      fn_00128788(param_1,0xf,0,0xf);
      return;
    }
  }
  return;
}



void fn_00105860(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  fn_00116dcc(param_1,0);
  uVar2 = 0;
  do {
    fn_0010d3b8(param_1,(&DAT_007d0638)[uVar2]);
    uVar2 = uVar2 + 1;
  } while (uVar2 < 5);
  uVar1 = fn_00116e24(param_1);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  return;
}



void fn_0010581c(undefined4 param_1)

{
  fn_0010d20c(param_1,(char *)&DAT_007d0618,0,0x400000,0x20,1,0x14);
  fn_0010d230(param_1,1);
  return;
}



undefined4 * fn_00105760(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  *param_1 = &DAT_0081c248;
  param_1[1] = 0;
  iVar1 = fn_00145b00(0x1030,&DAT_00812c8c);
  if (iVar1 == 0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)fn_00108fd0();
  }
  piVar3 = (int *)param_1[1];
  if (piVar3 != piVar4) {
    if (piVar3 != (int *)0x0) {
      if ((undefined4 *)*piVar3 != &DAT_008f9cf4) {
        piVar2 = (undefined4 *)*piVar3 + -3;
        iVar1 = *piVar2;
        if ((iVar1 == -1) || ((piVar2 != &DAT_008f9ce8 && (*piVar2 = iVar1 + -1, iVar1 == 0)))) {
          fn_001008c4(*piVar3 + -0xc,*(int *)(*piVar3 + -8) + 8,0);
        }
      }
      fn_002feef8(piVar3);
    }
    param_1[1] = piVar4;
  }
  return param_1;
}


