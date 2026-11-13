#include "003098c4_00309c20.h"



void fn_00309c20(int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  
  iVar1 = fn_00178f9c(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x30));
  piVar3 = *(int **)(iVar1 + 0x10);
  (**(code **)(*piVar3 + 0x2c))(piVar3,(char *)&DAT_00309dbc,1);
  uVar2 = 0;
  do {
    iVar1 = (**(code **)(*piVar3 + 0x2c))(piVar3,(&DAT_00890574)[uVar2],1);
    uVar2 = uVar2 + 1;
    *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe;
  } while (uVar2 < 0xf);
  *(byte *)(*(int *)(param_1 + 0x160) + 0x44) = *(byte *)(*(int *)(param_1 + 0x160) + 0x44) & 0xfe;
  *(byte *)(*(int *)(param_1 + 0x164) + 0x44) = *(byte *)(*(int *)(param_1 + 0x164) + 0x44) & 0xfe;
  *(byte *)(*(int *)(param_1 + 0x168) + 0x44) = *(byte *)(*(int *)(param_1 + 0x168) + 0x44) & 0xfe;
  *(byte *)(*(int *)(param_1 + 0x16c) + 0x44) = *(byte *)(*(int *)(param_1 + 0x16c) + 0x44) & 0xfe;
  *(byte *)(*(int *)(param_1 + 0x170) + 0x44) = *(byte *)(*(int *)(param_1 + 0x170) + 0x44) & 0xfe;
  *(byte *)(*(int *)(param_1 + 0x174) + 0x44) = *(byte *)(*(int *)(param_1 + 0x174) + 0x44) & 0xfe;
  *(byte *)(*(int *)(param_1 + 0x178) + 0x44) = *(byte *)(*(int *)(param_1 + 0x178) + 0x44) & 0xfe;
  *(byte *)(*(int *)(param_1 + 0x17c) + 0x44) = *(byte *)(*(int *)(param_1 + 0x17c) + 0x44) & 0xfe;
  *(byte *)(*(int *)(param_1 + 0x180) + 0x44) = *(byte *)(*(int *)(param_1 + 0x180) + 0x44) & 0xfe;
  *(byte *)(*(int *)(param_1 + 0x15c) + 0x44) = *(byte *)(*(int *)(param_1 + 0x15c) + 0x44) & 0xfe;
  *(byte *)(*(int *)(param_1 + 0x158) + 0x44) = *(byte *)(*(int *)(param_1 + 0x158) + 0x44) & 0xfe;
  iVar1 = fn_00178f9c(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x24));
  piVar3 = *(int **)(iVar1 + 0x10);
  uVar2 = 0;
  do {
    iVar1 = (**(code **)(*piVar3 + 0x2c))(piVar3,(&DAT_008905b0)[uVar2],1);
    uVar2 = uVar2 + 1;
    *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe;
  } while (uVar2 < 6);
  uVar2 = 0;
  do {
    iVar1 = (**(code **)(*piVar3 + 0x2c))(piVar3,(&DAT_008905c8)[uVar2],1);
    uVar2 = uVar2 + 1;
    *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe;
  } while (uVar2 < 0x16);
  return;
}



void fn_00309b70(undefined4 param_1,char *param_2,int param_3,int param_4,int param_5)

{
  char cVar1;
  byte bVar2;
  
  if ((param_3 != 0 && param_4 != 0) && ((param_5 != 0 || (*param_2 != param_2[1])))) {
    cVar1 = param_2[1];
    if (cVar1 == '\0') {
      *(byte *)(param_3 + 0x44) = *(byte *)(param_3 + 0x44) & 0xfe;
      *(byte *)(param_4 + 0x44) = *(byte *)(param_4 + 0x44) & 0xfe;
      return;
    }
    if (cVar1 == '\x01') {
      *(byte *)(param_3 + 0x44) = *(byte *)(param_3 + 0x44) & 0xfe | 1;
      bVar2 = *(byte *)(param_4 + 0x44) & 0xfe;
    }
    else {
      if (cVar1 != '\x02') {
        return;
      }
      *(byte *)(param_3 + 0x44) = *(byte *)(param_3 + 0x44) & 0xfe;
      bVar2 = *(byte *)(param_4 + 0x44) & 0xfe | 1;
    }
    *(byte *)(param_4 + 0x44) = bVar2;
  }
  return;
}



