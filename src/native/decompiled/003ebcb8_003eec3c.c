#include "003ebcb8_003eec3c.h"



void fn_003eec3c(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 local_20;
  undefined4 local_1c [2];
  
  uVar3 = param_2 + 1;
  fn_0040f600(*(undefined4 *)(param_1[0x46] + 0x3c),uVar3 & 0xff,2);
  local_20 = 0;
  iVar1 = (**(code **)(*param_1 + 0x140))(param_1,&local_20);
  uVar2 = fn_0022f750(*(undefined4 *)(iVar1 + param_2 * 0x10));
  fn_00230b64();
  iVar1 = fn_006e82d4(param_1[0x47]);
  fn_0015b0f8(8 - iVar1);
  fn_0015b0dc(uVar2);
  param_1[0x42] = 0;
  uVar2 = fn_002525a0(0xc);
  fn_00748898(param_1,uVar2);
  param_1[0x43] = uVar3;
  *(char *)(DAT_00897840 + 0x34) = (char)uVar3;
  uVar2 = *(undefined4 *)(*(int *)(*(int *)(param_1[0x46] + 0x3c) + 4) + 8);
  if (*(char *)(DAT_00898840 + 0x4d) != '\0') {
    local_1c[0] = fn_00615e64();
    fn_003dccb4(uVar2,local_1c,3);
    fn_00338248(*(undefined4 *)(DAT_00897840 + 0x28),local_1c[0]);
  }
  *(undefined1 *)(param_1[0x47] + 9) = 1;
  *(undefined1 *)((int)param_1 + 0x105) = 2;
  return;
}



void fn_003ee998(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 local_20;
  
  local_20 = param_4;
  if (*(char *)((int)param_1 + 0x106) == '\0') {
    param_1[0x42] = param_1[0x42] + 1;
    iVar1 = fn_0077f778(*(undefined4 *)(*(int *)(param_1[0x46] + 0x3c) + 4));
    if (iVar1 == 0) {
      uVar3 = (**(code **)(**(int **)(*(int *)(param_1[0x46] + 0x3c) + 4) + 4))();
      uVar4 = *(undefined4 *)(*(int *)(*(int *)(param_1[0x46] + 0x3c) + 4) + 8);
      iVar1 = fn_006b6530(uVar4,3,uVar3);
      if (iVar1 != 0) {
        puVar5 = (undefined4 *)fn_006cb164(uVar4,uVar3);
        local_20 = *puVar5;
        fn_003dccb4(uVar4,&local_20,3);
      }
      if ((char)param_1[0x45] == '\0') {
        iVar1 = fn_00252280(*(undefined4 *)(*(int *)(param_1[0x46] + 0x3c) + 4),3,1);
        *(char *)(param_1 + 0x45) = (char)iVar1;
        if (iVar1 == 0) {
          return;
        }
        piVar6 = (int *)fn_006cb164(uVar4,uVar3);
        param_1[0x44] = *piVar6;
        if ((char)param_1[0x45] == '\0') {
          return;
        }
      }
      if (0x3b < (uint)param_1[0x42]) {
        fn_00338248(*(undefined4 *)(DAT_00897840 + 0x28),param_1[0x44]);
        *(undefined1 *)((int)param_1 + 0x106) = 1;
        return;
      }
    }
  }
  else if (*(char *)((int)param_1 + 0x106) == '\x01') {
    fn_0040f600(*(undefined4 *)(param_1[0x46] + 0x3c),0,2);
    iVar1 = fn_006ce5b8(*(undefined4 *)(*(int *)(param_1[0x46] + 0x3c) + 4),2);
    if ((iVar1 != 0) && (iVar1 = fn_0040f588(*(undefined4 *)(param_1[0x46] + 0x3c),2), iVar1 != 0))
    {
      fn_00230b64();
      *(undefined1 *)(param_1[0x47] + 9) = 1;
      iVar1 = fn_0040f588(*(undefined4 *)(param_1[0x46] + 0x3c),2);
      *(char *)(DAT_00897840 + 0x34) = (char)iVar1;
      *(undefined1 *)(param_1 + 0x41) = 3;
      local_20 = 0;
      iVar2 = (**(code **)(*param_1 + 0x140))(param_1,&local_20);
      uVar3 = fn_0022f750(*(undefined4 *)(iVar2 + iVar1 * 0x10 + -0x10));
      iVar1 = fn_006e82d4(param_1[0x47]);
      fn_0015b0f8(8 - iVar1);
      fn_0015b0dc(uVar3);
      uVar3 = fn_002525a0(0xc);
      fn_00748898(param_1,uVar3);
      param_1[0x42] = 0;
    }
  }
  return;
}



