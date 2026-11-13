#include "005fccf4_005fccf4.h"



void fn_005fccf4(int param_1,int *param_2,int param_3,int param_4)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  undefined2 uVar4;
  short sVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  uint *puVar9;
  uint uVar10;
  short *psVar11;
  short *psVar12;
  byte bVar13;
  short sVar14;
  uint uVar15;
  int iVar16;
  short *psVar17;
  byte bVar18;
  byte bVar19;
  uint uVar20;
  bool bVar21;
  int local_68 [2];
  undefined4 local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  undefined1 auStack_48 [8];
  uint local_40;
  uint local_3c;
  int local_38;
  undefined4 local_34;
  
  *(undefined1 *)(param_1 + 0x2e) = 1;
  *(undefined4 *)(param_1 + 0x30) = 0;
  uVar6 = fn_00661570((int)*(short *)(param_1 + 0x1c));
  if (uVar6 == 0) {
    uVar6 = 1;
  }
  uVar7 = fn_002467b4(*(char *)(param_1 + 0x2e) + '\x01',uVar6 & 0xff);
  *(undefined4 *)(param_1 + 0x34) = uVar7;
  bVar13 = *(char *)(*param_2 + 0x2e) + *(char *)(param_2[1] + 0x2e);
  cVar3 = *(char *)(param_2[1] + 0x3c) + *(char *)(*param_2 + 0x3c);
  if (bVar13 < 0x1f) {
    bVar13 = cVar3 + 1;
  }
  else if (bVar13 < 0x4c) {
    bVar13 = cVar3 + 6;
  }
  else {
    bVar13 = cVar3 + 0xb;
  }
  if (param_3 == 5) {
    if (99 < bVar13) {
      bVar13 = 100;
    }
  }
  else if (99 < bVar13) {
    bVar13 = 99;
  }
  *(byte *)(param_1 + 0x3c) = bVar13;
  uVar6 = (uint)*(byte *)(param_2[1] + 0x3d);
  if ((uint)*(byte *)(param_2[1] + 0x3d) <= (uint)*(byte *)(*param_2 + 0x3d)) {
    uVar6 = (uint)*(byte *)(*param_2 + 0x3d);
  }
  uVar6 = uVar6 + 1;
  if (0xff < uVar6) {
    uVar6 = 0xff;
  }
  *(char *)(param_1 + 0x3d) = (char)uVar6;
  if ((bVar13 < 100) || (iVar8 = fn_00154ac8(0x463), iVar8 == 0)) {
    uVar6 = *(uint *)(param_1 + 0x40) & 0xfffffbff;
  }
  else {
    uVar6 = *(uint *)(param_1 + 0x40) | 0x400;
  }
  *(uint *)(param_1 + 0x40) = uVar6;
  if ((param_4 == 0) || (*(short *)(param_1 + 0x1c) != *(short *)(*param_2 + 0x1c))) {
    uVar4 = fn_0066128c((int)*(short *)(param_1 + 0x1c));
  }
  else {
    local_68[0] = *param_2;
    uVar4 = fn_006bf0fc(local_68,0);
  }
  *(undefined2 *)(param_1 + 0x44) = uVar4;
  fn_005fd484(param_1);
  do {
    uVar4 = fn_006617a8((int)*(short *)(param_1 + 0x1c));
    *(undefined2 *)(param_1 + 0x56) = uVar4;
    uVar6 = 1;
    *(undefined2 *)(param_1 + 0x58) = 0;
    do {
      iVar8 = param_1 + uVar6 * 4;
      uVar6 = uVar6 + 1;
      *(undefined2 *)(iVar8 + 0x56) = 0;
      *(undefined2 *)(iVar8 + 0x58) = 0;
      if (6 < uVar6) {
        uVar6 = 0;
        goto LAB_005fcee0;
      }
    } while (uVar6 != 0);
  } while( true );
  while( true ) {
    iVar8 = (int)((int)(short)(sVar5 + sVar14) +
                 ((uint)((int)(short)(sVar5 + sVar14) >> 0x1f) >> 0x1e)) >> 2;
    if (iVar8 < 10) {
      iVar8 = 10;
    }
    fn_005fdb24(param_1,uVar10,iVar8);
    uVar6 = uVar6 + 1;
    if (5 < (int)uVar6) break;
LAB_005fcee0:
    iVar8 = *param_2;
    uVar10 = uVar6 & 0xff;
    switch(uVar10) {
    case 0:
      sVar14 = *(short *)(iVar8 + 0x1e);
      iVar8 = param_2[1];
switchD_005fcf60_caseD_0:
      sVar5 = *(short *)(iVar8 + 0x1e);
      break;
    case 1:
      sVar14 = *(short *)(iVar8 + 0x20);
      iVar8 = param_2[1];
switchD_005fcf60_caseD_1:
      sVar5 = *(short *)(iVar8 + 0x20);
      break;
    case 2:
      sVar14 = *(short *)(iVar8 + 0x26);
      iVar8 = param_2[1];
switchD_005fcf60_caseD_2:
      sVar5 = *(short *)(iVar8 + 0x26);
      break;
    case 3:
      sVar14 = *(short *)(iVar8 + 0x28);
      iVar8 = param_2[1];
switchD_005fcf60_caseD_3:
      sVar5 = *(short *)(iVar8 + 0x28);
      break;
    case 4:
      sVar14 = *(short *)(iVar8 + 0x2a);
      iVar8 = param_2[1];
switchD_005fcf60_caseD_4:
      sVar5 = *(short *)(iVar8 + 0x2a);
      break;
    case 5:
      sVar14 = *(short *)(iVar8 + 0x2c);
      iVar8 = param_2[1];
switchD_005fcf60_caseD_5:
      sVar5 = *(short *)(iVar8 + 0x2c);
      break;
    default:
      iVar8 = param_2[1];
      sVar14 = 0;
      switch(uVar10) {
      case 0:
        goto switchD_005fcf60_caseD_0;
      case 1:
        goto switchD_005fcf60_caseD_1;
      case 2:
        goto switchD_005fcf60_caseD_2;
      case 3:
        goto switchD_005fcf60_caseD_3;
      case 4:
        goto switchD_005fcf60_caseD_4;
      case 5:
        goto switchD_005fcf60_caseD_5;
      default:
        sVar5 = 0;
      }
    }
  }
  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  uVar6 = 0;
  local_34 = 1;
  do {
    uVar10 = local_54;
    iVar8 = *param_2;
    uVar15 = uVar6 & 0xff;
    switch(uVar15) {
    case 0:
      sVar5 = *(short *)(iVar8 + 0x84);
      iVar8 = param_2[1];
switchD_005fd07c_caseD_0:
      sVar14 = sVar5 + *(short *)(iVar8 + 0x84);
      goto switchD_005fd104_caseD_0;
    case 1:
      sVar5 = *(short *)(iVar8 + 0x86);
      iVar8 = param_2[1];
switchD_005fd07c_caseD_1:
      sVar14 = sVar5 + *(short *)(iVar8 + 0x86);
      break;
    case 2:
      sVar5 = *(short *)(iVar8 + 0x88);
      iVar8 = param_2[1];
switchD_005fd07c_caseD_2:
      sVar14 = sVar5 + *(short *)(iVar8 + 0x88);
switchD_005fd104_caseD_0:
      sVar5 = sVar14 << 1;
      goto switchD_005fd104_default;
    case 3:
      sVar5 = *(short *)(iVar8 + 0x8a);
      iVar8 = param_2[1];
switchD_005fd07c_caseD_3:
      sVar14 = sVar5 + *(short *)(iVar8 + 0x8a);
      break;
    case 4:
      sVar5 = *(short *)(iVar8 + 0x8c);
      iVar8 = param_2[1];
switchD_005fd07c_caseD_4:
      sVar14 = sVar5 + *(short *)(iVar8 + 0x8c);
      break;
    case 5:
      sVar5 = *(short *)(iVar8 + 0x8e);
      iVar8 = param_2[1];
switchD_005fd07c_caseD_5:
      sVar14 = sVar5 + *(short *)(iVar8 + 0x8e);
      break;
    default:
      iVar8 = param_2[1];
      sVar5 = 0;
      sVar14 = 0;
      switch(uVar15) {
      case 0:
        goto switchD_005fd07c_caseD_0;
      case 1:
        goto switchD_005fd07c_caseD_1;
      case 2:
        goto switchD_005fd07c_caseD_2;
      case 3:
        goto switchD_005fd07c_caseD_3;
      case 4:
        goto switchD_005fd07c_caseD_4;
      case 5:
        goto switchD_005fd07c_caseD_5;
      default:
        sVar5 = 0;
        switch(uVar15) {
        case 0:
        case 2:
          goto switchD_005fd104_caseD_0;
        case 1:
        case 3:
        case 4:
        case 5:
          goto switchD_005fd104_caseD_1;
        }
      }
      goto switchD_005fd104_default;
    }
switchD_005fd104_caseD_1:
    sVar5 = sVar14;
switchD_005fd104_default:
    local_60 = CONCAT31(((unsigned int)(local_60) >> 8) & 0xffffff,(char)uVar6);
    local_60 = CONCAT22(sVar14,(undefined2)local_60);
    local_5c = CONCAT22(((unsigned int)(local_5c) >> 16) & 0xffff,sVar5);
    if (local_54 == local_50) {
      fn_007966e0(&local_58);
    }
    else {
      uVar15 = local_54 + 6;
      bVar21 = local_54 != 0;
      local_54 = uVar15;
      if (bVar21) {
        fn_0019bc50(uVar10,&local_60);
      }
    }
    uVar15 = local_54;
    uVar10 = local_58;
    uVar6 = uVar6 + 1;
    if (5 < (int)uVar6) {
      if (local_58 != local_54) {
        iVar8 = local_54 - local_58;
        fn_007aed00(local_58,local_54,iVar8 / 6,fn_005fe110);
        if (iVar8 < 0x61) {
          fn_007a516c(uVar10,uVar15,fn_005fe110);
        }
        else {
          fn_007a516c(uVar10,uVar10 + 0x60,fn_005fe110);
          uVar10 = uVar10 + 0x60;
          if (uVar10 != uVar15) {
            do {
              fn_0019bc50(auStack_48,uVar10);
              iVar8 = fn_005fe110(auStack_48,uVar10 - 6);
              uVar20 = uVar10 - 6;
              uVar6 = uVar10;
              while (uVar2 = uVar20, iVar8 != 0) {
                fn_0019bc50(uVar6,uVar2);
                iVar8 = fn_005fe110(auStack_48);
                uVar20 = uVar2 - 6;
                uVar6 = uVar2;
              }
              fn_0019bc50(uVar6,auStack_48);
              uVar10 = uVar10 + 6;
            } while (uVar10 != uVar15);
          }
        }
      }
      local_40 = 0;
      local_3c = 0;
      local_38 = 0;
      local_5c = (int)(local_54 - local_58) / 6;
      local_60 = 0x20;
      puVar9 = &local_5c;
      if (local_5c < 0x20) {
        puVar9 = &local_60;
      }
      uVar20 = *puVar9;
      uVar6 = fn_00100fc6(uVar20 * 6,0);
      uVar15 = local_54;
      local_40 = uVar6;
      for (uVar10 = local_58; uVar10 != uVar15; uVar10 = uVar10 + 6) {
        if (uVar6 != 0) {
          fn_0019bc50(uVar6,uVar10);
        }
        uVar6 = uVar6 + 6;
      }
      local_3c = local_40 + ((int)(local_54 - local_58) / 6) * 6;
      local_38 = local_40 + uVar20 * 6;
      fn_005fd65c(&local_40,param_1,local_34);
      uVar6 = local_40;
      if (local_3c < local_40) {
        do {
          uVar6 = uVar6 + 6;
        } while (uVar6 != local_3c);
      }
      fn_001008c4(local_40,(int)(local_38 - local_40) / 6,0);
      uVar6 = local_58;
      if (local_54 < local_58) {
        do {
          uVar6 = uVar6 + 6;
        } while (uVar6 != local_54);
      }
      fn_001008c4(local_58,(int)(local_50 - local_58) / 6,0);
      iVar8 = 0;
      do {
        iVar16 = param_1 + iVar8 * 0x20;
        uVar6 = 0;
        *(undefined2 *)(iVar16 + 0x90) = *(undefined2 *)(param_2[iVar8] + 0x1c);
        *(char *)(iVar16 + 0xae) = *(char *)(param_2[iVar8] + 0x3c) + '\x01';
        bVar13 = *(byte *)(iVar16 + 0xaf);
        bVar18 = (*(byte *)(param_2[iVar8] + 0x40) & 1) << 1;
        *(byte *)(iVar16 + 0xaf) = bVar13 & 0xfd | bVar18;
        bVar19 = (*(byte *)(param_2[iVar8] + 0xaf) & 2) << 1;
        *(byte *)(iVar16 + 0xaf) = bVar13 & 0xf9 | bVar18 | bVar19;
        *(byte *)(iVar16 + 0xaf) =
             bVar13 & 0xf1 | bVar18 | bVar19 | (*(byte *)(param_2[iVar8] + 0xcf) & 2) << 2;
        psVar11 = (short *)(iVar16 + 0x92);
        psVar17 = (short *)(param_2[iVar8] + 4);
        do {
          uVar6 = uVar6 + 1;
          psVar12 = psVar11 + 1;
          *psVar11 = *psVar17;
          bVar21 = psVar17[1] == 0;
          psVar11 = psVar12;
          psVar17 = psVar17 + 1;
        } while ((bVar21 || uVar6 < 0xb) && (!bVar21 && uVar6 != 10));
        *psVar12 = 0;
        *(undefined2 *)(iVar16 + 0xaa) = *(undefined2 *)(param_2[iVar8] + 0x90);
        piVar1 = param_2 + iVar8;
        iVar8 = iVar8 + 1;
        *(undefined2 *)(iVar16 + 0xac) = *(undefined2 *)(*piVar1 + 0xb0);
      } while (iVar8 < 2);
      return;
    }
  } while( true );
}


