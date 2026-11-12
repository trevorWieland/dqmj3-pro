#include "002b040c_002b095c.h"



void fn_002b095c(int param_1,int param_2,int param_3)

{
  byte *pbVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  
  pbVar3 = (byte *)(*(int *)(param_1 + 4) + param_2 * 0x34);
  if ((*pbVar3 & 1) != 0) {
    uVar2 = 0;
    while (*(int *)(pbVar3 + uVar2 * 4 + 0x1c) != param_3) {
      uVar2 = uVar2 + 1;
      if (3 < uVar2) {
        return;
      }
    }
    if (0 < (int)(3 - uVar2)) {
      iVar5 = 3 - uVar2;
      iVar4 = 0;
      do {
        iVar6 = uVar2 + iVar4;
        iVar5 = iVar5 + -1;
        iVar4 = iVar4 + 1;
        *(undefined4 *)(pbVar3 + iVar6 * 4 + 0x1c) = *(undefined4 *)(pbVar3 + iVar6 * 4 + 0x20);
      } while (iVar5 != 0);
      uVar2 = 3;
    }
    pbVar1 = pbVar3 + uVar2 * 4 + 0x1c;
    pbVar1[0] = 0;
    pbVar1[1] = 0;
    pbVar1[2] = 0;
    pbVar1[3] = 0;
    cVar7 = *(int *)(pbVar3 + 0x1c) != 0;
    if (*(int *)(pbVar3 + 0x20) != 0) {
      cVar7 = cVar7 + '\x01';
    }
    if (*(int *)(pbVar3 + 0x24) != 0) {
      cVar7 = cVar7 + '\x01';
    }
    if (*(int *)(pbVar3 + 0x28) != 0) {
      cVar7 = cVar7 + '\x01';
    }
    if (cVar7 == '\0') {
      pbVar3[0] = 0;
      pbVar3[1] = 0;
      pbVar3[2] = 0;
      pbVar3[3] = 0;
      pbVar3[4] = 0;
      pbVar3[5] = 0;
      pbVar3[6] = 0;
      pbVar3[7] = 0;
      pbVar3[8] = 0;
      pbVar3[9] = 0;
      pbVar3[10] = 0;
      pbVar3[0xb] = 0;
      pbVar3[0xc] = 0;
      pbVar3[0xd] = 0;
      pbVar3[0xe] = 0;
      pbVar3[0xf] = 0;
      pbVar3[0x10] = 0;
      pbVar3[0x11] = 0;
      pbVar3[0x12] = 0;
      pbVar3[0x13] = 0;
      pbVar3[0x14] = 0;
      pbVar3[0x15] = 0;
      pbVar3[0x16] = 0;
      pbVar3[0x17] = 0;
      pbVar3[0x18] = 0;
      pbVar3[0x19] = 0;
      pbVar3[0x1a] = 0;
      pbVar3[0x1b] = 0;
      pbVar3[0x1c] = 0;
      pbVar3[0x1d] = 0;
      pbVar3[0x1e] = 0;
      pbVar3[0x1f] = 0;
      pbVar3[0x20] = 0;
      pbVar3[0x21] = 0;
      pbVar3[0x22] = 0;
      pbVar3[0x23] = 0;
      pbVar3[0x24] = 0;
      pbVar3[0x25] = 0;
      pbVar3[0x26] = 0;
      pbVar3[0x27] = 0;
      pbVar3[0x28] = 0;
      pbVar3[0x29] = 0;
      pbVar3[0x2a] = 0;
      pbVar3[0x2b] = 0;
      pbVar3[0x2c] = 0;
      pbVar3[0x2d] = 0;
      pbVar3[0x2e] = 0;
      pbVar3[0x2f] = 0;
      pbVar3[0x30] = 0;
      pbVar3[0x31] = 0;
      pbVar3[0x32] = 0;
      pbVar3[0x33] = 0;
    }
  }
  return;
}



int fn_002b0948(int param_1,int param_2)

{
  return *(int *)(param_1 + 4) + param_2 * 0x34;
}



void fn_002b0814(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int *param_5,undefined4 param_6)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 in_s3;
  int iVar8;
  undefined8 uVar9;
  int local_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  
  uVar9 = CONCAT44(param_6,in_s3);
  iVar1 = fn_00145b00(0x3c,&DAT_00812c8c);
  if (iVar1 != 0) {
    iVar1 = fn_00234454(iVar1,param_2,param_3,param_4);
    if (iVar1 != 0) {
      *(int *)(iVar1 + 0x38) = (int)uVar9;
      goto LAB_002b0888;
    }
  }
  iVar1 = 0;
LAB_002b0888:
  iVar3 = (int)((ulonglong)uVar9 >> 0x20);
  piVar2 = (int *)fn_00145b00(0x18,&DAT_00812c8c);
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    iVar5 = *param_5;
    iVar6 = param_5[1];
    iVar7 = param_5[2];
    iVar8 = param_5[3];
    *piVar2 = iVar1;
    piVar2[1] = iVar3;
    piVar2[2] = iVar5;
    piVar2[3] = iVar6;
    piVar2[4] = iVar7;
    piVar2[5] = iVar8;
  }
  *param_1 = piVar2;
  local_40 = piVar2[2];
  iStack_3c = piVar2[3];
  iStack_38 = piVar2[4];
  iStack_34 = piVar2[5];
  fn_0060b818(*piVar2,piVar2[1],&local_40);
  fn_002d15e4(DAT_008977d4);
  uVar4 = DAT_008977d4;
  iVar1 = *piVar2;
  iVar3 = piVar2[1];
  fn_0013af30(DAT_008977d4,iVar1);
  *(undefined4 *)(iVar3 + 0x50) = uVar4;
  uVar4 = *(undefined4 *)(iVar1 + 4);
  iVar1 = fn_006ebf84(*(undefined4 *)(iVar3 + 0x24),uVar4);
  if (iVar1 == 0) {
    fn_001969a4(*(undefined4 *)(iVar3 + 0x24),uVar4);
  }
  return;
}



