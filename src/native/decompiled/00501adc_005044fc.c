#include "00501adc_005044fc.h"



void fn_005044fc(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined *local_28;
  undefined4 local_24;
  
  uVar4 = 0;
  *(undefined2 *)(param_1 + 0x5c) = 0;
  do {
    if (((uVar4 & 0xff) != (uint)*(byte *)(param_1 + 99)) && (uVar1 = uVar4 & 0xff, uVar1 < 0xc)) {
      uVar3 = 1;
      if (uVar1 != 0) {
        if ((uVar4 & 1) != 0) {
          uVar3 = 2;
        }
        for (uVar1 = uVar1 >> 1; uVar1 != 0; uVar1 = uVar1 - 1) {
          uVar3 = uVar3 << 2;
        }
      }
      if ((*(uint *)(param_1 + 0x6c) & uVar3) != 0) {
        uVar1 = uVar4 & 0xff;
        fn_0050bc68(DAT_008c0670,0,uVar1);
        local_28 = &DAT_00857044;
        local_24 = (local_24 & ~((unsigned int)0xffff << 0)) | ((unsigned int)(CONCAT11((char)uVar4,1)) & 0xffff);
        iVar2 = fn_0050cc80(DAT_008bf4d4 + 0x10,&local_28);
        if (-1 < iVar2) {
          fn_004fa260(*(undefined4 *)(param_1 + 0x30),uVar1);
          fn_00505374(param_1,1,uVar1);
          if (uVar1 < 0xc) {
            uVar3 = 1;
            if (uVar1 != 0) {
              if ((uVar4 & 1) != 0) {
                uVar3 = 2;
              }
              for (uVar1 = uVar1 >> 1; uVar1 != 0; uVar1 = uVar1 - 1) {
                uVar3 = uVar3 << 2;
              }
            }
            iVar2 = *(int *)(param_1 + 0x2c);
            *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) & ~uVar3;
            if (iVar2 != 0) {
              *(uint *)(iVar2 + 0x58) = *(uint *)(iVar2 + 0x58) & ~uVar3;
            }
          }
        }
      }
    }
    uVar4 = uVar4 + 1 & 0xffff;
  } while (uVar4 < 0xc);
  if (*(byte *)(param_1 + 99) < 0xc) {
    fn_00505374(param_1,1);
  }
  *(undefined1 *)(param_1 + 99) = 0xfd;
  *(undefined1 *)(param_1 + 0x62) = 0xfd;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  fn_0050c7f0(DAT_008bf4d4 + 0x10);
  fn_0051b884(DAT_008c06a0);
  fn_00518dd0(DAT_008c0674);
  iVar2 = DAT_008bf4cc;
  while (puVar5 = (undefined4 *)(iVar2 + 0x3c),
        puVar5 != (undefined4 *)(iVar2 + *(int *)(iVar2 + 0x38) * 4 + 0x3c)) {
    fn_0051ca8c(*puVar5);
    fn_0051c5c8(*puVar5);
    fn_0050b66c(iVar2,*puVar5);
  }
  fn_0051da28(DAT_008bf4d4);
  *(undefined4 *)(param_1 + 0x70) = 0xffff;
  if ((*(char *)(param_1 + 100) != '\0') &&
     (*(undefined1 *)(param_1 + 100) = 0, *(int *)(param_1 + 0xa0) != 0)) {
    local_28 = (undefined *)CONCAT22(((unsigned int)(local_28) >> 16) & 0xffff,0xfd12);
    local_24 = 0;
    (**(code **)**(undefined4 **)(param_1 + 0xa0))(*(undefined4 **)(param_1 + 0xa0),&local_28);
  }
  iVar2 = fn_0050c6d8(DAT_008bf4d4 + 0x10,*(undefined4 *)(param_1 + 0x74),0x210);
  if (iVar2 - 0x100000U < 0x3ff00000) {
    fn_00508030(iVar2 + 0x18);
  }
  *(undefined1 *)(param_1 + 0x69) = 1;
  if (*(char *)(param_1 + 0xa5) == '\0') {
    fn_004ef8f4(&DAT_008ed8c4);
    fn_004efb4c(&DAT_008edd78);
  }
  *(undefined1 *)(param_1 + 0xa4) = 0;
  if (*(int **)(param_1 + 0x84) + -0x40000 < (int *)0x3ff00000) {
    (**(code **)(**(int **)(param_1 + 0x84) + 8))();
  }
  *(undefined1 *)(param_1 + 0x61) = 0;
  return;
}



