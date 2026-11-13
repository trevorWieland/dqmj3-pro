#include "00231d04_002323e8.h"



void fn_002323e8(undefined4 *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined2 local_58 [34];
  
  if (*(char *)((int)param_1 + 9) == '\n') {
    local_58[0] = 1;
    cVar1 = *(char *)(param_1[3] + 0x104);
    if (cVar1 == '\0') {
      local_58[1] = 6;
    }
    else if (cVar1 == '\x01') {
      local_58[1] = 2;
    }
    else if (cVar1 == '\x02') {
      local_58[1] = 4;
    }
    else if (cVar1 == '\x03') {
      local_58[1] = 5;
    }
    uVar2 = fn_006f83f4();
    fn_001003e0(local_58 + 2,uVar2);
    iVar3 = fn_00100b58(local_58);
    local_58[iVar3] = 1;
    local_58[iVar3 + 1] = 1;
    local_58[iVar3 + 2] = 0;
    uVar2 = fn_0068eb18(DAT_008977e8);
    fn_0016ba84(uVar2,local_58);
  }
  if (*(char *)(param_1 + 4) == '\0') {
    fn_00144810(DAT_008977e8);
    uVar2 = fn_006b5558();
    uVar4 = fn_0068eb18(DAT_008977e8);
    fn_0016bad4(uVar4,uVar2);
    uVar2 = fn_0068eb18(DAT_008977e8);
    uVar2 = fn_0025f988(uVar2,(&PTR_s_race_announce_last_60sec_00896d78)
                               [*(char *)((int)param_1 + 9)]);
    uVar4 = fn_001827b0(*param_1,(char *)&DAT_00232548);
    fn_00190d50(uVar4,uVar2);
    return;
  }
  uVar2 = fn_0068eb18();
  uVar2 = fn_0025f988(uVar2,*(undefined4 *)(&DAT_00896db0 + *(char *)((int)param_1 + 9) * 4));
  uVar4 = fn_001827b0(*param_1,(char *)&DAT_00232548);
  fn_00190d50(uVar4,uVar2);
  return;
}



void fn_00231e7c(int param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int extraout_r1;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined1 auStack_30 [12];
  
  uVar2 = fn_001287b4();
  iVar3 = fn_0011c184(L"rom:/data/Passing/PassingPrize.nut",uVar2,0x80,5);
  if ((iVar3 == 0) || (iVar4 = fn_00145ac0(), iVar4 == 0)) {
    fn_0012d73c(iVar3);
    return;
  }
  fn_00128f40(auStack_30);
  uVar2 = fn_0012a26c(iVar3);
  uVar5 = fn_00145ac0(iVar3);
  fn_00128ee0(auStack_30,uVar5,uVar2);
  fn_00231ffc(param_1,auStack_30,&DAT_00231fec,param_1 + 4);
  puVar7 = (undefined4 *)(param_1 + 0x10);
  uVar2 = fn_00128e7c(auStack_30,(char *)&DAT_00231ff0,0);
  *puVar7 = uVar2;
  uVar2 = fn_00128e7c(auStack_30,(char *)&DAT_00231ff0,1);
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  iVar10 = 2;
  iVar6 = fn_00128e54(auStack_30,(char *)&DAT_00231ff0);
  uVar8 = 0;
  iVar4 = (iVar6 + -2) * 0x55555556;
  iVar6 = (iVar6 + -2) / 3;
  if (0 < iVar6) {
    do {
      uVar1 = fn_00128e7c(auStack_30,(char *)&DAT_00231ff0,iVar10);
      *(undefined2 *)((int)puVar7 + uVar8 * 6 + 8) = uVar1;
      uVar1 = fn_00128e7c(auStack_30,(char *)&DAT_00231ff0,iVar10 + 1);
      *(undefined2 *)((int)puVar7 + uVar8 * 6 + 10) = uVar1;
      uVar1 = fn_00128e7c(auStack_30,(char *)&DAT_00231ff0,iVar10 + 2);
      uVar9 = uVar8 + 1;
      iVar10 = iVar10 + 3;
      *(undefined2 *)((int)puVar7 + uVar8 * 6 + 0xc) = uVar1;
      iVar4 = extraout_r1;
      if (iVar6 <= (int)uVar9) break;
      uVar8 = uVar9;
    } while (uVar9 < 10);
  }
  fn_0012d73c(iVar3,iVar4);
  fn_00128fc4(auStack_30);
  return;
}



void fn_00231ffc(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint *param_4)

