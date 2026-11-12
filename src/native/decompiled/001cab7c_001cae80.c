#include "001cab7c_001cae80.h"



void fn_001cae80(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  undefined **ppuVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  uint *puVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int iVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined1 auStack_c8 [128];
  undefined4 *local_48;
  int local_44;
  uint local_40;
  int iStack_30;
  undefined **local_2c;
  int local_28;
  
  *(int *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x10);
  if (param_3 == 0) {
    local_2c = &PTR_s_bf_O00_08_007c8998;
    local_28 = 2;
  }
  else {
    local_2c = (undefined **)&DAT_007c898c;
    local_28 = 1;
  }
  iVar16 = 0;
  iStack_30 = param_1;
  if (local_28 != 0) {
    do {
      ppuVar10 = local_2c + iVar16 * 3;
      uVar12 = 0;
      uVar15 = 0xffffffff;
      fn_00101a50(auStack_c8,0x80,L"rom:/data/Battle/Map/%s.bch",*ppuVar10);
      uVar1 = fn_003b80c8(*(undefined4 *)(param_1 + 0xc),auStack_c8,1,0);
      iVar2 = fn_00145b00(8,&DAT_00812c8c);
      if (iVar2 == 0) {
        uVar14 = 0;
      }
      else {
        uVar14 = fn_005efdbc();
      }
      uVar3 = fn_003b7324(*(undefined4 *)(param_1 + 0xc),uVar1);
      fn_0069ee40(uVar14,uVar3,0);
      if (ppuVar10[2] != (undefined *)0x0) {
        fn_00101a50(auStack_c8,0x80,L"rom:/data/Battle/Map/%s.bch");
        uVar15 = fn_003b80c8(*(undefined4 *)(param_1 + 0xc),auStack_c8,1,0);
        iVar2 = fn_00145b00(8,&DAT_00812c8c);
        uVar12 = 0;
        if (iVar2 != 0) {
          uVar12 = fn_005efdbc();
        }
        uVar3 = fn_003b7324(*(undefined4 *)(param_1 + 0xc),uVar15);
        fn_0069ee40(uVar12,uVar3,0);
        iVar2 = fn_005ef124(uVar12);
        if (0 < iVar2) {
          fn_0017fd4c(uVar12);
        }
        uVar3 = fn_0017fde4(uVar12);
        local_44 = fn_00190fb4(uVar3,(char *)&DAT_001cb3cc);
        if (local_44 != 0xffff) {
          local_48 = (undefined4 *)0xffffff;
          uVar3 = fn_0017fde4(uVar12);
          fn_0017fc08(uVar3,local_44,&local_48);
        }
      }
      fn_00101a50(auStack_c8,0x80,L"rom:/data/Battle/Map/%s.bch",ppuVar10[1]);
      local_44 = fn_003b80c8(*(undefined4 *)(param_1 + 0xc),auStack_c8,1,0);
      puVar11 = *(undefined4 **)(param_1 + 0x1c);
      puVar13 = (uint *)(param_1 + 0x18);
      if (puVar11 == *(undefined4 **)(param_1 + 0x20)) {
        uVar5 = (int)((int)puVar11 - *puVar13) / 0x14;
        if (uVar5 < (uint)((int)((int)*(undefined4 **)(param_1 + 0x20) - *puVar13) / 0x14)) {
          *(undefined4 **)(param_1 + 0x1c) = puVar11 + 5;
          if (puVar11 != (undefined4 *)0x0) {
            *puVar11 = puVar11[-5];
            puVar11[1] = puVar11[-4];
            puVar11[2] = puVar11[-3];
            puVar11[3] = puVar11[-2];
            puVar11[4] = puVar11[-1];
          }
          puVar6 = puVar11 + -5;
          puVar7 = puVar11;
          if (puVar11 < puVar6) {
            if (0 < (int)puVar6 - (int)puVar11) {
              uVar5 = ((int)puVar6 - (int)puVar11) / 0x14;
              if ((uVar5 & 1) != 0) {
                puVar6 = puVar11 + -10;
                puVar7 = puVar11 + -5;
                *puVar7 = *puVar6;
                puVar11[-4] = puVar11[-9];
                puVar11[-3] = puVar11[-8];
                puVar11[-2] = puVar11[-7];
                puVar11[-1] = puVar11[-6];
              }
              for (iVar2 = (int)uVar5 >> 1; iVar2 != 0; iVar2 = iVar2 + -1) {
                uVar3 = puVar6[-4];
                uVar17 = puVar6[-3];
                uVar18 = puVar6[-2];
                uVar19 = puVar6[-1];
                puVar7[-5] = puVar6[-5];
                puVar7[-4] = uVar3;
                puVar7[-3] = uVar17;
                puVar7[-2] = uVar18;
                puVar7[-1] = uVar19;
                uVar3 = puVar6[-9];
                uVar17 = puVar6[-8];
                uVar18 = puVar6[-7];
                uVar19 = puVar6[-6];
                puVar7[-10] = puVar6[-10];
                puVar7[-9] = uVar3;
                puVar7[-8] = uVar17;
                puVar7[-7] = uVar18;
                puVar7[-6] = uVar19;
                puVar7 = puVar7 + -10;
                puVar6 = puVar6 + -10;
              }
            }
          }
          else {
            while (puVar11 != puVar6) {
              uVar3 = puVar6[-4];
              uVar17 = puVar6[-3];
              uVar18 = puVar6[-2];
              uVar19 = puVar6[-1];
              puVar7[-5] = puVar6[-5];
              puVar7[-4] = uVar3;
              puVar7[-3] = uVar17;
              puVar7[-2] = uVar18;
              puVar7[-1] = uVar19;
              puVar7 = puVar7 + -5;
              puVar6 = puVar6 + -5;
            }
          }
          *puVar11 = uVar1;
          puVar11[1] = uVar15;
          puVar11[4] = uVar12;
          puVar11[2] = local_44;
          puVar11[3] = uVar14;
        }
        else {
          uVar9 = uVar5 + (uVar5 >> 1) + (uVar5 >> 3);
          local_40 = uVar5 + 0x20;
          if (uVar5 + 0x20 <= uVar9) {
            local_40 = uVar9;
          }
          local_48 = (undefined4 *)fn_00100fc6(local_40 * 0x14,0);
          puVar7 = local_48;
          for (puVar6 = (undefined4 *)*puVar13; puVar6 != puVar11; puVar6 = puVar6 + 5) {
            if (puVar7 != (undefined4 *)0x0) {
              uVar3 = puVar6[1];
              uVar17 = puVar6[2];
              uVar18 = puVar6[3];
              uVar19 = puVar6[4];
              *puVar7 = *puVar6;
              puVar7[1] = uVar3;
              puVar7[2] = uVar17;
              puVar7[3] = uVar18;
              puVar7[4] = uVar19;
            }
            puVar7 = puVar7 + 5;
          }
          puVar6 = local_48 + ((int)((int)puVar11 - *puVar13) / 0x14) * 5;
          if (puVar6 != (undefined4 *)0x0) {
            *puVar6 = uVar1;
            puVar6[1] = uVar15;
            puVar6[4] = uVar12;
            puVar6[2] = local_44;
            puVar6[3] = uVar14;
          }
          puVar7 = *(undefined4 **)(param_1 + 0x1c);
          puVar6 = local_48 + ((int)((int)puVar11 - *puVar13) / 0x14) * 5;
          for (; puVar11 != puVar7; puVar11 = puVar11 + 5) {
            puVar4 = puVar6 + 5;
            if (puVar4 != (undefined4 *)0x0) {
              uVar12 = puVar11[1];
              uVar1 = puVar11[2];
              uVar15 = puVar11[3];
              uVar14 = puVar11[4];
              *puVar4 = *puVar11;
              puVar6[6] = uVar12;
              puVar6[7] = uVar1;
              puVar6[8] = uVar15;
              puVar6[9] = uVar14;
            }
            puVar6 = puVar4;
          }
          uVar9 = *puVar13;
          uVar8 = *(uint *)(param_1 + 0x1c);
          uVar5 = uVar9;
          if (uVar8 < uVar9) {
            do {
              uVar5 = uVar5 + 0x14;
            } while (uVar5 != uVar8);
          }
          fn_001008c4(uVar9,(int)(*(int *)(param_1 + 0x20) - uVar9) / 0x14,0);
          *puVar13 = (uint)local_48;
          *(undefined4 **)(param_1 + 0x1c) = local_48 + ((int)(uVar8 - uVar9) / 0x14) * 5 + 5;
          *(undefined4 **)(param_1 + 0x20) = local_48 + local_40 * 5;
        }
      }
      else {
        *(undefined4 **)(param_1 + 0x1c) = puVar11 + 5;
        if (puVar11 != (undefined4 *)0x0) {
          *puVar11 = uVar1;
          puVar11[1] = uVar15;
          puVar11[4] = uVar12;
          puVar11[2] = local_44;
          puVar11[3] = uVar14;
        }
      }
      iVar16 = iVar16 + 1;
    } while (iVar16 < local_28);
  }
  return;
}



