#include "004fd7ec_004fdf90.h"



uint fn_004fdf90(uint param_1)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  uint *puVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined4 uVar16;
  uint *puVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  bool bVar22;
  
  uVar6 = *(uint *)(DAT_008bf49c + 0x30);
  uVar11 = *(uint *)(DAT_008bf49c + 0x34);
  if (*(uint *)(param_1 + 0x44) < uVar11 ||
      uVar11 - *(uint *)(param_1 + 0x44) < (uint)(*(uint *)(param_1 + 0x40) <= uVar6)) {
    *(undefined4 *)(*(int *)(DAT_008bf4e0 + 8) + 0x74) = 0xd941482d;
    *(char **)(param_1 + 0x2c) = "ProcessUpdateMeshJob::UpdateFailed";
    *(code **)(param_1 + 0x24) = fn_004fc71c;
    *(undefined4 *)(param_1 + 0x28) = 0;
    return 0xf400;
  }
  bVar1 = *(byte *)(DAT_008bf4e0 + 99);
  if (0xb < bVar1) {
    *(code **)(param_1 + 0x24) = fn_004fc71c;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(char **)(param_1 + 0x2c) = "ProcessUpdateMeshJob::UpdateFailed";
    return 0xf400;
  }
  uVar21 = *(uint *)(param_1 + 0x90);
  uVar20 = *(uint *)(param_1 + 0x94);
  bVar22 = false;
  bVar5 = false;
  bVar4 = false;
  uVar19 = 0;
  if (*(int *)(param_1 + 0x88) != 0) {
    do {
      bVar2 = *(byte *)(*(int *)(param_1 + 0x74) + uVar19);
      if (bVar2 != bVar1) {
        cVar3 = *(char *)(*(int *)(param_1 + 0x8c) + uVar19);
        if (cVar3 == '\0') {
          iVar7 = fn_0050b080(DAT_008bf4cc);
          if ((iVar7 == 0) &&
             (iVar7 = fn_006db530(DAT_008c06a0,*(int *)(param_1 + 0x70) + uVar19 * 0x54),
             iVar7 != 0)) {
            if ((*(char *)(iVar7 + 0x20) == '\x05') && (0xb < *(byte *)(iVar7 + 0x14))) {
              bVar5 = true;
            }
            *(undefined1 *)(iVar7 + 0x14) = *(undefined1 *)(*(int *)(param_1 + 0x74) + uVar19);
          }
          iVar12 = *(int *)(param_1 + 0x74);
          uVar8 = (uint)*(byte *)((uint)*(byte *)(iVar12 + uVar19) + param_1 + 0x60);
          if (uVar8 < *(uint *)(param_1 + 0x6c)) {
            pcVar9 = (char *)(*(int *)(param_1 + 0x5c) + uVar8 * 0x14);
            cVar3 = *pcVar9;
            if ((cVar3 == '\x02' || cVar3 == '\x03') || cVar3 == '\x04') {
              if (*(int *)(pcVar9 + 4) < 0) {
                iVar7 = *(int *)(pcVar9 + 4);
                uVar16 = 0x11;
                if (iVar7 != -0x26deb7dc) {
                  if (iVar7 == -0x275eb719) {
                    uVar16 = 0x12;
                  }
                  else if (iVar7 == -0x275eb716) {
                    uVar16 = 0x13;
                  }
                  else if (iVar7 == -0x275eb715) {
                    uVar16 = 0x15;
                  }
                  else if (iVar7 == -0x275eb714) {
                    uVar16 = 0x16;
                  }
                  else if (iVar7 == -0x275eb713) {
                    uVar16 = 0x17;
                  }
                  else if (iVar7 == -0x275eb70e) {
                    uVar16 = 0x18;
                  }
                  else if (iVar7 == -0x26beb7d3) {
                    uVar16 = 0x19;
                  }
                }
                fn_004fe980(param_1,*(undefined1 *)(iVar12 + uVar19),uVar16,0);
                if (uVar20 <= uVar11 && (uint)(uVar6 <= uVar21) <= uVar20 - uVar11) {
                  fn_004f7060(*(undefined4 *)(DAT_008bf4e0 + 0x4c),
                               *(undefined1 *)(DAT_008bf4e0 + 0x62),
                               *(undefined1 *)(*(int *)(param_1 + 0x74) + uVar19),bVar1,uVar16,
                               *(undefined4 *)(param_1 + 0xa0));
                  puVar17 = (uint *)(DAT_008bf49c + 0x30);
                  puVar10 = (uint *)fn_004f0ce8();
                  uVar13 = *puVar10;
                  uVar14 = puVar10[1];
                  uVar8 = (uint)((ulonglong)uVar13 * 500);
                  uVar15 = *puVar17;
                  uVar18 = puVar17[1];
                  *(uint *)(param_1 + 0x90) = uVar8 + uVar15;
                  *(uint *)(param_1 + 0x94) =
                       uVar14 * 500 + (int)((ulonglong)uVar13 * 500 >> 0x20) + uVar18 +
                       (uint)CARRY4(uVar8,uVar15);
                }
              }
              else {
                *(undefined1 *)(param_1 + *(byte *)(iVar12 + uVar19) + 0x60) = 0xff;
              }
            }
            else {
LAB_004fe154:
              bVar22 = true;
            }
          }
          else if (iVar7 == 0) {
            bVar4 = true;
          }
          else if (*(char *)(iVar7 + 0x20) != '\x05') goto LAB_004fe154;
        }
        else {
          fn_004fe980(param_1,bVar2,cVar3,1);
        }
      }
      uVar19 = uVar19 + 1;
    } while (uVar19 < *(uint *)(param_1 + 0x88));
    uVar6 = 0;
    if (bVar5) {
      uVar6 = fn_0051da28(DAT_008bf4d4);
    }
    if (bVar22) {
LAB_004fe304:
      return uVar6 & 0xff00 | 5;
    }
    if (bVar4) {
      uVar19 = *(uint *)(param_1 + 0x54);
      uVar11 = *(uint *)(DAT_008bf49c + 0x34);
      bVar22 = *(uint *)(param_1 + 0x50) <= *(uint *)(DAT_008bf49c + 0x30);
      uVar6 = uVar11 - (uVar19 + !bVar22);
      if (uVar11 <= uVar19 && (uint)bVar22 <= uVar11 - uVar19) goto LAB_004fe304;
    }
  }
  uVar16 = *(undefined4 *)(DAT_008bf49c + 0x34);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(DAT_008bf49c + 0x30);
  *(undefined4 *)(param_1 + 0x54) = uVar16;
  *(char **)(param_1 + 0x2c) = "ProcessUpdateMeshJob::SendConnectionReport";
  *(code **)(param_1 + 0x24) = fn_004fd5d8;
  *(undefined4 *)(param_1 + 0x28) = 0;
  return param_1 & 0xff00;
}



