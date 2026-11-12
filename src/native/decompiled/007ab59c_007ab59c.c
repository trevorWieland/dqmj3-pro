#include "007ab59c_007ab59c.h"



/* WARNING: Removing unreachable block (ram,0x007ab6a4) */
/* WARNING: Removing unreachable block (ram,0x007ab6b0) */
/* WARNING: Removing unreachable block (ram,0x007ab6c4) */
/* WARNING: Removing unreachable block (ram,0x007ab700) */

void fn_007ab59c(undefined4 *param_1,undefined4 *param_2,int param_3,code *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
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
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  code *local_40;
  int local_3c;
  
  if ((int)param_2 - (int)param_1 < 0x341) {
    return;
  }
  do {
    if (param_3 == 0) {
      iVar1 = (int)param_2 - (int)param_1;
      if (0x67 < iVar1) {
        local_3c = iVar1 / 0x34;
        iVar9 = (local_3c + -2) / 2;
        while( true ) {
          puVar5 = param_1 + iVar9 * 0xd;
          local_70 = puVar5[1];
          uStack_6c = puVar5[2];
          uStack_68 = puVar5[3];
          uStack_64 = puVar5[4];
          uStack_60 = puVar5[5];
          uStack_5c = puVar5[6];
          uStack_58 = puVar5[7];
          uStack_54 = puVar5[8];
          local_50 = puVar5[9];
          uStack_4c = puVar5[10];
          uStack_48 = puVar5[0xb];
          uStack_44 = puVar5[0xc];
          local_40 = param_4;
          fn_007a04a8(param_1,iVar9,local_3c,*puVar5);
          if (iVar9 == 0) break;
          iVar9 = iVar9 + -1;
        }
      }
      while (0x34 < iVar1) {
        if (param_1 != param_2) {
          uVar2 = param_2[-0xd];
          local_70 = param_2[-0xc];
          uStack_6c = param_2[-0xb];
          uStack_68 = param_2[-10];
          uStack_64 = param_2[-9];
          uStack_60 = param_2[-8];
          uStack_5c = param_2[-7];
          uStack_58 = param_2[-6];
          uStack_54 = param_2[-5];
          local_50 = param_2[-4];
          uStack_4c = param_2[-3];
          uStack_48 = param_2[-2];
          uStack_44 = param_2[-1];
          uVar3 = param_1[1];
          uVar4 = param_1[2];
          uVar10 = param_1[3];
          uVar11 = param_1[4];
          uVar12 = param_1[5];
          uVar13 = param_1[6];
          uVar14 = param_1[7];
          param_2[-0xd] = *param_1;
          param_2[-0xc] = uVar3;
          param_2[-0xb] = uVar4;
          param_2[-10] = uVar10;
          param_2[-9] = uVar11;
          param_2[-8] = uVar12;
          param_2[-7] = uVar13;
          param_2[-6] = uVar14;
          uVar3 = param_1[9];
          uVar4 = param_1[10];
          uVar10 = param_1[0xb];
          uVar11 = param_1[0xc];
          param_2[-5] = param_1[8];
          param_2[-4] = uVar3;
          param_2[-3] = uVar4;
          param_2[-2] = uVar10;
          param_2[-1] = uVar11;
          local_40 = param_4;
          fn_007a04a8(param_1,0,((int)param_2 + (-0x34 - (int)param_1)) / 0x34,uVar2);
        }
        param_2 = param_2 + -0xd;
        iVar1 = (int)param_2 - (int)param_1;
      }
      return;
    }
    puVar5 = param_1 + (((int)param_2 - (int)param_1) / 0x68) * 0xd;
    iVar1 = (*param_4)(param_1,puVar5);
    if (iVar1 == 0) {
      iVar1 = (*param_4)(param_1,param_2 + -0xd);
      if (iVar1 == 0) {
        iVar1 = (*param_4)(puVar5,param_2 + -0xd);
        if (iVar1 != 0) goto LAB_007ab7cc;
      }
      else {
LAB_007ab7b0:
        puVar5 = param_1;
      }
    }
    else {
      iVar1 = (*param_4)(puVar5);
      if (iVar1 == 0) {
        iVar1 = (*param_4)(param_1,param_2 + -0xd);
        if (iVar1 == 0) goto LAB_007ab7b0;
LAB_007ab7cc:
        puVar5 = param_2 + -0xd;
      }
    }
    local_70 = *puVar5;
    uStack_6c = puVar5[1];
    uStack_68 = puVar5[2];
    uStack_64 = puVar5[3];
    uStack_60 = puVar5[4];
    uStack_5c = puVar5[5];
    uStack_58 = puVar5[6];
    uStack_54 = puVar5[7];
    local_50 = puVar5[8];
    uStack_4c = puVar5[9];
    uStack_48 = puVar5[10];
    uStack_44 = puVar5[0xb];
    local_40 = (code *)puVar5[0xc];
    puVar5 = param_1;
    puVar7 = param_2;
    while( true ) {
      iVar1 = (*param_4)(puVar5,&local_70);
      puVar6 = puVar5;
      while (iVar1 != 0) {
        puVar6 = puVar6 + 0xd;
        iVar1 = (*param_4)(puVar6,&local_70);
      }
      do {
        puVar8 = puVar7;
        puVar7 = puVar8 + -0xd;
        iVar1 = (*param_4)(&local_70);
      } while (iVar1 != 0);
      if (puVar7 <= puVar6) break;
      uVar12 = *puVar6;
      uVar13 = puVar6[1];
      uVar14 = puVar6[2];
      uVar15 = puVar6[3];
      uVar16 = puVar6[4];
      uVar17 = puVar6[5];
      uVar18 = puVar6[6];
      uVar19 = puVar6[7];
      uVar2 = puVar6[8];
      uVar3 = puVar6[9];
      uVar4 = puVar6[10];
      uVar10 = puVar6[0xb];
      uVar11 = puVar6[0xc];
      puVar5 = puVar6 + 0xd;
      uVar20 = puVar8[-0xc];
      uVar21 = puVar8[-0xb];
      uVar22 = puVar8[-10];
      uVar23 = puVar8[-9];
      uVar24 = puVar8[-8];
      uVar25 = puVar8[-7];
      uVar26 = puVar8[-6];
      *puVar6 = *puVar7;
      puVar6[1] = uVar20;
      puVar6[2] = uVar21;
      puVar6[3] = uVar22;
      puVar6[4] = uVar23;
      puVar6[5] = uVar24;
      puVar6[6] = uVar25;
      puVar6[7] = uVar26;
      uVar20 = puVar8[-4];
      uVar21 = puVar8[-3];
      uVar22 = puVar8[-2];
      uVar23 = puVar8[-1];
      puVar6[8] = puVar8[-5];
      puVar6[9] = uVar20;
      puVar6[10] = uVar21;
      puVar6[0xb] = uVar22;
      puVar6[0xc] = uVar23;
      puVar8[-0xd] = uVar12;
      puVar8[-0xc] = uVar13;
      puVar8[-0xb] = uVar14;
      puVar8[-10] = uVar15;
      puVar8[-9] = uVar16;
      puVar8[-8] = uVar17;
      puVar8[-7] = uVar18;
      puVar8[-6] = uVar19;
      puVar8[-5] = uVar2;
      puVar8[-4] = uVar3;
      puVar8[-3] = uVar4;
      puVar8[-2] = uVar10;
      puVar8[-1] = uVar11;
      puVar7 = puVar8 + -0xd;
    }
    param_3 = param_3 / 2;
    fn_007ab59c(puVar6,param_2,param_3,param_4);
    param_2 = puVar6;
    if ((int)puVar6 - (int)param_1 < 0x341) {
      return;
    }
  } while( true );
}


