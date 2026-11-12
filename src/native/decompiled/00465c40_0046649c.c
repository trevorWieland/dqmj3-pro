#include "00465c40_0046649c.h"



void fn_0046649c(void)

{
  int iVar1;
  
  iVar1 = fn_004664cc();
  if (iVar1 == 0) {
    return;
  }
  if (*(code **)(iVar1 + -8) == (code *)0x0) {
    fn_0030233c();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004664bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + -8))();
  return;
}



/* WARNING: Restarted to delay deadcode elimination for space: stack */

int fn_00465dd8(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined1 param_5)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  uint uVar9;
  char *pcVar10;
  int *piVar11;
  int iVar12;
  int local_28 [2];
  
  *param_1 = &DAT_00855bcc;
  iVar2 = fn_0013cd7c(param_1 + 2,param_3);
  *(undefined4 *)(iVar2 + 0x6c) = 0;
  *(undefined1 *)(iVar2 + 0x84) = 0;
  *(undefined4 *)(iVar2 + 0x68) = 0;
  *(undefined4 *)(iVar2 + -4) = param_2;
  *(undefined4 *)(iVar2 + 0x74) = 0;
  *(undefined4 *)(iVar2 + 0x70) = 0;
  *(undefined4 *)(iVar2 + 0x78) = 0;
  *(undefined1 *)(iVar2 + 0x7c) = 0;
  iVar12 = 0;
  *(undefined **)(iVar2 + -8) = &DAT_00852dc4;
  *(undefined2 *)(iVar2 + 0x86) = 0;
  piVar11 = (int *)(iVar2 + 0x88);
  *piVar11 = 0;
  *(undefined4 *)(iVar2 + 0x8c) = 0;
  *(undefined4 *)(iVar2 + 0x90) = 0;
  puVar3 = (undefined4 *)fn_0015ece0(0x80);
  *piVar11 = (int)puVar3;
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = 0;
  }
  *(int *)(iVar2 + 0x8c) = *piVar11 + 4;
  *(int *)(iVar2 + 0x90) = *piVar11 + 0x80;
  piVar11 = (int *)(iVar2 + 0x94);
  *piVar11 = 0;
  *(undefined4 *)(iVar2 + 0x98) = 0;
  *(undefined4 *)(iVar2 + 0x9c) = 0;
  puVar3 = (undefined4 *)fn_0015ece0(0x80);
  *piVar11 = (int)puVar3;
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = 0;
  }
  *(int *)(iVar2 + 0x98) = *piVar11 + 4;
  *(int *)(iVar2 + 0x9c) = *piVar11 + 0x80;
  iVar4 = fn_004b61c8(param_2);
  iVar4 = *(int *)(iVar4 + 0x84);
  *(undefined **)(iVar2 + 0xbc) = &DAT_008558f0;
  *(undefined1 *)(iVar2 + 0xcc) = 1;
  *(int *)(iVar2 + 200) = iVar4;
  *(int *)(iVar2 + 0xc0) = iVar4 << 3;
  *(undefined4 *)(iVar2 + 0xc4) = 0;
  *(undefined4 *)(iVar2 + 0xd0) = 0;
  *(undefined4 *)(iVar2 + 0xd4) = 0;
  *(undefined4 *)(iVar2 + 0xd8) = 0;
  *(undefined4 *)(iVar2 + 0xdc) = 0;
  *(undefined **)(iVar2 + 0xe0) = &DAT_00853688;
  *(undefined2 *)(iVar2 + 0xe4) = 0;
  *(undefined **)(iVar2 + 0xe8) = &DAT_00853688;
  *(undefined2 *)(iVar2 + 0xec) = 0;
  *(undefined **)(iVar2 + 0xf4) = &DAT_00853688;
  *(undefined2 *)(iVar2 + 0xf8) = 0;
  *(undefined4 *)(iVar2 + 0x110) = 0;
  *(undefined4 *)(iVar2 + 0x124) = 0;
  piVar11 = (int *)(iVar2 + 0x128);
  *piVar11 = 0;
  *(undefined4 *)(iVar2 + 300) = 0;
  *(undefined4 *)(iVar2 + 0x130) = 0;
  local_28[0] = 1;
  local_28[1] = 0x20;
  puVar3 = (undefined4 *)fn_0015ece0(0x80);
  *piVar11 = (int)puVar3;
  for (iVar4 = local_28[0]; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = 0;
    }
    puVar3 = puVar3 + 1;
  }
  *(int *)(iVar2 + 300) = *piVar11 + local_28[0] * 4;
  *(int *)(iVar2 + 0x130) = *piVar11 + 0x80;
  iVar2 = fn_001676b0(iVar2 + 0x134,1);
  *(undefined1 *)(iVar2 + 0x24) = 0;
  *(undefined4 *)(iVar2 + 0x28) = 0;
  *(undefined4 *)(iVar2 + 0x2c) = 0;
  *(undefined4 *)(iVar2 + 0x30) = 0;
  *(undefined4 *)(iVar2 + 0x34) = 0;
  *(undefined4 *)(iVar2 + 0x38) = 0;
  iVar4 = fn_0015ece0(4);
  *(int *)(iVar2 + 0x38) = iVar4 + 4;
  *(int *)(iVar2 + 0x28) = iVar4;
  *(undefined4 *)(iVar2 + 0x2c) = 0;
  *(undefined4 *)(iVar2 + 0x34) = 1;
  *(int *)(iVar2 + 0x30) = iVar4;
  **(undefined4 **)(iVar2 + 0x28) = 0;
  iVar2 = fn_00466dcc(iVar2 + 0x3c,L"Send",1000,&DAT_004662cc);
  *(undefined **)(iVar2 + 0x70) = &DAT_00853628;
  *(undefined4 *)(iVar2 + 0x78) = 0;
  *(undefined4 *)(iVar2 + 0x80) = 0;
  *(undefined4 *)(iVar2 + 0x74) = 0;
  *(undefined4 *)(iVar2 + 0x7c) = 0;
  iVar2 = fn_0045c4f4(iVar2 + 0x88);
  *(undefined4 *)(iVar2 + 0x78) = 0;
  *(undefined4 *)(iVar2 + 0x7c) = 0;
  fn_0045a808();
  iVar2 = fn_004b4334(iVar2 + 0x140);
  *(undefined1 *)(iVar2 + -0x284) = 0;
  *(undefined1 *)(iVar2 + -0x283) = 0;
  *(undefined1 *)(iVar2 + -0xd4) = 0;
  iVar4 = fn_0015ece0(0x28);
  uVar5 = 0;
  if (iVar4 != 0) {
    uVar5 = fn_0048c694();
  }
  **(undefined4 **)(iVar2 + -0x2b0) = uVar5;
  iVar4 = fn_0015ece0(0x6c);
  uVar5 = 0;
  if (iVar4 != 0) {
    iVar6 = fn_004b61c8(*(undefined4 *)(iVar2 + -0x33c));
    iVar7 = fn_004b61c8(*(undefined4 *)(iVar2 + -0x33c));
    uVar5 = fn_0046beb4(iVar4,*(uint *)(iVar7 + 0x70) & 0xffff,*(undefined4 *)(iVar6 + 0x74));
  }
  **(undefined4 **)(iVar2 + -0x2a4) = uVar5;
  *(undefined2 *)(iVar2 + -0x254) = 0;
  *(undefined2 *)(iVar2 + -0x24c) = 0;
  *(undefined2 *)(iVar2 + -0x240) = 0;
  *(undefined4 *)(iVar2 + -0x248) = param_4;
  *(undefined4 *)(iVar2 + -0x298) = 0;
  *(undefined4 *)(iVar2 + -0x280) = 0;
  *(undefined1 *)(iVar2 + -500) = param_5;
  *(undefined4 *)(iVar2 + -0x1f0) = 0;
  if (DAT_008b637e == '\0') {
LAB_00466298:
    pbVar8 = &DAT_008e9328;
  }
  else {
    piVar11 = (int *)fn_001775e8(DAT_008b63d8);
    if (*piVar11 == 0) goto LAB_00466298;
    pbVar8 = (byte *)(*piVar11 + DAT_008e9324);
  }
  uVar9 = (uint)*pbVar8 | DAT_008b64a0 << 8;
  *(uint *)(iVar2 + -0x1f0) = uVar9;
  cVar1 = *(char *)(*(int *)(iVar2 + -0x33c) + 4);
  if (cVar1 == '\n' || cVar1 == '\x02') {
    iVar4 = fn_004b616c(cVar1);
    if (*(char *)(iVar4 + 0x99) != '\x02') {
      uVar9 = *(uint *)(iVar2 + -0x1f0);
      goto LAB_00466138;
    }
  }
  else {
LAB_00466138:
    *(uint *)(iVar2 + -0x1f0) = uVar9 & 0xff | (uVar9 >> 8 & 0xfffffffe) << 8;
  }
  iVar4 = fn_004b616c(*(undefined1 *)(*(int *)(iVar2 + -0x33c) + 4));
  *(ushort *)(iVar2 + -0x23c) = (ushort)*(byte *)(iVar4 + 0x98);
  iVar6 = fn_0015ece0(0x150);
  iVar4 = 0;
  if (iVar6 != 0) {
    local_28[0] = 0;
    local_28[1] = 0;
    iVar4 = fn_004bc1a4(iVar6,iVar2 + -0x340,0,0x40);
  }
  *(int *)(iVar2 + -0x294) = iVar4;
  *(undefined1 *)(iVar4 + 0x24) = param_5;
  *(undefined4 *)(*(int *)(iVar2 + -0x294) + 0x8c) = *(undefined4 *)(iVar2 + -0x1f0);
  *(char *)(*(int *)(iVar2 + -0x294) + 0x67) = (char)*(undefined2 *)(iVar2 + -0x23c);
  **(undefined4 **)(iVar2 + -0x210) = 0;
  **(undefined1 **)(iVar2 + -0x204) = 1;
  if (DAT_008b637e == '\0') {
LAB_004662ec:
    pcVar10 = &DAT_008e9318;
  }
  else {
    piVar11 = (int *)fn_001775e8(DAT_008b63d8);
    if (*piVar11 == 0) goto LAB_004662ec;
    pcVar10 = (char *)(*piVar11 + DAT_008e9314);
  }
  if (*pcVar10 == '\0') {
    fn_0013d0fc(local_28);
    iVar4 = local_28[0];
    cVar1 = fn_004ba724(0xff);
    cVar1 = cVar1 + (char)iVar4;
    if (DAT_008b637e == '\0') {
LAB_0046633c:
      DAT_008e9318 = cVar1;
    }
    else {
      piVar11 = (int *)fn_001775e8(DAT_008b63d8);
      if (*piVar11 == 0) goto LAB_0046633c;
      *(char *)(DAT_008e9314 + *piVar11) = cVar1;
    }
  }
  else {
    if (DAT_008b637e == '\0') {
LAB_00466344:
      pcVar10 = &DAT_008e9318;
    }
    else {
      piVar11 = (int *)fn_001775e8(DAT_008b63d8);
      if (*piVar11 == 0) goto LAB_00466344;
      pcVar10 = (char *)(*piVar11 + DAT_008e9314);
    }
    cVar1 = *pcVar10;
    if (DAT_008b637e != '\0') {
      piVar11 = (int *)fn_001775e8(DAT_008b63d8);
      if (*piVar11 != 0) {
        *(char *)(DAT_008e9314 + *piVar11) = cVar1 + '\x01';
        goto LAB_0046625c;
      }
    }
    DAT_008e9318 = cVar1 + '\x01';
  }
