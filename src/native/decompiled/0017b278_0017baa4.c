#include "0017b278_0017baa4.h"



void fn_0017baa4(int param_1,char param_2,undefined1 param_3)

{
  *(undefined1 *)(*(int *)(param_1 + (char)(param_2 + -0x10) * 4 + 4) + 0x99) = param_3;
  *(undefined1 *)(*(int *)(param_1 + (char)(param_2 + -0x10) * 4 + 4) + 0x9d) = 0;
  return;
}



int fn_0017b9b4(undefined4 *param_1,int *param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  *param_1 = &PTR_LAB_008224cc;
  if ((((byte)DAT_008c62fc & 1) == 0) && (iVar2 = fn_00303afc(&DAT_008c62fc), iVar2 != 0)) {
    DAT_008f9e2c = 0;
    DAT_008f9e30 = 0;
    DAT_008f9e34 = 0;
  }
  uVar6 = DAT_008f9e34;
  uVar5 = DAT_008f9e30;
  param_1[1] = DAT_008f9e2c;
  param_1[2] = uVar5;
  param_1[3] = uVar6;
  param_1[4] = param_3;
  iVar2 = fn_00183dcc(param_1 + 5,param_2,uVar6,param_1 + 1,param_4);
  iVar3 = *param_2;
  uVar1 = (param_2[1] - iVar3) / 0xc;
  if (uVar1 <= param_3) {
    param_3 = uVar1 - 1;
    if (uVar1 <= param_3) {
      fn_002ff628(9,&DAT_008c7604,&DAT_008c7604,param_3,uVar1);
    }
    iVar3 = *param_2;
  }
  puVar4 = (undefined4 *)(iVar3 + param_3 * 0xc);
  uVar5 = puVar4[1];
  uVar6 = puVar4[2];
  *(undefined4 *)(iVar2 + -0x10) = *puVar4;
  *(undefined4 *)(iVar2 + -0xc) = uVar5;
  *(undefined4 *)(iVar2 + -8) = uVar6;
  return iVar2 + -0x14;
}



void fn_0017b93c(int param_1,char *param_2,short param_3)

{
  *(undefined1 *)(*(int *)(param_1 + (char)(*param_2 + -0x10) * 4 + 4) + 0x55) = 1;
  *(short *)(*(int *)(param_1 + (char)(*param_2 + -0x10) * 4 + 4) + 0x8c) = -param_3;
  return;
}



void fn_0017b888(int param_1,char *param_2)

{
  char cVar1;
  
  *(undefined1 *)(*(int *)(param_1 + (char)(*param_2 + -0x10) * 4 + 4) + 0x55) = 0;
  fn_0017b7d8(*(undefined4 *)(param_1 + (char)(*param_2 + -0x10) * 4 + 4));
  cVar1 = *param_2;
  *(undefined1 *)(*(int *)(param_1 + (char)(cVar1 + -0x10) * 4 + 4) + 0x97) = 0;
  *(undefined1 *)(*(int *)(param_1 + (char)(cVar1 + -0x10) * 4 + 4) + 0x9b) = 0;
  cVar1 = *param_2;
  *(undefined1 *)(*(int *)(param_1 + (char)(cVar1 + -0x10) * 4 + 4) + 0x99) = 0;
  *(undefined1 *)(*(int *)(param_1 + (char)(cVar1 + -0x10) * 4 + 4) + 0x9d) = 0;
  return;
}



void fn_0017b864(int param_1,char *param_2,undefined1 param_3)

{
  *(undefined1 *)(*(int *)(param_1 + (char)(*param_2 + -0x10) * 4 + 4) + 0x93) = param_3;
  return;
}



void fn_0017b830(int param_1)

{
  fn_00190cdc(*(undefined4 *)(param_1 + 0x188),0);
  fn_00190cdc(*(undefined4 *)(param_1 + 400),0);
  fn_00190e00(*(undefined4 *)(param_1 + 0x18c));
  return;
}



void fn_0017b7e8(int param_1,char param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + (char)(param_2 + -0x10) * 4 + 4);
  fn_00190cdc(*(undefined4 *)(iVar1 + 400),0);
  fn_00190cdc(*(undefined4 *)(iVar1 + 0x18c),0);
  fn_00190e00(*(undefined4 *)(iVar1 + 0x188));
  return;
}



