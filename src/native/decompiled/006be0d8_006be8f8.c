#include "006be0d8_006be8f8.h"



undefined4 fn_006be8f8(int param_1)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  undefined2 *puVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  short sVar9;
  uint uVar10;
  undefined2 *local_20;
  undefined2 *local_1c;
  undefined2 *local_18;
  
  iVar6 = *(int *)(*(int *)(param_1 + 500) + 4);
  if (*(char *)(iVar6 + 0x14) == '\0') {
    sVar9 = 0;
    pcVar2 = (char *)fn_006afe90(*(undefined4 *)(DAT_008977e0 + 0x1c),
                                  *(undefined4 *)(DAT_008977e0 + 0xa8));
    iVar8 = 3;
    pcVar7 = (char *)&DAT_00891f18;
    iVar3 = 0x891f1a;
    do {
      pcVar1 = pcVar7 + 4;
      pcVar7 = pcVar7 + 8;
      if (*pcVar1 == *pcVar2) {
        sVar9 = *(short *)(iVar3 + 4);
      }
      if (*pcVar7 == *pcVar2) {
        sVar9 = *(short *)(iVar3 + 8);
      }
      iVar8 = iVar8 + -1;
      iVar3 = iVar3 + 8;
    } while (iVar8 != 0);
    if (sVar9 != 0) {
      fn_002ea524();
      uVar4 = fn_00237090();
      iVar3 = fn_006b7b34(*(undefined4 *)(DAT_00897804 + 0x24),uVar4);
      if (iVar3 == 0) {
        return 0;
      }
    }
  }
  local_20 = (undefined2 *)0x0;
  local_1c = (undefined2 *)0x0;
  local_18 = (undefined2 *)0x0;
  uVar10 = 0;
  if (*(int *)(iVar6 + 8) - *(int *)(iVar6 + 4) >> 3 != 0) {
    do {
      fn_002ea524((int)*(short *)(*(int *)(iVar6 + 4) + uVar10 * 8));
      uVar4 = fn_00237090();
      iVar3 = fn_006b7b34(*(undefined4 *)(DAT_00897804 + 0x24),uVar4);
      puVar5 = local_1c;
      if (iVar3 == 0) {
        if (local_1c == local_18) {
          fn_0079e460(&local_20,local_1c);
          puVar5 = local_1c;
        }
        else {
          puVar5 = local_1c + 1;
          if (local_1c != (undefined2 *)0x0) {
            *local_1c = *(undefined2 *)(*(int *)(iVar6 + 4) + uVar10 * 8);
          }
        }
      }
      local_1c = puVar5;
      uVar10 = uVar10 + 1;
    } while (uVar10 < (uint)(*(int *)(iVar6 + 8) - *(int *)(iVar6 + 4) >> 3));
  }
  if ((int)local_1c - (int)local_20 >> 1 == 0) {
    puVar5 = local_20;
    if (local_1c < local_20) {
      do {
        puVar5 = puVar5 + 1;
      } while (puVar5 != local_1c);
    }
    fn_001008c4(local_20,(int)local_18 - (int)local_20 >> 1,0);
    return 1;
  }
  puVar5 = local_20;
  if (local_1c < local_20) {
    do {
      puVar5 = puVar5 + 1;
    } while (puVar5 != local_1c);
  }
  fn_001008c4(local_20,(int)local_18 - (int)local_20 >> 1,0);
  return 0;
}



undefined4 fn_006be890(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  uVar4 = *(undefined4 *)(DAT_00897804 + 0x1c);
  iVar1 = fn_00113ce4();
  if (iVar1 != 0) {
    uVar2 = fn_006b52b0(uVar4);
    uVar3 = fn_00391d58();
    if (((uVar3 <= uVar2) && (iVar1 = fn_006b52c0(uVar4), iVar1 != 0)) &&
       (iVar1 = fn_006b5288(*(undefined4 *)(DAT_00897804 + 0x1c)), 0 < iVar1)) {
      return 1;
    }
  }
  return 0;
}



undefined4 fn_006be830(void)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  bool bVar8;
  
  uVar7 = *(undefined4 *)(DAT_00897804 + 0x1c);
  iVar2 = fn_00113ce4();
  if (iVar2 == 0) {
    return 0;
  }
  uVar3 = fn_006b52b0(uVar7);
  uVar4 = fn_00391d58();
  if (uVar3 < uVar4) {
    return 0;
  }
  iVar2 = fn_006b52c0(uVar7);
  if (iVar2 == 0) {
    return 0;
  }
  puVar1 = (undefined1 *)fn_006b5288(*(undefined4 *)(DAT_00897804 + 0x1c));
  puVar5 = &DAT_00891f1c;
  puVar6 = (undefined1 *)(int)DAT_00891f1e;
  bVar8 = puVar6 != puVar1;
  if (bVar8) {
    puVar6 = (undefined1 *)(int)DAT_00891f22;
  }
  if (bVar8 && puVar6 != puVar1) {
    puVar6 = (undefined1 *)(int)DAT_00891f26;
    bVar8 = puVar6 != puVar1;
    if (bVar8) {
      puVar6 = (undefined1 *)(int)DAT_00891f2a;
    }
    if (bVar8 && puVar6 != puVar1) {
      if ((undefined1 *)(int)DAT_00891f2e != puVar1) {
        puVar5 = (undefined1 *)(int)DAT_00891f32;
      }
      if ((undefined1 *)(int)DAT_00891f2e != puVar1 && puVar5 != puVar1) {
        return 0;
      }
    }
  }
  return 1;
}



