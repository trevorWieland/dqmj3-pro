#include "00651f74_00652a74.h"



void fn_00652a74(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  uint unaff_r6;
  
  fn_0064fbd4();
  fn_00784690(param_1,param_4,param_1,unaff_r6 & 0xffff0000 | param_2 & 0xffff);
  return;
}



undefined4 fn_00652928(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  fn_0064fbd4();
  iVar2 = fn_00781f30(param_1,param_4);
  if ((iVar2 != 0) && (*(char *)(param_4 + 8) == '\0')) {
    iVar2 = (int)*(char *)(param_4 + 6);
    uVar1 = *(undefined1 *)(param_4 + 8);
    uVar5 = *(uint *)(param_4 + 4);
    if (iVar2 < *(char *)(param_4 + 7)) {
      do {
        if ((uVar5 & 0xffff & 1 << (iVar2 - ((int)(uVar5 << 8) >> 0x18) & 0xffU)) != 0) {
          iVar3 = fn_006f14ec(param_1,iVar2);
          if (iVar3 != 0) {
            iVar4 = fn_006f2fa8();
            iVar3 = fn_006f4520(iVar3);
            if (iVar3 < iVar4) goto LAB_00652a08;
          }
          uVar5 = uVar5 & 0xffff0000 |
                  uVar5 & 0xffff & ~(1 << (iVar2 - ((int)(uVar5 << 8) >> 0x18) & 0xffU));
        }
LAB_00652a08:
        iVar2 = (int)(char)((char)iVar2 + '\x01');
      } while (iVar2 < (int)uVar5 >> 0x18);
    }
    if ((*(char *)(param_4 + 8) == '\0') && ((uVar5 & 0xffff) != 0)) {
      *(short *)(param_4 + 4) = (short)uVar5;
      *(char *)(param_4 + 6) = (char)(uVar5 >> 0x10);
      *(char *)(param_4 + 7) = (char)(uVar5 >> 0x18);
      *(undefined1 *)(param_4 + 8) = uVar1;
      fn_00783cb0(param_1,param_4);
      return 1;
    }
  }
  return 0;
}



bool fn_00652908(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = fn_0064fed4(*param_1,1,param_3,(int)*(char *)(param_1 + 1));
  return iVar1 != 0;
}



undefined4 * fn_0065287c(undefined4 *param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 uVar5;
  int iVar6;
  
  iVar6 = 0;
  uVar5 = 0;
  iVar4 = 0;
  *param_1 = param_2;
  do {
    if (param_4 <= param_3) {
      *(undefined1 *)(param_1 + 1) = uVar5;
      return param_1;
    }
    iVar1 = fn_006f14a4(param_2,param_3);
    if (iVar1 != 0) {
      if (iVar4 != 0) {
        iVar2 = fn_006f2fa8(iVar4);
        iVar3 = fn_006f2fa8(iVar1);
        if (iVar2 <= iVar3) goto LAB_006528ec;
      }
      iVar4 = iVar1;
      iVar6 = param_3;
    }
LAB_006528ec:
    uVar5 = (undefined1)iVar6;
    param_3 = (int)(char)((char)param_3 + '\x01');
  } while( true );
}



