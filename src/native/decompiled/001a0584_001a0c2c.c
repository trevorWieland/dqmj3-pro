#include "001a0584_001a0c2c.h"



int fn_001a0c2c(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  
  uVar1 = 0;
  do {
    puVar2 = (undefined4 *)(param_1 + uVar1 * 4);
    fn_002feef8(*puVar2);
    uVar1 = uVar1 + 1;
    *puVar2 = 0;
  } while (uVar1 < 5);
  if (*(int *)(param_1 + 0x1c) != -1) {
    fn_0016a43c(*(undefined4 *)(param_1 + 0x30));
    *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x18) != -1) {
    fn_00192f50(*(undefined4 *)(param_1 + 0x30));
    *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  }
  return param_1;
}



void fn_001a0be0(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  
  uVar1 = 0;
  do {
    *(undefined1 *)(param_1 + uVar1 + 0x28) = 0;
    piVar3 = *(int **)(param_1 + uVar1 * 4);
    uVar1 = uVar1 + 1;
    iVar2 = *piVar3;
    *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe;
    iVar2 = piVar3[1];
    *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe;
  } while (uVar1 < 5);
  return;
}



undefined4 * fn_001a0ba8(undefined4 *param_1)

{
  *param_1 = &DAT_00858b84;
  param_1[1] = 0;
  param_1[2] = 0x3f800000;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  return param_1;
}



void fn_001a0b88(int param_1,int param_2)

{
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_2 != 0) {
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 8);
  }
  *(int *)(param_1 + 0x14) = param_2;
  return;
}



/* WARNING: Removing unreachable block (ram,0x001a0b94) */
/* WARNING: Removing unreachable block (ram,0x001a0b98) */

void fn_001a0b78(int param_1)

{
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}



void fn_001a0b50(undefined4 *param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_2[4];
  iVar2 = param_2[10];
  *param_1 = *(undefined4 *)(**(int **)(*param_2 + 0x30) + param_3 * 4);
  param_1[1] = iVar1;
  param_1[2] = iVar2;
  return;
}



void fn_001a0b34(undefined4 *param_1,int *param_2,int param_3)

{
  *param_1 = *(undefined4 *)(*(int *)(*(int *)(*param_2 + 0x30) + 0x3c) + param_3 * 4);
  return;
}



void fn_001a0abc(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  (**(code **)(**(int **)(param_1 + 0x11c) + 0x10))(*(int **)(param_1 + 0x11c),0);
  uVar3 = 0;
  do {
    iVar1 = param_1 + uVar3 * 0x24;
    iVar2 = *(int *)(iVar1 + 0x110);
    *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe;
    (**(code **)(**(int **)(iVar1 + 0x11c) + 100))();
    *(byte *)(*(int *)(param_1 + 0x144) + 0x44) = *(byte *)(*(int *)(param_1 + 0x144) + 0x44) & 0xfe
    ;
    (**(code **)(**(int **)(param_1 + 0x150) + 100))();
    uVar3 = uVar3 + 1;
  } while (uVar3 < 2);
  return;
}



void fn_001a0958(int param_1,int param_2)

