#include "004d8894_004d8894.h"



undefined1 * fn_004d8894(int param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  int extraout_r1;
  int extraout_r1_00;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int extraout_r1_01;
  char *pcVar7;
  int extraout_r1_02;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined1 *puVar13;
  bool bVar14;
  uint local_2c;
  char local_28 [4];
  
  if (*(char *)(param_1 + 0x18) == -3) {
    return &DAT_e0a14827;
  }
  iVar11 = *(int *)(param_1 + 0x680) + 1;
  *(int *)(param_1 + 0x680) = iVar11;
  if (*(char *)(param_1 + 0x19) == '\x03') {
    DAT_008ee0d4 = *(int *)(param_1 + 0x6fc) + 1;
    *(int *)(param_1 + 0x6fc) = DAT_008ee0d4;
  }
  if ((*(int *)(param_1 + 0x690) != 0) &&
     (fn_00169f1c(iVar11,*(undefined4 *)(param_1 + 0x660)), extraout_r1 == 0)) {
    *(undefined1 *)(param_1 + 0x688) = 1;
  }
  if ((*(int *)(param_1 + 0x698) != 0) &&
     (fn_00169f1c(iVar11,*(undefined4 *)(param_1 + 0x660)), extraout_r1_00 == 0)) {
    *(undefined1 *)(param_1 + 0x68a) = 1;
  }
  cVar1 = *(char *)(param_1 + 0x19);
  if (((cVar1 == '\x01' || cVar1 == '\x02') || cVar1 == '\x03') && (0 < *(int *)(param_1 + 0x664)))
  {
    uVar8 = 0;
    if (*(uint *)(param_1 + 0x14) != 0) {
      do {
        uVar9 = uVar8 & 0xff;
        if ((*(byte *)(param_1 + 0x18) != uVar9) &&
           (iVar11 = *(int *)(param_1 + 0x5b4) + uVar9 * 0x20, *(char *)(iVar11 + 1) != '\0')) {
          if (*(int *)(param_1 + 0x654) != 0) {
            iVar12 = *(int *)(param_1 + 0x65c);
            iVar4 = *(int *)(param_1 + 0x678) + 1;
            if (iVar4 < 0) {
              iVar4 = iVar4 + iVar12;
            }
            else if (iVar12 <= iVar4) {
              iVar4 = iVar4 - iVar12;
            }
            if ((*(uint *)(iVar11 + 4) &
                ~*(uint *)(*(int *)(param_1 + 0x5b8) +
                          (uVar9 * *(int *)(param_1 + 0x65c) + iVar4) * 4)) == 0) goto LAB_004d8a5c;
          }
          if (*(int *)(param_1 + 0x664) < *(int *)(param_1 + 0x680) - *(int *)(iVar11 + 0x10)) {
            fn_004d989c(param_1,4);
            break;
          }
        }
LAB_004d8a5c:
        uVar8 = uVar8 + 1;
      } while (uVar8 < *(uint *)(param_1 + 0x14));
    }
  }
  piVar5 = (int *)(param_1 + 0x668);
  iVar11 = *(int *)(param_1 + 0x5b4) + (uint)*(byte *)(param_1 + 0x18) * 0x20;
  if ((((*(int *)(param_1 + 0x654) == 0) && (cVar1 = *(char *)(param_1 + 0x19), cVar1 != '\x02')) &&
      (cVar1 != '\x03')) && (cVar1 == '\x01')) {
    iVar4 = -1;
    uVar8 = 0;
    if (*(uint *)(param_1 + 0x14) != 0) {
      do {
        if (*(char *)(*(int *)(param_1 + 0x5b4) + (uVar8 & 0xff) * 0x20) != '\0') {
          iVar12 = *(int *)(*(int *)(param_1 + 0x5c4) + uVar8 * 4);
          if (iVar12 == 0) goto LAB_004d8b94;
          if (iVar4 < iVar12) {
            iVar4 = iVar12;
          }
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < *(uint *)(param_1 + 0x14));
      if (iVar4 != -1) {
        *(int *)(param_1 + 0x654) = iVar4;
        iVar4 = *(int *)(param_1 + 0x654);
        if (iVar4 < 0x100) {
          DAT_008ee0c6 = (undefined1)iVar4;
        }
        else {
          DAT_008ee0c6 = 0xff;
        }
        *(undefined1 *)(param_1 + 0x6f8) = DAT_008ee0c6;
        *(undefined1 *)(param_1 + 0x6f9) = DAT_008ee0c6;
        iVar12 = 1;
        DAT_008ee0c7 = DAT_008ee0c6;
        if (0 < iVar4) {
          do {
            iVar10 = *(int *)(param_1 + 0x65c);
            iVar4 = iVar12 + *(int *)(param_1 + 0x678);
            if (iVar4 < 0) {
              iVar4 = iVar4 + iVar10;
            }
            else if (iVar10 <= iVar4) {
              iVar4 = iVar4 - iVar10;
            }
            iVar12 = iVar12 + 1;
            *(undefined4 *)
             (*(int *)(param_1 + 0x5b8) +
             ((uint)*(byte *)(param_1 + 0x18) * *(int *)(param_1 + 0x65c) + iVar4) * 4) =
                 *(undefined4 *)(iVar11 + 4);
          } while (iVar12 <= *(int *)(param_1 + 0x654));
        }
      }
    }
  }
LAB_004d8b94:
  puVar13 = (undefined1 *)0x0;
  switch(*(undefined1 *)(param_1 + 0x19)) {
  case 1:
  case 2:
  case 3:
    if (*(char *)(iVar11 + 0x14) != '\0') {
      puVar13 = (undefined1 *)0xd0a14830;
      break;
    }
    if (*(char *)(param_1 + 0x6b4) == '\0') {
      iVar4 = fn_006d4504(param_1);
      if (iVar4 != 0) {
        puVar13 = (undefined1 *)0xd82148aa;
        break;
      }
      *(int *)(iVar11 + 8) =
           *(int *)(param_1 + 0x668) + *(int *)(param_1 + 0x654) + *(int *)(param_1 + 0x6b0);
    }
    iVar4 = *(int *)(param_1 + 0x668);
    if (*(int *)(param_1 + 0x66c) - iVar4 < 1) {
      if (*(char *)(param_1 + 0x19) != '\x01') {
        puVar13 = (undefined1 *)0xd82148a4;
        break;
      }
    }
    else {
      *piVar5 = iVar4 + 1;
      if (iVar4 + 1 < 0) {
        DAT_008ee0cc = 0;
      }
      else {
        DAT_008ee0cc = iVar4 + 2;
      }
      uVar8 = 0;
      if (*(int *)(param_1 + 0x14) != 0) {
        do {
          iVar4 = *(int *)(param_1 + 0x5b4) + (uVar8 & 0xff) * 0x20;
          bVar14 = *(char *)(iVar4 + 1) != '\0';
          cVar1 = '\0';
          if (bVar14) {
            cVar1 = *(char *)(iVar4 + 0x14);
          }
          if ((bVar14 && cVar1 != '\0') && (*(int *)(iVar4 + 0x18) + 1 == *(int *)(param_1 + 0x668))
             ) {
            *(undefined1 *)(iVar4 + 1) = 0;
            *(undefined1 *)(iVar4 + 0x1c) = 1;
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < *(uint *)(param_1 + 0x14));
      }
      uVar9 = *(uint *)(param_1 + 0x6a8);
      bVar14 = uVar9 != 0;
      iVar4 = 0;
      if (bVar14) {
        uVar8 = *(uint *)(param_1 + 0x654);
        iVar4 = uVar8 - uVar9;
      }
      if (((bVar14 && uVar8 != uVar9) && iVar4 < 0 == (bVar14 && SBORROW4(uVar8,uVar9))) &&
         ((uVar8 + *(int *)(param_1 + 0x6ac)) - uVar9 == *(int *)(param_1 + 0x668))) {
        *(uint *)(param_1 + 0x654) = uVar9;
        if ((int)uVar9 < (int)(uint)*(byte *)(param_1 + 0x6f8)) {
          *(char *)(param_1 + 0x6f8) = (char)uVar9;
          DAT_008ee0c6 = (char)uVar9;
        }
        *(undefined4 *)(param_1 + 0x6a8) = 0;
        *(undefined4 *)(param_1 + 0x6ac) = 0;
      }
      iVar4 = *(int *)(param_1 + 0x678) + 1;
      *(int *)(param_1 + 0x678) = iVar4;
      if (*(int *)(param_1 + 0x65c) <= iVar4) {
        *(int *)(param_1 + 0x678) = iVar4 - *(int *)(param_1 + 0x65c);
      }
      uVar8 = 0;
      if (*(int *)(param_1 + 0x14) != 0) {
        do {
          uVar9 = uVar8 & 0xff;
          if (*(byte *)(param_1 + 0x18) == uVar9) {
            if (*(char *)(param_1 + 0x6b4) == '\0') {
              iVar12 = *(int *)(param_1 + 0x65c);
              iVar4 = *(int *)(param_1 + 0x654) + *(int *)(param_1 + 0x6b0) +
                      *(int *)(param_1 + 0x678);
              if (iVar4 < 0) {
                iVar4 = iVar4 + iVar12;
              }
              else if (iVar12 <= iVar4) {
                iVar4 = iVar4 - iVar12;
              }
              *(undefined4 *)
               (*(int *)(param_1 + 0x5b8) + (uVar9 * *(int *)(param_1 + 0x65c) + iVar4) * 4) = 0;
            }
            iVar12 = *(int *)(param_1 + 0x65c);
            iVar4 = *(int *)(param_1 + 0x6b0) + *(int *)(param_1 + 0x654) +
                    *(int *)(param_1 + 0x678);
            if (iVar4 < 0) {
              iVar4 = iVar4 + iVar12;
            }
            else if (iVar12 <= iVar4) {
              iVar4 = iVar4 - iVar12;
            }
            *(undefined4 *)(*(int *)(param_1 + 0x5bc) + iVar4 * 4) = 0;
          }
          else {
            iVar12 = *(int *)(param_1 + 0x65c);
            iVar4 = *(int *)(param_1 + 0x658) * 2 + *(int *)(param_1 + 0x678);
            if (iVar4 < 0) {
              iVar4 = iVar4 + iVar12;
            }
            else if (iVar12 <= iVar4) {
              iVar4 = iVar4 - iVar12;
            }
            *(undefined4 *)
             (*(int *)(param_1 + 0x5b8) + (uVar9 * *(int *)(param_1 + 0x65c) + iVar4) * 4) = 0;
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < *(uint *)(param_1 + 0x14));
      }
      uVar8 = (uint)*(byte *)(param_1 + 0x19);
      if (uVar8 == 1) {
        if (*(int *)(param_1 + 0x668) + *(int *)(param_1 + 0x654) == 0) {
          uVar2 = 2;
          goto LAB_004d8ea4;
        }
      }
      else {
        bVar14 = uVar8 == 2;
        if (bVar14) {
          uVar8 = *(uint *)(param_1 + 0x668);
        }
        if (bVar14 && uVar8 == 0) {
          uVar2 = 3;
LAB_004d8ea4:
          *(undefined1 *)(param_1 + 0x19) = uVar2;
        }
      }
      uVar8 = *(uint *)(iVar11 + 4);
      bVar14 = (uVar8 & 0x10000) != 0;
      if (bVar14) {
        uVar8 = (uint)*(byte *)(param_1 + 0x18);
      }
      if (((bVar14 && uVar8 != 0xfd) && (*(char *)(param_1 + 0x19) == '\x03')) &&
         (puVar13 = (undefined1 *)fn_006d45f0(param_1,local_28,0), local_28[0] == '\0')) {
        uVar8 = 0;
        uVar9 = 0;
        if (*(int *)(param_1 + 0x14) != 0) {
          do {
            uVar6 = uVar9 & 0xff;
            if (((*(char *)(param_1 + 0x18) != -3) && (uVar6 < (*(uint *)(param_1 + 0x14) & 0xff)))
               && (cVar1 = *(char *)(param_1 + 0x19),
                  (cVar1 == '\x01' || cVar1 == '\x02') || cVar1 == '\x03')) {
              pcVar7 = (char *)(*(int *)(param_1 + 0x5b4) + uVar6 * 0x20);
              cVar1 = *pcVar7;
              if (cVar1 != '\0') {
                pcVar7 = (char *)(uint)(byte)pcVar7[1];
              }
              if (cVar1 != '\0' && pcVar7 != (char *)0x0) {
                local_2c = 0;
                puVar13 = (undefined1 *)fn_006d49a0(param_1,uVar6,0x10,&local_2c,0);
                if (uVar8 < local_2c) {
                  uVar8 = local_2c;
                }
              }
            }
            uVar9 = uVar9 + 1;
          } while (uVar9 < *(uint *)(param_1 + 0x14));
          if (uVar8 != 0) {
            fn_004d670c(param_1,uVar8);
          }
        }
      }
      if (*(char *)(param_1 + 0x19) != '\x01') break;
    }
    if (*(int *)(param_1 + 0x654) != 0) {
      puVar3 = (undefined4 *)
               fn_004d7bc8(param_1,*(undefined1 *)(param_1 + 0x18),
                            *(int *)(param_1 + 0x668) + *(int *)(param_1 + 0x654));
      *puVar3 = *(undefined4 *)(iVar11 + 4);
    }
    break;
  case 4:
    iVar4 = *(int *)(param_1 + 0x690);
    bVar14 = iVar4 != 0;
    if (!bVar14) {
      iVar4 = *(int *)(param_1 + 0x694);
    }
    if (bVar14 || iVar4 != 0) {
LAB_004d90a0:
      fn_00169f1c(*(undefined4 *)(param_1 + 0x680),*(undefined4 *)(param_1 + 0x660));
      if (extraout_r1_01 == 0) {
        *(undefined1 *)(param_1 + 0x689) = 1;
      }
    }
    else {
      uVar9 = *(uint *)(param_1 + 0x14);
      uVar8 = 0;
      if (uVar9 != 0) {
        do {
          pcVar7 = (char *)(*(int *)(param_1 + 0x5b4) + (uVar8 & 0xff) * 0x20);
          cVar1 = *pcVar7;
          if (cVar1 != '\0') {
            pcVar7 = (char *)(uint)(byte)pcVar7[1];
          }
          if (cVar1 != '\0' && pcVar7 != (char *)0x0) goto LAB_004d90a0;
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar9);
      }
      *(undefined1 *)(param_1 + 0x19) = 0;
      *(undefined1 *)(param_1 + 0x689) = 0;
      *(undefined4 *)(param_1 + 0x654) = 0;
      fn_00158f6c(*(undefined4 *)(param_1 + 0x5c4),uVar9 << 2);
      *(undefined4 *)(param_1 + 0x6a8) = 0;
      *(undefined4 *)(param_1 + 0x6ac) = 0;
      *(undefined4 *)(param_1 + 0x6b0) = 0;
      uVar8 = 0;
      if (*(int *)(param_1 + 0x14) != 0) {
        do {
          uVar9 = uVar8 & 0xff;
          uVar8 = uVar8 + 1;
          iVar4 = *(int *)(param_1 + 0x5b4) + uVar9 * 0x20;
          *(undefined1 *)(iVar4 + 0x1c) = 0;
          *(undefined4 *)(iVar4 + 8) = 0xffff0000;
          *(undefined4 *)(iVar4 + 0xc) = 0;
        } while (uVar8 < *(uint *)(param_1 + 0x14));
      }
    }
    break;
  case 5:
    uVar9 = *(uint *)(param_1 + 0x14);
    uVar8 = 0;
    if (uVar9 != 0) {
      do {
        pcVar7 = (char *)(*(int *)(param_1 + 0x5b4) + (uVar8 & 0xff) * 0x20);
        cVar1 = *pcVar7;
        if (cVar1 != '\0') {
          pcVar7 = (char *)(uint)(byte)pcVar7[1];
        }
        if (cVar1 != '\0' && pcVar7 != (char *)0x0) goto switchD_004d8ba4_caseD_0;
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar9);
    }
    *(undefined1 *)(param_1 + 0x19) = 0;
    *(undefined4 *)(param_1 + 0x654) = 0;
    fn_00158f6c(*(undefined4 *)(param_1 + 0x5c4),uVar9 << 2);
    *(undefined4 *)(param_1 + 0x6a8) = 0;
    *(undefined4 *)(param_1 + 0x6ac) = 0;
    *(undefined4 *)(param_1 + 0x6b0) = 0;
    uVar8 = 0;
    if (*(int *)(param_1 + 0x14) != 0) {
      do {
        uVar9 = uVar8 & 0xff;
        uVar8 = uVar8 + 1;
        iVar4 = *(int *)(param_1 + 0x5b4) + uVar9 * 0x20;
        *(undefined1 *)(iVar4 + 0x1c) = 0;
        *(undefined4 *)(iVar4 + 8) = 0xffff0000;
        *(undefined4 *)(iVar4 + 0xc) = 0;
      } while (uVar8 < *(uint *)(param_1 + 0x14));
    }
  }
switchD_004d8ba4_caseD_0:
  cVar1 = *(char *)(param_1 + 0x19);
  if (((cVar1 == '\x01' || cVar1 == '\x02') || cVar1 == '\x03') &&
     (fn_00169f1c(*(int *)(param_1 + 0x680) + *(int *)(param_1 + 0x684),
                   *(undefined4 *)(param_1 + 0x660)), extraout_r1_02 == 0)) {
    *(undefined1 *)(param_1 + 0x6a4) = 1;
  }
  bVar14 = *(char *)(iVar11 + 0x14) != '\0';
  cVar1 = '\0';
  if (bVar14) {
    cVar1 = *(char *)(iVar11 + 1);
  }
  if ((bVar14 && cVar1 != '\0') && (*(int *)(param_1 + 0x698) == 0)) {
    *(undefined1 *)(param_1 + 0x19) = 5;
    *(undefined1 *)(*(int *)(param_1 + 0x5b4) + (uint)*(byte *)(param_1 + 0x18) * 0x20 + 1) = 0;
    *(undefined1 *)(param_1 + 0x67c) = 5;
    DAT_008ee0d0 = 5;
    *(undefined4 *)(param_1 + 0x670) = 0;
    uVar8 = 0;
    if (*(int *)(param_1 + 0x14) != 0) {
      do {
        uVar9 = uVar8 & 0xff;
        uVar8 = uVar8 + 1;
        iVar11 = *(int *)(param_1 + 0x5b4) + uVar9 * 0x20;
        if (*(char *)(iVar11 + 0x14) != '\0') {
          *(undefined1 *)(iVar11 + 1) = 0;
        }
      } while (uVar8 < *(uint *)(param_1 + 0x14));
    }
  }
  return puVar13;
}


