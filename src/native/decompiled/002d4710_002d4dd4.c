#include "002d4710_002d4dd4.h"



void fn_002d4dd4(undefined4 param_1)

{
  fn_00313870(param_1,1);
  return;
}



void fn_002d4cd8(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_0082012c;
  if (param_1[0x14] != 0) {
    fn_00405898();
    fn_002feef8();
    param_1[0x14] = 0;
  }
  if ((int *)param_1[0x13] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x13] + 4))();
    param_1[0x13] = 0;
  }
  if ((int *)param_1[0x15] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x15] + 4))();
    param_1[0x15] = 0;
  }
  fn_001f748c(param_1,0,0);
  if ((int *)param_1[0x23] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x23] + 4))();
  }
  fn_002feef8(param_1[0x22]);
  if ((int *)param_1[0x15] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x15] + 4))();
  }
  if (param_1[0x14] != 0) {
    fn_00405898();
    fn_002feef8();
  }
  if ((int *)param_1[0x13] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x13] + 4))();
  }
  fn_001f8010(param_1);
  return;
}



undefined2 * fn_002d4b34(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  undefined2 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  
  puVar1 = (undefined4 *)fn_001f7e18();
  *puVar1 = &PTR_FUN_0082012c;
  puVar1[0x13] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar2 = (undefined2 *)fn_00101a1c((int)puVar1 + 0x5a,&LAB_001d4e64,4);
  puVar2[8] = 0;
  *(undefined1 *)(puVar2 + 9) = 0;
  *(undefined1 *)((int)puVar2 + 0x13) = 0xff;
  puVar2[10] = 0;
  *(undefined1 *)(puVar2 + 0xb) = 0;
  *(undefined1 *)((int)puVar2 + 0x17) = 0xff;
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 1) = 0;
  puVar2[2] = 0;
  *(undefined1 *)(puVar2 + 3) = 0;
  puVar2[4] = 0;
  *(undefined1 *)(puVar2 + 5) = 0;
  puVar2[6] = 0;
  *(undefined1 *)(puVar2 + 7) = 0;
  puVar2[8] = 0;
  *(undefined1 *)(puVar2 + 9) = 0;
  puVar2[10] = 0;
  *(undefined1 *)(puVar2 + 0xb) = 0;
  *(undefined1 *)(puVar2 + -1) = 0;
  *(undefined1 *)((int)puVar2 + -1) = 0;
  *(undefined4 *)(puVar2 + 0xd) = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(puVar2 + 0xf) = 0;
  *(undefined4 *)(puVar2 + 0x11) = 0;
  *(undefined4 *)(puVar2 + 0x13) = 0;
  *(undefined4 *)(puVar2 + 0x17) = 0;
  *(undefined4 *)(puVar2 + 0x19) = 0;
  *(undefined4 *)(puVar2 + 0x1b) = 0;
  *(undefined4 *)(puVar2 + 0x1d) = 0;
  *(undefined1 *)(puVar2 + 0x1f) = 0;
  *(undefined1 *)((int)puVar2 + 0x3f) = 0;
  *(undefined1 *)(puVar2 + 0x20) = 0;
  *(undefined4 *)(puVar2 + 0x21) = 0;
  puVar3 = (undefined4 *)fn_00145b00(4,&DAT_00812c8c);
  puVar1 = (undefined4 *)0x0;
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = puVar2 + -0x2d;
    puVar1 = puVar3;
  }
  if (puVar3 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  if (*(undefined4 **)(puVar2 + 0x17) != puVar1) {
    fn_002feef8();
    *(undefined4 **)(puVar2 + 0x17) = puVar1;
  }
  piVar4 = (int *)fn_002d40c8(*(undefined4 *)(puVar2 + 0x17),0);
  piVar5 = *(int **)(puVar2 + 0x19);
  if (piVar5 != piVar4) {
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 4))();
    }
    *(int **)(puVar2 + 0x19) = piVar4;
  }
  if (*(int **)(puVar2 + 0x19) != (int *)0x0) {
    (**(code **)(**(int **)(puVar2 + 0x19) + 8))();
  }
  fn_0028e434(*(undefined4 *)(puVar2 + -0x25),&DAT_007bad64);
  fn_0028e434(*(undefined4 *)(puVar2 + -0x23),&DAT_007badf0);
  fn_0028e434(*(undefined4 *)(puVar2 + -0x27),&DAT_007bb2a0);
  fn_0028e434(*(undefined4 *)(puVar2 + -0x21),&DAT_007bb32c);
  return puVar2 + -0x2d;
}



void fn_002d4b24(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x002d4b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x8c) + 0x14))();
  return;
}



void fn_002d4a9c(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  *(undefined1 *)(param_1 + 0x99) = 1;
  *(undefined4 *)(param_1 + 0x90) = 0;
  if (*(int **)(param_1 + 0x8c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x8c) + 0x10))();
  }
  piVar1 = (int *)fn_002d40c8(*(undefined4 *)(param_1 + 0x88),5);
  piVar2 = *(int **)(param_1 + 0x8c);
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    *(int **)(param_1 + 0x8c) = piVar1;
  }
  if (*(int **)(param_1 + 0x8c) == (int *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x002d4b1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x8c) + 8))();
  return;
}