{
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  uVar3 = 0;
  if (*(int *)(param_1 + 0x224) != 0) {
    do {
      iVar1 = uVar3 * 0xd + param_2;
      iVar4 = param_1 + uVar3 * 0x24;
      puVar2 = (undefined1 *)(iVar1 + 0x34);
      *(undefined1 *)(iVar4 + 0x2075) = *puVar2;
      *(undefined1 *)(iVar4 + 0x2076) = *(undefined1 *)(iVar1 + 0x35);
      *(undefined1 *)(iVar4 + 0x2077) = *(undefined1 *)(iVar1 + 0x36);
      *(undefined1 *)(iVar4 + 0x2078) = *(undefined1 *)(iVar1 + 0x38);
      *(undefined1 *)(iVar4 + 0x2079) = *(undefined1 *)(iVar1 + 0x39);
      *(undefined1 *)(iVar4 + 0x207a) = *(undefined1 *)(iVar1 + 0x3a);
      *(undefined1 *)(iVar4 + 0x207b) = *(undefined1 *)(iVar1 + 0x3b);
      *(undefined1 *)(iVar4 + 0x207c) = *(undefined1 *)(iVar1 + 0x3c);
      *(undefined1 *)(iVar4 + 0x207d) = *(undefined1 *)(iVar1 + 0x3d);
      *(undefined1 *)(iVar4 + 0x207e) = *(undefined1 *)(iVar1 + 0x37);
      *(undefined1 *)(iVar4 + 0x2074) = *(undefined1 *)(iVar1 + 0x3e);
      uVar6 = 0;
      if ((*(byte *)(iVar1 + 0x3e) != 0) && (uVar6 = *(byte *)(iVar1 + 0x3e) & 1, uVar6 == 1)) {
        *(uint *)(iVar4 + 0x206c) = param_1 + (uint)*(byte *)(iVar1 + 0x3f) * 0x3c8 + 0x228;
      }
      if (uVar6 < *(byte *)(iVar1 + 0x3e)) {
        do {
          iVar5 = iVar4 + uVar6 * 4;
          uVar7 = uVar6 + 2;
          *(uint *)(iVar5 + 0x206c) = param_1 + (uint)(byte)puVar2[uVar6 + 0xb] * 0x3c8 + 0x228;
          *(uint *)(iVar5 + 0x2070) = param_1 + (uint)(byte)puVar2[uVar6 + 0xc] * 0x3c8 + 0x228;
          uVar6 = uVar7;
        } while ((int)uVar7 < (int)(uint)*(byte *)(iVar1 + 0x3e));
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0x224));
  }
  return;
}



undefined1 fn_001a078c(int *param_1,int param_2,int *param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if ((char)param_1[0x14] != '\0') {
    if (param_2 != 0) {
      if ((param_3[1] != 0) && (uVar2 = 0, param_1[0x88] != 0)) {
        do {
          if (param_4 == 0) {
            iVar6 = param_1[0x2a] * *param_3 + param_1[uVar2 * 0xf2 + 0x8a];
          }
          else {
            iVar6 = param_6 * uVar2 + param_1[0x2a] * param_1[0x88] * param_5 + param_1[0x86];
          }
          iVar5 = param_3[1];
          if (param_3[3] != 0) {
            iVar1 = fn_001a40cc(param_3[3],(char)param_1[0x22]);
            iVar6 = iVar6 + iVar1;
            iVar5 = iVar5 - param_3[3];
          }
          iVar1 = *param_3;
          iVar4 = 0;
          piVar3 = param_1 + uVar2 * 0xf2 + iVar1 * 6 + 0x8c;
          if ((char)param_3[4] != '\0') {
            iVar4 = (int)param_1 + iVar1 * 6 + uVar2 * 0x3c8 + 0x530;
            fn_0019bc50(iVar4,(int)param_3 + uVar2 * 6 + 0x12);
          }
          fn_001a3c68(piVar3);
          param_1[uVar2 * 0xf2 + iVar1 * 6 + 0x8e] = iVar4;
          param_1[uVar2 * 0xf2 + iVar1 * 6 + 0x8d] = iVar5;
          *piVar3 = iVar6;
          fn_001a4608(param_1 + uVar2 * 0xf2 + 0x8a,piVar3,(int)(char)param_3[0x12]);
          uVar2 = uVar2 + 1;
        } while (uVar2 < (uint)param_1[0x88]);
      }
      iVar6 = *param_3;
      param_1[iVar6 * 2 + 0x83e] = param_3[2];
      param_1[iVar6 * 2 + 0x83f] = param_3[0x11];
      if ((char)param_3[0x12] != '\0') {
        *(undefined1 *)((int)param_1 + 0x56) = 1;
      }
      if ((*(char *)((int)param_1 + 0x51) == '\0') &&
         (((param_4 != 0 || (iVar6 = param_1[0x17], param_1[0x17] = iVar6 + -1, iVar6 + -1 == 0)) ||
          (*(char *)((int)param_1 + 0x56) != '\0')))) {
        *(undefined1 *)((int)param_1 + 0x51) = 1;
      }
      return 1;
    }
    *(undefined1 *)((int)param_1 + 0xf) = 1;
    (**(code **)(*param_1 + 0x14))(param_1);
  }
  return 0;
}



