#include "003966bc_00397614.h"



void fn_00397614(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_0081f238;
  if ((int *)param_1[0x29] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x29] + 4))();
  }
  if ((int *)param_1[0x28] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x28] + 4))();
  }
  if ((int *)param_1[0x27] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x27] + 4))();
  }
  if ((int *)param_1[0x26] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x26] + 4))();
  }
  if ((int *)param_1[0x25] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x25] + 4))();
  }
  if ((int *)param_1[0x24] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x24] + 4))();
  }
  uVar1 = param_1[0x21];
  uVar2 = uVar1;
  if ((uint)param_1[0x22] < uVar1) {
    do {
      uVar2 = uVar2 + 4;
    } while (uVar2 != param_1[0x22]);
  }
  fn_001008c4(uVar1,(int)(param_1[0x23] - uVar1) >> 2,0);
  uVar1 = param_1[0x1e];
  uVar2 = uVar1;
  if ((uint)param_1[0x1f] < uVar1) {
    do {
      uVar2 = uVar2 + 4;
    } while (uVar2 != param_1[0x1f]);
  }
  fn_001008c4(uVar1,(int)(param_1[0x20] - uVar1) >> 2,0);
  if ((int *)param_1[0x1d] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x1d] + 4))();
  }
  fn_0068ad5c(param_1);
  return;
}



undefined4 * fn_003975cc(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002c4694();
  *puVar1 = &PTR_FUN_0082bc80;
  *(undefined1 *)(puVar1 + 0x2c) = 0;
  puVar1[0x2d] = 0;
  fn_00689828(puVar1,1);
  return puVar1;
}



void fn_0039748c(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = (char)param_1[0x2c];
  if (cVar1 == '\x01') {
    if (*(char *)(param_1[0x17] + 0x31) == '\x03') {
      *(undefined1 *)(param_1 + 0x2c) = 3;
    }
    else if (*(char *)(param_1[0x17] + 0x31) == '\x02') {
      *(undefined1 *)(param_1 + 0x2c) = 0;
      fn_00689828(param_1,1);
    }
  }
  else if (cVar1 == '\x02') {
    if (*(char *)(param_1[0x17] + 0x31) == '\x01') {
      if (*(char *)(param_1[0x2d] + 0x10) == '\0') {
        (**(code **)(*param_1 + 0x144))(param_1);
        (**(code **)(*param_1 + 0x140))(param_1);
        *(undefined1 *)(param_1[0x2d] + 0x14) = 2;
        (**(code **)(*param_1 + 0x13c))(param_1);
      }
      else {
        (**(code **)(*param_1 + 0x144))();
        *(undefined1 *)(param_1 + 0x2c) = 0;
        fn_00689828(param_1,1);
        (**(code **)(*param_1 + 0x124))(param_1);
      }
    }
  }
  else if (cVar1 == '\x03') {
    uVar2 = (**(code **)(*(int *)param_1[0x27] + 0x5c))();
    fn_003970bc(param_1,uVar2,DAT_0089439c,0,2,1);
  }
  fn_002c4304(param_1);
  return;
}



