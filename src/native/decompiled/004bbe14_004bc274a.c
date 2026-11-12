#include "004bbe14_004bc274a.h"



void fn_004bbfa4(int param_1,undefined4 param_2,ushort param_3,ushort param_4,int param_5,
                 undefined4 param_6,undefined4 param_7)

{
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  uint *puVar4;
  bool bVar5;
  
  *(ushort *)(param_1 + 0x3c) = *(ushort *)(param_1 + 0x3c) | param_3 & 0xf | param_4 & 0xfff0;
  *(undefined2 *)(param_1 + 0x120) = 0;
  *(undefined2 *)(param_1 + 0x122) = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x11c) = param_2;
  puVar1 = (undefined4 *)(param_1 + 0x140);
  *(undefined4 *)(param_1 + 300) = 0;
  *puVar1 = 0;
  *(undefined4 *)(param_1 + 0x144) = 0;
  if (param_5 != 0) {
    puVar1 = (undefined4 *)&DAT_00000001;
  }
  *(undefined4 *)(param_1 + 0x148) = param_6;
  if (param_5 != 0) {
    piVar2 = (int *)(param_5 + 4);
    do {
      bVar5 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar5);
    *piVar2 = *piVar2 + (int)puVar1;
    piVar2 = *(int **)(param_1 + 0xd8);
    if (piVar2 != (int *)0x0) {
      puVar4 = (uint *)(piVar2 + 1);
      do {
        uVar3 = *puVar4 - 1;
        bVar5 = (bool)hasExclusiveAccess(puVar4);
      } while (!bVar5);
      *puVar4 = uVar3;
      bVar5 = uVar3 == 0;
      if (bVar5) {
        uVar3 = (uint)*(byte *)(piVar2 + 2);
      }
      if (bVar5 && uVar3 == 0) {
        *(undefined1 *)(piVar2 + 2) = 1;
        (**(code **)(*piVar2 + 4))();
      }
    }
    *(int *)(param_1 + 0xd8) = param_5;
  }
  *(undefined4 *)(param_1 + 0x118) = param_7;
  *(undefined1 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x134) = 0;
  *(undefined1 *)(param_1 + 0x131) = 0;
  *(undefined1 *)(param_1 + 0x138) = 0;
  return;
}



void fn_004bbf80(undefined4 *param_1,undefined4 param_2)

{
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[3] = param_2;
  *param_1 = &DAT_00855d78;
  param_1[2] = 0;
  *(undefined1 *)((int)param_1 + 5) = 0;
  return;
}



