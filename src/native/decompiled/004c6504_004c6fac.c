#include "004c6504_004c6fac.h"



int fn_004c6fac(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x90);
  while( true ) {
    if (iVar1 == param_1 + 0x8c) {
      return 0;
    }
    if (*(int *)(iVar1 + 0x28) == *(int *)(param_2 + 0x1c)) break;
    iVar1 = *(int *)(iVar1 + 4);
  }
  return iVar1 + 8;
}



void fn_004c6ebc(int param_1,int *param_2,int *param_3,undefined1 param_4)

{
  int iVar1;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  iVar1 = *(int *)(param_1 + 0xc);
  do {
    if (iVar1 == param_1 + 8) {
      iVar1 = 0;
LAB_004c6f14:
      if (iVar1 == 0) {
        (**(code **)(*param_2 + 0x14))(param_2,*(code **)(*param_2 + 0x14),0x8000,0);
        return;
      }
      fn_004d4b70(iVar1,param_2);
      fn_004c72c4(param_1,iVar1 + 4);
      local_20 = 0;
      uStack_1c = 0;
      fn_004f01f4(&local_20);
      if (*param_3 != 0 || param_3[1] != 0) {
        fn_004d4cdc(iVar1,&local_20,param_3);
      }
      *(undefined4 *)(iVar1 + 0x30) = local_20;
      *(undefined4 *)(iVar1 + 0x34) = uStack_1c;
      *(undefined1 *)(iVar1 + 0x48) = param_4;
      fn_004c6fe8(param_1,param_2[7]);
      return;
    }
    if ((*(int *)(iVar1 + 0x14) == param_2[2]) && (*(int *)(iVar1 + 0x28) == param_2[7])) {
      iVar1 = iVar1 + 8;
      goto LAB_004c6f14;
    }
    iVar1 = *(int *)(iVar1 + 4);
  } while( true );
}



undefined4 fn_004c6d78(int param_1,int *param_2,undefined4 param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint *puVar5;
  undefined *local_90;
  undefined1 auStack_8c [92];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  int local_24;
  
  local_30 = 0;
  uStack_2c = 0;
  fn_004f01f4(&local_30);
  iVar3 = *(int *)(param_1 + 0xc);
  do {
    if (iVar3 == param_1 + 8) {
      iVar3 = 0;
LAB_004c6dd8:
      if (iVar3 == 0) {
        (**(code **)(*param_2 + 0x14))(param_2,*(code **)(*param_2 + 0x14),0x8000,0);
        uVar2 = DAT_008c362c;
        puVar5 = (uint *)fn_004f0ce8();
        lVar1 = (ulonglong)uVar2 * (ulonglong)*puVar5;
        local_28 = (undefined4)lVar1;
        local_24 = *puVar5 * ((int)uVar2 >> 0x1f) +
                   puVar5[1] * uVar2 + (int)((ulonglong)lVar1 >> 0x20);
        fn_004d4d14(&local_90,param_2,&local_30,&local_28,param_3,DAT_008c3628,0);
        uVar4 = fn_004c7438(param_1,&local_90);
        local_90 = &DAT_00856320;
        fn_0050d178(auStack_8c);
        return uVar4;
      }
      uVar4 = fn_004d4ba8(iVar3,param_2);
      fn_004c72c4(param_1,iVar3 + 4);
      *(undefined4 *)(iVar3 + 0x30) = local_30;
      *(undefined4 *)(iVar3 + 0x34) = uStack_2c;
      fn_004c6fe8(param_1,param_2[7]);
      return uVar4;
    }
    if (*(int *)(iVar3 + 0x28) == param_2[7]) {
      iVar3 = iVar3 + 8;
      goto LAB_004c6dd8;
    }
    iVar3 = *(int *)(iVar3 + 4);
  } while( true );
}



void fn_004c6d54(undefined4 *param_1)

{
  param_1[1] = 0;
  *param_1 = &DAT_00855efc;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}



undefined4 fn_004c6ce4(int param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0xe0e14826;
  if ((param_2 - 0x100000U < 0x3ff00000) && (0xf < param_3)) {
    uVar1 = fn_004edb98(param_2);
    *(undefined4 *)(param_1 + 4) = uVar1;
    *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 4);
    *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 5);
    *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 6);
    *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 7);
    uVar2 = fn_004edbb0(param_2 + 8);
    *(undefined8 *)(param_1 + 0x10) = uVar2;
    uVar1 = 0;
  }
  return uVar1;
}



