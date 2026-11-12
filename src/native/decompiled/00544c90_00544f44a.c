#include "00544c90_00544f44a.h"



undefined4 fn_00544c90(int param_1,int *param_2)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  
  puVar7 = *(undefined4 **)(param_1 + 8);
  puVar2 = (undefined4 *)(**(code **)(*param_2 + 8))(param_2,200,4);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    uVar8 = puVar7[1];
    uVar9 = puVar7[2];
    uVar10 = puVar7[3];
    uVar11 = puVar7[4];
    uVar12 = puVar7[5];
    uVar13 = puVar7[6];
    uVar14 = puVar7[7];
    *puVar2 = *puVar7;
    puVar2[1] = uVar8;
    puVar2[2] = uVar9;
    puVar2[3] = uVar10;
    puVar2[4] = uVar11;
    puVar2[5] = uVar12;
    puVar2[6] = uVar13;
    puVar2[7] = uVar14;
    uVar8 = puVar7[9];
    uVar9 = puVar7[10];
    uVar10 = puVar7[0xb];
    puVar2[8] = puVar7[8];
    puVar2[9] = uVar8;
    puVar2[10] = uVar9;
    puVar2[0xb] = uVar10;
    uVar8 = puVar7[0xd];
    uVar9 = puVar7[0xe];
    uVar10 = puVar7[0xf];
    uVar11 = puVar7[0x10];
    uVar12 = puVar7[0x11];
    uVar13 = puVar7[0x12];
    uVar14 = puVar7[0x13];
    puVar2[0xc] = puVar7[0xc];
    puVar2[0xd] = uVar8;
    puVar2[0xe] = uVar9;
    puVar2[0xf] = uVar10;
    puVar2[0x10] = uVar11;
    puVar2[0x11] = uVar12;
    puVar2[0x12] = uVar13;
    puVar2[0x13] = uVar14;
    puVar2[0x14] = puVar7[0x14];
    fn_001781f0(puVar2 + 0x15,puVar7 + 0x15);
    fn_001781f0(puVar2 + 0x21,puVar7 + 0x21);
    puVar2[0x2d] = puVar7[0x2d];
    puVar2[0x2e] = puVar7[0x2e];
    puVar2[0x2f] = puVar7[0x2f];
    puVar2[0x30] = puVar7[0x30];
    puVar2[0x31] = puVar7[0x31];
  }
  puVar3 = (undefined4 *)0x0;
  puVar2[0x2f] = 0;
  puVar2[0x30] = 0;
  cVar1 = *(char *)(puVar7 + 0x2d);
  if (cVar1 == '\0') {
    puVar3 = (undefined4 *)(**(code **)(*param_2 + 8))(param_2,0x18,4);
    if (puVar3 != (undefined4 *)0x0) {
      if (puVar7[0x2f] == 0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        puVar5 = (undefined4 *)((int)puVar7 + puVar7[0x2f] + 0xbc);
      }
      uVar8 = puVar5[1];
      uVar9 = puVar5[2];
      uVar10 = puVar5[3];
      uVar11 = puVar5[4];
      uVar12 = puVar5[5];
      *puVar3 = *puVar5;
      puVar3[1] = uVar8;
      puVar3[2] = uVar9;
      puVar3[3] = uVar10;
      puVar3[4] = uVar11;
      puVar3[5] = uVar12;
    }
  }
  else if (cVar1 == '\x01') {
    puVar3 = (undefined4 *)(**(code **)(*param_2 + 8))(param_2,0x20,4);
    if (puVar3 != (undefined4 *)0x0) {
      if (puVar7[0x2f] == 0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        puVar5 = (undefined4 *)((int)puVar7 + puVar7[0x2f] + 0xbc);
      }
      uVar8 = puVar5[1];
      uVar9 = puVar5[2];
      uVar10 = puVar5[3];
      uVar11 = puVar5[4];
      uVar12 = puVar5[5];
      uVar13 = puVar5[6];
      uVar14 = puVar5[7];
      *puVar3 = *puVar5;
      puVar3[1] = uVar8;
      puVar3[2] = uVar9;
      puVar3[3] = uVar10;
      puVar3[4] = uVar11;
      puVar3[5] = uVar12;
      puVar3[6] = uVar13;
      puVar3[7] = uVar14;
    }
  }
  else if ((cVar1 == '\x02') &&
          (puVar3 = (undefined4 *)(**(code **)(*param_2 + 8))(param_2,0x14,4),
          puVar3 != (undefined4 *)0x0)) {
    if (puVar7[0x2f] == 0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5 = (undefined4 *)((int)puVar7 + puVar7[0x2f] + 0xbc);
    }
    uVar8 = puVar5[1];
    uVar9 = puVar5[2];
    uVar10 = puVar5[3];
    uVar11 = puVar5[4];
    *puVar3 = *puVar5;
    puVar3[1] = uVar8;
    puVar3[2] = uVar9;
    puVar3[3] = uVar10;
    puVar3[4] = uVar11;
  }
  piVar6 = puVar2 + 0x2f;
  if (puVar3 == (undefined4 *)0x0) {
    *piVar6 = 0;
  }
  else {
    *piVar6 = (int)puVar3 - (int)piVar6;
  }
  cVar1 = *(char *)(puVar7 + 0x2e);
  puVar3 = (undefined4 *)0x0;
  if (cVar1 == '\0') {
    puVar3 = (undefined4 *)(**(code **)(*param_2 + 8))(param_2,0x14,4);
    if (puVar3 != (undefined4 *)0x0) {
      iVar4 = puVar7[0x30];
      if (iVar4 == 0) {
        puVar7 = (undefined4 *)0x0;
      }
      else {
        puVar7 = (undefined4 *)(iVar4 + (int)(puVar7 + 0x30));
      }
      uVar8 = puVar7[1];
      uVar9 = puVar7[2];
      uVar10 = puVar7[3];
      uVar11 = puVar7[4];
      *puVar3 = *puVar7;
      puVar3[1] = uVar8;
      puVar3[2] = uVar9;
      puVar3[3] = uVar10;
      puVar3[4] = uVar11;
    }
    goto LAB_00544ed8;
  }
  if (cVar1 == '\x01') {
    puVar3 = (undefined4 *)(**(code **)(*param_2 + 8))(param_2,0x1c,4);
    if (puVar3 == (undefined4 *)0x0) goto LAB_00544ed8;
    iVar4 = puVar7[0x30];
    if (iVar4 == 0) goto LAB_00544ecc;
LAB_00544ec4:
    puVar7 = (undefined4 *)((int)puVar7 + iVar4 + 0xc0);
  }
  else {
    if ((cVar1 != '\x02') ||
       (puVar3 = (undefined4 *)(**(code **)(*param_2 + 8))(param_2,0x1c,4),
       puVar3 == (undefined4 *)0x0)) goto LAB_00544ed8;
    iVar4 = puVar7[0x30];
    if (iVar4 != 0) goto LAB_00544ec4;
LAB_00544ecc:
    puVar7 = (undefined4 *)0x0;
  }
  uVar8 = puVar7[1];
  uVar9 = puVar7[2];
  uVar10 = puVar7[3];
  uVar11 = puVar7[4];
  uVar12 = puVar7[5];
  uVar13 = puVar7[6];
  *puVar3 = *puVar7;
  puVar3[1] = uVar8;
  puVar3[2] = uVar9;
  puVar3[3] = uVar10;
  puVar3[4] = uVar11;
  puVar3[5] = uVar12;
  puVar3[6] = uVar13;
