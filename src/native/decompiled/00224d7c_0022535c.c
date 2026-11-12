#include "00224d7c_0022535c.h"



void fn_0022535c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  
  if ((char)param_1[0x65] != -1) {
    fn_00223ff8(param_1,0,0,param_4,param_4);
  }
  fn_00226228(param_1);
  (**(code **)(*param_1 + 0x54))(param_1,0);
  fn_00259728(param_1 + 0x71,1);
  if (-1 < param_1[0x72]) {
    (**(code **)(**(int **)(DAT_008977e0 + 0x2c) + 0xc))();
    param_1[0x72] = -1;
  }
  if (-1 < param_1[0x73]) {
    (**(code **)(**(int **)(DAT_008977e0 + 0x2c) + 0xc))();
    param_1[0x73] = -1;
  }
  uVar8 = 0;
  uVar9 = *(undefined4 *)(DAT_008977e0 + 0x2c);
  do {
    fn_0023d3f4(uVar9,(&DAT_007c0e44)[uVar8]);
    uVar8 = uVar8 + 1;
  } while (uVar8 < 0x17);
  fn_0021bad0(DAT_008977e0);
  iVar1 = fn_006a7f8c(param_1 + 0x66);
  if (iVar1 != 0) {
    fn_00223510(param_1);
  }
  if ((int *)param_1[0x61] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x61] + 4))();
    param_1[0x61] = 0;
  }
  param_1[0x38] = -1;
  iVar1 = param_1[0x62];
  piVar2 = *(int **)(iVar1 + 0x18);
  piVar4 = *(int **)(iVar1 + 0x1c);
  if (piVar2 < piVar4) {
    iVar5 = 1;
    iVar6 = (int)piVar4 - (int)piVar2 >> 2;
    if (1 < iVar6 + 1) {
      do {
        iVar10 = *piVar2;
        iVar5 = iVar5 + 1;
        piVar2 = piVar2 + 1;
        if (iVar10 != 0) {
          *(undefined4 *)(iVar10 + 0xc) = 0;
        }
      } while (iVar5 < iVar6 + 1);
    }
  }
  else {
    while (piVar2 != piVar4) {
      iVar6 = *piVar2;
      piVar2 = piVar2 + 1;
      if (iVar6 != 0) {
        *(undefined4 *)(iVar6 + 0xc) = 0;
      }
    }
  }
  *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(iVar1 + 0x18);
  *(undefined1 *)((int)param_1 + 0x23b) = 0;
  fn_00162d54(*(undefined4 *)(*(int *)(DAT_008977e0 + 8) + 0x24),param_1[0x62]);
  uVar7 = param_1[0x7f];
  param_1[0x7f] = 0;
  uVar3 = param_1[0x80];
  param_1[0x80] = 0;
  iVar1 = param_1[0x81];
  param_1[0x81] = 0;
  uVar8 = uVar7;
  if (uVar3 < uVar7) {
    do {
      uVar8 = uVar8 + 0x44;
    } while (uVar8 != uVar3);
  }
  fn_001008c4(uVar7,(int)(iVar1 - uVar7) / 0x44,0);
  *(undefined1 *)(param_1 + 0x83) = 0;
  *(undefined1 *)((int)param_1 + 0x20d) = 0;
  *(undefined1 *)((int)param_1 + 0x20e) = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x8a] = 0;
  return;
}



undefined4 fn_00225150(int param_1,float *param_2)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  
  fVar5 = 0.0;
  if (*(char *)(param_1 + 0x23f) != '\0') {
    if ((((byte)DAT_008c62fc & 1) == 0) && (iVar2 = fn_00303afc(&DAT_008c62fc), iVar2 != 0)) {
      DAT_008f9e2c = fVar5;
      DAT_008f9e30 = fVar5;
      DAT_008f9e34 = fVar5;
    }
    fn_00223998(param_1,0x7536,1,&DAT_008f9e2c,0xffffffff);
    return 1;
  }
  bVar3 = *(int *)(param_1 + 400) != 0;
  cVar1 = '\0';
  if (bVar3) {
    cVar1 = *(char *)(param_1 + 0x194);
  }
  if (bVar3 && cVar1 != -1) {
    iVar2 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc));
    iVar2 = (int)*(short *)(iVar2 + 0x1c);
  }
  else {
    iVar2 = 0;
  }
  iVar2 = fn_001a46f4(iVar2);
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = (int)*(char *)(param_1 + 0x194);
  if (iVar2 != -1) {
    if (*(int *)(param_1 + 400) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc));
      iVar2 = (int)*(short *)(iVar2 + 0x1c);
    }
    iVar2 = fn_00242b6c(iVar2);
    if (iVar2 == 2) goto LAB_0022529c;
  }
  bVar3 = *(int *)(param_1 + 400) != 0;
  if (bVar3) {
    iVar2 = (int)*(char *)(param_1 + 0x194);
  }
  if (bVar3 && iVar2 != -1) {
    iVar2 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc));
    iVar2 = (int)*(short *)(iVar2 + 0x1c);
  }
  else {
    iVar2 = 0;
  }
  iVar2 = fn_00242b0c(iVar2);
  if (iVar2 != 1) {
    return 0;
  }
LAB_0022529c:
  if (param_2[1] < fVar5) {
    fVar4 = *param_2;
    bVar3 = fVar4 == fVar5;
    if (bVar3) {
      fVar4 = param_2[2];
    }
    if (!bVar3 || (!bVar3 || fVar4 != fVar5)) {
      if ((((byte)DAT_008c62fc & 1) == 0) && (iVar2 = fn_00303afc(&DAT_008c62fc), iVar2 != 0)) {
        DAT_008f9e2c = fVar5;
        DAT_008f9e30 = fVar5;
        DAT_008f9e34 = fVar5;
      }
      fn_00223998(param_1,0x7532,2,&DAT_008f9e2c,0xffffffff);
      return 1;
    }
  }
  return 0;
}