undefined4 fn_006be78c(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  uVar4 = *(undefined4 *)(DAT_00897804 + 0x1c);
  iVar1 = fn_00113ca8();
  if (iVar1 != 0) {
    uVar2 = fn_006b52b0(uVar4);
    uVar3 = fn_00391d58();
    if ((uVar3 <= uVar2) && (uVar2 = fn_006b52c0(uVar4), 4 < uVar2)) {
      return 1;
    }
  }
  uVar4 = *(undefined4 *)(DAT_00897804 + 0x1c);
  iVar1 = fn_00113ce4();
  if (iVar1 != 0) {
    uVar2 = fn_006b52b0(uVar4);
    uVar3 = fn_00391d58();
    if ((uVar3 <= uVar2) && (iVar1 = fn_006b52c0(uVar4), iVar1 != 0)) {
      return 1;
    }
  }
  return 0;
}



undefined4 fn_006be738(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  uVar4 = *(undefined4 *)(DAT_00897804 + 0x1c);
  iVar1 = fn_00113ce4();
  if (iVar1 != 0) {
    uVar2 = fn_006b52b0(uVar4);
    uVar3 = fn_00391d58();
    if ((uVar3 <= uVar2) && (iVar1 = fn_006b52c0(uVar4), iVar1 != 0)) {
      return 1;
    }
  }
  return 0;
}



undefined4 fn_006be54c(int param_1)

{
  int iVar1;
  
  iVar1 = fn_006ba624();
  return *(undefined4 *)(*(int *)(param_1 + 0x30) + iVar1 * 4);
}



undefined4 fn_006be4c8(int param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  
  cVar1 = *param_2;
  if ((int)cVar1 - 0x20U < 2) {
    uVar2 = (uint)(char)(cVar1 + -0x10);
    if ((int)uVar2 < 0) {
      return 0;
    }
    iVar3 = *(int *)(param_1 + 4);
    if ((uint)(*(int *)(param_1 + 8) - iVar3 >> 2) <= uVar2) {
      return 0;
    }
  }
  else {
    if (1 < (int)cVar1 - 0x22U) {
      return 0;
    }
    uVar2 = (uint)(char)(cVar1 + -0x10);
    if ((int)uVar2 < 0) {
      return 0;
    }
    iVar3 = *(int *)(param_1 + 4);
    if ((uint)(*(int *)(param_1 + 8) - iVar3 >> 2) <= uVar2) {
      return 0;
    }
  }
  return *(undefined4 *)(iVar3 + uVar2 * 4);
}



bool fn_006be434(int *param_1)

{
  uint uVar1;
  bool bVar2;
  
  uVar1 = *(uint *)(*param_1 + 0x30);
  bVar2 = *(char *)(uVar1 + 8) != '\x01';
  if (bVar2) {
    uVar1 = (uint)*(byte *)(uVar1 + 10);
  }
  return !bVar2 || uVar1 == 1;
}



void fn_006be1f4(void)

{
  fn_0068cafc(DAT_008977e8);
  return;
}



bool fn_006be18c(int param_1,int param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  iVar1 = fn_0068cafc(DAT_008977e8);
  fVar3 = *(float *)(param_2 + 8) - *(float *)(param_1 + 8);
  fVar4 = *(float *)(param_2 + 0xc) - *(float *)(param_1 + 0xc);
  fVar2 = *(float *)(param_2 + 0x10) - *(float *)(param_1 + 0x10);
  return SQRT(fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2) < *(float *)(iVar1 + 0x2a0);
}



bool fn_006be168(int param_1)

{
  int iVar1;
  
  iVar1 = fn_006cd544(param_1 + 0xf98);
  return iVar1 != 0;
}



uint fn_006be138(int param_1,int param_2)

{
  return (*(byte *)(*(int *)(param_1 + 0x2c) + param_2 * 0xa88 + 0xa74) & 2) >> 1;
}



int fn_006be118(int param_1)

{
  return (*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x2c)) / 0xa88;
}



int fn_006be0f4(int param_1,int param_2)

{
  return *(int *)(param_1 + 0x2c) + param_2 * 0xa88;
}



int fn_006be0d8(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x100) + 0x14);
  iVar1 = fn_00292f20();
  return *(int *)(iVar1 + 0x2c) + iVar2 * 0xa88;
}