void fn_006525a4(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  char **ppcVar2;
  uint *puVar3;
  undefined1 uVar4;
  ushort uVar5;
  bool bVar6;
  uint3 uVar7;
  short sVar8;
  short sVar9;
  int iVar10;
  char *pcVar11;
  char **ppcVar12;
  uint uVar13;
  char **ppcVar14;
  int iVar15;
  char local_60 [28];
  char *local_44;
  char *local_40;
  char *local_3c;
  undefined4 local_38;
  
  fn_00651494();
  if (*(char *)(param_4 + 8) == '\0') {
    puVar3 = (uint *)(param_4 + 4);
    uVar5 = *(ushort *)puVar3;
    local_60[0] = *(char *)(param_4 + 6);
    uVar7 = *(uint3 *)puVar3;
    uVar4 = *(undefined1 *)(param_4 + 8);
    uVar13 = *puVar3;
    bVar6 = true;
    iVar15 = 0;
    local_44 = (char *)0x0;
    local_40 = (char *)0x0;
    local_3c = (char *)0x0;
    iVar1 = (int)uVar13 >> 0x18;
    local_38 = param_1;
    if (local_60[0] < *(char *)(param_4 + 7)) {
      do {
        if ((((uint)uVar5 & 1 << ((int)local_60[0] - ((int)((uint)uVar7 << 8) >> 0x18) & 0xffU)) !=
             0) && (iVar10 = fn_006f14ec(local_38), iVar10 != 0)) {
          sVar8 = fn_006f4520();
          sVar9 = fn_006f33d4(iVar10);
          iVar10 = fn_006f4044(iVar10);
          iVar10 = iVar10 + (((int)sVar8 * (int)sVar9) / 100) * 2;
          if ((bVar6) || (iVar15 < iVar10)) {
            bVar6 = false;
            if (local_44 != local_40) {
              pcVar11 = local_44;
              if (local_40 < local_44) {
                do {
                  pcVar11 = pcVar11 + 1;
                } while (pcVar11 != local_40);
              }
              local_40 = local_44;
            }
            iVar15 = iVar10;
            pcVar11 = local_40;
            if (local_40 != local_3c) goto joined_r0x006526fc;
LAB_0065273c:
            fn_0079aa0c(&local_44,local_40,local_60);
          }
          else if (iVar10 == iVar15) {
            pcVar11 = local_40;
            if (local_40 == local_3c) goto LAB_0065273c;
joined_r0x006526fc:
            local_40 = pcVar11 + 1;
            if (pcVar11 != (char *)0x0) {
              *pcVar11 = local_60[0];
            }
          }
        }
        local_60[0] = local_60[0] + '\x01';
      } while (local_60[0] < iVar1);
    }
    ppcVar2 = (char **)((int)((uint)uVar7 << 8) >> 0x18);
    for (ppcVar12 = ppcVar2; (int)ppcVar12 < iVar1;
        ppcVar12 = (char **)(int)(char)((char)ppcVar12 + '\x01')) {
      ppcVar14 = &local_44;
      pcVar11 = local_44;
      while( true ) {
        if (pcVar11 != local_40) {
          ppcVar14 = (char **)(int)*pcVar11;
        }
        if (pcVar11 == local_40 || ppcVar14 == ppcVar12) break;
        pcVar11 = pcVar11 + 1;
      }
      if (pcVar11 == local_40) {
        uVar13 = uVar13 & 0xffff0000 |
                 uVar13 & 0xffff & ~(1 << ((int)ppcVar12 - (int)ppcVar2 & 0xffU));
      }
    }
    if ((*(char *)(param_4 + 8) == '\0') && ((uVar13 & 0xffff) != 0)) {
      *(short *)(param_4 + 4) = (short)uVar13;
      *(char *)(param_4 + 6) = (char)(uVar13 >> 0x10);
      *(char *)(param_4 + 7) = (char)(uVar13 >> 0x18);
      *(undefined1 *)(param_4 + 8) = uVar4;
    }
    pcVar11 = local_44;
    if (local_40 < local_44) {
      do {
        pcVar11 = pcVar11 + 1;
      } while (pcVar11 != local_40);
    }
    fn_001008c4(local_44,(int)local_3c - (int)local_44,0);
  }
  return;
}



void fn_006523a0(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  uint unaff_r7;
  
  fn_0064fbd4();
  fn_00784690(param_1,param_4,param_1,unaff_r7 & 0xffff0000 | param_2 & 0xffff);
  fn_007832e4(param_1,param_4);
  return;
}



bool fn_00652378(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = fn_006f358c(param_2);
  return *param_1 <= iVar1;
}



void fn_00652328(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  uint unaff_r7;
  
  fn_0064fbd4();
  fn_00784690(param_1,param_4,param_1,unaff_r7 & 0xffff0000 | param_2 & 0xffff);
  fn_00784414(param_1,param_4);
  fn_00783cb0(param_1,param_4);
  return;
}



bool fn_006522e8(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0xc);
  iVar1 = fn_0064e414(param_1,param_2,iVar3,(int)*(char *)(param_1 + 4));
  iVar2 = fn_00176dc0(iVar3);
  return *(short *)(iVar3 + 0x1c) - iVar1 <= iVar2 / 2;
}



