#include "00589348_00589d30.h"



undefined4 fn_00589d30(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 in_s0;
  undefined4 in_s1;
  undefined4 in_s2;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 *local_38;
  undefined4 *local_34;
  undefined4 *local_30;
  
  fn_002fdeac();
  *(undefined4 *)(param_1 + 0xc) = 4;
  iVar8 = 0;
  local_38 = (undefined4 *)0x0;
  local_34 = (undefined4 *)0x0;
  local_30 = (undefined4 *)0x0;
  iVar2 = *(int *)(*(int *)(param_1 + 0x14) + 0x170);
  if (0 < *(int *)(iVar2 + 400) - *(int *)(iVar2 + 0x18c) >> 2) {
    do {
      fn_006bb518(*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x170),(int)(short)iVar8);
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
                uVar7 = puVar5[-2];
                uVar10 = puVar5[-1];
                puVar3[-3] = puVar5[-3];
                puVar3[-2] = uVar7;
                puVar3[-1] = uVar10;
                uVar7 = puVar5[-5];
                uVar10 = puVar5[-4];
                puVar3[-6] = puVar5[-6];
                puVar3[-5] = uVar7;
                puVar3[-4] = uVar10;
                puVar3 = puVar3 + -6;
                puVar5 = puVar5 + -6;
              }
            }
          }
          else {
            while (local_34 != puVar5) {
              uVar7 = puVar5[-2];
              uVar10 = puVar5[-1];
              puVar3[-3] = puVar5[-3];
              puVar3[-2] = uVar7;
              puVar3[-1] = uVar10;
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
          uVar9 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
          if (uVar9 < uVar1 + 0x20) {
            uVar9 = uVar1 + 0x20;
          }
          uVar7 = in_s0;
          uVar10 = in_s1;
          uVar13 = in_s2;
          puVar4 = (undefined4 *)fn_00100fc6(uVar9 * 0xc,0);
          puVar3 = puVar4;
          for (puVar6 = local_38; puVar6 != puVar5; puVar6 = puVar6 + 3) {
            if (puVar3 != (undefined4 *)0x0) {
              uVar11 = puVar6[1];
              uVar12 = puVar6[2];
              *puVar3 = *puVar6;
              puVar3[1] = uVar11;
              puVar3[2] = uVar12;
            }
            puVar3 = puVar3 + 3;
          }
          puVar3 = puVar4 + (((int)puVar5 - (int)local_38) / 0xc) * 3;
          if (puVar3 != (undefined4 *)0x0) {
            *puVar3 = uVar7;
            puVar3[1] = uVar10;
            puVar3[2] = uVar13;
          }
          puVar3 = puVar4 + (((int)puVar5 - (int)local_38) / 0xc) * 3;
          for (; puVar5 != local_34; puVar5 = puVar5 + 3) {
            puVar6 = puVar3 + 3;
            if (puVar6 != (undefined4 *)0x0) {
              in_s0 = *puVar5;
              in_s1 = puVar5[1];
              in_s2 = puVar5[2];
              *puVar6 = in_s0;
              puVar3[4] = in_s1;
              puVar3[5] = in_s2;
            }
            puVar3 = puVar6;
          }
          iVar2 = (int)local_34 - (int)local_38;
          puVar5 = local_38;
          if (local_34 < local_38) {
            do {
              puVar5 = puVar5 + 3;
            } while (puVar5 != local_34);
          }
          fn_001008c4(local_38,((int)local_30 - (int)local_38) / 0xc,0);
          local_30 = puVar4 + uVar9 * 3;
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
      iVar8 = iVar8 + 1;
      iVar2 = *(int *)(*(int *)(param_1 + 0x14) + 0x170);
    } while (iVar8 < *(int *)(iVar2 + 400) - *(int *)(iVar2 + 0x18c) >> 2);
  }
  (**(code **)(*(int *)(param_1 + 0x58) + 0x20))(param_1 + 0x58,&local_38,10);
  (**(code **)(*(int *)(param_1 + 0x58) + 0x1c))(param_1 + 0x58,0);
  puVar5 = local_38;
  if (local_34 < local_38) {
    do {
      puVar5 = puVar5 + 3;
    } while (puVar5 != local_34);
  }
  fn_001008c4(local_38,((int)local_30 - (int)local_38) / 0xc,0);
  return 1;
}