void fn_0017b7d8(int param_1)

{
  fn_00190e00(*(undefined4 *)(param_1 + 0x198));
  return;
}



void fn_0017b29c(int param_1,undefined1 *param_2,int param_3)

{
  char cVar1;
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  if (param_3 != 0) {
    iVar4 = 0;
    puVar2 = param_2;
    do {
      iVar6 = param_1 + iVar4;
      param_3 = param_3 + -1;
      iVar4 = iVar4 + 1;
      *(undefined1 *)(iVar6 + 0x19c) = *puVar2;
      puVar2 = puVar2 + 1;
    } while (param_3 != 0);
  }
  if ('\0' < (char)param_2[0xc]) {
    *(undefined2 *)(param_1 + 0x8c) = 0;
  }
  fn_00189524(param_1,3,'\0' < (char)param_2[6]);
  fn_00189524(param_1,2);
  fn_00189524(param_1,1);
  fn_00189524(param_1,4);
  fn_00189524(param_1,0);
  fn_00189524(param_1,5);
  fn_00189524(param_1,0x15);
  fn_00189524(param_1,0x14);
  fn_00189524(param_1,0x11);
  fn_00189524(param_1,0x12);
  fn_00189524(param_1,0x13);
  fn_00189524(param_1,6,
               '\0' < (char)param_2[0x53] ||
               (((((((((((((((('\0' < (char)param_2[2] || '\0' < (char)param_2[5]) ||
                             '\0' < (char)param_2[4]) || '\0' < (char)param_2[3]) ||
                           '\0' < (char)param_2[0x10]) || '\0' < (char)param_2[0x11]) ||
                         '\0' < (char)param_2[0x12]) || '\0' < (char)param_2[0x1d]) ||
                       '\0' < (char)param_2[0x1e]) || '\0' < (char)param_2[0x1f]) ||
                     '\0' < (char)param_2[0x14]) || '\0' < (char)param_2[0x20]) ||
                   '\0' < (char)param_2[0x21]) || '\0' < (char)param_2[0x22]) ||
                 '\0' < (char)param_2[0x23]) || '\0' < (char)param_2[0x24]) ||
               '\0' < (char)param_2[0x17]));
  uVar5 = (uint)('\0' < (char)param_2[0x5a]);
  uVar3 = (uint)(int)(char)(param_2[2] | param_2[5] | param_2[4] | param_2[3] | param_2[0x10] |
                            param_2[0x11] | param_2[0x12]) >> 0x1f |
          (uint)('\0' < (char)param_2[0x18]) | (uint)(int)(char)param_2[0x14] >> 0x1f |
          (uint)('\0' < (char)param_2[0x50]) | (uint)('\0' < (char)param_2[0x51]) |
          (uint)('\0' < (char)param_2[0x52]) | (uint)('\0' < (char)param_2[0x54]) |
          (uint)('\0' < (char)param_2[0x55]) | (uint)('\0' < (char)param_2[0x56]) |
          (uint)('\0' < (char)param_2[0x57]) | (uint)('\0' < (char)param_2[0x58]) |
          (uint)('\0' < (char)param_2[0x59]) | uVar5;
  if ('\0' < (char)param_2[0x5b]) {
    uVar5 = 1;
  }
  if ((char)param_2[0x5b] < '\x01') {
    uVar5 = 0;
  }
  fn_00189524(param_1,7,(uint)('\0' < (char)param_2[0x5f]) | uVar3 | uVar5);
  cVar1 = param_2[1];
  fn_00189524(param_1,0xf);
  fn_00189524(param_1,0xe);
  fn_00189524(param_1,0xd);
  fn_00189524(param_1,0xc);
  fn_00189524(param_1,8);
  fn_00189524(param_1,9);
  fn_00189524(param_1,10);
  fn_00189524(param_1,0xb);
  if ((*(char *)(param_1 + 0x96) == '\0') || (cVar1 != '\x04')) {
                    /* WARNING: Could not recover jumptable at 0x0017b7c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x194) + 100))();
    return;
  }
  fn_00190e00(*(undefined4 *)(param_1 + 0x194));
  return;
}



void fn_0017b278(int param_1,char *param_2,undefined1 *param_3,int param_4)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  iVar2 = *(int *)(param_1 + (char)(*param_2 + -0x10) * 4 + 4);
  if (param_4 != 0) {
    iVar5 = 0;
    puVar3 = param_3;
    do {
      iVar7 = iVar2 + iVar5;
      param_4 = param_4 + -1;
      iVar5 = iVar5 + 1;
      *(undefined1 *)(iVar7 + 0x19c) = *puVar3;
      puVar3 = puVar3 + 1;
    } while (param_4 != 0);
  }
  if ('\0' < (char)param_3[0xc]) {
    *(undefined2 *)(iVar2 + 0x8c) = 0;
  }
  fn_00189524(iVar2,3,'\0' < (char)param_3[6]);
  fn_00189524(iVar2,2);
  fn_00189524(iVar2,1);
  fn_00189524(iVar2,4);
  fn_00189524(iVar2,0);
  fn_00189524(iVar2,5);
  fn_00189524(iVar2,0x15);
  fn_00189524(iVar2,0x14);
  fn_00189524(iVar2,0x11);
  fn_00189524(iVar2,0x12);
  fn_00189524(iVar2,0x13);
  fn_00189524(iVar2,6,'\0' < (char)param_3[0x53] ||
                       (((((((((((((((('\0' < (char)param_3[2] || '\0' < (char)param_3[5]) ||
                                     '\0' < (char)param_3[4]) || '\0' < (char)param_3[3]) ||
                                   '\0' < (char)param_3[0x10]) || '\0' < (char)param_3[0x11]) ||
                                 '\0' < (char)param_3[0x12]) || '\0' < (char)param_3[0x1d]) ||
                               '\0' < (char)param_3[0x1e]) || '\0' < (char)param_3[0x1f]) ||
                             '\0' < (char)param_3[0x14]) || '\0' < (char)param_3[0x20]) ||
                           '\0' < (char)param_3[0x21]) || '\0' < (char)param_3[0x22]) ||
                         '\0' < (char)param_3[0x23]) || '\0' < (char)param_3[0x24]) ||
                       '\0' < (char)param_3[0x17]));
  uVar6 = (uint)('\0' < (char)param_3[0x5a]);
  uVar4 = (uint)(int)(char)(param_3[2] | param_3[5] | param_3[4] | param_3[3] | param_3[0x10] |
                            param_3[0x11] | param_3[0x12]) >> 0x1f |
          (uint)('\0' < (char)param_3[0x18]) | (uint)(int)(char)param_3[0x14] >> 0x1f |
          (uint)('\0' < (char)param_3[0x50]) | (uint)('\0' < (char)param_3[0x51]) |
          (uint)('\0' < (char)param_3[0x52]) | (uint)('\0' < (char)param_3[0x54]) |
          (uint)('\0' < (char)param_3[0x55]) | (uint)('\0' < (char)param_3[0x56]) |
          (uint)('\0' < (char)param_3[0x57]) | (uint)('\0' < (char)param_3[0x58]) |
          (uint)('\0' < (char)param_3[0x59]) | uVar6;
  if ('\0' < (char)param_3[0x5b]) {
    uVar6 = 1;
  }
  if ((char)param_3[0x5b] < '\x01') {
    uVar6 = 0;
  }
  fn_00189524(iVar2,7,(uint)('\0' < (char)param_3[0x5f]) | uVar4 | uVar6);
  cVar1 = param_3[1];
  fn_00189524(iVar2,0xf);
  fn_00189524(iVar2,0xe);
  fn_00189524(iVar2,0xd);
  fn_00189524(iVar2,0xc);
  fn_00189524(iVar2,8);
  fn_00189524(iVar2,9);
  fn_00189524(iVar2,10);
  fn_00189524(iVar2,0xb);
  if ((*(char *)(iVar2 + 0x96) == '\0') || (cVar1 != '\x04')) {
                    /* WARNING: Could not recover jumptable at 0x0017b7c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(iVar2 + 0x194) + 100))();
    return;
  }
  fn_00190e00(*(undefined4 *)(iVar2 + 0x194));
  return;
}


