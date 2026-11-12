#include "006b4e48_006b5404.h"



undefined4 fn_006b5404(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = fn_004c3b1c();
  }
  return uVar1;
}



undefined4 fn_006b53cc(uint param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = *(char *)(param_1 + 6);
  bVar2 = cVar1 == '\0';
  if (bVar2) {
    cVar1 = *(char *)(param_1 + 7);
  }
  if (bVar2 && cVar1 == '\0') {
    bVar2 = *(char *)(param_1 + 5) != '\x04';
    if (bVar2) {
      param_1 = (uint)*(byte *)(param_1 + 8);
    }
    if (!bVar2 || param_1 == 5) {
      return 1;
    }
  }
  return 0;
}



undefined4 fn_006b53c4(int param_1)

{
  char cVar1;
  uint uVar2;
  bool bVar3;
  
  uVar2 = *(uint *)(param_1 + 100);
  cVar1 = *(char *)(uVar2 + 6);
  bVar3 = cVar1 == '\0';
  if (bVar3) {
    cVar1 = *(char *)(uVar2 + 7);
  }
  if (bVar3 && cVar1 == '\0') {
    bVar3 = *(char *)(uVar2 + 5) != '\x04';
    if (bVar3) {
      uVar2 = (uint)*(byte *)(uVar2 + 8);
    }
    if (!bVar3 || uVar2 == 5) {
      return 1;
    }
  }
  return 0;
}



undefined4 fn_006b5398(int param_1)

{
  undefined4 uVar1;
  
  if ((*(char *)(*(int *)(param_1 + 8) + 0x8d) == '\0') ||
     (*(char *)(*(int *)(param_1 + 8) + 7) != '\0')) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



undefined4 * fn_006b52cc(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x148);
  if (*(int *)(param_1 + 0x140) == 0) {
    if (iVar1 == 0) {
      if ((((byte)DAT_008c62fc & 1) == 0) && (iVar1 = fn_00303afc(&DAT_008c62fc), iVar1 != 0)) {
        DAT_008f9e2c = 0;
        DAT_008f9e30 = 0;
        DAT_008f9e34 = 0;
      }
      return &DAT_008f9e2c;
    }
  }
  else if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x140);
  }
  return (undefined4 *)(iVar1 + 0x1c);
}



undefined2 fn_006b52b0(int param_1)

{
  return *(undefined2 *)(*(int *)(param_1 + 4) + 0x50e);
}



int fn_006b5298(int param_1,int param_2)

{
  return *(int *)(param_1 + 4) + param_2 * 0x84 + 0x30;
}



int fn_006b5288(int param_1)

{
  return (int)*(short *)(*(int *)(param_1 + 4) + 0x50c);
}



bool fn_006b523c(int param_1,int param_2)

{
  return (*(uint *)(*(int *)(param_1 + 4) + ((param_2 - 1U & 0xffff) >> 5) * 4 + 0x464) &
         1 << (param_2 - 1U & 0x1f)) != 0;
}



uint fn_006b520c(int param_1,uint param_2)

{
  return *(int *)(*(int *)(param_1 + 4) + 0x4a8 + ((int)param_2 >> 5) * 4) >> (param_2 & 0x1f) & 1;
}



int fn_006b51a8(int param_1,int param_2)

{
  return (int)*(short *)(*(int *)(param_1 + 4) + param_2 * 2 + 0x4f8);
}



int fn_006b519c(int param_1)

{
  return *(int *)(param_1 + 4) + 4;
}



undefined4 fn_006b50d0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  while ((*(short *)(*(int *)(param_1 + 4) + iVar1 * 0x10 + 8) != param_2 &&
         (*(short *)(*(int *)(param_1 + 4) + iVar1 * 0x10 + 0x18) != param_2))) {
    iVar1 = iVar1 + 2;
    if (99 < iVar1) {
      return 0;
    }
  }
  return 1;
}



undefined4 fn_006b5074(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  while ((*(short *)(*(int *)(param_1 + 4) + iVar1 * 0x10 + 0x652) != param_2 &&
         (*(short *)(*(int *)(param_1 + 4) + iVar1 * 0x10 + 0x662) != param_2))) {
    iVar1 = iVar1 + 2;
    if (99 < iVar1) {
      return 0;
    }
  }
  return 1;
}



bool fn_006b5030(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = 0;
  do {
    if (*(int *)(*(int *)(param_1 + 4) + 0x648 + iVar1 * 0x10) == 0) break;
    iVar1 = iVar1 + 1;
    iVar2 = iVar2 + 1;
  } while (iVar1 < 100);
  return 99 < iVar2;
}



bool fn_006b4ff0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = 0;
  do {
    if (*(int *)(*(int *)(param_1 + 4) + 4 + iVar1 * 0x10) == 0) break;
    iVar1 = iVar1 + 1;
    iVar2 = iVar2 + 1;
  } while (iVar1 < 100);
  return 99 < iVar2;
}



int fn_006b4fb8(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = 0;
  do {
    if (*(int *)(*(int *)(param_1 + 4) + 0x648 + iVar2 * 0x10) == 0) {
      return iVar1;
    }
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 1;
  } while (iVar2 < 100);
  return iVar1;
}



int fn_006b4f84(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = 0;
  do {
    if (*(int *)(*(int *)(param_1 + 4) + 4 + iVar2 * 0x10) == 0) {
      return iVar1;
    }
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 1;
  } while (iVar2 < 100);
  return iVar1;
}



bool fn_006b4f64(int param_1)

{
  return *(char *)(*(int *)(*(int *)(param_1 + 0x14) + 0x10) + 0x19) == '\0';
}



undefined4 fn_006b4ea4(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*param_1 == 1) && (iVar1 = fn_00660ec0((int)(short)param_1[1]), iVar1 == 0x22)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



undefined4 fn_006b4e74(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*param_1 == 1) && (iVar1 = fn_00660ec0((int)(short)param_1[1]), iVar1 == 0x21)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



int fn_006b4e48(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = 0;
  do {
    iVar1 = iVar3 * 4;
    iVar3 = iVar3 + 1;
    if (*(int *)(*(int *)(param_1 + 0xc) + iVar1) == 0) {
      iVar2 = iVar2 + 1;
    }
  } while (iVar3 < 0x40);
  return iVar2;
}


