#include "00306580_00307344.h"



void fn_00307344(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = 0;
  do {
    iVar1 = fn_00145b00(0xd4,&DAT_00812c8c);
    if (iVar1 == 0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = (int *)(**(code **)(**(int **)(param_1 + 8) + 0x2c))
                                (*(int **)(param_1 + 8),(&PTR_s_MonIcon_00_00893734)[iVar3],1);
      if (piVar4 != (int *)0x0) {
        puVar2 = (undefined4 *)(**(code **)(*piVar4 + 8))(piVar4);
        do {
          if (puVar2 == &DAT_0089a928) goto LAB_003073d8;
          puVar2 = (undefined4 *)*puVar2;
        } while (puVar2 != (undefined4 *)0x0);
      }
      piVar4 = (int *)0x0;
LAB_003073d8:
      piVar4 = (int *)fn_002b44c0(iVar1,*(undefined4 *)(param_1 + 4),piVar4,1,
                                   *(undefined4 *)(param_1 + 0x10));
    }
    (**(code **)(*piVar4 + 0x10))(piVar4);
    *(int **)(*(int *)(param_1 + 0x1c) + iVar3 * 4) = piVar4;
    fn_0030749c(param_1,*(undefined4 *)(**(int **)(param_1 + 0x18) + iVar3 * 4),piVar4);
    piVar4 = (int *)(**(code **)(**(int **)(param_1 + 8) + 0x2c))
                              (*(int **)(param_1 + 8),(&PTR_s_Window_00_00893744)[iVar3],1);
    if (piVar4 != (int *)0x0) {
      puVar2 = (undefined4 *)(**(code **)(*piVar4 + 8))(piVar4);
      do {
        if (puVar2 == &DAT_0089a934) goto LAB_00307470;
        puVar2 = (undefined4 *)*puVar2;
      } while (puVar2 != (undefined4 *)0x0);
    }
    piVar4 = (int *)0x0;
LAB_00307470:
    *(int **)(*(int *)(param_1 + 0x28) + iVar3 * 4) = piVar4;
    iVar3 = iVar3 + 1;
    if (3 < iVar3) {
      return;
    }
  } while( true );
}



