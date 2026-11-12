#include "00501dd4_005028bc.h"



undefined4 fn_005028bc(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int local_20;
  int iStack_1c;
  
  if (((*(char *)((int)param_1 + 0x6f) != '\0') ||
      (iVar1 = fn_006d897c(*(undefined4 *)(DAT_008bf4e0 + 0xc)), iVar1 != 0)) ||
     (*(char *)(*(int *)(DAT_008bf4e0 + 0x1c) + 0x4c) != '\0')) {
    return 0;
  }
  iVar1 = fn_006d897c(*(undefined4 *)(DAT_008bf4e0 + 8));
  if (iVar1 == 0) {
    if (0xb < *(byte *)(DAT_008bf4e0 + 99)) {
      return 0;
    }
    fn_0011a604((int)param_1 + 0x72);
    *(undefined1 *)((int)param_1 + 0x7e) = 0;
    *(undefined1 *)((int)param_1 + 0x7f) = 0;
    *(undefined1 *)(param_1 + 0x20) = 0xfd;
    *(undefined1 *)((int)param_1 + 0x81) = 0;
    *(undefined1 *)((int)param_1 + 0x82) = 0;
    *(undefined1 *)((int)param_1 + 0x71) = 0xfd;
    *(undefined1 *)(param_1 + 0x1c) = 0xfd;
    (**(code **)(*param_1 + 8))(param_1,1);
    iVar1 = (**(code **)(*param_1 + 0x2c))(param_1,param_2,param_3);
    if (iVar1 != 0) {
      if ((*(int *)(DAT_008bf4d4 + 100) != 0) && (*(byte *)(DAT_008bf4e0 + 0x62) < 0xc)) {
        fn_005118f4();
      }
      local_20 = 0;
      iStack_1c = 0;
      fn_004f01f4(&local_20);
      param_1[0x16] = local_20;
      param_1[0x17] = iStack_1c;
      param_1[0x18] = 0;
      param_1[0x19] = 0;
      *(char *)(param_1 + 0x1b) = (char)*(undefined2 *)(DAT_008bf4e0 + 0x5c);
      *(undefined1 *)((int)param_1 + 0x6d) = 0xff;
      param_1[0x1a] = param_1[0x1a] + 1;
      *(undefined1 *)((int)param_1 + 0x6e) = 0;
      *(undefined1 *)((int)param_1 + 0x6f) = 1;
      return 1;
    }
  }
  else {
    fn_004f3498(*(undefined4 *)(DAT_008bf4e0 + 8),0xd8a148e1);
    (**(code **)(**(int **)(DAT_008bf4e0 + 8) + 8))(*(int **)(DAT_008bf4e0 + 8),1);
    fn_004feb10(*(undefined4 *)(DAT_008bf4e0 + 0x14));
    (**(code **)(**(int **)(DAT_008bf4e0 + 0x14) + 8))(*(int **)(DAT_008bf4e0 + 0x14),1);
  }
  return 0;
}



void fn_00502890(int *param_1)

