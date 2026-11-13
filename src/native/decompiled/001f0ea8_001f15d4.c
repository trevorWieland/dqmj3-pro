#include "001f0ea8_001f15d4.h"



void fn_001f15d4(undefined4 param_1,undefined1 param_2)

{
  fn_002a6ed8(*(undefined4 *)(*(int *)(DAT_008977e0 + 0x40) + 0x10),param_2);
  return;
}



void fn_001f15a0(void)

{
  int iVar1;
  
  iVar1 = fn_006f7a5c(DAT_008977e0);
  *(undefined1 *)(iVar1 + 0xc) = 2;
  fn_006f7a5c(DAT_008977e0);
  fn_005456d0();
  return;
}



void fn_001f154c(void)

{
  fn_006f75ac(DAT_008977e0);
  fn_0038fef0();
  return;
}



void fn_001f151c(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)fn_006f72e0(DAT_008977e0);
  (**(code **)(*piVar1 + 0x38))();
  *(undefined1 *)(param_1 + 0xf95) = 1;
  return;
}



bool fn_001f14d8(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined1 auStack_10 [2];
  ushort local_e;
  
  uVar1 = fn_006b86f4(*(undefined4 *)(DAT_00897804 + 0x30));
  fn_00166824(auStack_10,uVar1);
  return param_2 <= (int)(uint)local_e;
}



undefined4 fn_001f12ac(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_1a8 [128];
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [132];
  
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  fn_0011d1bc(uVar3);
  fn_001ec69c(param_1,uVar3);
  if ((**(int **)(DAT_008977e0 + 0x40) == 0) || (iVar1 = fn_002d830c(param_2), iVar1 != 0)) {
    fn_00101a50(auStack_1a8,0x40,L"patch:/data/Script/Field/Event/%s/%s.nut",param_2,param_2);
  }
  else {
    fn_00101a50(auStack_1a8,0x40,L"rom:/data/Script/Field/Event/%s/%s_DISC.nut",param_2,param_2);
  }
  iVar1 = fn_006a8cbc(param_1,L"rom:/data/Script/Field/Event/EventCommon.nut",(char *)&DAT_001f14bc);
  uVar3 = 0;
  if ((iVar1 != 0) && (iVar1 = fn_006a8cbc(param_1,auStack_1a8,(char *)&DAT_001f14b4), uVar3 = 0, iVar1 != 0)) {
    *(undefined1 *)(param_1 + 0x7c) = 1;
    uVar3 = fn_00121838(DAT_00897800,L"patch:/data/Script/Field/Event/EventCommon.mes",1);
    *(undefined4 *)(param_1 + 0x84) = uVar3;
    fn_00101a50(auStack_128,0x40,L"patch:/data/Script/Field/Event/%s/%s.bin",param_2,param_2);
    uVar3 = fn_001287b4();
    iVar1 = fn_0011c184(auStack_128,uVar3,0x80,5);
    *(int *)(param_1 + 0x74) = iVar1;
    if ((iVar1 != 0) && (iVar1 = fn_00145ac0(), iVar1 != 0)) {
      iVar1 = *(int *)(param_1 + 0x78);
      uVar3 = fn_00145ac0(*(undefined4 *)(param_1 + 0x74));
      *(undefined4 *)(iVar1 + 4) = uVar3;
    }
    fn_00101a50(auStack_a8,0x40,L"patch:/data/Script/Field/Event/%s/%s.mes",param_2,param_2);
    if (0 < *(int *)(param_1 + 0x80)) {
      fn_0025fa58(DAT_00897800);
      *(undefined4 *)(param_1 + 0x80) = 0;
    }
    uVar3 = fn_001287b4();
    uVar3 = fn_0011c184(auStack_a8,uVar3,0x80,5);
    iVar1 = fn_00145ac0();
    if (iVar1 != 0) {
      uVar2 = fn_00121838(DAT_00897800,auStack_a8,1);
      *(undefined4 *)(param_1 + 0x80) = uVar2;
    }
    fn_0012d73c(uVar3);
    uVar3 = 1;
  }
  return uVar3;
}



void fn_001f1290(void)