undefined4 fn_002d49d8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  undefined4 local_18;
  
  cVar1 = *(char *)(*(int *)(param_1 + 0x48) + 0x7d);
  local_18 = param_4;
  do {
    do {
      do {
        cVar1 = cVar1 + '\x01';
        iVar2 = (int)cVar1;
        if (0x13 < iVar2) {
          return 0;
        }
        uVar3 = iVar2 - 0x10;
        bVar5 = 3 < uVar3;
        if (bVar5) {
          uVar3 = iVar2 - 0x18;
        }
      } while ((bVar5 && 3 < uVar3) && (iVar2 != 0x20 && iVar2 != 0x22));
      iVar4 = fn_00174828(DAT_008977e4);
      iVar4 = fn_001a46f4((int)*(short *)(iVar4 + iVar2 * 0x418 + -0x4080));
    } while (iVar4 == 0);
    local_18 = CONCAT31(((unsigned int)(local_18) >> 8) & 0xffffff,cVar1);
    iVar4 = fn_00353250(*(undefined4 *)(param_1 + 0x54),&local_18);
  } while (iVar4 == 0);
  fn_003a5b64(*(undefined4 *)(param_1 + 0x48),iVar2,1);
  return 1;
}



undefined4 fn_002d4710(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = fn_00182988(DAT_008977e4);
  if (*(char *)(iVar1 + 0x39c) != '\0') {
    if (*(char *)(param_1 + 0x98) != '\0') goto LAB_002d4978;
    if (*(char *)(param_1 + 0x99) != '\0') {
      return 0;
    }
    iVar2 = fn_0066e158(DAT_00898840);
    iVar1 = DAT_00898840;
    if (iVar2 != 0) {
      iVar2 = fn_00174828(DAT_008977e4);
      if (*(char *)(iVar2 + 0xe8) == '\b') {
        if (*(int *)(iVar1 + 0x20) == 0) {
          return 0;
        }
        if (*(int *)(iVar1 + 0x20) != 7) {
          return 1;
        }
        iVar1 = fn_0066e3d8(DAT_00898840);
        if (iVar1 != 0) {
          iVar1 = fn_00182988(DAT_008977e4);
          *(undefined1 *)(iVar1 + 0x3a3) = 0;
          return 1;
        }
        iVar1 = fn_00182988(DAT_008977e4);
        if (*(char *)(iVar1 + 0x3a3) != '\0') {
          piVar3 = (int *)fn_001c2374(DAT_008977e4);
          iVar1 = (**(code **)(*piVar3 + 4))();
          iVar2 = 0;
          while( true ) {
            iVar4 = fn_0066e28c(DAT_00898840,iVar2,0);
            iVar5 = fn_0066e510(DAT_00898840,iVar4);
            if ((iVar5 != 0) && (iVar4 == iVar1)) break;
            iVar2 = iVar2 + 1;
            if (7 < iVar2) goto LAB_002d48b4;
          }
          piVar3 = (int *)fn_001c2374(DAT_008977e4);
          iVar1 = (**(code **)(*piVar3 + 4))();
          iVar2 = 0;
          do {
            iVar4 = fn_0066e28c(DAT_00898840,iVar2,0);
            iVar5 = fn_0066e510(DAT_00898840,iVar4);
            if ((iVar5 != 0) && (iVar4 == iVar1)) {
              return 0;
            }
            iVar2 = iVar2 + 1;
          } while (iVar2 < 8);
LAB_002d48b4:
          *(undefined1 *)(DAT_00897840 + 0x36) = 4;
          return 1;
        }
        piVar3 = (int *)fn_001c2374(DAT_008977e4);
        iVar1 = (**(code **)(*piVar3 + 4))();
        iVar2 = 0;
        do {
          iVar4 = fn_0066e28c(DAT_00898840,iVar2,0);
          iVar5 = fn_0066e510(DAT_00898840,iVar4);
          if ((iVar5 != 0) && (iVar4 == iVar1)) {
            return 0;
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < 8);
      }
      else {
        iVar2 = fn_00174828(DAT_008977e4);
        if ((*(char *)(iVar2 + 0xe8) == '\x05') && (*(int *)(DAT_00898840 + 0x34) == 1)) {
          if (*(int *)(iVar1 + 0x20) == 0) {
            return 0;
          }
          return 1;
        }
        if (*(int *)(iVar1 + 0x20) == 0) {
          return 0;
        }
        if (*(int *)(iVar1 + 0x20) != 7) {
          return 1;
        }
      }
      *(undefined1 *)(param_1 + 0x98) = 1;
      return 0;
    }
  }
  if (*(char *)(param_1 + 0x98) == '\0') {
    return 0;
  }
LAB_002d4978:
  iVar1 = fn_00182988(DAT_008977e4);
  if (*(char *)(iVar1 + 0x39c) == '\0') {
    return 0;
  }
  if (*(char *)(param_1 + 0x99) != '\0') {
    return 0;
  }
  iVar1 = fn_0066e158(DAT_00898840);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(DAT_00898840 + 0x20) == 7) {
    return 0;
  }
  return 1;
}


