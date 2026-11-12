#include "007aed00_007af2a4.h"



/* WARNING: Removing unreachable block (ram,0x007af3cc) */
/* WARNING: Removing unreachable block (ram,0x007af3d8) */
/* WARNING: Removing unreachable block (ram,0x007af3e4) */
/* WARNING: Removing unreachable block (ram,0x007af3e8) */
/* WARNING: Removing unreachable block (ram,0x007af3ec) */
/* WARNING: Removing unreachable block (ram,0x007af3f0) */
/* WARNING: Removing unreachable block (ram,0x007af430) */

void fn_007af2a4(uint *param_1,uint *param_2,int param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  
  if ((int)param_2 - (int)param_1 < 0x1c1) {
    return;
  }
  do {
    if (param_3 == 0) {
      uVar3 = (int)param_2 - (int)param_1;
      if (0x37 < (int)uVar3) {
        iVar6 = (int)((longlong)(int)uVar3 * -0x6db6db6d + ((ulonglong)uVar3 << 0x20) >> 0x20);
        iVar5 = (iVar6 >> 4) - (iVar6 >> 0x1f);
        iVar6 = (iVar5 + -2) / 2;
        while( true ) {
          puVar1 = param_1 + iVar6 * 7;
          fn_007a168c(param_1,iVar6,iVar5,*puVar1,puVar1[1],puVar1[2],puVar1[3],puVar1[4],puVar1[5]
                       ,puVar1[6]);
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
        }
      }
      while (0x1c < (int)uVar3) {
        if (param_1 != param_2) {
          uVar3 = param_1[1];
          uVar14 = param_1[2];
          uVar15 = param_1[3];
          uVar16 = param_1[4];
          uVar17 = param_1[5];
          uVar18 = param_1[6];
          uVar7 = param_2[-7];
          uVar11 = param_2[-6];
          uVar12 = param_2[-5];
          uVar13 = param_2[-4];
          uVar8 = param_2[-3];
          uVar9 = param_2[-2];
          uVar10 = param_2[-1];
          param_2[-7] = *param_1;
          param_2[-6] = uVar3;
          param_2[-5] = uVar14;
          param_2[-4] = uVar15;
          param_2[-3] = uVar16;
          param_2[-2] = uVar17;
          param_2[-1] = uVar18;
          uVar3 = (int)(param_2 + -7) - (int)param_1;
          iVar6 = (int)((longlong)(int)uVar3 * -0x6db6db6d + ((ulonglong)uVar3 << 0x20) >> 0x20);
          fn_007a168c(param_1,0,(iVar6 >> 4) - (iVar6 >> 0x1f),uVar7,uVar11,uVar12,uVar13,uVar8,
                       uVar9,uVar10);
        }
        param_2 = param_2 + -7;
        uVar3 = (int)param_2 - (int)param_1;
      }
      return;
    }
    iVar6 = (int)((longlong)((int)param_2 - (int)param_1) * -0x6db6db6d +
                  ((ulonglong)(uint)((int)param_2 - (int)param_1) << 0x20) >> 0x20);
    uVar3 = *param_1;
    puVar1 = param_2 + -7;
    puVar4 = param_1 + ((iVar6 >> 5) - (iVar6 >> 0x1f)) * 7;
    if (uVar3 == 0) goto LAB_007af4cc;
    uVar7 = *puVar4;
    if (uVar7 == 0) {
LAB_007af338:
      if ((uVar3 == 0) || ((*puVar1 != 0 && (uVar3 == 0 || *puVar1 <= uVar3)))) {
LAB_007af4c4:
        puVar1 = param_1;
      }
    }
    else {
      if (uVar3 == 0) {
LAB_007af4cc:
        uVar3 = *puVar4;
        if ((uVar3 != 0) && ((*puVar1 == 0 || (uVar3 != 0 && uVar3 < *puVar1)))) goto LAB_007af4f4;
      }
      else {
        if (uVar7 <= uVar3) {
          if ((*puVar1 == 0) || (uVar3 != 0 && uVar3 < *puVar1)) goto LAB_007af4c4;
          goto LAB_007af4cc;
        }
        if ((*puVar1 != 0) && (uVar7 == 0 || *puVar1 <= uVar7)) goto LAB_007af338;
      }
      puVar1 = puVar4;
    }
LAB_007af4f4:
    uVar3 = *puVar1;
    puVar1 = param_2;
    puVar4 = param_1;
LAB_007af4f8:
    for (; (uVar7 = *puVar4, uVar7 != 0 && ((uVar3 == 0 || (uVar7 != 0 && uVar7 < uVar3))));
        puVar4 = puVar4 + 7) {
    }
    do {
      puVar2 = puVar1;
      puVar1 = puVar2 + -7;
      if (uVar3 == 0) break;
    } while ((*puVar1 == 0) || (uVar3 != 0 && uVar3 < *puVar1));
    if (puVar4 < puVar1) {
      uVar14 = puVar2[-6];
      uVar15 = puVar2[-5];
      uVar16 = puVar2[-4];
      uVar17 = puVar2[-3];
      uVar18 = puVar2[-2];
      uVar19 = puVar2[-1];
      uVar8 = puVar4[1];
      uVar9 = puVar4[2];
      uVar10 = puVar4[3];
      uVar11 = puVar4[4];
      uVar12 = puVar4[5];
      uVar13 = puVar4[6];
      *puVar4 = *puVar1;
      puVar4[1] = uVar14;
      puVar4[2] = uVar15;
      puVar4[3] = uVar16;
      puVar4[4] = uVar17;
      puVar4[5] = uVar18;
      puVar4[6] = uVar19;
      puVar4 = puVar4 + 7;
      *puVar1 = uVar7;
      puVar2[-6] = uVar8;
      puVar2[-5] = uVar9;
      puVar2[-4] = uVar10;
      puVar2[-3] = uVar11;
      puVar2[-2] = uVar12;
      puVar2[-1] = uVar13;
      puVar1 = puVar2 + -7;
      goto LAB_007af4f8;
    }
    param_3 = param_3 / 2;
    fn_007af2a4(puVar4,param_2,param_3);
    param_2 = puVar4;
    if ((int)puVar4 - (int)param_1 < 0x1c1) {
      return;
    }
  } while( true );
}