undefined4
fn_00502254(undefined4 param_1,uint param_2,int param_3,undefined4 *param_4,undefined4 *param_5,
            int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  bool bVar17;
  uint local_d8 [13];
  undefined1 auStack_a4 [8];
  uint local_9c;
  byte local_90;
  char local_7d;
  undefined4 local_4c;
  uint local_3c;
  byte local_38;
  undefined4 uStack_34;
  uint uStack_30;
  int local_2c;
  undefined4 *local_28;
  
  iVar1 = DAT_008bf4e0;
  local_28 = param_4;
  local_2c = param_3;
  uStack_30 = param_2;
  uStack_34 = param_1;
  iVar14 = *(int *)(DAT_008bf4d4 + 100);
  local_d8[0] = 0;
  local_d8[1] = 0;
  local_d8[2] = 0;
  local_d8[3] = 0;
  local_d8[4] = 0;
  local_d8[5] = 0;
  local_d8[6] = 0;
  local_d8[7] = 0;
  local_d8[8] = 0;
  local_d8[9] = 0;
  local_d8[10] = 0;
  local_d8[0xb] = 0;
  if (param_6 == 0) {
    uVar12 = 0;
    if (*(short *)(DAT_008bf4e0 + 0x5e) != 0) {
      local_9c = iVar14 - 0x100000;
      do {
        local_d8[uVar12] = 0xffffffff;
        if (((uVar12 & 0xff) != param_2) && (iVar2 = fn_006d92e4(iVar1,uVar12 & 0xff), iVar2 != 0))
        {
          bVar16 = true;
          iVar2 = 0;
          if (local_9c < 0x3ff00000) {
            iVar3 = fn_006da5fc(iVar14,uVar12 & 0xff,param_2);
            bVar16 = iVar3 < 0 || param_2 == local_90;
            iVar3 = fn_006da698(iVar14,uVar12 & 0xff,local_d8 + 0xc);
            if (-1 < iVar3) {
              for (; local_d8[0xc] != 0; local_d8[0xc] = local_d8[0xc] << 1) {
                if ((local_d8[0xc] & 0x80000000) != 0) {
                  iVar2 = iVar2 + 1;
                }
              }
            }
            if (bVar16) {
              iVar2 = iVar2 + -1;
            }
          }
          iVar3 = 0;
          if (*(code **)(iVar1 + 0x40) != (code *)0x0) {
            iVar3 = (**(code **)(iVar1 + 0x40))(uVar12 & 0xff,0);
          }
          iVar10 = fn_006d8d80(*(undefined4 *)(iVar1 + 0x14),uVar12 & 0xff);
          iVar7 = 0;
          if (iVar10 != 0) {
            iVar7 = 0x800000;
          }
          if (bVar16) {
            iVar10 = 0;
          }
          else {
            iVar10 = 0x100;
          }
          local_d8[uVar12] =
               iVar7 + iVar10 + ((uint)*(ushort *)(iVar1 + 0x5e) - iVar2) * 0x1000 +
               iVar3 * 0x1000000 + uVar12 + 1;
        }
        uVar12 = uVar12 + 1;
      } while ((int)uVar12 < (int)(uint)*(ushort *)(iVar1 + 0x5e));
    }
  }
  else {
    local_4c = DAT_008c06a0;
    fn_00124e48(auStack_a4);
    uVar12 = 0;
    if (*(short *)(iVar1 + 0x5e) != 0) {
      do {
        local_d8[uVar12] = 0xffffffff;
        if (((((uVar12 & 0xff) != param_2) &&
             (iVar2 = fn_006d92e4(iVar1,uVar12 & 0xff), iVar2 != 0)) &&
            (iVar2 = fn_0050b080(DAT_008bf4cc,uVar12 & 0xff), iVar2 != 0)) &&
           (iVar2 = fn_006db908(local_4c,iVar2,auStack_a4), -1 < iVar2)) {
          iVar2 = 0;
          local_3c = 1;
          if (iVar14 - 0x100000U < 0x3ff00000) {
            iVar3 = fn_006da5fc(iVar14,uVar12 & 0xff,param_2);
            if (-1 < iVar3) {
              local_3c = (uint)(param_2 == local_38);
            }
            iVar3 = fn_006da698(iVar14,uVar12 & 0xff,local_d8 + 0xc);
            if (-1 < iVar3) {
              for (; local_d8[0xc] != 0; local_d8[0xc] = local_d8[0xc] << 1) {
                if ((local_d8[0xc] & 0x80000000) != 0) {
                  iVar2 = iVar2 + 1;
                }
              }
            }
            if (local_3c != 0) {
              iVar2 = iVar2 + -1;
            }
          }
          iVar3 = 0;
          if (*(code **)(iVar1 + 0x40) != (code *)0x0) {
            iVar3 = (**(code **)(iVar1 + 0x40))(uVar12 & 0xff,1);
          }
          if (local_7d == '\x02') {
            iVar7 = 0x800000;
          }
          else {
            iVar7 = 0;
          }
          if (local_3c == 0) {
            iVar10 = 0x100;
          }
          else {
            iVar10 = 0;
          }
          local_d8[uVar12] =
               iVar7 + iVar10 + ((uint)*(ushort *)(iVar1 + 0x5e) - iVar2) * 0x1000 +
               iVar3 * 0x1000000 + uVar12 + 1;
        }
        uVar12 = uVar12 + 1;
      } while ((int)uVar12 < (int)(uint)*(ushort *)(iVar1 + 0x5e));
    }
    fn_0051811c(auStack_a4);
  }
  uVar8 = (uint)*(ushort *)(iVar1 + 0x5e);
  uVar13 = 0;
  uVar12 = 0;
  if (uVar8 != 0) {
    do {
      uVar4 = 0xffffffff;
      if (uVar8 == 0) break;
      puVar11 = local_d8;
      uVar9 = 0;
      do {
        uVar15 = *puVar11;
        puVar11 = puVar11 + 1;
        bVar17 = uVar12 <= uVar15;
        bVar16 = uVar15 == uVar12;
        if (bVar17 && !bVar16) {
          bVar17 = uVar15 <= uVar4;
          bVar16 = uVar4 == uVar15;
        }
        if (bVar17 && !bVar16) {
          uVar4 = uVar15;
          param_2 = uVar9;
        }
        uVar8 = uVar8 - 1;
        uVar9 = uVar9 + 1;
      } while (uVar8 != 0);
      if (uVar4 == 0xffffffff) break;
      *(char *)(local_2c + uVar13) = (char)param_2;
      uVar8 = (uint)*(ushort *)(iVar1 + 0x5e);
      uVar13 = uVar13 + 1;
      uVar12 = uVar4;
    } while (uVar13 < uVar8);
  }
  uVar12 = *(ushort *)(iVar1 + 0x5e) - uVar13;
  if (0 < (int)uVar12) {
    puVar5 = (undefined1 *)(local_2c + uVar13);
    puVar6 = puVar5 + -1;
    if ((uVar12 & 1) != 0) {
      *puVar5 = 0xfd;
      puVar6 = puVar5;
    }
    for (iVar2 = (int)(*(ushort *)(iVar1 + 0x5e) - uVar13) >> 1; iVar2 != 0; iVar2 = iVar2 + -1) {
      puVar6[1] = 0xfd;
      puVar6 = puVar6 + 2;
      *puVar6 = 0xfd;
    }
  }
  *local_28 = *(undefined4 *)(iVar1 + 0x70);
  if (iVar14 - 0x100000U < 0x3ff00000) {
    *param_5 = *(undefined4 *)(iVar14 + 0x20);
  }
  else {
    *param_5 = 0;
  }
  return 0;
}



