#include "0033d910_0033ea24.h"

static void svc_0xa(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0xa }
#endif
}


undefined4 fn_0033ea24(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 5) == 'l') {
    uVar1 = 3;
  }
  else if (*(char *)(param_1 + 5) == 'm') {
    uVar1 = 2;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



void fn_0033e918(int *param_1)

{
  if ((uint)param_1[0x5c] < 2 || param_1[0x5c] == 3) {
    (**(code **)(*param_1 + 0x44))(param_1,1,4,0);
                    /* WARNING: Subroutine does not return */
    fn_001638a0();
  }
  return;
}



int fn_0033e8d4(int param_1)

{
  fn_0033e6c8();
  if (*(int **)(param_1 + 0x10) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x10) + 4))();
  }
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xc) + 4))();
  }
  return param_1;
}



undefined1 * fn_0033e82c(undefined1 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  *param_1 = 0xff;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  iVar2 = fn_00145b00(0x1a8,&DAT_00812c8c);
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = fn_00337de8();
  }
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  param_1[0x18] = 0xff;
  if ((((byte)DAT_008c62fc & 1) == 0) && (iVar2 = fn_00303afc(&DAT_008c62fc), iVar2 != 0)) {
    DAT_008f9e2c = 0;
    DAT_008f9e30 = 0;
    DAT_008f9e34 = 0;
  }
  uVar1 = DAT_008f9e34;
  uVar3 = DAT_008f9e30;
  *(undefined4 *)(param_1 + 0x1c) = DAT_008f9e2c;
  *(undefined4 *)(param_1 + 0x20) = uVar3;
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  return param_1;
}



void fn_0033e6c8(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  fn_00337b0c(*(undefined4 *)(param_1 + 0x10));
  fn_0012d73c(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0;
  fn_0012d73c(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    uVar2 = fn_005e0a8c();
    if (*(int **)(param_1 + 0xc) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0xc) + 4))();
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
    fn_00143a58(uVar2);
  }
  *(undefined1 *)(param_1 + 0x18) = 0xff;
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  if ((((byte)DAT_008c62fc & 1) == 0) && (iVar3 = fn_00303afc(&DAT_008c62fc), iVar3 != 0)) {
    DAT_008f9e2c = 0;
    DAT_008f9e30 = 0;
    DAT_008f9e34 = 0;
  }
  uVar1 = DAT_008f9e34;
  uVar2 = DAT_008f9e30;
  *(undefined4 *)(param_1 + 0x1c) = DAT_008f9e2c;
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  return;
}



void fn_0033e678(undefined4 param_1)

{
  undefined4 uVar1;
  undefined1 auStack_208 [520];
  
  uVar1 = fn_006afaf4(*(undefined4 *)(DAT_008977e0 + 0x1c),param_1);
  fn_00101a50(auStack_208,0x100,L"rom:/data/Field/Table/FixedLod/flight/%s_flight.nut",uVar1);
  fn_00147fd4(auStack_208,5);
  return;
}



void fn_0033e488(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 auStack_210 [528];
  
  uVar2 = *(undefined4 *)(DAT_008977e0 + 200);
  uVar1 = fn_006afaf4(*(undefined4 *)(DAT_008977e0 + 0x1c),param_1);
  fn_00101a50(auStack_210,0x100,L"rom:/data/Field/Table/FixedLod/demo/%s_demo%03d.nut",uVar1,uVar2)
  ;
  fn_00147fd4(auStack_210,5);
  return;
}



void fn_0033e3a0(char *param_1,char param_2,undefined4 param_3,undefined4 *param_4,int param_5)

{
  char cVar1;
  int iVar2;
  undefined4 extraout_r1;
  undefined4 uVar3;
  undefined4 uVar4;
  
  param_1[0x18] = param_2;
  *(undefined4 *)(param_1 + 0x14) = param_3;
  uVar3 = param_4[1];
  uVar4 = param_4[2];
  *(undefined4 *)(param_1 + 0x1c) = *param_4;
  *(undefined4 *)(param_1 + 0x20) = uVar3;
  *(undefined4 *)(param_1 + 0x24) = uVar4;
  if (param_5 == 0) {
    if (*param_1 == -1) {
      cVar1 = '\0';
    }
    else {
      cVar1 = '\x03';
    }
    *param_1 = cVar1;
  }
  else if (*param_1 == -1) {
    fn_0033d924(param_1);
    uVar3 = extraout_r1;
    while ((iVar2 = fn_00145aac(*(undefined4 *)(param_1 + 4),uVar3), iVar2 == 0 ||
           (iVar2 = fn_00145aac(*(undefined4 *)(param_1 + 8)), iVar2 == 0))) {
      uVar3 = 0;
      svc_0xa();
    }
    fn_0033e4e8(param_1);
    while ((iVar2 = fn_006c0e8c(*(undefined4 *)(param_1 + 0x10)), iVar2 != 0 ||
           (iVar2 = fn_006c0e58(*(undefined4 *)(param_1 + 0x10)), iVar2 != 0))) {
      fn_00337790(*(undefined4 *)(param_1 + 0x10));
      fn_0012d6a4(1000000,0);
    }
  }
  return;
}



