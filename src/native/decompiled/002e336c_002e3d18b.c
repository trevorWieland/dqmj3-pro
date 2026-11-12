#include "002e336c_002e3d18b.h"



undefined4 fn_002e3d18(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = fn_002c11d0(param_1,param_2,0);
  uVar3 = 0;
  uVar1 = *(int *)(iVar2 + 8) - *(int *)(iVar2 + 4) >> 2;
  if (uVar1 != 0) {
    do {
      if (*(int *)(*(int *)(iVar2 + 4) + uVar3 * 4) != 0) {
        return 0;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  return 1;
}



void fn_002e3c08(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined1 param_7,undefined1 param_8)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined8 uVar4;
  
  uVar4 = CONCAT44(param_5,param_6);
  *(undefined4 *)(param_1 + 0x18) = param_3;
  *(undefined1 *)(param_1 + 0x24) = *(undefined1 *)(param_2 + 0x16);
  iVar1 = fn_00145b00(0xe8,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_0025ecd0(iVar1,*(undefined4 *)(param_1 + 0x14),param_4);
  }
  piVar3 = *(int **)(param_1 + 0x10);
  if (piVar3 != piVar2) {
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))(piVar3);
    }
    *(int **)(param_1 + 0x10) = piVar2;
  }
  *(undefined4 *)(*(int *)(param_1 + 0x10) + 8) = *(undefined4 *)(param_1 + 0x18);
  (**(code **)(**(int **)(param_1 + 0x10) + 0x24))
            (*(int **)(param_1 + 0x10),*(undefined4 *)(param_2 + 0xc),
             *(undefined4 *)(param_2 + 0x10));
  *(undefined1 *)(*(int *)(param_1 + 0x10) + 0x45) = *(undefined1 *)(param_2 + 0x14);
  *(undefined1 *)(*(int *)(param_1 + 0x10) + 0x44) = *(undefined1 *)(param_2 + 0x15);
  fn_002e4118(param_1,param_2);
  *(undefined1 *)(*(int *)(param_1 + 0x10) + 0x46) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x10) = 0x100094e;
  *(undefined1 *)(*(int *)(param_1 + 0x10) + 0xd4) = param_7;
  *(undefined1 *)(*(int *)(param_1 + 0x10) + 0xd5) = param_8;
  *(undefined1 *)(param_1 + 0x25) = param_7;
  *(int *)(param_1 + 0x1c) = (int)((ulonglong)uVar4 >> 0x20);
  *(int *)(param_1 + 0x20) = (int)uVar4;
  fn_00245330(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x10));
  return;
}



int fn_002e3bbc(int param_1)

{
  if (*(char *)(param_1 + 0x26) != '\0') {
    fn_001218d4(DAT_00897800,L"patch:/data/Message/BossGuideMessage.mes");
  }
  if (*(int **)(param_1 + 8) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 8) + 4))();
  }
  return param_1;
}



undefined4 * fn_002e3ad8(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  *param_1 = 0xffffffff;
  *(undefined1 *)(param_1 + 1) = 0xff;
  param_1[2] = 0;
  param_1[6] = 0xffffffff;
  param_1[3] = 0;
  param_1[7] = 0xffffffff;
  param_1[8] = 0xffffffff;
  param_1[4] = param_2;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 9) = 1;
  *(undefined1 *)((int)param_1 + 0x25) = 1;
  *(undefined1 *)((int)param_1 + 0x26) = 0;
  *(undefined1 *)((int)param_1 + 0x27) = 0;
  puVar1 = (undefined4 *)fn_001f751c(param_2,0x48);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_008942d0) goto LAB_002e3b64;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_002e3b64:
  param_1[3] = puVar1;
  iVar3 = fn_00145b00(0x108,&DAT_00812c8c);
  piVar4 = (int *)0x0;
  if (iVar3 != 0) {
    piVar4 = (int *)fn_003dcbfc();
  }
  piVar5 = (int *)param_1[2];
  if (piVar5 != piVar4) {
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 4))(piVar5);
    }
    param_1[2] = piVar4;
  }
  return param_1;
}