LAB_0046625c:
  if (DAT_008b637e == '\0') {
LAB_00466354:
    pcVar10 = &DAT_008e9318;
  }
  else {
    piVar11 = (int *)fn_001775e8(DAT_008b63d8);
    if (*piVar11 == 0) goto LAB_00466354;
    pcVar10 = (char *)(*piVar11 + DAT_008e9314);
  }
  if (*pcVar10 == '\0') {
    if (DAT_008b637e == '\0') {
LAB_00466484:
      pcVar10 = &DAT_008e9318;
    }
    else {
      piVar11 = (int *)fn_001775e8(DAT_008b63d8);
      if (*piVar11 == 0) goto LAB_00466484;
      pcVar10 = (char *)(*piVar11 + DAT_008e9314);
    }
    cVar1 = *pcVar10;
    if (DAT_008b637e != '\0') {
      piVar11 = (int *)fn_001775e8(DAT_008b63d8);
      if (*piVar11 != 0) {
        *(char *)(DAT_008e9314 + *piVar11) = cVar1 + '\x01';
        goto LAB_004663c0;
      }
    }
    DAT_008e9318 = cVar1 + '\x01';
  }
LAB_004663c0:
  if (DAT_008b637e != '\0') {
    piVar11 = (int *)fn_001775e8(DAT_008b63d8);
    if (*piVar11 != 0) {
      pcVar10 = (char *)(*piVar11 + DAT_008e9314);
      goto LAB_004663ec;
    }
  }
  pcVar10 = &DAT_008e9318;