int * fn_002b07ac(int *param_1)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = param_1[1];
  bVar2 = iVar1 == 0;
  if (bVar2) {
    iVar1 = *param_1;
  }
  if (!bVar2 || iVar1 != 0) {
    fn_0013af30(DAT_008977d4,0);
    fn_0013a624(DAT_008977d4);
    if ((int *)*param_1 != (int *)0x0) {
      (**(code **)(*(int *)*param_1 + 4))();
      *param_1 = 0;
    }
    param_1[1] = 0;
  }
  return param_1;
}



void fn_002b0748(int *param_1)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = param_1[1];
  bVar2 = iVar1 == 0;
  if (bVar2) {
    iVar1 = *param_1;
  }
  if (!bVar2 || iVar1 != 0) {
    fn_0013af30(DAT_008977d4,0);
    fn_0013a624(DAT_008977d4);
    if ((int *)*param_1 != (int *)0x0) {
      (**(code **)(*(int *)*param_1 + 4))();
      *param_1 = 0;
    }
    param_1[1] = 0;
  }
  return;
}



void fn_002b06b8(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int local_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  local_20 = param_1[2];
  iStack_1c = param_1[3];
  iStack_18 = param_1[4];
  iStack_14 = param_1[5];
  fn_0060b818(*param_1,param_1[1],&local_20);
  uVar3 = DAT_008977d4;
  iVar2 = *param_1;
  iVar1 = param_1[1];
  fn_0013af30(DAT_008977d4,iVar2);
  *(undefined4 *)(iVar1 + 0x50) = uVar3;
  uVar3 = *(undefined4 *)(iVar2 + 4);
  iVar2 = fn_006ebf84(*(undefined4 *)(iVar1 + 0x24),uVar3);
  if (iVar2 == 0) {
    fn_001969a4(*(undefined4 *)(iVar1 + 0x24),uVar3);
  }
  return;
}



undefined4 fn_002b0698(int param_1)

{
  return **(undefined4 **)
           (*(int *)(*(int *)(*(int *)(param_1 + 4) + 4) + *(int *)(param_1 + 0x98) * 4) + 4);
}



int fn_002b059c(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_s12;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 auStack_58 [12];
  undefined1 auStack_4c [12];
  undefined1 auStack_40 [32];
  undefined4 *puStack_20;
  int iStack_1c;
  
  puStack_20 = param_1;
  iStack_1c = param_2;
  iVar1 = fn_00145b00(0x3c,&DAT_00812c8c);
  if ((iVar1 == 0) || (iVar1 = fn_00234454(iVar1,auStack_58,auStack_4c,auStack_40), iVar1 == 0)) {
    iVar1 = 0;
  }
  else {
    *(undefined4 *)(iVar1 + 0x38) = in_s12;
    local_78 = *param_1;
    uStack_74 = param_1[1];
    uStack_70 = param_1[2];
    uStack_6c = param_1[3];
    fn_0060b818(iVar1,param_2,&local_78);
    fn_002d15e4(DAT_008977d4);
    uVar3 = DAT_008977d4;
    fn_0013af30(DAT_008977d4,iVar1);
    *(undefined4 *)(param_2 + 0x50) = uVar3;
    uVar3 = *(undefined4 *)(iVar1 + 4);
    iVar2 = fn_006ebf84(*(undefined4 *)(param_2 + 0x24),uVar3);
    if (iVar2 == 0) {
      fn_001969a4(*(undefined4 *)(param_2 + 0x24),uVar3);
    }
  }
  return iVar1;
}



undefined4 fn_002b04a4(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2;
  *(int *)(param_1 + 0x14) = iVar1;
  if (0 < iVar1) {
    do {
      iVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 4) + iVar2 * 4) + 0xc))();
      if (iVar1 == 0) {
        return 0;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x14));
  }
  return 1;
}



void fn_002b040c(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 != 0) {
    while (iVar1 = iVar1 + -1, -1 < iVar1) {
      (**(code **)(**(int **)(*(int *)(param_1 + 4) + iVar1 * 4) + 0x20))();
    }
    iVar1 = *(int *)(param_1 + 0x10);
    iVar3 = *(int *)(param_1 + 0x14) + -1;
    if (iVar1 <= iVar3) {
      do {
        piVar4 = (int *)(*(int *)(param_1 + 4) + iVar3 * 4);
        piVar2 = (int *)*piVar4;
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 4))();
        }
        *piVar4 = 0;
        iVar1 = *(int *)(param_1 + 0x10);
        iVar3 = iVar3 + -1;
      } while (iVar1 <= iVar3);
    }
    *(undefined4 *)(param_1 + 0x14) = 0;
    fn_0079868c(param_1 + 4,iVar1,0);
  }
  return;
}


