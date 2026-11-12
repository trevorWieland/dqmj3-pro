#include "006300c4_006305dc.h"



void fn_006305dc(undefined4 param_1,int param_2,int param_3,int *param_4)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 *puVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  bool bVar13;
  bool bVar14;
  undefined1 auStack_104 [97];
  undefined1 auStack_a3 [99];
  int local_40;
  int local_3c;
  undefined4 local_34;
  int iStack_30;
  int iStack_2c;
  int *local_28;
  
  iVar12 = 0;
  local_3c = (int)*(char *)(param_2 + 5);
  local_40 = param_3 + 0x180388;
  iVar5 = local_40 + local_3c * 0x418;
  local_34 = param_1;
  iStack_30 = param_2;
  iStack_2c = param_3;
  local_28 = param_4;
  if (0 < *param_4) {
    do {
      piVar3 = local_28;
      if (*(short *)(iVar5 + -0x4080) < 1) {
        return;
      }
      cVar1 = *(char *)(iVar5 + -0x4019);
      bVar13 = cVar1 == '\0';
      if (bVar13) {
        cVar1 = *(char *)(iVar5 + -0x400a);
      }
      bVar14 = bVar13 && cVar1 == '\0';
      if (bVar13 && cVar1 == '\0') {
        bVar14 = *(char *)(iVar5 + -0x4018) == '\0';
      }
      if (!bVar14) {
        return;
      }
      iVar2 = iVar12 * 0x1a0 + 8;
      if ((*(char *)((int)local_28 + iVar12 * 0x1a0 + 0x186) == '\0') &&
         (iVar6 = (int)*(char *)((int)local_28 + iVar12 * 0x1a0 + 9), iVar6 - 0x10U < 8)) {
        iVar7 = local_40 + iVar6 * 0x418;
        if (0 < *(short *)(iVar7 + -0x4080)) {
          cVar1 = *(char *)(iVar7 + -0x4019);
          bVar13 = cVar1 == '\0';
          if (bVar13) {
            cVar1 = *(char *)(iVar7 + -0x400a);
          }
          bVar14 = bVar13 && cVar1 == '\0';
          if (bVar13 && cVar1 == '\0') {
            bVar14 = *(char *)(iVar7 + -0x4018) == '\0';
          }
          if ((bVar14) && (iVar7 = fn_006f44fc((short *)(iVar7 + -0x4080),0xe5), iVar7 != 0)) {
            uVar10 = (uint)(short)piVar3[iVar12 * 0x68 + 8];
            bVar4 = 1;
            if (0 < (int)uVar10) {
              if ((uVar10 & 1) != 0) {
                bVar4 = *(byte *)((int)piVar3 + iVar12 + iVar2 + 8) & 1;
              }
              iVar7 = (int)uVar10 >> 1;
              if (iVar7 != 0) {
                do {
                  iVar7 = iVar7 + -1;
                  bVar4 = bVar4 & *(byte *)((int)piVar3 + iVar12 + iVar2 + 8);
                } while (iVar7 != 0);
              }
              if (bVar4 == 0) {
                fn_00301f50(auStack_104,0xc4);
                bVar13 = false;
                uVar10 = 0;
                do {
                  uVar11 = (uint)(byte)(&DAT_008bf6a8)[uVar10];
                  iVar7 = uVar11 + iVar2;
                  if (((*(char *)((int)piVar3 + iVar7 + 0xb9) != '\0') &&
                      (iVar8 = fn_0068f87c(uVar11,(int)*(char *)((int)piVar3 + iVar7 + 0x58)),
                      iVar8 == 3)) && (iVar8 = fn_006207d0(uVar11,iVar6,local_40), iVar8 != 0)) {
                    auStack_104[uVar11] = *(undefined1 *)((int)piVar3 + iVar7 + 0x58);
                    bVar13 = true;
                    auStack_a3[uVar11] = 1;
                  }
                  uVar10 = uVar10 + 1;
                } while (uVar10 < 5);
                if (bVar13) {
                  puVar9 = (undefined1 *)fn_006228ac(local_28);
                  local_28[1] = local_28[1] + 1;
                  *(undefined2 *)(puVar9 + 0x18) = 1;
                  *puVar9 = (char)iVar6;
                  puVar9[1] = (char)local_3c;
                  puVar9[2] = 3;
                  *(undefined2 *)(puVar9 + 4) = 0xe5;
                  puVar9[6] = 0;
                  puVar9[7] = 8;
                  fn_0017821c(puVar9 + 0x58,auStack_104,0xc2);
                  fn_0062454c(local_34,puVar9,local_40,1,1);
                  *(int *)(puVar9 + 0x194) = *(int *)(puVar9 + 0x194) << 1;
                  *(int *)(puVar9 + 0x198) = *(int *)(puVar9 + 0x198) << 1;
                  fn_00654c08(local_34,puVar9,local_40);
                }
              }
            }
          }
        }
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < *local_28);
  }
  return;
}



