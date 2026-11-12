#include "00406c48_00407598.h"



void fn_00407598(int *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  if (param_2 != 0) {
    fn_0031e0f4(param_1[0x1f],1);
    uVar1 = fn_006ba4ec(param_1[0x1f]);
    uVar2 = fn_006c4f9c(param_1[0x1f]);
    (**(code **)(*param_1 + 0x114))(param_1,uVar2,uVar1);
  }
  iVar3 = fn_006ba55c(param_1[0x1f],1);
  if (iVar3 != 0) {
    uVar1 = fn_006ba4ec();
    uVar2 = fn_006c4f9c(param_1[0x1f]);
                    /* WARNING: Could not recover jumptable at 0x00407620. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x114))(param_1,uVar2,uVar1);
    return;
  }
  iVar3 = fn_006ba4fc(param_1[0x1f],1);
  if (iVar3 == 0) {
    iVar3 = fn_006ba680(param_1[0x1f],1);
    if (iVar3 != 0) {
      iVar3 = fn_006c4f9c();
      if (iVar3 == 0) {
        fn_0031dfc8(param_1[0x1f],1);
        return;
      }
      iVar3 = fn_006b5df8(param_1[0x2d]);
      if (iVar3 == 0) {
        fn_006899f4(param_1,*(undefined4 *)(param_1[0x1b] + 8),0,1);
                    /* WARNING: Could not recover jumptable at 0x0040781c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(int *)param_1[0x1b] + 0xc))();
        return;
      }
      iVar3 = fn_006ba4ec(param_1[0x1f]);
      if (iVar3 < 2) {
        uVar1 = fn_006ba4ec();
      }
      else {
        uVar1 = 0;
      }
      iVar3 = fn_006b5db4(param_1[0x2d],uVar1);
      if (iVar3 == 0) {
        fn_0038ed88(param_1[0x1f]);
      }
      else {
        fn_002573b0(param_1[0x2d],uVar1,0);
        fn_002560d0(param_1[0x2d]);
        (**(code **)(*(int *)param_1[0x1f] + 8))();
      }
      iVar4 = param_1[0x2d];
      iVar3 = fn_006ba4ec(param_1[0x1f]);
      if (iVar3 < 2) {
        iVar3 = fn_006ba4ec();
      }
      else {
        iVar3 = 0;
      }
      uVar1 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),
                           *(undefined4 *)(*(int *)(iVar4 + 4) + iVar3 * 4));
                    /* WARNING: Could not recover jumptable at 0x00407878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x10c))(param_1,uVar1,0x2d);
      return;
    }
    iVar3 = fn_006ba4bc(param_1[0x1f],1);
    if ((iVar3 != 0) && (iVar3 = fn_006c4f9c(param_1[0x1f]), iVar3 != 0)) {
      uVar1 = fn_006ba4ec(param_1[0x1f]);
      iVar3 = (**(code **)(*param_1 + 0x110))(param_1,uVar1);
      if (iVar3 != 0) {
        fn_0068ab44(param_1,0x100094b);
        fn_00408d04(param_1,0,1);
        return;
      }
    }
  }
  else {
    iVar3 = fn_006c4f9c();
    if (iVar3 == 0) {
      iVar4 = param_1[0x1f];
      iVar3 = fn_006ba4ec(iVar4);
      if (iVar3 < 2) {
        uVar5 = 0;
      }
      else {
        iVar3 = fn_006ba4ec(iVar4);
        uVar5 = iVar3 - 2;
      }
      if (uVar5 < (uint)((*(int *)(param_1[0x2d] + 0x14) - *(int *)(param_1[0x2d] + 0x10)) / 0x104))
      {
        iVar3 = fn_006ba6b0(param_1[0x1f],1);
        (**(code **)(*param_1 + 0x11c))(param_1,uVar5,iVar3);
        if (iVar3 == 0) goto LAB_00407744;
        goto LAB_00407734;
      }
    }
    else {
      iVar3 = fn_006ba6b0(param_1[0x1f],1);
      if (iVar3 != 0) {
        iVar3 = fn_006ba4ec(param_1[0x1f]);
        if (iVar3 < 2) {
          uVar1 = fn_006ba4ec();
        }
        else {
          uVar1 = 0;
        }
        iVar3 = (**(code **)(*param_1 + 0x108))(param_1,uVar1,0);
        if (iVar3 == 0) {
LAB_00407744:
          fn_0068ab44(param_1,0x100094d);
          return;
        }
        fn_0031e0f4(param_1[0x1f],0);
LAB_00407734:
        fn_0068ab44(param_1,0x100094b);
        return;
      }
    }
  }
  return;
}



void fn_00407540(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[0x1f];
  iVar1 = fn_006ba4ec(iVar2);
  if (iVar1 < 2) {
    iVar1 = 0;
  }
  else {
    iVar1 = fn_006ba4ec(iVar2);
    iVar1 = iVar1 + -2;
  }
                    /* WARNING: Could not recover jumptable at 0x00407594. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10c))
            (param_1,*(int *)(param_1[0x2d] + 0x10) + iVar1 * 0x104 + 0x10,0xe1);
  return;
}



void fn_00407504(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 != 0) {
    fn_002a3bb0(param_1[0x23],1);
    fn_0040790c(param_1);
    return;
  }
  fn_002a3bb0(param_1[0x23],0);
  iVar2 = param_1[0x1f];
  iVar1 = fn_006ba4ec(iVar2);
  if (iVar1 < 2) {
    iVar1 = 0;
  }
  else {
    iVar1 = fn_006ba4ec(iVar2);
    iVar1 = iVar1 + -2;
  }
                    /* WARNING: Could not recover jumptable at 0x00407594. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10c))
            (param_1,*(int *)(param_1[0x2d] + 0x10) + iVar1 * 0x104 + 0x10,0xe1);
  return;
}



void fn_00407378(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  
  *(undefined1 *)(*(int *)(param_1 + 0x6c) + 0x14) = 4;
  iVar6 = *(int *)(param_1 + 0x6c);
  iVar1 = fn_006ba4ec(*(undefined4 *)(param_1 + 0x7c));
  if (iVar1 < 2) {
    uVar2 = fn_006ba4ec();
  }
  else {
    uVar2 = 0;
  }
  *(undefined4 *)(iVar6 + 0x18) = uVar2;
  *(undefined4 *)(*(int *)(param_1 + 0x6c) + 0xc) = **(undefined4 **)(*(int *)(param_1 + 0xb4) + 4);
  *(undefined4 *)(*(int *)(param_1 + 0x6c) + 0x10) =
       *(undefined4 *)(*(int *)(*(int *)(param_1 + 0xb4) + 4) + 4);
  iVar1 = *(int *)(param_1 + 0x6c);
  uVar2 = fn_006ba4ec(*(undefined4 *)(param_1 + 0x84));
  *(undefined4 *)(iVar1 + 0x20) = uVar2;
  iVar1 = *(int *)(param_1 + 0x6c);
  uVar2 = fn_006ba674(*(undefined4 *)(param_1 + 0x88));
  *(undefined4 *)(iVar1 + 0x24) = uVar2;
  iVar1 = *(int *)(param_1 + 0x6c);
  uVar2 = fn_006ba4ec(*(undefined4 *)(param_1 + 0x88));
  *(undefined4 *)(iVar1 + 0x28) = uVar2;
  *(undefined4 *)(*(int *)(param_1 + 0x6c) + 0x2c) =
       *(undefined4 *)(*(int *)(param_1 + 0x88) + 0x44);
  iVar1 = *(int *)(param_1 + 0x6c);
  uVar2 = fn_006ba4ec(*(undefined4 *)(param_1 + 0x7c));
  *(undefined4 *)(iVar1 + 0x30) = uVar2;
  puVar3 = (undefined4 *)fn_001f74ec(param_1,0x5c);
  if (puVar3 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)(**(code **)*puVar3)(puVar3);
    do {
      if (puVar4 == &DAT_00895114) goto LAB_0040746c;
      puVar4 = (undefined4 *)*puVar4;
    } while (puVar4 != (undefined4 *)0x0);
  }
  puVar3 = (undefined4 *)0x0;
LAB_0040746c:
  puVar3[8] = *(undefined4 *)(param_1 + 0x94);
  puVar3[9] = *(undefined4 *)(param_1 + 0x94);
  iVar6 = *(int *)(param_1 + 0xb4);
  iVar1 = fn_006ba4ec(*(undefined4 *)(param_1 + 0x7c));
  if (iVar1 < 2) {
    iVar1 = fn_006ba4ec();
  }
  else {
    iVar1 = 0;
  }
  uVar2 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),
                       *(undefined4 *)(*(int *)(iVar6 + 4) + iVar1 * 4));
  puVar3[2] = uVar2;
  uVar2 = fn_006c1574(*(undefined4 *)(param_1 + 0x88));
  uVar5 = fn_00660d60();
  puVar3[3] = uVar5;
  puVar3[4] = uVar2;
  fn_006899f4(param_1,0x5c,0,1);
  fn_0068ab44(param_1,0x100094b);
  return;
}



void fn_00407140(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = fn_0022f584((char *)&DAT_004071c4,0);
  fn_0036c5f4(*(undefined4 *)(param_1 + 0x5c),uVar1,1,1,1,1,0,0,1);
  fn_00689bd0(param_1,0x48,0);
  fn_00689828(param_1,0);
  *(undefined1 *)(param_1 + 0x98) = 1;
  fn_0068ab44(param_1,0x100094b);
  return;
}



void fn_00407024(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  
  *(undefined1 *)(*(int *)(param_1 + 0x6c) + 0x14) = 2;
  *(undefined4 *)(*(int *)(param_1 + 0x6c) + 0xc) = **(undefined4 **)(*(int *)(param_1 + 0xb4) + 4);
  *(undefined4 *)(*(int *)(param_1 + 0x6c) + 0x10) =
       *(undefined4 *)(*(int *)(*(int *)(param_1 + 0xb4) + 4) + 4);
  uVar4 = *(undefined4 *)(param_1 + 0x7c);
  iVar5 = *(int *)(param_1 + 0x6c);
  iVar1 = fn_006ba4ec(uVar4);
  if (iVar1 < 2) {
    iVar1 = 0;
  }
  else {
    iVar1 = fn_006ba4ec(uVar4);
    iVar1 = iVar1 + -2;
  }
  *(int *)(iVar5 + 0x1c) = iVar1;
  iVar1 = *(int *)(param_1 + 0x6c);
  uVar4 = fn_006ba4ec(*(undefined4 *)(param_1 + 0x7c));
  *(undefined4 *)(iVar1 + 0x30) = uVar4;
  uVar4 = *(undefined4 *)(param_1 + 0x7c);
  iVar5 = *(int *)(param_1 + 0xb4);
  iVar1 = fn_006ba4ec(uVar4);
  if (iVar1 < 2) {
    iVar1 = 0;
  }
  else {
    iVar1 = fn_006ba4ec(uVar4);
    iVar1 = iVar1 + -2;
  }
  iVar5 = *(int *)(iVar5 + 0x10);
  puVar2 = (undefined4 *)fn_001f74ec(param_1,0xd9);
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar3 == &DAT_00890b20) goto LAB_00407114;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_00407114:
  fn_00604740(puVar2,iVar5 + iVar1 * 0x104,0xd5);
  fn_006899f4(param_1,0xd9,0,1);
  return;
}



undefined4 fn_00406e9c(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  int iVar4;
  bool bVar5;
  
  bVar3 = 0;
  iVar4 = 0;
  do {
    iVar1 = fn_006b51d8(*(undefined4 *)(DAT_00897804 + 0x1c),iVar4);
    if (iVar1 == param_2) {
      bVar3 = 1;
      break;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 4);
  iVar4 = fn_006b846c(*(undefined4 *)(DAT_00897804 + 0xc));
  bVar5 = iVar4 == param_2;
  if ((bool)(bVar3 & ~bVar5)) {
    uVar2 = 1;
  }
  else if ((bool)(bVar5 & ~bVar3)) {
    uVar2 = 2;
  }
  else {
    uVar2 = 0;
    if ((bool)(bVar5 & bVar3)) {
      uVar2 = 3;
    }
  }
  return uVar2;
}



void fn_00406c48(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_2 == 1) {
    uVar1 = fn_0022f584((char *)&DAT_00406d24,0);
  }
  else if (param_2 == 2) {
    uVar1 = fn_0022f584((char *)&DAT_00406d48,0);
  }
  else if (param_2 == 3) {
    uVar1 = fn_0022f584((char *)&DAT_00406d6c,0);
  }
  fn_0036c5f4(*(undefined4 *)(param_1 + 0x5c),uVar1,1,1,1,1,0,0,1);
  fn_00689bd0(param_1,0x48,0);
  fn_00689828(param_1,0);
  *(undefined1 *)(param_1 + 0x98) = 2;
  fn_0068ab44(param_1,0x100094b);
  return;
}


