#include "0055a1b8_0055a630.h"



void fn_0055a630(int param_1)

{
  int unaff_r4;
  bool bVar1;
  
  bVar1 = *(char *)(param_1 + 5) != '\0';
  if (bVar1) {
    unaff_r4 = *(int *)(param_1 + 0x130);
  }
  if (bVar1 && unaff_r4 != 0) {
    do {
      if (0 < *(int *)(unaff_r4 + 400)) {
        *(int *)(unaff_r4 + 400) = *(int *)(unaff_r4 + 400) + -1;
      }
      if (((*(int *)(unaff_r4 + 400) == 0) && (*(char *)(unaff_r4 + 0x98) != '\x04')) &&
         (*(char *)(param_1 + 0x82) == '\0')) {
        fn_0055ee80();
      }
      if (*(char *)(unaff_r4 + 0x13b) == '\0') {
        fn_0055eac8(unaff_r4,1);
      }
      unaff_r4 = *(int *)(unaff_r4 + 0x1ac);
    } while (unaff_r4 != 0);
  }
  return;
}



void fn_0055a5b4(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int extraout_r1;
  int extraout_r1_00;
  int iVar3;
  bool bVar4;
  
  if (param_2 == 0 || param_2 == 2) {
    fn_001a4698();
    param_2 = extraout_r1;
  }
  piVar1 = *(int **)(param_3 + 300);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x20))(piVar1,param_1);
    param_2 = extraout_r1_00;
  }
  iVar2 = *(int *)(param_3 + 0x130);
  bVar4 = iVar2 != param_1;
  if (bVar4) {
    param_2 = *(int *)(iVar2 + 0x1ac);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x1ac);
    *(int *)(param_3 + 0x130) = iVar2;
  }
  if (bVar4 && param_2 != 0) {
    while (iVar3 = *(int *)(iVar2 + 0x1ac), iVar3 != param_1) {
      iVar2 = iVar3;
      if (*(int *)(iVar3 + 0x1ac) == 0) {
        return;
      }
    }
    *(undefined4 *)(iVar2 + 0x1ac) = *(undefined4 *)(param_1 + 0x1ac);
  }
  return;
}



void fn_0055a560(int param_1,uint param_2)

{
  int iVar1;
  
  fn_001a4270();
  for (iVar1 = *(int *)(param_1 + 0x130); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x1ac)) {
    if (*(char *)(iVar1 + 0x139) != '\0') {
      if (-1 < (int)param_2) {
        fn_0055814c(iVar1 + 0x98,param_2 & 0xff);
      }
      fn_001a46b0(iVar1);
    }
  }
  return;
}



void fn_0055a54c(int param_1,undefined1 param_2)

{
  undefined4 in_s0;
  
  *(undefined4 *)(param_1 + 0x108) = in_s0;
  *(undefined1 *)(param_1 + 0xfe) = param_2;
  return;
}



void fn_0055a4f8(int param_1,uint param_2)

{
  int iVar1;
  
  for (iVar1 = *(int *)(param_1 + 0x130); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x1ac)) {
    if ((*(char *)(iVar1 + 0x139) != '\0') && ((*(char *)(iVar1 + 0x138) != '\0') != param_2)) {
      *(char *)(iVar1 + 0x138) = (char)param_2;
      fn_0055a27c(*(undefined4 *)(iVar1 + 0x1a8),param_2);
    }
  }
  return;
}



int fn_0055a4dc(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 < 0x10) {
    iVar1 = param_1 + param_2 * 2 + 0x10c;
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}



void fn_0055a4a8(int param_1)

{
  int iVar1;
  
  for (iVar1 = *(int *)(param_1 + 0x130); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x1ac)) {
    fn_001a4698(iVar1);
  }
  *(undefined4 *)(param_1 + 0x130) = 0;
  return;
}



