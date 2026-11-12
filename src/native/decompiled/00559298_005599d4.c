#include "00559298_005599d4.h"



undefined4 fn_005599d4(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_1[3] != 0) {
    if (*param_1 < param_1[3]) {
      return 1;
    }
    iVar1 = fn_00559a28();
    if (iVar1 != 0) {
      iVar2 = *(int *)(iVar1 + 0x50) + (uint)*(byte *)(iVar1 + 0x9d);
      iVar1 = UnsignedSaturate(iVar2,7);
      UnsignedDoesSaturate(iVar2,7);
      if (iVar1 <= param_2) {
        return 1;
      }
    }
  }
  return 0;
}



undefined4 fn_00559904(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  iVar2 = (uint)*(byte *)(param_2 + 0x9d) + *(int *)(param_2 + 0x50);
  iVar1 = UnsignedSaturate(iVar2,7);
  UnsignedDoesSaturate(iVar2,7);
  if (param_1[3] != 0) {
    while( true ) {
      if (*param_1 < param_1[3]) {
        fn_0017d948(param_1,param_1 + 1,param_2 + 0x110);
        *(int **)(param_2 + 0x18) = param_1;
        return 1;
      }
      piVar3 = (int *)param_1[1];
      piVar6 = (int *)0x0;
      iVar2 = 0x80;
      while (piVar3 != param_1 + 1) {
        iVar4 = piVar3[-0x30] + (uint)*(byte *)((int)piVar3 + -0x73);
        iVar5 = UnsignedSaturate(iVar4,7);
        UnsignedDoesSaturate(iVar4,7);
        if (iVar5 < iVar2) {
          piVar6 = piVar3 + -0x44;
        }
        piVar3 = (int *)*piVar3;
        if (iVar5 < iVar2) {
          iVar2 = iVar5;
        }
      }
      if (piVar6 == (int *)0x0) break;
      iVar5 = (uint)*(byte *)((int)piVar6 + 0x9d) + piVar6[0x14];
      iVar2 = UnsignedSaturate(iVar5,7);
      UnsignedDoesSaturate(iVar5,7);
      if (iVar1 < iVar2) {
        return 0;
      }
      (**(code **)(*piVar6 + 0x10))();
    }
  }
  return 0;
}



undefined4 fn_00559874(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined1 local_28;
  undefined1 local_27;
  undefined1 local_26;
  undefined1 local_25;
  undefined1 local_24;
  undefined1 auStack_18 [8];
  
  if (param_2 == 0) {
    return 0;
  }
  fn_00140dd8(auStack_18);
  local_28 = 0;
  local_27 = 0;
  local_26 = 0;
  local_25 = 0;
  local_24 = 0;
  iVar3 = fn_0014594c(auStack_18,&local_30,param_3,0);
  uVar2 = uStack_2c;
  uVar1 = local_30;
  uVar4 = 0;
  if (iVar3 != 0) {
    local_30 = 8;
    uStack_2c = 0;
    iVar3 = fn_001408ac(param_1,uVar1,uVar2,param_4);
    uVar4 = 0;
    if (iVar3 != 0) {
      uVar4 = 1;
    }
  }
  return uVar4;
}



undefined4 fn_00559754(int param_1,int param_2,undefined4 param_3)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 local_3c [2];
  char local_34;
  undefined1 auStack_30 [12];
  
  if (param_2 != 0) {
    fn_00140594(auStack_30);
    puVar1 = (uint *)fn_0014580c(auStack_30);
    if (puVar1 != (uint *)0x0) {
      uVar4 = 0;
      if (*puVar1 != 0) {
        do {
          if (*puVar1 <= uVar4) {
            return 0;
          }
          if (puVar1 + uVar4 * 2 + 1 == (uint *)0x0) {
            return 0;
          }
          uVar5 = puVar1[uVar4 * 2 + 1];
          uVar6 = puVar1[uVar4 * 2 + 2];
          local_34 = '\0';
          local_3c[0] = 0xffffffff;
          iVar2 = fn_00156328(*(undefined4 *)(param_1 + 4),uVar5,local_3c);
          if (iVar2 == 0) {
            return 0;
          }
          if (local_34 == '\0') {
            uVar3 = fn_00156794(*(undefined4 *)(param_1 + 4),uVar5);
            iVar2 = fn_00140cb0(param_1,uVar3,param_3,0,1);
          }
          else {
            iVar2 = fn_001522f0(param_1,uVar5,uVar6,param_3,0);
          }
          if (iVar2 == 0) {
            return 0;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < *puVar1);
      }
      return 1;
    }
  }
  return 0;
}



