#include "00607b14_006084b4a.h"



void fn_006082c0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x8c,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_006082f0(iVar1,param_1);
  return;
}



void fn_006082f0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0025dea8(param_1,param_2,&DAT_007c7b04,3);
  *puVar1 = &DAT_0084f94c;
  return;
}



void fn_006081f8(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (*(char *)(param_1 + 0xec) == '\0') {
    fn_003979f0(param_1);
    return;
  }
  puVar1 = (undefined4 *)fn_001f7510(param_1,0x48);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_008942d0) goto LAB_00608250;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_00608250:
  if (*(char *)((int)puVar1 + 0x31) == '\x01') {
    fn_006899f4(param_1,0x53,0);
    return;
  }
  return;
}



undefined1 * fn_00607f78(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [4];
  undefined1 auStack_40 [40];
  
  *(undefined1 *)(param_1 + 0xec) = 1;
  puVar1 = (undefined4 *)fn_001f7510(param_1,0x48);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_008942d0) goto LAB_00607fcc;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_00607fcc:
  uVar3 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),*(undefined4 *)(param_1 + 0xe8));
  fn_0020bbc4(auStack_48,uVar3);
  fn_00231128(auStack_40,0x11,uVar3,0);
  fn_0016ba84(DAT_00897800,auStack_40);
  iVar4 = fn_006bfffc(auStack_44);
  if (iVar4 == 0) {
    pcVar5 = (char *)&DAT_006080d8;
  }
  else {
    pcVar5 = (char *)&DAT_006080bc;
  }
  uVar3 = fn_0022f584(pcVar5,0);
  fn_0036c5f4(puVar1,uVar3,1,0,1,1,0,0,1);
  puVar1[0xe] = 0;
  fn_00689bd0(param_1,0x48,0);
  iVar4 = fn_006bfffc(auStack_44);
  if (iVar4 == 0) {
    fn_0020b9b0(auStack_48);
  }
  else {
    fn_0020b99c();
  }
  return auStack_48;
}



undefined * fn_00607c4c(int param_1)

{
  undefined *puVar1;
  
  if (param_1 == 1) {
    puVar1 = &DAT_007c0c58;
  }
  else if (param_1 == 2) {
    puVar1 = &UNK_007c0c64;
  }
  else if (param_1 == 3) {
    puVar1 = &UNK_007c0c70;
  }
  else if (param_1 == 4) {
    puVar1 = &UNK_007c0c7c;
  }
  else if (param_1 == 5) {
    puVar1 = &UNK_007c0c88;
  }
  else if (param_1 == 6) {
    puVar1 = &UNK_007c0c94;
  }
  else if (param_1 == 7) {
    puVar1 = &UNK_007c0ca0;
  }
  else if (param_1 == 8) {
    puVar1 = &UNK_007c0cac;
  }
  else if (param_1 == 9) {
    puVar1 = &UNK_007c0cb8;
  }
  else if (param_1 == 10) {
    puVar1 = &UNK_007c0cc4;
  }
  else if (param_1 == 0xb) {
    puVar1 = &UNK_007c0cd0;
  }
  else if (param_1 == 0xc) {
    puVar1 = &UNK_007c0cdc;
  }
  else {
    puVar1 = (undefined *)0x0;
  }
  return puVar1;
}



int fn_00607b14(byte *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  undefined1 auStack_26a0 [20];
  char local_268c;
  char local_268b;
  char acStack_2683 [5];
  undefined1 auStack_267e [3915];
  char acStack_1733 [5];
  undefined1 auStack_172e [5902];
  
  uVar1 = (uint)*param_1;
  do {
    do {
      uVar1 = uVar1 - 1;
      if ((int)uVar1 < 0) {
        return 0;
      }
    } while (param_1[uVar1 * 0x266c + 4] != 1);
    fn_0017821c(auStack_26a0,param_1 + uVar1 * 0x266c + 8,0x2660);
    for (iVar4 = (int)local_268c; -1 < iVar4; iVar4 = iVar4 + -1) {
      iVar2 = fn_001667e0(auStack_267e + iVar4 * 0xc4,2);
      if (iVar2 != 0) {
        iVar2 = (int)acStack_2683[iVar4 * 0xc4];
        uVar3 = iVar2 - 0x10;
        if (uVar3 < 8) {
          bVar5 = uVar3 < 4;
          if (!bVar5) {
            uVar3 = iVar2 - 0x18;
          }
          if (bVar5 || uVar3 < 4) {
            return iVar2;
          }
          if (iVar2 == 0x20 || iVar2 == 0x22) {
            return iVar2;
          }
        }
      }
    }
    for (iVar4 = (int)local_268b; -1 < iVar4; iVar4 = iVar4 + -1) {
      iVar2 = fn_001667e0(auStack_172e + iVar4 * 0xc4,2);
      if (iVar2 != 0) {
        iVar2 = (int)acStack_1733[iVar4 * 0xc4];
        uVar3 = iVar2 - 0x10;
        if (uVar3 < 8) {
          bVar5 = uVar3 < 4;
          if (!bVar5) {
            uVar3 = iVar2 - 0x18;
          }
          if (bVar5 || uVar3 < 4) {
            return iVar2;
          }
          if (iVar2 == 0x20 || iVar2 == 0x22) {
            return iVar2;
          }
        }
      }
    }
  } while( true );
}