undefined4 fn_0055a378(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  
  if (*(char *)((int)param_1 + 5) == '\0') {
    return 0;
  }
  if ((short)param_1[0x24] < *(short *)((int)param_1 + 0x8e)) {
    *(short *)(param_1 + 0x24) = (short)param_1[0x24] + 1;
  }
  if (*(short *)((int)param_1 + 0x96) < (short)param_1[0x25]) {
    *(short *)((int)param_1 + 0x96) = *(short *)((int)param_1 + 0x96) + 1;
  }
  if ((short)param_1[0x27] < *(short *)((int)param_1 + 0x9a)) {
    *(short *)(param_1 + 0x27) = (short)param_1[0x27] + 1;
  }
  if (*(short *)((int)param_1 + 0xa2) < (short)param_1[0x28]) {
    *(short *)((int)param_1 + 0xa2) = *(short *)((int)param_1 + 0xa2) + 1;
  }
  if ((short)param_1[0x2a] < *(short *)((int)param_1 + 0xa6)) {
    *(short *)(param_1 + 0x2a) = (short)param_1[0x2a] + 1;
  }
  if ((char)param_1[0x20] != '\0') {
    if (param_1[0x4c] != 0) {
      return 1;
    }
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  if (((param_1[0x1f] < 1) || (iVar1 = param_1[0x1f] + -1, param_1[0x1f] = iVar1, iVar1 < 1)) &&
     (param_1[8] != 0)) {
    iVar1 = 0;
    while( true ) {
      uVar3 = param_1[0x1f];
      bVar4 = uVar3 == 0;
      if (bVar4) {
        uVar3 = (uint)*(byte *)(param_1 + 0x20);
      }
      if ((!bVar4 || uVar3 != 0) || (iVar1 = iVar1 + 1, 10000 < iVar1)) break;
      iVar2 = (**(code **)(*param_1 + 8))(param_1,param_2);
      if (iVar2 == 1) {
        return 0xffffffff;
      }
    }
  }
  return 1;
}



void fn_0055a2cc(int param_1,int param_2,int param_3)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined1 uVar4;
  
  *(char *)(param_1 + 0x7b) = (char)param_2;
  iVar3 = *(int *)(param_1 + 0x130);
  if (iVar3 != 0) {
    do {
      if (param_2 == 0) {
        uVar4 = 0xff;
      }
      else {
        uVar4 = 0;
      }
      if ((uint)*(ushort *)(iVar3 + 0x184) < (uint)*(ushort *)(iVar3 + 0x182)) {
        bVar2 = *(byte *)(iVar3 + 0x180);
        cVar1 = fn_00300f74(((uint)*(byte *)(iVar3 + 0x181) - (uint)bVar2) *
                             (uint)*(ushort *)(iVar3 + 0x184));
        bVar2 = cVar1 + bVar2;
      }
      else {
        bVar2 = *(byte *)(iVar3 + 0x181);
      }
      *(byte *)(iVar3 + 0x180) = bVar2;
      *(undefined1 *)(iVar3 + 0x181) = uVar4;
      *(short *)(iVar3 + 0x182) = (short)((param_3 + 4U) / 5);
      *(undefined2 *)(iVar3 + 0x184) = 0;
      iVar3 = *(int *)(iVar3 + 0x1ac);
    } while (iVar3 != 0);
  }
  return;
}



void fn_0055a29c(int param_1)

{
  *(undefined1 *)(param_1 + 0x15) = 1;
  *(undefined1 *)(param_1 + 0x17) = 0;
  *(ushort *)(param_1 + 0x20) = *(ushort *)(param_1 + 0x20) | 1;
  return;
}



void fn_0055a27c(int param_1,int param_2)

{
  if (*(char *)(param_1 + 0x17) != param_2) {
    *(char *)(param_1 + 0x17) = (char)param_2;
    *(ushort *)(param_1 + 0x20) = *(ushort *)(param_1 + 0x20) | 2;
  }
  return;
}



void fn_0055a218(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    do {
      iVar1 = *(int *)(param_1 + iVar2 * 4);
      if (iVar1 != 0) {
        uVar3 = 0;
        if (((param_2 != 0) && (uVar3 = param_2 == 1, !(bool)uVar3)) && (param_2 == 2)) {
          uVar3 = 2;
        }
        fn_0051e548(iVar1,uVar3);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 8));
  }
  return;
}



void fn_0055a1c4(undefined4 param_1,undefined4 param_2,uint param_3,int param_4)

{
  uint uVar1;
  undefined1 auStack_3c [32];
  
  uVar1 = 0;
  if (param_3 != 0) {
    do {
      fn_0051e2b4(param_4,auStack_3c,param_2,param_1,0xe);
      uVar1 = uVar1 + 0xe;
      param_4 = param_4 + 8;
    } while (uVar1 < param_3);
  }
  return;
}



void fn_0055a1b8(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(*(int *)(param_1 + param_2 * 4) + 0x68);
  fn_00170704(iVar1 + 0x70);
  iVar2 = *(int *)(iVar1 + 0x30);
  do {
    if (iVar2 == 0) {
LAB_0051e53c:
      fn_001707b4(iVar1 + 0x70);
      return;
    }
    if (iVar2 == param_3) {
      if (*(char *)(param_3 + 0x11) != '\x03') {
        *(byte *)(iVar1 + 0x6f) = *(byte *)(iVar1 + 0x6f) | 2;
      }
      goto LAB_0051e53c;
    }
    iVar2 = *(int *)(iVar2 + 0x14);
  } while( true );
}


