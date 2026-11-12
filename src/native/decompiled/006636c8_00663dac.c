#include "006636c8_00663dac.h"



void fn_00663dac(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)**(int **)(DAT_008ccfb8 + 0x18);
  iVar2 = puVar1[1];
  puVar1[1] = iVar2 + -1;
  if (iVar2 + -1 == 0) {
    fn_005df594(*puVar1);
    return;
  }
  fn_005df5ec();
  return;
}



int fn_00663d40(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)**(undefined4 **)(DAT_008ccfb8 + 0x18);
  if (puVar2[1] == 0) {
    do {
      iVar1 = fn_005df508(*puVar2,0x1e);
    } while (iVar1 == 5);
    if (iVar1 == 2) {
      puVar2[1] = puVar2[1] + 1;
      return 2;
    }
  }
  else {
    puVar2[1] = puVar2[1] + 1;
    iVar1 = 2;
  }
  return iVar1;
}



void fn_00663ce4(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar1 = DAT_008ccfb8;
  puVar3 = (undefined4 *)(DAT_008ccfb8 + 0xc);
  iVar2 = *(int *)(DAT_008ccfb8 + 0x10) + -1;
  *(int *)(DAT_008ccfb8 + 0x10) = iVar2;
  if (iVar2 == 0) {
    (**(code **)(iVar1 + 0x14))(*puVar3);
    *puVar3 = 0;
  }
  DAT_008ccfbc = DAT_008ccfbc + -1;
  if (DAT_008ccfbc == 0) {
    (*DAT_008ccfc0)(DAT_008ccfb8);
    DAT_008ccfb8 = 0;
  }
  return;
}



undefined4 * fn_00663c40(undefined4 *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  piVar1 = (int *)fn_00100fc6(0xc,0);
  iVar2 = fn_00100fc6(0x2a48,0);
  piVar1[2] = iVar2;
  *piVar1 = param_1[4];
  piVar1[1] = 1;
  param_1[4] = piVar1;
  iVar2 = piVar1[2];
  param_1[6] = iVar2;
  param_1[7] = iVar2 + 0x2a48;
  param_1[8] = iVar2;
  param_1[6] = iVar2 + 0x2a48;
  *(int *)iVar2 = iVar2;
  *(undefined4 *)(param_1[8] + 4) = param_1[8];
  return param_1;
}



undefined1 * fn_00663a04(int param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  ushort *puVar11;
  ushort local_3fe8 [16];
  undefined1 auStack_3fc8 [5392];
  undefined1 auStack_2ab8 [5424];
  undefined1 auStack_1588 [5472];
  
  uVar1 = 0;
  uVar4 = 0xc6;
  do {
    uVar2 = (int)uVar1 >> 2;
    if (uVar2 == 0) {
      uVar5 = (ushort)(byte)(&DAT_007c8a42)[uVar1 & 3];
    }
    else if (uVar1 - 4 < 4) {
      uVar5 = (ushort)(byte)(&UNK_007c8a3e)[uVar1 & 3];
    }
    else if (uVar2 == 2) {
      uVar5 = (ushort)(byte)(&UNK_007c8a46)[uVar1 & 3];
    }
    else {
      uVar5 = (ushort)(byte)(&UNK_007c8a4a)[uVar1 & 3];
    }
    uVar7 = uVar2;
    if (uVar2 == 0) {
      uVar7 = uVar1 & 3;
    }
    if (uVar2 == 0) {
      uVar6 = (ushort)(byte)(&DAT_007c8a42)[uVar7];
    }
    else if (uVar1 - 4 < 4) {
      uVar6 = (ushort)(byte)(&UNK_007c8a3e)[uVar1 & 3];
    }
    else if (uVar2 == 2) {
      uVar6 = (ushort)(byte)(&UNK_007c8a46)[uVar1 & 3];
    }
    else {
      uVar6 = (ushort)(byte)(&UNK_007c8a4a)[uVar1 & 3];
    }
    puVar11 = local_3fe8 + uVar1;
    uVar1 = uVar1 + 1;
    *puVar11 = uVar6 ^ uVar4;
    uVar4 = uVar5 + uVar4 & 0xff;
  } while ((int)uVar1 < 0x10);
  fn_00527488(auStack_1588,param_2,0x1510);
  local_3fe8[0] = 0;
  local_3fe8[1] = 0;
  local_3fe8[2] = 0;
  local_3fe8[3] = 0;
  local_3fe8[4] = 0;
  local_3fe8[5] = 0;
  local_3fe8[6] = 0;
  local_3fe8[7] = 0;
  local_3fe8[8] = 0;
  local_3fe8[9] = 0;
  local_3fe8[10] = 0;
  local_3fe8[0xb] = 0;
  local_3fe8[0xc] = 0;
  local_3fe8[0xd] = 0;
  local_3fe8[0xe] = 0;
  local_3fe8[0xf] = 0;
  piVar8 = (int *)(param_1 + 0x10);
  fn_0017821c(auStack_3fc8,param_2,0x1510);
  fn_00301a9c(auStack_2ab8,auStack_1588,0x1530);
  piVar9 = *(int **)(param_1 + 0x14);
  iVar10 = *(int *)(param_1 + 0x20);
  if (piVar9 == (int *)0x0) {
    piVar9 = *(int **)(param_1 + 0x18);
    if (piVar9 == *(int **)(param_1 + 0x1c)) {
      if (*piVar8 == 0) {
        uVar1 = 0x20;
      }
      else {
        uVar2 = *(uint *)(*piVar8 + 4);
        uVar1 = uVar2 + (uVar2 >> 1) + (uVar2 >> 3);
        if (uVar1 < uVar2 + 0x20) {
          uVar1 = uVar2 + 0x20;
        }
      }
      piVar9 = (int *)fn_00100fc6(0xc,0);
      iVar3 = fn_00100fc6(uVar1 * 0x2a48,0);
      piVar9[2] = iVar3;
      *piVar9 = *piVar8;
      piVar9[1] = uVar1;
      *piVar8 = (int)piVar9;
      piVar9 = (int *)piVar9[2];
      *(int **)(param_1 + 0x18) = piVar9;
      *(int **)(param_1 + 0x1c) = piVar9 + uVar1 * 0xa92;
    }
    *(int **)(param_1 + 0x18) = piVar9 + 0xa92;
  }
  else {
    *(int *)(param_1 + 0x14) = *piVar9;
  }
  if (piVar9 + 2 != (int *)0x0) {
    fn_0017821c(piVar9 + 2,auStack_3fc8,0x1510);
    fn_0017821c(piVar9 + 0x546,auStack_2ab8,0x1530);
  }
  *piVar9 = iVar10;
  piVar9[1] = *(int *)(iVar10 + 4);
  **(undefined4 **)(iVar10 + 4) = piVar9;
  *(int **)(iVar10 + 4) = piVar9;
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  return auStack_3fc8;
}