{
  int iVar1;
  
  iVar1 = fn_006f756c(DAT_008977e0);
                    /* WARNING: Could not recover jumptable at 0x006babec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(iVar1 + 0x58) + 0x18))();
  return;
}



void fn_001f125c(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = fn_006f72b4(DAT_008977e0);
  fn_0021bb28(uVar1,param_2,0);
  return;
}



void fn_001f1248(int param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  if (*(int *)(param_1 + 0xe4c) == 0) {
    return;
  }
  if (param_2 < 0x40) {
    iVar2 = *(int *)(param_1 + 0xe4c) + param_2 * 4;
    if (*(int *)(iVar2 + 4) != 0) {
      fn_002582d8();
      piVar3 = (int *)(iVar2 + 4);
      piVar1 = (int *)*piVar3;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))();
      }
      *piVar3 = 0;
    }
  }
  return;
}



void fn_001f1234(void)

{
  fn_002b0b18(*(undefined4 *)(DAT_00897804 + 100));
  return;
}



void fn_001f11d4(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = fn_00129d4c(*(undefined4 *)(DAT_008977e0 + 0x1c));
  if (iVar1 != -1) {
    fn_0017fe34();
    fn_00697004(DAT_008977e0,iVar1,0xffffffff,param_3);
    *(undefined1 *)(param_1 + 0xf94) = 0;
  }
  return;
}



void fn_001f1178(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  *(undefined1 *)(DAT_008977d8 + 0x44) = 1;
  iVar1 = fn_006f7a0c(DAT_008977e0);
  fn_002580f8(*(undefined4 *)(iVar1 + 0x38),param_2);
  return;
}



int fn_001f111c(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = -1;
  iVar1 = fn_006abd58(param_1,param_3);
  if (iVar1 != 0) {
    iVar3 = fn_001eb83c(param_1,param_2,iVar1 + 0x20);
    piVar2 = *(int **)(param_1 + iVar3 * 0x2c + 0x8c);
    (**(code **)(*piVar2 + 0x14))(piVar2,iVar1 + 0x2c);
  }
  return iVar3;
}



undefined4 fn_001f10cc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_00145b00(0x14,&DAT_00812c8c);
  if ((iVar1 == 0) || (iVar1 = fn_00311824(iVar1,param_2,param_3), iVar1 == 0)) {
    return 0xffffffff;
  }
  uVar2 = fn_0015a130(param_1);
  return uVar2;
}



void fn_001f0fb4(int param_1,uint param_2,undefined4 param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  if (0x13 < param_2) {
    return;
  }
  *(undefined4 *)(param_1 + 0x88) = param_3;
  fn_001cf08c(param_1,(&PTR_s_TouchNpc_007c1d94)[param_2]);
  *(char *)(param_1 + 0xe84) = (char)param_2;
  *(undefined1 *)(param_1 + 0xf99) = 0;
  iVar2 = fn_006f75ac(DAT_008977e0);
  if ((iVar2 != 0) && (iVar3 = fn_001759d0(*(undefined4 *)(iVar2 + 8)), iVar3 != 0)) {
    fn_0039006c(iVar2);
  }
  bVar1 = *(byte *)(param_1 + 0xe84);
  if (bVar1 != 0xb) {
    if ((char)bVar1 < '\f') {
      if (1 < bVar1) {
        return;
      }
    }
    else if (bVar1 != 0xc) {
      return;
    }
  }
  if ((bVar1 != 1) ||
     (iVar2 = fn_006c2a08(*(int *)(param_1 + 0xe4c),
                           *(undefined4 *)(*(int *)(param_1 + 0xe4c) + 0x104)), iVar2 != 0)) {
    fn_00698fb8(DAT_008977e0,1);
    if ((*(char *)(param_1 + 0xe84) != '\x01') ||
       (iVar2 = fn_006c2a2c(*(int *)(param_1 + 0xe4c),
                             *(undefined4 *)(*(int *)(param_1 + 0xe4c) + 0x104)), iVar2 != 0)) {
      piVar4 = (int *)fn_006f7a84(DAT_008977e0);
      (**(code **)(*piVar4 + 0x44))(piVar4,0,4);
    }
    *(undefined1 *)(param_1 + 0xf99) = 1;
  }
  *(undefined1 *)(param_1 + 0xf94) = 1;
  return;
}



void fn_001f0f00(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  iVar1 = fn_006f7a84(DAT_008977e0);
  if (*(int *)(iVar1 + 0x408) == param_2) {
    return;
  }
  iVar1 = fn_006f7a84(DAT_008977e0);
  *(int *)(iVar1 + 0x408) = param_2;
  pcVar3 = "";
  iVar1 = fn_006f7a84(DAT_008977e0);
  iVar1 = *(int *)(iVar1 + 0x408);
  if (iVar1 == 1) {
    pcVar3 = (char *)&DAT_001f0f8c;
  }
  else if (iVar1 == 2) {
    pcVar3 = (char *)&DAT_001f0f98;
  }
  else if (iVar1 == 3) {
    pcVar3 = (char *)&DAT_001f0fa8;
  }
  uVar2 = fn_006945fc(DAT_008977e0,pcVar3);
  fn_003b679c(*(undefined4 *)(DAT_008977e0 + 0x54),uVar2);
  return;
}



void fn_001f0ebc(int param_1,uint param_2)

{
  float in_s0;
  
  if (((0.0 <= in_s0) && (-1 < (int)param_2)) && (param_2 < 0x50)) {
    if (*(int *)(param_1 + param_2 * 0x2c + 0x8c) != 0) {
      fn_001da640();
      return;
    }
  }
  return;
}



void fn_001f0ea8(int param_1,uint param_2,undefined1 param_3)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xe4c) == 0) {
    return;
  }
  if ((param_2 < 0x40) &&
     (iVar1 = *(int *)(*(int *)(param_1 + 0xe4c) + param_2 * 4 + 4), iVar1 != 0)) {
    *(undefined1 *)(iVar1 + 0xd) = param_3;
  }
  return;
}