uint fn_004fd7ec(uint param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  uint *puVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  uint unaff_r7;
  int iVar16;
  int iVar17;
  bool bVar18;
  byte local_2c [4];
  int local_28;
  
  uVar15 = *(uint *)(param_1 + 0x44);
  uVar2 = *(uint *)(DAT_008bf49c + 0x30);
  uVar8 = *(uint *)(DAT_008bf49c + 0x34);
  bVar18 = *(uint *)(param_1 + 0x40) <= uVar2;
  if (uVar15 < uVar8 || uVar8 - uVar15 < (uint)bVar18) {
    *(undefined4 *)(*(int *)(DAT_008bf4e0 + 8) + 0x74) = 0xd941482d;
    *(char **)(param_1 + 0x2c) = "ProcessUpdateMeshJob::UpdateFailed";
    *(code **)(param_1 + 0x24) = fn_004fc71c;
    *(undefined4 *)(param_1 + 0x28) = 0;
    return uVar8 - (uVar15 + !bVar18) & 0xff00;
  }
  uVar15 = (uint)*(byte *)(DAT_008bf4e0 + 99);
  if (0xb < uVar15) {
    *(code **)(param_1 + 0x24) = fn_004fc71c;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(char **)(param_1 + 0x2c) = "ProcessUpdateMeshJob::UpdateFailed";
    return 0xf400;
  }
  iVar16 = param_1 + 0x60;
  iVar17 = *(int *)(DAT_008bf4d4 + 100);
  if ((*(int *)(iVar17 + 0x24) != *(int *)(param_1 + 0xa0)) ||
     (*(uint *)(iVar17 + 0x20) <= *(uint *)(param_1 + 0x9c))) {
    uVar9 = *(uint *)(param_1 + 0x90);
    uVar12 = *(uint *)(param_1 + 0x94);
    uVar14 = 0;
    if (*(int *)(param_1 + 0x88) != 0) {
      do {
        uVar3 = (uint)*(byte *)(*(int *)(param_1 + 0x74) + uVar14);
        if ((uVar3 != uVar15) &&
           (uVar3 = (uint)*(byte *)(uVar3 + iVar16), uVar3 < *(uint *)(param_1 + 0x6c))) {
          pcVar4 = (char *)(*(int *)(param_1 + 0x5c) + uVar3 * 0x14);
          cVar1 = *pcVar4;
          if (((cVar1 == '\x02' || cVar1 == '\x03') || cVar1 == '\x04') &&
             (*(int *)(pcVar4 + 4) < 0)) {
            iVar17 = *(int *)(pcVar4 + 4);
            uVar10 = 0x11;
            if (iVar17 == -0x275eb719) {
              uVar10 = 0x12;
            }
            else if (iVar17 == -0x275eb716) {
              uVar10 = 0x13;
            }
            else if (iVar17 == -0x275eb715) {
              uVar10 = 0x15;
            }
            else if (iVar17 == -0x275eb714) {
              uVar10 = 0x16;
            }
            else if (iVar17 == -0x275eb713) {
              uVar10 = 0x17;
            }
            else if (iVar17 == -0x275eb70e) {
              uVar10 = 0x18;
            }
            if (uVar12 <= uVar8 && (uint)(uVar2 <= uVar9) <= uVar12 - uVar8) {
              fn_004f7060(*(undefined4 *)(DAT_008bf4e0 + 0x4c),*(undefined1 *)(DAT_008bf4e0 + 0x62)
                           ,*(undefined1 *)(*(int *)(param_1 + 0x74) + uVar14),uVar15,uVar10,
                           *(undefined4 *)(param_1 + 0xa0));
              puVar13 = (uint *)(DAT_008bf49c + 0x30);
              puVar5 = (uint *)fn_004f0ce8();
              uVar3 = (uint)((ulonglong)*puVar5 * 500);
              uVar11 = *puVar13;
              *(uint *)(param_1 + 0x94) =
                   puVar5[1] * 500 + (int)((ulonglong)*puVar5 * 500 >> 0x20) + puVar13[1] +
                   (uint)CARRY4(uVar3,uVar11);
              *(uint *)(param_1 + 0x90) = uVar3 + uVar11;
            }
          }
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 < *(uint *)(param_1 + 0x88));
    }
    return unaff_r7 & 0xff00 | 5;
  }
  uVar2 = 0;
  if (*(int *)(param_1 + 0x88) != 0) {
    do {
      uVar8 = (uint)*(byte *)(*(int *)(param_1 + 0x74) + uVar2);
      if (((uVar8 != uVar15) && ((uint)*(byte *)(uVar8 + iVar16) < *(uint *)(param_1 + 0x6c))) &&
         (cVar1 = *(char *)(*(int *)(param_1 + 0x5c) + (uint)*(byte *)(uVar8 + iVar16) * 0x14),
         (cVar1 == '\x02' || cVar1 == '\x03') || cVar1 == '\x04')) {
        *(undefined1 *)(uVar8 + param_1 + 0x60) = 0xff;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0x88));
  }
  bVar18 = false;
  uVar2 = 0;
  if (*(int *)(param_1 + 0x88) != 0) {
    do {
      if (*(byte *)(*(int *)(param_1 + 0x74) + uVar2) != uVar15) {
        puVar6 = (undefined4 *)fn_0050b080(DAT_008bf4cc);
        if ((puVar6 == (undefined4 *)0x0) &&
           (puVar6 = (undefined4 *)
                     fn_006db530(DAT_008c06a0,*(int *)(param_1 + 0x70) + uVar2 * 0x54),
           puVar6 != (undefined4 *)0x0)) {
          (**(code **)*puVar6)(puVar6,*(code **)*puVar6,0,2);
          if (*(char *)(puVar6 + 8) == '\x06') {
            (**(code **)(*(int *)puVar6[0xc] + 0x18))((int *)puVar6[0xc],puVar6);
            fn_0051ba28(DAT_008c06a0,puVar6);
            fn_005191c0(DAT_008c0674,puVar6);
            fn_0051ca8c(puVar6);
            fn_0051c5c8(puVar6);
            fn_0050b66c(DAT_008bf4cc,puVar6);
            puVar6 = (undefined4 *)0x0;
            bVar18 = true;
          }
          else {
            if ((*(char *)(puVar6 + 8) == '\x05') && (0xb < *(byte *)(puVar6 + 5))) {
              bVar18 = true;
            }
            *(undefined1 *)(puVar6 + 5) = *(undefined1 *)(*(int *)(param_1 + 0x74) + uVar2);
          }
        }
        iVar7 = fn_006da484(iVar17,uVar15,*(undefined1 *)(*(int *)(param_1 + 0x74) + uVar2),
                             local_2c);
        if (iVar7 < 0) {
          if (puVar6 != (undefined4 *)0x0) {
            (**(code **)*puVar6)(puVar6,*(code **)*puVar6,0,2);
          }
        }
        else if ((uint)*(byte *)(*(int *)(param_1 + 0x74) + uVar2) != (uint)local_2c[0] &&
                 local_2c[0] != uVar15) {
          if ((puVar6 != (undefined4 *)0x0) && (*(char *)(puVar6 + 8) == '\x05')) {
            iVar7 = fn_006dbad0(puVar6);
            if (iVar7 != 0) goto LAB_004fdc68;
            (**(code **)(*(int *)puVar6[0xc] + 0x18))((int *)puVar6[0xc],puVar6);
            fn_0051ba28(DAT_008c06a0,puVar6);
            fn_005191c0(DAT_008c0674,puVar6);
            fn_0051ca8c(puVar6);
            fn_0051c5c8(puVar6);
            fn_0050b66c(DAT_008bf4cc,puVar6);
            puVar6 = (undefined4 *)0x0;
            bVar18 = true;
          }
          if (*(byte *)(*(int *)(param_1 + 0x74) + uVar2) < uVar15) {
            if (puVar6 == (undefined4 *)0x0) {
              if (*(uint *)(DAT_008bf4d4 + 0x30) <= *(uint *)(DAT_008bf4cc + 0x38))
              goto LAB_004fdc68;
              puVar6 = (undefined4 *)fn_0050b370(DAT_008bf4cc);
              fn_0051cb64(puVar6,*(undefined4 *)(DAT_008bf4e0 + 0x50),
                           *(undefined1 *)(*(int *)(param_1 + 0x74) + uVar2),
                           *(int *)(param_1 + 0x70) + uVar2 * 0x54 + 8);
            }
            uVar8 = (uint)*(byte *)((uint)*(byte *)(*(int *)(param_1 + 0x74) + uVar2) + iVar16);
            if (uVar8 < *(uint *)(param_1 + 0x6c)) {
              iVar7 = uVar8 * 5;
              cVar1 = *(char *)(*(int *)(param_1 + 0x5c) + uVar8 * 0x14);
              if ((cVar1 != '\x02' && cVar1 != '\x03') && cVar1 != '\x04') {
                cVar1 = *(char *)(puVar6 + 8);
                if ((cVar1 == '\x02' || cVar1 == '\x04') || cVar1 == '\x05') goto LAB_004fdc68;
                fn_004ed068();
                fn_004ed13c(*(int *)(param_1 + 0x5c) + iVar7 * 4);
              }
            }
            uVar10 = puVar6[0xb];
            uVar9 = 0xff;
            uVar8 = 0;
            if (*(uint *)(param_1 + 0x6c) != 0) {
              do {
                iVar7 = 0;
                do {
                  if (*(byte *)(param_1 + iVar7 + 0x60) == uVar8) goto LAB_004fdeb4;
                  iVar7 = iVar7 + 1;
                } while (iVar7 < 0xc);
                if (*(char *)(*(int *)(param_1 + 0x5c) + uVar8 * 0x14) != '\x01') {
                  uVar9 = uVar8 & 0xff;
                  break;
                }
LAB_004fdeb4:
                uVar8 = uVar8 + 1;
              } while (uVar8 < *(uint *)(param_1 + 0x6c));
            }
            local_28 = uVar2 * 0x15;
            iVar7 = fn_0050f758(uVar10,*(int *)(param_1 + 0x5c) + uVar9 * 0x14,puVar6,
                                 *(int *)(param_1 + 0x70) + uVar2 * 0x54,0,
                                 *(undefined4 *)(puVar6[10] + 0x14));
            if (-1 < iVar7) {
              fn_0051b784(DAT_008c06a0,puVar6,*(int *)(param_1 + 0x70) + local_28 * 4);
              *(undefined1 *)(puVar6 + 8) = 2;
              *(char *)(param_1 + *(byte *)(*(int *)(param_1 + 0x74) + uVar2) + 0x60) = (char)uVar9;
              fn_004efcf4(uVar10,0);
            }
          }
        }
      }
LAB_004fdc68:
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0x88));
    if (bVar18) {
      fn_0051da28(DAT_008bf4d4);
    }
  }
  *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(iVar17 + 0x20);
  *(undefined4 *)(*(int *)(DAT_008bf4e0 + 8) + 0x78) = 0xffffffff;
  *(code **)(param_1 + 0x24) = fn_004fca40;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(char **)(param_1 + 0x2c) = "ProcessUpdateMeshJob::CheckConnectionAll";
  return param_1 & 0xff00;
}


