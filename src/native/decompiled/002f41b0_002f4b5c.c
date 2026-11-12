#include "002f41b0_002f4b5c.h"



void fn_002f4b5c(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_00145b00(0x14,&DAT_00812c8c);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = fn_003e9870();
  }
  iVar1 = *(int *)(param_1 + 0x2c);
  if (iVar1 != iVar2) {
    if (iVar1 != 0) {
      fn_00122d10(iVar1);
      fn_002feef8();
    }
    *(int *)(param_1 + 0x2c) = iVar2;
  }
  fn_003e9234(*(undefined4 *)(param_1 + 0x2c));
  return;
}



void fn_002f4714(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 uVar6;
  
  fn_001f825c();
  *(undefined1 *)((int)param_1 + 0x3b) = 1;
  iVar1 = fn_00145b00(0x78,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_00241510(iVar1,0x80000);
  }
  piVar5 = (int *)*param_1;
  if (piVar5 != piVar2) {
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 4))(piVar5);
    }
    *param_1 = (int)piVar2;
  }
  iVar1 = fn_00145b00(0x40,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_0023e8ec(iVar1,4);
  }
  piVar5 = (int *)param_1[1];
  if (piVar5 != piVar2) {
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 4))(piVar5);
    }
    param_1[1] = (int)piVar2;
  }
  *(int *)(param_1[1] + 4) = *param_1;
  iVar1 = fn_00145b00(0x48,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_001138cc(iVar1,&DAT_002f4b54);
  }
  piVar5 = (int *)param_1[2];
  if (piVar5 != piVar2) {
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 4))(piVar5);
    }
    param_1[2] = (int)piVar2;
  }
  iVar1 = fn_00145b00(0x48,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_001138ac(iVar1,&DAT_002f4b54);
  }
  piVar5 = (int *)param_1[3];
  if (piVar5 != piVar2) {
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 4))(piVar5);
    }
    param_1[3] = (int)piVar2;
  }
  iVar1 = fn_00145b00(0x48,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_001138cc(iVar1,&DAT_002f4b54);
  }
  piVar5 = (int *)param_1[4];
  if (piVar5 != piVar2) {
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 4))(piVar5);
    }
    param_1[4] = (int)piVar2;
  }
  iVar1 = fn_00145b00(0x48,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_001138ac(iVar1,&DAT_002f4b54);
  }
  piVar5 = (int *)param_1[5];
  if (piVar5 != piVar2) {
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 4))(piVar5);
    }
    param_1[5] = (int)piVar2;
  }
  iVar1 = fn_00145b00(0x80,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_00110518();
  }
  piVar5 = (int *)param_1[6];
  if (piVar5 != piVar2) {
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 4))(piVar5);
    }
    param_1[6] = (int)piVar2;
  }
  fn_0011050c(param_1[6],param_1[2],param_1[3]);
  iVar1 = fn_00145b00(0x80,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_00110518();
  }
  piVar5 = (int *)param_1[7];
  if (piVar5 != piVar2) {
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 4))(piVar5);
    }
    param_1[7] = (int)piVar2;
  }
  fn_0011050c(param_1[7],param_1[4],param_1[5]);
  iVar3 = fn_00145b00(0x5b3a8,&DAT_00812c8c);
  iVar1 = 0;
  if (iVar3 != 0) {
    iVar1 = fn_004204e8();
  }
  iVar3 = param_1[10];
  if (iVar3 != iVar1) {
    if (iVar3 != 0) {
      fn_0012303c(iVar3);
      fn_002feef8();
    }
    param_1[10] = iVar1;
  }
  iVar1 = fn_00145b00(0x88,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_003ca00c(iVar1,0);
  }
  piVar5 = (int *)param_1[8];
  if (piVar5 != piVar2) {
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 8))(piVar5);
    }
    param_1[8] = (int)piVar2;
  }
  *(int *)(param_1[8] + 8) = param_1[6];
  *(int *)(param_1[8] + 0xc) = param_1[7];
  *(int *)(param_1[8] + 0x10) = *param_1;
  *(int *)(param_1[8] + 0x14) = param_1[1];
  *(int *)(param_1[8] + 0x2c) = param_1[10];
  iVar1 = fn_00145b00(100,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_003ca69c(iVar1,param_1[8]);
  }
  piVar5 = (int *)param_1[9];
  if (piVar5 != piVar2) {
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 4))(piVar5);
    }
    param_1[9] = (int)piVar2;
  }
  fn_002cd71c();
  iVar3 = fn_00145b00(0x14,&DAT_00812c8c);
  iVar1 = 0;
  if (iVar3 != 0) {
    iVar1 = fn_003e9870();
  }
  iVar3 = param_1[0xb];
  if (iVar3 != iVar1) {
    if (iVar3 != 0) {
      fn_00122d10(iVar3);
      fn_002feef8();
    }
    param_1[0xb] = iVar1;
  }
  fn_003e9234(param_1[0xb]);
  fn_003ca698(param_1[9]);
  iVar1 = *param_1;
  uVar6 = *(undefined4 *)(param_1[1] + 0x3c);
  uVar4 = fn_00129004();
  fn_002419f4(uVar4,iVar1,uVar6);
  iVar1 = param_1[2];
  iVar3 = param_1[3];
  uVar4 = fn_00129004();
  fn_002416b4(uVar4,iVar1,iVar3);
  iVar1 = param_1[4];
  iVar3 = param_1[5];
  uVar4 = fn_00129004();
  fn_00241948(uVar4,iVar1,iVar3);
                    /* WARNING: Subroutine does not return */
  fn_0011dda8();
}



