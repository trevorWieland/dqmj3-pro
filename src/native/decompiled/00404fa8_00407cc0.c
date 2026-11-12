#include "00404fa8_00407cc0.h"



void fn_00407cc0(int *param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar2 = fn_006ba6b0(param_1[0x22],1);
  if (iVar2 == 0) {
    iVar2 = fn_006ba680(param_1[0x22],1);
    if (iVar2 != 0) {
      uVar3 = fn_006ba4ec(param_1[0x21]);
      fn_00408d04(param_1,uVar3,0);
      *(char *)(param_1 + 0x2c) = (char)param_1[0x29];
      *(undefined1 *)((int)param_1 + 0xa6) = 4;
      return;
    }
    iVar2 = fn_006ba4bc(param_1[0x22],1);
    if (iVar2 != 0) {
      uVar3 = fn_006c151c(param_1[0x22]);
      uVar4 = fn_00231d50();
      uVar3 = fn_0022f244(uVar3);
      fn_00321118(param_1[0x16],uVar4,uVar3);
      fn_00689bd0(param_1,0x49,0);
      return;
    }
  }
  else {
    fn_0033b3ec();
    iVar2 = fn_006ba4ec(param_1[0x1f]);
    if (iVar2 < 2) {
      uVar3 = fn_006ba4ec();
    }
    else {
      uVar3 = 0;
    }
    uVar1 = fn_006c151c(param_1[0x22]);
    (**(code **)(*param_1 + 0x108))(param_1,uVar3,0,uVar1);
    *(char *)(param_1 + 0x2c) = (char)param_1[0x29];
    *(undefined1 *)((int)param_1 + 0xa6) = 3;
  }
  return;
}



void fn_00407b5c(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = fn_006ba6b0(param_1[0x22],1);
  if (iVar1 == 0) {
    iVar1 = fn_006ba680(param_1[0x22],1);
    if (iVar1 != 0) {
      uVar2 = fn_006ba4ec(param_1[0x21]);
      fn_00408d04(param_1,uVar2,0);
      *(char *)(param_1 + 0x2c) = (char)param_1[0x29];
      *(undefined1 *)((int)param_1 + 0xa6) = 4;
      return;
    }
    iVar1 = fn_006ba4bc(param_1[0x22],1);
    if (iVar1 != 0) {
      uVar2 = fn_006c14c4(param_1[0x22]);
      uVar3 = fn_0016a7c4();
      uVar2 = fn_0022ee10(uVar2);
      fn_00321118(param_1[0x16],uVar3,uVar2);
      fn_00689bd0(param_1,0x49,0);
      return;
    }
  }
  else {
    fn_0033b3ec();
    iVar1 = fn_006ba4ec(param_1[0x1f]);
    if (iVar1 < 2) {
      uVar2 = fn_006ba4ec();
    }
    else {
      uVar2 = 0;
    }
    uVar3 = fn_006c14c4(param_1[0x22]);
    (**(code **)(*param_1 + 0x108))(param_1,uVar2,uVar3,0);
    *(char *)(param_1 + 0x2c) = (char)param_1[0x29];
    *(undefined1 *)((int)param_1 + 0xa6) = 3;
  }
  return;
}



void fn_004071e8(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  
  iVar3 = fn_006ba6b0(*(undefined4 *)(param_1 + 0x84),1);
  if (iVar3 == 0) {
    iVar3 = fn_006ba680(*(undefined4 *)(param_1 + 0x84),1);
    if (iVar3 == 0) {
      return;
    }
    fn_0031e0f4(*(undefined4 *)(param_1 + 0x7c),1);
    (**(code **)(**(int **)(param_1 + 0x7c) + 8))();
    *(undefined1 *)(param_1 + 0xb0) = *(undefined1 *)(param_1 + 0xa4);
    *(undefined1 *)(param_1 + 0xa6) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 0xb0) = *(undefined1 *)(param_1 + 0xa4);
  *(undefined1 *)(param_1 + 0xa6) = 0;
  fn_002d8038(*(undefined4 *)(param_1 + 0x84));
  iVar3 = fn_006ba4ec(*(undefined4 *)(param_1 + 0x84));
  if (iVar3 == 3) {
    fn_0033bc38(*(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0xb4),1);
    *(undefined1 *)(param_1 + 0xb0) = *(undefined1 *)(param_1 + 0xa4);
    *(undefined1 *)(param_1 + 0xa6) = 5;
    fn_002a3bb0(*(undefined4 *)(param_1 + 0x8c),3);
    return;
  }
  if (iVar3 == 2) {
    fn_0033bf68(*(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0xb4),1);
    *(undefined1 *)(param_1 + 0xb0) = *(undefined1 *)(param_1 + 0xa4);
    *(undefined1 *)(param_1 + 0xa6) = 6;
    fn_002a3bb0(*(undefined4 *)(param_1 + 0x8c),3);
    return;
  }
  if (iVar3 == 0) {
    *(undefined1 *)(*(int *)(param_1 + 0x6c) + 0x14) = 3;
    *(undefined4 *)(*(int *)(param_1 + 0x6c) + 0xc) =
         **(undefined4 **)(*(int *)(param_1 + 0xb4) + 4);
    *(undefined4 *)(*(int *)(param_1 + 0x6c) + 0x10) =
         *(undefined4 *)(*(int *)(*(int *)(param_1 + 0xb4) + 4) + 4);
    iVar6 = *(int *)(param_1 + 0x6c);
    iVar3 = fn_006ba4ec(*(undefined4 *)(param_1 + 0x7c));
    if (iVar3 < 2) {
      uVar5 = fn_006ba4ec();
    }
    else {
      uVar5 = 0;
    }
    *(undefined4 *)(iVar6 + 0x18) = uVar5;
    iVar3 = *(int *)(param_1 + 0x6c);
    uVar5 = fn_006ba4ec(*(undefined4 *)(param_1 + 0x7c));
    *(undefined4 *)(iVar3 + 0x30) = uVar5;
    puVar1 = (undefined4 *)fn_001f74ec(param_1,0x5a);
    if (puVar1 != (undefined4 *)0x0) {
      puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
      do {
        if (puVar2 == &DAT_00891c90) goto LAB_00406fd4;
        puVar2 = (undefined4 *)*puVar2;
      } while (puVar2 != (undefined4 *)0x0);
    }
    puVar1 = (undefined4 *)0x0;
LAB_00406fd4:
    puVar1[2] = *(undefined4 *)(param_1 + 0x94);
    iVar6 = *(int *)(param_1 + 0xb4);
    iVar3 = fn_006ba4ec(*(undefined4 *)(param_1 + 0x7c));
    if (iVar3 < 2) {
      iVar3 = fn_006ba4ec();
    }
    else {
      iVar3 = 0;
    }
    puVar1[3] = *(undefined4 *)(*(int *)(iVar6 + 4) + iVar3 * 4);
    fn_006899f4(param_1,0x5a,1);
    return;
  }
  if (iVar3 != 1) {
    return;
  }
  uVar7 = *(undefined4 *)(param_1 + 0x7c);
  iVar3 = fn_006ba4ec(uVar7);
  uVar5 = 0;
  if (iVar3 < 2) {
    uVar4 = fn_006ba4ec(uVar7);
    if (1 < uVar4) goto LAB_00407284;
  }
  else {
    uVar4 = 0;
  }
  uVar5 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0xb4) + 4) + uVar4 * 4);
