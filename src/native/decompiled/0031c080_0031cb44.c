#include "0031c080_0031cb44.h"



undefined4 * fn_0031cb44(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  char *in_stack_00000000;
  char *local_38 [4];
  char *local_28;
  char *pcStack_24;
  
  local_38[0] = in_stack_00000000;
  puVar1 = (undefined4 *)fn_0069e7cc();
  puVar1[5] = 0;
  *puVar1 = &DAT_00823008;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  iVar3 = 0;
  do {
    local_38[0] = (char *)&DAT_008633a0;
    local_38[1] = (char *)&DAT_008633b4;
    uVar2 = fn_00689210(puVar1[2],local_38[iVar3]);
    puVar1[iVar3 + 5] = uVar2;
    local_38[2] = (char *)&DAT_00863450;
    local_38[3] = "tb_skill_name_b_star";
    uVar2 = fn_0068897c(puVar1[2],local_38[iVar3 + 2]);
    puVar1[iVar3 + 7] = uVar2;
    local_28 = (char *)&DAT_008633c8;
    pcStack_24 = "tb_skill_name_b";
    uVar2 = fn_0068897c(puVar1[2],local_38[iVar3 + 4]);
    iVar4 = iVar3 + 1;
    puVar1[iVar3 + 9] = uVar2;
    iVar3 = iVar4;
  } while (iVar4 < 2);
  return puVar1;
}



void fn_0031cab4(int param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  
  iVar1 = fn_00689210(*(undefined4 *)(param_1 + 8),(char *)&DAT_0031c3ec);
  bVar3 = param_2 == 1;
  *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe | param_2 == 0;
  iVar1 = fn_00689210(*(undefined4 *)(param_1 + 8),(char *)&DAT_0031c4f4);
  bVar4 = param_2 == 2;
  if (bVar4) {
    param_2 = 1;
  }
  bVar2 = (byte)param_2;
  *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe | bVar3;
  if (!bVar4) {
    bVar2 = 0;
  }
  iVar1 = fn_00689210(*(undefined4 *)(param_1 + 8),(char *)&DAT_0031c350);
  *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe | bVar2;
  return;
}



/* WARNING: Removing unreachable block (ram,0x0031caf0) */
/* WARNING: Removing unreachable block (ram,0x0031cac8) */
/* WARNING: Removing unreachable block (ram,0x0031cb1c) */

void fn_0031ca98(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 unaff_r4;
  
  fn_0022cab4();
  iVar1 = *(int *)(param_1 + 0x94);
  iVar2 = fn_00689210(*(undefined4 *)(iVar1 + 8),"Null_status_p",param_3,param_4,unaff_r4);
  *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe;
  iVar2 = fn_00689210(*(undefined4 *)(iVar1 + 8),"Null_status_m",param_3,param_4,unaff_r4);
  *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe;
  iVar1 = fn_00689210(*(undefined4 *)(iVar1 + 8),"Null_other",param_3,param_4,unaff_r4);
  *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe | 1;
  return;
}



void fn_0031ca5c(int param_1,byte param_2)

{
  int iVar1;
  
  iVar1 = fn_00689210(*(undefined4 *)(param_1 + 8),(char *)&DAT_0031ca8c);
  if (iVar1 != 0) {
    *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe | param_2;
  }
  return;
}



void fn_0031ca48(int param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(byte *)(*(int *)(param_1 + 0x9c) + 0x8f6);
  iVar2 = fn_00689210(*(undefined4 *)(*(int *)(param_1 + 0x94) + 8),"scout_stamp");
  if (iVar2 != 0) {
    *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe | bVar1;
  }
  return;
}



void fn_0031c7d0(int param_1,byte param_2)

{
  int iVar1;
  
  iVar1 = fn_00689210(*(undefined4 *)(param_1 + 8),(char *)&DAT_0031c800);
  if (iVar1 != 0) {
    *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe | param_2;
  }
  return;
}



