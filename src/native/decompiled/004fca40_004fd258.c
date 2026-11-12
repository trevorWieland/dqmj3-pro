#include "004fca40_004fd258.h"



void fn_004fd258(int param_1,undefined4 param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  byte local_9c [16];
  undefined1 auStack_8c [92];
  int local_30;
  
  uVar7 = *(uint *)(param_1 + 0x88);
  *(undefined4 *)(param_1 + 0x88) = param_2;
  fn_00124e48(auStack_8c);
  if (*(uint *)(param_1 + 0x6c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x6c) & 1;
    if (uVar2 == 1) {
      local_9c[0] = **(byte **)(param_1 + 0x74);
      **(byte **)(param_1 + 0x74) = **(byte **)(param_1 + 0x7c);
    }
    if (uVar2 < *(uint *)(param_1 + 0x6c)) {
      do {
        iVar6 = *(int *)(param_1 + 0x74);
        iVar5 = uVar2 + 1;
        local_9c[uVar2] = *(byte *)(iVar6 + uVar2);
        *(undefined1 *)(iVar6 + uVar2) = *(undefined1 *)(*(int *)(param_1 + 0x7c) + uVar2);
        iVar6 = *(int *)(param_1 + 0x74);
        uVar3 = uVar2 + 2;
        local_9c[uVar2 + 1] = *(byte *)(iVar6 + iVar5);
        *(undefined1 *)(iVar6 + iVar5) = *(undefined1 *)(*(int *)(param_1 + 0x7c) + iVar5);
        uVar2 = uVar3;
      } while (uVar3 < *(uint *)(param_1 + 0x6c));
    }
  }
  uVar2 = 0;
  if (uVar7 != 0) {
    iVar5 = param_1 + 0x60;
    do {
      uVar3 = 0;
      if (*(uint *)(param_1 + 0x88) != 0) {
        do {
          if (local_9c[uVar2] == *(byte *)(*(int *)(param_1 + 0x7c) + uVar3)) {
            iVar6 = fn_006db160(*(int *)(param_1 + 0x70) + uVar2 * 0x54,
                                 *(int *)(param_1 + 0x78) + uVar3 * 0x54);
            if (iVar6 != 0) {
              iVar6 = fn_0050b080(DAT_008bf4cc,local_9c[uVar2]);
              if (((iVar6 == 0) &&
                  (iVar6 = fn_006db530(DAT_008c06a0,*(int *)(param_1 + 0x70) + uVar2 * 0x54),
                  iVar6 == 0)) || (*(char *)(iVar6 + 0x20) == '\x06')) {
                uVar3 = (uint)*(byte *)((uint)local_9c[uVar2] + iVar5);
                if ((uVar3 < *(uint *)(param_1 + 0x6c)) &&
                   (cVar1 = *(char *)(*(int *)(param_1 + 0x5c) + uVar3 * 0x14),
                   (cVar1 == '\x02' || cVar1 == '\x03') || cVar1 == '\x04')) {
                  *(undefined1 *)(param_1 + (uint)local_9c[uVar2] + 0x60) = 0xff;
                }
              }
              goto LAB_004fd51c;
            }
            break;
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < *(uint *)(param_1 + 0x88));
      }
      iVar6 = fn_006d92e4(DAT_008bf4e0,local_9c[uVar2]);
      if (iVar6 == 0) {
        uVar3 = (uint)*(byte *)((uint)local_9c[uVar2] + iVar5);
        iVar6 = fn_0050b080(DAT_008bf4cc);
        if (iVar6 == 0) {
          local_30 = uVar2 * 0x15;
          iVar6 = fn_006db530(DAT_008c06a0,*(int *)(param_1 + 0x70) + uVar2 * 0x54);
          if (iVar6 == 0) {
            if (uVar3 < *(uint *)(param_1 + 0x6c)) {
              *(undefined1 *)((uint)local_9c[uVar2] + param_1 + 0x60) = 0xff;
              piVar4 = *(int **)(DAT_008bf4e0 + 0x34);
              if (piVar4 != (int *)0x0) {
                (**(code **)(*piVar4 + 8))(piVar4,*(int *)(param_1 + 0x70) + local_30 * 4);
              }
            }
            goto LAB_004fd51c;
          }
        }
        if (uVar3 < *(uint *)(param_1 + 0x6c)) {
          fn_004ed158(*(int *)(param_1 + 0x5c) + uVar3 * 0x14);
          *(undefined1 *)((uint)local_9c[uVar2] + param_1 + 0x60) = 0xff;
        }
        (**(code **)(**(int **)(iVar6 + 0x30) + 0x18))(*(int **)(iVar6 + 0x30),iVar6);
        fn_0051ba28(DAT_008c06a0,iVar6);
        fn_005191c0(DAT_008c0674,iVar6);
        fn_0051ca8c(iVar6);
        fn_0051c5c8(iVar6);
        fn_0050b66c(DAT_008bf4cc,iVar6);
        fn_0051da28(DAT_008bf4d4);
      }
      else if ((uint)*(byte *)((uint)local_9c[uVar2] + iVar5) < *(uint *)(param_1 + 0x6c)) {
        *(undefined1 *)(param_1 + (uint)local_9c[uVar2] + 0x60) = 0xff;
      }
LAB_004fd51c:
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar7);
  }
  uVar7 = 0;
  if (*(int *)(param_1 + 0x88) != 0) {
    do {
      fn_00518140(*(int *)(param_1 + 0x70) + uVar7 * 0x54,*(int *)(param_1 + 0x78) + uVar7 * 0x54);
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(uint *)(param_1 + 0x88));
  }
  fn_0051811c(auStack_8c);
  return;
}



uint fn_004fca40(uint param_1)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  uint *puVar9;
  int iVar10;
  uint uVar11;
  uint extraout_r1;
  uint extraout_r1_00;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined4 uVar16;
  uint uVar17;
  bool bVar18;
  
  uVar5 = *(uint *)(param_1 + 0x44);
  uVar17 = *(uint *)(DAT_008bf49c + 0x30);
  uVar15 = *(uint *)(DAT_008bf49c + 0x34);
  bVar18 = *(uint *)(param_1 + 0x40) <= uVar17;
  if (uVar5 < uVar15 || uVar15 - uVar5 < (uint)bVar18) {
    *(undefined4 *)(*(int *)(DAT_008bf4e0 + 8) + 0x74) = 0xd941482d;
    *(code **)(param_1 + 0x24) = fn_004fc71c;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(char **)(param_1 + 0x2c) = "ProcessUpdateMeshJob::UpdateFailed";
    return uVar17 & 0xff00;
  }
  uVar14 = (uint)*(byte *)(DAT_008bf4e0 + 99);
  if (0xb < uVar14) {
    *(code **)(param_1 + 0x24) = fn_004fc71c;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(char **)(param_1 + 0x2c) = "ProcessUpdateMeshJob::UpdateFailed";
    return uVar15 - (uVar5 + !bVar18) & 0xff00;
  }
  uVar11 = *(uint *)(param_1 + 0x90);
  uVar6 = *(uint *)(param_1 + 0x94);
  bVar3 = false;
  bVar4 = false;
  bVar18 = false;
  uVar5 = 0;
  uVar13 = 0;
  if (*(int *)(param_1 + 0x88) != 0) {
    do {
      uVar5 = (uint)*(byte *)(*(int *)(param_1 + 0x74) + uVar13);
      if (uVar5 != uVar14) {
        bVar1 = *(byte *)(*(int *)(param_1 + 0x8c) + uVar13);
        if ((bVar1 == 0) || (0x10 < bVar1)) {
          iVar10 = fn_0050b080(DAT_008bf4cc);
          if ((iVar10 == 0) &&
             (iVar10 = fn_006db530(DAT_008c06a0,*(int *)(param_1 + 0x70) + uVar13 * 0x54),
             iVar10 != 0)) {
            if ((*(char *)(iVar10 + 0x20) == '\x05') && (0xb < *(byte *)(iVar10 + 0x14))) {
              bVar4 = true;
            }
            *(undefined1 *)(iVar10 + 0x14) = *(undefined1 *)(*(int *)(param_1 + 0x74) + uVar13);
          }
          uVar5 = *(uint *)(param_1 + 0x74);
          uVar7 = (uint)*(byte *)((uint)*(byte *)(uVar5 + uVar13) + param_1 + 0x60);
          if (uVar7 < *(uint *)(param_1 + 0x6c)) {
            pcVar8 = (char *)(*(int *)(param_1 + 0x5c) + uVar7 * 0x14);
            cVar2 = *pcVar8;
            if ((cVar2 == '\x02' || cVar2 == '\x03') || cVar2 == '\x04') {
              if (*(int *)(pcVar8 + 4) < 0) {
                iVar10 = *(int *)(pcVar8 + 4);
                uVar16 = 1;
                if (iVar10 != -0x26deb7dc) {
                  if (iVar10 == -0x275eb719) {
                    uVar16 = 2;
                  }
                  else if (iVar10 == -0x275eb716) {
                    uVar16 = 3;
                  }
                  else if (iVar10 == -0x275eb715) {
                    uVar16 = 5;
                  }
                  else if (iVar10 == -0x275eb714) {
                    uVar16 = 6;
                  }
                  else if (iVar10 == -0x275eb713) {
                    uVar16 = 7;
                  }
                  else if (iVar10 == -0x275eb70e) {
                    uVar16 = 8;
                  }
                  else if (iVar10 == -0x26beb7d3) {
                    uVar16 = 9;
                  }
                }
                fn_004fe980(param_1,*(undefined1 *)(uVar5 + uVar13),uVar16,0);
                bVar3 = true;
                bVar18 = true;
                uVar5 = extraout_r1_00;
                if (uVar6 <= uVar15 && (uint)(uVar17 <= uVar11) <= uVar6 - uVar15) {
                  fn_004f7060(*(undefined4 *)(DAT_008bf4e0 + 0x4c),
                               *(undefined1 *)(DAT_008bf4e0 + 0x62),
                               *(undefined1 *)(*(int *)(param_1 + 0x74) + uVar13),uVar14,uVar16,
                               *(undefined4 *)(param_1 + 0xa0));
                  puVar12 = (uint *)(DAT_008bf49c + 0x30);
                  puVar9 = (uint *)fn_004f0ce8();
                  uVar7 = (uint)((ulonglong)*puVar9 * 500);
                  uVar5 = puVar9[1] * 500 + (int)((ulonglong)*puVar9 * 500 >> 0x20) + puVar12[1] +
                          (uint)CARRY4(uVar7,*puVar12);
                  *(uint *)(param_1 + 0x90) = uVar7 + *puVar12;
                  *(uint *)(param_1 + 0x94) = uVar5;
                }
              }
              else {
                uVar5 = (uint)*(byte *)(uVar5 + uVar13);
                *(undefined1 *)(param_1 + uVar5 + 0x60) = 0xff;
                if (iVar10 == 0) goto LAB_004fcd5c;
              }
            }
            else {
LAB_004fcd5c:
              bVar3 = true;
            }
          }
          else if ((iVar10 == 0) || (*(char *)(iVar10 + 0x20) != '\x05')) goto LAB_004fcd5c;
        }
        else {
          fn_004fe980(param_1,uVar5,bVar1,1);
          bVar3 = true;
          bVar18 = true;
          uVar5 = extraout_r1;
        }
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 < *(uint *)(param_1 + 0x88));
  }
  if (*(char *)(param_1 + 0xa6) != '\0' && bVar18) {
    *(char **)(param_1 + 0x2c) = "ProcessUpdateMeshJob::UpdateFailed";
    *(code **)(param_1 + 0x24) = fn_004fc71c;
    *(undefined4 *)(param_1 + 0x28) = 0;
    return uVar5 & 0xff00;
  }
  if (bVar3) {
    if (bVar4) {
      fn_0051da28(DAT_008bf4d4);
    }
    return param_1 & 0xff00 | 5;
  }
  uVar5 = 0;
  if (*(int *)(param_1 + 0x88) != 0) {
    do {
      iVar10 = fn_006d92e4(DAT_008bf4e0,*(undefined1 *)(*(int *)(param_1 + 0x74) + uVar5));
      if (iVar10 == 0) {
        fn_00504f0c(DAT_008bf4e0,*(undefined1 *)(*(int *)(param_1 + 0x74) + uVar5));
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(param_1 + 0x88));
  }
  *(short *)(DAT_008bf4e0 + 0x5c) = (short)*(undefined4 *)(param_1 + 0x88);
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined1 *)(param_1 + 0xa4) = 0;
  *(undefined1 *)(param_1 + 0x82) = 0;
  *(undefined1 *)(param_1 + 0x83) = 0;
  *(undefined1 *)(param_1 + 0x84) = 0;
  *(undefined1 *)(param_1 + 0x85) = 0;
  *(undefined1 *)(param_1 + 0x80) = 0;
  *(undefined1 *)(param_1 + 0x81) = 0;
  return param_1 & 0xff00 | 1;
}


