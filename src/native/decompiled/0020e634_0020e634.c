#include "0020e634_0020e634.h"



void fn_0020e634(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  short sVar4;
  short sVar5;
  int *piVar6;
  uint uVar7;
  short sVar8;
  uint uVar9;
  int iVar10;
  bool bVar11;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  int local_44;
  undefined1 local_40 [2];
  short local_3e;
  short local_3c;
  undefined4 local_38;
  int local_34;
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [8];
  
  uVar9 = 0;
  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  do {
    uVar7 = uVar9 & 0xff;
    if (uVar7 == param_2) goto LAB_0020e740;
    switch(uVar7) {
    case 0:
      sVar4 = *(short *)(param_1 + 0x84);
      goto switchD_0020e6c4_caseD_0;
    case 1:
      sVar4 = *(short *)(param_1 + 0x86);
      break;
    case 2:
      sVar4 = *(short *)(param_1 + 0x88);
switchD_0020e6c4_caseD_0:
      sVar8 = sVar4 << 1;
      sVar5 = sVar4;
      goto switchD_0020e6c4_default;
    case 3:
      sVar4 = *(short *)(param_1 + 0x8a);
      break;
    case 4:
      sVar4 = *(short *)(param_1 + 0x8c);
      break;
    case 5:
      sVar4 = *(short *)(param_1 + 0x8e);
      break;
    default:
      sVar5 = 0;
      sVar8 = 0;
      sVar4 = 0;
      switch(uVar7) {
      case 0:
      case 2:
        goto switchD_0020e6c4_caseD_0;
      case 1:
      case 3:
      case 4:
      case 5:
        goto switchD_0020e6c4_caseD_1;
      }
      goto switchD_0020e6c4_default;
    }
switchD_0020e6c4_caseD_1:
    sVar5 = sVar4;
    sVar8 = sVar4;
switchD_0020e6c4_default:
    local_34 = CONCAT22(((unsigned int)(local_34) >> 16) & 0xffff,sVar8);
    local_38 = CONCAT31(((unsigned int)(local_38) >> 8) & 0xffffff,(char)uVar9);
    local_38 = CONCAT22(sVar5,(undefined2)local_38);
    if (local_54 == local_50) {
      fn_007966e0(&local_58,local_54,&local_38);
    }
    else {
      uVar7 = local_54 + 6;
      bVar11 = local_54 != 0;
      local_54 = uVar7;
      if (bVar11) {
        fn_0019bc50();
      }
    }
LAB_0020e740:
    uVar2 = local_54;
    uVar7 = local_58;
    uVar9 = uVar9 + 1;
    if (5 < (int)uVar9) {
      if (local_58 != local_54) {
        iVar10 = local_54 - local_58;
        fn_007aed00(local_58,local_54,iVar10 / 6,fn_005fe110);
        if (iVar10 < 0x61) {
          fn_007a516c(uVar7,uVar2,fn_005fe110);
        }
        else {
          fn_007a516c(uVar7,uVar7 + 0x60,fn_005fe110);
          uVar7 = uVar7 + 0x60;
          if (uVar7 != uVar2) {
            do {
              fn_0019bc50(&local_38,uVar7);
              iVar10 = fn_005fe110(&local_38);
              uVar3 = uVar7 - 6;
              uVar9 = uVar7;
              while (uVar1 = uVar3, iVar10 != 0) {
                fn_0019bc50(uVar9,uVar1);
                iVar10 = fn_005fe110(&local_38,uVar1 - 6);
                uVar3 = uVar1 - 6;
                uVar9 = uVar1;
              }
              fn_0019bc50(uVar9,&local_38);
              uVar7 = uVar7 + 6;
            } while (uVar7 != uVar2);
          }
        }
      }
      uVar9 = local_54;
      switch(param_2) {
      case 0:
        local_3e = *(short *)(param_1 + 0x84);
        break;
      case 1:
        local_3e = *(short *)(param_1 + 0x86);
        break;
      case 2:
        local_3e = *(short *)(param_1 + 0x88);
        break;
      case 3:
        local_3e = *(short *)(param_1 + 0x8a);
        break;
      case 4:
        local_3e = *(short *)(param_1 + 0x8c);
        break;
      case 5:
        local_3e = *(short *)(param_1 + 0x8e);
        break;
      default:
        local_3e = 0;
      }
      local_3c = 0;
      switch(param_2) {
      case 0:
      case 2:
        local_3c = local_3e << 1;
        break;
      case 1:
      case 3:
      case 4:
      case 5:
        local_3c = local_3e;
      }
      local_40[0] = (undefined1)param_2;
      if ((local_54 == local_50) || (local_54 != local_58)) {
        fn_007966e0(&local_58,local_58);
      }
      else {
        uVar7 = local_54 + 6;
        bVar11 = local_54 != 0;
        local_54 = uVar7;
        if (bVar11) {
          fn_0019bc50(uVar9,local_40);
        }
      }
      local_44 = 0;
      local_4c = 0;
      local_48 = 0;
      local_38 = (int)(local_54 - local_58) / 6;
      local_34 = 0x20;
      piVar6 = &local_38;
      if (local_38 < 0x20) {
        piVar6 = &local_34;
      }
      iVar10 = *piVar6;
      uVar9 = fn_00100fc6(iVar10 * 6,0);
      uVar2 = local_54;
      local_4c = uVar9;
      for (uVar7 = local_58; uVar7 != uVar2; uVar7 = uVar7 + 6) {
        if (uVar9 != 0) {
          fn_0019bc50(uVar9,uVar7);
        }
        uVar9 = uVar9 + 6;
      }
      local_48 = local_4c + ((int)(local_54 - local_58) / 6) * 6;
      local_44 = local_4c + iVar10 * 6;
      fn_005fd65c(&local_4c,param_1,0);
      uVar9 = local_4c;
      if (local_48 < local_4c) {
        do {
          uVar9 = uVar9 + 6;
        } while (uVar9 != local_48);
      }
      fn_001008c4(local_4c,(int)(local_44 - local_4c) / 6,0);
      fn_0020bbc4(auStack_30,param_1);
      iVar10 = fn_006c0114(auStack_2c);
      if (*(short *)(param_1 + 0x24) <= iVar10) {
        iVar10 = (int)*(short *)(param_1 + 0x24);
      }
      *(short *)(param_1 + 0x24) = (short)iVar10;
      iVar10 = fn_006c0028(auStack_2c);
      if (*(short *)(param_1 + 0x22) <= iVar10) {
        iVar10 = (int)*(short *)(param_1 + 0x22);
      }
      *(short *)(param_1 + 0x22) = (short)iVar10;
      uVar9 = local_58;
      if (local_54 < local_58) {
        do {
          uVar9 = uVar9 + 6;
        } while (uVar9 != local_54);
      }
      fn_001008c4(local_58,(int)(local_50 - local_58) / 6,0);
      return;
    }
  } while( true );
}


