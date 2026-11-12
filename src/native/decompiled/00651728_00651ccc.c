#include "00651728_00651ccc.h"



void fn_00651ccc(undefined4 param_1,uint param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  char **ppcVar2;
  uint *puVar3;
  undefined1 uVar4;
  ushort uVar5;
  bool bVar6;
  uint3 uVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  char **ppcVar11;
  uint uVar12;
  uint unaff_r7;
  int iVar13;
  char **ppcVar14;
  char local_54 [24];
  char *local_3c;
  char *local_38;
  char *local_34;
  
  fn_0064fbd4();
  fn_00784690(param_1,param_4,param_1,unaff_r7 & 0xffff0000 | param_2 & 0xffff);
  if (*(char *)(param_4 + 8) == '\0') {
    puVar3 = (uint *)(param_4 + 4);
    uVar5 = *(ushort *)puVar3;
    local_54[0] = *(char *)(param_4 + 6);
    uVar7 = *(uint3 *)puVar3;
    uVar4 = *(undefined1 *)(param_4 + 8);
    uVar12 = *puVar3;
    bVar6 = true;
    iVar13 = 0;
    local_3c = (char *)0x0;
    local_38 = (char *)0x0;
    local_34 = (char *)0x0;
    iVar1 = (int)uVar12 >> 0x18;
    if (local_54[0] < *(char *)(param_4 + 7)) {
      do {
        if ((((uint)uVar5 & 1 << ((int)local_54[0] - ((int)((uint)uVar7 << 8) >> 0x18) & 0xffU)) !=
             0) && (iVar8 = fn_006f14ec(param_1), iVar8 != 0)) {
          iVar9 = fn_006f4520();
          iVar8 = fn_00176dc0(iVar8);
          iVar9 = iVar9 + iVar8 * 2;
          if ((bVar6) || (iVar13 < iVar9)) {
            bVar6 = false;
            if (local_3c != local_38) {
              pcVar10 = local_3c;
              if (local_38 < local_3c) {
                do {
                  pcVar10 = pcVar10 + 1;
                } while (pcVar10 != local_38);
              }
              local_38 = local_3c;
            }
            iVar13 = iVar9;
            pcVar10 = local_38;
            if (local_38 != local_34) goto joined_r0x00651e30;
LAB_00651e70:
            fn_0079aa0c(&local_3c,local_38,local_54);
          }
          else if (iVar9 == iVar13) {
            pcVar10 = local_38;
            if (local_38 == local_34) goto LAB_00651e70;
joined_r0x00651e30:
            local_38 = pcVar10 + 1;
            if (pcVar10 != (char *)0x0) {
              *pcVar10 = local_54[0];
            }
          }
        }
        local_54[0] = local_54[0] + '\x01';
      } while (local_54[0] < iVar1);
    }
    ppcVar2 = (char **)((int)((uint)uVar7 << 8) >> 0x18);
    for (ppcVar11 = ppcVar2; (int)ppcVar11 < iVar1;
        ppcVar11 = (char **)(int)(char)((char)ppcVar11 + '\x01')) {
      ppcVar14 = &local_3c;
      pcVar10 = local_3c;
      while( true ) {
        if (pcVar10 != local_38) {
          ppcVar14 = (char **)(int)*pcVar10;
        }
        if (pcVar10 == local_38 || ppcVar14 == ppcVar11) break;
        pcVar10 = pcVar10 + 1;
      }
      if (pcVar10 == local_38) {
        uVar12 = uVar12 & 0xffff0000 |
                 uVar12 & 0xffff & ~(1 << ((int)ppcVar11 - (int)ppcVar2 & 0xffU));
      }
    }
    if ((*(char *)(param_4 + 8) == '\0') && ((uVar12 & 0xffff) != 0)) {
      *(short *)(param_4 + 4) = (short)uVar12;
      *(char *)(param_4 + 6) = (char)(uVar12 >> 0x10);
      *(char *)(param_4 + 7) = (char)(uVar12 >> 0x18);
      *(undefined1 *)(param_4 + 8) = uVar4;
    }
    pcVar10 = local_3c;
    if (local_38 < local_3c) {
      do {
        pcVar10 = pcVar10 + 1;
      } while (pcVar10 != local_38);
    }
    fn_001008c4(local_3c,(int)local_34 - (int)local_3c,0);
  }
  fn_007837b4(param_1,param_4);
  return;
}



