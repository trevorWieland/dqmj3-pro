#include "0074ecf0_0074f450.h"



void fn_0074f450(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  bool bVar8;
  int local_50;
  undefined4 local_4c;
  uint local_48;
  uint local_44 [5];
  undefined1 auStack_30 [12];
  undefined4 local_24 [2];
  
  iVar1 = fn_001249d0();
  iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x6c));
  if (iVar1 == 0) goto LAB_0074f600;
  iVar1 = *(int *)(param_1 + 0x1a8);
  iVar4 = *(int *)(param_1 + 0x1ac);
  if (iVar4 == iVar1) {
    local_44[0] = 0x8069000b;
    uVar2 = fn_004b8d4c(&local_50,local_44);
    fn_0074f214(param_1,uVar2);
  }
  else {
    piVar3 = *(int **)(param_1 + 0x8c);
    if (piVar3 != (int *)0x0) {
      if (*(char *)(param_1 + 0x1ce) == '\0') {
LAB_0074f590:
        iVar1 = *(int *)(param_1 + 0x1a8);
        iVar4 = *(int *)(param_1 + 0x1ac);
        bVar8 = iVar4 == iVar1;
        if (bVar8) {
          iVar4 = 0;
        }
        if (!bVar8) {
          iVar4 = iVar4 - iVar1;
        }
        iVar1 = (**(code **)(**(int **)(param_1 + 0x8c) + 0x10))
                          (*(int **)(param_1 + 0x8c),iVar1,iVar4);
        if (iVar1 == 0) {
          fn_004b2e68(param_1,0x10);
          return;
        }
        iVar1 = *(int *)(param_1 + 0x1a8);
        iVar4 = *(int *)(param_1 + 0x1ac);
        bVar8 = iVar4 != iVar1;
        if (bVar8) {
          iVar1 = iVar4 - iVar1;
        }
        if (!bVar8) {
          iVar1 = 0;
        }
        *(int *)(param_1 + 0x1c8) = iVar1 + *(int *)(param_1 + 0x1c8);
        local_24[0] = 0x10001;
        uVar2 = fn_004b8d4c(auStack_30,local_24);
        fn_0074f214(param_1,uVar2);
        return;
      }
      piVar5 = *(int **)(param_1 + 0x180);
      iVar7 = *(int *)(param_1 + 0x184);
      local_50 = iVar4 - iVar1;
      *(undefined1 *)(param_1 + 0x1ce) = 0;
      local_44[0] = (uint)*(ushort *)(param_1 + 0x196);
      bVar8 = piVar5 == (int *)0x0;
      if (bVar8 && iVar7 == 0) {
        piVar5 = (int *)(param_1 + 0x118);
      }
      local_4c = *(undefined4 *)(param_1 + 400);
      piVar6 = piVar5;
      if (bVar8 && iVar7 == 0) {
        piVar6 = (int *)*piVar5;
        iVar7 = piVar5[1];
      }
      local_48 = (uint)*(ushort *)(param_1 + 0x194);
      local_44[1] = 0;
      (**(code **)(*piVar3 + 8))(piVar3,*(code **)(*piVar3 + 8),piVar6,iVar7);
      iVar1 = fn_001249d0();
      iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x6c));
      if (iVar1 != 0) {
        piVar3 = *(int **)(param_1 + 0x8c);
        if (*(int *)(param_1 + 0x1ac) == *(int *)(param_1 + 0x1a8)) {
          local_50 = 0;
        }
        else {
          local_50 = *(int *)(param_1 + 0x1ac) - *(int *)(param_1 + 0x1a8);
        }
        (**(code **)(*piVar3 + 0xc))(piVar3,piVar3,piVar6,iVar7);
        iVar1 = fn_001249d0();
        iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x6c));
        if (iVar1 != 0) goto LAB_0074f590;
      }
LAB_0074f600:
      local_44[0] = 0x80010004;
      uVar2 = fn_004b8d4c(&local_50,local_44);
      fn_0074f214(param_1,uVar2);
      return;
    }
    if (*(int *)(param_1 + 0x1b8) != 0) {
      if (*(uint *)(param_1 + 0x1bc) < (uint)(iVar4 - iVar1)) {
        local_44[0] = 0x80050017;
        uVar2 = fn_004b8d4c(&local_50,local_44);
        fn_0074f214(param_1,uVar2);
        return;
      }
      fn_00301a9c();
      iVar1 = *(int *)(param_1 + 0x1a8);
      iVar4 = *(int *)(param_1 + 0x1ac);
      bVar8 = iVar4 != iVar1;
      if (bVar8) {
        iVar1 = iVar4 - iVar1;
      }
      if (!bVar8) {
        iVar1 = 0;
      }
      *(int *)(param_1 + 0x1c8) = iVar1 + *(int *)(param_1 + 0x1c8);
      local_50 = 0x10001;
      uVar2 = fn_004b8d4c(local_44,&local_50);
      fn_0074f214(param_1,uVar2);
      return;
    }
  }
  return;
}