void fn_006300c4(int param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *extraout_r1;
  undefined4 *extraout_r1_00;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  uint uVar12;
  bool bVar13;
  bool bVar14;
  undefined4 *local_ac;
  undefined4 *local_a8;
  undefined4 *local_a4;
  undefined1 auStack_a0 [60];
  undefined1 *local_64;
  undefined2 local_54;
  undefined1 local_51;
  undefined1 local_50;
  int local_4c;
  int local_44;
  int local_40;
  int local_30;
  undefined4 uStack_2c;
  int local_28;
  
  local_ac = (undefined4 *)0x0;
  local_a8 = (undefined4 *)0x0;
  local_a4 = (undefined4 *)0x0;
  local_4c = 0x10;
  local_40 = param_3 + 0x180470;
  local_44 = param_3 + 0x180388;
  local_30 = param_1;
  uStack_2c = param_2;
  local_28 = param_3;
  do {
    if (*(char *)(local_40 + 0x13) == '\0') {
      iVar11 = local_4c;
    }
    else if ((local_4c - 0x10U < 8) || (local_4c - 0x18U < 8)) {
      if ((local_4c - 0x10U < 4) ||
         ((local_4c - 0x18U < 4 || (local_4c == 0x20 || local_4c == 0x22)))) {
        cVar2 = (char)local_4c + '\x04';
      }
      else {
        cVar2 = (char)local_4c + -4;
      }
      iVar11 = (int)cVar2;
    }
    else if (local_4c - 0x20U < 2) {
      if (local_4c == 0x20 || local_4c == 0x22) {
        iVar11 = 0x21;
      }
      else {
        iVar11 = 0x20;
      }
    }
    else if (local_4c - 0x22U < 2) {
      if (local_4c == 0x20 || local_4c == 0x22) {
        iVar11 = 0x23;
      }
      else {
        iVar11 = 0x22;
      }
    }
    else {
      iVar11 = 0;
    }
    iVar3 = local_44 + iVar11 * 0x418;
    if (0 < *(short *)(iVar3 + -0x4080)) {
      cVar2 = *(char *)(iVar3 + -0x4019);
      bVar13 = cVar2 == '\0';
      if (bVar13) {
        cVar2 = *(char *)(iVar3 + -0x400a);
      }
      bVar14 = bVar13 && cVar2 == '\0';
      if (bVar13 && cVar2 == '\0') {
        bVar14 = *(char *)(iVar3 + -0x4018) == '\0';
      }
      if ((bVar14) && (*(char *)(iVar3 + -0x3ffb) != '\0')) {
        puVar7 = (undefined4 *)(iVar11 * 0x11);
        iVar9 = 0;
        iVar3 = local_30 + 4 + iVar11 * 0x22;
        if ('\0' < *(char *)(iVar3 + -0x140)) {
          do {
            local_54 = *(undefined2 *)(iVar3 + -0x160 + iVar9 * 2);
            local_50 = 0;
            local_51 = (undefined1)iVar11;
            fn_006565b8(auStack_a0,puVar7);
            fn_006564f4(auStack_a0,&local_54,(int)(char)iVar9,(int)*(char *)(iVar3 + -0x140),0);
            puVar7 = local_a8;
            if (local_a8 == local_a4) {
              local_64 = auStack_a0;
              uVar8 = ((int)local_a8 - (int)local_ac) / 0x34;
              if (uVar8 < (uint)(((int)local_a4 - (int)local_ac) / 0x34)) {
                puVar4 = local_a8 + 0xd;
                if (local_a8 != (undefined4 *)0x0) {
                  puVar4 = local_a8 + -0xd;
                  local_a8 = local_a8 + 0xd;
                  fn_00656538(puVar7,puVar4);
                  puVar4 = local_a8;
                }
                local_a8 = puVar4;
                fn_007a1c04(puVar7,puVar7 + -0xd,puVar7);
                fn_006565e0(puVar7,local_64);
                puVar7 = extraout_r1_00;
              }
              else {
                uVar12 = uVar8 + (uVar8 >> 1) + (uVar8 >> 3);
                if (uVar12 < uVar8 + 0x20) {
                  uVar12 = uVar8 + 0x20;
                }
                puVar5 = (undefined4 *)fn_00100fc6(uVar12 * 0x34,0);
                puVar4 = puVar5;
                for (puVar10 = local_ac; puVar10 != puVar7; puVar10 = puVar10 + 0xd) {
                  if (puVar4 != (undefined4 *)0x0) {
                    fn_00656538(puVar4,puVar10);
                  }
                  puVar4 = puVar4 + 0xd;
                }
                if (puVar5 + (((int)puVar7 - (int)local_ac) / 0x34) * 0xd != (undefined4 *)0x0) {
                  fn_00656538(puVar5 + (((int)puVar7 - (int)local_ac) / 0x34) * 0xd,local_64);
                }
                puVar1 = local_a8;
                puVar4 = puVar5 + (((int)puVar7 - (int)local_ac) / 0x34) * 0xd;
                puVar10 = local_a8;
                for (; local_a8 = puVar10, puVar7 != puVar1; puVar7 = puVar7 + 0xd) {
                  puVar4 = puVar4 + 0xd;
                  if (puVar4 != (undefined4 *)0x0) {
                    fn_00656538(puVar4,puVar7);
                  }
                  puVar10 = local_a8;
                }
                iVar6 = (int)puVar10 - (int)local_ac;
                for (puVar7 = local_ac; puVar7 != puVar10; puVar7 = puVar7 + 0xd) {
                  (**(code **)*puVar7)(puVar7);
                }
                fn_001008c4(local_ac,((int)local_a4 - (int)local_ac) / 0x34,0);
                puVar7 = puVar5 + uVar12 * 0xd;
                local_ac = puVar5;
                local_a8 = puVar5 + (iVar6 / 0x34) * 0xd + 0xd;
                local_a4 = puVar7;
              }
            }
            else {
              puVar4 = local_a8 + 0xd;
              bVar13 = local_a8 != (undefined4 *)0x0;
              puVar7 = (undefined4 *)0x0;
              local_a8 = puVar4;
              if (bVar13) {
                fn_00656538();
                puVar7 = extraout_r1;
              }
            }
            iVar9 = iVar9 + 1;
          } while (iVar9 < *(char *)(iVar3 + -0x140));
        }
      }
    }
    local_4c = (int)(char)((char)local_4c + '\x01');
  } while (local_4c < 0x18);
  fn_0062dbc8(local_30,local_44,&local_ac);
  uVar8 = 0;
  iVar11 = (int)local_a8 - (int)local_ac >> 0x1f;
  if (((int)local_a8 - (int)local_ac) / 0x34 + iVar11 != iVar11) {
    do {
      iVar11 = fn_00797194(&local_ac,uVar8);
      if (*(char *)(iVar11 + 4) == '\x01') {
        iVar3 = fn_00632cb0(local_30,iVar11,uStack_2c,local_28);
        iVar11 = local_28;
        puVar4 = local_a8;
        puVar7 = local_ac;
        if (iVar3 != 0) {
          for (; puVar7 != puVar4; puVar7 = puVar7 + 0xd) {
            (**(code **)*puVar7)(puVar7);
          }
          fn_001008c4(local_ac,((int)local_a4 - (int)local_ac) / 0x34,0);
          return;
        }
        fn_0063a650(0x10,0x14,local_28);
        fn_0063a650(0x14,0x18,iVar11);
        fn_0063ac14(local_28);
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < (uint)(((int)local_a8 - (int)local_ac) / 0x34));
  }
  fn_007971f8(&local_ac);
  return;
}


