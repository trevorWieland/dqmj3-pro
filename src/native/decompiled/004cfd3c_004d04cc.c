#include "004cfd3c_004d04cc.h"



undefined4 fn_004d04cc(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  bool bVar4;
  
  iVar1 = *(int *)(param_1 + 0xf8);
  uVar2 = 0;
  iVar3 = *(int *)(iVar1 + 4);
  if (iVar1 != param_1 + 0xf4) {
    do {
      if (*(int *)(iVar1 + 0x28) == param_2) {
        (*(code *)**(undefined4 **)(iVar1 + 8))();
        fn_004f0c1c(param_1 + 0xf0,iVar1);
        fn_004f0ab4(param_1 + 0x100,param_1 + 0x104,*(int *)(param_1 + 0x110) + iVar1);
        uVar2 = 1;
      }
      bVar4 = iVar3 != param_1 + 0xf4;
      iVar1 = iVar3;
      iVar3 = *(int *)(iVar3 + 4);
    } while (bVar4);
  }
  iVar1 = *(int *)(param_1 + 0xc4);
  iVar3 = *(int *)(iVar1 + 4);
  if (iVar1 != param_1 + 0xc0) {
    do {
      if (*(int *)(iVar1 + 0x28) == param_2) {
        (*(code *)**(undefined4 **)(iVar1 + 8))();
        fn_004f0c1c(param_1 + 0xbc,iVar1);
        fn_004f0ab4(param_1 + 0xcc,param_1 + 0xd0,*(int *)(param_1 + 0xdc) + iVar1);
        uVar2 = 1;
      }
      bVar4 = iVar3 != param_1 + 0xc0;
      iVar1 = iVar3;
      iVar3 = *(int *)(iVar3 + 4);
    } while (bVar4);
  }
  return uVar2;
}



int fn_004d0490(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xf8);
  if (iVar1 != param_1 + 0xf4) {
    do {
      if (*(int *)(iVar1 + 0x28) == param_2) {
        return iVar1 + 8;
      }
      iVar1 = *(int *)(iVar1 + 4);
    } while (iVar1 != param_1 + 0xf4);
  }
  return 0;
}



void fn_004d047c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x18) = param_2;
  DAT_008ed914 = param_2;
  return;
}



undefined4 fn_004d03bc(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_004c6fb8(param_1 + 0x84,*(undefined4 *)(param_2 + 0x1c));
  if ((iVar1 == 0) || (iVar2 = fn_006da264(iVar1 + 4,param_2), iVar2 != 0)) {
    return 0;
  }
  fn_0050d1a0(param_3,iVar1 + 4);
  return 1;
}



