#include "005171e8_0051783c.h"



undefined1 * fn_0051783c(int param_1,undefined4 param_2,int param_3,uint param_4,uint param_5)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auStack_20 [12];
  
  if (*(int *)(param_1 + 0x10) == 0) {
    puVar1 = &DAT_e0a1482b;
  }
  else if (*(int *)(param_1 + 4) == DAT_008c067c) {
    puVar1 = (undefined1 *)0xe0e14826;
    if ((((DAT_008c067c != param_3) && (param_4 < 0xc)) && (param_5 < 0xc)) && (param_4 != param_5))
    {
      *(int *)(param_1 + 4) = param_3;
      *(char *)(param_1 + 8) = (char)param_4;
      *(char *)(param_1 + 9) = (char)param_5;
      uVar2 = fn_006d9934(param_2);
      *(uint *)(param_1 + 0x34) = (uVar2 & 0xfffffff8) - 0x18;
      *(undefined4 *)(param_1 + 0x14) = 0;
      *(undefined4 *)(param_1 + 0x18) = 0xfffff82f;
      *(undefined4 *)(param_1 + 0x1c) = 0;
      *(undefined4 *)(param_1 + 0x28) = 0;
      *(undefined4 *)(param_1 + 0x2c) = 0xfffff82f;
      *(undefined4 *)(param_1 + 0x30) = 0;
      puVar3 = (undefined4 *)fn_00658e6c(auStack_20);
      uVar4 = *puVar3;
      uVar5 = puVar3[1];
      *(undefined4 *)(param_1 + 0x48) = 0xfffff82f;
      *(undefined4 *)(param_1 + 0x50) = 0;
      *(undefined4 *)(param_1 + 0x54) = 0;
      *(undefined4 *)(param_1 + 0x38) = uVar4;
      *(undefined4 *)(param_1 + 0x3c) = uVar5;
      *(undefined1 *)(param_1 + 0x58) = 0;
      *(undefined4 *)(param_1 + 0x60) = 0;
      *(undefined4 *)(param_1 + 0x5c) = 0;
      puVar1 = (undefined1 *)0x0;
      *(undefined4 *)(param_1 + 100) = 0;
    }
  }
  else {
    puVar1 = &DAT_e0a14827;
  }
  return puVar1;
}



longlong fn_00517618(int param_1,uint param_2,uint *param_3,uint param_4)

{
  undefined1 *puVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  
  if (*(int *)(param_1 + 4) == DAT_008c067c) {
    puVar1 = &DAT_e0a14827;
  }
  else {
    puVar3 = (uint *)(param_2 - 0x100000);
    if (puVar3 < (uint *)0x3ff00000) {
      puVar3 = param_3 + -0x40000;
    }
    if (puVar3 < (uint *)0x3ff00000) {
      puVar1 = (undefined1 *)0xd9614822;
      uVar5 = 0;
      for (uVar2 = 0; uVar2 < *(uint *)(param_1 + 0x30); uVar2 = uVar2 + 1) {
        uVar7 = *(int *)(param_1 + 0x28) + uVar2;
        if (*(uint *)(param_1 + 0x24) <= uVar7) {
          uVar7 = uVar7 - *(uint *)(param_1 + 0x24);
        }
        pcVar8 = (char *)(*(int *)(param_1 + 0x20) + uVar7 * 0x57c);
        if (*pcVar8 == '\0') goto LAB_0051776c;
        uVar5 = uVar5 + *(ushort *)(pcVar8 + 2);
        if (pcVar8[1] != '\0') {
          iVar6 = uVar2 + 1;
          if (uVar5 <= param_4) {
            uVar2 = 0;
            while( true ) {
              uVar7 = *(int *)(param_1 + 0x28) + uVar2;
              if (*(uint *)(param_1 + 0x24) <= uVar7) {
                uVar7 = uVar7 - *(uint *)(param_1 + 0x24);
              }
              iVar4 = *(int *)(param_1 + 0x20) + uVar7 * 0x57c;
              fn_001694e4(param_2,iVar4 + 4,*(undefined2 *)(iVar4 + 2));
              param_2 = param_2 + *(ushort *)(iVar4 + 2);
              if (*(char *)(iVar4 + 1) != '\0') break;
              if (uVar2 < *(uint *)(param_1 + 0x30)) {
                uVar2 = uVar2 + 1;
              }
            }
            *param_3 = uVar5;
            uVar2 = *(int *)(param_1 + 0x28) + iVar6;
            *(uint *)(param_1 + 0x28) = uVar2;
            if (*(uint *)(param_1 + 0x24) <= uVar2) {
              *(uint *)(param_1 + 0x28) = uVar2 - *(uint *)(param_1 + 0x24);
            }
            uVar2 = *(int *)(param_1 + 0x30) - iVar6;
            *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + iVar6;
            *(uint *)(param_1 + 0x30) = uVar2;
            return (ulonglong)uVar2 << 0x20;
          }
          if (DAT_008c0630 != 0) {
            param_2 = 0x10;
          }
          goto LAB_00517768;
        }
      }
      param_2 = *(uint *)(param_1 + 0x24);
      if (uVar2 < param_2) {
LAB_0051776c:
        return CONCAT44(param_2,0xd1614828);
      }
      if (DAT_008c0630 != 0) {
        param_2 = 0x10;
      }
    }
    else {
      puVar1 = (undefined1 *)0xe0e14826;
    }
  }
LAB_00517768:
  return CONCAT44(param_2,puVar1);
}