int fn_0074f2b0(int param_1,undefined4 param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  code *pcVar5;
  int *piVar6;
  int *piVar7;
  
  iVar2 = fn_001249d0();
  iVar3 = fn_0048a058(*(undefined4 *)(iVar2 + 0x10),*(undefined4 *)(param_1 + 0x6c));
  iVar2 = 0;
  if (iVar3 != 0) {
    piVar4 = *(int **)(param_1 + 0x8c);
    if (piVar4 == (int *)0x0) {
      if (*(int *)(param_1 + 0x1b8) != 0) {
        if (*(uint *)(param_1 + 0x1bc) < (uint)(*(int *)(param_1 + 0x1c8) + param_3)) {
          *(undefined1 *)(param_1 + 0x1cc) = 1;
          fn_00456510(param_1 + 0x98,4);
          return 0;
        }
        fn_00301a9c(*(int *)(param_1 + 0x1c8) + *(int *)(param_1 + 0x1b8),param_2,param_3);
        *(int *)(param_1 + 0x1c8) = *(int *)(param_1 + 0x1c8) + param_3;
        return 1;
      }
      iVar2 = 1;
    }
    else {
      if (*(char *)(param_1 + 0x1ce) != '\0') {
        piVar6 = *(int **)(param_1 + 0x180);
        iVar2 = *(int *)(param_1 + 0x184);
        *(undefined1 *)(param_1 + 0x1ce) = 0;
        bVar1 = piVar6 == (int *)0x0;
        if (bVar1 && iVar2 == 0) {
          piVar6 = (int *)(param_1 + 0x118);
        }
        piVar7 = piVar6;
        if (bVar1 && iVar2 == 0) {
          piVar7 = (int *)*piVar6;
          iVar2 = piVar6[1];
        }
        if (*(char *)(param_1 + 0x1c0) != '\0') {
          (**(code **)(*piVar4 + 8))
                    (piVar4,piVar4,piVar7,iVar2,*(undefined4 *)(param_1 + 0x16c),
                     *(undefined4 *)(param_1 + 400),*(undefined2 *)(param_1 + 0x194),
                     *(undefined2 *)(param_1 + 0x196),1);
          iVar3 = fn_001249d0();
          iVar3 = fn_0048a058(*(undefined4 *)(iVar3 + 0x10),*(undefined4 *)(param_1 + 0x6c));
          if (iVar3 == 0) {
            return 0;
          }
        }
        pcVar5 = *(code **)(**(int **)(param_1 + 0x8c) + 0xc);
        (*pcVar5)(*(int **)(param_1 + 0x8c),pcVar5,piVar7,iVar2,*(undefined4 *)(param_1 + 0x16c));
        iVar2 = fn_001249d0();
        iVar2 = fn_0048a058(*(undefined4 *)(iVar2 + 0x10),*(undefined4 *)(param_1 + 0x6c));
        if (iVar2 == 0) {
          return 0;
        }
      }
      iVar2 = (**(code **)(**(int **)(param_1 + 0x8c) + 0x10))
                        (*(int **)(param_1 + 0x8c),param_2,param_3);
      if (iVar2 != 0) {
        *(int *)(param_1 + 0x1c8) = *(int *)(param_1 + 0x1c8) + param_3;
      }
    }
  }
  return iVar2;
}



void fn_0074f214(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar1 = fn_001249d0();
  iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x6c));
  if (iVar1 == 0) {
    fn_00456510(param_1 + 0x98,4);
  }
  else {
    iVar2 = fn_006d3b8c(param_2);
    if (iVar2 == 0) {
      local_20 = *param_2;
      uStack_1c = param_2[1];
      uStack_18 = param_2[2];
      fn_00456044(iVar1,&local_20);
    }
    else {
      if (*(undefined4 **)(param_1 + 0x1c4) != (undefined4 *)0x0) {
        **(undefined4 **)(param_1 + 0x1c4) = *(undefined4 *)(param_1 + 0x16c);
      }
      local_20 = *param_2;
      uStack_1c = param_2[1];
      uStack_18 = param_2[2];
      fn_00456074(iVar1,&local_20);
    }
  }
  fn_004b2f04(param_1);
  return;
}



