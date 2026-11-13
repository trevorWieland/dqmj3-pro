#include "004fe980_00501508.h"



uint fn_00501508(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 *unaff_r11;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined1 auStack_80 [92];
  
  iVar3 = DAT_008c06a0;
  bVar1 = *(byte *)(DAT_008bf4e0 + 99);
  puVar7 = *(undefined4 **)(DAT_008bf4cc + 0xa4);
  if (puVar7 != (undefined4 *)0x0) {
    fn_00124e48(auStack_80);
    iVar2 = fn_006db908(iVar3,puVar7,auStack_80);
    if (-1 < iVar2) {
      fn_00518140(iVar3 + 0x58,auStack_80);
      fn_004ed810(iVar3 + 0xac,puVar7 + 1);
      fn_0051811c(auStack_80);
      iVar3 = fn_0050b080(DAT_008bf4cc,(char)param_1[0x1c]);
      if (iVar3 != 0) {
        iVar2 = fn_006d92e4(DAT_008bf4e0,(char)param_1[0x1c]);
        if (iVar2 == 0) {
          *(undefined1 *)(iVar3 + 0x20) = 6;
        }
        else {
          (**(code **)(*param_1 + 0x40))(param_1,(char)param_1[0x1c]);
        }
      }
      fn_00505374(DAT_008bf4e0,2,(uint)bVar1);
      iVar3 = 0;
      uVar8 = 0;
      local_8c = 0;
      local_88 = 0;
      local_84 = 0;
      do {
        if (((uVar8 & 0xff) == (uint)bVar1) ||
           (iVar2 = fn_006d92e4(DAT_008bf4e0,uVar8 & 0xff), iVar2 == 0)) {
          *(undefined1 *)((int)param_1 + uVar8 + 0x72) = 0;
        }
        else {
          iVar2 = fn_004f4f30(*(undefined4 *)(DAT_008bf4e0 + 0x4c),uVar8 & 0xff);
          unaff_r11 = (undefined4 *)((int)param_1 + uVar8);
          *(undefined1 *)((int)unaff_r11 + 0x72) = 1;
          if ((iVar2 == 0) && (iVar2 = fn_0050b080(DAT_008bf4cc,uVar8 & 0xff), iVar2 == 0)) {
            auStack_80[iVar3 + -0xc] = (char)uVar8;
            iVar3 = iVar3 + 1;
            *(undefined1 *)((int)unaff_r11 + 0x72) = 0;
          }
        }
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < 0xc);
      if (0 < iVar3) {
        unaff_r11 = &DAT_008bf4cc;
      }
      iVar2 = 0;
      if (0 < iVar3) {
        do {
          fn_00505a0c(DAT_008bf4e0,auStack_80[iVar2 + -0xc]);
          if (*(short *)(DAT_008bf4e0 + 0x5c) != 0) {
            *(short *)(DAT_008bf4e0 + 0x5c) = *(short *)(DAT_008bf4e0 + 0x5c) + -1;
          }
          iVar4 = fn_0050b080(*unaff_r11,auStack_80[iVar2 + -0xc]);
          if (iVar4 != 0) {
            (**(code **)(**(int **)(iVar4 + 0x30) + 0x18))(*(int **)(iVar4 + 0x30),iVar4);
            fn_0051ba28(DAT_008c06a0,iVar4);
            fn_005191c0(DAT_008c0674,iVar4);
            fn_0051c5c8(iVar4);
            fn_0051ca8c(iVar4);
            fn_0050b66c(*unaff_r11,iVar4);
            fn_0051da28(DAT_008bf4d4);
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < iVar3);
      }
      puVar5 = (uint *)fn_004f0ce8();
      uVar8 = (uint)((ulonglong)*puVar5 * 500);
      uVar6 = *(uint *)(DAT_008bf49c + 0x30);
      param_1[0x15] =
           *(int *)(DAT_008bf49c + 0x34) + puVar5[1] * 500 + (int)((ulonglong)*puVar5 * 500 >> 0x20)
           + (uint)CARRY4(uVar6,uVar8);
      param_1[0x14] = uVar6 + uVar8;
      *(undefined1 *)((int)param_1 + 0x7e) = 1;
      param_1[0xb] = (int)"ProcessHostMigrationJob::WaitGreetingResponse";
      param_1[9] = (int)fn_00501ed8;
      param_1[10] = 0;
      return (uint)param_1 & 0xff00 | 5;
    }
    fn_0051811c(auStack_80);
    (**(code **)*puVar7)(puVar7,*(code **)*puVar7,0,4);
  }
  param_1[0xb] = (int)"ProcessHostMigrationJob::HostMigrationFailure";
  param_1[9] = (int)fn_00501dd4;
  param_1[10] = 0;
  return 0;
}



int fn_00500760(void)

{
  ushort uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  uint uVar8;
  int iVar9;
  
  puVar2 = (undefined4 *)fn_004eddf4();
  *puVar2 = &DAT_00856f04;
  puVar2[0x10] = 0;
  puVar2[0x11] = 0;
  puVar2[0x12] = 15000;
  puVar2[0x13] = 0;
  iVar3 = fn_0014f590(puVar2 + 0x1a);
  iVar9 = iVar3 + -0x68;
  *(undefined1 *)(iVar3 + 0x10) = 0xfd;
  *(undefined1 *)(iVar3 + 0x11) = 0;
  *(undefined1 *)(iVar3 + 0x12) = 3;
  *(undefined1 *)(iVar3 + 0x13) = 0;
  uVar8 = 0;
  uVar1 = *(ushort *)(DAT_008bf4e0 + 0x5e);
  do {
    if (uVar8 < uVar1 / 9 + (uint)((uint)uVar1 % 9 != 0)) {
      uVar4 = fn_004ed2e8();
      iVar5 = fn_00656e58(0x5aa,uVar4,4);
      if (iVar5 == 0) {
        iVar5 = 0;
      }
      else {
        uVar6 = 0;
        do {
          puVar7 = (undefined1 *)(iVar5 + uVar6);
          uVar6 = uVar6 + 1;
          if (puVar7 != (undefined1 *)0x0) {
            *puVar7 = 0;
          }
        } while (uVar6 < 0x5aa);
      }
      *(int *)(iVar9 + uVar8 * 4 + 0x5c) = iVar5;
    }
    else {
      *(undefined4 *)(iVar9 + uVar8 * 4 + 0x5c) = 0;
    }
    uVar8 = uVar8 + 1;
  } while (uVar8 < 3);
  *(undefined4 *)(iVar3 + -0x18) = 0;
  *(undefined4 *)(iVar3 + -0x14) = 0;
  *(undefined4 *)(iVar3 + -0x10) = 0;
  return iVar9;
}



/* WARNING: Removing unreachable block (ram,0x0050019c) */

uint fn_004ffc74(uint param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  undefined1 uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  code *pcVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint in_r12;
  undefined4 local_138 [7];
  undefined1 auStack_11c [8];
  undefined1 auStack_114 [12];
  short local_108;
  int local_fc;
  undefined1 auStack_c8 [20];
  short local_b4;
  int local_a8;
  int local_70 [16];
  uint local_30;
  int iStack_2c;
  
  if (*(int *)(DAT_008bf4cc + 0xa4) == 0) {
    *(char **)(param_1 + 0x2c) = "ProcessJoinRequestJob::InitialStep";
    *(undefined1 **)(param_1 + 0x24) = &LAB_004ff9f8;
    *(undefined4 *)(param_1 + 0x28) = 0;
    return param_4 & 0xff00;
  }
  iVar3 = fn_0050b144(DAT_008bf4cc,param_1 + 0x68);
  if (0x3fefffff < iVar3 - 0x100000U) {
    *(undefined1 **)(param_1 + 0x24) = &LAB_004ff9f8;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(char **)(param_1 + 0x2c) = "ProcessJoinRequestJob::InitialStep";
    return in_r12 & 0xff00;
  }
  iVar4 = fn_00505c04(DAT_008bf4e0);
  *(char *)(param_1 + 0x78) = (char)iVar4;
  if (iVar4 == 0xfd) {
    *(char **)(param_1 + 0x2c) = "ProcessJoinRequestJob::SendDenyingJoinResponse";
    *(code **)(param_1 + 0x24) = fn_00500574;
    *(undefined4 *)(param_1 + 0x28) = 0;
    return in_r12 & 0xff00;
  }
  local_70[0] = 0;
  local_70[1] = 0;
  local_70[2] = 0;
  local_70[3] = 0;
  local_70[4] = 0;
  local_70[5] = 0;
  local_70[6] = 0;
  uVar8 = 0;
  local_70[7] = 0;
  local_70[8] = 0;
  local_70[9] = 0;
  local_70[10] = 0;
  local_70[0xb] = 0;
  fn_00124e48(auStack_11c);
  fn_00124e48(auStack_c8);
  iVar4 = fn_006db908(DAT_008c06a0,iVar3,auStack_11c);
  if ((-1 < iVar4) && (iVar4 = fn_006d6e30(auStack_114), iVar4 != 0)) {
    for (piVar7 = (int *)(DAT_008bf4cc + 0x3c);
        piVar7 != (int *)(DAT_008bf4cc + *(int *)(DAT_008bf4cc + 0x38) * 4 + 0x3c);
        piVar7 = piVar7 + 1) {
      if ((((*piVar7 != iVar3) &&
           (iVar4 = fn_006db908(DAT_008c06a0,*piVar7,auStack_c8), -1 < iVar4)) &&
          (local_fc == local_a8)) && (local_108 == local_b4)) {
        local_70[uVar8] = *piVar7;
        uVar8 = uVar8 + 1;
      }
    }
    if (uVar8 != 0) {
      uVar9 = 0;
      uVar10 = uVar9;
      do {
        pcVar6 = (code *)**(undefined4 **)local_70[uVar9];
        (*pcVar6)((undefined4 *)local_70[uVar9],pcVar6,0x80000000,0);
        uVar1 = *(undefined1 *)(local_70[uVar9] + 0x14);
        iVar4 = fn_006d92e4(DAT_008bf4e0,uVar1);
        if (iVar4 != 0) {
          fn_00505a0c(DAT_008bf4e0,uVar1);
          uVar10 = 1;
          if (*(short *)(DAT_008bf4e0 + 0x5c) != 0) {
            *(short *)(DAT_008bf4e0 + 0x5c) = *(short *)(DAT_008bf4e0 + 0x5c) + -1;
          }
        }
        (**(code **)(**(int **)(local_70[uVar9] + 0x30) + 0x18))();
        fn_0051ba28(DAT_008c06a0,local_70[uVar9]);
        fn_005191c0(DAT_008c0674,local_70[uVar9]);
        fn_0051ca8c(local_70[uVar9]);
        fn_0051c5c8(local_70[uVar9]);
        fn_0050b66c(DAT_008bf4cc,local_70[uVar9]);
        uVar9 = uVar9 + 1;
      } while (uVar9 < uVar8);
      fn_0051da28(DAT_008bf4d4);
      if (uVar10 != 0) {
        fn_004f5004(*(undefined4 *)(DAT_008bf4e0 + 0x4c),1);
      }
    }
  }
  fn_0051811c(auStack_c8);
  fn_0051811c(auStack_11c);
  *(undefined1 *)(iVar3 + 0x14) = *(undefined1 *)(param_1 + 0x78);
  fn_00504f0c(DAT_008bf4e0,*(undefined1 *)(param_1 + 0x78));
  if (*(int *)(DAT_008bf4d4 + 100) - 0x100000U < 0x3ff00000) {
    fn_00510e04(*(int *)(DAT_008bf4d4 + 100),*(undefined1 *)(DAT_008bf4e0 + 99),
                 *(undefined1 *)(param_1 + 0x78),*(undefined1 *)(param_1 + 0x78));
  }
  local_30 = 0;
  iStack_2c = 0;
  fn_004f01f4(&local_30);
  uVar10 = *(uint *)(param_1 + 0x48);
  puVar5 = (uint *)fn_004f0ce8();
  lVar2 = (ulonglong)uVar10 * (ulonglong)*puVar5;
  uVar8 = (uint)lVar2;
  uVar9 = (uint)((ulonglong)lVar2 >> 0x20);
  *(uint *)(param_1 + 0x44) =
       *puVar5 * ((int)uVar10 >> 0x1f) + puVar5[1] * uVar10 + uVar9 + iStack_2c +
       (uint)CARRY4(uVar8,local_30);
  *(uint *)(param_1 + 0x40) = uVar8 + local_30;
  local_70[0xc] = *(undefined4 *)(param_1 + 0x5c);
  local_70[0xd] = *(undefined4 *)(param_1 + 0x60);
  local_70[0xe] = *(undefined4 *)(param_1 + 100);
  local_138[0] = 0;
  local_138[1] = 0;
  local_138[2] = 0;
  uVar8 = fn_004f639c(*(undefined4 *)(DAT_008bf4e0 + 0x4c),*(undefined1 *)(param_1 + 0x78),
                       local_70 + 0xc,local_138);
  if (2 < uVar8 - 1) {
    *(char **)(param_1 + 0x2c) = "ProcessJoinRequestJob::InitialStep";
    *(undefined1 **)(param_1 + 0x24) = &LAB_004ff9f8;
    *(undefined4 *)(param_1 + 0x28) = 0;
    return uVar9 & 0xff00;
  }
  uVar10 = 0;
  if (uVar8 != 0) {
    do {
      iVar4 = fn_00519798(DAT_008c0690,param_1 + uVar10 * 4 + 0x50,local_70[uVar10 + 0xc],
                           local_138[uVar10],0xfd,iVar3 + 4U,
                           *(undefined4 *)(*(int *)(DAT_008bf4e0 + 0x4c) + 0xc));
      if (iVar4 < 0) {
        while (uVar10 = uVar10 - 1, -1 < (int)uVar10) {
          fn_005196a0(DAT_008c0690,*(undefined4 *)(param_1 + uVar10 * 4 + 0x50));
        }
        *(char **)(param_1 + 0x2c) = "ProcessJoinRequestJob::InitialStep";
        *(undefined1 **)(param_1 + 0x24) = &LAB_004ff9f8;
        *(undefined4 *)(param_1 + 0x28) = 0;
        return iVar3 + 4U & 0xff00;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar8);
  }
  for (; (int)uVar8 < 3; uVar8 = uVar8 + 1) {
    *(undefined4 *)(param_1 + uVar8 * 4 + 0x50) = 0;
  }
  *(code **)(param_1 + 0x24) = fn_004ffb1c;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(char **)(param_1 + 0x2c) = "ProcessJoinRequestJob::WaitResponseAck";
  return param_1 & 0xff00 | 5;
}



void fn_004fe980(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(DAT_008bf4e0 + 8);
  iVar1 = *(int *)(iVar3 + 0x74);
  if (param_3 == 2 || param_3 == 0x12) {
    if (((iVar1 == -0x275eb716 || iVar1 == -0x275eb713) ||
        (iVar1 == -0x275eb70e || iVar1 == -0x275eb715)) || (iVar1 == -0x275eb714))
    goto LAB_004fea3c;
    uVar2 = 0xd8a148e7;
LAB_004fea38:
    *(undefined4 *)(iVar3 + 0x74) = uVar2;
    goto LAB_004fea3c;
  }
  if (param_3 == 3 || param_3 == 0x13) {
    if ((iVar1 != -0x275eb713 && iVar1 != -0x275eb70e) &&
       (iVar1 != -0x275eb715 && iVar1 != -0x275eb714)) {
      *(undefined4 *)(iVar3 + 0x74) = 0xd8a148ea;
    }
    goto LAB_004fea3c;
  }
  if (param_3 == 4 || param_3 == 0x14) {
joined_r0x004fea90:
    if (iVar1 != -0x275eb70e) {
      *(undefined4 *)(iVar3 + 0x74) = 0xd8a148ed;
    }
  }
  else {
    if (param_3 == 5 || param_3 == 0x15) {
      if (iVar1 == -0x275eb713 || iVar1 == -0x275eb70e) goto LAB_004fea3c;
      if (param_4 != 0) {
LAB_004feacc:
        *(undefined4 *)(iVar3 + 0x74) = 0xd8a148ec;
        goto LAB_004fea3c;
      }
    }
    else {
      if (param_3 != 6 && param_3 != 0x16) {
        if (param_3 != 7 && param_3 != 0x17) {
          if (param_3 == 8 || param_3 == 0x18) {
            *(undefined4 *)(iVar3 + 0x74) = 0xd8a148f2;
            goto LAB_004fea3c;
          }
          if (param_3 != 9 && param_3 != 0x19) goto LAB_004fea3c;
          uVar2 = 0xd941482d;
          goto LAB_004fea38;
        }
        goto joined_r0x004fea90;
      }
      if (iVar1 == -0x275eb713 || iVar1 == -0x275eb70e) goto LAB_004fea3c;
      if (param_4 == 0) goto LAB_004feacc;
    }
    *(undefined4 *)(iVar3 + 0x74) = 0xd8a148eb;
  }
LAB_004fea3c:
  iVar1 = fn_0050b080(DAT_008bf4cc);
  if (iVar1 == 0) {
    *(undefined4 *)(*(int *)(DAT_008bf4e0 + 8) + 0x78) = 0xffffffff;
    return;
  }
  uVar2 = fn_006db878(DAT_008c06a0);
  *(undefined4 *)(*(int *)(DAT_008bf4e0 + 8) + 0x78) = uVar2;
  return;
}


