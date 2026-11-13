#include "005a60d4_005a6f2c.h"



void fn_005a6f2c(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + param_2 * 4 + 0x70);
  fn_005a715c(uVar1,param_3,1);
  fn_005a715c(uVar1,param_3,2);
  return;
}



bool fn_005a6d00(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  
  iVar1 = fn_0023c2a8();
  bVar3 = *(uint *)(iVar1 + 0x18) < 0xe;
  if (!bVar3) {
    uVar2 = fn_0022f584((char *)&DAT_005a6d58,0);
    fn_00747f94(param_1,uVar2,0,1,1,0);
  }
  return bVar3;
}



undefined4 * fn_005a6a94(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 unaff_r4;
  undefined4 *puVar3;
  
  iVar1 = fn_00145b00(0xe8,&DAT_00812c8c);
  if (iVar1 == 0) {
    return (undefined4 *)0x0;
  }
  puVar2 = (undefined4 *)fn_0043ccf8(iVar1,param_1,(char *)&DAT_005a6e58,0xda,1,unaff_r4);
  puVar3 = (undefined4 *)0x0;
  *puVar2 = &DAT_00846f98;
  puVar2[0x34] = 0;
  puVar2[0x35] = 0;
  puVar2[0x36] = &DAT_0085a9f4;
  puVar2[0x37] = 0;
  puVar2[0x38] = 0;
  iVar1 = fn_00145b00(0xb4,&DAT_00812c8c);
  if (iVar1 != 0) {
    puVar3 = (undefined4 *)fn_005f62c0();
    puVar3[8] = &DAT_00859420;
    puVar3[9] = 0;
    puVar3[10] = 0;
    puVar3[0xb] = 0;
    puVar3[0xc] = 0;
    puVar3[0xd] = 0;
    *puVar3 = &DAT_00859b38;
    iVar1 = fn_00119b40(puVar3 + 0x10);
    fn_0066ddbc();
    fn_002fec40(iVar1 + 0x18,s_TaskNexGatheringFindByParticipan_008c71f3);
    *(undefined **)(iVar1 + -0x40) = &DAT_0085a240;
    iVar1 = fn_004b5170(iVar1 + 0x58);
    puVar3 = (undefined4 *)(iVar1 + -0x98);
    *puVar3 = &DAT_0085a790;
    fn_0067b6d4(puVar3);
  }
  puVar2[0x39] = puVar3;
  return puVar2;
}



