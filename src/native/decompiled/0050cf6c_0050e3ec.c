#include "0050cf6c_0050e3ec.h"



void fn_0050e3ec(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0051cf84();
  puVar1[5] = 15000;
  *puVar1 = &DAT_00857094;
  return;
}



int fn_0050e210(int param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined1 auStack_638 [1432];
  undefined1 *local_a0;
  undefined1 auStack_9c [4];
  undefined1 local_98;
  undefined1 local_94 [24];
  int local_7c;
  undefined4 local_78;
  undefined1 local_74;
  undefined1 local_70 [16];
  undefined4 local_60;
  undefined1 local_5c;
  int local_44;
  undefined4 local_40 [6];
  int local_28;
  
  local_28 = param_1;
  fn_0014f590(local_70);
  local_40[0] = *(undefined4 *)(local_28 + 0xc);
  puVar3 = (undefined4 *)fn_0050953c(*(undefined4 *)(local_28 + 0x10),local_40);
  iVar4 = (**(code **)(*(int *)*puVar3 + 0x2c))();
  local_44 = local_28;
  while (local_28 = local_44, iVar4 == 0) {
    puVar5 = (undefined4 *)fn_006d9a38(puVar3);
    iVar4 = puVar5[1];
    uVar8 = *puVar5;
    uVar1 = *(undefined1 *)(iVar4 + 1);
    uVar6 = fn_006db024();
    uVar2 = *(undefined1 *)(puVar5 + 7);
    local_7c = iVar4 + 0x14;
    local_78 = uVar8;
    local_74 = uVar1;
    fn_004ed810(local_70,puVar5 + 3);
    local_60 = uVar6;
    local_5c = uVar2;
    iVar4 = fn_0050d218(local_28,&local_7c);
    if (iVar4 < 0) {
      return iVar4;
    }
    (**(code **)(*(int *)*puVar3 + 0x30))();
    iVar4 = (**(code **)(*(int *)*puVar3 + 0x2c))();
    local_44 = local_28;
  }
  fn_0014f590(local_94);
  local_a0 = auStack_638;
  uVar7 = 0;
LAB_0050e338:
  do {
    if ((0x3fefffff < DAT_008c06a4 - 0x100000U) ||
       (iVar4 = fn_00518c0c(), 0x3fefffff < iVar4 - 0x100000U)) {
      iVar4 = 0;
    }
    iVar4 = fn_00519f34(iVar4,uVar7 & 0xff,0x596,auStack_638,auStack_9c,local_94);
    if (-1 < iVar4) {
      local_98 = (undefined1)uVar7;
      iVar4 = fn_0050d218(local_44,&local_a0);
      if (-1 < iVar4) goto LAB_0050e338;
    }
    uVar7 = uVar7 + 1;
    if (0xb < uVar7) {
      return 0;
    }
  } while( true );
}



void fn_0050e178(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c [2];
  
  local_24 = *(undefined4 *)(param_1 + 0xc);
  iVar1 = (**(code **)(**(int **)(param_1 + 0x10) + 0x18))
                    (*(int **)(param_1 + 0x10),&local_24,param_3,8,0);
  if (iVar1 - 0x100000U < 0x3ff00000) {
    local_20 = 5;
    local_1c[0] = 0;
    fn_004ed514(local_1c,param_2);
    fn_001694d4(iVar1,&local_20);
    fn_0050a490(*(undefined4 *)(param_1 + 0x10));
  }
  return;
}



void fn_0050e0f0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c [2];
  
  local_24 = *(undefined4 *)(param_1 + 0xc);
  iVar1 = (**(code **)(**(int **)(param_1 + 0x10) + 0x10))
                    (*(int **)(param_1 + 0x10),&local_24,param_3,8,0);
  if (iVar1 - 0x100000U < 0x3ff00000) {
    local_20 = 5;
    local_1c[0] = 0;
    fn_004ed514(local_1c,param_2);
    fn_001694d4(iVar1,&local_20);
    fn_0050a490(*(undefined4 *)(param_1 + 0x10));
  }
  return;
}



void fn_0050e05c(int param_1,undefined4 param_2,undefined1 param_3)