{
  (**(code **)(*param_1 + 0x34))(param_1);
                    /* WARNING: Could not recover jumptable at 0x005028b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x30))(param_1);
  return;
}



undefined4 fn_0050273c(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint *puVar6;
  bool bVar7;
  longlong lVar8;
  
  lVar8 = fn_006d9328(DAT_008bf4e0);
  iVar1 = DAT_008bf4e0;
  uVar4 = 0;
  if (lVar8 != -1) {
    *(undefined1 *)(DAT_008bf4e0 + 0x60) = 0;
    iVar1 = fn_005006c8(*(undefined4 *)(iVar1 + 0x10));
    uVar4 = 0;
    if (iVar1 != 0) {
      fn_004efcf4(*(undefined4 *)(DAT_008bf4e0 + 0x10),0);
      if (*(char *)(*(int *)(DAT_008bf4e0 + 0x14) + 0xa4) != '\0') {
        fn_004feb10();
        (**(code **)(**(int **)(DAT_008bf4e0 + 0x14) + 8))(*(int **)(DAT_008bf4e0 + 0x14),0);
      }
      iVar1 = DAT_008bf4cc;
      for (puVar6 = (uint *)(DAT_008bf4cc + 0x3c);
          puVar6 != (uint *)(iVar1 + *(int *)(iVar1 + 0x38) * 4 + 0x3c); puVar6 = puVar6 + 1) {
        uVar5 = *(uint *)(iVar1 + 0xa4);
        uVar2 = *puVar6;
        bVar7 = uVar2 != uVar5;
        if (bVar7) {
          uVar5 = (uint)*(byte *)(uVar2 + 0x20);
        }
        if ((bVar7 && uVar5 != 5) || (10 < *(byte *)(uVar2 + 0x14))) {
          *(undefined1 *)(uVar2 + 0x20) = 6;
        }
        else {
          iVar3 = fn_006d92e4(DAT_008bf4e0);
          if (iVar3 == 0) {
            fn_00504f0c(DAT_008bf4e0,*(undefined1 *)(*puVar6 + 0x14));
          }
        }
      }
      if (*(int *)(DAT_008bf4e0 + 0x2c) != 0) {
        fn_004fb6cc();
      }
      uVar4 = 1;
    }
  }
  return uVar4;
}



undefined1 fn_00502718(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(DAT_008bf4e0 + 0x14);
  uVar2 = 0;
  if (*(uint *)(iVar1 + 0x88) != 0) {
    do {
      if (*(int *)(*(int *)(iVar1 + 0x70) + uVar2 * 0x54 + 0x18) == param_2) {
        return *(undefined1 *)(*(int *)(iVar1 + 0x74) + uVar2);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(iVar1 + 0x88));
  }
  return 0xfd;
}



undefined4 fn_005026dc(int *param_1)

{
  fn_004f6ad8(*(undefined4 *)(DAT_008bf4e0 + 0x4c),(char)param_1[0x1c]);
  (**(code **)(*param_1 + 0x40))(param_1,(char)param_1[0x1c]);
  return 1;
}



void fn_005026b8(int param_1)

{
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined1 *)(param_1 + 0x6e) = 0;
  *(undefined1 *)(param_1 + 0x6c) = 0xff;
  *(undefined1 *)(param_1 + 0x6d) = 0xff;
  return;
}



undefined4 fn_0050215c(int param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  longlong lVar4;
  int iVar5;
  undefined4 uVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint local_18;
  int iStack_14;
  
  iVar5 = DAT_008bf4e0;
  bVar1 = *(byte *)(DAT_008bf4e0 + 0x62);
  *(byte *)(param_1 + 0x70) = bVar1;
  bVar2 = *(byte *)(iVar5 + 99);
  bVar3 = bVar2;
  if (bVar2 < 0xc) {
    bVar3 = *(byte *)(param_1 + 0x71);
    bVar1 = bVar3;
  }
  if (bVar3 < 0xc) {
    if (bVar1 != bVar2) {
      *(undefined1 *)(param_1 + 0x7f) = 1;
      *(undefined1 *)(param_1 + 0x80) = 0xfd;
      local_18 = 0;
      iStack_14 = 0;
      fn_004f01f4(&local_18);
      uVar11 = *(uint *)(param_1 + 0x48);
      puVar7 = (uint *)fn_004f0ce8();
      uVar10 = *puVar7;
      uVar9 = puVar7[1];
      lVar4 = (ulonglong)uVar11 * (ulonglong)uVar10;
      uVar8 = (uint)lVar4;
      *(uint *)(param_1 + 0x40) = uVar8 + local_18;
      *(uint *)(param_1 + 0x44) =
           uVar10 * ((int)uVar11 >> 0x1f) + uVar9 * uVar11 + (int)((ulonglong)lVar4 >> 0x20) +
           iStack_14 + (uint)CARRY4(uVar8,local_18);
      return 2;
    }
    local_18 = 0;
    iStack_14 = 0;
    fn_004f01f4(&local_18);
    uVar11 = *(int *)(param_1 + 0x48) - 500;
    puVar7 = (uint *)fn_004f0ce8();
    uVar10 = *puVar7;
    uVar9 = puVar7[1];
    lVar4 = (ulonglong)uVar11 * (ulonglong)uVar10;
    uVar8 = (uint)lVar4;
    *(uint *)(param_1 + 0x40) = uVar8 + local_18;
    *(uint *)(param_1 + 0x44) =
         uVar10 * ((int)uVar11 >> 0x1f) + uVar9 * uVar11 + (int)((ulonglong)lVar4 >> 0x20) +
         iStack_14 + (uint)CARRY4(uVar8,local_18);
    uVar6 = 1;
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}



uint fn_005020ac(int *param_1)

{
  uint unaff_r5;
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x3c))(param_1);
  if ((int)uVar1 == 0) {
    return (uint)((ulonglong)uVar1 >> 0x20) & 0xff00 | 5;
  }
  param_1[9] = (int)fn_00501e60;
  param_1[10] = 0;
  param_1[0xb] = (int)"ProcessHostMigrationJob::HostMigrationSuccess";
  return unaff_r5 & 0xff00;
}



uint fn_00501ed8(int *param_1)

{
  bool bVar1;
  bool bVar2;
  short sVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  uint uVar9;
  uint unaff_r6;
  uint uVar10;
  uint uVar11;
  uint unaff_r9;
  int *unaff_r11;
  
  bVar8 = 0;
  iVar4 = 0;
  do {
    if (*(char *)((int)param_1 + iVar4 + 0x72) != '\0') {
      bVar8 = 1;
      uVar10 = *(uint *)(DAT_008bf49c + 0x30);
      uVar11 = *(uint *)(DAT_008bf49c + 0x34);
      if (uVar11 <= (uint)param_1[0x11] &&
          (uint)((uint)param_1[0x10] <= uVar10) <= uVar11 - param_1[0x11]) {
        bVar1 = uVar11 < (uint)param_1[0x15];
        bVar2 = param_1[0x15] - uVar11 < (uint)(uVar10 <= (uint)param_1[0x14]);
        if (!bVar1 && !bVar2) {
          unaff_r11 = &DAT_008bf4e0;
        }
        uVar9 = (uint)(bVar1 || bVar2);
        if (bVar1 || bVar2) goto LAB_00502030;
        goto LAB_00501f38;
      }
      break;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0xc);
  iVar4 = (**(code **)(*param_1 + 0x4c))(param_1);
  if (iVar4 != 0) {
    param_1[9] = (int)fn_00501874;
    param_1[10] = 0;
    param_1[0xb] = (int)"ProcessHostMigrationJob::SendMigrationFinish";
  }
  *(byte *)((int)param_1 + 0x83) = bVar8 ^ 1;
  return unaff_r6 & 0xff00;
LAB_00501f38:
  if ((*(char *)((int)param_1 + uVar9 + 0x72) != '\0') &&
     (iVar4 = fn_004f4f30(*(undefined4 *)(*unaff_r11 + 0x4c),uVar9 & 0xff), iVar4 == 0)) {
    iVar4 = fn_006d92e4(*unaff_r11,uVar9 & 0xff);
    if (iVar4 != 0) {
      iVar4 = fn_0050b080(DAT_008bf4cc,uVar9 & 0xff);
      if (iVar4 != 0) goto LAB_00501ff4;
      fn_00505a0c(*unaff_r11,uVar9 & 0xff);
      sVar3 = *(short *)(*unaff_r11 + 0x5c);
      if (sVar3 != 0) {
        *(short *)(*unaff_r11 + 0x5c) = sVar3 + -1;
      }
    }
    *(undefined1 *)((int)param_1 + uVar9 + 0x72) = 0;
  }
LAB_00501ff4:
  uVar9 = uVar9 + 1;
  if (0xb < (int)uVar9) {
    puVar5 = (uint *)fn_004f0ce8();
    uVar7 = *puVar5;
    uVar9 = puVar5[1];
    uVar6 = (uint)((ulonglong)uVar7 * 500);
    param_1[0x14] = uVar6 + uVar10;
    param_1[0x15] =
         uVar9 * 500 + (int)((ulonglong)uVar7 * 500 >> 0x20) + uVar11 + (uint)CARRY4(uVar6,uVar10);
LAB_00502030:
    return unaff_r9 & 0xff00 | 5;
  }
  goto LAB_00501f38;
}



uint fn_00501e60(int *param_1)

{
  uint unaff_r5;
  uint local_18;
  int iStack_14;
  
  local_18 = 0;
  iStack_14 = 0;
  fn_004f01f4(&local_18);
  param_1[0x18] = local_18 - param_1[0x16];
  param_1[0x19] = iStack_14 - (param_1[0x17] + (uint)(local_18 < (uint)param_1[0x16]));
  *(char *)((int)param_1 + 0x6d) = (char)*(undefined2 *)(DAT_008bf4e0 + 0x5c);
  (**(code **)(*param_1 + 0x34))(param_1);
  fn_00505728(DAT_008bf4e0);
  return unaff_r5 & 0xff00 | 1;
}



uint fn_00501dd4(int *param_1)

{
  uint unaff_r5;
  uint local_18;
  int iStack_14;
  
  fn_00505374(DAT_008bf4e0,3,0xfd);
  local_18 = 0;
  iStack_14 = 0;
  fn_004f01f4(&local_18);
  param_1[0x18] = local_18 - param_1[0x16];
  param_1[0x19] = iStack_14 - (param_1[0x17] + (uint)(local_18 < (uint)param_1[0x16]));
  *(undefined1 *)(DAT_008bf4e0 + 0x65) = 7;
  fn_00505a04();
  fn_005044fc(DAT_008bf4e0);
  (**(code **)(*param_1 + 0x34))(param_1);
  return unaff_r5 & 0xff00 | 1;
}