void fn_0031c7bc(int param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(byte *)(*(int *)(param_1 + 0x9c) + 0x8f5);
  iVar2 = fn_00689210(*(undefined4 *)(*(int *)(param_1 + 0x94) + 8),"win_stamp");
  if (iVar2 != 0) {
    *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe | bVar1;
  }
  return;
}



void fn_0031c790(int param_1,byte param_2)

{
  int iVar1;
  
  iVar1 = fn_00688920(*(undefined4 *)(param_1 + 8),&DAT_0031c7b8);
  *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe | param_2;
  return;
}



void fn_0031c6f8(int param_1,byte param_2)

{
  int iVar1;
  
  iVar1 = fn_0068897c(*(undefined4 *)(param_1 + 8),(char *)&DAT_0031c740);
  *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe | param_2;
  iVar1 = fn_0068897c(*(undefined4 *)(param_1 + 8),(char *)&DAT_0031c748);
  *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe | param_2;
  return;
}



void fn_0031c430(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 local_20;
  undefined4 local_1c;
  
  uVar1 = fn_0068897c(*(undefined4 *)(param_1 + 8),(char *)&DAT_0031c4b4);
  local_20 = 0;
  local_1c = 0;
  uVar2 = fn_00246858(param_3,param_4);
  if (param_2 < uVar2) {
    fn_002309d8(&local_20,4,param_2,0);
  }
  else {
    fn_002309d8(&local_20,4,param_2,1);
  }
  fn_00190d50(uVar1,&local_20);
  return;
}



void fn_0031c384(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = fn_0068897c(*(undefined4 *)(param_1 + 8),(char *)&DAT_0031c3ac);
  fn_0068b21c(uVar1,param_2,param_3);
  return;
}



void fn_0031c35c(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = fn_0068897c(*(undefined4 *)(param_1 + 8),(char *)&DAT_0031c37c);
  fn_00190d50(uVar1,param_2);
  return;
}



void fn_0031c1b8(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,byte param_7,undefined4 param_8)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 local_30;
  undefined4 local_2c;
  
  uVar1 = fn_0068897c(*(undefined4 *)(param_1 + 8),(char *)&DAT_0031c37c);
  fn_00190d50(uVar1,param_2);
  uVar1 = fn_0068897c(*(undefined4 *)(param_1 + 8),(char *)&DAT_0031c4b4);
  local_30 = 0;
  local_2c = 0;
  uVar2 = fn_00246858(param_5,param_8);
  if (param_3 < uVar2) {
    fn_002309d8(&local_30,4,param_3,0);
  }
  else {
    fn_002309d8(&local_30,4,param_3,1);
  }
  fn_00190d50(uVar1,&local_30);
  uVar1 = fn_0068897c(*(undefined4 *)(param_1 + 8),(char *)&DAT_0031c3ac);
  fn_0068b21c(uVar1,param_4,param_5);
  fn_0031c5b8(param_1,param_6,0);
  iVar3 = fn_00688920(*(undefined4 *)(param_1 + 8),(char *)&DAT_0031c424);
  *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xfe | param_7;
  return;
}



void fn_0031c180(int param_1,byte param_2)

{
  int iVar1;
  
  iVar1 = fn_00689210(*(undefined4 *)(param_1 + 8),(char *)&DAT_0031c1a8);
  *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe | param_2;
  return;
}



void fn_0031c154(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = fn_0068897c(*(undefined4 *)(param_1 + 8),(char *)&DAT_0031c174);
  fn_00190d50(uVar1,param_2);
  return;
}



void fn_0031c0e0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = fn_0068897c(*(undefined4 *)(param_1 + 8),(char *)&DAT_0031c100);
  fn_00190d50(uVar1,param_2);
  return;
}



void fn_0031c080(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = fn_00689210(*(undefined4 *)(param_1 + 8),(char *)&DAT_0031c570);
  *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe | param_2 == 0;
  iVar1 = fn_00689210(*(undefined4 *)(param_1 + 8),(char *)&DAT_0031c534);
  *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe | param_2 == 1;
  return;
}