{
  int iVar1;
  undefined4 auStack_14 [2];
  
  auStack_14[0] = *(undefined4 *)(param_1 + 0xc);
  iVar1 = (**(code **)(**(int **)(param_1 + 0x10) + 0x18))
                    (*(int **)(param_1 + 0x10),auStack_14,param_2,4,0);
  if (iVar1 - 0x100000U < 0x3ff00000) {
    *(undefined1 *)(*(int *)(iVar1 + 0x1c) + 0x14) = 2;
    *(undefined1 *)(*(int *)(iVar1 + 0x1c) + 0x15) = param_3;
    *(undefined1 *)(*(int *)(iVar1 + 0x1c) + 0x16) = 5;
    *(undefined1 *)(*(int *)(iVar1 + 0x1c) + 0x17) = 0;
    fn_0050a490(*(undefined4 *)(param_1 + 0x10));
  }
  return;
}



void fn_0050d40c(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 auStack_14 [2];
  
  auStack_14[0] = *(undefined4 *)(param_1 + 0xc);
  iVar1 = (**(code **)(**(int **)(param_1 + 0x10) + 0x18))
                    (*(int **)(param_1 + 0x10),auStack_14,param_2,1,0);
  if (iVar1 - 0x100000U < 0x3ff00000) {
    *(undefined1 *)(*(int *)(iVar1 + 0x1c) + 0x14) = 3;
    fn_0050a490(*(undefined4 *)(param_1 + 0x10));
  }
  return;
}



void fn_0050d3a4(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uStack_14;
  
  uStack_14 = *(undefined4 *)(param_1 + 0xc);
  iVar1 = (**(code **)(**(int **)(param_1 + 0x10) + 0x10))
                    (*(int **)(param_1 + 0x10),&uStack_14,param_2,1,param_3);
  if (iVar1 - 0x100000U < 0x3ff00000) {
    *(undefined1 *)(*(int *)(iVar1 + 0x1c) + 0x14) = 3;
    fn_0050a490(*(undefined4 *)(param_1 + 0x10));
  }
  return;
}



undefined4 fn_0050d218(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2[1] == 0) {
switchD_0050d248_caseD_0:
    return 0xd9614822;
  }
  switch(*(undefined1 *)*param_2) {
  default:
    goto switchD_0050d248_caseD_0;
  case 1:
    uVar2 = 0;
    goto LAB_0050d370;
  case 2:
    uVar2 = 0;
    goto LAB_0050d37c;
  case 3:
    fn_0050d470();
    break;
  case 4:
    if ((*(int *)(DAT_008bf4cc + 0xa4) - 0x100000U < 0x3ff00000) &&
       (((iVar1 = fn_0050b080(DAT_008bf4cc,*(undefined1 *)(param_2 + 2)), iVar1 != 0 ||
         (iVar1 = fn_0050b144(DAT_008bf4cc,param_2 + 3), iVar1 != 0)) &&
        (*(char *)(*(int *)(iVar1 + 0x30) + 0x5c) != '\0')))) {
      *(undefined1 *)(*(int *)(iVar1 + 0x30) + 0x5c) = 0;
    }
    break;
  case 5:
    if (*(int *)(DAT_008bf4cc + 0xa4) - 0x100000U < 0x3ff00000) {
      uVar2 = fn_004edb98((undefined1 *)*param_2 + 4);
      iVar1 = fn_0050b144(DAT_008bf4cc,param_2 + 3);
      if (iVar1 - 0x100000U < 0x3ff00000) {
        fn_005196a0(DAT_008c0690,uVar2);
        if (0xb < *(byte *)(iVar1 + 0x14)) {
          uVar2 = *(undefined4 *)(DAT_008bf4d4 + 0xc);
          *(undefined4 *)(iVar1 + 0x60) = *(undefined4 *)(DAT_008bf4d4 + 8);
          *(undefined4 *)(iVar1 + 100) = uVar2;
        }
      }
      else {
        fn_005196a0(DAT_008c0690,uVar2);
      }
    }
    break;
  case 6:
    uVar2 = 1;
LAB_0050d370:
    fn_0050d620(param_1,param_2,uVar2);
    break;
  case 7:
    uVar2 = 1;
LAB_0050d37c:
    fn_0050de1c(param_1,param_2,uVar2);
  }
  return 0;
}



int fn_0050d1a0(int param_1,int param_2)

