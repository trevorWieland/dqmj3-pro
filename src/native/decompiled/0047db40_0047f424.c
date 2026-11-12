#include "0047db40_0047f424.h"



/* WARNING: Removing unreachable block (ram,0x0047f6f0) */
/* WARNING: Removing unreachable block (ram,0x0047f6f8) */
/* WARNING: Removing unreachable block (ram,0x0047f710) */
/* WARNING: Removing unreachable block (ram,0x0047f728) */
/* WARNING: Removing unreachable block (ram,0x0047f71c) */
/* WARNING: Removing unreachable block (ram,0x0047f72c) */

undefined4 fn_0047f424(int *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 extraout_r1;
  int *piVar3;
  uint *puVar4;
  undefined4 in_s16;
  undefined4 in_s17;
  undefined4 in_s18;
  undefined4 in_s19;
  undefined4 in_s20;
  uint uVar5;
  undefined *local_c8;
  int local_c4;
  undefined1 auStack_bc [88];
  char local_64;
  undefined1 local_63;
  undefined *local_60;
  wchar16 *local_5c;
  undefined *local_58;
  undefined4 local_54;
  uint local_50;
  int *local_2c;
  int iStack_28;
  
  local_2c = param_1;
  iStack_28 = param_2;
  puVar1 = (undefined4 *)fn_0015ece0(0x20);
  if (puVar1 == (undefined4 *)0x0) {
    puVar4 = (uint *)0x0;
  }
  else {
    *puVar1 = 0x18;
    puVar1[1] = 1;
    puVar4 = (uint *)fn_00101a1c(puVar1 + 2,&LAB_0045fb2c,0x18,1);
  }
  local_60 = &DAT_008528bc;
  local_c8 = (undefined *)0x0;
  fn_0052c2e8(&local_c8);
  *puVar4 = (uint)local_c8 & 0xff000000 | ((uint)local_c8 >> 0x10 & 0xff) << 0x10 |
            ((uint)local_c8 >> 8 & 0xff) << 8 | (uint)local_c8 & 0xff;
  puVar4[2] = 0xffffff;
  puVar4[1] = 0xffffffff;
  fn_0045f9e4(puVar4,extraout_r1,1,0);
  if ((puVar4[3] & 4) == 0) {
    local_5c = L"prudp:/";
    local_c8 = &DAT_008527ec;
    iVar2 = fn_0014f3a4(auStack_bc);
    iVar2 = fn_0014f308(iVar2 + 0x1c);
    iVar2 = fn_0014f308(iVar2 + 0x1c);
    *(undefined4 *)(iVar2 + 0x1c) = 0;
    *(undefined1 *)(iVar2 + 0x20) = 0;
    *(undefined1 *)(iVar2 + 0x21) = 1;
    *(undefined1 *)(iVar2 + 0x22) = 0;
    puVar1 = (undefined4 *)fn_0015ece0(0x20);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_60;
      puVar1[1] = 0;
      puVar1[2] = 0;
      *(undefined1 *)((int)puVar1 + 5) = 2;
    }
    *(undefined4 **)(iVar2 + -0x40) = puVar1;
    fn_0015e9d8(iVar2 + -0x44,local_5c);
    uVar5 = *puVar4;
    if (local_64 == '\0') {
      fn_0014ea80(&local_c8);
    }
    *(undefined4 *)(local_c4 + 4) = 0x200;
    *(uint *)(local_c4 + 8) = uVar5;
    *(undefined4 *)(local_c4 + 0xc) = in_s16;
    *(undefined4 *)(local_c4 + 0x10) = in_s17;
    *(undefined4 *)(local_c4 + 0x14) = in_s18;
    *(undefined4 *)(local_c4 + 0x18) = in_s19;
    *(undefined4 *)(local_c4 + 0x1c) = in_s20;
    local_63 = 0;
    piVar3 = *(int **)(param_2 + 4);
    iVar2 = *(int *)(param_2 + 0x10);
    if (piVar3 == (int *)0x0) {
      if (*(int *)(param_2 + 8) == *(int *)(param_2 + 0xc)) {
        fn_0078638c(param_2,0);
      }
      piVar3 = *(int **)(param_2 + 8);
      *(int **)(param_2 + 8) = piVar3 + 0x1c;
    }
    else {
      *(int *)(param_2 + 4) = *piVar3;
    }
    if (piVar3 + 2 != (int *)0x0) {
      fn_0013cd7c(piVar3 + 2,&local_c8);
    }
    *piVar3 = iVar2;
    piVar3[1] = *(int *)(iVar2 + 4);
    **(undefined4 **)(iVar2 + 4) = piVar3;
    *(int **)(iVar2 + 4) = piVar3;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    fn_0013ce98(&local_c8);
  }
  if (*(int *)(param_2 + 0x14) == 0) {
    fn_00455c50(&local_c8,L"prudp:/");
    local_58 = local_60;
    local_54 = 0x200;
    local_50 = *puVar4;
    fn_00455394(&local_c8,&local_58);
    fn_00786404(param_2,&local_c8);
    fn_0013ce98(&local_c8);
  }
  (**(code **)(*local_2c + 0x28))(local_2c,puVar4);
  if ((puVar4 != (uint *)0x0) && (iVar2 = fn_00100654(puVar4,&LAB_0045fb6c), iVar2 != 0)) {
    if (*(code **)(iVar2 + -8) == (code *)0x0) {
      fn_0030233c();
    }
    else {
      (**(code **)(iVar2 + -8))();
    }
  }
  return 1;
}