void fn_002f4624(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 auStack_1db98 [121724];
  
  if (*(char *)(param_1 + 0x38) != param_2) {
    *(char *)(param_1 + 0x38) = (char)param_2;
    if (*(int *)(param_1 + 0x30) != 0) {
      uVar1 = *(undefined4 *)(*(int *)(DAT_00897804 + 0xc) + 4);
      uVar2 = *(undefined4 *)(param_1 + 0x30);
      fn_0017821c(auStack_1db98,uVar2,0x1db7c);
      fn_0017821c(uVar2,uVar1,0x1db7c);
      fn_001221d4(*(undefined4 *)(DAT_00897804 + 0xc),auStack_1db98,0);
    }
    if (*(int *)(param_1 + 0x34) != 0) {
      uVar1 = *(undefined4 *)(*(int *)(DAT_00897804 + 0x18) + 4);
      uVar2 = *(undefined4 *)(param_1 + 0x34);
      fn_0017821c(auStack_1db98,uVar2,0xc88);
      fn_0017821c(uVar2,uVar1,0xc88);
      fn_00121118(*(undefined4 *)(DAT_00897804 + 0x18),auStack_1db98);
    }
  }
  return;
}



void fn_002f4428(int *param_1)

{
  int iVar1;
  uint uVar2;
  undefined1 auStack_10 [8];
  
  iVar1 = fn_006f7da4();
  if ((iVar1 != 0) || (iVar1 = fn_0069fb20(param_1), iVar1 != 0)) {
    fn_001fbe80(auStack_10,(char)param_1[0x41]);
    fn_006a4518(param_1,auStack_10);
  }
  iVar1 = fn_006f7da4(param_1);
  if (iVar1 != 0) {
    uVar2 = fn_001fb484((char)param_1[0x41]);
    if ((uVar2 & 0x20000) != 0) {
      (**(code **)(*param_1 + 0x60))(param_1,0);
    }
    uVar2 = fn_001fb484((char)param_1[0x41]);
    if ((uVar2 & 0x10000) != 0) {
      (**(code **)(*param_1 + 100))(param_1);
    }
    uVar2 = fn_001fb484((char)param_1[0x41]);
    if ((uVar2 & 0x80000) != 0) {
      (**(code **)(*param_1 + 0x68))(param_1,0);
    }
    uVar2 = fn_001fbd34((char)param_1[0x41]);
    if ((uVar2 & 0x40000) != 0) {
      (**(code **)(*param_1 + 0x68))(param_1,1);
    }
    uVar2 = fn_001fb484((char)param_1[0x41]);
    if (((((uVar2 & 0x10) != 0) || (uVar2 = fn_001fb484((char)param_1[0x41]), (uVar2 & 0x40) != 0))
        || (uVar2 = fn_001fb484((char)param_1[0x41]), (uVar2 & 0x80) != 0)) ||
       (uVar2 = fn_001fb484((char)param_1[0x41]), (uVar2 & 0x20) != 0)) {
      (**(code **)(*param_1 + 0x94))(param_1);
    }
  }
  fn_00144810(DAT_008977e8);
  iVar1 = fn_006a8730();
  if ((iVar1 == 1) && (uVar2 = fn_001fb730((char)param_1[0x41]), (uVar2 & 0x40000) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x002f45c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x70))(param_1,1);
    return;
  }
  return;
}