void fn_004d02e0(int param_1,int *param_2)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  code *UNRECOVERED_JUMPTABLE;
  int iVar5;
  uint uVar6;
  bool bVar7;
  uint local_20;
  int iStack_1c;
  
  iVar5 = *(int *)(param_1 + 0xc4);
  do {
    if (iVar5 == param_1 + 0xc0) {
      return;
    }
    iVar1 = fn_004d4edc(iVar5 + 0xc);
    if (iVar1 != 0) {
      if (*(int *)(iVar5 + 0x14) == param_2[3]) {
        puVar2 = (uint *)fn_004f0ce8();
        uVar4 = *puVar2;
        uVar3 = puVar2[1];
        uVar6 = (uint)((ulonglong)uVar4 * 1000);
        local_20 = 0;
        iStack_1c = 0;
        fn_004f01f4(&local_20);
        bVar7 = CARRY4(local_20,uVar6);
        local_20 = local_20 + uVar6;
        iStack_1c = iStack_1c + uVar3 * 1000 + (int)((ulonglong)uVar4 * 1000 >> 0x20) + (uint)bVar7;
        *(uint *)(iVar5 + 0x90) = local_20;
        *(int *)(iVar5 + 0x94) = iStack_1c;
        (**(code **)(*param_2 + 8))(param_2,*(code **)(*param_2 + 8),0x8000,0);
        UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(iVar5 + 8) + 8);
                    /* WARNING: Could not recover jumptable at 0x004d03a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(iVar5 + 8,UNRECOVERED_JUMPTABLE,0x8000,0);
        return;
      }
    }
    iVar5 = *(int *)(iVar5 + 4);
  } while( true );
}



void fn_004d02a0(int param_1)

{
  undefined4 local_10;
  undefined4 uStack_c;
  
  *(undefined1 *)(param_1 + 0x4f4) = 1;
  local_10 = 0;
  uStack_c = 0;
  fn_004f01f4(&local_10);
  *(undefined4 *)(param_1 + 0x4f8) = local_10;
  *(undefined4 *)(param_1 + 0x4fc) = uStack_c;
  return;
}



undefined1 * fn_004d0110(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 extraout_r1;
  undefined1 *puVar2;
  undefined1 auStack_20 [4];
  undefined2 local_1c;
  
  puVar2 = &DAT_e0a14827;
  iVar1 = *(int *)(DAT_008bf4f4 + 0x20);
  if (iVar1 + *(int *)(iVar1 + 0x7c) * 8 + 0x80 != iVar1 + 0x80) {
    fn_004ed440(auStack_20);
    local_1c = 0x8237;
    fn_004ed700(param_1 + 0x48,auStack_20);
    *(undefined1 *)(param_1 + 100) = 3;
    iVar1 = fn_006d6d58(param_1 + 0x4c,extraout_r1,0x200,0);
    if (iVar1 == 0) {
      return &DAT_e0a14827;
    }
    *(undefined1 *)(param_1 + 0x14) = 1;
    *(undefined1 *)(param_1 + 0x4c0) = 0;
    *(undefined1 *)(param_1 + 0x4c1) = 0;
    *(undefined1 *)(param_1 + 0x4c2) = 0;
    *(undefined1 *)(param_1 + 0x4c3) = 0;
    *(undefined1 *)(param_1 + 0x4c4) = 0;
    *(undefined1 *)(param_1 + 0x4c5) = 0;
    *(undefined4 *)(param_1 + 0x4c8) = 0;
    *(undefined1 *)(param_1 + 0x4f4) = 0;
    *(undefined4 *)(param_1 + 0x500) = param_2;
    puVar2 = (undefined1 *)0x0;
  }
  return puVar2;
}



void fn_004d00f4(int param_1)

{
  if (*(int **)(param_1 + 0x6c) == (int *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004d0108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x6c) + 0x14))();
  return;
}



void fn_004cfd3c(int param_1,int *param_2)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  undefined4 *puVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  bool bVar12;
  uint local_170;
  uint local_16c;
  undefined4 uStack_168;
  undefined1 auStack_148 [8];
  undefined1 auStack_140 [8];
  undefined4 local_138;
  undefined2 local_134;
  undefined *local_130;
  undefined1 auStack_12c [60];
  undefined1 local_f0;
  undefined *local_d0;
  undefined1 auStack_cc [40];
  undefined1 auStack_a4 [108];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  int local_2c;
  
  if ((*(char *)(param_1 + 0x14) != '\0') && (*(char *)(param_1 + 0x4c5) == '\0')) {
    iVar3 = fn_006d6d58(param_2 + 2);
    if (iVar3 != 0) {
      bVar12 = false;
      if (*(char *)((int)param_2 + 0x26) == '\0') {
        iVar3 = fn_004d4edc(param_1 + 0x1c);
        cVar1 = '\0';
        if (iVar3 != 0) {
          cVar1 = *(char *)(param_1 + 0x4c0);
        }
        if ((iVar3 != 0 && cVar1 != '\0') &&
           (bVar12 = *(int *)(param_1 + 0x4c8) == param_2[7], bVar12)) {
          *(undefined1 *)(param_1 + 0x4c0) = 0;
        }
        iVar3 = fn_004cc270(param_1 + 0x120,param_2);
        if (iVar3 != 0) {
          local_170 = 0;
          local_16c = 0;
          fn_004f01f4(&local_170);
          iVar9 = local_170 - *(uint *)(iVar3 + 0x30);
          iVar10 = local_16c -
                   (*(int *)(iVar3 + 0x34) + (uint)(local_170 < *(uint *)(iVar3 + 0x30)));
          puVar4 = (undefined4 *)fn_004f0ce8();
          uVar11 = fn_0011c134(iVar9,iVar10,*puVar4,puVar4[1]);
          *(undefined4 *)(iVar3 + 0x38) = uVar11;
        }
      }
      else {
        fn_004caddc(&local_d0,param_2);
        fn_004ceb44(param_1,&local_d0);
        iVar3 = fn_004cc270(param_1 + 0x120,param_2);
        if (iVar3 == 0) {
          iVar3 = fn_0013d5c4(&local_170);
          *(undefined4 *)(iVar3 + 0x28) = 0;
          *(undefined4 *)(iVar3 + 0x2c) = 0;
          *(undefined4 *)(iVar3 + 0x30) = 0;
          *(undefined4 *)(iVar3 + 0x34) = 0;
          fn_0050d1a0(&local_170,param_2);
          fn_004f01f4(auStack_148);
          fn_004f01f4(auStack_140);
          local_138 = 0;
          local_134 = 0;
          fn_004cc15c(param_1 + 0x120,&local_170);
          fn_0050d178(&local_170);
        }
        else {
          fn_004f01f4(iVar3 + 0x28);
          fn_004f01f4(iVar3 + 0x30);
          *(undefined4 *)(iVar3 + 0x38) = 0;
        }
        local_d0 = &DAT_00855fc4;
        fn_0051811c(auStack_a4);
        fn_0050d178(auStack_cc);
      }
      iVar3 = fn_004d4edc(param_2);
      uVar6 = DAT_008c362c;
      if (iVar3 == 0) {
        uVar11 = 0;
      }
      else {
        uVar11 = 2;
      }
      puVar5 = (uint *)fn_004f0ce8();
      lVar2 = (ulonglong)uVar6 * (ulonglong)*puVar5;
      local_30 = (undefined4)lVar2;
      local_2c = *puVar5 * ((int)uVar6 >> 0x1f) +
                 puVar5[1] * uVar6 + (int)((ulonglong)lVar2 >> 0x20);
      local_38 = 0;
      uStack_34 = 0;
      local_16c = (uint)DAT_008c3628;
      local_170 = 0;
      uStack_168 = uVar11;
      fn_004d4d14(&local_130,param_2,&local_38,&local_30);
      if (bVar12) {
        puVar5 = (uint *)fn_004f0ce8();
        uVar7 = *puVar5;
        uVar6 = puVar5[1];
        uVar8 = (uint)((ulonglong)uVar7 * 5000);
        local_170 = 0;
        local_16c = 0;
        fn_004f01f4(&local_170);
        bVar12 = CARRY4(local_170,uVar8);
        local_170 = local_170 + uVar8;
        local_16c = local_16c + uVar6 * 5000 + (int)((ulonglong)uVar7 * 5000 >> 0x20) + (uint)bVar12
        ;
        *(uint *)(param_1 + 0x4b8) = local_170;
        *(uint *)(param_1 + 0x4bc) = local_16c;
        local_f0 = 1;
      }
      fn_004c7438(param_1 + 0x84,&local_130);
      local_130 = &DAT_00856320;
      fn_0050d178(auStack_12c);
      return;
    }
    (**(code **)(*param_2 + 0x14))(param_2,*(code **)(*param_2 + 0x14),1,0);
  }
  return;
}


