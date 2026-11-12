#include "001d4bc0_001d5158.h"



void fn_001d5158(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_10;
  
  local_10 = param_4;
  (**(code **)(**(int **)(param_1 + 0x24) + 0x1c))();
  local_10 = 0;
  fn_00163988(DAT_00897808,&local_10,10);
  local_10 = 0;
  fn_00163988(DAT_0089780c,&local_10,10);
  return;
}



undefined1 fn_001d50cc(void)

{
  int iVar1;
  
  iVar1 = fn_001d4f28();
  return *(undefined1 *)(iVar1 + 0x10);
}



void fn_001d50b4(void)

{
  DAT_008924e0 = 0;
  DAT_008924e4 = 0;
  return;
}



int fn_001d4fe8(void)

{
  int iVar1;
  
  iVar1 = fn_001d4f28();
  return (int)*(short *)(iVar1 + 2);
}



int fn_001d4fd8(void)

{
  int iVar1;
  
  iVar1 = fn_001d4f28();
  return (int)*(char *)(iVar1 + 7);
}



int fn_001d4fc8(void)

{
  int iVar1;
  
  iVar1 = fn_001d4f28();
  return (int)*(char *)(iVar1 + 0xb);
}



int fn_001d4f28(int param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  ushort uVar4;
  
  if ((param_1 == 0) || ((short)DAT_008924e4 <= param_1)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    return 0;
  }
  iVar3 = DAT_008924e0 + param_1 * 0x12;
  cVar1 = *(char *)(iVar3 + 0x10);
  if (cVar1 == '\x01') {
    uVar4 = *(ushort *)(iVar3 + 2);
joined_r0x001d4f88:
    bVar2 = false;
    if (uVar4 == 0) goto LAB_001d4fb4;
  }
  else {
    if (cVar1 != '\x02') {
      if (cVar1 != '\x03') {
        return 0;
      }
      uVar4 = (ushort)*(byte *)(iVar3 + 10);
      goto joined_r0x001d4f88;
    }
    if ('\x06' < *(char *)(iVar3 + 7)) {
      bVar2 = false;
      goto LAB_001d4fb4;
    }
  }
  bVar2 = true;
LAB_001d4fb4:
  if (bVar2) {
    return iVar3;
  }
  return 0;
}



undefined4 fn_001d4e88(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  if (((param_1 == 0) || (param_4 < (int)(uint)(param_3 == 0))) ||
     (iVar1 = fn_00147e6c(param_1,&DAT_001d4f0c,4), iVar1 != 0)) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + 4;
  }
  iVar1 = 0x12;
  iVar2 = 0;
  DAT_008924e4 = fn_0011c134(param_3 - 4,param_4 - (uint)(param_3 < 4));
  if (iVar1 != 0 || iVar2 != 0) {
    param_1 = 0;
  }
  if ((int)-(param_4 + (uint)(4 < param_3)) < 0 ==
      (SBORROW4(0,param_4) != SBORROW4(-param_4,(uint)(4 < param_3)))) {
    DAT_008924e4 = 0;
  }
  DAT_008924e0 = param_1;
  return 1;
}



void fn_001d4db0(int param_1,char param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  short *psVar4;
  uint uVar5;
  bool bVar6;
  
  iVar1 = (int)param_2;
  uVar2 = 1;
  if (iVar1 != 0) {
    uVar5 = iVar1 - 0x10;
    bVar6 = 3 < uVar5;
    if (bVar6) {
      uVar5 = iVar1 - 0x18;
    }
    if ((bVar6 && 3 < uVar5) && (iVar1 != 0x20 && iVar1 != 0x22)) {
      uVar2 = 0;
    }
  }
  iVar1 = fn_00252fdc((uVar2 ^ 1) + 0x22);
  if (iVar1 != 0) {
    uVar2 = iVar1 - 0x10;
    if (3 < uVar2) {
      param_4 = iVar1 - 0x18;
    }
    if ((3 >= uVar2 || param_4 < 4) || (iVar1 == 0x20 || iVar1 == 0x22)) {
      iVar3 = param_1 + (char)uVar2 * 4;
      psVar4 = (short *)(iVar3 + 2);
      if (*psVar4 == 0x175) {
        *psVar4 = 0;
        *(undefined1 *)(iVar3 + 4) = 0;
        fn_00353a90(param_3,iVar1);
      }
    }
  }
  *(char *)(param_1 + 1) = param_2;
  return;
}