void fn_0047deec(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_r1;
  
  fn_00169f1c(param_3,*(undefined4 *)(param_1 + 8));
  iVar1 = *(int *)(param_1 + 4);
  iVar2 = fn_0015ecdc(0xc);
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = fn_0014ecf0();
  }
  fn_00481240(param_2,uVar3,param_4,extraout_r1 + iVar1,(int)param_5,
               (int)((ulonglong)param_5 >> 0x20),2);
  return;
}



void fn_0047de9c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = *(undefined4 *)(param_1 + 4);
  iVar1 = fn_0015ecdc(0xc);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = fn_0014ecf0();
  }
  fn_00481240(param_2,uVar2,param_3,uVar3,param_4,0,2);
  return;
}



int fn_0047db40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                undefined1 param_9,int param_10,int param_11,int param_12,undefined4 param_13,
                undefined4 param_14)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined1 auStack_5c [4];
  undefined *local_58;
  code *local_54;
  undefined4 uStack_50;
  undefined *local_4c;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  
  uStack_34 = param_1;
  uStack_30 = param_2;
  uStack_2c = param_3;
  local_28 = param_4;
  puVar1 = (undefined4 *)fn_00479cd8(param_1,2,auStack_5c);
  *puVar1 = &PTR_FUN_00853638;
  puVar1[0x1a] = param_2;
  puVar1[0x1b] = param_3;
  iVar2 = fn_004b637c(puVar1 + 0x1c,local_28);
  *(undefined4 *)(iVar2 + 0xc) = param_6;
  iVar2 = fn_004b637c(iVar2 + 0x10,param_7);
  *(undefined1 *)(iVar2 + 8) = param_9;
  *(undefined4 *)(iVar2 + 0x10) = 0;
  *(undefined **)(iVar2 + 0xc) = &DAT_008533c0;
  *(undefined4 *)(iVar2 + 0x18) = 0;
  *(undefined **)(iVar2 + 0x14) = &DAT_008533c0;
  *(undefined4 *)(iVar2 + 0x20) = 0;
  *(undefined **)(iVar2 + 0x1c) = &DAT_008533c0;
  *(undefined4 *)(iVar2 + 0x24) = param_13;
  *(undefined4 *)(iVar2 + 0x28) = param_14;
  iVar2 = fn_004b3294(iVar2 + 0x2c);
  *(undefined4 *)(iVar2 + 0x18) = param_8;
  *(undefined4 *)(iVar2 + 0x1c) = 0;
  iVar2 = fn_004565fc(iVar2 + 0x24);
  iVar2 = fn_0048cc04(iVar2 + 0x60,0);
  *(undefined4 *)(iVar2 + 0x78) = 0;
  piVar3 = (int *)fn_00156234(param_5,iVar2 + -0xb8);
  if (param_10 != 0) {
    piVar3 = *(int **)(param_10 + 4);
  }
  if (param_10 != 0 && piVar3 != (int *)0x0) {
    iVar4 = (**(code **)(*piVar3 + 8))();
    piVar5 = *(int **)(iVar2 + -0xa0);
    piVar3 = (int *)0x0;
    if (piVar5 != (int *)0x0) {
      piVar3 = (int *)(**(code **)(*piVar5 + 4))();
    }
    *(int *)(iVar2 + -0xa0) = iVar4;
  }
  if (param_11 != 0) {
    piVar3 = *(int **)(param_11 + 4);
  }
  if (param_11 != 0 && piVar3 != (int *)0x0) {
    iVar4 = (**(code **)(*piVar3 + 8))();
    piVar5 = *(int **)(iVar2 + -0x98);
    piVar3 = (int *)0x0;
    if (piVar5 != (int *)0x0) {
      piVar3 = (int *)(**(code **)(*piVar5 + 4))();
    }
    *(int *)(iVar2 + -0x98) = iVar4;
  }
  if (param_12 != 0) {
    piVar3 = *(int **)(param_12 + 4);
  }
  if (param_12 == 0 || piVar3 == (int *)0x0) {
    iVar4 = fn_0015ecdc(8);
    uVar6 = 0;
    if (iVar4 != 0) {
      uVar6 = fn_004b4148();
    }
    piVar3 = *(int **)(iVar2 + -0x90);
  }
  else {
    uVar6 = (**(code **)(*piVar3 + 8))();
    piVar3 = *(int **)(iVar2 + -0x90);
  }
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))();
  }
  *(undefined4 *)(iVar2 + -0x90) = uVar6;
  local_54 = fn_0047d0f8;
  uStack_50 = 0;
  local_4c = &DAT_0047dd54;
  local_58 = &DAT_00853500;
  fn_00479c98(iVar2 + -0x130,&local_58);
  return iVar2 + -0x130;
}


