#include "0045b6d4_0045b984.h"



void fn_0045b984(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  bool bVar6;
  bool bVar7;
  undefined1 auStack_40 [12];
  int local_34;
  int local_30;
  undefined1 auStack_28 [12];
  int local_1c;
  int local_18;
  
  fn_0015ed58(param_1 + 0x220);
  piVar5 = (int *)**(undefined4 **)(param_1 + 0x204);
  uVar1 = *(int *)(param_2 + 0x10) - *(int *)(param_2 + 0xc);
  uVar4 = piVar5[8];
  bVar6 = uVar4 <= uVar1;
  if (bVar6) {
    uVar4 = piVar5[9];
  }
  if (bVar6 && uVar1 <= uVar4) {
    fn_0015ed58(piVar5 + 2,param_2);
    (**(code **)(*piVar5 + 0x1c))(piVar5);
  }
  piVar5 = (int *)**(undefined4 **)(param_1 + 0x210);
  uVar1 = *(int *)(param_2 + 0x10) - *(int *)(param_2 + 0xc);
  uVar4 = piVar5[8];
  bVar6 = uVar4 <= uVar1;
  if (bVar6) {
    uVar4 = piVar5[9];
  }
  if (bVar6 && uVar1 <= uVar4) {
    fn_0015ed58(piVar5 + 2,param_2);
    (**(code **)(*piVar5 + 0x1c))(piVar5);
  }
  if (1 < (uint)(*(int *)(param_1 + 0x208) - (int)*(int **)(param_1 + 0x204) >> 2)) {
    fn_004b31c4(auStack_40,**(int **)(param_1 + 0x204) + 8);
    fn_004b31c4(auStack_28,**(int **)(param_1 + 0x210) + 8);
    uVar4 = 1;
    if (1 < (uint)(*(int *)(param_1 + 0x208) - *(int *)(param_1 + 0x204) >> 2)) {
      do {
        uVar1 = 0;
        if ((uint)(local_30 - local_34) >> 1 != 0) {
          do {
            iVar3 = local_34;
            if (local_34 == local_30) {
              iVar3 = 0;
            }
            *(char *)(iVar3 + uVar1) =
                 ((char)((uint)(local_30 - local_34) >> 1) - (char)uVar1) + '\x01' +
                 *(char *)(iVar3 + uVar1);
            iVar3 = local_1c;
            if (local_1c == local_18) {
              iVar3 = 0;
            }
            *(char *)(iVar3 + uVar1) =
                 ((char)((uint)(local_30 - local_34) >> 1) - (char)uVar1) + '\x01' +
                 *(char *)(iVar3 + uVar1);
            uVar1 = uVar1 + 1;
          } while (uVar1 < (uint)(local_30 - local_34) >> 1);
        }
        piVar5 = *(int **)(*(int *)(param_1 + 0x204) + uVar4 * 4);
        uVar1 = local_30 - local_34;
        bVar7 = uVar1 <= (uint)piVar5[8];
        bVar6 = piVar5[8] == uVar1;
        if (!bVar7 || bVar6) {
          bVar7 = (uint)piVar5[9] <= uVar1;
          bVar6 = uVar1 == piVar5[9];
        }
        if (!bVar7 || bVar6) {
          fn_0015ed58(piVar5 + 2,auStack_40);
          (**(code **)(*piVar5 + 0x1c))(piVar5);
        }
        piVar5 = *(int **)(*(int *)(param_1 + 0x210) + uVar4 * 4);
        uVar2 = local_18 - local_1c;
        uVar1 = piVar5[8];
        bVar6 = uVar1 <= uVar2;
        if (bVar6) {
          uVar1 = piVar5[9];
        }
        if (bVar6 && uVar2 <= uVar1) {
          fn_0015ed58(piVar5 + 2,auStack_28);
          (**(code **)(*piVar5 + 0x1c))(piVar5);
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < (uint)(*(int *)(param_1 + 0x208) - *(int *)(param_1 + 0x204) >> 2));
    }
    fn_0014f2b0(auStack_28);
    fn_0014f2b0(auStack_40);
  }
  return;
}



void fn_0045b844(int param_1,int param_2,char param_3,char param_4)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  bool bVar6;
  undefined1 auStack_48 [12];
  int local_3c;
  int local_38;
  undefined1 auStack_30 [12];
  int local_24;
  int local_20;
  
  fn_0015ed58(param_1 + 0x20);
  fn_004b31c4(auStack_30,param_2);
  iVar1 = local_24;
  if (local_24 == local_20) {
    iVar1 = 0;
  }
  pcVar2 = (char *)(iVar1 + ((uint)(*(int *)(param_2 + 0x10) - *(int *)(param_2 + 0xc)) >> 1));
  *pcVar2 = *pcVar2 + param_3;
  fn_004b31c4(auStack_48,param_2);
  iVar1 = local_3c;
  if (local_3c == local_38) {
    iVar1 = 0;
  }
  pcVar2 = (char *)(iVar1 + ((uint)(*(int *)(param_2 + 0x10) - *(int *)(param_2 + 0xc)) >> 1));
  *pcVar2 = *pcVar2 + param_4;
  piVar5 = (int *)**(undefined4 **)(param_1 + 4);
  uVar3 = local_20 - local_24;
  uVar4 = piVar5[8];
  bVar6 = uVar4 <= uVar3;
  if (bVar6) {
    uVar4 = piVar5[9];
  }
  if (bVar6 && uVar3 <= uVar4) {
    fn_0015ed58(piVar5 + 2,auStack_30);
    (**(code **)(*piVar5 + 0x1c))(piVar5);
  }
  piVar5 = (int *)**(undefined4 **)(param_1 + 0x10);
  uVar3 = local_38 - local_3c;
  uVar4 = piVar5[8];
  bVar6 = uVar4 <= uVar3;
  if (bVar6) {
    uVar4 = piVar5[9];
  }
  if (bVar6 && uVar3 <= uVar4) {
    fn_0015ed58(piVar5 + 2,auStack_48);
    (**(code **)(*piVar5 + 0x1c))(piVar5);
  }
  *(undefined1 *)(param_1 + 0x68) = 1;
  if (1 < *(ushort *)(param_1 + 0x6a)) {
    fn_0045bbcc(param_1);
  }
  fn_0014f2b0(auStack_48);
  fn_0014f2b0(auStack_30);
  return;
}



