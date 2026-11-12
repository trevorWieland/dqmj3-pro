#include "007aa78c_007aa78c.h"



/* WARNING: Removing unreachable block (ram,0x007aa894) */
/* WARNING: Removing unreachable block (ram,0x007aa8a8) */
/* WARNING: Removing unreachable block (ram,0x007aa904) */
/* WARNING: Removing unreachable block (ram,0x007aa888) */

void fn_007aa78c(undefined4 *param_1,undefined4 *param_2,int param_3,code *param_4)

{
  longlong lVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
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
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  code *local_30;
  int local_2c;
  
  if ((int)param_2 - (int)param_1 < 0x1c1) {
    return;
  }
  do {
    if (param_3 == 0) {
      uVar6 = (int)param_2 - (int)param_1;
      if (0x37 < (int)uVar6) {
        iVar2 = (int)((longlong)(int)uVar6 * -0x6db6db6d + ((ulonglong)uVar6 << 0x20) >> 0x20);
        local_2c = (iVar2 >> 4) - (iVar2 >> 0x1f);
        iVar2 = (local_2c + -2) / 2;
        while( true ) {
          puVar3 = param_1 + iVar2 * 7;
          local_48 = puVar3[1];
          local_44 = puVar3[2];
          local_40 = puVar3[3];
          local_3c = puVar3[4];
          local_38 = puVar3[5];
          uStack_34 = puVar3[6];
          local_30 = param_4;
          fn_007a0058(param_1,iVar2,local_2c,*puVar3);
          if (iVar2 == 0) break;
          iVar2 = iVar2 + -1;
        }
      }
      while (0x1c < (int)uVar6) {
        if (param_1 != param_2) {
          uVar7 = param_2[-7];
          local_48 = param_2[-6];
          local_44 = param_2[-5];
          local_40 = param_2[-4];
          local_3c = param_2[-3];
          uVar8 = param_1[1];
          uVar9 = param_1[2];
          uVar10 = param_1[3];
          uVar11 = param_1[4];
          uVar12 = param_1[5];
          uVar13 = param_1[6];
          uVar6 = (int)param_2 + (-0x1c - (int)param_1);
          local_38 = param_2[-2];
          uStack_34 = param_2[-1];
          param_2[-7] = *param_1;
          param_2[-6] = uVar8;
          param_2[-5] = uVar9;
          param_2[-4] = uVar10;
          param_2[-3] = uVar11;
          param_2[-2] = uVar12;
          param_2[-1] = uVar13;
          iVar2 = (int)((longlong)(int)uVar6 * -0x6db6db6d + ((ulonglong)uVar6 << 0x20) >> 0x20);
          local_30 = param_4;
          fn_007a0058(param_1,0,(iVar2 >> 4) - (iVar2 >> 0x1f),uVar7);
        }
        param_2 = param_2 + -7;
        uVar6 = (int)param_2 - (int)param_1;
      }
      return;
    }
    lVar1 = (longlong)((int)param_2 - (int)param_1) * -0x6db6db6d +
            ((ulonglong)(uint)((int)param_2 - (int)param_1) << 0x20);
    iVar2 = (int)((ulonglong)lVar1 >> 0x20);
    puVar3 = param_1 + ((iVar2 >> 5) - (iVar2 >> 0x1f)) * 7;
    iVar2 = (*param_4)(param_1,puVar3,(int)lVar1);
    if (iVar2 == 0) {
      iVar2 = (*param_4)(param_1,param_2 + -7);
      if (iVar2 == 0) {
        iVar2 = (*param_4)(puVar3,param_2 + -7);
        if (iVar2 != 0) goto LAB_007aa9f4;
      }
      else {
LAB_007aa9d8:
        puVar3 = param_1;
      }
    }
    else {
      iVar2 = (*param_4)(puVar3);
      if (iVar2 == 0) {
        iVar2 = (*param_4)(param_1,param_2 + -7);
        if (iVar2 == 0) goto LAB_007aa9d8;
LAB_007aa9f4:
        puVar3 = param_2 + -7;
      }
    }
    local_48 = *puVar3;
    local_44 = puVar3[1];
    local_40 = puVar3[2];
    local_3c = puVar3[3];
    local_38 = puVar3[4];
    uStack_34 = puVar3[5];
    local_30 = (code *)puVar3[6];
    puVar3 = param_1;
    puVar4 = param_2;
    while( true ) {
      iVar2 = (*param_4)(puVar3,&local_48);
      while (iVar2 != 0) {
        puVar3 = puVar3 + 7;
        iVar2 = (*param_4)(puVar3,&local_48);
      }
      do {
        puVar5 = puVar4;
        puVar4 = puVar5 + -7;
        iVar2 = (*param_4)(&local_48);
      } while (iVar2 != 0);
      if (puVar4 <= puVar3) break;
      uVar14 = puVar5[-6];
      uVar15 = puVar5[-5];
      uVar16 = puVar5[-4];
      uVar17 = puVar5[-3];
      uVar18 = puVar5[-2];
      uVar19 = puVar5[-1];
      uVar7 = *puVar3;
      uVar8 = puVar3[1];
      uVar9 = puVar3[2];
      uVar10 = puVar3[3];
      uVar11 = puVar3[4];
      uVar12 = puVar3[5];
      uVar13 = puVar3[6];
      *puVar3 = *puVar4;
      puVar3[1] = uVar14;
      puVar3[2] = uVar15;
      puVar3[3] = uVar16;
      puVar3[4] = uVar17;
      puVar3[5] = uVar18;
      puVar3[6] = uVar19;
      puVar3 = puVar3 + 7;
      *puVar4 = uVar7;
      puVar5[-6] = uVar8;
      puVar5[-5] = uVar9;
      puVar5[-4] = uVar10;
      puVar5[-3] = uVar11;
      puVar5[-2] = uVar12;
      puVar5[-1] = uVar13;
    }
    param_3 = param_3 / 2;
    fn_007aa78c(puVar3,param_2,param_3,param_4);
    param_2 = puVar3;
    if ((int)puVar3 - (int)param_1 < 0x1c1) {
      return;
    }
  } while( true );
}


