#include "0035c408_0035cca8.h"



void fn_0035cca8(int *param_1,int *param_2,undefined4 *param_3)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  piVar2 = (int *)*param_3;
  param_2[3] = 0;
  param_2[1] = (int)piVar2;
  param_2[2] = 0;
  *(undefined1 *)(param_2 + 4) = 0;
  *(undefined1 *)((int)param_2 + 0x11) = 1;
  iVar4 = *piVar2;
  iVar5 = piVar2[1];
  while( true ) {
    if (iVar4 == iVar5) {
      *(undefined1 *)((int)param_2 + 0x11) = 2;
      iVar4 = param_2[3];
      iVar5 = param_2[4];
      *param_1 = param_2[2];
      param_1[1] = iVar4;
      param_1[2] = iVar5;
      return;
    }
    sVar1 = *(short *)(iVar4 + 0x24);
    iVar3 = fn_00176dc0(iVar4 + 8);
    if (sVar1 < iVar3) break;
    iVar4 = iVar4 + 0x428;
  }
  (**(code **)(*param_2 + 8))(param_2,0);
  iVar4 = param_2[3];
  iVar5 = param_2[4];
  *param_1 = param_2[2];
  param_1[1] = iVar4;
  param_1[2] = iVar5;
  return;
}



int * fn_0035cbb0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  short *psVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  int *local_30;
  int local_2c;
  
  piVar6 = (int *)**(int **)(param_1 + 4);
  piVar8 = (int *)(*(int **)(param_1 + 4))[1];
  local_2c = -1;
  local_30 = piVar8;
  do {
    if (piVar6 == piVar8) {
      if (local_30 == piVar8) {
        local_30 = (int *)0x0;
      }
      return local_30;
    }
    iVar7 = *piVar6;
    uVar5 = 0;
    do {
      iVar3 = iVar7 + uVar5 * 4;
      psVar4 = (short *)(iVar3 + 0x56);
      iVar1 = (int)*psVar4;
      if (iVar1 != 0) {
        iVar1 = fn_0068f708(iVar1,*(undefined2 *)(iVar3 + 0x58));
        uVar2 = 1;
        if (0 < iVar1) {
          do {
            iVar3 = fn_0068f7c4((int)*psVar4,uVar2 & 0xff);
            if ((iVar3 != 0) && (iVar3 == param_2)) {
              iVar7 = fn_006f4114(piVar6 + 2,param_2);
              if ((-1 < (short)(*(short *)((int)piVar6 + 0x26) - (short)iVar7)) &&
                 ((local_30 == piVar8 || (iVar7 < local_2c)))) {
                local_30 = piVar6;
                local_2c = iVar7;
              }
              goto LAB_0035cc68;
            }
            uVar2 = uVar2 + 1;
          } while ((int)uVar2 <= iVar1);
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < 7);
LAB_0035cc68:
    piVar6 = piVar6 + 0x10a;
  } while( true );
}



undefined4
fn_0035ca80(int param_1,int *param_2,int *param_3,undefined4 param_4,int param_5,undefined4 param_6
            )

{
  short sVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  bool bVar5;
  
  sVar1 = *(short *)((int)param_3 + 0x422);
  bVar5 = sVar1 < 0;
  if (bVar5) {
    sVar1 = (short)param_3[0x109];
  }
  if (bVar5 && sVar1 < 0) {
    fn_0035bfa0(param_1,param_3,param_4,param_6);
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + (int)*(short *)((int)param_3 + 0x422);
  fn_0017455c(param_3 + 2,(int)-*(short *)((int)param_3 + 0x422));
  piVar4 = (int *)param_2[1];
  for (piVar3 = (int *)*param_2; piVar3 != piVar4; piVar3 = piVar3 + 0x10a) {
    iVar2 = fn_00176dc0(piVar3 + 2);
    if (iVar2 < (int)(short)piVar3[9] + (int)(short)param_3[0x109]) {
      iVar2 = fn_00176dc0(piVar3 + 2);
      iVar2 = (iVar2 - (short)piVar3[9]) + *(int *)(param_1 + 0xc);
    }
    else {
      iVar2 = *(int *)(param_1 + 0xc) + (int)(short)param_3[0x109];
    }
    *(int *)(param_1 + 0xc) = iVar2;
    fn_00180278(piVar3 + 2,(int)(short)param_3[0x109]);
  }
  if (param_5 != 0) {
    for (param_2 = (int *)*param_2; param_2 != piVar4; param_2 = param_2 + 0x10a) {
      *(short *)(*param_2 + 0x22) = (short)param_2[9];
      *(undefined2 *)(*param_2 + 0x24) = *(undefined2 *)((int)param_2 + 0x26);
    }
    *(short *)(*param_3 + 0x22) = (short)param_3[9];
    *(undefined2 *)(*param_3 + 0x24) = *(undefined2 *)((int)param_3 + 0x26);
  }
  *(undefined1 *)(param_1 + 0x11) = 0;
  return 1;
}



undefined4
fn_0035c980(int param_1,int *param_2,int *param_3,undefined4 param_4,int param_5,undefined4 param_6
            )

{
  short sVar1;
  int iVar2;
  bool bVar3;
  
  sVar1 = *(short *)((int)param_3 + 0x422);
  bVar3 = sVar1 < 0;
  if (bVar3) {
    sVar1 = (short)param_3[0x109];
  }
  if (bVar3 && sVar1 < 0) {
    fn_0035bfa0(param_1,param_3,param_4,param_6);
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + (int)*(short *)((int)param_3 + 0x422);
  iVar2 = fn_00176dc0(param_2 + 2);
  if (iVar2 < (int)(short)param_2[9] + (int)(short)param_3[0x109]) {
    iVar2 = fn_00176dc0(param_2 + 2);
    iVar2 = (iVar2 - (short)param_2[9]) + *(int *)(param_1 + 0xc);
  }
  else {
    iVar2 = (int)(short)param_3[0x109] + *(int *)(param_1 + 0xc);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  fn_00180278(param_2 + 2,(int)(short)param_3[0x109]);
  fn_0017455c(param_3 + 2,(int)-*(short *)((int)param_3 + 0x422));
  if (param_5 != 0) {
    *(short *)(*param_2 + 0x22) = (short)param_2[9];
    *(undefined2 *)(*param_2 + 0x24) = *(undefined2 *)((int)param_2 + 0x26);
    *(short *)(*param_3 + 0x22) = (short)param_3[9];
    *(undefined2 *)(*param_3 + 0x24) = *(undefined2 *)((int)param_3 + 0x26);
  }
  *(undefined1 *)(param_1 + 0x11) = 0;
  return 1;
}



void fn_0035c954(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  do {
    iVar1 = (**(code **)(*param_1 + 0xc))(param_1,param_2);
  } while (iVar1 != 0);
  return;
}



void fn_0035c408(uint *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  undefined1 *unaff_r6;
  undefined1 *puVar7;
  int iVar8;
  undefined1 uVar9;
  uint local_46c;
  undefined4 local_468 [2];
  undefined2 local_460;
  undefined2 local_444;
  undefined2 local_442;
  undefined2 local_434;
  undefined2 local_432;
  undefined2 local_430;
  undefined2 local_42e;
  undefined2 local_42c;
  undefined2 local_42a;
  undefined1 auStack_428 [12];
  undefined1 auStack_41c [20];
  undefined1 local_408;
  undefined1 auStack_405 [553];
  undefined1 auStack_1dc [356];
  undefined1 auStack_78 [30];
  undefined1 auStack_5a [18];
  undefined1 local_48;
  undefined2 local_46;
  undefined2 local_44;
  uint local_3c;
  undefined4 local_38;
  
  local_38 = *(undefined4 *)(DAT_00897804 + 0xc);
  uVar4 = param_1[1];
  uVar6 = *param_1;
  if (uVar6 != uVar4) {
    uVar1 = uVar6;
    if (uVar4 <= uVar6) {
      do {
        uVar1 = uVar1 + 0x428;
      } while (uVar1 != uVar4);
    }
    iVar2 = (int)((longlong)(int)(uVar4 - uVar6) * -0x99fc267 + ((ulonglong)(uVar4 - uVar6) << 0x20)
                 >> 0x20);
    param_1[1] = uVar4 + ((iVar2 >> 10) - (iVar2 >> 0x1f)) * -0x428;
  }
  local_46c = 0x20;
  uVar4 = param_1[2] - *param_1;
  iVar2 = (int)((longlong)(int)uVar4 * -0x99fc267 + ((ulonglong)uVar4 << 0x20) >> 0x20);
  if ((uint)((iVar2 >> 10) - (iVar2 >> 0x1f)) < 0x20) {
    uVar4 = param_1[1] - *param_1;
    iVar2 = (int)((longlong)(int)uVar4 * -0x99fc267 + ((ulonglong)uVar4 << 0x20) >> 0x20);
    uVar4 = (iVar2 >> 10) - (iVar2 >> 0x1f);
    uVar6 = uVar4 + (uVar4 >> 1) + (uVar4 >> 3);
    local_3c = uVar4 + 0x20;
    if (uVar4 + 0x20 <= uVar6) {
      local_3c = uVar6;
    }
    puVar5 = &local_3c;
    if (local_3c < 0x21) {
      puVar5 = &local_46c;
    }
    uVar1 = *puVar5;
    uVar6 = fn_00100fc6(uVar1 * 0x428,0);
    puVar7 = (undefined1 *)param_1[1];
    uVar4 = uVar6;
    for (unaff_r6 = (undefined1 *)*param_1; unaff_r6 != puVar7; unaff_r6 = unaff_r6 + 0x428) {
      if (uVar4 != 0) {
        fn_0017821c(uVar4,unaff_r6,0x428);
      }
      uVar4 = uVar4 + 0x428;
    }
    uVar3 = *param_1;
    uVar4 = uVar3;
    if (param_1[1] < uVar3) {
      do {
        uVar4 = uVar4 + 0x428;
      } while (uVar4 != param_1[1]);
    }
    iVar2 = (int)((longlong)(int)(param_1[2] - uVar3) * -0x99fc267 +
                  ((ulonglong)(param_1[2] - uVar3) << 0x20) >> 0x20);
    fn_001008c4(uVar3,(iVar2 >> 10) - (iVar2 >> 0x1f),0);
    uVar4 = *param_1;
    *param_1 = uVar6;
    iVar2 = (int)((longlong)(int)(param_1[1] - uVar4) * -0x99fc267 +
                  ((ulonglong)(param_1[1] - uVar4) << 0x20) >> 0x20);
    param_1[2] = uVar6 + uVar1 * 0x428;
    param_1[1] = uVar6 + ((iVar2 >> 10) - (iVar2 >> 0x1f)) * 0x428;
  }
  local_468[0] = 0;
  local_48 = 0;
  local_46 = 0xffff;
  local_44 = 0xffff;
  iVar2 = fn_006b83e4(local_38);
  if (0 < iVar2) {
    unaff_r6 = auStack_78;
  }
  iVar8 = 0;
  puVar7 = &DAT_00000001;
  if (0 < iVar2) {
    do {
      local_468[0] = fn_0028b0a0(local_38,iVar8);
      fn_0020bbc4(unaff_r6 + 0x48,local_468[0]);
      fn_00301f50(auStack_1dc,0x120);
      local_46c = 1;
      fn_006bf5ec(unaff_r6 + 0x4c,auStack_1dc,0x4c,1,1,1,1);
      fn_00654c74(auStack_1dc);
      local_460 = fn_006bfda8(unaff_r6 + 0x4c);
      local_444 = fn_006bf5bc(unaff_r6 + 0x4c);
      local_442 = fn_006bf5c8(unaff_r6 + 0x4c);
      local_434 = fn_006c0028(unaff_r6 + 0x4c);
      local_432 = fn_006c0114(unaff_r6 + 0x4c);
      local_430 = fn_006c09b4(unaff_r6 + 0x4c);
      local_42e = fn_006bed98(unaff_r6 + 0x4c);
      local_42c = fn_006c01f4(unaff_r6 + 0x4c);
      local_42a = fn_006bff0c(unaff_r6 + 0x4c);
      local_408 = fn_006c0108(unaff_r6 + 0x4c);
      fn_0061dcec(auStack_428);
      fn_0061dcec(auStack_41c);
      fn_00158f6c(auStack_405,0xc2);
      uVar4 = 1;
      do {
        fn_00654cc4(auStack_5a,uVar4 & 0xff,0);
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < 5);
      local_48 = 1;
      uVar4 = param_1[1];
      if (uVar4 == param_1[2]) {
        fn_0078919c(param_1,uVar4,local_468);
      }
      else {
        param_1[1] = uVar4 + 0x428;
        if (uVar4 != 0) {
          fn_0017821c(uVar4,local_468,0x428);
        }
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar2);
  }
  iVar2 = fn_006b84b0(local_38);
  if (0 < iVar2) {
    puVar7 = auStack_78;
  }
  iVar8 = 0;
  if (0 < iVar2) {
    uVar9 = 0;
    do {
      local_468[0] = fn_0028b348(local_38,iVar8);
      fn_0020bbc4(puVar7 + 0x38,local_468[0]);
      fn_00301f50(auStack_1dc,0x120);
      local_46c = 1;
      fn_006bf5ec(puVar7 + 0x3c,auStack_1dc,0x4c,1,1,1,1);
      fn_00654c74(auStack_1dc);
      local_460 = fn_006bfda8(puVar7 + 0x3c);
      local_444 = fn_006bf5bc(puVar7 + 0x3c);
      local_442 = fn_006bf5c8(puVar7 + 0x3c);
      local_434 = fn_006c0028(puVar7 + 0x3c);
      local_432 = fn_006c0114(puVar7 + 0x3c);
      local_430 = fn_006c09b4(puVar7 + 0x3c);
      local_42e = fn_006bed98(puVar7 + 0x3c);
      local_42c = fn_006c01f4(puVar7 + 0x3c);
      local_42a = fn_006bff0c(puVar7 + 0x3c);
      local_408 = fn_006c0108(puVar7 + 0x3c);
      fn_0061dcec(auStack_428);
      fn_0061dcec(auStack_41c);
      fn_00158f6c(auStack_405,0xc2);
      uVar4 = 1;
      do {
        fn_00654cc4(auStack_5a,uVar4 & 0xff,0);
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < 5);
      uVar4 = param_1[1];
      local_48 = uVar9;
      if (uVar4 == param_1[2]) {
        fn_0078919c(param_1,uVar4,local_468);
      }
      else {
        param_1[1] = uVar4 + 0x428;
        if (uVar4 != 0) {
          fn_0017821c(uVar4,local_468,0x428);
        }
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar2);
  }
  return;
}


