#include "00781d04_007822f0.h"



undefined4 fn_007822f0(undefined4 param_1,int param_2,int param_3,int param_4)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  code *pcVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;
  
  if (*(char *)(param_2 + 8) == '\0') {
    pcVar5 = (code *)(uint)*(ushort *)(param_2 + 4);
    uVar1 = *(undefined1 *)(param_2 + 8);
    iVar7 = (int)*(char *)(param_2 + 6);
    uVar8 = *(uint *)(param_2 + 4);
    if (iVar7 < *(char *)(param_2 + 7)) {
      do {
        if ((uVar8 & 0xffff & 1 << (iVar7 - ((int)(uVar8 << 8) >> 0x18) & 0xffU)) != 0) {
          iVar2 = fn_006f14ec(param_1,iVar7);
          if (iVar2 == 0) {
LAB_007823f4:
            uVar8 = uVar8 & 0xffff0000 |
                    uVar8 & 0xffff & ~(1 << (iVar7 - ((int)(uVar8 << 8) >> 0x18) & 0xffU));
          }
          else {
            uVar6 = 0;
            do {
              iVar3 = fn_0065e4c0((int)(short)param_4,uVar6 & 0xff);
              if (iVar3 != 0) {
                bVar9 = ((&DAT_007eff30)[uVar6 * 2] & 1) == 0;
                if (bVar9) {
                  pcVar5 = (code *)(&DAT_007eff2c)[uVar6 * 2];
                }
                piVar4 = (int *)(param_3 + ((int)(&DAT_007eff30)[uVar6 * 2] >> 1));
                if (!bVar9) {
                  pcVar5 = *(code **)(*piVar4 + (&DAT_007eff2c)[uVar6 * 2]);
                }
                iVar3 = (*pcVar5)(piVar4,iVar2,iVar7,param_4 >> 0x10);
                if (iVar3 != 0) goto LAB_007823f4;
              }
              uVar6 = uVar6 + 1;
            } while ((int)uVar6 < 0x2b);
          }
        }
        iVar7 = (int)(char)((char)iVar7 + '\x01');
      } while (iVar7 < (int)uVar8 >> 0x18);
    }
    if ((*(char *)(param_2 + 8) == '\0') && ((uVar8 & 0xffff) != 0)) {
      *(short *)(param_2 + 4) = (short)uVar8;
      *(char *)(param_2 + 6) = (char)(uVar8 >> 0x10);
      *(char *)(param_2 + 7) = (char)(uVar8 >> 0x18);
      *(undefined1 *)(param_2 + 8) = uVar1;
      return 1;
    }
  }
  return 0;
}



