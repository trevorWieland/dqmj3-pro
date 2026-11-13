#include "0072ff00_00731cec.h"



undefined4 fn_00731cec(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = 0;
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x1c);
  }
  if (param_1 == 0 || iVar1 == 0) {
    return 0xfffffffe;
  }
  iVar3 = *(int *)(iVar1 + 4);
  if ((iVar3 != 0x2a && iVar3 != 0x45) && (iVar3 != 0x49 && iVar3 != 0x5b)) {
    if (iVar3 != 0x67 && iVar3 != 0x71) {
      param_2 = iVar3 + -0x200;
    }
    if ((iVar3 != 0x67 && iVar3 != 0x71) && param_2 != 0x9a) {
      return 0xfffffffe;
    }
  }
  if (*(int *)(iVar1 + 8) != 0) {
    (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28));
  }
  if (*(int *)(*(int *)(param_1 + 0x1c) + 0x44) != 0) {
    (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28));
  }
  if (*(int *)(*(int *)(param_1 + 0x1c) + 0x40) != 0) {
    (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28));
  }
  if (*(int *)(*(int *)(param_1 + 0x1c) + 0x38) != 0) {
    (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28));
  }
  (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x1c));
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if (iVar3 == 0x71) {
    uVar2 = 0xfffffffd;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



int fn_00731bec(int param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  bool bVar7;
  
  uVar6 = param_2 + 0x3f;
  iVar4 = param_2 + (param_2 + 7 >> 3) + (uVar6 >> 6);
  if (param_1 != 0) {
    uVar6 = *(uint *)(param_1 + 0x1c);
  }
  if (param_1 != 0 && uVar6 != 0) {
    iVar2 = *(int *)(uVar6 + 0x18);
    iVar3 = 0;
    if (iVar2 != 0) {
      if (iVar2 == 1) {
        iVar3 = 0;
        if (*(int *)(uVar6 + 0x6c) != 0) {
          iVar3 = 4;
        }
        iVar3 = iVar3 + 6;
      }
      else if (iVar2 == 2) {
        iVar2 = *(int *)(uVar6 + 0x1c);
        iVar3 = 0x12;
        if (iVar2 != 0) {
          bVar7 = *(int *)(iVar2 + 0x10) != 0;
          if (bVar7) {
            iVar3 = *(int *)(iVar2 + 0x14);
          }
          if (bVar7) {
            iVar3 = iVar3 + 0x14;
          }
          pcVar5 = *(char **)(iVar2 + 0x1c);
          if (*(char **)(iVar2 + 0x1c) != (char *)0x0) {
            do {
              cVar1 = *pcVar5;
              iVar3 = iVar3 + 1;
              pcVar5 = pcVar5 + 1;
            } while (cVar1 != '\0');
          }
          pcVar5 = *(char **)(iVar2 + 0x24);
          if (*(char **)(iVar2 + 0x24) != (char *)0x0) {
            do {
              cVar1 = *pcVar5;
              iVar3 = iVar3 + 1;
              pcVar5 = pcVar5 + 1;
            } while (cVar1 != '\0');
          }
          if (*(int *)(iVar2 + 0x2c) != 0) {
            iVar3 = iVar3 + 2;
          }
        }
      }
      else {
        iVar3 = 6;
      }
    }
    iVar2 = *(int *)(uVar6 + 0x30);
    bVar7 = iVar2 == 0xf;
    if (bVar7) {
      iVar2 = *(int *)(uVar6 + 0x50);
    }
    if (bVar7 && iVar2 == 0xf) {
      iVar4 = iVar3 + param_2 + (param_2 >> 0xc) + (param_2 >> 0xe) + (param_2 >> 0x19) + 7;
    }
    else {
      iVar4 = iVar3 + iVar4 + 5;
    }
  }
  else {
    iVar4 = iVar4 + 0xb;
  }
  return iVar4;
}



void fn_00730044(int param_1,undefined1 *param_2,uint param_3,uint param_4)

{
  undefined1 uVar1;
  undefined2 uVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  
  puVar4 = (uint *)(param_1 + 0x16bc);
  uVar6 = *puVar4;
  uVar5 = (uint)*(ushort *)(param_1 + 0x16b8) | param_4 << (uVar6 & 0xff) & 0xffff;
  uVar2 = (undefined2)uVar5;
  if ((int)uVar6 < 0xe) {
    uVar6 = uVar6 + 3;
    *(undefined2 *)(param_1 + 0x16b8) = uVar2;
    *puVar4 = uVar6;
  }
  else {
    *(undefined2 *)(param_1 + 0x16b8) = uVar2;
    iVar3 = *(int *)(param_1 + 0x14);
    *(int *)(param_1 + 0x14) = iVar3 + 1;
    *(char *)(*(int *)(param_1 + 8) + iVar3) = (char)uVar5;
    iVar3 = *(int *)(param_1 + 0x14);
    *(int *)(param_1 + 0x14) = iVar3 + 1;
    *(char *)(*(int *)(param_1 + 8) + iVar3) =
         (char)((ushort)*(undefined2 *)(param_1 + 0x16b8) >> 8);
    uVar6 = *puVar4 - 0xd;
    *(short *)(param_1 + 0x16b8) = (short)((param_4 & 0xffff) >> (0x10 - *puVar4 & 0xff));
    *puVar4 = uVar6;
  }
  if ((int)uVar6 < 9) {
    if (0 < (int)uVar6) {
      iVar3 = *(int *)(param_1 + 0x14);
      *(int *)(param_1 + 0x14) = iVar3 + 1;
      *(char *)(*(int *)(param_1 + 8) + iVar3) = (char)*(undefined2 *)(param_1 + 0x16b8);
    }
  }
  else {
    iVar3 = *(int *)(param_1 + 0x14);
    *(int *)(param_1 + 0x14) = iVar3 + 1;
    *(char *)(*(int *)(param_1 + 8) + iVar3) = (char)*(undefined2 *)(param_1 + 0x16b8);
    iVar3 = *(int *)(param_1 + 0x14);
    *(int *)(param_1 + 0x14) = iVar3 + 1;
    *(char *)(*(int *)(param_1 + 8) + iVar3) =
         (char)((ushort)*(undefined2 *)(param_1 + 0x16b8) >> 8);
  }
  *(undefined2 *)(param_1 + 0x16b8) = 0;
  *puVar4 = 0;
  iVar3 = *(int *)(param_1 + 0x14);
  *(int *)(param_1 + 0x14) = iVar3 + 1;
  *(char *)(*(int *)(param_1 + 8) + iVar3) = (char)param_3;
  iVar3 = *(int *)(param_1 + 0x14);
  *(int *)(param_1 + 0x14) = iVar3 + 1;
  *(char *)(*(int *)(param_1 + 8) + iVar3) = (char)(param_3 >> 8);
  iVar3 = *(int *)(param_1 + 0x14);
  *(int *)(param_1 + 0x14) = iVar3 + 1;
  *(char *)(*(int *)(param_1 + 8) + iVar3) = (char)~param_3;
  iVar3 = *(int *)(param_1 + 0x14);
  *(int *)(param_1 + 0x14) = iVar3 + 1;
  uVar6 = param_3 - 1;
  *(char *)(*(int *)(param_1 + 8) + iVar3) = (char)(~param_3 >> 8);
  if (param_3 < 0x80000000) {
    if (param_3 != 0 && -2 < (int)uVar6) {
      do {
        uVar5 = uVar6 - 1;
        bVar7 = uVar6 != 0;
        *(undefined1 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) = *param_2;
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
        param_2 = param_2 + 1;
        uVar6 = uVar5;
      } while (bVar7 && -2 < (int)uVar5);
      return;
    }
  }
  else {
    while (uVar5 = uVar6, param_3 != 0) {
      iVar3 = *(int *)(param_1 + 0x14);
      uVar1 = *param_2;
      *(int *)(param_1 + 0x14) = iVar3 + 1;
      *(undefined1 *)(*(int *)(param_1 + 8) + iVar3) = uVar1;
      uVar6 = uVar5 - 1;
      param_2 = param_2 + 1;
      param_3 = uVar5;
    }
  }
  return;
}



void fn_0072ff00(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *(int *)(param_1 + 0xb18) = param_1 + 0x94;
  *(int *)(param_1 + 0xb24) = param_1 + 0x988;
  *(int *)(param_1 + 0xb30) = param_1 + 0xa7c;
  *(undefined **)(param_1 + 0xb38) = &DAT_008c0758;
  *(undefined **)(param_1 + 0xb2c) = &DAT_008c0744;
  *(undefined **)(param_1 + 0xb20) = &DAT_008c0730;
  *(undefined2 *)(param_1 + 0x16b8) = 0;
  iVar2 = 0;
  *(undefined4 *)(param_1 + 0x16bc) = 0;
  iVar1 = 0;
  do {
    iVar3 = iVar2 + 1;
    iVar1 = iVar1 + 2;
    *(undefined2 *)(param_1 + iVar2 * 4 + 0x94) = 0;
    iVar2 = iVar2 + 2;
    *(undefined2 *)(param_1 + iVar3 * 4 + 0x94) = 0;
  } while (iVar1 < 0x11e);
  iVar2 = 0;
  iVar1 = 0;
  do {
    iVar3 = iVar2 + 1;
    iVar1 = iVar1 + 2;
    *(undefined2 *)(param_1 + iVar2 * 4 + 0x988) = 0;
    iVar2 = iVar2 + 2;
    *(undefined2 *)(param_1 + iVar3 * 4 + 0x988) = 0;
  } while (iVar1 < 0x1e);
  iVar2 = 1;
  iVar1 = 1;
  *(undefined2 *)(param_1 + 0xa7c) = 0;
  do {
    iVar3 = iVar2 + 1;
    iVar1 = iVar1 + 2;
    *(undefined2 *)(param_1 + iVar2 * 4 + 0xa7c) = 0;
    iVar2 = iVar2 + 2;
    *(undefined2 *)(param_1 + iVar3 * 4 + 0xa7c) = 0;
  } while (iVar1 < 0x13);
  *(undefined2 *)(param_1 + 0x494) = 1;
  *(undefined4 *)(param_1 + 0x16ac) = 0;
  *(undefined4 *)(param_1 + 0x16a8) = 0;
  *(undefined4 *)(param_1 + 0x16b0) = 0;
  *(undefined4 *)(param_1 + 0x16a0) = 0;
  return;
}


