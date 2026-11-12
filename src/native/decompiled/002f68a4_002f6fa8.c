#include "002f68a4_002f6fa8.h"



undefined4 fn_002f6fa8(void)

{
  return *(undefined4 *)(DAT_008977ec + 0x28);
}



undefined4 fn_002f6f54(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 8))();
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_0089711c) goto LAB_002f6f9c;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_002f6f9c:
  return puVar1[0xb];
}



undefined4 fn_002f6f40(void)

{
  return *(undefined4 *)(DAT_00897804 + 8);
}



void fn_002f6e7c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  
  puVar1 = (undefined4 *)fn_001f74f8(*(undefined4 *)(DAT_008977ec + 0x24),0x95);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00894c6c) goto LAB_002f6edc;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_002f6edc:
  puVar1[2] = param_2;
  fn_002f5c0c();
  uVar3 = fn_002f8364(param_1);
  fn_001f748c(uVar3,0x98,param_3,param_4);
  iVar4 = fn_0028eac0(uVar3,0x3c);
  if (iVar4 == 0) {
    fn_001f7438(uVar3,0x3c,param_3,param_4);
    return;
  }
  return;
}



void fn_002f6e1c(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  uVar1 = fn_002f8364();
  puVar2 = (undefined4 *)fn_001f74e4(uVar1,0xee);
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar3 == &DAT_00894d28) goto LAB_002f6e68;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_002f6e68:
  fn_0042f204(puVar2,0);
  return;
}



void fn_002f6e0c(void)

{
  int iVar1;
  undefined1 auStack_18 [12];
  
  iVar1 = DAT_008977ec;
  if (*(char *)(DAT_008977ec + 0x38) == '\0') {
    fn_0017821c(*(undefined4 *)(DAT_008977ec + 0x30),
                 *(undefined4 *)(*(int *)(DAT_00897804 + 0xc) + 4),0x1db7c);
    fn_00112f6c(auStack_18,*(undefined4 *)(iVar1 + 0x30));
    fn_0028acf4();
    fn_0017821c(*(undefined4 *)(iVar1 + 0x34),*(undefined4 *)(*(int *)(DAT_00897804 + 0x18) + 4),
                 0xc88);
  }
  return;
}



int fn_002f6de0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 1;
  do {
    iVar1 = fn_002f6298(iVar2);
    iVar2 = iVar2 + 1;
    iVar3 = iVar3 + iVar1;
  } while (iVar2 < 4);
  return iVar3;
}



undefined4 fn_002f6dcc(void)

{
  return *(undefined4 *)(DAT_00897804 + 0x18);
}



void fn_002f6dbc(void)

{
  int iVar1;
  
  iVar1 = DAT_008977ec;
  *(undefined1 *)(DAT_008977ec + 0x3a) = 2;
  *(undefined1 *)(iVar1 + 0x39) = 0;
  return;
}



void fn_002f6c2c(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  uVar1 = fn_002f8364();
  puVar2 = (undefined4 *)fn_001f74f8(uVar1,0xe1);
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar3 == &DAT_00896fe0) goto LAB_002f6c7c;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_002f6c7c:
  puVar2[5] = param_2;
  return;
}



bool fn_002f6b80(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  uVar6 = *(undefined4 *)(DAT_008977ec + 0x28);
  uVar1 = fn_002f8914();
  piVar2 = (int *)fn_006cd638(uVar6,uVar1);
  iVar3 = *piVar2;
  if (iVar3 != 0) {
    uVar6 = *(undefined4 *)(DAT_008977ec + 0x28);
    uVar1 = fn_002f8914();
    iVar4 = fn_006cd638(uVar6,uVar1);
    uVar1 = fn_002f8914();
    iVar5 = fn_0041fe24(uVar6,uVar1);
    fn_002f5624(piVar2,10,*(int *)(iVar5 + 8) - *(int *)(iVar4 + 8));
    fn_003ca348(*(undefined4 *)(DAT_008977ec + 0x24),0xf5,param_1,param_2,0);
  }
  return iVar3 != 0;
}



bool fn_002f6b58(void)

