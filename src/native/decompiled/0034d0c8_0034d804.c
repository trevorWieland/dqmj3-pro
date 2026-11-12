#include "0034d0c8_0034d804.h"



void fn_0034d804(int *param_1)

{
  fn_002c3e74();
  (**(code **)(*param_1 + 0x15c))(param_1);
                    /* WARNING: Could not recover jumptable at 0x0034d830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x158))(param_1);
  return;
}



void fn_0034d7dc(void)

{
                    /* WARNING: Subroutine does not return */
  fn_003e5aa4();
}



void fn_0034d7a4(int *param_1,undefined4 param_2)

{
  if ((char)param_1[0x37] == '\0') {
                    /* WARNING: Could not recover jumptable at 0x0034d7d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x140))(param_1,param_2);
    return;
  }
  return;
}



void fn_0034d72c(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((char)param_1[0x37] == '\0') {
    return;
  }
  iVar1 = param_1[0x33];
  iVar3 = *(int *)(iVar1 + 0x70);
  if (iVar3 <= *(int *)(iVar1 + 0x3c)) {
    fn_0068ab44(param_1,0x100094d);
    return;
  }
  iVar2 = *(int *)(iVar1 + 0x3c) + 10;
  if (iVar3 < iVar2) {
    iVar2 = iVar3;
  }
  *(int *)(iVar1 + 0x3c) = iVar2;
  (**(code **)(*param_1 + 0x180))(param_1,0);
  fn_0068ab44(param_1,0x1000957);
  return;
}



void fn_0034d6b8(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((char)param_1[0x37] == '\0') {
    return;
  }
  iVar2 = param_1[0x33];
  iVar1 = *(int *)(iVar2 + 0x3c);
  iVar3 = *(int *)(iVar2 + 0x6c);
  if (iVar1 <= iVar3) {
    fn_0068ab44(param_1,0x100094d);
    return;
  }
  if (10 < iVar1) {
    iVar3 = iVar1 + -10;
  }
  *(int *)(iVar2 + 0x3c) = iVar3;
  (**(code **)(*param_1 + 0x180))(param_1,0);
  fn_0068ab44(param_1,0x1000957);
  return;
}



void fn_0034d648(int *param_1)

{
  int iVar1;
  
  if ((char)param_1[0x37] == '\0') {
    return;
  }
  iVar1 = param_1[0x33];
  if (*(int *)(iVar1 + 0x6c) < *(int *)(iVar1 + 0x3c)) {
    *(int *)(iVar1 + 0x3c) = *(int *)(iVar1 + 0x3c) + -1;
    (**(code **)(*param_1 + 0x180))(param_1,0);
    fn_0068ab44(param_1,0x1000957);
    return;
  }
  fn_0068ab44(param_1,0x100094d);
  return;
}



void fn_0034d5a4(int *param_1)

{
  int iVar1;
  
  if ((char)param_1[0x37] == '\0') {
    return;
  }
  iVar1 = param_1[0x33];
  if (*(int *)(iVar1 + 0x3c) < *(int *)(iVar1 + 0x70)) {
    *(int *)(iVar1 + 0x3c) = *(int *)(iVar1 + 0x3c) + 1;
    (**(code **)(*param_1 + 0x180))(param_1,0);
    fn_0068ab44(param_1,0x1000957);
    return;
  }
  fn_0068ab44(param_1,0x100094d);
  return;
}



void fn_0034d580(int param_1)

{
  fn_00689828(param_1,1);
  fn_00327a7c(*(undefined4 *)(param_1 + 0xcc));
  *(undefined1 *)(param_1 + 0xdc) = 0;
  return;
}



void fn_0034d4e0(int *param_1,int param_2)

{
  undefined2 uVar1;
  int iVar2;
  uint in_fpscr;
  undefined4 local_1c;
  float fStack_18;
  undefined4 local_14;
  
  fn_00689828(param_1,0);
  iVar2 = fn_006ba284(param_1);
  param_1[0x35] = param_2 + iVar2 * 8;
  uVar1 = (**(code **)(*param_1 + 0x178))(param_1);
  fStack_18 = (float)VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x16) & 3);
  fStack_18 = fStack_18 * -18.0;
  local_1c = 0;
  local_14 = 0;
  fn_00327a24(param_1[0x33],1,uVar1,1,&local_1c);
  *(undefined1 *)(param_1 + 0x37) = 1;
  fn_0068ab44(param_1,0x100094b);
  return;
}



void fn_0034d43c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 uVar7;
  undefined4 unaff_r6;
  
  uVar7 = *(undefined4 *)(DAT_00897804 + 0x14);
  uVar2 = (**(code **)(*param_1 + 0x17c))(param_1);
  iVar3 = fn_006cb910(param_1,uVar2);
  if (iVar3 == 0) {
    iVar3 = fn_006b2aa0(uVar7,(int)(short)uVar2);
  }
  else {
    iVar3 = fn_003e5678(param_1,uVar2);
  }
  iVar4 = fn_0068897c(param_1[0x1c],(char *)&DAT_003e5534);
  iVar5 = fn_0068897c(param_1[0x1c],(char *)&DAT_003e553c);
  iVar6 = fn_0068897c(param_1[0x1c],(char *)&DAT_003e5544);
  if (iVar3 < 1) {
    *(byte *)(iVar4 + 0x44) = *(byte *)(iVar4 + 0x44) & 0xfe;
    *(byte *)(iVar5 + 0x44) = *(byte *)(iVar5 + 0x44) & 0xfe;
    bVar1 = *(byte *)(iVar6 + 0x44) & 0xfe | 1;
  }
  else {
    *(byte *)(iVar4 + 0x44) = *(byte *)(iVar4 + 0x44) & 0xfe | 1;
    fn_00688c04(iVar4,iVar3,0,param_4,unaff_r4,unaff_r5,unaff_r6);
    *(byte *)(iVar5 + 0x44) = *(byte *)(iVar5 + 0x44) & 0xfe | 1;
    bVar1 = *(byte *)(iVar6 + 0x44) & 0xfe;
  }
  *(byte *)(iVar6 + 0x44) = bVar1;
  return;
}



void fn_0034d3e0(int *param_1)

{
  if ((char)param_1[0x37] == '\0') {
    return;
  }
  (**(code **)(*param_1 + 0x180))(param_1,1);
  (**(code **)(*param_1 + 0x14c))(param_1);
  fn_0068ab44(param_1,0x100094c);
  fn_003e560c(param_1);
  return;
}



void fn_0034d38c(int *param_1)

{
  if ((char)param_1[0x37] != '\0') {
    (**(code **)(*param_1 + 0x174))(param_1);
    (**(code **)(*param_1 + 0x14c))(param_1);
    fn_00689828(param_1,0);
    param_1[0x32] = 0;
    param_1[0x36] = 1;
  }
  return;
}



undefined4 fn_0034d2b0(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  (**(code **)(*param_1 + 0x160))(param_1);
  fn_003e56e4(param_1);
  iVar1 = fn_00145b00(0x80,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_00327fb4(iVar1,param_1[1],1);
  }
  piVar3 = (int *)param_1[0x33];
  if (piVar3 != piVar2) {
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))(piVar3);
    }
    param_1[0x33] = (int)piVar2;
  }
  *(int *)(param_1[0x33] + 0x30) = param_1[0x1c];
  (**(code **)(*(int *)param_1[0x33] + 0x10))((int *)param_1[0x33],param_1[0x12]);
  (**(code **)(*param_1 + 0x15c))(param_1);
  fn_003e5b40(param_1);
  (**(code **)(*param_1 + 0x158))(param_1);
  (**(code **)(*param_1 + 0x164))(param_1);
  return 1;
}



void fn_0034d218(int *param_1)

{
  int iVar1;
  
  fn_00689828(param_1,1);
  param_1[0x36] = 0;
  param_1[0x32] = 0;
  fn_003e560c(param_1);
  iVar1 = fn_006b64b0(*(undefined4 *)(DAT_00897804 + 8));
  fn_0025bd60(*(undefined4 *)(DAT_00897804 + 8),param_1[0x31] + iVar1);
  fn_003e5b40(param_1);
  (**(code **)(*param_1 + 0x170))(param_1);
                    /* WARNING: Could not recover jumptable at 0x0034d288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x158))(param_1);
  return;
}



void fn_0034d1e8(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_003fedc0();
  puVar1[0x40] = 0;
  *puVar1 = &DAT_00825e1c;
  return;
}



undefined1 * fn_0034d0c8(int param_1,int param_2)

{
  undefined2 uVar1;
  int iVar2;
  undefined1 auStack_108 [224];
  undefined4 local_28;
  ushort local_24;
  undefined1 auStack_18 [4];
  undefined1 auStack_14 [4];
  
  iVar2 = fn_006ba284();
  fn_0017821c(auStack_108,
               *(undefined4 *)(param_1 + (iVar2 * *(int *)(param_1 + 0xfc) + param_2) * 4 + 0x104),
               0xf0);
  fn_0025f3f4(*(undefined4 *)(param_1 + 0x100),auStack_108);
  local_24 = *(ushort *)(*(int *)(param_1 + 0xb0) + 8);
  local_28 = 1;
  iVar2 = *(int *)(param_1 + 0x100);
  *(undefined4 *)(iVar2 + 0x554) = 1;
  *(uint *)(iVar2 + 0x558) = (uint)local_24;
  *(undefined4 *)(iVar2 + 0x55c) = 0;
  *(undefined4 *)(iVar2 + 0x560) = 0;
  fn_0020bbc4(auStack_18,auStack_108);
  iVar2 = *(int *)(param_1 + 0x100);
  uVar1 = fn_006c0028(auStack_14);
  *(undefined2 *)(iVar2 + 0x546) = uVar1;
  iVar2 = *(int *)(param_1 + 0x100);
  uVar1 = fn_006c0114(auStack_14);
  *(undefined2 *)(iVar2 + 0x548) = uVar1;
  iVar2 = *(int *)(param_1 + 0x100);
  uVar1 = fn_006c09b4(auStack_14);
  *(undefined2 *)(iVar2 + 0x54a) = uVar1;
  iVar2 = *(int *)(param_1 + 0x100);
  uVar1 = fn_006bed98(auStack_14);
  *(undefined2 *)(iVar2 + 0x54c) = uVar1;
  iVar2 = *(int *)(param_1 + 0x100);
  uVar1 = fn_006c01f4(auStack_14);
  *(undefined2 *)(iVar2 + 0x54e) = uVar1;
  iVar2 = *(int *)(param_1 + 0x100);
  uVar1 = fn_006bff0c(auStack_14);
  *(undefined2 *)(iVar2 + 0x550) = uVar1;
  return auStack_18;
}


