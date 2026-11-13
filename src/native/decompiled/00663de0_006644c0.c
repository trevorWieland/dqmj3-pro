#include "00663de0_006644c0.h"



void fn_006644c0(void)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xb4,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00664500();
  return;
}



void fn_00664464(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar1 = DAT_008ccfb8;
  puVar3 = (undefined4 *)(DAT_008ccfb8 + 0x18);
  iVar2 = *(int *)(DAT_008ccfb8 + 0x1c) + -1;
  *(int *)(DAT_008ccfb8 + 0x1c) = iVar2;
  if (iVar2 == 0) {
    (**(code **)(iVar1 + 0x20))(*puVar3);
    *puVar3 = 0;
  }
  DAT_008ccfbc = DAT_008ccfbc + -1;
  if (DAT_008ccfbc == 0) {
    (*DAT_008ccfc0)(DAT_008ccfb8);
    DAT_008ccfb8 = 0;
  }
  return;
}



int * fn_0066430c(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  
  piVar1 = (int *)fn_00145b00(4,&DAT_00812c8c);
  if (piVar1 != (int *)0x0) {
    puVar2 = (undefined4 *)fn_00145b00(8,&DAT_00812c8c);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      iVar3 = fn_00145b00(0x8d0,&DAT_00812c8c);
      uVar4 = 0;
      if (iVar3 != 0) {
        uVar4 = fn_00118290();
        uVar4 = fn_005df764(iVar3,uVar4);
      }
      *puVar2 = uVar4;
      puVar2[1] = 0;
      fn_005df130(uVar4,0x1acb,1);
    }
    *piVar1 = (int)puVar2;
  }
  return piVar1;
}



void fn_006642e8(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)**(int **)(DAT_008ccfb8 + 0x18);
  piVar2[1] = 0;
  iVar3 = *piVar2;
  iVar1 = fn_006cfe7c(iVar3 + 8);
  if (iVar1 != 0) {
    iVar1 = fn_00451c18(iVar3 + 8);
    if (iVar1 < 0) {
      fn_00146594();
      return;
    }
  }
  return;
}



void fn_00664210(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)**(undefined4 **)(DAT_008ccfb8 + 0x18);
  uVar1 = 0;
  if (*param_1 != 0) {
    uVar1 = fn_00145ac0();
  }
  uVar2 = fn_0022f584((char *)&DAT_00662aa4,0);
  do {
    iVar3 = fn_005df620(*puVar4,0x1e,(char *)&DAT_007c8a58,uVar1,0x1200,uVar2,0x80,
                         0x80000,0x80000,8,1,0x1910);
  } while (iVar3 == 5);
  if (iVar3 == 2) {
    puVar4[1] = puVar4[1] + 1;
  }
  return;
}



undefined1 * fn_006640c0(int *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  uint local_1598;
  int iStack_1594;
  uint local_1590;
  int iStack_158c;
  undefined1 auStack_1588 [5472];
  
  iVar4 = 0;
  puVar2 = (undefined1 *)((param_1[1] - *param_1) / 0x1528);
  puVar5 = puVar2 + -1;
  if (0 < (int)puVar5) {
    puVar1 = puVar5;
    do {
      for (; iVar4 < (int)puVar1; puVar1 = puVar1 + -1) {
        iVar6 = *param_1 + (int)(puVar1 + -1) * 0x1528;
        iVar3 = *param_1 + (int)puVar1 * 0x1528;
        fn_001142a8(&local_1598,*(undefined4 *)(iVar6 + 0x1510),(int)*(char *)(iVar6 + 0x1514),
                     (int)*(char *)(iVar6 + 0x1515),(int)*(char *)(iVar6 + 0x1517),
                     (int)*(char *)(iVar6 + 0x1518),(int)*(char *)(iVar6 + 0x1519),
                     (int)*(short *)(iVar6 + 0x151a));
        fn_001142a8(&local_1590,*(undefined4 *)(iVar3 + 0x1510),(int)*(char *)(iVar3 + 0x1514),
                     (int)*(char *)(iVar3 + 0x1515),(int)*(char *)(iVar3 + 0x1517),
                     (int)*(char *)(iVar3 + 0x1518),(int)*(char *)(iVar3 + 0x1519),
                     (int)*(short *)(iVar3 + 0x151a));
        puVar2 = (undefined1 *)(iStack_158c - (iStack_1594 + (uint)(local_1590 < local_1598)));
        if ((int)puVar2 < 0 !=
            (SBORROW4(iStack_158c,iStack_1594) !=
            SBORROW4(iStack_158c - iStack_1594,(uint)(local_1590 < local_1598)))) {
          fn_0017821c(auStack_1588,iVar6,0x1528);
          fn_0017821c(iVar6,iVar3,0x1526);
          fn_0017821c(iVar3,auStack_1588,0x1526);
          puVar2 = auStack_1588;
        }
      }
      iVar4 = iVar4 + 1;
      puVar1 = puVar5;
    } while (iVar4 < (int)puVar5);
  }
  return puVar2;
}



undefined4 * fn_0066401c(undefined4 *param_1,undefined4 param_2)

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



undefined1 * fn_00663de0(int param_1,undefined4 param_2)

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