void fn_00589c18(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  iVar1 = fn_006bb538(*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x170),(int)(short)param_2);
  if (iVar1 != 0) {
    if (*(char *)(iVar1 + 9) == '\x01') {
      (**(code **)(*(int *)(param_1 + 0x58) + 0x1c))(param_1 + 0x58,param_2 + 1);
      uVar2 = 6;
      goto LAB_00589c68;
    }
    if (*(char *)(iVar1 + 9) == '\x02') {
      (**(code **)(*(int *)(param_1 + 0x58) + 0x1c))(param_1 + 0x58,param_2 + 1);
      *(undefined4 *)(param_1 + 0xc) = 7;
      piVar3 = *(int **)(param_1 + 0x14);
      if (*(char *)(iVar1 + 10) == -1) {
                    /* WARNING: Could not recover jumptable at 0x00589cec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*piVar3 + 0x44))(piVar3,*(undefined4 *)(param_1 + 0x84),4,0);
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00589cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar3 + 0x44))(piVar3,(int)*(char *)(iVar1 + 10),4,0);
      return;
    }
  }
  (**(code **)(*(int *)(param_1 + 0x58) + 0x1c))(param_1 + 0x58,param_2 + 1);
  uVar2 = 5;
LAB_00589c68:
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  return;
}



void fn_00589758(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  float in_s0;
  float in_s1;
  float in_s2;
  float fVar8;
  float fVar9;
  
  iVar1 = *(int *)(param_1 + 0xc);
  bVar7 = iVar1 == 5 || iVar1 == 6;
  if (iVar1 == 5 || iVar1 == 6) {
    bVar7 = *(int *)(param_1 + 0xac) == 0;
  }
  if ((bVar7) && (iVar1 = fn_006b0d10(*(undefined4 *)(param_1 + 0x14),0), iVar1 != 0)) {
    in_s0 = -1.0;
    iVar2 = fn_006bd500(param_1,iVar1,0);
    if ((iVar2 != 0) &&
       (iVar2 = fn_00214640(iVar1,*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x13c),2,0x28),
       iVar2 != 0)) {
      *(int *)(param_1 + 0xac) = iVar1;
      fn_00215e38(*(undefined4 *)(param_1 + 0x14),6,1);
    }
  }
  switch(*(undefined4 *)(param_1 + 0xc)) {
  case 4:
    piVar4 = *(int **)(param_1 + 0x14);
    if (*(int *)(param_1 + 0xac) != 0) {
      (**(code **)(*(int *)piVar4[0x5c] + 0x8c))();
      (**(code **)(*piVar4 + 0x88))(piVar4);
      *(undefined4 *)(param_1 + 0xc) = 8;
      *(undefined4 *)(param_1 + 0x10) = 0;
      return;
    }
    iVar1 = fn_006b0d10(piVar4,0);
    if (iVar1 == 0) {
      fn_0021718c(param_1,1,0x3c);
      return;
    }
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x114) = 0;
    iVar2 = *(int *)(param_1 + 0x14);
    uVar5 = *(undefined4 *)(iVar2 + 0x24);
    uVar6 = *(undefined4 *)(iVar2 + 0x28);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(iVar2 + 0x20);
    *(undefined4 *)(param_1 + 0x5c) = uVar5;
    *(undefined4 *)(param_1 + 0x60) = uVar6;
    uVar5 = *(undefined4 *)(iVar2 + 0x24);
    uVar6 = *(undefined4 *)(iVar2 + 0x28);
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(iVar2 + 0x20);
    *(undefined4 *)(param_1 + 0x68) = uVar5;
    *(undefined4 *)(param_1 + 0x6c) = uVar6;
    fn_006bd414(param_1,iVar1,(char *)&DAT_00589af0);
    fVar8 = *(float *)(iVar1 + 0x24);
    fVar9 = *(float *)(iVar1 + 0x28);
    *(float *)(param_1 + 0x70) = *(float *)(iVar1 + 0x20) + in_s0;
    *(float *)(param_1 + 0x74) = fVar8 + in_s1;
    *(float *)(param_1 + 0x78) = fVar9 + in_s2;
    fn_002fe2c0(param_1 + 0x88,(undefined4 *)(param_1 + 100),param_1 + 0x70);
    fn_001c72c0(*(undefined4 *)(param_1 + 0x14),param_1 + 0x70);
    fn_00214c4c(*(undefined4 *)(param_1 + 0x14),6,1);
    (**(code **)(**(int **)(param_1 + 0x14) + 0xe4))(*(int **)(param_1 + 0x14),0x1000981,0);
    *(undefined1 *)(*(int *)(param_1 + 0x14) + 4) = 1;
    *(undefined4 *)(param_1 + 0xc) = 5;
    *(undefined4 *)(param_1 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00589ac8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x14) + 0xe4))(*(int **)(param_1 + 0x14),0x1000981,0);
    return;
  case 5:
    if (*(int *)(param_1 + 0xac) != 0) {
      (**(code **)(**(int **)(param_1 + 0x14) + 0x44))(*(int **)(param_1 + 0x14),0x17,4,0);
    }
    fn_002fe164(param_1 + 0x88,*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x14));
    uVar3 = *(int *)(param_1 + 0x18) + 1;
    *(uint *)(param_1 + 0x18) = uVar3;
    if (0x18 < uVar3) {
      *(undefined4 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 0xc) = 6;
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(float *)(param_1 + 100) =
           (*(float *)(param_1 + 0x70) + *(float *)(param_1 + 0x70)) - *(float *)(param_1 + 100);
      *(float *)(param_1 + 0x6c) =
           (*(float *)(param_1 + 0x78) + *(float *)(param_1 + 0x78)) - *(float *)(param_1 + 0x6c);
      fn_002fe2c0(param_1 + 0x88,param_1 + 0x70,param_1 + 100);
      *(undefined4 *)(param_1 + 0xa8) = 0x14;
      return;
    }
    break;
  case 6:
    fn_00589654(param_1);
    return;
  case 7:
    (**(code **)(**(int **)(param_1 + 0x14) + 0x38))(*(int **)(param_1 + 0x14),param_1 + 0x7c,1);
    iVar1 = (**(code **)(**(int **)(param_1 + 0x14) + 0xec))();
    if ((iVar1 == 0) &&
       (uVar3 = *(int *)(param_1 + 0x18) + 1, *(uint *)(param_1 + 0x18) = uVar3, 0x3c < uVar3)) {
      fn_00215d9c(*(undefined4 *)(param_1 + 0x14),10,0,1);
      return;
    }
    break;
  case 8:
    iVar1 = (**(code **)(**(int **)(param_1 + 0x14) + 0x28))
                      (*(int **)(param_1 + 0x14),param_1 + 0x58);
    if (iVar1 != 0) {
      fn_0021718c(param_1,1,0x3c);
      return;
    }
  }
  return;
}



void fn_005895bc(int param_1)

{
  *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x114) = 2;
  fn_00215e38(*(undefined4 *)(param_1 + 0x14),6,1);
                    /* WARNING: Could not recover jumptable at 0x005895f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x14) + 0x188))(*(int **)(param_1 + 0x14),1);
  return;
}



void fn_0058945c(int param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (*(int *)(param_1 + 0xc) == 4) {
    fn_00589348(param_1);
    return;
  }
  if (*(int *)(param_1 + 0xc) == 5) {
    iVar1 = *(int *)(param_1 + 0x58);
    iVar2 = *(int *)(param_1 + 0x14);
    fVar6 = *(float *)(iVar1 + 0x20) - *(float *)(iVar2 + 0x20);
    fVar5 = *(float *)(iVar1 + 0x24) - *(float *)(iVar2 + 0x24);
    fVar4 = *(float *)(iVar1 + 0x28) - *(float *)(iVar2 + 0x28);
    fVar3 = *(float *)(*(int *)(iVar1 + 0x100) + 0xc);
    if (fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4 <= fVar3 * fVar3) {
      fn_001c7228(*(undefined4 *)(param_1 + 0x14),1);
      return;
    }
    *(undefined4 *)(param_1 + 0x18) = 0;
    (**(code **)(**(int **)(param_1 + 0x14) + 0x44))(*(int **)(param_1 + 0x14),1,4,0);
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return;
}



void fn_00589348(int param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  iVar2 = *(int *)(param_1 + 0x58);
  iVar1 = *(int *)(param_1 + 0x14);
  fVar5 = *(float *)(iVar2 + 0x20) - *(float *)(iVar1 + 0x20);
  fVar6 = *(float *)(iVar2 + 0x24) - *(float *)(iVar1 + 0x24);
  fVar4 = *(float *)(iVar2 + 0x28) - *(float *)(iVar1 + 0x28);
  fVar3 = *(float *)(*(int *)(*(int *)(param_1 + 0x58) + 0x100) + 0xc);
  if (fVar3 * fVar3 < fVar5 * fVar5 + fVar6 * fVar6 + fVar4 * fVar4) {
    (**(code **)(**(int **)(param_1 + 0x14) + 0x94))();
    fn_001c7228(*(undefined4 *)(param_1 + 0x14),1);
    return;
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  (**(code **)(**(int **)(param_1 + 0x14) + 0x44))(*(int **)(param_1 + 0x14),0,4);
  *(undefined4 *)(param_1 + 0xc) = 5;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}