LAB_004663ec:
  *(char *)(iVar2 + -0x1f7) = *pcVar10;
  *(undefined1 *)(iVar2 + -0x1f8) = 0;
  *(undefined1 *)(iVar2 + -0x1f6) = 0;
  *(undefined1 *)(iVar2 + -0x1f5) = 0;
  *(undefined4 *)(iVar2 + -0x1e8) = 0;
  *(undefined4 *)(iVar2 + -0x1e4) = 0;
  *(undefined1 *)(iVar2 + -0x290) = 0;
  iVar4 = fn_004b61c8(*(undefined4 *)(iVar2 + -0x33c));
  *(undefined4 *)(iVar2 + -0x28c) = *(undefined4 *)(iVar4 + 0x6c);
  iVar4 = fn_004b61c8(*(undefined4 *)(iVar2 + -0x33c));
  *(undefined4 *)(iVar2 + -0x288) = *(undefined4 *)(iVar4 + 100);
  iVar4 = fn_004b7748();
  *(int *)(iVar2 + -0x144) = iVar4 + 0x104;
  iVar4 = fn_001249d0();
  if (iVar4 != 0) {
    iVar12 = *(int *)(iVar4 + 0xc);
  }
  (**(code **)(*(int *)(iVar12 + 0x50) + 8))();
  fn_0045a808(iVar2 + -0xd0);
  (**(code **)(*(int *)(iVar12 + 0x50) + 0xc))((int *)(iVar12 + 0x50));
  return iVar2 + -0x340;
}