void fn_003973f0(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = fn_006bec78(*(undefined4 *)(param_1[0x1e] + param_2 * 4),1);
  fn_0031b77c(*(undefined4 *)(param_1[0x1e] + param_2 * 4),1);
  if ((iVar1 == 0) || (iVar1 = fn_00100b58(), iVar1 == 0)) {
    fn_003970bc(param_1,param_2,DAT_00894398,1,1,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00397450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,param_2);
  return;
}



void fn_003973a4(int *param_1)

{
  *(undefined1 *)(param_1[0x2d] + 0x14) = 1;
  (**(code **)(*param_1 + 0x13c))(param_1);
  if (*(char *)(param_1[0x2d] + 0x12) == '\0') {
    return;
  }
  fn_0068ab44(param_1,0x100094c);
  return;
}



void fn_00397354(int param_1)

{
  fn_006899f4(param_1,*(undefined4 *)(*(int *)(param_1 + 0xb4) + 0xc),0);
  fn_00689d04(param_1,0);
  *(undefined1 *)(param_1 + 0xb0) = 4;
  return;
}



void fn_00397324(undefined4 param_1,undefined4 param_2)

{
  fn_003970bc(param_1,param_2,DAT_00894398,1,1,0);
  return;
}



void fn_003970bc(int param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,
                 int param_6)

{
  undefined4 uVar1;
  uint uVar2;
  uint *puVar3;
  undefined2 *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint local_40;
  undefined4 local_3c;
  uint local_38;
  int iStack_34;
  int iStack_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  iStack_34 = param_1;
  iStack_30 = param_2;
  local_2c = param_3;
  local_28 = param_4;
  uVar1 = fn_0031b77c(*(undefined4 *)(*(int *)(param_1 + 0x78) + param_2 * 4),1);
  if (param_5 == 2) {
    if ((char)(*(int **)(param_1 + 0xb4))[4] == '\0') {
      local_3c = (**(code **)(**(int **)(param_1 + 0xb4) + 0xc))();
      uVar2 = fn_00100b58();
      puVar8 = &DAT_008f9ce8;
      puVar7 = &DAT_008f9cf4;
      if (uVar2 != 0) {
        puVar3 = &local_38;
        if (0x20 < uVar2) {
          puVar3 = &local_40;
        }
        local_40 = uVar2;
        local_38 = 0x20;
        uVar6 = *puVar3;
        if (0xfffffff1 < uVar6) {
          fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar6,0xfffffff1);
        }
        if (uVar6 < uVar2) {
          fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar2,uVar6);
        }
        if (uVar6 != 0) {
          puVar8 = (undefined4 *)fn_00100fc6((uVar6 + 8) * 2,0);
          if (puVar8 != (undefined4 *)0x0) {
            *puVar8 = 0;
            puVar8[1] = 0;
            puVar8[2] = 0;
          }
          puVar4 = (undefined2 *)((int)puVar8 + uVar2 * 2 + 0xc);
          *puVar8 = 0;
          puVar8[1] = uVar6;
          puVar8[2] = uVar2;
          if (puVar4 != (undefined2 *)0x0) {
            *puVar4 = 0;
          }
        }
        puVar7 = puVar8 + 3;
      }
      fn_00301a9c(puVar7,local_3c,uVar2 << 1);
      fn_0015b0dc(uVar1);
      fn_0015b0dc(puVar7);
      uVar1 = fn_0022f584(local_2c,0);
      if (puVar7 != &DAT_008f9cf4) {
        iVar5 = puVar7[-3];
        if ((iVar5 == -1) ||
           ((puVar7 + -3 != &DAT_008f9ce8 && (puVar7[-3] = iVar5 + -1, iVar5 == 0)))) {
          fn_001008c4(puVar7 + -3,puVar7[-2] + 8,0);
        }
      }
    }
    else {
      fn_0015b0dc(uVar1);
      uVar1 = fn_0022f584((char *)&DAT_00397304,0);
    }
  }
  else {
    fn_0015b0dc();
    uVar1 = fn_0022f584(local_2c,0);
  }
  local_40 = 0;
  local_38 = 1;
  local_3c = 0;
  fn_0036c5f4(*(undefined4 *)(param_1 + 0x5c),uVar1,1,local_28,1,1);
  if (param_6 == 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x40) = 0;
  }
  fn_00689bd0(param_1,0x48,0);
  fn_00689828(param_1,0);
  *(char *)(param_1 + 0xb0) = (char)param_5;
  return;
}



void fn_00396cc4(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  
  iVar1 = fn_0039696c();
  if (iVar1 != 0) {
    *(undefined4 *)(param_1[0x17] + 0x38) = 0x100094d;
    local_54 = 1;
    uStack_50 = 0;
    local_4c = 0;
    local_48 = 1;
    local_58 = 1;
    fn_0036c5f4(param_1[0x17],iVar1,1,0);
    fn_00689bd0(param_1,0x48,0);
    return;
  }
  iVar1 = fn_006ba220(param_1,param_2);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00396d64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x110))(param_1);
    return;
  }
  switch(param_2) {
  case 0:
    fn_006899f4(param_1,0x70,0);
    break;
  case 1:
    fn_006899f4(param_1,0x6d,0);
    break;
  case 2:
    fn_006899f4(param_1,0x72,0);
    break;
  case 3:
    fn_006899f4(param_1,0x6f,0);
    break;
  case 4:
    fn_003f8108(&local_34);
    local_58 = local_34;
    local_54 = uStack_30;
    uStack_50 = uStack_2c;
    local_4c = uStack_28;
    local_48 = uStack_24;
    uStack_44 = uStack_20;
    uStack_40 = uStack_1c;
    uStack_3c = uStack_18;
    local_38 = local_14;
    fn_003f820c(param_1[0x36],&local_58,0x6c);
    fn_00689878(param_1,0x73);
  }
  *(undefined4 *)(param_1[0x34] + 0xc) = param_2;
  fn_0068ab44(param_1,0x100094b);
  return;
}



void fn_003966bc(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_0081f238;
  if ((int *)param_1[0x29] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x29] + 4))();
  }
  if ((int *)param_1[0x28] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x28] + 4))();
  }
  if ((int *)param_1[0x27] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x27] + 4))();
  }
  if ((int *)param_1[0x26] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x26] + 4))();
  }
  if ((int *)param_1[0x25] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x25] + 4))();
  }
  if ((int *)param_1[0x24] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x24] + 4))();
  }
  uVar1 = param_1[0x21];
  uVar2 = uVar1;
  if ((uint)param_1[0x22] < uVar1) {
    do {
      uVar2 = uVar2 + 4;
    } while (uVar2 != param_1[0x22]);
  }
  fn_001008c4(uVar1,(int)(param_1[0x23] - uVar1) >> 2,0);
  uVar1 = param_1[0x1e];
  uVar2 = uVar1;
  if ((uint)param_1[0x1f] < uVar1) {
    do {
      uVar2 = uVar2 + 4;
    } while (uVar2 != param_1[0x1f]);
  }
  fn_001008c4(uVar1,(int)(param_1[0x20] - uVar1) >> 2,0);
  if ((int *)param_1[0x1d] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x1d] + 4))();
  }
  fn_0068ad5c(param_1);
  return;
}