void fn_0045b6d4(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined *local_f8 [22];
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  char local_90;
  undefined *local_8c [22];
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  char local_24;
  
  local_f8[0] = &DAT_0085748c;
  local_90 = '\0';
  fn_00160094(local_f8);
  local_8c[0] = &DAT_0085748c;
  local_24 = '\0';
  fn_00160094(local_8c);
  iVar2 = *(int *)(param_2 + 0xc);
  if (iVar2 == *(int *)(param_2 + 0x10)) {
    iVar2 = 0;
  }
  if (local_90 == '\0') {
    fn_001600c4(local_f8,iVar2);
  }
  iVar3 = *(int *)(param_2 + 0xc);
  iVar2 = iVar3;
  if (iVar3 == *(int *)(param_2 + 0x10)) {
    iVar2 = 0;
  }
  if (local_24 == '\0') {
    fn_001600c4(local_8c,iVar2,*(int *)(param_2 + 0x10) - iVar3);
  }
  if (local_90 == '\0') {
    fn_001600c4(local_f8,param_3,8);
  }
  if (local_24 == '\0') {
    fn_001600c4(local_8c,param_4,8);
  }
  if (local_90 == '\0') {
    fn_00160190(local_f8,&local_a0);
    local_90 = '\x01';
  }
  if (local_24 == '\0') {
    fn_00160190(local_8c,&local_34);
  }
  puVar1 = *(undefined4 **)(param_5 + 0xc);
  if (puVar1 == *(undefined4 **)(param_5 + 0x10)) {
    puVar1 = (undefined4 *)0x0;
  }
  *puVar1 = local_a0;
  puVar1[1] = local_9c;
  puVar1[2] = local_98;
  puVar1[3] = local_94;
  iVar2 = *(int *)(param_5 + 0xc);
  if (iVar2 == *(int *)(param_5 + 0x10)) {
    iVar2 = 0;
  }
  *(undefined4 *)(iVar2 + 0x10) = local_34;
  *(undefined4 *)(iVar2 + 0x14) = local_30;
  *(undefined4 *)(iVar2 + 0x18) = local_2c;
  *(undefined4 *)(iVar2 + 0x1c) = local_28;
  return;
}