undefined4 fn_006522b4(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = fn_006f30a8(param_2);
  if ((iVar1 == 0) && (*(char *)(param_2 + 0x7b) < '\x01')) {
    return 0;
  }
  return 1;
}



void fn_00652270(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  uint unaff_r7;
  
  fn_0064fbd4();
  fn_00784690(param_1,param_4,param_1,unaff_r7 & 0xffff0000 | param_2 & 0xffff);
  fn_007832e4(param_1,param_4);
  return;
}



void fn_00651f74(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined *local_38;
  undefined4 local_34;
  char local_30;
  int local_2c;
  
  fn_0064f714();
  local_38 = &DAT_008595d8;
  local_34 = *(uint *)(param_4 + 4);
  local_30 = *(char *)(param_4 + 8);
  iVar2 = fn_00783cb0(param_1,&local_38);
  cVar1 = local_30;
  if ((iVar2 != 0) && (local_30 == '\0')) {
    iVar2 = (int)((unsigned int)(local_34) >> 16) & 0xff;
    uVar5 = local_34;
    if (iVar2 < ((unsigned int)(local_34) >> 24) & 0xff) {
      do {
        if (((uVar5 & 0xffff & 1 << (iVar2 - ((int)(uVar5 << 8) >> 0x18) & 0xffU)) != 0) &&
           ((iVar3 = fn_006f14ec(param_1,iVar2), iVar3 == 0 || (*(char *)(iVar3 + 0x89) < '\x01')))
           ) {
          uVar5 = uVar5 & 0xffff0000 |
                  uVar5 & 0xffff & ~(1 << (iVar2 - ((int)(uVar5 << 8) >> 0x18) & 0xffU));
        }
        iVar2 = (int)(char)((char)iVar2 + '\x01');
      } while (iVar2 < (int)uVar5 >> 0x18);
    }
    if ((local_30 == '\0') && ((uVar5 & 0xffff) != 0)) {
      local_34 = uVar5;
      local_30 = cVar1;
      goto LAB_0065222c;
    }
  }
  local_34 = *(uint *)(param_4 + 4);
  local_30 = *(char *)(param_4 + 8);
  iVar2 = fn_00781f30(param_1,&local_38);
  cVar1 = local_30;
  if ((iVar2 != 0) && (local_30 == '\0')) {
    iVar2 = (int)((unsigned int)(local_34) >> 16) & 0xff;
    uVar5 = local_34;
    if (iVar2 < ((unsigned int)(local_34) >> 24) & 0xff) {
      do {
        if ((uVar5 & 0xffff & 1 << (iVar2 - ((int)(uVar5 << 8) >> 0x18) & 0xffU)) != 0) {
          iVar3 = fn_006f14ec(param_1,iVar2);
          if (iVar3 != 0) {
            local_2c = iVar3;
            iVar3 = fn_006f2fa8();
            iVar4 = fn_006f4520(local_2c);
            if (iVar4 < iVar3) goto LAB_006521cc;
          }
          uVar5 = uVar5 & 0xffff0000 |
                  uVar5 & 0xffff & ~(1 << (iVar2 - ((int)(uVar5 << 8) >> 0x18) & 0xffU));
        }
LAB_006521cc:
        iVar2 = (int)(char)((char)iVar2 + '\x01');
      } while (iVar2 < (int)uVar5 >> 0x18);
    }
    if ((local_30 == '\0') && ((uVar5 & 0xffff) != 0)) {
      local_34 = uVar5;
      local_30 = cVar1;
      iVar2 = fn_00783cb0(param_1,&local_38);
      if (iVar2 != 0) {
LAB_0065222c:
        *(undefined2 *)(param_4 + 4) = (undefined2)local_34;
        *(char *)(param_4 + 6) = ((unsigned int)(local_34) >> 16) & 0xff;
        *(char *)(param_4 + 7) = ((unsigned int)(local_34) >> 24) & 0xff;
        *(char *)(param_4 + 8) = local_30;
        return;
      }
    }
  }
  fn_007848f4(param_1,param_4);
  return;
}


