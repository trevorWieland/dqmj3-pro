#include "002e22cc_002e2c10.h"



uint fn_002e2c10(int param_1,uint param_2)

{
  return *(uint *)(*(int *)(param_1 + 4) + (param_2 >> 5) * 4) >> (param_2 & 0x1f) & 1;
}



undefined4 fn_002e2acc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  uVar4 = fn_006bc1dc();
  iVar1 = (int)uVar4;
  fn_006915dc(&local_20,(int)((ulonglong)uVar4 >> 0x20),*(undefined4 *)(iVar1 + 0x10),
               *(undefined4 *)(iVar1 + 0x14));
  local_30 = local_20;
  uStack_2c = uStack_1c;
  fn_006915dc(&local_20,uStack_1c,param_3,param_4);
  uVar3 = 0;
  local_28 = local_20;
  uStack_24 = uStack_1c;
  iVar2 = fn_006bc2e4(param_1,&local_30,&local_28);
  if (iVar2 == -1) {
    *(undefined2 *)(iVar1 + 0x18) = 0;
    *(undefined4 *)(iVar1 + 0x10) = param_3;
    *(undefined4 *)(iVar1 + 0x14) = param_4;
  }
  else if (iVar2 == 0) {
    uVar3 = 1;
    *(undefined4 *)(iVar1 + 0x10) = param_3;
    *(undefined4 *)(iVar1 + 0x14) = param_4;
    *(short *)(iVar1 + 0x18) = *(short *)(iVar1 + 0x18) + 1;
  }
  else {
    *(undefined4 *)(iVar1 + 0x10) = param_3;
    *(undefined4 *)(iVar1 + 0x14) = param_4;
  }
  return uVar3;
}



void fn_002e2a18(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    return;
  }
  iVar1 = 0;
  iVar3 = *(int *)(param_1 + 4);
  while( true ) {
    if (*(int *)(iVar3 + iVar1 * 4 + 4) == param_2) {
      return;
    }
    if (*(int *)(iVar3 + iVar1 * 4 + 8) == param_2) break;
    iVar1 = iVar1 + 2;
    if (0x1f < iVar1) {
      iVar1 = 1;
      iVar2 = 1;
      *(undefined4 *)(iVar3 + 0x80) = *(undefined4 *)(iVar3 + 0x7c);
      do {
        iVar3 = iVar1 + 1;
        *(undefined4 *)(*(int *)(param_1 + 4) + (0x1f - iVar1) * 4 + 4) =
             *(undefined4 *)(*(int *)(param_1 + 4) + (0x1e - iVar1) * 4 + 4);
        iVar2 = iVar2 + 2;
        iVar1 = iVar1 + 2;
        *(undefined4 *)(*(int *)(param_1 + 4) + (0x1f - iVar3) * 4 + 4) =
             *(undefined4 *)(*(int *)(param_1 + 4) + (0x1e - iVar3) * 4 + 4);
      } while (iVar2 < 0x1f);
      *(int *)(*(int *)(param_1 + 4) + 4) = param_2;
      return;
    }
  }
  return;
}



void fn_002e29fc(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  *(undefined4 *)(iVar1 + 0x84) = 0;
  *(undefined4 *)(iVar1 + 0x88) = 0;
  *(undefined4 *)(iVar1 + 0x8c) = 0;
  *(undefined4 *)(iVar1 + 0x90) = 0;
  return;
}



void fn_002e2990(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = fn_006bc1dc();
  *(undefined4 *)(iVar1 + 8) = param_3;
  return;
}



void fn_002e297c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = fn_006bc1dc();
  *(undefined4 *)(iVar1 + 4) = param_3;
  return;
}



void fn_002e292c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined1 param_9)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_006bc1dc(param_1,0);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_2;
    puVar1[1] = param_3;
    puVar1[2] = param_4;
    puVar1[3] = param_5;
    *(undefined2 *)(puVar1 + 6) = 0;
    *(undefined1 *)((int)puVar1 + 0x1a) = param_9;
    puVar1[4] = param_7;
    puVar1[5] = param_8;
  }
  return;
}



void fn_002e2918(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = fn_006bc1dc();
  *(undefined4 *)(iVar1 + 0xc) = param_3;
  return;
}



void fn_002e290c(int param_1,undefined4 param_2)

{
  **(undefined4 **)(param_1 + 4) = param_2;
  return;
}



void fn_002e2858(undefined4 *param_1)