undefined4 * fn_004c6aec(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  
  iVar2 = param_1[1];
  *param_1 = &PTR_FUN_00855ed4;
  param_1[8] = 0;
  param_1[9] = 0;
  if (iVar2 != 0) {
    piVar4 = *(int **)(iVar2 + 0x10);
    piVar5 = (int *)*piVar4;
    while (piVar6 = piVar5, piVar6 != piVar4) {
      piVar5 = *(int **)(iVar2 + 0x10);
      if (piVar6 != *(int **)(iVar2 + 0x10)) {
        piVar5 = (int *)*piVar6;
        *(int **)piVar6[1] = piVar5;
        *(int *)(*piVar6 + 4) = piVar6[1];
        *(int *)(iVar2 + 0x14) = *(int *)(iVar2 + 0x14) + -1;
        (**(code **)piVar6[2])(piVar6 + 2);
        *piVar6 = *(undefined4 *)(iVar2 + 4);
        *(int **)(iVar2 + 4) = piVar6;
      }
    }
    piVar5 = (int *)param_1[1];
    if (piVar5 != (int *)0x0) {
      piVar4 = (int *)piVar5[4];
      if (piVar4 != (int *)0x0) {
        piVar6 = (int *)*piVar4;
        while (piVar1 = piVar6, piVar1 != piVar4) {
          piVar6 = (int *)piVar5[4];
          if (piVar1 != (int *)piVar5[4]) {
            piVar6 = (int *)*piVar1;
            *(int **)piVar1[1] = piVar6;
            *(int *)(*piVar1 + 4) = piVar1[1];
            piVar5[5] = piVar5[5] + -1;
            (**(code **)piVar1[2])(piVar1 + 2);
            *piVar1 = piVar5[1];
            piVar5[1] = (int)piVar1;
          }
        }
        piVar4 = (int *)piVar5[4];
        *piVar4 = piVar5[1];
        piVar5[1] = (int)piVar4;
        iVar2 = *piVar5;
        while (iVar2 != 0) {
          piVar4 = (int *)*piVar5;
          *piVar5 = *piVar4;
          fn_0014f1bc(piVar4[2]);
          fn_0014f1bc(piVar4);
          iVar2 = *piVar5;
        }
        piVar5[1] = 0;
        piVar5[2] = 0;
        piVar5[3] = 0;
      }
      fn_00656b7c(piVar5);
    }
    param_1[1] = 0;
  }
  puVar3 = (undefined4 *)param_1[2];
  if (puVar3 != (undefined4 *)0x0) {
    (**(code **)*puVar3)(puVar3);
    fn_00656b7c(puVar3);
    param_1[2] = 0;
  }
  puVar3 = (undefined4 *)param_1[3];
  if (puVar3 != (undefined4 *)0x0) {
    (**(code **)*puVar3)(puVar3);
    fn_00656b7c(puVar3);
    param_1[3] = 0;
  }
  puVar3 = (undefined4 *)param_1[4];
  if (puVar3 != (undefined4 *)0x0) {
    (**(code **)*puVar3)(puVar3);
    fn_00656b7c(puVar3);
    param_1[4] = 0;
  }
  return param_1;
}



void fn_004c685c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (*(char *)(DAT_008bf4f4 + 0x30) != '\0') {
    if (*(char *)(*(int *)(param_1 + 0x24) + 0x10) == '\x01') {
      fn_00456510(*(int *)(param_1 + 0x24),4,param_3,param_4,param_4);
    }
    fn_00456400(*(undefined4 *)(param_1 + 0x24));
    fn_0049deb8(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x24),param_2,param_3,
                 param_4);
  }
  return;
}



void fn_004c67e0(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  if (*(char *)(DAT_008bf4f4 + 0x30) != '\0') {
    local_14 = *param_2;
    local_10 = *param_3;
    local_c = *param_4;
    if (*(char *)(*(int *)(param_1 + 0x24) + 0x10) == '\x01') {
      fn_00456510(*(int *)(param_1 + 0x24),4);
    }
    fn_00456400(*(undefined4 *)(param_1 + 0x24));
    fn_0049de08(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x24),&local_14,&local_10
                 ,&local_c);
  }
  return;
}