{
  uint uVar1;
  
  uVar1 = fn_006b6238(*(undefined4 *)(DAT_00897804 + 8));
  return uVar1 < 0xf1;
}



int fn_002f6980(undefined4 param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  ushort *puVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint in_fpscr;
  float fVar15;
  float fVar16;
  
  iVar2 = fn_003e93d0(DAT_008977ec,param_1);
  if (*(char *)(iVar2 + 8) == '\x01') {
    uVar10 = *(undefined4 *)(DAT_008977ec + 0x28);
    iVar2 = fn_002f8914();
    iVar3 = fn_006cd9a4(uVar10);
    iVar4 = fn_006cd58c(uVar10,iVar2);
    iVar5 = fn_006c3ab0(*(undefined4 *)(DAT_00897804 + 0x3c),iVar2);
    iVar13 = 0;
    iVar12 = 0;
    uVar11 = 0;
    do {
      iVar14 = iVar5 + uVar11 * 0xf0;
      iVar6 = fn_001a46f4((int)*(short *)(iVar14 + 0x1c));
      if (iVar6 != 0) {
        iVar12 = iVar12 + 1;
        iVar13 = iVar13 + (uint)*(ushort *)(iVar4 + *(short *)(iVar14 + 0x1c) * 2);
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < 4);
    fVar16 = (float)VectorSignedToFloat(iVar13,(byte)(in_fpscr >> 0x16) & 3);
    fVar15 = (float)VectorSignedToFloat(iVar12,(byte)(in_fpscr >> 0x16) & 3);
    fVar16 = fVar16 / fVar15;
    fn_006f9f20();
    uVar11 = 0;
    iVar4 = 0;
    iVar3 = iVar3 + iVar2 * 0x2c;
    do {
      puVar9 = (ushort *)(iVar3 + iVar4 * 4);
      if (puVar9[1] == 0) break;
      if ((int)fVar16 <= (int)(uint)*puVar9) {
        uVar11 = (uint)*(ushort *)(iVar3 + iVar4 * 4 + 2);
        break;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0xb);
    iVar3 = *(int *)(DAT_008977ec + 0x28);
    iVar2 = fn_006cd660(iVar3);
    fVar16 = (float)VectorSignedToFloat(uVar11,(byte)(in_fpscr >> 0x16) & 3);
    fVar16 = *(float *)(iVar2 + *(int *)(iVar3 + 0xc) * 4) * fVar16;
    puVar7 = (undefined4 *)fn_001f74f8(*(undefined4 *)(DAT_008977ec + 0x24),0xe1);
    if (puVar7 != (undefined4 *)0x0) {
      puVar8 = (undefined4 *)(**(code **)*puVar7)(puVar7);
      do {
        if (puVar8 == &DAT_00896fe0) goto LAB_002f6b1c;
        puVar8 = (undefined4 *)*puVar8;
      } while (puVar8 != (undefined4 *)0x0);
    }
    puVar7 = (undefined4 *)0x0;
LAB_002f6b1c:
    bVar1 = *(byte *)((int)puVar7 + 0x11);
    iVar2 = fn_006cd660(*(undefined4 *)(DAT_008977ec + 0x28));
    iVar2 = (int)(fVar16 * *(float *)(iVar2 + (uint)bVar1 * 4 + 0x1c));
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}



void fn_002f6968(undefined4 param_1)

{
  fn_006cba08(*(undefined4 *)(DAT_008977ec + 0x2c),param_1);
  return;
}



void fn_002f68fc(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 1;
  do {
    iVar1 = fn_003e93d0(DAT_008977ec,iVar2);
    if (*(char *)(iVar1 + 8) == '\x01') {
      if (param_1 != (int *)0x0) {
        *param_1 = *param_1 + 1;
      }
    }
    else if (param_2 != (int *)0x0) {
      *param_2 = *param_2 + 1;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  return;
}



undefined4 fn_002f68a4(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  uVar1 = fn_002f8364();
  puVar2 = (undefined4 *)fn_001f74f8(uVar1,0xe1);
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar3 == &DAT_00896fe0) goto LAB_002f68f0;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_002f68f0:
  return puVar2[5];
}


