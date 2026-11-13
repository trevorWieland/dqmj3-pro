#include "0059c438_0059cec0.h"



undefined4 fn_0059cec0(int param_1)

{
  int iVar1;
  undefined1 auStack_2710 [5392];
  undefined1 auStack_1200 [2264];
  undefined1 auStack_928 [2312];
  
  iVar1 = *(int *)(param_1 + 0x118);
  if (iVar1 == 0) {
    iVar1 = fn_0077f7d0(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x100) + 0x3c) + 4),1);
    if ((iVar1 != 0) &&
       (iVar1 = fn_0040f628(*(undefined4 *)(*(int *)(param_1 + 0x100) + 0x3c)), iVar1 == 1)) {
      *(undefined4 *)(param_1 + 0x118) = 1;
      *(undefined4 *)(param_1 + 0x11c) = 1;
    }
  }
  else if (iVar1 == 1) {
    if (*(int *)(param_1 + 0x11c) == 3) {
      fn_00370500(*(undefined4 *)(*(int *)(param_1 + 0xf0) + 0x10));
      fn_0017821c(auStack_2710,*(int *)(param_1 + 0x110) + 0x8f0,0x1510);
      fn_00370494(*(undefined4 *)(*(int *)(param_1 + 0xf0) + 0x10),auStack_2710);
      iVar1 = *(int *)(param_1 + 0xf0);
      fn_0017821c(auStack_1200,*(int *)(param_1 + 0x110) + 0x18,0x8d8);
      fn_0017821c(auStack_928,auStack_1200,0x8d8);
      fn_0017821c(iVar1 + 0x14,auStack_928,0x8d8);
      fn_00747f28(param_1,DAT_00898214,(char *)&DAT_0059d038,0,1,0,0);
      *(undefined4 *)(param_1 + 0x118) = 2;
      return 1;
    }
  }
  else if (iVar1 == 3) {
    *(undefined1 *)(*(int *)(param_1 + 0x5c) + 0x31) = 0;
    fn_0074804c(param_1,DAT_00898214,(char *)&DAT_0059d058);
    *(undefined4 *)(param_1 + 0xe4) = 6;
  }
  return 0;
}



undefined4 fn_0059ce34(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  fn_0040f564(*(undefined4 *)(*(int *)(param_1 + 0x100) + 0x3c),1);
  iVar1 = fn_0077f7d0(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x100) + 0x3c) + 4),1);
  if (iVar1 != 0) {
    iVar1 = fn_0040f628(*(undefined4 *)(*(int *)(param_1 + 0x100) + 0x3c));
    if (iVar1 == 0) {
      uVar2 = 1;
      *(undefined4 *)(param_1 + 0x118) = 0;
    }
    else {
      iVar1 = fn_0040f628(*(undefined4 *)(*(int *)(param_1 + 0x100) + 0x3c));
      if (iVar1 == 1) {
        *(undefined4 *)(param_1 + 0x118) = 1;
        uVar2 = 1;
        *(undefined4 *)(param_1 + 0x11c) = 1;
      }
    }
  }
  return uVar2;
}



void fn_0059cd10(int param_1)

{
  fn_005db474(*(undefined4 *)(param_1 + 0xf0),0,1);
  fn_005db474(*(undefined4 *)(param_1 + 0xf0),2,1);
  fn_005db474(*(undefined4 *)(param_1 + 0xf0),3,1);
  fn_005db474(*(undefined4 *)(param_1 + 0xf0),7,1);
  *(undefined4 *)(*(int *)(param_1 + 0xf0) + 0x10) = DAT_00897828;
  *(undefined1 *)(*(int *)(param_1 + 0xf0) + 0x8ed) = 0;
  return;
}



undefined4 * fn_0059cbd8(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  
  puVar3 = (undefined4 *)fn_002fdf94(param_1,param_2,0x11);
  *puVar3 = &DAT_00845d74;
  if ((((byte)DAT_008c62fc & 1) == 0) && (iVar4 = fn_00303afc(&DAT_008c62fc), iVar4 != 0)) {
    DAT_008f9e2c = 0;
    DAT_008f9e30 = 0;
    DAT_008f9e34 = 0;
  }
  uVar2 = DAT_008f9e34;
  uVar1 = DAT_008f9e30;
  puVar3[0x16] = DAT_008f9e2c;
  puVar3[0x17] = uVar1;
  puVar3[0x18] = uVar2;
  return puVar3;
}