void fn_00465d08(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_1[0x2a] != 0) {
    return;
  }
  iVar1 = fn_0015ece0(0x150);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = fn_004bc1a4(iVar1,param_1,4,0x40,0,0);
  }
  param_1[0x2a] = iVar2;
  *(char *)(iVar2 + 0x24) = (char)param_1[0x53];
  iVar2 = (**(code **)(*param_1 + 0x44))(param_1);
  if ((iVar2 == 0) || (iVar2 = (**(code **)(*param_1 + 0x44))(param_1), iVar2 == -1)) {
    *(undefined4 *)(*(int *)(param_1[0x2a] + 0x118) + 4) = 1000;
  }
  else {
    iVar2 = *(int *)(param_1[0x2a] + 0x118);
    uVar3 = (**(code **)(*param_1 + 0x44))(param_1);
    *(undefined4 *)(iVar2 + 4) = uVar3;
  }
  fn_004722b4(param_1[1] + 0x14,param_1[0x2a]);
  return;
}



void fn_00465c40(int param_1,int *param_2,int param_3)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint local_8;
  
  iVar1 = *param_2 - *(int *)(param_3 + 0x100);
  if (*(char *)(param_1 + 0xd4) == '\0') {
    iVar4 = iVar1 - (*(uint *)(param_1 + 200) >> 3);
    *(uint *)(param_1 + 200) = *(uint *)(param_1 + 200) + iVar4;
    if (iVar4 < 0) {
      iVar4 = -iVar4;
    }
    *(int *)(param_1 + 0xd0) = iVar1;
    *(uint *)(param_1 + 0xcc) =
         (iVar4 - (*(uint *)(param_1 + 0xcc) >> 2)) + *(uint *)(param_1 + 0xcc);
  }
  else {
    *(undefined1 *)(param_1 + 0xd4) = 0;
    *(int *)(param_1 + 0xd0) = iVar1;
    *(int *)(param_1 + 200) = iVar1 * 8;
    *(int *)(param_1 + 0xcc) = iVar1 * 2;
  }
  local_8 = *(uint *)(param_1 + 0xcc) & 0xfffffffc;
  puVar2 = &DAT_007d9c3c;
  if (0x20 < local_8) {
    puVar2 = &local_8;
  }
  uVar3 = *puVar2 + (*(uint *)(param_1 + 200) >> 3);
  uVar5 = *(uint *)(param_1 + 0x32c);
  if (*(uint *)(param_1 + 0x32c) < uVar3) {
    uVar5 = uVar3;
  }
  if (*(uint *)(param_1 + 0x330) < uVar3) {
    uVar3 = *(uint *)(param_1 + 0x330);
  }
  *(uint *)(param_1 + 0x32c) = uVar5;
  *(uint *)(param_1 + 0x330) = uVar3;
  return;
}