void fn_00309b10(int param_1,char *param_2,undefined4 param_3)

{
  *(undefined1 *)((int)*param_2 + param_1 + 0x14) = 1;
  fn_00309624(*(undefined4 *)(param_1 + (char)(*param_2 + -0x10) * 4 + 4),param_3);
  *(undefined1 *)(*(int *)(param_1 + (char)(*param_2 + -0x10) * 4 + 4) + 0x5b) = 0;
  return;
}



void fn_00309aa4(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = 1;
  if (1 < param_3) {
    do {
      if (*(char *)(param_1 + uVar1 + 0x19c) != *(char *)(param_2 + uVar1)) {
        *(char *)(param_1 + uVar1 + 0x19c) = *(char *)(param_2 + uVar1);
        fn_0017b29c(param_1,param_1 + 0x19c,0x61);
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < param_3);
  }
  return;
}



void fn_003098c4(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  uint extraout_r1;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  bool bVar6;
  
  iVar2 = *(int *)(param_1 + 300) + 1;
  *(int *)(param_1 + 300) = iVar2;
  uVar3 = param_2;
  if (0x3b < iVar2) {
    *(undefined4 *)(param_1 + 300) = 0;
    fn_00192e20(param_1,0,0xf,0,param_4);
    fn_00192e20(param_1,0x10,0x15,1);
    uVar3 = extraout_r1;
  }
  param_2 = param_2 | 0x3b < iVar2;
  bVar6 = param_2 == 0;
  if (bVar6) {
    param_2 = *(uint *)(param_1 + 0x5c);
    uVar3 = *(uint *)(param_1 + 0x60);
  }
  if (!bVar6 || param_2 != uVar3) {
    uVar4 = *(uint *)(param_1 + 0x60);
    uVar3 = 0;
    do {
      if (((&DAT_007bab54)[uVar3] & uVar4) == 0) {
LAB_00309988:
        bVar5 = 0;
      }
      else {
        if (*(int *)(param_1 + 0x124) - *(int *)(param_1 + 0x120) >> 2 == 0) {
          fn_002ff628(9,&DAT_008c7670,&DAT_008c7670,0,0);
        }
        if (**(uint **)(param_1 + 0x120) != uVar3) goto LAB_00309988;
        bVar5 = 1;
      }
      uVar1 = *(int *)(param_1 + 0x118) - *(int *)(param_1 + 0x114) >> 2;
      if (uVar1 <= uVar3) {
        fn_002ff628(9,&DAT_008c7663,&DAT_008c7663,uVar3,uVar1);
      }
      iVar2 = *(int *)(*(int *)(param_1 + 0x114) + uVar3 * 4);
      uVar3 = uVar3 + 1;
      *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe | bVar5;
    } while ((int)uVar3 < 0x10);
    uVar3 = 0x10;
    do {
      if (((&DAT_007bab54)[uVar3] & uVar4) == 0) {
LAB_00309a38:
        bVar5 = 0;
      }
      else {
        uVar1 = *(int *)(param_1 + 0x124) - *(int *)(param_1 + 0x120) >> 2;
        if (uVar1 < 2) {
          fn_002ff628(9,&DAT_008c7670,&DAT_008c7670,1,uVar1);
        }
        if (*(uint *)(*(int *)(param_1 + 0x120) + 4) != uVar3) goto LAB_00309a38;
        bVar5 = 1;
      }
      uVar1 = *(int *)(param_1 + 0x118) - *(int *)(param_1 + 0x114) >> 2;
      if (uVar1 <= uVar3) {
        fn_002ff628(9,&DAT_008c7663,&DAT_008c7663,uVar3,uVar1);
      }
      iVar2 = *(int *)(*(int *)(param_1 + 0x114) + uVar3 * 4);
      uVar3 = uVar3 + 1;
      *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe | bVar5;
    } while ((int)uVar3 < 0x16);
  }
  return;
}