{
  *param_1 = &DAT_008208d4;
  if (param_1[0xd] != -1) {
    fn_00159f34(param_1[10]);
    param_1[0xd] = 0xffffffff;
  }
  if (param_1[0xc] != -1) {
    fn_0016a43c(param_1[10]);
    param_1[0xc] = 0xffffffff;
  }
  if (param_1[0xb] != -1) {
                    /* WARNING: Subroutine does not return */
    fn_001482f4(param_1[10]);
  }
  fn_001c93c8(param_1[10]);
  fn_001c93c8(param_1[10]);
  fn_001218d4(DAT_00897800,DAT_00892360);
  if ((int *)param_1[10] != (int *)0x0) {
    (**(code **)(*(int *)param_1[10] + 4))();
  }
  fn_002feef8(param_1);
  return;
}



undefined4 * fn_002e2788(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *param_1 = &DAT_008208d4;
  param_1[1] = &DAT_00859050;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  iVar1 = fn_00145b00(0x80,&DAT_00812c8c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = fn_00110518();
  }
  param_1[10] = uVar2;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0xffffffff;
  param_1[0xd] = 0xffffffff;
  *(undefined1 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x12] = 0xffffffff;
  param_1[0x11] = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  fn_0011050c(param_1[10],*(undefined4 *)(DAT_008977e0 + 0x10),*(undefined4 *)(DAT_008977e0 + 0x14)
              );
  fn_00121838(DAT_00897800,DAT_00892360,1);
  return param_1;
}



void fn_002e2658(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  uint in_fpscr;
  
  uVar1 = *(uint *)(param_1 + 0x1c);
  iVar5 = *(int *)(param_1 + 8);
  uVar6 = *(uint *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0x18);
  *(int *)(param_1 + 0x10) = iVar5;
  *(uint *)(param_1 + 0xc) = uVar1;
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  *(uint *)(param_1 + 0x14) = uVar6;
  if ((iVar5 == *(int *)(param_1 + 8)) &&
     (((iVar5 == 0 && (((*(byte *)(param_1 + 0x14) | uVar1) & 1) == 0)) || (uVar6 == uVar1)))) {
    iVar5 = *(int *)(param_1 + 0x24) + 1;
  }
  else {
    iVar5 = 0;
  }
  *(int *)(param_1 + 0x24) = iVar5;
  if ((*(int *)(param_1 + 8) != 0) ||
     ((*(uint *)(param_1 + 0xc) & 1) != 0 && *(uint *)(param_1 + 0xc) != 0)) {
    pcVar4 = *(code **)(param_1 + 8);
    if ((*(uint *)(param_1 + 0xc) & 1) != 0) {
      pcVar4 = *(code **)(pcVar4 + *(int *)(param_1 + ((int)*(uint *)(param_1 + 0xc) >> 1)));
    }
    (*pcVar4)();
  }
  if (*(int *)(param_1 + 0x34) != -1) {
    iVar5 = fn_001088e0(*(undefined4 *)(param_1 + 0x28));
    uVar1 = fn_006e1e4c();
    if ((*(uint *)(param_1 + 0x44) & -(uVar1 ^ 1)) == 0) {
      iVar2 = fn_00154a6c(iVar5);
      *(int *)(param_1 + 0x44) = iVar2;
      if (iVar2 != 0 && (uVar1 ^ 1) != 0) {
        uVar3 = fn_00176970(iVar5);
        uVar3 = VectorUnsignedToFloat(uVar3,(byte)(in_fpscr >> 0x16) & 3);
        *(undefined4 *)(iVar5 + 0x10) = uVar3;
      }
    }
  }
  fn_001c93c8(*(undefined4 *)(param_1 + 0x28));
  return;
}



void fn_002e25f4(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x2c) == -1) {
    uVar1 = fn_001481c8(*(undefined4 *)(param_1 + 0x28),DAT_0089236c,&DAT_002e264c,1,param_2);
    *(undefined4 *)(param_1 + 0x2c) = uVar1;
    *(char *)(param_1 + 0x38) = (char)param_2;
    if (param_2 == 0) {
      *(code **)(param_1 + 0x18) = fn_002e2204;
      *(undefined4 *)(param_1 + 0x1c) = 0;
    }
  }
  return;
}



void fn_002e22cc(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x24) == 0) {
    if (*(int *)(param_1 + 0x34) != -1) {
      fn_00159f34(*(undefined4 *)(param_1 + 0x28));
    }
    uVar1 = fn_0010887c(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                         DAT_00892384,*(undefined4 *)(param_1 + 0x30));
    *(undefined4 *)(param_1 + 0x34) = uVar1;
    *(undefined4 *)(param_1 + 0x44) = 0;
    fn_0023e640(*(undefined4 *)(DAT_008977e0 + 0x2c),*(undefined4 *)(param_1 + 0x48),0);
    *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x44) != 0) {
    if (*(int *)(param_1 + 0x34) != -1) {
      fn_00159f34(*(undefined4 *)(param_1 + 0x28));
      *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
    }
    if (*(int *)(param_1 + 0x30) != -1) {
      fn_0016a43c(*(undefined4 *)(param_1 + 0x28));
      *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
    }
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return;
}


