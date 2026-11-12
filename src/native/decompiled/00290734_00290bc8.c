#include "00290734_00290bc8.h"



void fn_00290bc8(undefined4 *param_1)

{
  *param_1 = &DAT_00851b78;
  if (param_1[3] != -1) {
    fn_0016a43c(param_1[1]);
    param_1[3] = 0xffffffff;
  }
  if (param_1[2] != -1) {
                    /* WARNING: Subroutine does not return */
    fn_001482f4(param_1[1]);
  }
  fn_002feef8(param_1);
  return;
}



void fn_00290ba4(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  *param_1 = &DAT_00851b78;
  uVar1 = *(undefined4 *)(param_2 + 8);
  param_1[2] = 0xffffffff;
  param_1[1] = uVar1;
  param_1[3] = 0xffffffff;
  return;
}



void fn_00290ae4(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined1 auStack_318 [512];
  undefined1 auStack_118 [260];
  
  fn_00301f50(auStack_318,0x200);
  fn_00101a50(auStack_318,0x100,
               L"rom:/data/Layout/common/status_passing_bg/status_passing_bg_%s.arc",
               (&PTR_s_01_00_008962a8)[param_2]);
  uVar1 = fn_001481c8(*(undefined4 *)(param_1 + 4),auStack_318,&DAT_00290b88,1,1);
  *(undefined4 *)(param_1 + 8) = uVar1;
  fn_00301f50(auStack_118,0x100);
  fn_001028d4(auStack_118,(char *)&DAT_00290b8c,(&PTR_s_01_00_008962a8)[param_2]);
  uVar1 = fn_001480d0(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),auStack_118,
                       &DAT_00290ba0,0,1,1000);
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  return;
}



void fn_00290aa4(int param_1)

{
  if (*(int *)(param_1 + 0xc) != -1) {
    fn_0016a43c(*(undefined4 *)(param_1 + 4));
    *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  }
  if (*(int *)(param_1 + 8) != -1) {
                    /* WARNING: Subroutine does not return */
    fn_001482f4(*(undefined4 *)(param_1 + 4));
  }
  return;
}



void fn_00290834(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  
  uVar5 = *(undefined4 *)(DAT_00897804 + 0xc);
  fn_00301f50(param_1,0x3c4);
  iVar2 = fn_006b83e4(uVar5);
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      uVar3 = fn_0028b0a0(uVar5,iVar4);
      fn_0017821c(param_1 + iVar4 * 0xf0,uVar3,0xf0);
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  uVar1 = fn_006b8574(uVar5);
  *(undefined1 *)(param_1 + 0x3c0) = uVar1;
  uVar1 = fn_006b8668(uVar5);
  *(undefined1 *)(param_1 + 0x3c1) = uVar1;
  uVar1 = fn_006b51cc(*(undefined4 *)(DAT_00897804 + 0x1c));
  *(undefined1 *)(param_1 + 0x3c2) = uVar1;
  return;
}



void fn_00290734(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  
  fn_002908c8();
  uVar5 = *(undefined4 *)(DAT_00897804 + 0xc);
  fn_00301f50(param_1 + 0x150,0x3c4);
  iVar2 = fn_006b83e4(uVar5);
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      uVar3 = fn_0028b0a0(uVar5,iVar4);
      fn_0017821c(param_1 + 0x150 + iVar4 * 0xf0,uVar3,0xf0);
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  uVar1 = fn_006b8574(uVar5);
  *(undefined1 *)(param_1 + 0x510) = uVar1;
  uVar1 = fn_006b8668(uVar5);
  *(undefined1 *)(param_1 + 0x511) = uVar1;
  uVar1 = fn_006b51cc(*(undefined4 *)(DAT_00897804 + 0x1c));
  *(undefined1 *)(param_1 + 0x512) = uVar1;
  uVar5 = *(undefined4 *)(DAT_00897804 + 0xc);
  fn_00301f50(param_1 + 0x514,0x3c0);
  iVar2 = fn_006b84b0(uVar5);
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      uVar3 = fn_0028b348(uVar5,iVar4);
      fn_0017821c(param_1 + 0x514 + iVar4 * 0xf0,uVar3,0xf0);
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



void fn_002908c8(undefined4 *param_1)

{
  int iVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  fn_00301f50(param_1,0xcc);
  fn_00301f50(param_1 + 0x33,0x50);
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  iVar13 = *(int *)(DAT_00897804 + 8);
  uVar12 = *(undefined4 *)(DAT_00897804 + 0x24);
  uVar6 = *(undefined4 *)(DAT_00897804 + 0x30);
  uVar11 = *(undefined4 *)(DAT_00897804 + 0x58);
  uVar10 = *(undefined4 *)(DAT_00897804 + 100);
  fn_0017821c(param_1,*(undefined4 *)(iVar13 + 4),0xcc);
  if (*(char *)(param_1 + 0x18) != '\0') {
    fn_001f825c();
    fn_006619ec(&local_68,param_1 + 0x19);
    *param_1 = local_68;
    param_1[1] = uStack_64;
    param_1[2] = uStack_60;
    param_1[3] = uStack_5c;
    param_1[4] = uStack_58;
    param_1[5] = uStack_54;
    fn_0011ddb8();
  }
  uVar6 = fn_006b86e8(uVar6);
  fn_0017821c(param_1 + 0x33,uVar6,0x50);
  puVar7 = param_1 + 0x47;
  iVar4 = fn_006b64bc(iVar13);
  if (iVar4 == 0) {
    uVar3 = 1;
  }
  else {
    uVar3 = 0x1b;
  }
  *(undefined2 *)puVar7 = uVar3;
  uVar9 = 0;
  do {
    uVar2 = fn_006b7eb4(uVar12,uVar9 & 0xff,1,0);
    uVar8 = uVar9 + 1;
    *(undefined1 *)((int)puVar7 + uVar9 + 2) = uVar2;
    uVar9 = uVar8;
  } while ((int)uVar8 < 10);
  uVar3 = fn_006b7d54(uVar12);
  *(undefined2 *)(param_1 + 0x4a) = uVar3;
  uVar3 = fn_006b7dc4(uVar12,0);
  *(undefined2 *)((int)param_1 + 0x12a) = uVar3;
  uVar3 = fn_006b7c34(uVar12);
  *(undefined2 *)(param_1 + 0x4b) = uVar3;
  uVar3 = fn_006b7ca4(uVar12);
  *(undefined2 *)((int)param_1 + 0x12e) = uVar3;
  uVar3 = fn_006b7f9c(uVar12,0,1);
  iVar4 = 0;
  *(undefined2 *)(param_1 + 0x4c) = uVar3;
  do {
    uVar3 = fn_006b8130(uVar12,(int)(char)iVar4);
    iVar1 = iVar4 * 2;
    iVar4 = iVar4 + 1;
    *(undefined2 *)((int)(param_1 + 0x4a) + iVar1 + 10) = uVar3;
  } while (iVar4 < 3);
  uVar6 = fn_006b6474(iVar13);
  uVar9 = 0;
  param_1[0x4e] = uVar6;
  do {
    puVar5 = (undefined4 *)fn_002b0a98(uVar10,uVar9 + 1);
    if (puVar5 != (undefined4 *)0x0) {
      puVar7[uVar9 + 8] = *puVar5;
    }
    uVar9 = uVar9 + 1;
  } while (uVar9 < 5);
  uVar6 = fn_006bc4d4(uVar11);
  param_1[0x235] = uVar6;
  return;
}


