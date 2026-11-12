#include "00208e24_002094ac.h"



undefined4 fn_002094ac(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  float *pfVar3;
  int iVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  
  iVar1 = fn_001cef44();
  if (iVar1 == 0) {
    iVar1 = fn_00174864(DAT_008977e4);
    if (iVar1 != 0) {
      pfVar3 = *(float **)(param_1 + 0xa0);
      local_30 = *pfVar3 + *(float *)(param_1 + 0xc4);
      local_2c = pfVar3[1] + *(float *)(param_1 + 200);
      local_28 = pfVar3[2] + *(float *)(param_1 + 0xcc);
      fn_00204158(iVar1,&local_30);
      iVar4 = *(int *)(param_1 + 0xa0);
      local_24 = *(float *)(iVar4 + 0xc) + *(float *)(param_1 + 0xc4);
      local_20 = *(float *)(iVar4 + 0x10) + *(float *)(param_1 + 200);
      local_1c = *(float *)(iVar4 + 0x14) + *(float *)(param_1 + 0xcc);
      fn_002041b0(iVar1,&local_24);
    }
    uVar5 = 0;
    if (*(int *)(param_1 + 0xb0) - *(int *)(param_1 + 0xac) >> 4 != 0) {
      do {
        local_30 = (float)CONCAT31(((unsigned int)(local_30) >> 8) & 0xffffff,
                                   *(undefined1 *)(*(int *)(param_1 + 0xac) + uVar5 * 0x10));
        iVar1 = fn_00164a34(param_1,local_30);
        if (((iVar1 != 0) && (iVar1 = fn_0017484c(DAT_008977e4), iVar1 != 0)) &&
           (iVar1 = fn_00165bb4(iVar1,&local_30), iVar1 != 0)) {
          iVar4 = *(int *)(param_1 + 0xac) + uVar5 * 0x10;
          fVar8 = *(float *)(param_1 + 0xc4);
          fVar9 = *(float *)(param_1 + 200);
          fVar6 = *(float *)(iVar4 + 4);
          fVar7 = *(float *)(iVar4 + 8);
          *(float *)(iVar1 + 0x14) = *(float *)(iVar4 + 0xc) + *(float *)(param_1 + 0xcc);
          *(float *)(iVar1 + 0xc) = fVar6 + fVar8;
          *(float *)(iVar1 + 0x10) = fVar7 + fVar9;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < (uint)(*(int *)(param_1 + 0xb0) - *(int *)(param_1 + 0xac) >> 4));
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



undefined4 fn_00209358(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined1 local_1c [8];
  
  (**(code **)(*param_1 + 0x48))(param_1);
  uVar1 = fn_00163e44(DAT_008977e4);
  fn_00163d24(uVar1,0,0,0,0);
  fn_00163e44(DAT_008977e4);
  fn_0016e2b8();
  fn_00148660(param_1);
  if ((uint)param_1[0x20] < (uint)((param_1[0x1e] - param_1[0x1d]) / 0x60)) {
    iVar4 = param_1[0x1d] + param_1[0x20] * 0x60;
    while( true ) {
      iVar2 = fn_006ba9e8(iVar4);
      if (iVar2 == 0) {
        fn_001cee1c(param_1);
        iVar4 = fn_00205f2c(param_1,iVar4);
        if (iVar4 == 0) {
          fn_00158f50(param_1);
          *(undefined1 *)(param_1 + 7) = 1;
        }
        param_1[0x20] = param_1[0x20] + 1;
        return 1;
      }
      iVar4 = fn_006ba9e8(iVar4);
      local_1c[0] = *(undefined1 *)(iVar4 + 5);
      fn_00159b18(local_1c,iVar4 + 0x59,iVar4 + 0x38,iVar4 + 0x48,0x61);
      uVar3 = param_1[0x20] + 1;
      param_1[0x20] = uVar3;
      if ((uint)((param_1[0x1e] - param_1[0x1d]) / 0x60) <= uVar3) break;
      iVar4 = param_1[0x1d] + uVar3 * 0x60;
    }
  }
  return 0;
}



void fn_00209288(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  
  fn_00158f50();
  piVar3 = (int *)param_1[0x25];
  piVar1 = (int *)*piVar3;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  *piVar3 = 0;
  puVar4 = (undefined4 *)param_1[0x22];
  fn_002feef8(*puVar4);
  *puVar4 = 0;
  param_1[0x21] = 0;
  iVar2 = fn_00174864(DAT_008977e4);
  if (iVar2 != 0) {
    fn_0015a9bc();
  }
  (**(code **)(*param_1 + 0x44))(param_1);
  iVar2 = fn_00174858(DAT_008977e4);
  if (iVar2 != 0) {
    if (*(int *)(iVar2 + 0x50) != 0) {
      fn_004055f8();
    }
    iVar2 = fn_0015c948(iVar2);
    if (iVar2 != 0) {
      fn_0017f8e0();
    }
  }
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  fn_001c2b7c(1);
  fn_001cedc8(param_1);
  return;
}



uint fn_00208e24(int param_1,byte *param_2,int param_3)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  byte bVar8;
  byte bVar9;
  int iVar10;
  byte bVar11;
  bool bVar12;
  undefined1 local_e0 [4];
  uint local_dc;
  undefined4 auStack_d8 [16];
  undefined1 auStack_98 [96];
  uint local_38;
  int local_30;
  byte *pbStack_2c;
  int iStack_28;
  
  local_30 = param_1;
  pbStack_2c = param_2;
  iStack_28 = param_3;
  fn_00301f50(local_e0,0x48);
  bVar11 = 0;
  iVar10 = 0;
  bVar8 = 0;
  if (param_3 < (int)(uint)*param_2) {
    while ((((((iVar3 = fn_00154ac8(0x12), iVar3 != 0 && (param_2[param_3 * 0x266c + 4] == 1)) &&
              (pbVar7 = param_2 + param_3 * 0x266c + 8, param_2[param_3 * 0x266c + 0x266d] == 0)) &&
             (((iVar3 = fn_001667e0(param_2 + param_3 * 0x266c + 0x2a,0x20), iVar3 == 0 &&
               (iVar3 = fn_001667e0(param_2 + param_3 * 0x266c + 0x2a,0x40), iVar3 == 0)) &&
              ((iVar3 = fn_001667e0(param_2 + param_3 * 0x266c + 0x2a,0x100), iVar3 == 0 &&
               ((iVar3 = fn_001667e0(param_2 + param_3 * 0x266c + 0x2a,0x200), iVar3 == 0 &&
                (iVar3 = fn_001667e0(param_2 + param_3 * 0x266c + 0x2a,0x80), iVar3 == 0)))))))) &&
            (iVar3 = fn_001667e0(param_2 + param_3 * 0x266c + 0x2a,0x2000), iVar3 == 0)) &&
           ((*(short *)(param_2 + param_3 * 0x266c + 0x22) != 0x15e &&
            (iVar3 = fn_001639e4(), iVar3 != 0x1a))))) {
      uVar2 = (ushort)param_2[param_3 * 0x266c + 0x266c];
      bVar12 = uVar2 != 0;
      if (!bVar12) {
        uVar2 = *(ushort *)(param_2 + param_3 * 0x266c + 0x28);
      }
      if (bVar12 || uVar2 != 1) break;
      iVar3 = fn_00174828(DAT_008977e4);
      iVar3 = fn_00163cd8((int)*(short *)(param_2 + param_3 * 0x266c + 0x22),
                           (int)*(char *)(iVar3 + (char)param_2[param_3 * 0x266c + 0x24] * 0x418 +
                                         -0x4027));
      if (iVar3 != 7) break;
      iVar3 = fn_00163a00((int)*(short *)(param_2 + param_3 * 0x266c + 0x22));
      if (local_dc == 0) {
        if (iVar3 != 1) {
          return 0;
        }
        iVar10 = 1;
        iVar3 = fn_00174828(DAT_008977e4);
        iVar4 = 0;
        local_e0[0] = 0;
        if ('\x02' < *(char *)(iVar3 + (char)param_2[param_3 * 0x266c + 0x25] * 0x418 + -0x4027))
        break;
        bVar9 = param_2[param_3 * 0x266c + 0x24];
        bVar11 = param_2[param_3 * 0x266c + 0x25];
        bVar8 = bVar9;
        iVar3 = fn_00164a34(local_30,bVar9);
        if (iVar3 == 0) {
LAB_00209090:
          cVar1 = *(char *)(local_30 + 0xf9);
          iVar10 = iVar4;
        }
        else {
          iVar3 = (int)(char)bVar8;
          uVar6 = iVar3 - 0x10;
          bVar12 = 3 < uVar6;
          if (bVar12) {
            uVar6 = iVar3 - 0x18;
          }
          if ((bVar12 && 3 < uVar6) && (iVar3 != 0x20 && iVar3 != 0x22)) goto LAB_00209090;
          cVar1 = *(char *)(local_30 + 0xf8);
        }
        if (cVar1 == '\0') break;
      }
      else {
        bVar9 = param_2[param_3 * 0x266c + 0x24];
        if (bVar9 == bVar8) break;
        bVar8 = bVar9;
        iVar4 = fn_00164a34(local_30,bVar9);
        iVar5 = 0;
        if (iVar4 != 0) {
          iVar4 = (int)(char)bVar8;
          uVar6 = iVar4 - 0x10;
          bVar12 = 3 < uVar6;
          if (bVar12) {
            uVar6 = iVar4 - 0x18;
          }
          if ((!bVar12 || uVar6 < 4) || (iVar4 == 0x20 || iVar4 == 0x22)) {
            iVar5 = 1;
          }
        }
        bVar12 = iVar5 == iVar10 && iVar3 == 1;
        if (iVar5 == iVar10 && iVar3 == 1) {
          bVar12 = param_2[param_3 * 0x266c + 0x25] == bVar11;
        }
        if (!bVar12) break;
      }
      if (0xf < local_dc) break;
      local_38 = (uint)param_2[param_3 * 0x266c + 5];
      iVar4 = param_3 + 1;
      auStack_d8[local_dc] = pbVar7;
      local_dc = local_dc + 1;
      iVar3 = fn_001c2540(param_2 + param_3 * 0x266c + 0x2a);
      if (iVar3 != 0) break;
      iVar3 = 0;
      if ('\0' < (char)param_2[param_3 * 0x266c + 0x1d]) {
        do {
          bVar8 = pbVar7[iVar3 * 0xc4 + 0xf68];
          if (bVar8 == 3) goto switchD_0020916c_caseD_0;
          if (bVar8 == 4) {
            switch(*(undefined2 *)(pbVar7 + iVar3 * 0xc4 + 0xf6a)) {
            default:
              goto switchD_0020916c_caseD_0;
            case 4:
              iVar5 = fn_001667c8(pbVar7 + iVar3 * 0xc4 + 0xfb0,2);
              if ((((iVar5 != 0) ||
                   (iVar5 = fn_001667c8(pbVar7 + iVar3 * 0xc4 + 0xfb0,3), iVar5 != 0)) ||
                  (iVar5 = fn_001667c8(pbVar7 + iVar3 * 0xc4 + 0xfb0,4), iVar5 != 0)) ||
                 ((iVar5 = fn_001667c8(pbVar7 + iVar3 * 0xc4 + 0xfb0,5), iVar5 != 0 ||
                  (iVar5 = fn_001667e0(pbVar7 + iVar3 * 0xc4 + 0xf72,2), iVar5 != 0))))
              goto switchD_0020916c_caseD_0;
            }
          }
          else if (bVar8 == 0x12 || bVar8 == 0x13) goto switchD_0020916c_caseD_0;
          iVar3 = iVar3 + 1;
        } while (iVar3 < (char)param_2[param_3 * 0x266c + 0x1d]);
      }
      param_3 = iVar4;
      bVar8 = bVar9;
      if ((int)(uint)*param_2 <= iVar4) break;
    }
  }
switchD_0020916c_caseD_0:
  if ((int)local_dc < 2) {
    return 0;
  }
  fn_002d6598(auStack_98,local_38);
  fn_002d6478(auStack_98,local_e0);
  fn_00209634(local_30,auStack_98);
  return local_dc;
}