void fn_0059c9b0(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == 4) {
    piVar2 = *(int **)(param_1 + 0x14);
    iVar1 = piVar2[0x5c];
    uVar3 = *(undefined4 *)(iVar1 + 0x24);
    uVar4 = *(undefined4 *)(iVar1 + 0x28);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(iVar1 + 0x20);
    *(undefined4 *)(param_1 + 0x5c) = uVar3;
    *(undefined4 *)(param_1 + 0x60) = uVar4;
    (**(code **)(*piVar2 + 0x44))(piVar2,6,4,0);
    *(undefined4 *)(param_1 + 0xc) = 5;
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  else if (iVar1 == 5) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x14) + 0x24))
                      (*(int **)(param_1 + 0x14),param_1 + 0x58);
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0xc) = 6;
      *(undefined4 *)(param_1 + 0x10) = 0;
      fn_002fdea0(param_1);
      return;
    }
  }
  else if (iVar1 == 6) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x14) + 0x28))
                      (*(int **)(param_1 + 0x14),param_1 + 0x58);
    if (iVar1 == 0) {
      iVar1 = fn_002fdebc(param_1,0x3c);
      if (iVar1 != 0) {
        (**(code **)(**(int **)(param_1 + 0x14) + 0x1dc))(*(int **)(param_1 + 0x14),1,0x10,0);
        (**(code **)(**(int **)(param_1 + 0x14) + 0x44))(*(int **)(param_1 + 0x14),0,4);
      }
    }
    else {
      *(undefined4 *)(param_1 + 0xc) = 7;
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    iVar1 = fn_006aff38(*(undefined4 *)(param_1 + 0x14),0);
    if ((iVar1 != 0) && (iVar1 = (**(code **)(**(int **)(param_1 + 0x14) + 0x1a4))(), iVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0059cbc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(int **)(param_1 + 0x14) + 0x1a8))(*(int **)(param_1 + 0x14),0);
      return;
    }
  }
  else if (iVar1 == 7) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x14) + 0x78))(*(int **)(param_1 + 0x14),1);
    if ((iVar1 != 0xf) &&
       (iVar1 = (**(code **)(**(int **)(param_1 + 0x14) + 0x78))(*(int **)(param_1 + 0x14),1),
       iVar1 != 3)) {
      fn_006c3a0c(*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x170));
      iVar1 = fn_001c7160(*(undefined4 *)(param_1 + 0x14));
      if (iVar1 == 0) {
        return;
      }
    }
    (**(code **)(**(int **)(param_1 + 0x14) + 0x1e0))(*(int **)(param_1 + 0x14),1);
    fn_002171d4(*(undefined4 *)(param_1 + 0x14),0,0x3c);
    return;
  }
  return;
}



void fn_0059c7f0(int param_1)

{
  int iVar1;
  undefined1 local_18 [16];
  
  (**(code **)(*(int *)(param_1 + 0x2c) + 0x10))(param_1 + 0x2c,0);
  (**(code **)(**(int **)(param_1 + 0x14) + 0x94))();
  iVar1 = fn_006a80b8(*(undefined4 *)(param_1 + 0x14),local_18);
  if ((iVar1 != 0) ||
     (iVar1 = (**(code **)(**(int **)(param_1 + 0x14) + 0x2c))(*(int **)(param_1 + 0x14),local_18,1)
     , iVar1 != 0)) {
    (**(code **)(*(int *)(param_1 + 0x2c) + 0x1c))(param_1 + 0x2c,0xffffffff);
    *(undefined4 *)(param_1 + 0xc) = 1;
  }
  return;
}