ulonglong fn_00501adc(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 unaff_r5;
  undefined4 unaff_r7;
  undefined1 auStack_78 [88];
  
  iVar2 = fn_006d9250(DAT_008bf4e0);
  if (iVar2 == -0x275eb708) {
LAB_00501ba8:
    param_1[0xb] = (int)"ProcessHostMigrationJob::HostMigrationFailure";
    param_1[9] = (int)fn_00501dd4;
    param_1[10] = 0;
    return CONCAT44("ProcessHostMigrationJob::HostMigrationFailure",param_4) & 0xffffffff0000ff00;
  }
  cVar1 = (char)param_1[0x20];
  if (cVar1 == -3) {
    uVar7 = param_1[0x10];
    uVar3 = param_1[0x11];
    uVar6 = *(uint *)(DAT_008bf49c + 0x30);
    uVar8 = *(uint *)(DAT_008bf49c + 0x34);
    if (uVar8 <= uVar3 && (uint)(uVar7 <= uVar6) <= uVar8 - uVar3) {
      return CONCAT44(uVar6 - uVar7,uVar8 - (uVar3 + (uVar7 > uVar6))) & 0xffffffff0000ff00 | 5;
    }
    iVar2 = (**(code **)(*param_1 + 0x48))(param_1);
    if (iVar2 == 0) {
      param_1[9] = (int)fn_00501dd4;
      param_1[10] = 0;
      param_1[0xb] = (int)"ProcessHostMigrationJob::HostMigrationFailure";
    }
    return CONCAT44(unaff_r5,unaff_r5) & 0xffffff000000ff00;
  }
  if ((char)param_1[0x21] == '\0') {
    if (cVar1 != *(char *)((int)param_1 + 0x71)) goto LAB_00501ba8;
  }
  else {
    *(char *)((int)param_1 + 0x71) = cVar1;
  }
  *(undefined1 *)(DAT_008bf4e0 + 0x62) = *(undefined1 *)((int)param_1 + 0x71);
  iVar2 = DAT_008bf4cc;
  *(undefined1 *)(DAT_008bf4cc + 0xa8) = *(undefined1 *)((int)param_1 + 0x71);
  puVar4 = (undefined4 *)fn_0050b080(iVar2,*(undefined1 *)((int)param_1 + 0x71));
  iVar2 = DAT_008c06a0;
  if (puVar4 == (undefined4 *)0x0) {
    param_1[0xb] = (int)"ProcessHostMigrationJob::HostMigrationFailure";
    param_1[9] = (int)fn_00501dd4;
    param_1[10] = 0;
    return CONCAT44(fn_00501dd4,param_4) & 0xffffffff0000ff00;
  }
  fn_00124e48(auStack_78);
  iVar5 = fn_006db908(iVar2,puVar4,auStack_78);
  if (iVar5 < 0) {
    fn_0051811c(auStack_78);
    (**(code **)*puVar4)(puVar4,*(code **)*puVar4,0,4);
    param_1[0xb] = (int)"ProcessHostMigrationJob::HostMigrationFailure";
    param_1[9] = (int)fn_00501dd4;
    param_1[10] = 0;
    return CONCAT44(fn_00501dd4,iVar2) & 0xffffffff0000ff00;
  }
  fn_00518140(iVar2 + 0x58,auStack_78);
  fn_004ed810(iVar2 + 0xac,puVar4 + 1);
  fn_0051811c(auStack_78);
  if ((char)param_1[0x1c] != *(char *)((int)param_1 + 0x71)) {
    iVar2 = fn_0050b080(DAT_008bf4cc);
    if (iVar2 != 0) {
      (**(code **)(*param_1 + 0x40))(param_1,(char)param_1[0x1c]);
    }
    fn_00505374(DAT_008bf4e0,2,*(undefined1 *)((int)param_1 + 0x71));
  }
  fn_004f69d8(*(undefined4 *)(DAT_008bf4e0 + 0x4c),*(undefined1 *)((int)param_1 + 0x71));
  *(undefined1 *)((int)param_1 + 0x7f) = 0;
  *(undefined1 *)((int)param_1 + 0x81) = 1;
  param_1[0xb] = (int)"ProcessHostMigrationJob::WaitNewHostFinished";
  param_1[9] = (int)fn_00501970;
  param_1[10] = 0;
  return CONCAT44("ProcessHostMigrationJob::WaitNewHostFinished",unaff_r7) & 0xffffffff0000ff00 | 5;
}