LAB_00544ed8:
  piVar6 = puVar2 + 0x30;
  if (puVar3 == (undefined4 *)0x0) {
    *piVar6 = 0;
  }
  else {
    *piVar6 = (int)puVar3 - (int)piVar6;
  }
  *(undefined4 **)(param_1 + 0x26c) = puVar2;
  iVar4 = *(int *)(param_1 + 8);
  uVar8 = *(undefined4 *)(iVar4 + 0x34);
  uVar9 = *(undefined4 *)(iVar4 + 0x38);
  uVar10 = *(undefined4 *)(iVar4 + 0x3c);
  uVar11 = *(undefined4 *)(iVar4 + 0x40);
  uVar12 = *(undefined4 *)(iVar4 + 0x44);
  uVar13 = *(undefined4 *)(iVar4 + 0x48);
  uVar14 = *(undefined4 *)(iVar4 + 0x4c);
  *(undefined4 *)(param_1 + 0x270) = *(undefined4 *)(iVar4 + 0x30);
  *(undefined4 *)(param_1 + 0x274) = uVar8;
  *(undefined4 *)(param_1 + 0x278) = uVar9;
  *(undefined4 *)(param_1 + 0x27c) = uVar10;
  *(undefined4 *)(param_1 + 0x280) = uVar11;
  *(undefined4 *)(param_1 + 0x284) = uVar12;
  *(undefined4 *)(param_1 + 0x288) = uVar13;
  *(undefined4 *)(param_1 + 0x28c) = uVar14;
  *(undefined4 *)(param_1 + 0x290) = *(undefined4 *)(iVar4 + 0x50);
  return 0;
}


