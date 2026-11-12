#include "00592028_00592a7cbb.h"



void fn_00592a7c(int *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  
  if ((char)param_1[3] != '\x03') {
switchD_00592b08_caseD_3:
    return;
  }
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_008963ac) goto LAB_00592ae4;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_00592ae4:
  iVar3 = fn_00748844(param_1,param_2);
  if (iVar3 != 0) {
    param_1[0x44] = param_2;
    switch((char)param_1[0x47]) {
    case '\0':
      iVar3 = fn_0066eb80(DAT_00898840,8);
      if ((*(byte *)(iVar3 + 0x4c) & 4) == 0) {
        if (*(char *)((int)param_1 + 0x125) != '\0') {
          *(undefined1 *)(param_1 + 0x47) = 1;
          uVar4 = fn_0022f584(*(undefined4 *)(param_1[0x41] + 0x14),0);
          fn_00748808(param_1,uVar4,0,1,0,0);
          fn_0068ab44(param_1,0x100094b);
          param_1[0x45] = 0;
          return;
        }
      }
      else if (*(char *)((int)param_1 + 0x125) != '\0') {
        fn_003dcc90(*(undefined4 *)(*(int *)(puVar1[0xf] + 4) + 8));
        fn_00675a7c(puVar1[0x11],1,param_1[0x44],*(undefined4 *)(param_1[0x41] + 0x10),0);
        fn_0040f564(puVar1[0xf],0);
        *(undefined1 *)(param_1 + 0x47) = 2;
        *(undefined4 *)(param_1[0x17] + 0x38) = 0;
        uVar4 = fn_0022f584(*(undefined4 *)(param_1[0x41] + 0x14),0);
        fn_00748808(param_1,uVar4,0,1,0,0);
        *(undefined1 *)(param_1[0x17] + 0x51) = 1;
        fn_0068ab44(param_1,0x100094b);
        param_1[0x45] = 0;
        return;
      }
      break;
    case '\x01':
    case '\x02':
    case '\x04':
    case '\x05':
    case '\x06':
    case '\a':
                    /* WARNING: Could not recover jumptable at 0x00592c60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x16c))(param_1);
      return;
    default:
      goto switchD_00592b08_caseD_3;
    }
  }
  fn_0068ab44(param_1,0x100094d);
  return;
}



void fn_005929f4(int *param_1)

{
  undefined4 uVar1;
  
  if ((char)param_1[0x47] == '\0') {
    (**(code **)(*param_1 + 0x170))(param_1);
    *(undefined4 *)(param_1[0x17] + 0x38) = 0;
    uVar1 = fn_0022f584(*(undefined4 *)(param_1[0x41] + 0x18));
    fn_00748808(param_1,uVar1,0,1,0,0);
    *(undefined1 *)(param_1 + 0x47) = 5;
    fn_0068ab44(param_1,0x100094c);
    return;
  }
  return;
}



undefined4 fn_005927bc(int *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  
  uVar1 = fn_0043cd80();
  puVar2 = (undefined4 *)fn_00689c1c(param_1,0x80);
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar3 == &DAT_008964f4) goto LAB_00592810;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_00592810:
  param_1[0x42] = (int)puVar2;
  puVar2 = (undefined4 *)param_1[6];
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar3 == &DAT_00892ca4) goto LAB_0059284c;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_0059284c:
  param_1[0x41] = (int)puVar2;
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1);
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar3 == &DAT_008963ac) goto LAB_00592894;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_00592894:
  uVar4 = (**(code **)(**(int **)(*(int *)(puVar2[0xf] + 4) + 8) + 0x14))();
  fn_0066e4a4(DAT_00897850,0,uVar4);
  fn_006732a0(puVar2[0x12],puVar2[0xd],*(undefined1 *)(puVar2 + 0xe),
               *(undefined4 *)(param_1[0x41] + 0x10));
  *(undefined1 *)(param_1[0x42] + 8) = 1;
  *(undefined4 *)(param_1[0x42] + 0x10) = 0xd4;
  fn_0040f564(puVar2[0xf],0);
  iVar5 = param_1[0x41];
  if (*(int *)(iVar5 + 0xc) < 0) {
    if (-1 < *(int *)(iVar5 + 8)) {
      fn_00689930(param_1,*(undefined4 *)(iVar5 + 8),0);
    }
  }
  else if (-1 < *(int *)(iVar5 + 8)) {
    fn_0068993c(param_1,*(undefined4 *)(param_1[0x41] + 8),*(undefined4 *)(iVar5 + 0xc),0,0);
  }
  if (*(int *)(param_1[0x41] + 8) == 0x7a) {
    puVar2 = (undefined4 *)fn_001f74d8(param_1,0x7a);
    if (puVar2 != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
      do {
        if (puVar3 == &DAT_00893d20) goto LAB_005929c0;
        puVar3 = (undefined4 *)*puVar3;
      } while (puVar3 != (undefined4 *)0x0);
    }
    puVar2 = (undefined4 *)0x0;
LAB_005929c0:
    param_1[0x43] = (int)puVar2;
    *(undefined1 *)(puVar2 + 3) = 0;
  }
  param_1[0x45] = 0;
  return uVar1;
}