undefined4 *
fn_00306f08(undefined4 param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  
  puVar1 = (undefined4 *)fn_0069e7cc(param_1,param_2,param_3,param_4,param_5);
  *puVar1 = &DAT_00821a48;
  piVar4 = (int *)0x0;
  puVar1[5] = *(undefined4 *)(param_2 + 8);
  puVar1[6] = 0xffffffff;
  puVar1[7] = 0xffffffff;
  puVar1[8] = 0xffffffff;
  puVar1[9] = 0xffffffff;
  puVar1[10] = &DAT_008f9d04;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  *(undefined2 *)(puVar1 + 0x12) = 0;
  *(undefined2 *)((int)puVar1 + 0x4a) = 0;
  *(undefined2 *)(puVar1 + 0x13) = 0;
  *(undefined2 *)((int)puVar1 + 0x4e) = 0;
  *(undefined2 *)(puVar1 + 0x14) = 0;
  *(undefined2 *)((int)puVar1 + 0x52) = 0;
  *(undefined2 *)(puVar1 + 0x15) = 0;
  *(undefined2 *)((int)puVar1 + 0x56) = 0;
  *(undefined1 *)(puVar1 + 0x16) = 1;
  *(undefined1 *)((int)puVar1 + 0x59) = 1;
  *(undefined1 *)((int)puVar1 + 0x5a) = 0;
  *(undefined1 *)((int)puVar1 + 0x5b) = 0;
  *(undefined1 *)(puVar1 + 0x17) = 0;
  *(undefined1 *)((int)puVar1 + 0x5d) = 0;
  *(undefined1 *)((int)puVar1 + 0x5e) = 0;
  *(undefined1 *)((int)puVar1 + 0x5f) = 0;
  piVar5 = *(int **)(*(int *)(param_3 + 0xac) + 0x10);
  piVar2 = (int *)(**(code **)(*piVar5 + 0x2c))(piVar5,(char *)&DAT_00307220,1);
  if (piVar2 != (int *)0x0) {
    puVar3 = (undefined4 *)(**(code **)(*piVar2 + 8))(piVar2);
    do {
      if (puVar3 == &DAT_0089a930) goto LAB_00307018;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  piVar2 = (int *)0x0;
LAB_00307018:
  puVar1[0xb] = piVar2;
  piVar2 = (int *)(**(code **)(*piVar5 + 0x2c))(piVar5,(char *)&DAT_00307234,1);
  if (piVar2 != (int *)0x0) {
    puVar3 = (undefined4 *)(**(code **)(*piVar2 + 8))(piVar2);
    do {
      if (puVar3 == &DAT_0089a930) goto LAB_00307068;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  piVar2 = (int *)0x0;
LAB_00307068:
  puVar1[0xc] = piVar2;
  piVar2 = (int *)(**(code **)(*piVar5 + 0x2c))(piVar5,(char *)&DAT_00307244,1);
  if (piVar2 != (int *)0x0) {
    puVar3 = (undefined4 *)(**(code **)(*piVar2 + 8))(piVar2);
    do {
      if (puVar3 == &DAT_0089a930) goto LAB_003070b8;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  piVar2 = (int *)0x0;
LAB_003070b8:
  puVar1[0xd] = piVar2;
  piVar2 = (int *)(**(code **)(*piVar5 + 0x2c))(piVar5,(char *)&DAT_00307258,1);
  if (piVar2 != (int *)0x0) {
    puVar3 = (undefined4 *)(**(code **)(*piVar2 + 8))(piVar2);
    do {
      if (puVar3 == &DAT_0089a930) goto LAB_00307108;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  piVar2 = (int *)0x0;
LAB_00307108:
  puVar1[0xe] = piVar2;
  piVar2 = (int *)(**(code **)(*piVar5 + 0x2c))(piVar5,(char *)&DAT_00307268,1);
  if (piVar2 != (int *)0x0) {
    puVar3 = (undefined4 *)(**(code **)(*piVar2 + 8))(piVar2);
    do {
      if (puVar3 == &DAT_0089a930) goto LAB_00307158;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  piVar2 = (int *)0x0;
LAB_00307158:
  puVar1[0xf] = piVar2;
  piVar2 = (int *)(**(code **)(*piVar5 + 0x2c))(piVar5,(char *)&DAT_0030727c,1);
  if (piVar2 != (int *)0x0) {
    puVar3 = (undefined4 *)(**(code **)(*piVar2 + 8))(piVar2);
    do {
      if (puVar3 == &DAT_0089a930) goto LAB_003071a8;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  piVar2 = (int *)0x0;
LAB_003071a8:
  puVar1[0x10] = piVar2;
  piVar2 = (int *)(**(code **)(*piVar5 + 0x2c))(piVar5,(char *)&DAT_00307288,1);
  if (piVar2 != (int *)0x0) {
    puVar3 = (undefined4 *)(**(code **)(*piVar2 + 8))(piVar2);
    do {
      if (puVar3 == &DAT_0089a930) {
        piVar4 = piVar2;
        break;
      }
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar1[0x11] = piVar4;
  fn_00306cd8(puVar1,param_6,param_7,param_8);
  return puVar1;
}



void fn_00306cd8(int param_1,undefined4 param_2,undefined4 param_3,undefined1 *param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  int *piVar7;
  undefined4 *puVar8;
  uint local_2c;
  uint local_28;
  
  piVar7 = (int *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x18) = param_2;
  *(undefined4 *)(param_1 + 0x1c) = param_3;
  uVar1 = fn_002febd8(param_4);
  puVar8 = &DAT_008f9cf8;
  puVar2 = (undefined1 *)*piVar7;
  if (uVar1 == 0) {
    piVar3 = (int *)(puVar2 + -0xc);
    iVar4 = *piVar3;
    if (iVar4 != 0) {
      if ((puVar2 != &DAT_008f9d04) &&
         ((iVar4 == -1 || ((piVar3 != &DAT_008f9cf8 && (*piVar3 = iVar4 + -1, iVar4 == 0)))))) {
        fn_001008c4(*piVar7 + -0xc,*(int *)(*piVar7 + -8) + 0xe,0);
      }
      *piVar7 = (int)&DAT_008f9d04;
      return;
    }
    *(undefined4 *)(puVar2 + -4) = 0;
    puVar2 = (undefined1 *)*piVar7;
  }
  else {
    if (((1 < *(int *)(puVar2 + -0xc) + 1U) || (*(uint *)(puVar2 + -8) < uVar1)) ||
       ((param_4 != (undefined1 *)0x0 &&
        ((puVar2 <= param_4 && (param_4 < puVar2 + *(int *)(puVar2 + -4))))))) {
      uVar5 = *(uint *)(puVar2 + -4);
      local_2c = uVar5 + (uVar5 >> 1) + (uVar5 >> 3);
      if (local_2c < uVar5 + 0x80) {
        local_2c = uVar5 + 0x80;
      }
      local_28 = uVar1;
      puVar6 = &local_2c;
      if (local_2c < uVar1) {
        puVar6 = &local_28;
      }
      uVar5 = *puVar6;
      if (0xfffffff1 < uVar5) {
        fn_002ff628(8,&DAT_008c7615,&DAT_008c7615,uVar5,0xfffffff1);
      }
      if (uVar5 < uVar1) {
        fn_002ff628(8,&DAT_008c7615,&DAT_008c7615,uVar1,uVar5);
      }
      if (uVar5 != 0) {
        puVar8 = (undefined4 *)fn_00100fc6(uVar5 + 0xe,0);
        if (puVar8 != (undefined4 *)0x0) {
          *puVar8 = 0;
          puVar8[1] = 0;
          puVar8[2] = 0;
        }
        puVar2 = (undefined1 *)((int)puVar8 + uVar1 + 0xc);
        *puVar8 = 0;
        puVar8[1] = uVar5;
        puVar8[2] = uVar1;
        if (puVar2 != (undefined1 *)0x0) {
          *puVar2 = 0;
        }
      }
      fn_00301a9c(puVar8 + 3,param_4,uVar1);
      if ((undefined1 *)*piVar7 != &DAT_008f9d04) {
        piVar3 = (int *)((undefined1 *)*piVar7 + -0xc);
        iVar4 = *piVar3;
        if ((iVar4 == -1) || ((piVar3 != &DAT_008f9cf8 && (*piVar3 = iVar4 + -1, iVar4 == 0)))) {
          fn_001008c4(*piVar7 + -0xc,*(int *)(*piVar7 + -8) + 0xe,0);
        }
      }
      *piVar7 = (int)(puVar8 + 3);
      return;
    }
    fn_00301b24(puVar2,param_4,uVar1);
    *(uint *)(*piVar7 + -4) = uVar1;
    puVar2 = (undefined1 *)(*piVar7 + uVar1);
  }
  *puVar2 = 0;
  return;
}



void fn_00306990(int param_1)

{
  fn_00190d50(*(undefined4 *)(param_1 + 0x2c));
  return;
}



void fn_0030690c(int param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  undefined4 uVar3;
  
  bVar2 = 0;
  uVar3 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 8) + 0xac) + 0x10);
  if ((param_2 != 0) && (param_2 == 1)) {
    bVar2 = 1;
  }
  iVar1 = fn_00689210(uVar3,(char *)&DAT_00306974);
  *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe | param_2 == 0;
  iVar1 = fn_00689210(uVar3,(char *)&DAT_00306980);
  *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe | bVar2;
  return;
}



void fn_00306858(int param_1)

{
  fn_0069e748();
  fn_0030699c(param_1,0);
  fn_00306b90(param_1,0);
  fn_00306774(param_1,0);
  if (*(short *)(param_1 + 0x48) != *(short *)(param_1 + 0x4a)) {
    *(short *)(param_1 + 0x48) = *(short *)(param_1 + 0x4a);
  }
  if (*(short *)(param_1 + 0x4c) != *(short *)(param_1 + 0x4e)) {
    *(short *)(param_1 + 0x4c) = *(short *)(param_1 + 0x4e);
  }
  if (*(short *)(param_1 + 0x50) != *(short *)(param_1 + 0x52)) {
    *(short *)(param_1 + 0x50) = *(short *)(param_1 + 0x52);
  }
  if (*(short *)(param_1 + 0x54) != *(short *)(param_1 + 0x56)) {
    *(short *)(param_1 + 0x54) = *(short *)(param_1 + 0x56);
  }
  if (*(char *)(param_1 + 0x58) != *(char *)(param_1 + 0x59)) {
    *(char *)(param_1 + 0x58) = *(char *)(param_1 + 0x59);
  }
  if (*(char *)(param_1 + 0x5a) != *(char *)(param_1 + 0x5b)) {
    *(char *)(param_1 + 0x5a) = *(char *)(param_1 + 0x5b);
  }
  if (*(char *)(param_1 + 0x5e) != *(char *)(param_1 + 0x5f)) {
    *(char *)(param_1 + 0x5e) = *(char *)(param_1 + 0x5f);
  }
  if (*(char *)(param_1 + 0x5c) != *(char *)(param_1 + 0x5d)) {
    *(char *)(param_1 + 0x5c) = *(char *)(param_1 + 0x5d);
  }
  return;
}



void fn_0030663c(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = fn_001c91a4(*(undefined4 *)(param_1 + 0x14),(char *)&DAT_003066a4,
                       *(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x28));
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  uVar1 = fn_001c91a4(*(undefined4 *)(param_1 + 0x14),(char *)&DAT_003066b4,
                       *(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x28));
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  fn_0069e710(param_1);
  fn_0030699c(param_1,1);
  fn_00306b90(param_1,1);
  fn_00306774(param_1,1);
  return;
}



void fn_00306580(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = &DAT_00821a04;
  uVar1 = param_1[7];
  uVar2 = uVar1;
  if ((uint)param_1[8] < uVar1) {
    do {
      uVar2 = uVar2 + 4;
    } while (uVar2 != param_1[8]);
  }
  fn_001008c4(uVar1,(int)(param_1[9] - uVar1) >> 2,0);
  fn_002e4458(param_1);
  fn_002feef8();
  return;
}