void fn_00651c9c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  fn_00651494();
  fn_007848f4(param_1,param_4);
  fn_00782e1c(param_1,param_4);
  return;
}



undefined4 fn_00651c64(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = fn_006f3500(param_2);
  if ((iVar1 == 0) && (*(char *)(param_2 + 0x7e) < '\x01')) {
    return 0;
  }
  return 1;
}



void fn_00651728(undefined **param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  bool bVar1;
  undefined ***pppuVar2;
  char cVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined **ppuVar9;
  undefined ***pppuVar10;
  undefined **ppuVar11;
  int iVar12;
  int iVar13;
  undefined ***pppuVar14;
  uint uVar15;
  int iVar16;
  char local_80 [12];
  undefined **local_74;
  undefined **local_6c;
  undefined **local_68;
  undefined **local_64;
  undefined *local_60;
  undefined4 local_5c;
  char local_58;
  uint local_54;
  undefined **local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  
  local_34 = param_1;
  uStack_30 = param_2;
  uStack_2c = param_3;
  iStack_28 = param_4;
  fn_0064f714(param_1);
  local_60 = &DAT_008595d8;
  local_64 = &local_60;
  iVar12 = (int)*(char *)(param_4 + 6);
  uVar15 = *(uint *)(param_4 + 4);
  local_5c = *(uint *)(param_4 + 4);
  local_58 = *(char *)(param_4 + 8);
  local_6c = local_34;
  if (local_58 == '\0') {
    local_54 = (uint)local_34 & 0xffffff00;
    if (iVar12 < *(char *)(param_4 + 7)) {
      do {
        if ((uVar15 & 0xffff & 1 << (iVar12 - ((int)(uVar15 << 8) >> 0x18) & 0xffU)) != 0) {
          iVar7 = fn_006f14ec(local_6c,iVar12);
          if (iVar7 != 0) {
            iVar13 = 0;
            if (*(char *)(iVar7 + 0x120) != '\0') {
              do {
                iVar16 = (int)*(short *)((byte *)(iVar7 + 0x120) + iVar13 * 2 + 4);
                iVar8 = fn_001639e4(iVar16);
                if ((iVar8 == 0x2a) && (iVar8 = fn_00691af0(iVar16,0), iVar8 == 4))
                goto LAB_0065186c;
                iVar13 = iVar13 + 1;
              } while (iVar13 < (int)(uint)*(byte *)(iVar7 + 0x120));
            }
          }
          uVar15 = uVar15 & 0xffff0000 |
                   uVar15 & 0xffff & ~(1 << (iVar12 - ((int)(uVar15 << 8) >> 0x18) & 0xffU));
        }
LAB_0065186c:
        iVar12 = (int)(char)((char)iVar12 + '\x01');
      } while (iVar12 < (int)uVar15 >> 0x18);
    }
    uVar6 = local_54;
    if ((*(char *)(local_64 + 2) == '\0') && ((uVar15 & 0xffff) != 0)) {
      *(short *)(local_64 + 1) = (short)uVar15;
      *(char *)((int)local_64 + 6) = (char)(uVar15 >> 0x10);
      *(char *)((int)local_64 + 7) = (char)(uVar15 >> 0x18);
      *(char *)(local_64 + 2) = (char)uVar6;
      cVar5 = local_58;
      local_74 = local_34;
      if (local_58 == '\0') {
        iVar12 = (int)((unsigned int)(local_5c) >> 16) & 0xff;
        uVar15 = local_5c;
        if (iVar12 < ((unsigned int)(local_5c) >> 24) & 0xff) {
          do {
            if ((uVar15 & 0xffff & 1 << (iVar12 - ((int)(uVar15 << 8) >> 0x18) & 0xffU)) != 0) {
              iVar7 = fn_006f14ec(local_74,iVar12);
              if (iVar7 != 0) {
                iVar13 = fn_006f4044();
                iVar7 = fn_006f4520(iVar7);
                if (iVar7 < iVar13) goto LAB_0065197c;
              }
              uVar15 = uVar15 & 0xffff0000 |
                       uVar15 & 0xffff & ~(1 << (iVar12 - ((int)(uVar15 << 8) >> 0x18) & 0xffU));
            }
LAB_0065197c:
            iVar12 = (int)(char)((char)iVar12 + '\x01');
          } while (iVar12 < (int)uVar15 >> 0x18);
        }
        ppuVar11 = local_34;
        if ((local_58 == '\0') && ((uVar15 & 0xffff) != 0)) {
          cVar3 = (char)(uVar15 >> 0x18);
          local_5c = (local_5c & ~((unsigned int)0xff << 16)) | (((unsigned int)((char)(uVar15 >> 0x10)) & 0xff) << 16);
          iVar12 = 0;
          local_6c = (undefined **)0x0;
          bVar4 = true;
          local_68 = (undefined **)0x0;
          local_64 = (undefined **)0x0;
          local_80[0] = ((unsigned int)(local_5c) >> 16) & 0xff;
          bVar1 = ((unsigned int)(local_5c) >> 16) & 0xff < cVar3;
          local_5c = uVar15;
          local_58 = cVar5;
          if (bVar1) {
            do {
              if (((uVar15 & 0xffff & 1 << ((int)local_80[0] - ((int)(uVar15 << 8) >> 0x18) & 0xffU)
                   ) != 0) && (iVar7 = fn_006f14ec(ppuVar11), iVar7 != 0)) {
                iVar7 = fn_006f4044();
                if ((bVar4) || (iVar12 < iVar7)) {
                  bVar4 = false;
                  if (local_6c != local_68) {
                    ppuVar9 = local_6c;
                    if (local_68 < local_6c) {
                      do {
                        ppuVar9 = (undefined **)((int)ppuVar9 + 1);
                      } while (ppuVar9 != local_68);
                    }
                    local_68 = local_6c;
                  }
                  iVar12 = iVar7;
                  ppuVar9 = local_68;
                  if (local_68 != local_64) goto joined_r0x00651ae4;
LAB_00651b24:
                  fn_0079aa0c(&local_6c,local_68,local_80);
                }
                else if (iVar7 == iVar12) {
                  ppuVar9 = local_68;
                  if (local_68 == local_64) goto LAB_00651b24;
joined_r0x00651ae4:
                  local_68 = (undefined **)((int)ppuVar9 + 1);
                  if (ppuVar9 != (undefined **)0x0) {
                    *(char *)ppuVar9 = local_80[0];
                  }
                }
              }
              local_80[0] = local_80[0] + '\x01';
            } while ((int)local_80[0] < (int)cVar3);
          }
          pppuVar2 = (undefined ***)((int)(uVar15 << 8) >> 0x18);
          for (pppuVar10 = pppuVar2; (int)pppuVar10 < (int)cVar3;
              pppuVar10 = (undefined ***)(int)(char)((char)pppuVar10 + '\x01')) {
            pppuVar14 = &local_6c;
            ppuVar11 = local_6c;
            while( true ) {
              if (ppuVar11 != local_68) {
                pppuVar14 = (undefined ***)(int)*(char *)ppuVar11;
              }
              if (ppuVar11 == local_68 || pppuVar14 == pppuVar10) break;
              ppuVar11 = (undefined **)((int)ppuVar11 + 1);
            }
            if (ppuVar11 == local_68) {
              uVar15 = uVar15 & 0xffff0000 |
                       uVar15 & 0xffff & ~(1 << ((int)pppuVar10 - (int)pppuVar2 & 0xffU));
            }
          }
          if ((local_58 == '\0') && ((uVar15 & 0xffff) != 0)) {
            bVar1 = true;
            local_5c = uVar15;
            local_58 = cVar5;
          }
          else {
            bVar1 = false;
          }
          ppuVar11 = local_6c;
          if (local_68 < local_6c) {
            do {
              ppuVar11 = (undefined **)((int)ppuVar11 + 1);
            } while (ppuVar11 != local_68);
          }
          fn_001008c4(local_6c,(int)local_64 - (int)local_6c,0);
          if (bVar1) {
            *(undefined2 *)(param_4 + 4) = (undefined2)local_5c;
            *(char *)(param_4 + 6) = ((unsigned int)(local_5c) >> 16) & 0xff;
            *(char *)(param_4 + 7) = ((unsigned int)(local_5c) >> 24) & 0xff;
            *(char *)(param_4 + 8) = local_58;
            return;
          }
        }
      }
    }
  }
  fn_00784dd8(local_34,param_4);
  return;
}