void fn_007aed00(uint param_1,uint param_2,int param_3,code *param_4)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  undefined8 uVar12;
  undefined1 auStack_7c [8];
  uint local_74;
  undefined4 local_70;
  int local_6c;
  int local_68;
  code *local_64;
  int local_60;
  uint local_5c;
  undefined4 local_58;
  int local_54;
  int local_4c;
  undefined8 local_44;
  uint local_3c;
  code *local_38;
  
  if (0x60 < (int)(param_2 - param_1)) {
    while (param_3 != 0) {
      uVar10 = param_1 + ((int)(param_2 - param_1) / 0xc) * 6;
      iVar2 = (*param_4)(param_1,uVar10);
      if (iVar2 == 0) {
        iVar2 = (*param_4)(param_1,param_2 - 6);
        if (iVar2 == 0) {
          iVar2 = (*param_4)(uVar10,param_2 - 6);
          if (iVar2 != 0) goto LAB_007af1d0;
        }
        else {
LAB_007af1b4:
          uVar10 = param_1;
        }
      }
      else {
        iVar2 = (*param_4)(uVar10);
        if (iVar2 == 0) {
          iVar2 = (*param_4)(param_1,param_2 - 6);
          if (iVar2 == 0) goto LAB_007af1b4;
LAB_007af1d0:
          uVar10 = param_2 - 6;
        }
      }
      fn_0019bc50(auStack_7c,uVar10);
      uVar10 = param_1;
      uVar7 = param_2;
      while( true ) {
        iVar2 = (*param_4)(uVar10,auStack_7c);
        while (iVar2 != 0) {
          uVar10 = uVar10 + 6;
          iVar2 = (*param_4)(uVar10,auStack_7c);
        }
        do {
          uVar7 = uVar7 - 6;
          iVar2 = (*param_4)(auStack_7c,uVar7);
        } while (iVar2 != 0);
        if (uVar7 <= uVar10) break;
        fn_0019bc50(&local_74,uVar10);
        fn_0019bc50(uVar10,uVar7);
        fn_0019bc50(uVar7,&local_74);
        uVar10 = uVar10 + 6;
      }
      param_3 = param_3 / 2;
      fn_007aed00(uVar10,param_2,param_3,param_4);
      param_2 = uVar10;
      if ((int)(uVar10 - param_1) < 0x61) {
        return;
      }
    }
    local_60 = param_2 - param_1;
    local_74 = param_1;
    local_64 = param_4;
    local_5c = param_2;
    local_3c = param_2;
    if (0xb < local_60) {
      local_4c = local_60 / 6;
      iVar2 = (local_4c + -2) / 2;
      local_38 = param_4;
      do {
        iVar9 = local_4c;
        fn_0019bc50(&local_70,param_1 + iVar2 * 6);
        pcVar1 = local_38;
        iVar6 = iVar2;
        while( true ) {
          iVar4 = iVar6 * 2;
          iVar5 = iVar4 + 2;
          if (iVar9 <= iVar5) break;
          iVar3 = param_1 + iVar5 * 6;
          iVar3 = (*pcVar1)(iVar3,iVar3 + -6);
          if (iVar3 != 0) {
            iVar5 = iVar4 + 1;
          }
          fn_0019bc50(param_1 + iVar6 * 6,param_1 + iVar5 * 6);
          iVar6 = iVar5;
        }
        if (iVar5 == iVar9) {
          fn_0019bc50(param_1 + iVar6 * 6,param_1 + iVar5 * 6 + -6);
          iVar6 = iVar4 + 1;
        }
        local_58 = local_70;
        local_54 = local_6c;
        while (iVar9 = (iVar6 + -1) / 2, iVar2 < iVar6) {
          iVar5 = param_1 + iVar9 * 6;
          iVar4 = (*pcVar1)(iVar5,&local_58);
          if (iVar4 == 0) break;
          fn_0019bc50(param_1 + iVar6 * 6,iVar5);
          iVar6 = iVar9;
        }
        fn_0019bc50(param_1 + iVar6 * 6,&local_58);
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
      } while( true );
    }
    uVar10 = local_74;
    pcVar1 = local_64;
    uVar7 = local_3c;
    iVar2 = local_60;
    if (local_3c < local_5c) {
      local_68 = local_60 / 6;
      uVar8 = local_3c;
      do {
        iVar2 = (*local_64)(uVar8,local_74);
        uVar10 = local_74;
        if (iVar2 != 0) {
          fn_0019bc50(&local_44,uVar8);
          pcVar1 = local_64;
          fn_0019bc50(uVar8,uVar10);
          iVar2 = local_68;
          iVar6 = 0;
          iVar4 = 2;
          iVar9 = iVar6;
          uVar12 = local_44;
          if (2 < local_68) {
            do {
              iVar6 = uVar10 + iVar4 * 6;
              iVar5 = (*pcVar1)(iVar6,iVar6 + -6);
              iVar6 = iVar4;
              if (iVar5 != 0) {
                iVar6 = iVar4 + -1;
              }
              fn_0019bc50(uVar10 + iVar9 * 6,uVar10 + iVar6 * 6);
              iVar4 = iVar6 * 2 + 2;
              iVar9 = iVar6;
            } while (iVar4 < iVar2);
          }
          if (iVar4 == iVar2) {
            fn_0019bc50(uVar10 + iVar6 * 6,uVar10 + iVar4 * 6 + -6);
            iVar6 = iVar4 + -1;
          }
          local_58 = (undefined4)uVar12;
          local_54 = (int)((ulonglong)uVar12 >> 0x20);
          while (iVar2 = (iVar6 + -1) / 2, 0 < iVar6) {
            iVar9 = uVar10 + iVar2 * 6;
            iVar4 = (*pcVar1)(iVar9,&local_58);
            if (iVar4 == 0) break;
            fn_0019bc50(uVar10 + iVar6 * 6,iVar9);
            iVar6 = iVar2;
          }
          fn_0019bc50(uVar10 + iVar6 * 6,&local_58);
        }
        uVar8 = uVar8 + 6;
        uVar10 = local_74;
        pcVar1 = local_64;
        uVar7 = local_3c;
        iVar2 = local_60;
      } while (uVar8 < local_5c);
    }
    while (uVar8 = local_74, 6 < iVar2) {
      bVar11 = local_74 != uVar7;
      local_74 = uVar10;
      local_64 = pcVar1;
      if (bVar11) {
        iVar2 = uVar7 - 6;
        fn_0019bc50(&local_6c,iVar2);
        fn_0019bc50(iVar2,uVar8);
        iVar6 = 0;
        iVar2 = (int)(iVar2 - uVar8) / 6;
        uVar12 = CONCAT44(local_6c,local_68);
        iVar4 = 2;
        local_54 = 0;
        iVar9 = iVar6;
        if (2 < iVar2) {
          do {
            iVar6 = uVar8 + iVar4 * 6;
            iVar5 = (*pcVar1)(iVar6,iVar6 + -6);
            iVar6 = iVar4;
            if (iVar5 != 0) {
              iVar6 = iVar4 + -1;
            }
            fn_0019bc50(uVar8 + iVar9 * 6,uVar8 + iVar6 * 6);
            iVar4 = iVar6 * 2 + 2;
            iVar9 = iVar6;
          } while (iVar4 < iVar2);
        }
        if (iVar4 == iVar2) {
          fn_0019bc50(uVar8 + iVar6 * 6,uVar8 + iVar4 * 6 + -6);
          iVar6 = iVar4 + -1;
        }
        iVar2 = local_54;
        local_60 = (int)((ulonglong)uVar12 >> 0x20);
        local_5c = (uint)uVar12;
        while (iVar9 = (iVar6 + -1) / 2, iVar2 < iVar6) {
          iVar5 = uVar8 + iVar9 * 6;
          iVar4 = (*pcVar1)(iVar5,&local_60);
          if (iVar4 == 0) break;
          fn_0019bc50(uVar8 + iVar6 * 6,iVar5);
          iVar6 = iVar9;
        }
        fn_0019bc50(uVar8 + iVar6 * 6,&local_60);
      }
      uVar7 = uVar7 - 6;
      uVar10 = local_74;
      pcVar1 = local_64;
      local_74 = uVar8;
      iVar2 = uVar7 - uVar8;
    }
  }
  return;
}