void fn_0033e4e8(undefined1 *param_1)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  uint local_2c;
  uint local_28;
  int local_24;
  float local_20;
  float local_1c;
  float local_18;
  
  if (((*(int *)(param_1 + 4) == 0) || (iVar2 = fn_00145aac(), iVar2 != 0)) &&
     ((*(int *)(param_1 + 8) == 0 || (iVar2 = fn_00145aac(), iVar2 != 0)))) {
    local_2c = 0;
    local_28 = 0;
    local_24 = 0;
    fn_0033db6c(param_1,&local_2c);
    iVar2 = (int)(local_28 - local_2c) / 0x20c;
    if (iVar2 == 0) {
      uVar1 = 0xff;
    }
    else {
      fn_0033756c(*(undefined4 *)(param_1 + 0x10),
                   *(undefined4 *)(*(int *)(DAT_008977e0 + 8) + 0x24),
                   *(undefined4 *)(DAT_008977e0 + 0x18),iVar2,*(undefined4 *)(param_1 + 0xc));
      uVar3 = 0;
      iVar2 = (int)(local_28 - local_2c) >> 0x1f;
      if ((int)(local_28 - local_2c) / 0x20c + iVar2 != iVar2) {
        do {
          iVar2 = local_2c + uVar3 * 0x20c;
          local_20 = *(float *)(iVar2 + 0x200) + *(float *)(param_1 + 0x1c);
          local_1c = *(float *)(iVar2 + 0x204) + *(float *)(param_1 + 0x20);
          local_18 = *(float *)(iVar2 + 0x208) + *(float *)(param_1 + 0x24);
          fn_00337610(*(undefined4 *)(param_1 + 0x10),uVar3,iVar2,&local_20);
          uVar3 = uVar3 + 1;
        } while (uVar3 < (uint)((int)(local_28 - local_2c) / 0x20c));
      }
      uVar1 = 2;
    }
    *param_1 = uVar1;
    uVar3 = local_2c;
    if (local_28 < local_2c) {
      do {
        uVar3 = uVar3 + 0x20c;
      } while (uVar3 != local_28);
    }
    fn_001008c4(local_2c,(int)(local_24 - local_2c) / 0x20c,0);
  }
  return;
}



void fn_0033d924(undefined1 *param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 local_220 [2];
  undefined1 auStack_218 [512];
  
  uVar6 = 0;
  bVar1 = true;
  if (param_1[0x18] == '\0') {
    uVar6 = 0x400000;
  }
  else if (param_1[0x18] == '\x01') {
    uVar6 = 0x200000;
  }
  iVar2 = fn_00145b00(8,&DAT_00812c8c);
  piVar4 = (int *)0x0;
  if (iVar2 != 0) {
    uVar3 = fn_00143ac8(uVar6,4);
    piVar4 = (int *)fn_005e0a98(iVar2,uVar3,uVar6,0x32);
  }
  piVar5 = *(int **)(param_1 + 0xc);
  if (piVar5 != piVar4) {
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 4))(piVar5);
    }
    *(int **)(param_1 + 0xc) = piVar4;
  }
  fn_00211d58(local_220,*(undefined4 *)(param_1 + 0x14));
  uVar6 = fn_00118290();
  uVar6 = fn_0012d6b0(local_220,uVar6,0x80,5);
  *(undefined4 *)(param_1 + 4) = uVar6;
  iVar2 = fn_00145aac();
  if (iVar2 == 2) {
    fn_0012d73c(*(undefined4 *)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
    if (*(int *)(param_1 + 0xc) != 0) {
      uVar6 = fn_005e0a8c();
      if (*(int **)(param_1 + 0xc) != (int *)0x0) {
        (**(code **)(**(int **)(param_1 + 0xc) + 4))();
        *(undefined4 *)(param_1 + 0xc) = 0;
      }
      fn_00143a58(uVar6);
    }
    bVar1 = false;
  }
  uVar6 = fn_006afaf4(*(undefined4 *)(DAT_008977e0 + 0x1c),*(undefined4 *)(param_1 + 0x14));
  if (param_1[0x18] == '\0') {
    local_220[0] = *(undefined4 *)(DAT_008977e0 + 200);
    fn_00101a50(auStack_218,0x100,L"rom:/data/Field/Table/FixedLod/demo/%s_demo%03d.nut",uVar6);
  }
  else if (param_1[0x18] == '\x01') {
    fn_00101a50(auStack_218,0x100,L"rom:/data/Field/Table/FixedLod/flight/%s_flight.nut",uVar6);
  }
  uVar6 = fn_001287b4();
  uVar6 = fn_0012d6b0(auStack_218,uVar6,0x80,5);
  *(undefined4 *)(param_1 + 8) = uVar6;
  iVar2 = fn_00145aac();
  if (iVar2 == 2) {
    fn_0012d73c(*(undefined4 *)(param_1 + 8));
    *(undefined4 *)(param_1 + 8) = 0;
    fn_0012d73c(*(undefined4 *)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
    if (*(int *)(param_1 + 0xc) != 0) {
      uVar6 = fn_005e0a8c();
      if (*(int **)(param_1 + 0xc) != (int *)0x0) {
        (**(code **)(**(int **)(param_1 + 0xc) + 4))();
        *(undefined4 *)(param_1 + 0xc) = 0;
      }
      fn_00143a58(uVar6);
    }
  }
  else if (bVar1) {
    *param_1 = 1;
    return;
  }
  *param_1 = 0xff;
  return;
}



void fn_0033d910(undefined1 *param_1)

{
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  *param_1 = 3;
  return;
}