void fn_001d4cc0(int param_1,undefined1 *param_2,uint param_3)

{
  char cVar1;
  undefined1 uVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined2 *puVar5;
  
  iVar4 = 0;
  do {
    puVar5 = (undefined2 *)(param_1 + iVar4 * 4);
    puVar3 = (undefined2 *)fn_001d4e7c(param_2,iVar4);
    uVar2 = fn_00620290((int)*(char *)(puVar5 + 1),param_3 ^ 1);
    *puVar3 = *puVar5;
    *(undefined1 *)(puVar3 + 1) = uVar2;
    *(undefined1 *)((int)puVar3 + 3) = *(undefined1 *)((int)puVar5 + 3);
    cVar1 = (char)iVar4;
    iVar4 = (int)(char)(cVar1 + '\x01');
  } while (iVar4 < 4);
  puVar3 = (undefined2 *)(param_1 + iVar4 * 4);
  uVar2 = fn_00620290((int)*(char *)(puVar3 + 1),param_3 ^ 1);
  *(undefined2 *)(param_2 + 0x12) = *puVar3;
  param_2[0x14] = uVar2;
  param_2[0x15] = *(undefined1 *)((int)puVar3 + 3);
  puVar3 = (undefined2 *)(param_1 + (char)(cVar1 + '\x02') * 4);
  uVar2 = fn_00620290((int)*(char *)(puVar3 + 1),param_3 ^ 1);
  *(undefined2 *)(param_2 + 0x16) = *puVar3;
  param_2[0x18] = uVar2;
  param_2[0x19] = *(undefined1 *)((int)puVar3 + 3);
  uVar2 = fn_00620290((int)*(char *)(param_1 + 0x18),param_3 ^ 1);
  *param_2 = uVar2;
  uVar2 = fn_00620290((int)*(char *)(param_1 + 0x19),param_3 ^ 1);
  param_2[1] = uVar2;
  return;
}



void fn_001d4c0c(char *param_1,char param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  
  iVar1 = (int)param_2;
  uVar2 = 1;
  if (iVar1 != 0) {
    uVar3 = iVar1 - 0x10;
    bVar4 = 3 < uVar3;
    if (bVar4) {
      uVar3 = iVar1 - 0x18;
    }
    if ((bVar4 && 3 < uVar3) && (iVar1 != 0x20 && iVar1 != 0x22)) {
      uVar2 = 0;
    }
  }
  iVar1 = fn_00252f88((uVar2 ^ 1) + 0x20);
  if (iVar1 != 0) {
    uVar2 = iVar1 - 0x10;
    if (3 < uVar2) {
      param_4 = iVar1 - 0x18;
    }
    if ((3 >= uVar2 || param_4 < 4) || (iVar1 == 0x20 || iVar1 == 0x22)) {
      if (*(short *)(param_1 + (char)uVar2 * 4 + 2) == 0x175) {
        *(short *)(param_1 + (char)uVar2 * 4 + 2) = 0;
        param_1[(char)uVar2 * 4 + 4] = '\0';
        fn_00353a90(param_3,iVar1);
      }
    }
  }
  *param_1 = param_2;
  return;
}



void fn_001d4bc0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_00145b00(8,&DAT_00812c8c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = fn_0033a15c();
  }
  DAT_0089245c = uVar2;
  fn_0033a0f8();
  iVar1 = fn_00145b00(0x1c,&DAT_00812c8c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = fn_00239494();
  }
  DAT_00892460 = uVar2;
  fn_00239394();
  return;
}


