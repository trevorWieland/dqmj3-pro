#include "0030ded0_0030e4dc.h"



uint fn_0030e4dc(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  while (((iVar2 = param_1 + uVar1 * 0x2ec, *(short *)(iVar2 + 8) == 0 ||
          (*(int *)(iVar2 + 0x2d0) == 1)) || (*(int *)(iVar2 + 0x138) != param_2))) {
    uVar1 = uVar1 + 1;
    if (4 < uVar1) {
      return 0xffffffff;
    }
  }
  return uVar1;
}



undefined4 fn_0030e498(int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  do {
    iVar2 = *(int *)(param_1 + uVar1 * 0x2ec + 0x138);
    if ((iVar2 == 1 || iVar2 == 3) || iVar2 == 4) {
      return 1;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 5);
  return 0;
}



undefined4 fn_0030e41c(int param_1)

{
  int iVar1;
  uint unaff_r4;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  
  uVar4 = 0;
  uVar2 = 0;
  do {
    iVar3 = param_1 + uVar2 * 0x2ec;
    bVar5 = *(short *)(iVar3 + 8) != 0;
    if (bVar5) {
      unaff_r4 = uVar2 + 1;
    }
    if (bVar5 && unaff_r4 < 5) {
      do {
        iVar1 = fn_00101d80(iVar3 + 8,param_1 + unaff_r4 * 0x2ec + 8);
        if (iVar1 == 0) {
          uVar4 = 1;
          break;
        }
        unaff_r4 = unaff_r4 + 1;
      } while (unaff_r4 < 5);
    }
    uVar2 = uVar2 + 1;
    if (3 < uVar2) {
      return uVar4;
    }
  } while( true );
}



undefined4 fn_0030e3e0(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (*(short *)(param_1 + uVar1 * 0x2ec + 8) != 0) {
      return 1;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 5);
  return 0;
}



void fn_0030e3b8(int param_1,int param_2,undefined4 param_3)

{
  undefined1 auStack_4 [4];
  
  fn_0010288c(param_1 + param_2 * 0x2ec + 0x32,0x80,param_3,auStack_4,param_3);
  return;
}



void fn_0030e38c(int param_1,int param_2)

{
  fn_00301f50(param_1 + param_2 * 0x2ec + 8,0x2ec);
  return;
}



undefined4 fn_0030e334(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  while ((iVar1 = param_1 + uVar2 * 0x2ec, *(short *)(iVar1 + 8) == 0 ||
         (*(int *)(iVar1 + 0x2d0) == 1))) {
    uVar2 = uVar2 + 1;
    if (4 < uVar2) {
      return 1;
    }
  }
  return 0;
}



short * fn_0030e304(int param_1,int param_2,short *param_3)

{
  short sVar1;
  short *psVar2;
  short *psVar3;
  
  param_1 = param_1 + param_2 * 0x2ec;
  fn_00301f50(param_1 + 8,0x2a);
  psVar3 = (short *)(param_1 + 8);
  psVar2 = psVar3;
  do {
    sVar1 = *param_3;
    param_3 = param_3 + 1;
    *psVar2 = sVar1;
    psVar2 = psVar2 + 1;
  } while (sVar1 != 0);
  return psVar3;
}



bool fn_0030e2e0(int param_1,int param_2)

{
  return *(short *)(param_1 + param_2 * 0x2ec + 8) != 0;
}



/* WARNING: Removing unreachable block (ram,0x0030e038) */

undefined4 fn_0030ded0(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  int *piVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 **ppuVar10;
  undefined4 *puVar11;
  undefined **ppuVar12;
  uint *puVar13;
  uint uVar14;
  undefined ***pppuVar15;
  undefined **ppuVar16;
  int *piVar17;
  uint uVar18;
  uint local_198;
  undefined4 *local_194;
  undefined4 local_190;
  undefined **local_18c;
  undefined4 local_188;
  undefined **local_184;
  uint local_180 [8];
  undefined1 *local_160;
  undefined4 *local_15c;
  undefined *local_150;
  undefined1 auStack_14c [184];
  undefined4 local_94;
  undefined4 local_8c;
  undefined4 *local_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined *local_60;
  undefined4 local_5c;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 *local_28;
  
  puVar13 = &local_198;
  local_94 = 0;
  local_18c = (undefined **)0x0;
  local_188 = 5;
  local_198 = 0;
  local_194 = (undefined4 *)0x0;
  local_190 = 0;
  uStack_30 = param_1;
  local_2c = param_2;
  local_28 = param_3;
  local_8c = fn_0011c1b4(L"patch:/data/PresentCode/PresentCodeROMCode.bin",0,0);
  iVar2 = fn_00145aac();
  if (iVar2 == 1) {
    local_184 = (undefined **)fn_0012a26c(local_8c);
    pppuVar15 = &local_18c;
    if ((undefined **)0x1f < local_184) {
      pppuVar15 = &local_184;
    }
    local_18c = (undefined **)0x20;
    ppuVar16 = *pppuVar15;
    puVar3 = (undefined1 *)fn_00100fc6(ppuVar16,0);
    puVar4 = puVar3;
    for (ppuVar12 = local_184; ppuVar12 != (undefined **)0x0;
        ppuVar12 = (undefined **)((int)ppuVar12 - 1)) {
      if (puVar4 != (undefined1 *)0x0) {
        *puVar4 = 0;
      }
      puVar4 = puVar4 + 1;
    }
    local_160 = puVar3 + (int)ppuVar16;
    puVar4 = puVar3 + (int)local_184;
    local_80 = 0x8211bc90;
    uStack_7c = 0x6df9aae5;
    uStack_78 = 0xf72c7555;
    uStack_74 = 0xd9fc4bbe;
    local_70 = 0x8c3b73d0;
    uStack_6c = 0xe3c0dbdb;
    uStack_68 = 0xe95c6a9;
    uStack_64 = 0x615502f8;
    local_150 = &DAT_008575a0;
    fn_00755a98(auStack_14c,&local_80,0x10);
    uVar5 = fn_00145ac0(local_8c);
    local_198 = fn_0012a26c(local_8c);
    local_18c = &local_150;
    local_194 = &local_70;
    local_5c = 0;
    local_60 = &DAT_0085754c;
    local_190 = 0x10;
    uVar5 = fn_00527cf0(&local_60,puVar3,(int)puVar4 - (int)puVar3,uVar5);
    iVar2 = fn_00145b00(8,&DAT_00812c8c);
    piVar6 = (int *)0x0;
    if (iVar2 != 0) {
      piVar6 = (int *)fn_00128f40();
    }
    piVar17 = (int *)0x0;
    if (piVar6 != (int *)0x0) {
      piVar17 = piVar6;
    }
    iVar2 = fn_00128ee0(piVar17,puVar3,uVar5);
    if (iVar2 != 0) {
      uVar7 = fn_005f6ce8(piVar17,(char *)&DAT_0030e280);
      local_180[0] = uVar7;
      if (0x1f < uVar7) {
        puVar13 = local_180;
      }
      local_198 = 0x20;
      uVar18 = *puVar13;
      puVar8 = (undefined4 *)fn_00100fc6(uVar18 << 2,0);
      puVar11 = puVar8;
      for (uVar14 = local_180[0]; uVar14 != 0; uVar14 = uVar14 - 1) {
        if (puVar11 != (undefined4 *)0x0) {
          *puVar11 = 0;
        }
        puVar11 = puVar11 + 1;
      }
      local_15c = puVar8 + uVar18;
      local_84 = puVar8 + local_180[0];
      uVar14 = 0;
      if (0 < (int)uVar7) {
        do {
          uVar18 = uVar14;
          uVar5 = fn_00128eac(piVar17,(char *)&DAT_0030e280,uVar18);
          puVar8[uVar18] = uVar5;
          uVar14 = uVar18 + 1;
        } while ((int)(uVar18 + 1) < (int)uVar7);
      }
      fn_00303234(2,&DAT_0030e28c);
      if (0 < (int)uVar7) {
        uVar18 = 0x301c;
      }
      iVar2 = 0;
      if (0 < (int)uVar7) {
        do {
          local_194 = (undefined4 *)0x0;
          local_190 = 0;
          local_18c = (undefined **)0x0;
          local_188 = 0;
          local_184 = (undefined **)0x0;
          local_180[0] = 0;
          local_180[1] = 0;
          local_180[2] = 0;
          local_180[3] = 0;
          local_180[4] = 0;
          local_180[5] = 0;
          uVar5 = fn_005f6d40(piVar17,puVar8[iVar2],&DAT_0030e298);
          iVar9 = fn_001002a8(&local_194,uVar5);
          if (0 < iVar9) {
            ppuVar10 = &local_194;
            do {
              if (*(ushort *)ppuVar10 == uVar18) {
                *(ushort *)ppuVar10 = 0xff5e;
              }
              iVar9 = iVar9 + -1;
              ppuVar10 = (undefined4 **)((int)ppuVar10 + 2);
            } while (iVar9 != 0);
          }
          iVar9 = fn_00101d80(&local_194,local_2c);
          if (iVar9 == 0) {
            uVar5 = fn_005f6d10(piVar17,puVar8[iVar2],&DAT_0030e2c8);
            *local_28 = uVar5;
            local_94 = 1;
            break;
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < (int)uVar7);
      }
      puVar11 = puVar8;
      if (local_84 < puVar8) {
        do {
          puVar11 = puVar11 + 1;
        } while (puVar11 != local_84);
      }
      fn_001008c4(puVar8,(int)local_15c - (int)puVar8 >> 2,0);
    }
    if (piVar17 != (int *)0x0) {
      (**(code **)(*piVar17 + 4))();
    }
    puVar1 = puVar3;
    if (puVar4 <= puVar3) {
      for (; puVar1 != puVar4; puVar1 = puVar1 + 1) {
      }
    }
    fn_001008c4(puVar3,(int)local_160 - (int)puVar3,0);
  }
  fn_0012d73c(local_8c);
  return local_94;
}