{
  if (param_1 != param_2) {
    fn_004ed810(param_1 + 4,param_2 + 4);
    *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 0x20);
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
    *(undefined1 *)(param_1 + 0x21) = *(undefined1 *)(param_2 + 0x21);
    *(undefined1 *)(param_1 + 0x22) = *(undefined1 *)(param_2 + 0x22);
    *(undefined1 *)(param_1 + 0x25) = *(undefined1 *)(param_2 + 0x25);
    *(undefined1 *)(param_1 + 0x23) = *(undefined1 *)(param_2 + 0x23);
    *(undefined1 *)(param_1 + 0x24) = *(undefined1 *)(param_2 + 0x24);
    *(undefined1 *)(param_1 + 0x26) = *(undefined1 *)(param_2 + 0x26);
  }
  return param_1;
}



undefined4 * fn_0050d178(undefined4 *param_1)

{
  *param_1 = &DAT_00857074;
  param_1[1] = &DAT_00856c94;
  return param_1;
}



void fn_0050d068(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 in_lr;
  
  fn_0050d090(param_1 + 4,param_2 + 4);
  fn_004ed810(param_1 + 0x30,param_2 + 0x30,param_3,param_4,unaff_r4,unaff_r5,unaff_r6,in_lr);
  *(undefined1 *)(param_1 + 0x4c) = *(undefined1 *)(param_2 + 0x4c);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  *(undefined1 *)(param_1 + 0x4d) = *(undefined1 *)(param_2 + 0x4d);
  *(undefined1 *)(param_1 + 0x4e) = *(undefined1 *)(param_2 + 0x4e);
  *(undefined1 *)(param_1 + 0x51) = *(undefined1 *)(param_2 + 0x51);
  *(undefined1 *)(param_1 + 0x4f) = *(undefined1 *)(param_2 + 0x4f);
  *(undefined1 *)(param_1 + 0x50) = *(undefined1 *)(param_2 + 0x50);
  *(undefined1 *)(param_1 + 0x52) = *(undefined1 *)(param_2 + 0x52);
  return;
}



void fn_0050d090(int param_1,int param_2)

{
  fn_004ed810(param_1 + 4,param_2 + 4);
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined1 *)(param_1 + 0x21) = *(undefined1 *)(param_2 + 0x21);
  *(undefined1 *)(param_1 + 0x22) = *(undefined1 *)(param_2 + 0x22);
  *(undefined1 *)(param_1 + 0x25) = *(undefined1 *)(param_2 + 0x25);
  *(undefined1 *)(param_1 + 0x23) = *(undefined1 *)(param_2 + 0x23);
  *(undefined1 *)(param_1 + 0x24) = *(undefined1 *)(param_2 + 0x24);
  *(undefined1 *)(param_1 + 0x26) = *(undefined1 *)(param_2 + 0x26);
  return;
}



void fn_0050d060(int param_1)

{
  fn_004ed810(param_1 + 4);
  return;
}



int fn_0050cf6c(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 - 0x100000U < 0x3ff00000) {
    iVar1 = fn_004ed5c0(param_1 + 4);
    if (-1 < iVar1) {
      uVar2 = fn_004edb98(param_2 + 8);
      *(undefined4 *)(param_1 + 0x14) = uVar2;
      uVar2 = fn_004edb98(param_2 + 0xc);
      *(undefined4 *)(param_1 + 0x18) = uVar2;
      uVar2 = fn_004edb98(param_2 + 0x10);
      *(undefined4 *)(param_1 + 0x1c) = uVar2;
      *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 0x14);
      *(undefined1 *)(param_1 + 0x21) = *(undefined1 *)(param_2 + 0x15);
      *(undefined1 *)(param_1 + 0x22) = *(undefined1 *)(param_2 + 0x16);
      *(undefined1 *)(param_1 + 0x23) = *(undefined1 *)(param_2 + 0x17);
      *(undefined1 *)(param_1 + 0x24) = *(undefined1 *)(param_2 + 0x18);
      *(undefined1 *)(param_1 + 0x25) = *(undefined1 *)(param_2 + 0x19);
      *(undefined1 *)(param_1 + 0x26) = *(undefined1 *)(param_2 + 0x1a);
      iVar1 = 0;
    }
  }
  else {
    iVar1 = -0x1f1eb7da;
  }
  return iVar1;
}