bool fn_00224f68(int param_1,float *param_2,short *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 local_44;
  float local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  int local_34;
  char local_30 [12];
  
  uVar1 = fn_006f7388(DAT_008977e0);
  iVar2 = fn_006b4240(uVar1,*(undefined4 *)(param_3 + 8));
  if (iVar2 == 0) {
    return false;
  }
  uVar1 = fn_006bab38(iVar2,(int)*param_3);
  if (*(char *)(param_1 + 0x194) == -1) {
    uVar4 = 0;
  }
  else {
    if (*(int *)(param_1 + 400) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc));
      iVar2 = (int)*(short *)(iVar2 + 0x1c);
    }
    uVar4 = fn_00242b6c(iVar2);
  }
  if (*(char *)(param_1 + 0x194) == -1) {
    uVar3 = 0;
  }
  else {
    if (*(int *)(param_1 + 400) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc));
      iVar2 = (int)*(short *)(iVar2 + 0x1c);
    }
    uVar3 = fn_00242b0c(iVar2);
  }
  fVar7 = *param_2;
  uVar8 = 0;
  bVar6 = fVar7 == 0.0;
  if (bVar6) {
    fVar7 = param_2[2];
  }
  if (bVar6 && (bVar6 && fVar7 == 0.0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
    iVar2 = fn_006a9938(param_1);
    if ((iVar2 != 0) && (iVar2 = fn_006a7bf8(param_1,*(undefined4 *)(param_1 + 0x1f8)), iVar2 != 0)
       ) {
      local_3c = 1;
      goto LAB_00225088;
    }
  }
  local_3c = 0;
LAB_00225088:
  local_30[0] = -1;
  local_34 = 0;
  uStack_38 = 0;
  local_44 = uVar3;
  local_40 = (float)uVar5;
  fn_0025977c(&local_34,local_30,param_1,uVar1,uVar4);
  bVar6 = local_34 != 0;
  if (bVar6) {
    local_40 = (1.0 / *(float *)(param_1 + 0x3c)) *
               (*(float *)(param_3 + 4) - *(float *)(param_1 + 0x24));
    local_44 = uVar8;
    local_3c = uVar8;
    fn_002598e0(&local_44,param_1,uVar1);
    fn_00223998(param_1,local_34,0,&local_44,(int)local_30[0]);
  }
  return bVar6;
}



void fn_00224d7c(int param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint unaff_r10;
  float fVar9;
  
  bVar3 = false;
  bVar2 = false;
  uVar6 = *(uint *)(param_1 + 0x200);
  uVar8 = *(uint *)(param_1 + 0x1fc);
  do {
    if (uVar8 == uVar6) {
      return;
    }
    uVar4 = *(uint *)(uVar8 + 0x24);
    if (((*(byte *)(param_1 + 0x234) & 0xc) == 0) || ((uVar4 & 0xc) != 0)) {
      if (bVar3) goto LAB_00224dc0;
    }
    else {
      if (!bVar3) {
        if (*(float *)(uVar8 + 0x10) <= 0.0) goto LAB_00224e58;
        bVar3 = true;
        unaff_r10 = uVar8;
      }
LAB_00224dc0:
      if ((uVar4 & 0xc) != 0) {
        if (bVar2) {
          return;
        }
        if (*(uint *)(param_1 + 0x1fc) == uVar6) {
          return;
        }
        uVar4 = uVar8;
        uVar5 = unaff_r10;
        if (uVar8 < uVar6) {
          iVar7 = uVar6 - uVar8;
          if (0 < iVar7) {
            uVar4 = unaff_r10 - 0x44;
            uVar5 = uVar8 - 0x44;
            if ((iVar7 / 0x44 & 1U) != 0) {
              fn_0017821c(unaff_r10,uVar8,0x44);
              uVar4 = unaff_r10;
              uVar5 = uVar8;
            }
            for (iVar7 = iVar7 / 0x44 >> 1; iVar7 != 0; iVar7 = iVar7 + -1) {
              fn_0017821c(uVar4 + 0x44,uVar5 + 0x44,0x44);
              uVar4 = uVar4 + 0x88;
              uVar5 = uVar5 + 0x88;
              fn_0017821c(uVar4,uVar5,0x44);
            }
            uVar5 = unaff_r10 + ((int)(uVar6 - uVar8) / 0x44) * 0x44;
          }
        }
        else {
          for (; uVar4 != uVar6; uVar4 = uVar4 + 0x44) {
            fn_0017821c(uVar5,uVar4,0x44);
            uVar5 = uVar5 + 0x44;
          }
        }
        uVar6 = *(uint *)(param_1 + 0x200);
        if (uVar6 < uVar5) {
          do {
            uVar5 = uVar5 + 0x44;
          } while (uVar5 != uVar6);
        }
        *(uint *)(param_1 + 0x200) = uVar6 + ((int)(uVar8 - unaff_r10) / 0x44) * -0x44;
        return;
      }
      fVar9 = *(float *)(uVar8 + 0xc);
      bVar1 = fVar9 != 0.0;
      if (bVar1) {
        fVar9 = *(float *)(uVar8 + 0x14);
      }
      if (bVar1 && (bVar1 && fVar9 != 0.0)) {
        bVar2 = true;
      }
    }
LAB_00224e58:
    uVar8 = uVar8 + 0x44;
    *(uint *)(param_1 + 0x234) = uVar4;
  } while( true );
}


