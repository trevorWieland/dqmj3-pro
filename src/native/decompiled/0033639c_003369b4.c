#include "0033639c_003369b4.h"



void fn_003369b4(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  fn_002e9240();
  if ((((byte)DAT_008c62fc & 1) == 0) && (iVar4 = fn_00303afc(&DAT_008c62fc), iVar4 != 0)) {
    DAT_008f9e2c = 0;
    DAT_008f9e30 = 0;
    DAT_008f9e34 = 0;
  }
  uVar3 = DAT_008f9e34;
  uVar2 = DAT_008f9e30;
  uVar1 = DAT_008f9e2c;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  *(undefined4 *)(param_1 + 0x40) = uVar2;
  *(undefined4 *)(param_1 + 0x44) = uVar3;
  return;
}



undefined4 * fn_00336900(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)fn_0068ab5c();
  *puVar1 = &DAT_00824918;
  puVar1[0x19] = 0;
  uVar3 = *(undefined4 *)(param_2 + 8);
  puVar1[0x1b] = 0xffffffff;
  puVar1[0x1a] = uVar3;
  puVar1[0x1c] = 0xffffffff;
  puVar1[0x1d] = 0xffffffff;
  puVar1[0x1e] = 0;
  puVar1[0x1f] = 0;
  *(undefined1 *)(puVar1 + 0x20) = 0;
  puVar1[0x21] = 0;
  if ((((byte)DAT_008c62ec & 1) == 0) && (iVar2 = fn_00303afc(&DAT_008c62ec), iVar2 != 0)) {
    DAT_008c62f0 = 0;
    DAT_008c62f4 = 0;
  }
  uVar3 = DAT_008c62f4;
  puVar1[0x22] = DAT_008c62f0;
  puVar1[0x23] = uVar3;
  return puVar1;
}



void fn_003367e0(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  
  cVar1 = *(char *)(param_1 + 0x80);
  uVar6 = 0;
  if (cVar1 == '\0') {
    iVar2 = *(int *)(param_1 + 0x84);
    *(int *)(param_1 + 0x84) = iVar2 + 1;
    if (1 < iVar2) {
      *(undefined4 *)(param_1 + 0x84) = 0;
      piVar3 = (int *)fn_001088e0(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x74));
      (**(code **)(*piVar3 + 0x10))(piVar3,0);
      fVar5 = *(float *)(param_1 + 0x8c);
      fVar4 = *(float *)(*(int *)(param_1 + 100) + 8);
      iVar2 = *(int *)(param_1 + 0x7c);
      *(undefined4 *)(iVar2 + 0x1c) = *(undefined4 *)(param_1 + 0x88);
      *(float *)(iVar2 + 0x20) = fVar5 + fVar4;
      *(undefined4 *)(iVar2 + 0x24) = uVar6;
      *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xef | 0x10;
      *(byte *)(*(int *)(param_1 + 0x78) + 0x44) =
           *(byte *)(*(int *)(param_1 + 0x78) + 0x44) & 0xfe | 1;
      *(undefined1 *)(param_1 + 0x80) = 1;
      return;
    }
  }
  else {
    if (cVar1 == '\x01') {
      iVar2 = fn_006ad868(param_1,1);
      if (iVar2 != 0) {
        *(undefined1 *)(param_1 + 0x80) = 2;
      }
      return;
    }
    if (cVar1 == '\x02') {
      fVar5 = *(float *)(param_1 + 0x8c);
      fVar4 = *(float *)(*(int *)(param_1 + 100) + 8);
      iVar2 = *(int *)(param_1 + 0x7c);
      *(undefined4 *)(iVar2 + 0x1c) = *(undefined4 *)(param_1 + 0x88);
      *(float *)(iVar2 + 0x20) = fVar5 + fVar4;
      *(undefined4 *)(iVar2 + 0x24) = 0;
      *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xef | 0x10;
    }
  }
  return;
}



void fn_0033639c(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [12];
  
  cVar1 = *(char *)(param_1 + 0x80);
  uVar7 = 0;
  if (cVar1 == '\0') {
    iVar2 = *(int *)(param_1 + 0x84);
    *(int *)(param_1 + 0x84) = iVar2 + 1;
    if (1 < iVar2) {
      *(undefined4 *)(param_1 + 0x84) = 0;
      piVar3 = (int *)fn_001088e0(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x74));
      (**(code **)(*piVar3 + 0x10))(piVar3,0);
      *(undefined4 *)(*(int *)(param_1 + 100) + 0xc) = 0x43700000;
      *(undefined4 *)(*(int *)(param_1 + 100) + 0x10) = 0xc3780000;
      fn_003761a8();
      fVar6 = *(float *)(param_1 + 0x90);
      fVar5 = *(float *)(*(int *)(param_1 + 100) + 8);
      iVar2 = *(int *)(param_1 + 0x7c);
      *(undefined4 *)(iVar2 + 0x1c) = *(undefined4 *)(param_1 + 0x8c);
      *(float *)(iVar2 + 0x20) = fVar6 + fVar5;
      *(undefined4 *)(iVar2 + 0x24) = uVar7;
      *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xef | 0x10;
      *(byte *)(*(int *)(param_1 + 0x78) + 0x44) =
           *(byte *)(*(int *)(param_1 + 0x78) + 0x44) & 0xfe | 1;
      uVar7 = fn_001603f8(auStack_1c,0);
      uVar4 = fn_001603f8(auStack_20,0xff);
      fn_0068869c(DAT_00897808,uVar4,uVar7,0x14);
      uVar7 = fn_001603f8(auStack_20,0);
      uVar4 = fn_001603f8(auStack_1c,0xff);
      fn_0068869c(DAT_0089780c,uVar4,uVar7,0x14);
      *(undefined1 *)(param_1 + 0x80) = 1;
    }
  }
  else {
    if (cVar1 == '\x01') {
      iVar2 = fn_006ad868(param_1,1);
      if (iVar2 != 0) {
        *(undefined1 *)(param_1 + 0x80) = 2;
      }
      return;
    }
    if (cVar1 == '\x02') {
      fVar6 = *(float *)(param_1 + 0x90);
      fVar5 = *(float *)(*(int *)(param_1 + 100) + 8);
      iVar2 = *(int *)(param_1 + 0x7c);
      *(undefined4 *)(iVar2 + 0x1c) = *(undefined4 *)(param_1 + 0x8c);
      *(float *)(iVar2 + 0x20) = fVar6 + fVar5;
      *(undefined4 *)(iVar2 + 0x24) = 0;
      *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xef | 0x10;
      return;
    }
    if ((cVar1 == '\x03') && (iVar2 = fn_006ad868(param_1,1), iVar2 != 0)) {
      fn_006899f4(param_1,0,0);
      fn_00689930(param_1,0,0);
      return;
    }
  }
  return;
}