void fn_0074ef78(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &PTR_FUN_0085412c;
  param_1[0x1a] = &DAT_00854178;
  if ((int *)param_1[0x1d] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x1d] + 4))();
  }
  param_1[0x53] = &DAT_008557dc;
  iVar1 = fn_004b8c5c(param_1 + 0x57);
  *(undefined **)(iVar1 + -0x3c) = &DAT_008550c4;
  fn_0014f1bc(*(undefined4 *)(iVar1 + -0x1c));
  iVar1 = fn_004b8dac(iVar1 + -0x2c);
  iVar1 = fn_00170f54(iVar1 + -8);
  iVar1 = fn_0048cc74(iVar1 + -0x90);
  fn_00479d5c(iVar1 + -0x98);
  return;
}



void fn_0074ee60(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uStack_10;
  
  uStack_10 = param_4;
  puVar1 = (undefined4 *)fn_00479cd8(param_1,2,&uStack_10);
  *puVar1 = &PTR_FUN_0085412c;
  puVar1[0x1a] = &DAT_00854178;
  puVar1[0x1b] = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  *(undefined1 *)(puVar1 + 0x1e) = 1;
  puVar1[0x1f] = 0;
  puVar1[0x20] = 0;
  puVar1[0x21] = 0;
  puVar1[0x22] = 0;
  puVar1[0x23] = 0;
  puVar1[0x24] = 0;
  iVar2 = fn_0048cc04(puVar1 + 0x26,0);
  *(undefined1 *)(iVar2 + 0x7c) = 0;
  *(undefined **)(iVar2 + 0x78) = &DAT_00854fe4;
  *(undefined4 *)(iVar2 + 0x80) = 0;
  *(undefined **)(iVar2 + 0x88) = &DAT_008550c4;
  *(undefined1 *)(iVar2 + 0x8c) = 0;
  iVar2 = fn_0013d40c(iVar2 + 0x90);
  iVar2 = fn_0075499c(iVar2 + 8,0);
  iVar2 = fn_001676b0(iVar2 + 0x10,0);
  *(undefined **)(iVar2 + -0x20) = &DAT_008540e0;
  *(undefined **)(iVar2 + 0xc) = &DAT_008557dc;
  *(undefined1 *)(iVar2 + 0x10) = 0;
  iVar2 = fn_004b8b9c(iVar2 + 0x1c,0);
  *(undefined4 *)(iVar2 + 0x20) = 0;
  *(undefined **)(iVar2 + -0x10) = &DAT_00855348;
  *(undefined4 *)(iVar2 + 0x24) = 0;
  *(undefined1 *)(iVar2 + 0x28) = 0;
  *(undefined4 *)(iVar2 + 0x2c) = 0;
  *(undefined4 *)(iVar2 + 0x30) = 0;
  *(undefined1 *)(iVar2 + 0x34) = 0;
  *(undefined1 *)(iVar2 + 0x35) = 0;
  *(undefined1 *)(iVar2 + 0x36) = 1;
  return;
}



void fn_0074ecf0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_38 [2];
  undefined *local_30;
  code *pcStack_2c;
  undefined4 uStack_28;
  undefined *puStack_24;
  undefined *local_20;
  code *pcStack_1c;
  undefined4 uStack_18;
  undefined *puStack_14;
  
  iVar1 = fn_001249d0();
  iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x6c));
  if (iVar1 == 0) {
    local_38[0] = 0x80010004;
    uVar2 = fn_004b8d4c(&local_20,local_38);
    fn_0074e3bc(param_1,uVar2);
    return;
  }
  if (*(char *)(param_1 + 0xa8) != '\x02') {
    local_20 = *(undefined **)(param_1 + 0xd0);
    pcStack_1c = *(code **)(param_1 + 0xd4);
    uStack_18 = *(undefined4 *)(param_1 + 0xd8);
    fn_0074e3bc(param_1,&local_20);
    return;
  }
  fn_00456400(param_1 + 0x98);
  if ((*(char *)(param_1 + 0x184) == '\0') ||
     (iVar1 = fn_004b626c(*(undefined4 *)(param_1 + 300),&DAT_0074ee50), iVar1 == 0)) {
    pcStack_2c = fn_0074e830;
    uStack_28 = 0;
    local_30 = &DAT_00853500;
    puStack_24 = &DAT_0074ee50;
    fn_00479c98(param_1,&local_30);
    return;
  }
  pcStack_1c = fn_0074e5d0;
  uStack_18 = 0;
  local_20 = &DAT_00853500;
  puStack_14 = &DAT_0074ee50;
  fn_00479c98(param_1,&local_20);
  return;
}