void fn_001cad2c(uint param_1)

{
  int iVar1;
  
  if (param_1 < 6) {
    iVar1 = (int)(short)(&DAT_007c4634)[param_1];
  }
  else {
    iVar1 = 0;
  }
  fn_0069ccdc(iVar1);
  return;
}



int fn_001cad10(uint param_1)

{
  int iVar1;
  
  if (param_1 < 6) {
    iVar1 = (int)(short)(&DAT_007c4634)[param_1];
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}



undefined4 fn_001cacc4(int param_1)

{
  if (param_1 == 0x1e) {
    return 3;
  }
  if (param_1 < 0x1f) {
    if (param_1 == 2) {
      return 1;
    }
    if (param_1 == 0x1d) {
      return 2;
    }
  }
  else {
    if (param_1 == 0x1f) {
      return 4;
    }
    if (param_1 == 0x20) {
      return 5;
    }
  }
  return 0;
}



void fn_001caca8(uint param_1)

{
  int iVar1;
  
  if (param_1 < 6) {
    iVar1 = (int)(short)(&DAT_007c4634)[param_1];
  }
  else {
    iVar1 = 0;
  }
  fn_0069cd0c(iVar1);
  return;
}



void fn_001cac80(int param_1)

{
  if (param_1 != 3 && param_1 != 4) {
    fn_002cd59c();
  }
  return;
}



void fn_001cac64(int param_1)

{
  if (param_1 == 3 || param_1 == 4) {
    return;
  }
  fn_002cd59c();
  return;
}



void fn_001cabcc(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint in_fpscr;
  
  if (param_1 != 3 && param_1 != 4) {
    fn_002cd59c();
  }
  if ((param_1 == 2) && (iVar1 = fn_00242a50(param_2), iVar1 == 1)) {
    VectorSignedToFloat(param_3,(byte)(in_fpscr >> 0x16) & 3);
  }
  else {
    VectorSignedToFloat(param_3,(byte)(in_fpscr >> 0x16) & 3);
  }
  return;
}



undefined4 fn_001cab7c(undefined4 param_1)

{
  switch(param_1) {
  case 0:
  case 1:
    return 1;
  case 2:
    return 2;
  case 3:
    return 3;
  case 4:
    return 4;
  default:
    return 0;
  }
}