void fn_003ee58c(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = DAT_00892dfc;
  if (*(int *)(param_1 + 0xa4) == 0) {
    if ((char)DAT_00892dfc[6] != '\0') {
      iVar1 = (**(code **)(*(int *)DAT_00892dfc[1] + 0x18))();
      piVar2 = *(int **)(*(int *)(*piVar2 + 0x10) + iVar1 * 8 + 4);
      (**(code **)(*piVar2 + 0x50))(piVar2,1);
                    /* WARNING: Subroutine does not return */
      fn_001638a0();
    }
    return;
  }
  if ((char)DAT_00892dfc[6] == '\0') {
    *(undefined1 *)(*(int *)(param_1 + 100) + 0x15) = 1;
    *(undefined4 *)(param_1 + 0x9c) = 4;
    return;
  }
  iVar1 = *(int *)(param_1 + 0xa8) + 1;
  *(int *)(param_1 + 0xa8) = iVar1;
  if (0x3b < iVar1) {
    iVar1 = (**(code **)(*(int *)piVar2[1] + 0x18))();
    (**(code **)(**(int **)(*(int *)(*piVar2 + 0x10) + iVar1 * 8 + 4) + 0x68))();
    *(undefined1 *)(*(int *)(param_1 + 100) + 0x15) = 1;
    *(undefined4 *)(param_1 + 0x9c) = 4;
  }
  piVar2 = DAT_00892dfc;
  iVar1 = (**(code **)(*(int *)DAT_00892dfc[1] + 0x18))();
                    /* WARNING: Could not recover jumptable at 0x003ee648. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(*piVar2 + 0x10) + iVar1 * 8 + 4) + 0xc))();
  return;
}



void fn_003ecb50(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  uVar2 = fn_00182994(DAT_008977e4);
  iVar3 = fn_00174a74(uVar2,*(undefined4 *)(param_1 + 4),0);
  if (*(char *)(param_1 + 0x10) == '\0') {
    if (*(int *)(param_1 + 0x14) < iVar3) {
      uVar2 = fn_00182994(DAT_008977e4);
      iVar4 = fn_00155a74(uVar2,*(undefined4 *)(param_1 + 4),0,(int)*(short *)(param_1 + 0x14));
      uVar2 = fn_00182994(DAT_008977e4);
      iVar5 = fn_0017591c(uVar2,*(undefined4 *)(param_1 + 4),0);
      fn_0029e160(iVar3,0,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x14));
      if (iVar4 == 0) {
        if (iVar5 == 0) {
          uVar2 = *(undefined4 *)(param_1 + 0x14);
          cVar1 = *(char *)(param_1 + 8);
          uVar6 = *(undefined4 *)(param_1 + 4);
        }
        else {
          if (*(int *)(param_1 + 0x14) == 0) {
            uVar2 = fn_00182994(DAT_008977e4);
            fn_001483c0(uVar2,*(undefined4 *)(param_1 + 0xc));
          }
          uVar2 = *(undefined4 *)(param_1 + 0x14);
          cVar1 = *(char *)(param_1 + 8);
          uVar6 = *(undefined4 *)(param_1 + 4);
        }
      }
      else {
        if (*(int *)(param_1 + 0x14) == 0) {
          uVar2 = fn_00182994(DAT_008977e4);
          fn_001483c0(uVar2,*(undefined4 *)(param_1 + 0xc));
        }
        uVar2 = *(undefined4 *)(param_1 + 0x14);
        cVar1 = *(char *)(param_1 + 8);
        uVar6 = *(undefined4 *)(param_1 + 4);
      }
      fn_0029eca0(0,1,cVar1 == 0,uVar6,uVar2,(int)cVar1,param_1 + 0x1c,param_1 + 0x1d);
      if ((iVar3 < 2) || (*(int *)(param_1 + 0x14) == iVar3)) {
        *(undefined1 *)(param_1 + 0x10) = 0;
      }
      else {
        *(undefined4 *)(param_1 + 0x18) = 0xf;
        *(undefined1 *)(param_1 + 0x10) = 1;
      }
      iVar4 = *(int *)(param_1 + 0x14) + 1;
      *(int *)(param_1 + 0x14) = iVar4;
      if (iVar4 < iVar3) {
        *(undefined1 *)(param_1 + 0x11) = 0;
      }
      else {
        *(undefined1 *)(param_1 + 0x11) = 2;
      }
      return;
    }
    *(undefined1 *)(param_1 + 0x10) = 2;
  }
  else if ((*(char *)(param_1 + 0x10) == '\x01') &&
          (iVar3 = *(int *)(param_1 + 0x18) + -1, *(int *)(param_1 + 0x18) = iVar3, iVar3 < 1)) {
    *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_1 + 0x11);
  }
  return;
}



undefined4 fn_003ebcb8(undefined4 param_1)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  wchar16 *pwStack_94;
  char *pcStack_90;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 *local_78;
  undefined4 *local_74;
  undefined4 *local_70;
  undefined4 *local_6c;
  undefined4 local_68;
  undefined1 local_62;
  undefined1 auStack_60 [64];
  int local_20;
  
  fn_002c330c(&pwStack_94);
  local_8c = 3;
  uStack_88 = 0;
  local_80 = 3;
  local_84 = 0;
  pwStack_94 = L"rom:/data/Layout/common/common_0100.arc";
  pcStack_90 = (char *)&DAT_003ebff0;
  uVar3 = fn_0022f750((char *)&DAT_003ec004);
  fn_00147974(&local_78,uVar3);
  fn_00147974(&local_74,"");
  fn_00147974(&local_70,"");
  fn_00147974(&local_6c,"");
  local_62 = 1;
  local_68 = 0;
  fn_002c29a0(param_1,&pwStack_94);
  iVar7 = 0;
  do {
    uVar3 = fn_0022f750((&DAT_007c7a50)[iVar7 * 2]);
    fn_0031b78c(param_1,iVar7,0,uVar3);
    iVar7 = iVar7 + 1;
  } while (iVar7 < 3);
  puVar4 = (undefined4 *)fn_001f74d8(param_1,0x36);
  if (puVar4 != (undefined4 *)0x0) {
    puVar5 = (undefined4 *)(**(code **)*puVar4)(puVar4);
    do {
      if (puVar5 == &DAT_008951dc) goto LAB_003ebdb8;
      puVar5 = (undefined4 *)*puVar5;
    } while (puVar5 != (undefined4 *)0x0);
  }
  puVar4 = (undefined4 *)0x0;
LAB_003ebdb8:
  iVar7 = fn_006bebf8(*(undefined4 *)(DAT_00897804 + 0x40));
  *(undefined1 *)((int)puVar4 + 0x27) = 0;
  if (iVar7 == 0) {
    fn_00147974(puVar4 + 8,"");
  }
  else {
    iVar7 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc));
    if (iVar7 != 0) {
      fn_002311c4(auStack_60,0x20,(int)*(short *)(iVar7 + 0x1c),iVar7 + 4,0);
      fn_00147974(puVar4 + 8,auStack_60);
      local_20 = iVar7;
      uVar1 = fn_006bf2b4();
      *(undefined1 *)((int)puVar4 + 0x27) = uVar1;
      puVar4[0x2b] = *(undefined4 *)(iVar7 + 0x72);
      puVar4[0x2c] = *(undefined4 *)(iVar7 + 0x76);
      puVar4[0x2d] = *(undefined4 *)(iVar7 + 0x7a);
      puVar4[0x2e] = *(undefined4 *)(iVar7 + 0x7e);
      *(undefined2 *)(puVar4 + 0x2f) = *(undefined2 *)(iVar7 + 0x82);
    }
  }
  uVar2 = fn_006c3b74(*(undefined4 *)(DAT_00897804 + 0x44));
  *(undefined2 *)(puVar4 + 7) = uVar2;
  fn_001003e0((int)puVar4 + 0x2e6,**(undefined4 **)(DAT_00897804 + 0x44));
  uVar1 = fn_006c3b68(*(undefined4 *)(DAT_00897804 + 0x44));
  *(undefined1 *)((int)puVar4 + 0x2e5) = uVar1;
  *(undefined1 *)(puVar4 + 0xb9) = 1;
  puVar4[0xcd] = 0x1b;
  fn_00689efc(param_1,0x36,0);
  if (local_6c != &DAT_008f9cf4) {
    piVar6 = local_6c + -3;
    iVar7 = *piVar6;
    if ((iVar7 == -1) || ((piVar6 != &DAT_008f9ce8 && (*piVar6 = iVar7 + -1, iVar7 == 0)))) {
      fn_001008c4(local_6c + -3,local_6c[-2] + 8,0);
    }
  }
  if (local_70 != &DAT_008f9cf4) {
    piVar6 = local_70 + -3;
    iVar7 = *piVar6;
    if ((iVar7 == -1) || ((piVar6 != &DAT_008f9ce8 && (*piVar6 = iVar7 + -1, iVar7 == 0)))) {
      fn_001008c4(local_70 + -3,local_70[-2] + 8,0);
    }
  }
  if (local_74 != &DAT_008f9cf4) {
    piVar6 = local_74 + -3;
    iVar7 = *piVar6;
    if ((iVar7 == -1) || ((piVar6 != &DAT_008f9ce8 && (*piVar6 = iVar7 + -1, iVar7 == 0)))) {
      fn_001008c4(local_74 + -3,local_74[-2] + 8,0);
    }
  }
  if (local_78 != &DAT_008f9cf4) {
    piVar6 = local_78 + -3;
    iVar7 = *piVar6;
    if ((iVar7 == -1) || ((piVar6 != &DAT_008f9ce8 && (*piVar6 = iVar7 + -1, iVar7 == 0)))) {
      fn_001008c4(local_78 + -3,local_78[-2] + 8,0);
    }
  }
  return 1;
}


