#include "007aa1c8_007aa4d4.h"



/* WARNING: Removing unreachable block (ram,0x007aa5ac) */
/* WARNING: Removing unreachable block (ram,0x007aa5c0) */
/* WARNING: Removing unreachable block (ram,0x007aa620) */

void fn_007aa4d4(undefined4 *param_1,undefined4 *param_2,int param_3,code *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if ((int)param_2 - (int)param_1 < 0x201) {
    return;
  }
  do {
    if (param_3 == 0) {
      iVar1 = (int)param_2 - (int)param_1;
      if (0x3f < iVar1) {
        iVar7 = ((iVar1 >> 5) + -2) / 2;
        while( true ) {
          puVar4 = param_1 + iVar7 * 8;
          local_48 = *puVar4;
          uStack_44 = puVar4[1];
          uStack_40 = puVar4[2];
          uStack_3c = puVar4[3];
          uStack_38 = puVar4[4];
          uStack_34 = puVar4[5];
          uStack_30 = puVar4[6];
          uStack_2c = puVar4[7];
          fn_0079ff68(param_1,iVar7,iVar1 >> 5,&local_48,param_4);
          if (iVar7 == 0) break;
          iVar7 = iVar7 + -1;
        }
      }
      while (0x20 < iVar1) {
        if (param_1 != param_2) {
          puVar4 = param_2 + -8;
          uVar2 = param_1[1];
          uVar3 = param_1[2];
          uVar8 = param_1[3];
          uVar9 = param_1[4];
          uVar10 = param_1[5];
          uVar11 = param_1[6];
          uVar12 = param_1[7];
          local_48 = *puVar4;
          uStack_44 = param_2[-7];
          uStack_40 = param_2[-6];
          uStack_3c = param_2[-5];
          uStack_38 = param_2[-4];
          uStack_34 = param_2[-3];
          uStack_30 = param_2[-2];
          uStack_2c = param_2[-1];
          *puVar4 = *param_1;
          param_2[-7] = uVar2;
          param_2[-6] = uVar3;
          param_2[-5] = uVar8;
          param_2[-4] = uVar9;
          param_2[-3] = uVar10;
          param_2[-2] = uVar11;
          param_2[-1] = uVar12;
          fn_0079ff68(param_1,0,(int)puVar4 - (int)param_1 >> 5,&local_48,param_4);
        }
        param_2 = param_2 + -8;
        iVar1 = (int)param_2 - (int)param_1;
      }
      return;
    }
    puVar4 = param_1 + (((int)param_2 - (int)param_1 >> 5) - ((int)param_2 - (int)param_1 >> 0x1f)
                       >> 1) * 8;
    iVar1 = (*param_4)(param_1,puVar4);
    if (iVar1 == 0) {
      iVar1 = (*param_4)(param_1,param_2 + -8);
      if (iVar1 == 0) {
        iVar1 = (*param_4)(puVar4,param_2 + -8);
        if (iVar1 != 0) goto LAB_007aa6cc;
      }
      else {
LAB_007aa6b0:
        puVar4 = param_1;
      }
    }
    else {
      iVar1 = (*param_4)(puVar4);
      if (iVar1 == 0) {
        iVar1 = (*param_4)(param_1,param_2 + -8);
        if (iVar1 == 0) goto LAB_007aa6b0;
LAB_007aa6cc:
        puVar4 = param_2 + -8;
      }
    }
    local_88 = *puVar4;
    uStack_84 = puVar4[1];
    uStack_80 = puVar4[2];
    uStack_7c = puVar4[3];
    uStack_78 = puVar4[4];
    uStack_74 = puVar4[5];
    uStack_70 = puVar4[6];
    uStack_6c = puVar4[7];
    puVar4 = param_1;
    puVar5 = param_2;
    while( true ) {
      iVar1 = (*param_4)(puVar4,&local_88);
      while (iVar1 != 0) {
        puVar4 = puVar4 + 8;
        iVar1 = (*param_4)(puVar4,&local_88);
      }
      do {
        puVar6 = puVar5;
        puVar5 = puVar6 + -8;
        iVar1 = (*param_4)(&local_88);
      } while (iVar1 != 0);
      if (puVar5 <= puVar4) break;
      uVar2 = *puVar4;
      uVar3 = puVar4[1];
      uVar14 = puVar6[-7];
      uVar15 = puVar6[-6];
      uVar16 = puVar6[-5];
      uVar17 = puVar6[-4];
      uVar18 = puVar6[-3];
      uVar19 = puVar6[-2];
      uVar20 = puVar6[-1];
      uVar8 = puVar4[2];
      uVar9 = puVar4[3];
      uVar10 = puVar4[4];
      uVar11 = puVar4[5];
      uVar12 = puVar4[6];
      uVar13 = puVar4[7];
      *puVar4 = *puVar5;
      puVar4[1] = uVar14;
      puVar4[2] = uVar15;
      puVar4[3] = uVar16;
      puVar4[4] = uVar17;
      puVar4[5] = uVar18;
      puVar4[6] = uVar19;
      puVar4[7] = uVar20;
      puVar4 = puVar4 + 8;
      *puVar5 = uVar2;
      puVar6[-7] = uVar3;
      puVar6[-6] = uVar8;
      puVar6[-5] = uVar9;
      puVar6[-4] = uVar10;
      puVar6[-3] = uVar11;
      puVar6[-2] = uVar12;
      puVar6[-1] = uVar13;
      puVar5 = puVar6 + -8;
    }
    param_3 = param_3 / 2;
    fn_007aa4d4(puVar4,param_2,param_3,param_4);
    param_2 = puVar4;
    if ((int)puVar4 - (int)param_1 < 0x201) {
      return;
    }
  } while( true );
}