undefined4 fn_004c6504(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [40];
  undefined1 auStack_30 [8];
  undefined4 auStack_28 [2];
  undefined4 local_20;
  undefined4 local_1c;
  
  uVar4 = 0;
  if (((*(char *)(DAT_008bf4f4 + 0x30) == '\0') ||
      (uVar4 = 0x3ff00000, 0x3fefffff < *(int *)(param_1 + 0xc) - 0x100000U)) ||
     (0x3fefffff < *(int *)(param_1 + 4) - 0x100000U)) {
    return uVar4;
  }
  (**(code **)(*param_2 + 0x14))(param_2,*(code **)(*param_2 + 0x14),0x8000,0);
  (**(code **)(*param_3 + 0x14))(param_3,*(code **)(*param_3 + 0x14),0x8000,0);
  iVar8 = **(int **)(*(int *)(param_1 + 4) + 0x10) + 8;
  fn_004569e8(*(undefined4 *)(param_1 + 0xc),param_2[2]);
  fn_00456a1c(*(undefined4 *)(param_1 + 0xc),(short)param_2[3]);
  fn_00455394(iVar8,*(undefined4 *)(param_1 + 0xc));
  fn_004553d4(iVar8,param_2[5]);
  fn_00455424(iVar8,param_2[6]);
  fn_004554c4(iVar8,param_2[7]);
  fn_004550ac(iVar8,(char)param_2[8]);
  fn_004550d4(iVar8,*(undefined1 *)((int)param_2 + 0x21));
  fn_0045536c(iVar8,*(undefined1 *)((int)param_2 + 0x22));
  fn_004550fc(iVar8,*(undefined1 *)((int)param_2 + 0x23));
  fn_0045544c(iVar8,(char)param_2[9]);
  fn_00455c28(iVar8,*(undefined1 *)((int)param_2 + 0x25));
  fn_00455568(iVar8,*(char *)((int)param_2 + 0x26) != '\0');
  uVar4 = *(undefined4 *)(param_1 + 8);
  fn_004569e8(*(undefined4 *)(param_1 + 0xc),param_3[2]);
  fn_00456a1c(*(undefined4 *)(param_1 + 0xc),(short)param_3[3]);
  fn_00455394(uVar4,*(undefined4 *)(param_1 + 0xc));
  fn_004553d4(uVar4,param_3[5]);
  fn_00455424(uVar4,param_3[6]);
  fn_004554c4(uVar4,param_3[7]);
  fn_004550ac(uVar4,(char)param_3[8]);
  fn_004550d4(uVar4,*(undefined1 *)((int)param_3 + 0x21));
  fn_0045536c(uVar4,*(undefined1 *)((int)param_3 + 0x22));
  fn_004550fc(uVar4,*(undefined1 *)((int)param_3 + 0x23));
  fn_0045544c(uVar4,(char)param_3[9]);
  fn_00455c28(uVar4,*(undefined1 *)((int)param_3 + 0x25));
  fn_00455568(uVar4,*(char *)((int)param_3 + 0x26) != '\0');
  iVar8 = fn_004cc270(*(int *)(*(int *)(DAT_008bf4f4 + 0x20) + 0xa0) + 0x120,param_2);
  if (iVar8 == 0) {
    iVar8 = fn_0013d5c4(auStack_58);
    *(undefined4 *)(iVar8 + 0x28) = 0;
    *(undefined4 *)(iVar8 + 0x2c) = 0;
    *(undefined4 *)(iVar8 + 0x30) = 0;
    *(undefined4 *)(iVar8 + 0x34) = 0;
    fn_0050d1a0(auStack_58,param_2);
    fn_004f01f4(auStack_30);
    fn_004f01f4(auStack_28);
    local_20 = 0;
    local_1c = (uint)((unsigned int)(local_1c) >> 16) & 0xffff << 0x10;
    fn_004cc15c(*(int *)(*(int *)(DAT_008bf4f4 + 0x20) + 0xa0) + 0x120,auStack_58);
    fn_0050d178(auStack_58);
  }
  else {
    fn_004f01f4(iVar8 + 0x30);
    *(undefined4 *)(iVar8 + 0x38) = 0;
  }
  iVar8 = *(int *)(param_1 + 4);
  uVar4 = *(undefined4 *)(param_1 + 8);
  if (*(char *)(*(int *)(param_1 + 0x24) + 0x10) == '\x01') {
    fn_00456510(*(int *)(param_1 + 0x24),4);
  }
  fn_00456400(*(undefined4 *)(param_1 + 0x24));
  uVar5 = *(undefined4 *)(param_1 + 0x24);
  iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x14) + 0x44);
  fn_004b73b0(auStack_68);
  iVar2 = fn_004bc44c();
  piVar3 = (int *)(iVar2 + 0x50);
  (**(code **)(*piVar3 + 8))();
  fn_004ba7c4(auStack_68,*(undefined2 *)(iVar1 + 0x20),1);
  iVar2 = fn_004bab34(auStack_68,uVar5);
  if (iVar2 == 0) {
    (**(code **)(*piVar3 + 0xc))(piVar3);
    fn_004b7520(auStack_68);
    return 0;
  }
  fn_004ba7ac(auStack_68,3);
  auStack_28[0] = *(undefined4 *)(iVar8 + 0x14);
  fn_0015ef4c(auStack_68,auStack_28,4);
  piVar7 = *(int **)(iVar8 + 0x10);
  for (piVar6 = (int *)*piVar7; piVar6 != piVar7; piVar6 = (int *)*piVar6) {
    fn_0047fb68(auStack_68,piVar6 + 2);
  }
  fn_0047fb68(auStack_68,uVar4);
  DAT_008ed828 = &DAT_004a47f4;
  if ((*(char *)(iVar1 + 0x34) == '\0') || (iVar8 = fn_006d3ef4(iVar1,0x10), iVar8 == 0)) {
    uVar4 = fn_0046e0a4(iVar1,uVar5,auStack_68);
    (**(code **)(*piVar3 + 0xc))(piVar3);
    fn_004b7520(auStack_68);
    return uVar4;
  }
  (**(code **)(*piVar3 + 0xc))(piVar3);
  uVar4 = fn_0046e0a4(iVar1,uVar5,auStack_68);
  fn_004b7520(auStack_68);
  return uVar4;
}


