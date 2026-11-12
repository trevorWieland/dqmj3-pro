#include "00567ca4_00568a60.h"



void fn_00568a60(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 0x14) + 0x48))();
  if (iVar1 == 0) {
    return;
  }
  (**(code **)(**(int **)(param_1 + 0x14) + 0x44))(*(int **)(param_1 + 0x14),6,4,0);
  *(undefined4 *)(param_1 + 0xc) = 4;
  fn_002fdea0(param_1);
  return;
}



void fn_00568980(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  (**(code **)(*(int *)param_1[5] + 0x44))((int *)param_1[5],6,4,0);
  (**(code **)(*(int *)param_1[5] + 0x94))();
  iVar1 = (**(code **)(param_1[0x16] + 0x14))(param_1 + 0x16,param_1[5]);
  if (iVar1 != 0) {
    uVar2 = (**(code **)(param_1[0x16] + 0xc))(param_1 + 0x16);
                    /* WARNING: Could not recover jumptable at 0x005689f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x20))(param_1,uVar2);
    return;
  }
  iVar1 = fn_002fdebc(param_1,0x3c);
  if (iVar1 == 0) {
    return;
  }
  (**(code **)(*(int *)param_1[5] + 0x1dc))((int *)param_1[5],1,0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00568a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)param_1[5] + 0x44))((int *)param_1[5],0,4);
  return;
}



void fn_00568840(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined1 local_30 [12];
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  
  iVar1 = (**(code **)(param_1[0x16] + 0xc))(param_1 + 0x16);
  (**(code **)(param_1[0x16] + 0x10))(param_1 + 0x16,iVar1 + -1);
  uVar2 = (**(code **)(param_1[0x16] + 0xc))(param_1 + 0x16);
  (**(code **)(param_1[0x16] + 0x10))(param_1 + 0x16,uVar2);
  iVar1 = (**(code **)(param_1[0x16] + 0xc))(param_1 + 0x16);
  (**(code **)(param_1[0x16] + 0x10))(param_1 + 0x16,iVar1 + 1);
  piVar3 = (int *)param_1[5];
  (**(code **)(*piVar3 + 0x94))();
  iVar1 = (**(code **)(*piVar3 + 0x1d4))(piVar3,local_30,local_24,local_18);
  if (iVar1 != 0) {
    iVar1 = (**(code **)(param_1[0x16] + 0xc))(param_1 + 0x16);
    (**(code **)(*param_1 + 0x20))(param_1,iVar1 + 1);
    return;
  }
  iVar1 = (**(code **)(*(int *)param_1[5] + 0x154))();
  if (iVar1 == 0) {
    uVar2 = 2;
  }
  else {
    uVar2 = 3;
  }
  (**(code **)(*(int *)param_1[5] + 0x44))((int *)param_1[5],uVar2,4,0);
  return;
}



undefined4 fn_005684c8(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 in_s0;
  undefined4 in_s1;
  undefined4 in_s2;
  undefined4 uVar12;
  undefined4 *local_38;
  undefined4 *local_34;
  undefined4 *local_30;
  
  fn_002fdeac();
  iVar9 = 0;
  local_38 = (undefined4 *)0x0;
  local_34 = (undefined4 *)0x0;
  local_30 = (undefined4 *)0x0;
  iVar2 = *(int *)(*(int *)(param_1 + 0x14) + 0x170);
  if (0 < *(int *)(iVar2 + 400) - *(int *)(iVar2 + 0x18c) >> 2) {
    do {
      fn_006bb518(*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x170),(int)(short)iVar9);
      puVar5 = local_34;
      if (local_34 == local_30) {
        uVar1 = ((int)local_34 - (int)local_38) / 0xc;
        if (uVar1 < (uint)(((int)local_30 - (int)local_38) / 0xc)) {
          if (local_34 != (undefined4 *)0x0) {
            *local_34 = local_34[-3];
            local_34[1] = local_34[-2];
            local_34[2] = local_34[-1];
          }
          puVar5 = local_34 + -3;
          puVar3 = local_34;
          if (local_34 < puVar5) {
            if (0 < (int)puVar5 - (int)local_34) {
              uVar1 = ((int)puVar5 - (int)local_34) / 0xc;
              if ((uVar1 & 1) != 0) {
                puVar5 = local_34 + -6;
                puVar3 = local_34 + -3;
                *puVar3 = *puVar5;
                local_34[-2] = local_34[-5];
                local_34[-1] = local_34[-4];
              }
              for (iVar2 = (int)uVar1 >> 1; iVar2 != 0; iVar2 = iVar2 + -1) {
                uVar8 = puVar5[-2];
                uVar11 = puVar5[-1];
                puVar3[-3] = puVar5[-3];
                puVar3[-2] = uVar8;
                puVar3[-1] = uVar11;
                uVar8 = puVar5[-5];
                uVar11 = puVar5[-4];
                puVar3[-6] = puVar5[-6];
                puVar3[-5] = uVar8;
                puVar3[-4] = uVar11;
                puVar3 = puVar3 + -6;
                puVar5 = puVar5 + -6;
              }
            }
          }
          else {
            while (local_34 != puVar5) {
              uVar8 = puVar5[-2];
              uVar11 = puVar5[-1];
              puVar3[-3] = puVar5[-3];
              puVar3[-2] = uVar8;
              puVar3[-1] = uVar11;
              puVar5 = puVar5 + -3;
              puVar3 = puVar3 + -3;
            }
          }
          *local_34 = in_s0;
          local_34[1] = in_s1;
          local_34[2] = in_s2;
          puVar5 = local_34 + 3;
        }
        else {
          uVar6 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
          uVar10 = uVar1 + 0x20;
          if (uVar1 + 0x20 <= uVar6) {
            uVar10 = uVar6;
          }
          uVar8 = in_s1;
          uVar11 = in_s0;
          uVar12 = in_s2;
          puVar4 = (undefined4 *)fn_00100fc6(uVar10 * 0xc,0);
          puVar3 = puVar4;
          for (puVar7 = local_38; puVar7 != puVar5; puVar7 = puVar7 + 3) {
            if (puVar3 != (undefined4 *)0x0) {
              in_s0 = *puVar7;
              in_s1 = puVar7[1];
              in_s2 = puVar7[2];
              *puVar3 = in_s0;
              puVar3[1] = in_s1;
              puVar3[2] = in_s2;
            }
            puVar3 = puVar3 + 3;
          }
          puVar3 = puVar4 + (((int)puVar5 - (int)local_38) / 0xc) * 3;
          if (puVar3 != (undefined4 *)0x0) {
            *puVar3 = uVar11;
            puVar3[1] = uVar8;
            puVar3[2] = uVar12;
          }
          puVar3 = puVar4 + (((int)puVar5 - (int)local_38) / 0xc) * 3;
          for (; puVar5 != local_34; puVar5 = puVar5 + 3) {
            puVar7 = puVar3 + 3;
            if (puVar7 != (undefined4 *)0x0) {
              in_s0 = *puVar5;
              in_s1 = puVar5[1];
              in_s2 = puVar5[2];
              *puVar7 = in_s0;
              puVar3[4] = in_s1;
              puVar3[5] = in_s2;
            }
            puVar3 = puVar7;
          }
          iVar2 = (int)local_34 - (int)local_38;
          puVar5 = local_38;
          if (local_34 <= local_38) {
            for (; puVar5 != local_34; puVar5 = puVar5 + 3) {
            }
          }
          fn_001008c4(local_38,((int)local_30 - (int)local_38) / 0xc,0);
          local_30 = puVar4 + uVar10 * 3;
          local_38 = puVar4;
          puVar5 = puVar4 + (iVar2 / 0xc) * 3 + 3;
        }
      }
      else {
        puVar5 = local_34 + 3;
        if (local_34 != (undefined4 *)0x0) {
          *local_34 = in_s0;
          local_34[1] = in_s1;
          local_34[2] = in_s2;
        }
      }
      local_34 = puVar5;
      iVar9 = iVar9 + 1;
      iVar2 = *(int *)(*(int *)(param_1 + 0x14) + 0x170);
    } while (iVar9 < *(int *)(iVar2 + 400) - *(int *)(iVar2 + 0x18c) >> 2);
  }
  (**(code **)(*(int *)(param_1 + 0x58) + 8))(param_1 + 0x58,&local_38);
  (**(code **)(*(int *)(param_1 + 0x58) + 0x1c))(param_1 + 0x58,1);
  fn_002fdea0(param_1);
  *(undefined4 *)(param_1 + 0xc) = 4;
  puVar5 = local_38;
  if (local_34 < local_38) {
    do {
      puVar5 = puVar5 + 3;
    } while (puVar5 != local_34);
  }
  fn_001008c4(local_38,((int)local_30 - (int)local_38) / 0xc,0);
  return 1;
}



void fn_005683a4(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = fn_006bb538(*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x170),(int)(short)param_2);
  if (iVar1 != 0) {
    if (*(char *)(iVar1 + 9) == '\x01') {
      (**(code **)(*(int *)(param_1 + 0x58) + 0x1c))(param_1 + 0x58,param_2 + 1);
      *(undefined4 *)(param_1 + 0xc) = 5;
      return;
    }
    if (*(char *)(iVar1 + 9) == '\x02') {
      (**(code **)(*(int *)(param_1 + 0x58) + 0x1c))(param_1 + 0x58,param_2 + 1);
      *(undefined4 *)(param_1 + 0xc) = 6;
      piVar2 = *(int **)(param_1 + 0x14);
      if (*(char *)(iVar1 + 10) == -1) {
                    /* WARNING: Could not recover jumptable at 0x00568484. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*piVar2 + 0x44))(piVar2,*(undefined4 *)(param_1 + 0x70),4,0);
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00568468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar2 + 0x44))(piVar2,(int)*(char *)(iVar1 + 10),4,0);
      return;
    }
  }
  (**(code **)(*(int *)(param_1 + 0x58) + 0x1c))(param_1 + 0x58,param_2 + 1);
  *(undefined4 *)(param_1 + 0xc) = 4;
  fn_002fdea0(param_1);
  return;
}



void fn_00568160(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0xc) == 4) {
    fn_00567f0c(param_1);
    return;
  }
  if ((*(int *)(param_1 + 0xc) == 5) &&
     (((iVar1 = fn_006b0d10(*(undefined4 *)(param_1 + 0x14),0), iVar1 == 0 ||
       (iVar2 = (**(code **)(**(int **)(param_1 + 0x14) + 0x48))(), iVar2 != 0)) ||
      (iVar2 = (**(code **)(**(int **)(param_1 + 0x14) + 0x4c))(), iVar2 != 0)))) {
    (**(code **)(**(int **)(param_1 + 0x14) + 0x1dc))(*(int **)(param_1 + 0x14),2,0x26,0);
    fn_00217988(*(undefined4 *)(param_1 + 0x14));
    if (iVar1 != 0) {
      fn_00683320(iVar1,0x16,0);
      return;
    }
  }
  return;
}



undefined4 fn_00567ea4(int param_1)

{
  fn_00214c4c(*(undefined4 *)(param_1 + 0x14),6,1);
  (**(code **)(**(int **)(param_1 + 0x14) + 0xe4))(*(int **)(param_1 + 0x14),0x1000981,0);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x10) = 0;
  (**(code **)(**(int **)(param_1 + 0x14) + 0x188))(*(int **)(param_1 + 0x14),1);
  return 1;
}



void fn_00567e74(int param_1)

{
  fn_00215e38(*(undefined4 *)(param_1 + 0x14),6,1);
                    /* WARNING: Could not recover jumptable at 0x00567ea0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x14) + 0x188))(*(int **)(param_1 + 0x14),0);
  return;
}



undefined4 fn_00567ca4(int param_1)

{
  int iVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  iVar1 = fn_006f7a84(DAT_008977e0);
  fVar4 = *(float *)(iVar1 + 0x24) - *(float *)(*(int *)(param_1 + 0x14) + 0x24);
  fn_00525bd0();
  fVar6 = 1.0;
  fn_001c7160(*(undefined4 *)(param_1 + 0x14));
  fVar3 = 0.0;
  local_28 = 0.0;
  local_20 = 0.0;
  fVar5 = ABS(fVar4);
  local_24 = fVar4;
  (**(code **)(**(int **)(param_1 + 0x14) + 0x94))();
  if (fVar3 < fVar5) {
    fVar6 = fVar6 / SQRT(local_28 * local_28 + local_24 * local_24 + local_20 * local_20);
    local_28 = local_28 * fVar6;
    fVar3 = local_24 * fVar6;
    local_20 = local_20 * fVar6;
    piVar2 = *(int **)(param_1 + 0x14);
    local_24 = fVar3;
    (**(code **)(*piVar2 + 0x94))(piVar2);
    local_1c = local_28 * fVar3;
    local_18 = local_24 * fVar3;
    local_14 = local_20 * fVar3;
    (**(code **)(*piVar2 + 0x38))(piVar2,&local_1c,0);
    return 0;
  }
  (**(code **)(**(int **)(param_1 + 0x14) + 0x38))(*(int **)(param_1 + 0x14),&local_28,0);
  return 1;
}