{
  uint *puVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined4 *puVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 *local_3c;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  uint *local_28;
  
  uStack_34 = param_1;
  local_30 = param_2;
  uStack_2c = param_3;
  local_28 = param_4;
  iVar3 = fn_00128e54(param_2,param_3);
  iVar13 = 0;
  iVar3 = (int)(iVar3 + ((uint)(iVar3 >> 0x1f) >> 0x1e)) >> 2;
  if (0 < iVar3) {
    do {
      local_48 = 0;
      iVar4 = iVar13 * 4;
      fn_0019bc50(&local_44,&DAT_007c8a38);
      local_48 = fn_00128e7c(local_30,uStack_2c,iVar4);
      uVar2 = fn_00128e7c(local_30,uStack_2c,iVar4 + 1);
      local_44 = CONCAT22(((unsigned int)(local_44) >> 16) & 0xffff,uVar2);
      uVar2 = fn_00128e7c(local_30,uStack_2c,iVar4 + 2);
      local_44 = CONCAT22(uVar2,(undefined2)local_44);
      uVar2 = fn_00128e7c(local_30,uStack_2c);
      puVar1 = local_28;
      local_40 = CONCAT22(((unsigned int)(local_40) >> 16) & 0xffff,uVar2);
      puVar12 = (undefined4 *)local_28[1];
      if (puVar12 == (undefined4 *)local_28[2]) {
        uVar8 = (int)((int)puVar12 - *local_28) / 0xc;
        if (uVar8 < (uint)((int)((int)local_28[2] - *local_28) / 0xc)) {
          local_28[1] = (uint)(puVar12 + 3);
          if (puVar12 != (undefined4 *)0x0) {
            *puVar12 = puVar12[-3];
            puVar12[1] = puVar12[-2];
            puVar12[2] = puVar12[-1];
          }
          puVar10 = puVar12 + -3;
          puVar9 = puVar12;
          local_3c = (undefined1 *)&local_48;
          if (puVar12 < puVar10) {
            iVar4 = (int)puVar10 - (int)puVar12;
            iVar14 = 1;
            local_3c = (undefined1 *)&local_48;
            if (1 < iVar4 / 0xc + 1) {
              local_3c = (undefined1 *)&local_48;
              do {
                puVar10 = puVar10 + -3;
                puVar9 = puVar9 + -3;
                fn_006f94f4(puVar9,puVar10);
                iVar14 = iVar14 + 1;
              } while (iVar14 < iVar4 / 0xc + 1);
            }
          }
          else {
            while (puVar12 != puVar10) {
              puVar10 = puVar10 + -3;
              fn_006f94f4(puVar9 + -3,puVar10);
              puVar9 = puVar9 + -3;
            }
          }
          fn_006f94f4(puVar12,local_3c);
        }
        else {
          uVar15 = uVar8 + (uVar8 >> 1) + (uVar8 >> 3);
          if (uVar15 < uVar8 + 0x20) {
            uVar15 = uVar8 + 0x20;
          }
          local_3c = (undefined1 *)&local_48;
          puVar5 = (undefined4 *)fn_00100fc6(uVar15 * 0xc,0);
          puVar10 = puVar5;
          for (puVar9 = (undefined4 *)*puVar1; puVar9 != puVar12; puVar9 = puVar9 + 3) {
            if (puVar10 != (undefined4 *)0x0) {
              uVar16 = puVar9[1];
              uVar17 = puVar9[2];
              *puVar10 = *puVar9;
              puVar10[1] = uVar16;
              puVar10[2] = uVar17;
            }
            puVar10 = puVar10 + 3;
          }
          puVar9 = puVar5 + ((int)((int)puVar12 - *puVar1) / 0xc) * 3;
          if (puVar9 != (undefined4 *)0x0) {
            *puVar9 = local_48;
            puVar9[1] = local_44;
            puVar9[2] = local_40;
          }
          puVar10 = (undefined4 *)puVar1[1];
          puVar9 = puVar5 + ((int)((int)puVar12 - *puVar1) / 0xc) * 3;
          for (; puVar12 != puVar10; puVar12 = puVar12 + 3) {
            puVar6 = puVar9 + 3;
            if (puVar6 != (undefined4 *)0x0) {
              uVar16 = puVar12[1];
              uVar17 = puVar12[2];
              *puVar6 = *puVar12;
              puVar9[4] = uVar16;
              puVar9[5] = uVar17;
            }
            puVar9 = puVar6;
          }
          uVar7 = *puVar1;
          uVar11 = puVar1[1];
          uVar8 = uVar7;
          if (uVar11 < uVar7) {
            do {
              uVar8 = uVar8 + 0xc;
            } while (uVar8 != uVar11);
          }
          fn_001008c4(uVar7,(int)(puVar1[2] - uVar7) / 0xc,0);
          *puVar1 = (uint)puVar5;
          puVar1[1] = (uint)(puVar5 + ((int)(uVar11 - uVar7) / 0xc) * 3 + 3);
          puVar1[2] = (uint)(puVar5 + uVar15 * 3);
        }
      }
      else {
        local_28[1] = (uint)(puVar12 + 3);
        if (puVar12 != (undefined4 *)0x0) {
          *puVar12 = local_48;
          puVar12[1] = local_44;
          puVar12[2] = local_40;
        }
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 < iVar3);
  }
  return;
}



void fn_00231e10(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = *(uint *)(param_1 + 4);
  *(undefined4 *)(param_1 + 4) = 0;
  uVar2 = *(uint *)(param_1 + 8);
  *(undefined4 *)(param_1 + 8) = 0;
  iVar4 = *(int *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xc) = 0;
  uVar1 = uVar3;
  if (uVar2 < uVar3) {
    do {
      uVar1 = uVar1 + 0xc;
    } while (uVar1 != uVar2);
  }
  fn_001008c4(uVar3,(int)(iVar4 - uVar3) / 0xc,0);
  fn_00120a0c(param_1 + 0x10);
  return;
}



void fn_00231db4(undefined4 param_1)

{
  undefined1 auStack_28 [40];
  
  fn_0017d96c(auStack_28,0x20,0x1f,(char *)&DAT_00231df8,param_1);
  fn_0016ba34(DAT_00897800,DAT_00898238,auStack_28,0);
  return;
}



void fn_00231d50(undefined4 param_1)

{
  undefined4 uVar1;
  undefined1 auStack_30 [36];
  
  uVar1 = DAT_0089821c;
  fn_0017d96c(auStack_30,0x20,0x1f,(char *)&DAT_00231da0,param_1);
  fn_0016ba34(DAT_00897800,uVar1,auStack_30,0);
  return;
}



int fn_00231d04(int param_1,uint param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  iVar1 = fn_00100b58();
  if (param_2 <= (uint)(iVar1 + param_4)) {
    param_4 = (param_2 - iVar1) + -1;
  }
  fn_00103156(param_1,param_3,param_4);
  *(undefined2 *)(param_1 + param_2 * 2 + -2) = 0;
  return param_4;
}