undefined4 fn_007821e0(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined *local_28;
  short local_24;
  char local_22;
  char local_21;
  undefined1 local_20;
  undefined4 uStack_1c;
  int iStack_18;
  undefined4 uStack_14;
  
  if (*(char *)(param_2 + 8) == '\0') {
    local_28 = &DAT_008595d8;
    local_24 = *(short *)(param_2 + 4);
    local_22 = *(char *)(param_2 + 6);
    iVar3 = (int)local_22;
    local_21 = *(char *)(param_2 + 7);
    local_20 = *(undefined1 *)(param_2 + 8);
    uStack_1c = param_1;
    iStack_18 = param_2;
    uStack_14 = param_3;
    if (iVar3 < local_21) {
      do {
        iVar2 = fn_006f0a88(&local_28,iVar3);
        if ((iVar2 != 0) &&
           ((iVar2 = fn_006f14ec(param_1,iVar3), iVar2 == 0 ||
            (iVar2 = fn_006f3218(&uStack_14,iVar2,iVar3), iVar2 != 0)))) {
          fn_0063b148(&local_28,iVar3);
        }
        iVar3 = (int)(char)((char)iVar3 + '\x01');
      } while (iVar3 < local_21);
    }
    if ((*(char *)(param_2 + 8) == '\0') && (local_24 != 0)) {
      *(short *)(param_2 + 4) = local_24;
      uVar1 = 1;
      *(char *)(param_2 + 6) = local_22;
      *(char *)(param_2 + 7) = local_21;
      *(undefined1 *)(param_2 + 8) = local_20;
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



undefined4 fn_0078209c(undefined4 param_1,int param_2,undefined4 param_3,undefined1 param_4)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  if (*(char *)(param_2 + 8) == '\0') {
    iVar4 = (int)*(char *)(param_2 + 6);
    uVar1 = *(undefined1 *)(param_2 + 8);
    uVar6 = *(uint *)(param_2 + 4);
    if (iVar4 < *(char *)(param_2 + 7)) {
      do {
        if ((uVar6 & 0xffff & 1 << (iVar4 - ((int)(uVar6 << 8) >> 0x18) & 0xffU)) != 0) {
          iVar2 = fn_006f14ec(param_1,iVar4);
          if (iVar2 != 0) {
            iVar5 = 0;
            if (*(char *)(iVar2 + 0x120) != '\0') {
              do {
                iVar3 = fn_0065e3d4((int)*(short *)((byte *)(iVar2 + 0x120) + iVar5 * 2 + 4),
                                     param_4);
                if (iVar3 != 0) goto LAB_00782180;
                iVar5 = iVar5 + 1;
              } while (iVar5 < (int)(uint)*(byte *)(iVar2 + 0x120));
            }
          }
          uVar6 = uVar6 & 0xffff0000 |
                  uVar6 & 0xffff & ~(1 << (iVar4 - ((int)(uVar6 << 8) >> 0x18) & 0xffU));
        }
LAB_00782180:
        iVar4 = (int)(char)((char)iVar4 + '\x01');
      } while (iVar4 < (int)uVar6 >> 0x18);
    }
    if ((*(char *)(param_2 + 8) == '\0') && ((uVar6 & 0xffff) != 0)) {
      *(short *)(param_2 + 4) = (short)uVar6;
      *(char *)(param_2 + 6) = (char)(uVar6 >> 0x10);
      *(char *)(param_2 + 7) = (char)(uVar6 >> 0x18);
      *(undefined1 *)(param_2 + 8) = uVar1;
      return 1;
    }
  }
  return 0;
}



undefined4 fn_00781f30(undefined4 param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  if (*(char *)(param_2 + 8) == '\0') {
    uVar1 = *(undefined1 *)(param_2 + 8);
    iVar5 = (int)*(char *)(param_2 + 6);
    uVar6 = *(uint *)(param_2 + 4);
    if (iVar5 < *(char *)(param_2 + 7)) {
      do {
        if ((uVar6 & 0xffff & 1 << (iVar5 - ((int)(uVar6 << 8) >> 0x18) & 0xffU)) != 0) {
          iVar2 = fn_006f14ec(param_1,iVar5);
          if (iVar2 != 0) {
            iVar4 = 0;
            if (*(char *)(iVar2 + 0x120) != '\0') {
              do {
                iVar7 = (int)*(short *)((byte *)(iVar2 + 0x120) + iVar4 * 2 + 4);
                iVar3 = fn_001639e4(iVar7);
                if ((iVar3 == 0x2a) && (iVar3 = fn_00691af0(iVar7,0), iVar3 == 3))
                goto LAB_00782038;
                iVar4 = iVar4 + 1;
              } while (iVar4 < (int)(uint)*(byte *)(iVar2 + 0x120));
            }
          }
          uVar6 = uVar6 & 0xffff0000 |
                  uVar6 & 0xffff & ~(1 << (iVar5 - ((int)(uVar6 << 8) >> 0x18) & 0xffU));
        }
LAB_00782038:
        iVar5 = (int)(char)((char)iVar5 + '\x01');
      } while (iVar5 < (int)uVar6 >> 0x18);
    }
    if ((*(char *)(param_2 + 8) == '\0') && ((uVar6 & 0xffff) != 0)) {
      *(short *)(param_2 + 4) = (short)uVar6;
      *(char *)(param_2 + 6) = (char)(uVar6 >> 0x10);
      *(char *)(param_2 + 7) = (char)(uVar6 >> 0x18);
      *(undefined1 *)(param_2 + 8) = uVar1;
      return 1;
    }
  }
  return 0;
}



undefined4 fn_00781e20(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined *local_28;
  short local_24;
  char local_22;
  char local_21;
  undefined1 local_20;
  undefined4 uStack_1c;
  int iStack_18;
  undefined4 uStack_14;
  
  if (*(char *)(param_2 + 8) == '\0') {
    local_28 = &DAT_008595d8;
    local_24 = *(short *)(param_2 + 4);
    local_22 = *(char *)(param_2 + 6);
    iVar3 = (int)local_22;
    local_21 = *(char *)(param_2 + 7);
    local_20 = *(undefined1 *)(param_2 + 8);
    uStack_1c = param_1;
    iStack_18 = param_2;
    uStack_14 = param_3;
    if (iVar3 < local_21) {
      do {
        iVar2 = fn_006f0a88(&local_28,iVar3);
        if ((iVar2 != 0) &&
           ((iVar2 = fn_006f14ec(param_1,iVar3), iVar2 == 0 ||
            (iVar2 = fn_0064d55c(&uStack_14,iVar2,iVar3), iVar2 == 0)))) {
          fn_0063b148(&local_28,iVar3);
        }
        iVar3 = (int)(char)((char)iVar3 + '\x01');
      } while (iVar3 < local_21);
    }
    if ((*(char *)(param_2 + 8) == '\0') && (local_24 != 0)) {
      *(short *)(param_2 + 4) = local_24;
      uVar1 = 1;
      *(char *)(param_2 + 6) = local_22;
      *(char *)(param_2 + 7) = local_21;
      *(undefined1 *)(param_2 + 8) = local_20;
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



undefined4 fn_00781d04(undefined4 param_1,int param_2)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  short *psVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  bool bVar9;
  undefined8 uVar10;
  
  if (*(char *)(param_2 + 8) == '\0') {
    iVar6 = (int)*(char *)(param_2 + 6);
    uVar1 = *(undefined1 *)(param_2 + 8);
    uVar7 = *(uint *)(param_2 + 4);
    if (iVar6 < *(char *)(param_2 + 7)) {
      do {
        if ((uVar7 & 0xffff & 1 << (iVar6 - ((int)(uVar7 << 8) >> 0x18) & 0xffU)) != 0) {
          uVar10 = fn_006f14ec(param_1,iVar6);
          psVar4 = (short *)uVar10;
          iVar5 = 0;
          iVar3 = (int)((ulonglong)uVar10 >> 0x20);
          if (psVar4 != (short *)0x0) {
            iVar5 = (int)*psVar4;
            iVar3 = iVar5;
          }
          if ((psVar4 != (short *)0x0 && iVar3 != 0) && -1 < iVar5) {
            cVar2 = *(char *)((int)psVar4 + 0x67);
            bVar8 = cVar2 == '\0';
            if (bVar8) {
              cVar2 = (char)psVar4[0x3b];
            }
            bVar9 = bVar8 && cVar2 == '\0';
            if (bVar8 && cVar2 == '\0') {
              bVar9 = (char)psVar4[0x34] == '\0';
            }
            if (bVar9) goto LAB_00781dc8;
          }
          uVar7 = uVar7 & 0xffff0000 |
                  uVar7 & 0xffff & ~(1 << (iVar6 - ((int)(uVar7 << 8) >> 0x18) & 0xffU));
        }
LAB_00781dc8:
        iVar6 = (int)(char)((char)iVar6 + '\x01');
      } while (iVar6 < (int)uVar7 >> 0x18);
    }
    if ((*(char *)(param_2 + 8) == '\0') && ((uVar7 & 0xffff) != 0)) {
      *(short *)(param_2 + 4) = (short)uVar7;
      *(char *)(param_2 + 6) = (char)(uVar7 >> 0x10);
      *(char *)(param_2 + 7) = (char)(uVar7 >> 0x18);
      *(undefined1 *)(param_2 + 8) = uVar1;
      return 1;
    }
  }
  return 0;
}


