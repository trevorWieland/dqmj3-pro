#include "0060e880_0060f3ac.h"



int fn_0060f3ac(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  
  puVar1 = *(undefined4 **)(param_1 + 0x98);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00898eac) goto LAB_0060f3f0;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_0060f3f0:
  if (*(char *)(puVar1 + 9) == '\0') {
    uVar4 = fn_006e6e4c(puVar1 + 10,param_2);
  }
  else {
    if (*(char *)(puVar1 + 0x10f) != '\0') {
      iVar3 = fn_006e70bc();
      if (*(short *)(iVar3 + 0x1c) == 0) {
        iVar3 = 0;
      }
      return iVar3;
    }
    uVar4 = fn_006e69c4(puVar1 + 10,param_2);
  }
  iVar3 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),uVar4);
  return iVar3;
}



void fn_0060f348(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 0x98);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00898eac) goto LAB_0060f388;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_0060f388:
  if (*(char *)(puVar1 + 9) == '\0') {
    fn_006e6ea8(puVar1 + 10);
    return;
  }
  fn_006e6e58();
  return;
}



void fn_0060f28c(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 0x98);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00898eac) goto LAB_0060f2cc;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_0060f2cc:
  if (*(char *)(puVar1 + 9) == '\0') {
    fn_006e6ebc();
    return;
  }
  if (*(char *)(puVar1 + 0x10f) == '\0') {
    fn_006e6e6c();
    return;
  }
  fn_006e70cc();
  return;
}



void fn_0060f180(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  puVar2 = *(undefined4 **)(param_1 + 0x18);
  if (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar1 == &DAT_00898ce0) goto LAB_0060f1c8;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_0060f1c8:
  fn_006899f4(param_1,puVar2[2],0);
  piVar3 = *(int **)(param_1 + 0x18);
  if (piVar3 != (int *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*piVar3)(piVar3);
    do {
      if (puVar2 == &DAT_00898ce0) goto LAB_0060f210;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  piVar3 = (int *)0x0;
LAB_0060f210:
                    /* WARNING: Could not recover jumptable at 0x0060f220. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar3 + 0xc))(piVar3);
  return;
}



void fn_0060f0b4(undefined4 param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  uVar1 = fn_006f6a5c();
  puVar4 = (undefined4 *)0x0;
  if ((uVar1 & 0x100000) == 0) {
    if ((uVar1 & 0x200000) != 0) {
      puVar2 = (undefined4 *)fn_001f74d8(param_1,0xdd);
      if (puVar2 != (undefined4 *)0x0) {
        puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
        do {
          if (puVar3 == &DAT_00898eac) {
            puVar4 = puVar2;
            break;
          }
          puVar3 = (undefined4 *)*puVar3;
        } while (puVar3 != (undefined4 *)0x0);
      }
      *(undefined1 *)(puVar4 + 6) = 2;
    }
  }
  else {
    puVar2 = (undefined4 *)fn_001f74d8(param_1,0xdd);
    if (puVar2 != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
      do {
        if (puVar3 == &DAT_00898eac) {
          puVar4 = puVar2;
          break;
        }
        puVar3 = (undefined4 *)*puVar3;
      } while (puVar3 != (undefined4 *)0x0);
    }
    *(undefined1 *)(puVar4 + 6) = 1;
  }
  fn_003979f0(param_1);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_0060eff0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 local_18;
  
  local_18 = param_4;
  fn_002c3e78();
  uVar3 = 0;
  if (param_1[0x1f] - param_1[0x1e] >> 2 != 0) {
    do {
      iVar1 = fn_006ba220(param_1,uVar3);
      if (iVar1 == 0) {
        uVar2 = (**(code **)(*param_1 + 0x140))(param_1,uVar3);
        fn_0031b78c(param_1,uVar3,0,uVar2);
        iVar1 = (**(code **)(*param_1 + 0x144))(param_1,uVar3);
        if (iVar1 == 0) {
          local_18 = _DAT_00898d70;
          fn_002c37e0(param_1,uVar3,&local_18);
        }
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)(param_1[0x1f] - param_1[0x1e] >> 2));
  }
  return;
}



void fn_0060ecf8(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  
  puVar4 = (undefined4 *)0x0;
  puVar5 = *(undefined4 **)(param_1 + 0x18);
  if (puVar5 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar5)(puVar5);
    do {
      if (puVar1 == &DAT_00898ce0) goto LAB_0060ed40;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar5 = (undefined4 *)0x0;
LAB_0060ed40:
  puVar1 = *(undefined4 **)(param_1 + 0x18);
  if (*(char *)((int)puVar5 + 0xd) == '\0') {
    uVar6 = 0;
  }
  else {
    uVar6 = 2;
  }
  if (puVar1 != (undefined4 *)0x0) {
    puVar5 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar5 == &DAT_00898ce0) goto LAB_0060ed88;
      puVar5 = (undefined4 *)*puVar5;
    } while (puVar5 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_0060ed88:
  puVar5 = *(undefined4 **)(param_1 + 0x18);
  if (*(char *)((int)puVar1 + 0xd) == '\0') {
    uVar7 = 1;
  }
  else {
    uVar7 = 3;
  }
  if (puVar5 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar5)(puVar5);
    do {
      if (puVar1 == &DAT_00898ce0) goto LAB_0060edd0;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar5 = (undefined4 *)0x0;
LAB_0060edd0:
  puVar5 = puVar5 + 5;
  fn_0028a66c(*(undefined4 *)(DAT_00897804 + 0xc));
  fn_0028acf4(*(undefined4 *)(DAT_00897804 + 0xc));
  iVar8 = 0;
  do {
    uVar2 = fn_006e73f8(puVar5,uVar6,iVar8);
    fn_0028b7ac(*(undefined4 *)(DAT_00897804 + 0xc),uVar2);
    uVar2 = fn_006e73f8(puVar5,uVar7,iVar8);
    fn_0028a588(*(undefined4 *)(DAT_00897804 + 0xc),uVar2);
    iVar8 = iVar8 + 1;
  } while (iVar8 < 4);
  puVar1 = *(undefined4 **)(param_1 + 0x18);
  if (puVar1 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar3 == &DAT_00898ce0) goto LAB_0060ee80;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_0060ee80:
  uVar6 = fn_006e69b8(puVar5,*(undefined1 *)((int)puVar1 + 0xd));
  fn_0028ad18(*(undefined4 *)(DAT_00897804 + 0xc),uVar6);
  puVar1 = *(undefined4 **)(param_1 + 0x18);
  if (puVar1 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar3 == &DAT_00898ce0) {
        puVar4 = puVar1;
        break;
      }
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  uVar6 = fn_006e6ef8(puVar5,*(undefined1 *)((int)puVar4 + 0xd));
  fn_0028b674(*(undefined4 *)(DAT_00897804 + 0xc),uVar6);
  return;
}



undefined4 * fn_0060e880(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 0x18);
  if (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar1 == &DAT_00898ce0) {
        return puVar2;
      }
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  return (undefined4 *)0x0;
}