void fn_0059c790(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  (**(code **)(*(int *)param_1[5] + 0x94))();
  iVar1 = (**(code **)(param_1[0xb] + 0x14))(param_1 + 0xb,param_1[5]);
  if (iVar1 == 0) {
    return;
  }
  uVar2 = (**(code **)(param_1[0xb] + 0xc))(param_1 + 0xb);
                    /* WARNING: Could not recover jumptable at 0x0059c7e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1,uVar2);
  return;
}



undefined4 fn_0059c438(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
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
  
  iVar8 = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  local_38 = (undefined4 *)0x0;
  local_34 = (undefined4 *)0x0;
  local_30 = (undefined4 *)0x0;
  if (0 < *(int *)(*(int *)(param_1 + 0x14) + 400) - *(int *)(*(int *)(param_1 + 0x14) + 0x18c) >> 2
     ) {
    do {
      fn_006bb518(*(undefined4 *)(param_1 + 0x14),(int)(short)iVar8);
      puVar4 = local_34;
      if (local_34 == local_30) {
        uVar1 = ((int)local_34 - (int)local_38) / 0xc;
        if (uVar1 < (uint)(((int)local_30 - (int)local_38) / 0xc)) {
          if (local_34 != (undefined4 *)0x0) {
            *local_34 = local_34[-3];
            local_34[1] = local_34[-2];
            local_34[2] = local_34[-1];
          }
          puVar4 = local_34 + -3;
          puVar2 = local_34;
          if (local_34 < puVar4) {
            if (0 < (int)puVar4 - (int)local_34) {
              uVar1 = ((int)puVar4 - (int)local_34) / 0xc;
              if ((uVar1 & 1) != 0) {
                puVar4 = local_34 + -6;
                puVar2 = local_34 + -3;
                *puVar2 = *puVar4;
                local_34[-2] = local_34[-5];
                local_34[-1] = local_34[-4];
              }
              for (iVar6 = (int)uVar1 >> 1; iVar6 != 0; iVar6 = iVar6 + -1) {
                uVar7 = puVar4[-2];
                uVar10 = puVar4[-1];
                puVar2[-3] = puVar4[-3];
                puVar2[-2] = uVar7;
                puVar2[-1] = uVar10;
                uVar7 = puVar4[-5];
                uVar10 = puVar4[-4];
                puVar2[-6] = puVar4[-6];
                puVar2[-5] = uVar7;
                puVar2[-4] = uVar10;
                puVar2 = puVar2 + -6;
                puVar4 = puVar4 + -6;
              }
            }
          }
          else {
            while (local_34 != puVar4) {
              uVar7 = puVar4[-2];
              uVar10 = puVar4[-1];
              puVar2[-3] = puVar4[-3];
              puVar2[-2] = uVar7;
              puVar2[-1] = uVar10;
              puVar4 = puVar4 + -3;
              puVar2 = puVar2 + -3;
            }
          }
          *local_34 = in_s0;
          local_34[1] = in_s1;
          local_34[2] = in_s2;
          puVar4 = local_34 + 3;
        }
        else {
          uVar9 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
          if (uVar9 < uVar1 + 0x20) {
            uVar9 = uVar1 + 0x20;
          }
          uVar7 = in_s1;
          uVar10 = in_s0;
          uVar13 = in_s2;
          puVar3 = (undefined4 *)fn_00100fc6(uVar9 * 0xc,0);
          puVar2 = puVar3;
          for (puVar5 = local_38; puVar5 != puVar4; puVar5 = puVar5 + 3) {
            if (puVar2 != (undefined4 *)0x0) {
              uVar11 = puVar5[1];
              uVar12 = puVar5[2];
              *puVar2 = *puVar5;
              puVar2[1] = uVar11;
              puVar2[2] = uVar12;
            }
            puVar2 = puVar2 + 3;
          }
          puVar2 = puVar3 + (((int)puVar4 - (int)local_38) / 0xc) * 3;
          if (puVar2 != (undefined4 *)0x0) {
            *puVar2 = uVar10;
            puVar2[1] = uVar7;
            puVar2[2] = uVar13;
          }
          puVar2 = puVar3 + (((int)puVar4 - (int)local_38) / 0xc) * 3;
          for (; puVar4 != local_34; puVar4 = puVar4 + 3) {
            puVar5 = puVar2 + 3;
            if (puVar5 != (undefined4 *)0x0) {
              in_s0 = *puVar4;
              in_s1 = puVar4[1];
              in_s2 = puVar4[2];
              *puVar5 = in_s0;
              puVar2[4] = in_s1;
              puVar2[5] = in_s2;
            }
            puVar2 = puVar5;
          }
          iVar6 = (int)local_34 - (int)local_38;
          puVar4 = local_38;
          if (local_34 < local_38) {
            do {
              puVar4 = puVar4 + 3;
            } while (puVar4 != local_34);
          }
          fn_001008c4(local_38,((int)local_30 - (int)local_38) / 0xc,0);
          local_30 = puVar3 + uVar9 * 3;
          local_38 = puVar3;
          puVar4 = puVar3 + (iVar6 / 0xc) * 3 + 3;
        }
      }
      else {
        puVar4 = local_34 + 3;
        if (local_34 != (undefined4 *)0x0) {
          *local_34 = in_s0;
          local_34[1] = in_s1;
          local_34[2] = in_s2;
        }
      }
      local_34 = puVar4;
      iVar8 = iVar8 + 1;
    } while (iVar8 < *(int *)(*(int *)(param_1 + 0x14) + 400) -
                     *(int *)(*(int *)(param_1 + 0x14) + 0x18c) >> 2);
  }
  (**(code **)(*(int *)(param_1 + 0x2c) + 0x20))(param_1 + 0x2c,&local_38,10);
  (**(code **)(*(int *)(param_1 + 0x2c) + 0x1c))(param_1 + 0x2c,0);
  puVar4 = local_38;
  if (local_34 < local_38) {
    do {
      puVar4 = puVar4 + 3;
    } while (puVar4 != local_34);
  }
  fn_001008c4(local_38,((int)local_30 - (int)local_38) / 0xc,0);
  return 1;
}