undefined4 fn_006638f8(undefined4 param_1,int *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = fn_005df4ec(*(undefined4 *)**(undefined4 **)(DAT_008ccfb8 + 0x18),param_3 != 0);
  iVar3 = param_2[1];
  iVar4 = *param_2;
  iVar2 = iVar4;
  if (iVar4 != iVar3) {
    do {
      iVar2 = iVar2 + 0x1528;
    } while (iVar2 != iVar3);
    param_2[1] = param_2[1] + ((iVar3 - iVar4) / 0x1528) * -0x1528;
  }
  return uVar1;
}



int fn_00663868(undefined4 param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  bool bVar4;
  
  iVar3 = *param_2 + param_3 * 0x1528;
  puVar2 = &DAT_00001500 + iVar3;
  bVar4 = *(char *)(iVar3 + 0x1524) != '\0';
  if (bVar4) {
    puVar2 = (undefined1 *)(uint)*(byte *)(iVar3 + 0x1525);
  }
  if (!bVar4 || puVar2 == (undefined1 *)0x0) {
    *(undefined1 *)(iVar3 + 0x1524) = 0;
    *(undefined1 *)(iVar3 + 0x1525) = 0;
    return 2;
  }
  iVar1 = fn_005df474(*(undefined4 *)**(undefined4 **)(DAT_008ccfb8 + 0x18),param_4 != 0,
                       iVar3 + 0x151c);
  if (iVar1 == 2) {
    *(undefined1 *)(iVar3 + 0x1524) = 0;
    *(undefined1 *)(iVar3 + 0x1525) = 0;
  }
  return iVar1;
}



int fn_006636c8(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  uint local_38;
  int iStack_30;
  int local_2c;
  int iStack_28;
  
  local_3c = *(undefined4 *)**(undefined4 **)(DAT_008ccfb8 + 0x18);
  local_38 = (uint)(param_3 != 0);
  iStack_30 = param_1;
  local_2c = param_2;
  iStack_28 = param_3;
  if (*(int *)(param_1 + 4) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = fn_00145ac0();
  }
  uVar1 = fn_0022f584((char *)&DAT_00662acc,0);
  piVar4 = *(int **)(local_2c + 0x10);
  piVar3 = (int *)*piVar4;
  if (piVar3 != piVar4) {
    do {
      iVar2 = fn_006f5d18(piVar3 + 2);
      if (iVar2 != 0) {
        uStack_50 = 1;
        uStack_40 = 0x80;
        uStack_48 = 0xc80;
        local_4c = uVar6;
        local_44 = uVar1;
        fn_005df3dc(local_3c,0,0,3,3,0xff);
        fn_005df490(local_3c,0,piVar3 + 0x546,0x1530);
        fn_00453ab4(&uStack_50);
        do {
          iVar2 = fn_005df2e8(local_3c,0,local_38,0,&uStack_50);
        } while (iVar2 == 5);
        if (iVar2 != 2) {
          return iVar2;
        }
      }
      piVar3 = (int *)*piVar3;
    } while (piVar3 != piVar4);
  }
  fn_005df5ec(local_3c);
  piVar4 = *(int **)(local_2c + 0x10);
  piVar3 = (int *)*piVar4;
  while (piVar3 != piVar4) {
    piVar5 = *(int **)(local_2c + 0x10);
    if (piVar3 != *(int **)(local_2c + 0x10)) {
      piVar5 = (int *)*piVar3;
      *(int **)piVar3[1] = piVar5;
      *(int *)(*piVar3 + 4) = piVar3[1];
      *(int *)(local_2c + 0x14) = *(int *)(local_2c + 0x14) + -1;
      *piVar3 = *(int *)(local_2c + 4);
      *(int **)(local_2c + 4) = piVar3;
    }
    piVar3 = piVar5;
  }
  return 2;
}