void fn_004bbe14(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint *puVar4;
  bool bVar5;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [88];
  undefined4 *apuStack_18 [2];
  
  *param_1 = &DAT_00855d5c;
  if (param_1[0x1e] != 0) {
    fn_004565fc(auStack_70);
    fn_004740f4(param_1,auStack_70);
    fn_004562e0(auStack_70,0xffffffff);
    fn_00456728(auStack_70);
  }
  piVar2 = (int *)param_1[0x52];
  param_1[0x52] = 0;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))();
  }
  if (param_1[0x47] != 0) {
    if (*(char *)(param_1[0x47] + 0x22) != '\x05') {
      fn_004b2f04();
    }
    piVar2 = (int *)param_1[0x47];
    puVar4 = (uint *)(piVar2 + 1);
    do {
      uVar3 = *puVar4 - 1;
      bVar5 = (bool)hasExclusiveAccess(puVar4);
    } while (!bVar5);
    *puVar4 = uVar3;
    bVar5 = uVar3 == 0;
    if (bVar5) {
      uVar3 = (uint)*(byte *)(piVar2 + 2);
    }
    if (bVar5 && uVar3 == 0) {
      *(undefined1 *)(piVar2 + 2) = 1;
      (**(code **)(*piVar2 + 4))();
    }
    param_1[0x47] = 0;
  }
  if (param_1[0x48] != 0) {
    if (*(char *)(param_1[0x48] + 0x22) != '\x05') {
      fn_004b2f04();
    }
    piVar2 = (int *)param_1[0x48];
    puVar4 = (uint *)(piVar2 + 1);
    do {
      uVar3 = *puVar4 - 1;
      bVar5 = (bool)hasExclusiveAccess(puVar4);
    } while (!bVar5);
    *puVar4 = uVar3;
    bVar5 = uVar3 == 0;
    if (bVar5) {
      uVar3 = (uint)*(byte *)(piVar2 + 2);
    }
    if (bVar5 && uVar3 == 0) {
      *(undefined1 *)(piVar2 + 2) = 1;
      (**(code **)(*piVar2 + 4))();
    }
    param_1[0x48] = 0;
  }
  if ((int *)param_1[0x49] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x49] + 4))();
  }
  if ((int *)param_1[0x52] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x52] + 4))();
  }
  *param_1 = &DAT_008533e0;
  if (param_1[0x1e] != 0) {
    fn_004565fc(auStack_78);
    iVar1 = fn_00455e10(auStack_78);
    if (iVar1 != 0) {
      param_1[0x1c] = auStack_78;
      if (*(char *)(param_1 + 3) == '\0') {
        fn_004739dc(param_1);
      }
      else {
        fn_00456400(param_1 + 4);
        apuStack_18[0] = param_1;
        fn_0045616c(param_1 + 4,&DAT_004739d4,apuStack_18);
        (*(code *)param_1[1])(param_1 + 4,param_1 + 2);
      }
    }
    fn_004562e0(auStack_78,0xffffffff);
    fn_00456728(auStack_78);
  }
  piVar2 = (int *)param_1[0x27];
  if (piVar2 != (int *)0x0) {
    puVar4 = (uint *)(piVar2 + 1);
    do {
      uVar3 = *puVar4 - 1;
      bVar5 = (bool)hasExclusiveAccess(puVar4);
    } while (!bVar5);
    *puVar4 = uVar3;
    bVar5 = uVar3 == 0;
    if (bVar5) {
      uVar3 = (uint)*(byte *)(piVar2 + 2);
    }
    if (bVar5 && uVar3 == 0) {
      *(undefined1 *)(piVar2 + 2) = 1;
      (**(code **)(*piVar2 + 4))();
    }
  }
  piVar2 = (int *)param_1[0x25];
  if (piVar2 != (int *)0x0) {
    puVar4 = (uint *)(piVar2 + 1);
    do {
      uVar3 = *puVar4 - 1;
      bVar5 = (bool)hasExclusiveAccess(puVar4);
    } while (!bVar5);
    *puVar4 = uVar3;
    bVar5 = uVar3 == 0;
    if (bVar5) {
      uVar3 = (uint)*(byte *)(piVar2 + 2);
    }
    if (bVar5 && uVar3 == 0) {
      *(undefined1 *)(piVar2 + 2) = 1;
      (**(code **)(*piVar2 + 4))();
    }
  }
  piVar2 = (int *)param_1[0x26];
  if (piVar2 != (int *)0x0) {
    puVar4 = (uint *)(piVar2 + 1);
    do {
      uVar3 = *puVar4 - 1;
      bVar5 = (bool)hasExclusiveAccess(puVar4);
    } while (!bVar5);
    *puVar4 = uVar3;
    bVar5 = uVar3 == 0;
    if (bVar5) {
      uVar3 = (uint)*(byte *)(piVar2 + 2);
    }
    if (bVar5 && uVar3 == 0) {
      *(undefined1 *)(piVar2 + 2) = 1;
      (**(code **)(*piVar2 + 4))();
    }
    param_1[0x26] = 0;
  }
  if ((int *)param_1[0x21] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x21] + 4))();
  }
  param_1[0x21] = 0;
  if ((int *)param_1[0x22] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x22] + 4))();
  }
  param_1[0x22] = 0;
  param_1[0x1c] = 0;
  if ((int *)param_1[0x29] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x29] + 4))();
    param_1[0x29] = 0;
  }
  if ((int *)param_1[0x2a] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x2a] + 4))();
    param_1[0x2a] = 0;
  }
  (**(code **)(DAT_008e778c + 8))(&DAT_008e778c);
  piVar2 = (int *)fn_0045c8f4();
  puVar4 = (uint *)(piVar2 + 1);
  do {
    uVar3 = *puVar4 - 1;
    bVar5 = (bool)hasExclusiveAccess(puVar4);
  } while (!bVar5);
  *puVar4 = uVar3;
  bVar5 = uVar3 == 0;
  if (bVar5) {
    uVar3 = (uint)*(byte *)(piVar2 + 2);
  }
  if (bVar5 && uVar3 == 0) {
    *(undefined1 *)(piVar2 + 2) = 1;
    (**(code **)(*piVar2 + 4))(piVar2);
  }
  (**(code **)(DAT_008e778c + 0xc))(&DAT_008e778c);
  fn_004b3bb8();
  fn_004b78a0();
  fn_004b3bb8();
  iVar1 = fn_0013ce98(param_1 + 0x2c);
  iVar1 = fn_00456728(iVar1 + -0xa0);
  *(undefined1 *)(iVar1 + -4) = 0;
  return;
}


