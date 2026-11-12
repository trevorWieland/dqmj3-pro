#include "00652e74_006536a8.h"



void fn_006536a8(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = fn_0069212c(param_2);
  if (iVar1 != 0) {
    fn_006f1a78(*param_1,param_2,param_3,(int)*(char *)(param_1 + 1),0,2);
  }
  return;
}



void fn_00652e74(uint param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  uint *puVar1;
  undefined1 uVar2;
  ushort uVar3;
  bool bVar4;
  uint3 uVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  char **ppcVar11;
  undefined4 uVar12;
  char *pcVar13;
  char **ppcVar14;
  int iVar15;
  char **ppcVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  char *local_70;
  char *local_6c;
  char *local_68;
  char local_64 [4];
  char *local_60;
  char *local_5c;
  char *local_58;
  uint local_4c;
  uint local_40;
  uint local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  
  local_34 = param_1;
  uStack_30 = param_2;
  uStack_2c = param_3;
  iStack_28 = param_4;
  fn_0064fbd4(param_1);
  uVar18 = local_34;
  if (*(char *)(param_4 + 8) == '\0') {
    iVar17 = (int)*(char *)(param_4 + 6);
    uVar2 = *(undefined1 *)(param_4 + 8);
    uVar19 = *(uint *)(param_4 + 4);
    if (iVar17 < *(char *)(param_4 + 7)) {
      do {
        if ((uVar19 & 0xffff & 1 << (iVar17 - ((int)(uVar19 << 8) >> 0x18) & 0xffU)) != 0) {
          iVar7 = fn_006f14ec(uVar18,iVar17);
          if (iVar7 != 0) {
            iVar15 = 1;
            do {
              iVar8 = fn_0068fea8((int)(short)iVar15,(int)*(char *)(iVar7 + iVar15 + 0x5b));
              if (iVar8 != 0) goto LAB_00652f50;
              iVar15 = iVar15 + 1;
            } while (iVar15 < 0x61);
          }
          uVar19 = uVar19 & 0xffff0000 |
                   uVar19 & 0xffff & ~(1 << (iVar17 - ((int)(uVar19 << 8) >> 0x18) & 0xffU));
        }
LAB_00652f50:
        iVar17 = (int)(char)((char)iVar17 + '\x01');
      } while (iVar17 < (int)uVar19 >> 0x18);
    }
    if ((*(char *)(param_4 + 8) == '\0') && ((uVar19 & 0xffff) != 0)) {
      *(short *)(param_4 + 4) = (short)uVar19;
      *(char *)(param_4 + 6) = (char)(uVar19 >> 0x10);
      *(char *)(param_4 + 7) = (char)(uVar19 >> 0x18);
      *(undefined1 *)(param_4 + 8) = uVar2;
      local_4c = local_34;
      uVar18 = local_34;
      if (*(char *)(param_4 + 8) == '\0') {
        puVar1 = (uint *)(param_4 + 4);
        uVar3 = *(ushort *)puVar1;
        uVar5 = *(uint3 *)puVar1;
        uVar18 = *puVar1;
        local_40 = (int)uVar19 >> 0x18 & 0xffffff00U | (uint)*(byte *)(param_4 + 8);
        iVar7 = 0;
        local_58 = (char *)0x0;
        bVar4 = true;
        local_60 = (char *)0x0;
        local_5c = (char *)0x0;
        local_6c = (char *)CONCAT31(((unsigned int)(local_6c) >> 8) & 0xffffff,*(char *)(param_4 + 6));
        iVar17 = (int)uVar18 >> 0x18;
        if (*(char *)(param_4 + 6) < *(char *)(param_4 + 7)) {
          do {
            if ((((uint)uVar3 &
                 1 << ((int)(char)local_6c - ((int)((uint)uVar5 << 8) >> 0x18) & 0xffU)) != 0) &&
               (iVar15 = fn_006f14ec(local_4c), iVar15 != 0)) {
              iVar20 = 0;
              iVar8 = 1;
              do {
                iVar9 = fn_0068fea8((int)(short)iVar8,(int)*(char *)(iVar15 + iVar8 + 0x5b));
                pcVar13 = local_5c;
                if (iVar9 != 0) {
                  iVar20 = iVar20 + 1;
                }
                iVar8 = iVar8 + 1;
              } while (iVar8 < 0x61);
              if ((bVar4) || (iVar7 < iVar20)) {
                bVar4 = false;
                if (local_60 != local_5c) {
                  pcVar10 = local_60;
                  if (local_5c < local_60) {
                    do {
                      pcVar10 = pcVar10 + 1;
                    } while (pcVar10 != local_5c);
                  }
                  local_5c = local_60;
                }
                iVar7 = iVar20;
                pcVar10 = local_5c;
                if (local_5c == local_58) {
                  fn_0079aa0c(&local_60,local_5c,&local_6c,pcVar13);
                }
                else {
joined_r0x006530e4:
                  local_5c = pcVar10 + 1;
                  if (pcVar10 != (char *)0x0) {
                    *pcVar10 = (char)local_6c;
                  }
                }
              }
              else if (iVar20 == iVar7) {
                pcVar10 = local_5c;
                if (local_5c != local_58) goto joined_r0x006530e4;
                fn_0079aa0c(&local_60,local_5c,&local_6c);
              }
            }
            cVar6 = (char)local_6c + '\x01';
            local_6c = (char *)CONCAT31(((unsigned int)(local_6c) >> 8) & 0xffffff,cVar6);
          } while (cVar6 < iVar17);
        }
        ppcVar14 = (char **)((int)((uint)uVar5 << 8) >> 0x18);
        for (ppcVar11 = ppcVar14; (int)ppcVar11 < iVar17;
            ppcVar11 = (char **)(int)(char)((char)ppcVar11 + '\x01')) {
          ppcVar16 = &local_60;
          pcVar13 = local_60;
          while( true ) {
            if (pcVar13 != local_5c) {
              ppcVar16 = (char **)(int)*pcVar13;
            }
            if (pcVar13 == local_5c || ppcVar16 == ppcVar11) break;
            pcVar13 = pcVar13 + 1;
          }
          if (pcVar13 == local_5c) {
            uVar18 = uVar18 & 0xffff0000 |
                     uVar18 & 0xffff & ~(1 << ((int)ppcVar11 - (int)ppcVar14 & 0xffU));
          }
        }
        if ((*(char *)(param_4 + 8) == '\0') && ((uVar18 & 0xffff) != 0)) {
          *(short *)(param_4 + 4) = (short)uVar18;
          *(char *)(param_4 + 6) = (char)(uVar18 >> 0x10);
          *(char *)(param_4 + 7) = (char)(uVar18 >> 0x18);
          *(char *)(param_4 + 8) = (char)local_40;
        }
        pcVar13 = local_60;
        if (local_5c < local_60) {
          do {
            pcVar13 = pcVar13 + 1;
          } while (pcVar13 != local_5c);
        }
        uVar18 = fn_001008c4(local_60,(int)local_58 - (int)local_60,0);
      }
      uVar19 = local_34;
      if (*(char *)(param_4 + 8) == '\0') {
        ppcVar14 = (char **)(uVar18 & 0xffffff00);
        puVar1 = (uint *)(param_4 + 4);
        uVar3 = *(ushort *)puVar1;
        local_64[0] = *(char *)(param_4 + 6);
        uVar5 = *(uint3 *)puVar1;
        uVar2 = *(undefined1 *)(param_4 + 8);
        uVar18 = *puVar1;
        iVar7 = 0;
        bVar4 = true;
        local_70 = (char *)0x0;
        local_6c = (char *)0x0;
        local_68 = (char *)0x0;
        iVar17 = (int)uVar18 >> 0x18;
        if (local_64[0] < *(char *)(param_4 + 7)) {
          do {
            if ((((uint)uVar3 & 1 << ((int)local_64[0] - ((int)((uint)uVar5 << 8) >> 0x18) & 0xffU))
                 != 0) && (iVar15 = fn_006f14ec(uVar19), iVar15 != 0)) {
              uVar12 = fn_00176dc0();
              iVar15 = fn_00300f74(*(short *)(iVar15 + 0x1c) * 100,uVar12);
              if ((bVar4) || (iVar7 < iVar15)) {
                bVar4 = false;
                if (local_70 != local_6c) {
                  pcVar13 = local_70;
                  if (local_6c < local_70) {
                    do {
                      pcVar13 = pcVar13 + 1;
                    } while (pcVar13 != local_6c);
                  }
                  local_6c = local_70;
                }
                iVar7 = iVar15;
                pcVar13 = local_6c;
                if (local_6c != local_68) goto joined_r0x00653360;
LAB_006533a0:
                ppcVar14 = &local_6c;
                fn_0079aa0c(&local_70,local_6c,local_64);
              }
              else if (iVar15 == iVar7) {
                pcVar13 = local_6c;
                if (local_6c == local_68) goto LAB_006533a0;
joined_r0x00653360:
                local_6c = pcVar13 + 1;
                ppcVar14 = &local_6c;
                if (pcVar13 != (char *)0x0) {
                  ppcVar14 = &local_6c;
                  *pcVar13 = local_64[0];
                }
              }
            }
            local_64[0] = local_64[0] + '\x01';
          } while (local_64[0] < iVar17);
        }
        ppcVar11 = (char **)((int)((uint)uVar5 << 8) >> 0x18);
        for (ppcVar16 = ppcVar11; (int)ppcVar16 < iVar17;
            ppcVar16 = (char **)(int)(char)((char)ppcVar16 + '\x01')) {
          pcVar13 = local_70;
          while( true ) {
            if (pcVar13 != local_6c) {
              ppcVar14 = (char **)(int)*pcVar13;
            }
            if (pcVar13 == local_6c || ppcVar14 == ppcVar16) break;
            pcVar13 = pcVar13 + 1;
          }
          if (pcVar13 == local_6c) {
            ppcVar14 = (char **)(uVar18 & 0xffff0000);
            uVar18 = (uint)ppcVar14 |
                     uVar18 & 0xffff & ~(1 << ((int)ppcVar16 - (int)ppcVar11 & 0xffU));
          }
        }
        if ((*(char *)(param_4 + 8) == '\0') && ((uVar18 & 0xffff) != 0)) {
          *(short *)(param_4 + 4) = (short)uVar18;
          *(char *)(param_4 + 6) = (char)(uVar18 >> 0x10);
          *(char *)(param_4 + 7) = (char)(uVar18 >> 0x18);
          *(undefined1 *)(param_4 + 8) = uVar2;
        }
        pcVar13 = local_70;
        if (local_6c < local_70) {
          do {
            pcVar13 = pcVar13 + 1;
          } while (pcVar13 != local_6c);
        }
        fn_001008c4(local_70,(int)local_68 - (int)local_70,0);
      }
      fn_00782e1c(local_34,param_4);
    }
  }
  return;
}