void fn_005a6a40(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0xdc) == 0) && (iVar1 = fn_0066e158(DAT_00898840), iVar1 == 0)) {
    fn_00748134(param_1);
    fn_002a35dc(*(undefined4 *)(param_1 + 0xd4));
                    /* WARNING: Could not recover jumptable at 0x005a6a88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0xd0) + 0xc))();
    return;
  }
  return;
}



undefined4 fn_005a697c(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  puVar4 = *(undefined4 **)(param_1 + 0x18);
  if (puVar4 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar4)(puVar4);
    do {
      if (puVar2 == &DAT_0089902c) goto LAB_005a69c0;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar4 = (undefined4 *)0x0;
LAB_005a69c0:
  *(undefined4 **)(param_1 + 0xd0) = puVar4;
  cVar1 = *(char *)((int)puVar4 + 0x15);
  uVar3 = fn_0023c2a8();
  *(undefined4 *)(param_1 + 0xd4) = uVar3;
  uVar3 = fn_0043c608(param_1);
  if (cVar1 == '\0') {
    fn_005a68b4(param_1);
  }
  else {
    *(undefined1 *)(*(int *)(param_1 + 0xd0) + 0x15) = 0;
    *(undefined4 *)(param_1 + 0xdc) = 1;
    *(undefined4 *)(param_1 + 0xe0) = 0;
  }
  fn_00689efc(param_1,0x39,0);
  return uVar3;
}



void fn_005a68b4(int param_1)

{
  undefined4 uVar1;
  undefined *local_20;
  undefined1 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (*(char *)(*(int *)(param_1 + 0xd0) + 0x14) == '\0') {
    *(undefined4 *)(param_1 + 0xdc) = 0;
    *(undefined4 *)(param_1 + 0xe0) = 0;
    return;
  }
  *(undefined1 *)(*(int *)(param_1 + 0xd0) + 0x14) = 0;
  uVar1 = fn_006f5dec(DAT_00898840);
  local_1c = 0;
  local_20 = &DAT_00852a4c;
  local_14 = 0x14;
  local_18 = 0;
  fn_0067b620(*(undefined4 *)(param_1 + 0xe4),uVar1,&local_20);
  uVar1 = fn_0022f584((char *)&DAT_005a695c,0);
  fn_00748024(param_1,uVar1);
  *(undefined4 *)(param_1 + 0xdc) = 2;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  return;
}



undefined4 fn_005a6504(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_30 [20];
  uint local_1c;
  
  iVar1 = fn_0023c2a8();
  if (*(uint *)(iVar1 + 0x18) < 0xe) {
    iVar1 = fn_0023c2a8();
    fn_004b5170(auStack_30);
    fn_0023c414(iVar1 + 4,auStack_30);
    if (local_1c < 4) {
      fn_004b51c4(auStack_30);
      return 1;
    }
    uVar2 = fn_0022f584((char *)&DAT_005a65d8,0);
    fn_00747f94(param_1,uVar2,0,1,1,0);
    fn_004b51c4(auStack_30);
  }
  else {
    uVar2 = fn_0022f584((char *)&DAT_005a6d58,0);
    fn_00747f94(param_1,uVar2,0,1,1,0);
  }
  return 0;
}



void fn_005a60d4(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  uint *puVar8;
  undefined1 *puVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  int *piVar13;
  int *piVar14;
  int *piVar15;
  undefined4 *puVar16;
  int *piVar17;
  undefined4 *puVar18;
  uint uVar19;
  uint local_68;
  undefined4 *local_64;
  undefined **local_60;
  undefined4 *local_5c;
  uint local_58 [2];
  uint local_50 [2];
  int aiStack_48 [4];
  undefined4 *local_38;
  
  fn_005f6270(*(undefined4 *)(param_1 + 0xe4));
  iVar1 = fn_0023c3b8(*(undefined4 *)(param_1 + 0xe4),*(undefined4 *)(param_1 + 0x5c),1);
  if (iVar1 != 0) {
    if (*(int *)(*(int *)(param_1 + 0xe4) + 0x44) == 0) {
      fn_004b5170(aiStack_48);
      fn_0023ce58(*(int *)(param_1 + 0xe4) + 0x98,aiStack_48);
      iVar1 = *(int *)(param_1 + 0xd4);
      piVar14 = (int *)(iVar1 + 4);
      if (piVar14 != aiStack_48) {
        piVar17 = *(int **)(iVar1 + 0x14);
        puVar16 = (undefined4 *)*local_38;
        for (piVar13 = (int *)*piVar17; piVar13 != piVar17 && puVar16 != local_38;
            piVar13 = (int *)*piVar13) {
          fn_004a2190(piVar13 + 2,puVar16 + 2);
          puVar16 = (undefined4 *)*puVar16;
        }
        if (puVar16 == local_38) {
          while (piVar13 != piVar17) {
            piVar14 = *(int **)(iVar1 + 0x14);
            if (piVar13 != *(int **)(iVar1 + 0x14)) {
              piVar14 = (int *)*piVar13;
              *(int **)piVar13[1] = piVar14;
              *(int *)(*piVar13 + 4) = piVar13[1];
              *(int *)(iVar1 + 0x18) = *(int *)(iVar1 + 0x18) + -1;
              (**(code **)piVar13[2])(piVar13 + 2);
              *piVar13 = *(int *)(iVar1 + 8);
              *(int **)(iVar1 + 8) = piVar13;
            }
            piVar13 = piVar14;
          }
        }
        else {
          local_64 = local_38;
          if (puVar16 != local_38) {
            local_5c = &DAT_00853388;
            local_60 = &PTR_FUN_00853b40;
            do {
              puVar18 = *(undefined4 **)(iVar1 + 8);
              if (puVar18 == (undefined4 *)0x0) {
                if (*(int *)(iVar1 + 0xc) == *(int *)(iVar1 + 0x10)) {
                  if (*piVar14 == 0) {
                    uVar19 = 0x20;
                  }
                  else {
                    uVar2 = *(uint *)(*piVar14 + 4);
                    uVar19 = uVar2 + (uVar2 >> 1) + (uVar2 >> 3);
                    if (uVar19 < uVar2 + 0x20) {
                      uVar19 = uVar2 + 0x20;
                    }
                  }
                  piVar13 = (int *)fn_0015ece0(0xc);
                  iVar3 = fn_0015ece0(uVar19 * 0x78);
                  piVar13[2] = iVar3;
                  *piVar13 = *piVar14;
                  piVar13[1] = uVar19;
                  *piVar14 = (int)piVar13;
                  iVar3 = piVar13[2];
                  *(int *)(iVar1 + 0xc) = iVar3;
                  *(uint *)(iVar1 + 0x10) = iVar3 + uVar19 * 0x78;
                }
                puVar18 = *(undefined4 **)(iVar1 + 0xc);
                *(undefined4 **)(iVar1 + 0xc) = puVar18 + 0x1e;
              }
              else {
                *(undefined4 *)(iVar1 + 8) = *puVar18;
              }
              if (puVar18 + 2 != (undefined4 *)0x0) {
                puVar18[2] = local_5c;
                *(undefined1 *)(puVar18 + 3) = *(undefined1 *)(puVar16 + 3);
                puVar18[4] = puVar16[4];
                puVar18[5] = puVar16[5];
                puVar18[6] = puVar16[6];
                *(undefined2 *)(puVar18 + 7) = *(undefined2 *)(puVar16 + 7);
                *(undefined2 *)((int)puVar18 + 0x1e) = *(undefined2 *)((int)puVar16 + 0x1e);
                puVar18[8] = puVar16[8];
                puVar18[9] = puVar16[9];
                puVar18[10] = puVar16[10];
                puVar18[0xb] = puVar16[0xb];
                iVar3 = fn_004b637c(puVar18 + 0xc,puVar16 + 0xc);
                *(undefined ***)(iVar3 + -0x28) = &PTR_FUN_00854c0c;
                *(undefined1 *)(iVar3 + 8) = *(undefined1 *)(puVar16 + 0xe);
                *(undefined4 *)(iVar3 + 0xc) = puVar16[0xf];
                iVar3 = fn_004b637c(iVar3 + 0x10,puVar16 + 0x10);
                piVar13 = (int *)(iVar3 + 8);
                *piVar13 = 0;
                *(undefined4 *)(iVar3 + 0xc) = 0;
                *(undefined4 *)(iVar3 + 0x10) = 0;
                local_50[0] = (int)(puVar16[0x13] - puVar16[0x12]) >> 2;
                local_58[0] = 0x20;
                puVar8 = local_50;
                if (local_50[0] < 0x20) {
                  puVar8 = local_58;
                }
                uVar19 = *puVar8;
                puVar4 = (undefined4 *)fn_0015ece0(uVar19 << 2);
                *piVar13 = (int)puVar4;
                puVar11 = (undefined4 *)puVar16[0x13];
                for (puVar7 = (undefined4 *)puVar16[0x12]; puVar7 != puVar11; puVar7 = puVar7 + 1) {
                  if (puVar4 != (undefined4 *)0x0) {
                    *puVar4 = *puVar7;
                  }
                  puVar4 = puVar4 + 1;
                }
                *(uint *)(iVar3 + 0xc) = (puVar16[0x13] - puVar16[0x12] & 0xfffffffc) + *piVar13;
                piVar15 = (int *)(iVar3 + 0x14);
                *(uint *)(iVar3 + 0x10) = *piVar13 + uVar19 * 4;
                *piVar15 = 0;
                *(undefined4 *)(iVar3 + 0x18) = 0;
                *(undefined4 *)(iVar3 + 0x1c) = 0;
                local_68 = puVar16[0x16] - puVar16[0x15];
                local_58[0] = 0x20;
                puVar8 = &local_68;
                if ((uint)(puVar16[0x16] - puVar16[0x15]) < 0x20) {
                  puVar8 = local_58;
                }
                uVar19 = *puVar8;
                puVar5 = (undefined1 *)fn_0015ece0(uVar19);
                *piVar15 = (int)puVar5;
                puVar12 = (undefined1 *)puVar16[0x16];
                for (puVar9 = (undefined1 *)puVar16[0x15]; puVar9 != puVar12; puVar9 = puVar9 + 1) {
                  if (puVar5 != (undefined1 *)0x0) {
                    *puVar5 = *puVar9;
                  }
                  puVar5 = puVar5 + 1;
                }
                iVar6 = puVar16[0x16];
                iVar10 = puVar16[0x15];
                *(uint *)(iVar3 + 0x1c) = *piVar15 + uVar19;
                *(int *)(iVar3 + 0x18) = (iVar6 - iVar10) + *piVar15;
                iVar3 = fn_004b9b4c(iVar3 + 0x20,puVar16 + 0x18);
                iVar3 = fn_004b9b4c(iVar3 + 8,puVar16 + 0x1a);
                *(undefined4 *)(iVar3 + 8) = puVar16[0x1c];
                *(undefined4 *)(iVar3 + 0xc) = puVar16[0x1d];
                *(undefined ***)(iVar3 + -0x60) = local_60;
              }
              *puVar18 = piVar17;
              puVar18[1] = piVar17[1];
              *(undefined4 **)piVar17[1] = puVar18;
              piVar17[1] = (int)puVar18;
              *(int *)(iVar1 + 0x18) = *(int *)(iVar1 + 0x18) + 1;
              puVar16 = (undefined4 *)*puVar16;
            } while (puVar16 != local_64);
          }
        }
      }
      fn_0023d34c(aiStack_48);
      *(undefined4 *)(param_1 + 0xdc) = 0;
      *(undefined4 *)(param_1 + 0xe0) = 0;
      fn_004b51c4(aiStack_48);
      return;
    }
    *(undefined4 *)(param_1 + 0xdc) = 0;
    *(undefined4 *)(param_1 + 0xe0) = 0;
  }
  return;
}


