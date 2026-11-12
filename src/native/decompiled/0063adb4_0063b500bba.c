#include "0063adb4_0063b500bba.h"



void fn_0063b2e8(int param_1)

{
  char cVar1;
  short sVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  
  cVar1 = *(char *)(*(int *)(param_1 + 0xc) + 0x3fa);
  if (cVar1 != '\0' && cVar1 != '\t') {
    *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(*(int *)(param_1 + 0xc) + 0x3fb);
    *(undefined2 *)(param_1 + 0x1a) = 0;
    *(undefined2 *)(param_1 + 0x1c) = 0;
    return;
  }
  uVar4 = fn_006f30c0();
  iVar5 = -1;
  if (uVar4 < 0x33) {
    iVar5 = 0;
  }
  else if (uVar4 - 0x33 < 0x15d || uVar4 == 400) {
    iVar5 = 1;
  }
  else if (uVar4 - 0x191 < 400) {
    iVar5 = 2;
  }
  else if (uVar4 - 0x321 < 400) {
    iVar5 = 3;
  }
  else if (uVar4 - 0x4b1 < 0x225f) {
    iVar5 = 4;
  }
  cVar1 = *(char *)(*(int *)(param_1 + 0xc) + 0x60);
  if (cVar1 == '\0') {
    if (iVar5 < 4) {
      sVar2 = *(short *)(&UNK_007efeec + iVar5 * 4);
      sVar3 = *(short *)(&UNK_007efeee + iVar5 * 4);
      *(short *)(param_1 + 0x1a) = ((short)uVar4 - sVar2) + 1;
      *(short *)(param_1 + 0x1c) = (sVar3 - sVar2) + 1;
      goto LAB_0063b400;
    }
  }
  else {
    iVar5 = (int)(char)(cVar1 + (char)iVar5);
    if (iVar5 < 5) {
      if (iVar5 < 0) {
        iVar5 = 0;
      }
    }
    else {
      iVar5 = 4;
    }
  }
  *(undefined2 *)(param_1 + 0x1a) = 0;
  *(undefined2 *)(param_1 + 0x1c) = 0;
LAB_0063b400:
  *(char *)(param_1 + 0x18) = (char)iVar5;
  return;
}