void fn_001a0728(int param_1)

{
  int iVar1;
  
  fn_001a4270();
  for (iVar1 = *(int *)(param_1 + 0x130); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x1ac)) {
    if (*(char *)(iVar1 + 0x139) != '\0') {
      fn_001a46b0(iVar1);
    }
  }
  for (iVar1 = *(int *)(param_1 + 0x130); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x1ac)) {
    fn_001a4698(iVar1);
  }
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  return;
}



void fn_001a071c(int param_1,int param_2)

{
  fn_0017d90c(param_1 + 0x1dc,param_2 + 4);
  return;
}



undefined4 fn_001a0584(int *param_1,int param_2,undefined4 param_3,int param_4,uint param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int unaff_r7;
  ulonglong uVar6;
  
  if (2 < param_2) {
    unaff_r7 = 2;
  }
  uVar6 = (ulonglong)param_5;
  if (param_2 < 3) {
    if (param_2 < 1) {
      unaff_r7 = 1;
    }
    else {
      unaff_r7 = param_2;
    }
  }
  *(undefined1 *)((int)param_1 + 0x1a) = 1;
  uVar1 = UnsignedSaturate(param_3,0xf);
  UnsignedDoesSaturate(param_3,0xf);
  param_1[2] = 0;
  *(undefined1 *)((int)param_1 + 0x1b) = 0;
  if (unaff_r7 == 1) {
    iVar5 = fn_001a381c(uVar1,fn_001a4138,param_1);
    if (iVar5 != 0) {
      *param_1 = iVar5;
      param_1[2] = 1;
      goto LAB_001a06a4;
    }
  }
  else {
    iVar5 = 0;
    if (0 < unaff_r7) {
LAB_001a05dc:
      do {
        iVar2 = fn_001a381c(uVar1,fn_001a4188,param_1);
        if (iVar2 == 0) {
          uVar3 = fn_0018b794();
          iVar4 = fn_001a4628(uVar3,uVar1);
          if (iVar4 != 0) goto LAB_001a05dc;
          *(undefined1 *)((int)param_1 + 0x1b) = 1;
        }
        param_5 = (uint)uVar6;
        param_1[iVar5] = iVar2;
        iVar5 = iVar5 + 1;
        param_1[2] = param_1[2] + 1;
      } while (iVar5 < unaff_r7);
    }
    if (*(char *)((int)param_1 + 0x1b) == '\0') {
LAB_001a06a4:
      *(undefined1 *)((int)param_1 + 0x1a) = 0;
      *(undefined2 *)(param_1 + 8) = 0;
      *(undefined1 *)((int)param_1 + 0x17) = 0;
      *(undefined1 *)(param_1 + 6) = 0;
      *(undefined1 *)((int)param_1 + 0x16) = 0;
      param_1[7] = 0;
      param_1[9] = 0x3f800000;
      param_1[0xe] = 0x3f800000;
      *(undefined1 *)((int)param_1 + 0x22) = 0;
      param_1[0xf] = 0;
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      param_1[0x11] = 0x3f800000;
      param_1[3] = param_4;
      param_1[4] = param_5;
      param_1[0x12] = 0;
      param_1[0x13] = 0;
      param_1[10] = 0x3f800000;
      *(undefined1 *)(param_1 + 0xb) = 0;
      *(undefined1 *)((int)param_1 + 0x2d) = 0;
      *(undefined1 *)(param_1 + 5) = 1;
      return 1;
    }
    iVar5 = 0;
    if (0 < param_1[2]) {
      do {
        if (param_1[iVar5] != 0) {
          fn_0018a33c();
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < param_1[2]);
    }
  }
  return 0;
}