void fn_005175e4(int param_1)

{
  if (*(int *)(param_1 + 4) != DAT_008c067c) {
    *(int *)(param_1 + 4) = DAT_008c067c;
    *(undefined1 *)(param_1 + 9) = 0xfd;
    *(undefined1 *)(param_1 + 8) = 0xfd;
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  return;
}



undefined1 * fn_005171e8(int param_1,uint *param_2)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  char *pcVar12;
  uint uVar13;
  undefined4 *puVar14;
  undefined8 uVar15;
  
  if (*(int *)(param_1 + 4) == DAT_008c067c) {
    return &DAT_e0a14827;
  }
  uVar11 = *param_2;
  if (0x17 < uVar11) {
    uVar4 = param_2[1];
    if (*(char *)(param_1 + 8) != -3) {
      uVar5 = *(uint *)(uVar4 + 0x20);
      uVar5 = (((uVar5 >> 0x10) << 0x18 | (uVar5 >> 0x18) << 0x10) >> 0x10 |
              ((uVar5 & 0xff) << 8 | uVar5 >> 8 & 0xff) << 0x10) - *(int *)(param_1 + 0x18);
      if (-1 < (int)uVar5) {
        if (*(uint *)(param_1 + 0x1c) < uVar5) {
          return (undefined1 *)0xd9614822;
        }
        if (0 < (int)uVar5) {
          uVar7 = *(int *)(param_1 + 0x14) + uVar5;
          *(uint *)(param_1 + 0x14) = uVar7;
          if (*(uint *)(param_1 + 0x10) <= uVar7) {
            *(uint *)(param_1 + 0x14) = uVar7 - *(uint *)(param_1 + 0x10);
          }
          *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) - uVar5;
          *(uint *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + uVar5;
        }
        uVar5 = (*(uint *)(uVar4 + 0x24) & 0xff00ff00) >> 8 |
                (*(uint *)(uVar4 + 0x24) & 0xff00ff) << 8;
        uVar7 = (*(uint *)(uVar4 + 0x28) & 0xff00ff00) >> 8 |
                (*(uint *)(uVar4 + 0x28) & 0xffff00ff) << 8;
        uVar7 = uVar7 << 0x10 | uVar7 >> 0x10;
        uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
        if ((*(int *)(param_1 + 0x1c) != 0) && (uVar9 = 1, 1 < *(uint *)(param_1 + 0x1c))) {
          do {
            if ((uVar7 & 1) != 0) {
              uVar13 = *(int *)(param_1 + 0x14) + uVar9;
              if (*(uint *)(param_1 + 0x10) <= uVar13) {
                uVar13 = uVar13 - *(uint *)(param_1 + 0x10);
              }
              puVar14 = (undefined4 *)(*(int *)(param_1 + 0xc) + uVar13 * 0x5a0);
              *puVar14 = 0xffffffff;
              puVar14[1] = 0xffffffff;
            }
            bVar2 = (byte)uVar5;
            uVar5 = uVar5 >> 1;
            uVar7 = (uint)(bVar2 & 1) << 0x1f | uVar7 >> 1;
            if (uVar7 == 0 && uVar5 == 0) break;
            if (uVar9 < *(uint *)(param_1 + 0x1c)) {
              uVar9 = uVar9 + 1;
            }
          } while (uVar9 < *(uint *)(param_1 + 0x1c));
        }
      }
    }
    if ((*(int *)(param_1 + 0x5c) != 0) && (*(int *)(param_1 + 0x1c) == 0)) {
      if (*(byte *)(param_1 + 9) < 4) {
        *(int *)(&DAT_008ee080 + (uint)*(byte *)(param_1 + 9) * 4) = *(int *)(param_1 + 0x5c);
        uVar7 = *(uint *)(DAT_008bf4d4 + 8);
        iVar10 = *(int *)(DAT_008bf4d4 + 0xc);
        uVar5 = *(uint *)(param_1 + 0x60);
        iVar8 = *(int *)(param_1 + 100);
        puVar14 = (undefined4 *)fn_004f0ce8();
        uVar6 = fn_0011c134(uVar7 - uVar5,iVar10 - (iVar8 + (uint)(uVar7 < uVar5)),*puVar14);
        *(undefined4 *)(&DAT_008ee090 + (uint)*(byte *)(param_1 + 9) * 4) = uVar6;
      }
      *(undefined4 *)(param_1 + 0x5c) = 0;
      *(undefined4 *)(param_1 + 0x60) = 0;
      *(undefined4 *)(param_1 + 100) = 0;
    }
    uVar3 = *(ushort *)(uVar4 + 0x14) >> 8;
    if ((uVar3 & 1) == 0) {
      return (undefined1 *)0x0;
    }
    uVar5 = (*(ushort *)(uVar4 + 0x16) & 0xff) << 8 | (uint)(*(ushort *)(uVar4 + 0x16) >> 8);
    if ((uVar11 == uVar5 + 0x18) && (uVar5 < 0x579)) {
      uVar11 = *(uint *)(uVar4 + 0x1c);
      uVar11 = ((uVar11 >> 0x10) << 0x18 | (uVar11 >> 0x18) << 0x10) >> 0x10 |
               ((uVar11 & 0xff) << 8 | uVar11 >> 8 & 0xff) << 0x10;
      uVar7 = uVar11 - *(int *)(param_1 + 0x2c);
      if ((int)uVar7 < 0) {
        *(undefined1 *)(param_1 + 0x58) = 1;
        return (undefined1 *)0x0;
      }
      if (*(uint *)(param_1 + 0x24) <= uVar7) {
        return (undefined1 *)0xd861482c;
      }
      uVar9 = *(uint *)(param_1 + 0x30);
      while (uVar9 <= uVar7) {
        uVar9 = *(int *)(param_1 + 0x28) + *(int *)(param_1 + 0x30);
        if (*(uint *)(param_1 + 0x24) <= uVar9) {
          uVar9 = uVar9 - *(uint *)(param_1 + 0x24);
        }
        *(undefined1 *)(*(int *)(param_1 + 0x20) + uVar9 * 0x57c) = 0;
        uVar9 = *(int *)(param_1 + 0x30) + 1;
        *(uint *)(param_1 + 0x30) = uVar9;
      }
      uVar7 = uVar7 + *(int *)(param_1 + 0x28);
      if (*(uint *)(param_1 + 0x24) <= uVar7) {
        uVar7 = uVar7 - *(uint *)(param_1 + 0x24);
      }
      *(undefined1 *)(param_1 + 0x58) = 1;
      pcVar12 = (char *)(*(int *)(param_1 + 0x20) + uVar7 * 0x57c);
      if (*pcVar12 != '\0') {
        return (undefined1 *)0x0;
      }
      fn_001694e4(pcVar12 + 4,uVar4 + 0x2c,uVar5);
      *pcVar12 = '\x01';
      pcVar12[1] = (char)((uVar3 & 2) >> 1);
      *(short *)(pcVar12 + 2) = (short)uVar5;
      iVar8 = uVar11 - *(int *)(param_1 + 0x48);
      if (iVar8 == 0) {
        do {
          iVar8 = *(int *)(param_1 + 0x48);
          uVar4 = *(uint *)(param_1 + 0x50);
          uVar11 = *(uint *)(param_1 + 0x54) >> 1;
          *(int *)(param_1 + 0x48) = iVar8 + 1;
          uVar5 = (iVar8 + 0x41) - *(int *)(param_1 + 0x2c);
          *(uint *)(param_1 + 0x50) =
               (uint)((byte)*(uint *)(param_1 + 0x54) & 1) << 0x1f | uVar4 >> 1;
          *(uint *)(param_1 + 0x54) = uVar11;
          if ((-1 < (int)uVar5) && (uVar5 < *(uint *)(param_1 + 0x30))) {
            uVar5 = uVar5 + *(int *)(param_1 + 0x28);
            if (*(uint *)(param_1 + 0x24) <= uVar5) {
              uVar5 = uVar5 - *(uint *)(param_1 + 0x24);
            }
            pcVar12 = (char *)(*(int *)(param_1 + 0x20) + uVar5 * 0x57c);
            cVar1 = '\0';
            if (pcVar12 != (char *)0x0) {
              cVar1 = *pcVar12;
            }
            if (pcVar12 != (char *)0x0 && cVar1 != '\0') {
              *(uint *)(param_1 + 0x54) = uVar11 | 0x80000000;
            }
          }
        } while ((uVar4 & 1) != 0);
        return (undefined1 *)0x0;
      }
      if (iVar8 - 1U < 0x40) {
        uVar11 = *(uint *)(param_1 + 0x50);
        uVar4 = *(uint *)(param_1 + 0x54);
        uVar15 = fn_00301bb0(1,0);
        *(uint *)(param_1 + 0x50) = (uint)uVar15 | uVar11;
        *(uint *)(param_1 + 0x54) = (uint)((ulonglong)uVar15 >> 0x20) | uVar4;
        return (undefined1 *)0x0;
      }
      return (undefined1 *)0x0;
    }
  }
  return (undefined1 *)0xd9614822;
}