/* WARNING: Removing unreachable block (ram,0x007aa2d0) */
/* WARNING: Removing unreachable block (ram,0x007aa2dc) */
/* WARNING: Removing unreachable block (ram,0x007aa2f0) */
/* WARNING: Removing unreachable block (ram,0x007aa338) */

void fn_007aa1c8(undefined4 *param_1,undefined4 *param_2,int param_3,code *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  code *local_40;
  int local_3c;
  
  if ((int)param_2 - (int)param_1 < 0x2c1) {
    return;
  }
  do {
    if (param_3 == 0) {
      iVar1 = (int)param_2 - (int)param_1;
      if (0x57 < iVar1) {
        local_3c = iVar1 / 0x2c;
        iVar6 = (local_3c + -2) / 2;
        while( true ) {
          puVar2 = param_1 + iVar6 * 0xb;
          local_68 = puVar2[1];
          uStack_64 = puVar2[2];
          uStack_60 = puVar2[3];
          uStack_5c = puVar2[4];
          uStack_58 = puVar2[5];
          uStack_54 = puVar2[6];
          uStack_50 = puVar2[7];
          uStack_4c = puVar2[8];
          local_48 = puVar2[9];
          local_44 = puVar2[10];
          local_40 = param_4;
          fn_0079fe04(param_1,iVar6,local_3c,*puVar2);
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
        }
      }
      while (0x2c < iVar1) {
        if (param_1 != param_2) {
          uVar19 = param_1[1];
          uVar7 = param_1[2];
          uVar8 = param_1[3];
          uVar9 = param_1[4];
          uVar10 = param_1[5];
          uVar11 = param_1[6];
          uVar12 = param_1[7];
          uVar18 = param_2[-0xb];
          local_68 = param_2[-10];
          uStack_64 = param_2[-9];
          uStack_60 = param_2[-8];
          uStack_5c = param_2[-7];
          uStack_58 = param_2[-6];
          uStack_54 = param_2[-5];
          uStack_50 = param_2[-4];
          uStack_4c = param_2[-3];
          local_48 = param_2[-2];
          local_44 = param_2[-1];
          param_2[-0xb] = *param_1;
          param_2[-10] = uVar19;
          param_2[-9] = uVar7;
          param_2[-8] = uVar8;
          param_2[-7] = uVar9;
          param_2[-6] = uVar10;
          param_2[-5] = uVar11;
          param_2[-4] = uVar12;
          uVar19 = param_1[9];
          uVar7 = param_1[10];
          param_2[-3] = param_1[8];
          param_2[-2] = uVar19;
          param_2[-1] = uVar7;
          local_40 = param_4;
          fn_0079fe04(param_1,0,((int)param_2 + (-0x2c - (int)param_1)) / 0x2c,uVar18);
        }
        param_2 = param_2 + -0xb;
        iVar1 = (int)param_2 - (int)param_1;
      }
      return;
    }
    puVar2 = param_1 + (((int)param_2 - (int)param_1) / 0x58) * 0xb;
    iVar1 = (*param_4)(param_1,puVar2);
    if (iVar1 == 0) {
      iVar1 = (*param_4)(param_1,param_2 + -0xb);
      if (iVar1 == 0) {
        iVar1 = (*param_4)(puVar2,param_2 + -0xb);
        if (iVar1 != 0) goto LAB_007aa400;
      }
      else {
LAB_007aa3e4:
        puVar2 = param_1;
      }
    }
    else {
      iVar1 = (*param_4)(puVar2);
      if (iVar1 == 0) {
        iVar1 = (*param_4)(param_1,param_2 + -0xb);
        if (iVar1 == 0) goto LAB_007aa3e4;
LAB_007aa400:
        puVar2 = param_2 + -0xb;
      }
    }
    local_68 = *puVar2;
    uStack_64 = puVar2[1];
    uStack_60 = puVar2[2];
    uStack_5c = puVar2[3];
    uStack_58 = puVar2[4];
    uStack_54 = puVar2[5];
    uStack_50 = puVar2[6];
    uStack_4c = puVar2[7];
    local_48 = puVar2[8];
    local_44 = puVar2[9];
    local_40 = (code *)puVar2[10];
    puVar2 = param_1;
    puVar4 = param_2;
    while( true ) {
      iVar1 = (*param_4)(puVar2,&local_68);
      puVar3 = puVar2;
      while (iVar1 != 0) {
        puVar3 = puVar3 + 0xb;
        iVar1 = (*param_4)(puVar3,&local_68);
      }
      do {
        puVar5 = puVar4;
        puVar4 = puVar5 + -0xb;
        iVar1 = (*param_4)(&local_68);
      } while (iVar1 != 0);
      if (puVar4 <= puVar3) break;
      uVar7 = *puVar3;
      uVar8 = puVar3[1];
      uVar9 = puVar3[2];
      uVar10 = puVar3[3];
      uVar11 = puVar3[4];
      uVar12 = puVar3[5];
      uVar13 = puVar3[6];
      uVar14 = puVar3[7];
      uVar15 = puVar3[8];
      uVar16 = puVar3[9];
      uVar17 = puVar3[10];
      puVar2 = puVar3 + 0xb;
      uVar18 = puVar5[-10];
      uVar19 = puVar5[-9];
      uVar20 = puVar5[-8];
      uVar21 = puVar5[-7];
      uVar22 = puVar5[-6];
      uVar23 = puVar5[-5];
      uVar24 = puVar5[-4];
      *puVar3 = *puVar4;
      puVar3[1] = uVar18;
      puVar3[2] = uVar19;
      puVar3[3] = uVar20;
      puVar3[4] = uVar21;
      puVar3[5] = uVar22;
      puVar3[6] = uVar23;
      puVar3[7] = uVar24;
      uVar18 = puVar5[-2];
      uVar19 = puVar5[-1];
      puVar4 = puVar5 + -0xb;
      puVar3[8] = puVar5[-3];
      puVar3[9] = uVar18;
      puVar3[10] = uVar19;
      *puVar4 = uVar7;
      puVar5[-10] = uVar8;
      puVar5[-9] = uVar9;
      puVar5[-8] = uVar10;
      puVar5[-7] = uVar11;
      puVar5[-6] = uVar12;
      puVar5[-5] = uVar13;
      puVar5[-4] = uVar14;
      puVar5[-3] = uVar15;
      puVar5[-2] = uVar16;
      puVar5[-1] = uVar17;
    }
    param_3 = param_3 / 2;
    fn_007aa1c8(puVar3,param_2,param_3,param_4);
    param_2 = puVar3;
    if ((int)puVar3 - (int)param_1 < 0x2c1) {
      return;
    }
  } while( true );
}