void fn_002f41b0(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,uint param_5,
                 int param_6,uint param_7,undefined4 param_8,undefined4 param_9,int param_10,
                 int param_11,char *param_12)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  bool bVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  uint local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  undefined1 auStack_50 [28];
  int iStack_34;
  uint local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  uVar7 = CONCAT44(param_8,param_9);
  uVar8 = (ulonglong)param_7;
  iVar3 = param_1;
  iStack_34 = param_1;
  local_30 = param_2;
  local_2c = param_3;
  local_28 = param_4;
  if (param_11 == 0) {
    fn_00301a9c(&local_70,&DAT_007ba154,0x1e);
    iVar3 = 0;
    do {
      if (*(byte *)(param_10 + iVar3) != 0) {
        fn_002eb5ac(auStack_50,iVar3,*(byte *)(param_10 + iVar3) - 1);
        fn_0019bc50(auStack_50 + iVar3 * 6 + -0x20,auStack_50);
      }
      param_7 = (uint)uVar8;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 5);
    uVar2 = fn_0068eb30(DAT_008977e8);
    uVar2 = fn_00265604(uVar2,local_2c);
    iVar3 = fn_0068eb30(DAT_008977e8);
    if (((int)local_30 < 0) ||
       ((uint)((*(int *)(iVar3 + 8) - *(int *)(iVar3 + 4)) / 0x34) <= local_30)) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)(*(int *)(iVar3 + 0x10) + local_30 * 4);
    }
    iVar3 = fn_0068eb30(DAT_008977e8);
    if ((int)local_30 < 0) {
LAB_002f42d8:
      iVar3 = 0;
    }
    else {
      if ((uint)((*(int *)(iVar3 + 8) - *(int *)(iVar3 + 4)) / 0x34) <= local_30) goto LAB_002f42d8;
      iVar3 = *(int *)(iVar3 + 4) + local_30 * 0x34;
    }
    iVar3 = fn_00294440(iVar3,uVar4,uVar2,&local_70);
  }
  if (param_12 != (char *)0x0) {
    iVar3 = param_6;
  }
  if (param_12 == (char *)0x0 || iVar3 == -1) goto LAB_002f43e4;
  uVar2 = fn_0068eb30(DAT_008977e8);
  uVar2 = fn_00265604(uVar2,param_6);
  iVar3 = fn_0068eb30(DAT_008977e8);
  if (((int)param_5 < 0) || ((uint)((*(int *)(iVar3 + 8) - *(int *)(iVar3 + 4)) / 0x34) <= param_5))
  {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(*(int *)(iVar3 + 0x10) + param_5 * 4);
  }
  iVar3 = fn_0068eb30(DAT_008977e8);
  if ((int)param_5 < 0) {
LAB_002f43a0:
    iVar3 = 0;
  }
  else {
    if ((uint)((*(int *)(iVar3 + 8) - *(int *)(iVar3 + 4)) / 0x34) <= param_5) goto LAB_002f43a0;
    iVar3 = *(int *)(iVar3 + 4) + param_5 * 0x34;
  }
  fn_002cd5b0(iVar3,uVar4,uVar2,param_12);
  cVar1 = *param_12;
  bVar5 = cVar1 == '\0';
  if (bVar5) {
    cVar1 = param_12[6];
  }
  bVar6 = bVar5 && cVar1 == '\0';
  if (bVar5 && cVar1 == '\0') {
    bVar6 = param_12[0xc] == '\0';
  }
  if (!bVar6) {
    *(undefined1 *)(param_1 + 0x22c) = 1;
  }
LAB_002f43e4:
  local_6c = (undefined4)((ulonglong)uVar7 >> 0x20);
  local_68 = (undefined4)uVar7;
  local_64 = param_11;
  local_70 = param_7;
  fn_006a3dd4(param_1,local_30,local_28,param_5);
  return;
}


