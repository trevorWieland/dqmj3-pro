#include "0036c934_0036d578b.h"



void fn_0036d578(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  
  uVar6 = 0x100094d;
  iVar7 = *(int *)(&DAT_007c6f74 + param_2 * 4);
  if (iVar7 == 0) {
    fn_0068ab44(param_1,0x100094d);
    return;
  }
  puVar5 = (undefined4 *)0x0;
  *(int *)(*(int *)(param_1 + 0xd0) + 8) = param_2;
  if (iVar7 == 0x50) {
    puVar2 = (undefined4 *)fn_001f74ec(param_1,0x50);
    if (puVar2 != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
      do {
        if (puVar3 == &DAT_008944b4) {
          puVar5 = puVar2;
          break;
        }
        puVar3 = (undefined4 *)*puVar3;
      } while (puVar3 != (undefined4 *)0x0);
    }
    *(undefined1 *)(puVar5 + 2) = 0;
    puVar5[4] = 0x4f;
    puVar5[5] = 0x4f;
  }
  else if (iVar7 == 0x52) {
    iVar1 = fn_002d8370(0xffffffff);
    if (iVar1 != 0) goto LAB_0036d724;
  }
  else if (iVar7 == 0x56) {
    iVar1 = fn_00154ac8(0x93);
    if (iVar1 == 0) {
      uVar4 = fn_0022f584((char *)&DAT_0036d75c,0);
      fn_0036c5f4(*(undefined4 *)(param_1 + 0x5c),uVar4,1,0,1,1,0,0,1);
      *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x38) = 0;
      fn_00689bd0(param_1,0x48,0);
      goto LAB_0036d724;
    }
    puVar2 = (undefined4 *)fn_001f74ec(param_1,0x56);
    if (puVar2 != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
      do {
        if (puVar3 == &DAT_00894498) {
          puVar5 = puVar2;
          break;
        }
        puVar3 = (undefined4 *)*puVar3;
      } while (puVar3 != (undefined4 *)0x0);
    }
    fn_005c19c4(puVar5,0x4f,0);
  }
  fn_006899f4(param_1,iVar7,0,1);
  uVar6 = 0x100094b;
LAB_0036d724:
  fn_0068ab44(param_1,uVar6);
  return;
}



void fn_0036d414(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  fn_002c3d68();
  puVar2 = *(undefined4 **)(param_1 + 4);
  if (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar1 == &DAT_00891a10) goto LAB_0036d45c;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_0036d45c:
  if (*(char *)(puVar2 + 0xb) == '\x02') {
    fn_006899f4(param_1,0,0);
    fn_00689d04(param_1,0);
    fn_00689878(param_1,0);
  }
  else {
    fn_006899f4(param_1,0xd4,0,1);
  }
  *(undefined4 *)(*(int *)(param_1 + 0xd0) + 8) = 0;
  return;
}



void fn_0036d17c(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_00154ac8(0x95);
  if (iVar1 == 0) {
    fn_00144834(0x95,1);
    fn_00144834(0x1e2,1);
    uVar2 = fn_0022f584((char *)&DAT_0036d3c0,0);
    fn_0036c5f4(param_1[0x17],uVar2,1,0,1,1,0,0,1);
    uVar2 = fn_0022f584((char *)&DAT_0036d3dc,0);
    fn_0036c140(param_1[0x17],uVar2);
    uVar2 = fn_0022f584((char *)&DAT_0036d3f8,0);
    fn_0036c140(param_1[0x17],uVar2);
    fn_00689bd0(param_1,0x48,0);
                    /* WARNING: Could not recover jumptable at 0x0036d33c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x124))(param_1);
    return;
  }
  if ((param_1[0x36] < 0x14) || (iVar1 = fn_00154ac8(0x93), iVar1 != 0)) {
    return;
  }
  fn_00144834(0x93,1);
  fn_00144834(0x22f,1);
  uVar2 = fn_0022f584((char *)&DAT_0036d34c,0);
  fn_0036c5f4(param_1[0x17],uVar2,1,0,1,1,0,0,1);
  uVar2 = fn_0022f584((char *)&DAT_0036d368,0);
  fn_0036c140(param_1[0x17],uVar2);
  uVar2 = fn_0022f584((char *)&DAT_0036d384,0);
  fn_0036c140(param_1[0x17],uVar2);
  uVar2 = fn_0022f584((char *)&DAT_0036d3a0,0);
  fn_0036c140(param_1[0x17],uVar2);
  fn_00689bd0(param_1,0x48,0);
                    /* WARNING: Could not recover jumptable at 0x0036d288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x124))(param_1);
  return;
}



void fn_0036cecc(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0022a2a8();
  puVar1[0x2d] = 0;
  *puVar1 = &DAT_00827ab0;
  puVar1[0x2e] = 0;
  puVar1[0x2f] = 0;
  *(undefined1 *)(puVar1 + 0x30) = 0;
  return;
}



void fn_0036cde8(int *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  
  if ((char)param_1[3] == '\x03') {
    uVar2 = param_1[0x2f];
    if (param_1[0x2e] != uVar2) {
      param_1[0x2e] = uVar2;
      if ((int)uVar2 < param_1[0x2d]) {
        iVar4 = param_1[0x2c];
        uVar1 = *(int *)(iVar4 + 0x20) - *(int *)(iVar4 + 0x1c) >> 2;
        if (uVar1 <= uVar2) {
          fn_002ff628(9,&DAT_008c7662,&DAT_008c7662,uVar2,uVar1);
        }
        puVar3 = *(undefined4 **)(*(int *)(iVar4 + 0x1c) + uVar2 * 4);
        fn_00190d50(param_1[0x1f],*puVar3);
        fn_00190d50(param_1[0x21],puVar3[1]);
        (**(code **)(*param_1 + 0x108))(param_1,puVar3[2]);
      }
      else {
        *(undefined1 *)(param_1[0x2c] + 0x18) = 1;
        fn_0042e414(param_1[0x2c]);
        fn_00689bd0(param_1,0,0);
      }
      if ((char)param_1[3] != '\x03') {
        return;
      }
    }
    *(undefined1 *)(param_1 + 0x30) = 1;
  }
  return;
}



void fn_0036cdb4(int param_1)

{
  int iVar1;
  
  if ((*(char *)(param_1 + 0xc0) != '\0') && (iVar1 = fn_006f6a38(param_1), iVar1 != 0)) {
    *(int *)(param_1 + 0xbc) = *(int *)(param_1 + 0xbc) + 1;
  }
  return;
}