LAB_00407284:
  iVar3 = fn_0033aa68(*(undefined4 *)(param_1 + 0x88),uVar5,0,0);
  if (iVar3 == 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0xb0) = *(undefined1 *)(param_1 + 0xa4);
  *(undefined1 *)(param_1 + 0xa6) = 8;
  fn_002a3bb0(*(undefined4 *)(param_1 + 0x8c),3);
  return;
}



undefined1 * fn_00406d9c(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined1 *puVar4;
  undefined1 auStack_28 [12];
  
  if (*(int *)(param_1 + 0x9c) != param_3) {
    fn_00689efc(param_1,param_3,0);
    *(int *)(param_1 + 0x9c) = param_3;
  }
  puVar1 = (undefined4 *)fn_001f74d8(param_1,param_3);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_008951dc) goto LAB_00406e18;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_00406e18:
  fn_002a3c70(puVar1,param_2,param_3,0);
  piVar3 = *(int **)(param_1 + 0x90);
  puVar4 = (undefined1 *)0x0;
  if (piVar3 != (int *)0x0) {
    if (param_2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00406e94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar4 = (undefined1 *)(**(code **)(*piVar3 + 0x20))(piVar3,0);
      return puVar4;
    }
    fn_0020bbc4(auStack_28,param_2);
    (**(code **)(**(int **)(param_1 + 0x90) + 0x20))(*(int **)(param_1 + 0x90),1);
    fn_002b3c24(*(undefined4 *)(param_1 + 0x90),param_2);
    puVar4 = auStack_28;
  }
  return puVar4;
}



void fn_00405874(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0x3f800000;
  return;
}



void fn_00404fa8(int param_1,int param_2,int param_3,int param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = 0;
  if (param_2 + param_3 + (uint)(param_4 != 0) == 2) {
    iVar4 = 3;
  }
  if (param_2 != 0) {
    uVar2 = fn_001827b0(*(undefined4 *)(param_1 + 100),(&DAT_007bb6f8)[iVar4]);
    uVar3 = fn_002301b4((char *)&DAT_0040511c);
    fn_00190d50(uVar2,uVar3);
    uVar2 = fn_001827b0(*(undefined4 *)(param_1 + 100),(&DAT_007bb70c)[iVar4]);
    fn_0015b0f8(2);
    uVar3 = fn_002301b4(&LAB_004051d4);
    fn_00190d50(uVar2,uVar3);
    iVar4 = iVar4 + 1;
  }
  if (param_3 != 0) {
    uVar2 = fn_001827b0(*(undefined4 *)(param_1 + 100),(&DAT_007bb6f8)[iVar4]);
    uVar3 = fn_002301b4((char *)&DAT_0040512c);
    fn_00190d50(uVar2,uVar3);
    uVar2 = fn_001827b0(*(undefined4 *)(param_1 + 100),(&DAT_007bb70c)[iVar4]);
    fn_0015b0f8(2);
    uVar3 = fn_002301b4(&LAB_004051d4);
    fn_00190d50(uVar2,uVar3);
    iVar4 = iVar4 + 1;
  }
  if (param_4 == 0) {
    return;
  }
  uVar1 = (&DAT_007bb65c)[param_4];
  uVar2 = fn_001827b0(*(undefined4 *)(param_1 + 100),(&DAT_007bb6f8)[iVar4]);
  uVar3 = fn_002301b4((char *)&DAT_0040513c);
  fn_00190d50(uVar2,uVar3);
  uVar2 = fn_001827b0(*(undefined4 *)(param_1 + 100),(&DAT_007bb70c)[iVar4]);
  fn_0015b0f8(uVar1);
  uVar3 = fn_002301b4(&LAB_004051d4);
  fn_00190d50(uVar2,uVar3);
  return;
}