void fn_005596fc(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x260) != '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x260) = 1;
  *(undefined1 *)(param_1 + 0x261) = 0;
  iVar1 = 0;
  iVar2 = 9;
  do {
    iVar3 = param_1 + iVar1 * 8;
    iVar2 = iVar2 + -1;
    *(undefined4 *)(iVar3 + 0x218) = 0xffffffff;
    *(undefined4 *)(iVar3 + 0x21c) = 0;
    iVar1 = iVar1 + 1;
  } while (iVar2 != 0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



void fn_00559680(undefined4 *param_1)

{
  *param_1 = &DAT_008581ec;
  if (*(char *)(param_1 + 100) != '\0') {
    fn_001267cc(param_1 + 0x47);
    fn_001273b8(param_1 + 0x4f);
    *(undefined1 *)(param_1 + 100) = 0;
  }
  fn_00126584(param_1);
  param_1[99] = 0xffffffff;
  if ((param_1[0x48] & 0xfffffffe) != 0) {
    if ((param_1[0x48] & 1) != 0) {
      fn_00146594();
    }
    fn_0015cf8c(param_1[0x48] & 0xfffffffe);
    param_1[0x48] = 0;
  }
  fn_00555970(param_1);
  return;
}



void fn_005595fc(undefined4 *param_1)

{
  *param_1 = &DAT_008581ec;
  if (*(char *)(param_1 + 100) != '\0') {
    fn_001267cc(param_1 + 0x47);
    fn_001273b8(param_1 + 0x4f);
    *(undefined1 *)(param_1 + 100) = 0;
  }
  fn_00126584(param_1);
  param_1[99] = 0xffffffff;
  if ((param_1[0x48] & 0xfffffffe) != 0) {
    if ((param_1[0x48] & 1) != 0) {
      fn_00146594();
    }
    fn_0015cf8c(param_1[0x48] & 0xfffffffe);
    param_1[0x48] = 0;
  }
  fn_00555970(param_1);
  fn_002feef8();
  return;
}



int fn_00559564(int param_1,int param_2,uint param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  
  if ((*(char *)(param_1 + 400) != '\0') && (0x53 < param_3)) {
    if (param_2 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = fn_00558c50(param_2,param_1 + 0x11c,param_4,param_5,&LAB_005595cc,param_1);
    }
    if (*(char *)(iVar1 + 0x50) != '\0') {
      return iVar1;
    }
  }
  return 0;
}



void fn_005593e4(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1[6] != 0) {
    iVar1 = param_1[7];
  }
  if (param_1[6] != 0 && iVar1 != 0) {
    if (param_3 == 0) {
      param_1[9] = param_2;
    }
    else {
      if (param_3 == 1) {
        param_2 = param_1[9] + param_2;
      }
      else {
        if (param_3 != 2) {
          return;
        }
        iVar1 = (**(code **)(*param_1 + 0x3c))(param_1);
        param_2 = iVar1 - param_2;
      }
      param_1[9] = param_2;
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00559458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)param_1[5] + 0x40))((int *)param_1[5],param_2);
  return;
}



uint fn_00559298(int *param_1,undefined4 param_2,uint param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = param_1[6];
  if (iVar1 != 0) {
    param_4 = param_1[7];
  }
  if (iVar1 == 0 || param_4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0055931c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(*(int *)param_1[5] + 0x24))((int *)param_1[5],param_2);
    return uVar3;
  }
  iVar2 = param_1[8];
  uVar3 = param_3;
  if (-1 < iVar2) {
    uVar3 = param_1[9];
  }
  if ((-1 < iVar2 && iVar2 <= (int)uVar3) && (uVar3 + param_3 <= (uint)(iVar2 + param_4))) {
    fn_00301a9c(param_2,(uVar3 - iVar2) + iVar1,param_3);
    param_1[9] = param_1[9] + param_3;
    return param_3;
  }
  (**(code **)(*(int *)param_1[5] + 0x40))((int *)param_1[5],param_1[9],0);
  iVar1 = (**(code **)(*param_1 + 0x54))(param_1);
  param_1[8] = iVar1;
  if ((uint)param_1[7] < param_3) {
    uVar3 = (**(code **)(*(int *)param_1[5] + 0x24))((int *)param_1[5],param_2,param_3);
    if (-1 < (int)uVar3) {
      fn_00301a9c(param_1[6],param_2,param_1[7]);
      param_1[9] = param_1[9] + param_3;
      return param_3;
    }
  }
  else {
    uVar3 = (**(code **)(*(int *)param_1[5] + 0x24))((int *)param_1[5],param_1[6]);
    if (-1 < (int)uVar3) {
      fn_00301a9c(param_2,param_1[6],param_3);
      param_1[9] = param_1[9] + param_3;
      return param_3;
    }
  }
  param_1[8] = -1;
  return uVar3;
}


