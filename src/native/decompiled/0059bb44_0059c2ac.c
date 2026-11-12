#include "0059bb44_0059c2ac.h"



void fn_0059c2ac(int param_1,int param_2)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  
  uVar6 = fn_006bb538(*(undefined4 *)(param_1 + 0x14),(int)(short)param_2);
  uVar4 = (uint)((ulonglong)uVar6 >> 0x20);
  iVar3 = (int)uVar6;
  if (iVar3 != 0) {
    uVar4 = (uint)*(char *)(iVar3 + 9);
  }
  if (iVar3 == 0 || uVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0059c40c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)(param_1 + 0x2c) + 0x1c))(param_1 + 0x2c,param_2 + 1);
    return;
  }
  uVar5 = *(uint *)(param_1 + 0x58);
  *(uint *)(param_1 + 0x58) = uVar4 & 7 | uVar5 & 0xfffffff8;
  *(uint *)(param_1 + 0x58) = uVar4 & 7 | uVar5 & 0xfffff800 | (uint)*(byte *)(iVar3 + 10) << 3;
  uVar4 = (**(code **)(*(int *)(param_1 + 0x2c) + 0xc))(param_1 + 0x2c);
  *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) & 0xfff807ff | (uVar4 & 0xff) << 0xb;
  sVar2 = (**(code **)(*(int *)(param_1 + 0x2c) + 0xc))(param_1 + 0x2c);
  uVar4 = fn_006bb59c(*(undefined4 *)(param_1 + 0x14),(int)(short)(sVar2 + 1));
  *(uint *)(param_1 + 0x58) = (uVar4 & 0xff) << 0x13 | *(uint *)(param_1 + 0x58) & 0xf807ffff;
  iVar3 = (**(code **)(**(int **)(*(int *)(param_1 + 0x14) + 0x184) + 0x34))();
  *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) & 0xf7ffffff | iVar3 << 0x1b;
  *(undefined4 *)(param_1 + 0x10) = 0;
  fn_002dfa14(*(undefined4 *)(param_1 + 0x14),0x11);
  bVar1 = *(byte *)(param_1 + 0x58) & 7;
  if (bVar1 == 1) {
    (**(code **)(*(int *)(param_1 + 0x2c) + 0x1c))(param_1 + 0x2c,param_2 + 2);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x10) = 0;
    return;
  }
  if (bVar1 == 2) {
    (**(code **)(*(int *)(param_1 + 0x2c) + 0x1c))(param_1 + 0x2c,param_2 + 1);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return;
}



void fn_0059c188(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 local_20 [12];
  
  if ((*(byte *)(param_1 + 0x16) & 7) == 1) {
    uVar4 = (**(code **)(param_1[0xb] + 0xc))(param_1 + 0xb);
    piVar2 = (int *)param_1[5];
    (**(code **)(param_1[0xb] + 0x10))(param_1 + 0xb,uVar4);
    iVar5 = (**(code **)(*piVar2 + 0x2c))(piVar2,local_20,1);
    if (iVar5 != 0) {
      param_1[3] = 1;
      param_1[4] = 0;
      uVar4 = (**(code **)(param_1[0xb] + 0xc))(param_1 + 0xb);
      (**(code **)(*param_1 + 0x10))(param_1,uVar4);
      return;
    }
  }
  else if ((*(byte *)(param_1 + 0x16) & 7) == 2) {
    bVar1 = true;
    iVar5 = 0;
    if (0 < *(int *)(param_1[5] + 0x100)) {
      do {
        piVar2 = (int *)fn_006bb760(param_1[5],iVar5,0xffffffff);
        if ((piVar2 != (int *)0x0) && (iVar3 = (**(code **)(*piVar2 + 0x198))(), iVar3 != 0)) {
          bVar1 = false;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(param_1[5] + 0x100));
      if (!bVar1) {
        return;
      }
    }
    param_1[3] = 1;
    param_1[4] = 0;
  }
  return;
}



undefined4 * fn_0059c0ac(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  
  puVar3 = (undefined4 *)fn_002fdf94(param_1,param_2,0x2f);
  uVar5 = 0;
  *puVar3 = &DAT_00845cf4;
  if ((((byte)DAT_008c62fc & 1) == 0) && (iVar4 = fn_00303afc(&DAT_008c62fc), iVar4 != 0)) {
    DAT_008f9e2c = uVar5;
    DAT_008f9e30 = uVar5;
    DAT_008f9e34 = uVar5;
  }
  uVar2 = DAT_008f9e34;
  uVar1 = DAT_008f9e30;
  puVar3[0x16] = DAT_008f9e2c;
  puVar3[0x17] = uVar1;
  puVar3[0x18] = uVar2;
  if ((((byte)DAT_008c62fc & 1) == 0) && (iVar4 = fn_00303afc(&DAT_008c62fc), iVar4 != 0)) {
    DAT_008f9e2c = uVar5;
    DAT_008f9e30 = uVar5;
    DAT_008f9e34 = uVar5;
  }
  uVar2 = DAT_008f9e34;
  uVar1 = DAT_008f9e30;
  puVar3[0x19] = DAT_008f9e2c;
  puVar3[0x1a] = uVar1;
  puVar3[0x1b] = uVar2;
  puVar3[0x1c] = uVar5;
  return puVar3;
}



void fn_0059bcc8(int *param_1)

{
  bool bVar1;
  int iVar2;
  int unaff_r5;
  bool bVar3;
  float fVar4;
  int in_s1;
  int in_s2;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  iVar2 = param_1[3];
  if (iVar2 == 0) {
    fn_0059b0b4();
    return;
  }
  if (iVar2 == 1) {
    if (DAT_008913e4 == 0) {
      (**(code **)(*(int *)param_1[5] + 0x1c4))((int *)param_1[5],1);
      (**(code **)(*(int *)param_1[5] + 0x54))((int *)param_1[5],0);
                    /* WARNING: Could not recover jumptable at 0x0059bd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x10))(param_1);
      return;
    }
  }
  else {
    if (iVar2 == 2) {
      if (DAT_008913e4 != 0) {
        unaff_r5 = *(int *)(DAT_008913e4 + 0x14);
      }
      if (DAT_008913e4 == 0) {
        unaff_r5 = 0;
      }
      if (param_1[4] == 0) {
        param_1[6] = 0x5a;
        iVar2 = fn_0059bb44(param_1);
        fVar8 = 1.0;
        fVar7 = 2.0;
        fVar6 = 0.0;
        if (iVar2 == 0) {
          if ((((byte)DAT_008c62fc & 1) == 0) && (iVar2 = fn_00303afc(&DAT_008c62fc), iVar2 != 0))
          {
            DAT_008f9e2c = fVar6;
            DAT_008f9e30 = fVar6;
            DAT_008f9e34 = fVar6;
          }
          if (unaff_r5 == 0) {
            fVar4 = (float)param_1[0x16];
            fVar9 = (float)param_1[0x17];
            fVar5 = (float)param_1[0x18];
          }
          else {
            fVar4 = *(float *)(unaff_r5 + 0x20);
            fVar9 = *(float *)(unaff_r5 + 0x24);
            fVar5 = *(float *)(unaff_r5 + 0x28);
          }
          if ((fVar4 != fVar6 || (fVar4 != fVar6 || fVar9 != fVar6)) || (fVar5 != fVar6)) {
            iVar2 = param_1[5];
            fVar6 = *(float *)(iVar2 + 0x28);
            fVar9 = *(float *)(iVar2 + 0x24) - fVar9;
            param_1[0xc] = (int)(*(float *)(iVar2 + 0x20) - fVar4);
            param_1[0xd] = (int)fVar9;
            param_1[0xe] = (int)(fVar6 - fVar5);
            (**(code **)(*(int *)param_1[5] + 0x94))();
            fVar5 = (float)param_1[0xc];
            fVar6 = (float)param_1[0xd];
            fVar4 = (float)param_1[0xe];
            fVar8 = fVar8 / SQRT(fVar5 * fVar5 + fVar6 * fVar6 + fVar4 * fVar4);
            fVar4 = fVar4 * fVar8;
            fVar6 = fVar6 * fVar8;
            param_1[0xc] = (int)(fVar5 * fVar8);
            param_1[0xd] = (int)fVar6;
            param_1[0xe] = (int)fVar4;
            fn_006dc524(param_1 + 0xc);
            param_1[0xc] = (int)(fVar9 * fVar7);
            param_1[0xd] = (int)(fVar6 * fVar7);
            param_1[0xe] = (int)(fVar4 * fVar7);
          }
          else {
            param_1[6] = 0;
          }
        }
        else {
          fVar4 = (float)param_1[0x19];
          bVar1 = fVar4 == 0.0;
          if (bVar1) {
            fVar4 = (float)param_1[0x1a];
          }
          bVar3 = false;
          if (bVar1 && (bVar1 && fVar4 == 0.0)) {
            fVar4 = (float)param_1[0x1b];
            bVar3 = fVar4 == 0.0;
          }
          if (bVar3) {
            if (unaff_r5 == 0) {
              if ((((byte)DAT_008c62fc & 1) == 0) &&
                 (iVar2 = fn_00303afc(&DAT_008c62fc), iVar2 != 0)) {
                DAT_008f9e2c = fVar6;
                DAT_008f9e30 = fVar6;
                DAT_008f9e34 = fVar6;
              }
              fVar9 = DAT_008f9e34;
              fVar6 = DAT_008f9e30;
              param_1[0xc] = (int)DAT_008f9e2c;
              param_1[0xd] = (int)fVar6;
              param_1[0xe] = (int)fVar9;
            }
            else {
              fn_006a7fac(unaff_r5);
              param_1[0xc] = (int)fVar4;
              param_1[0xd] = in_s1;
              param_1[0xe] = in_s2;
            }
          }
          else {
            param_1[0xc] = param_1[0x19];
            param_1[0xd] = param_1[0x1a];
            param_1[0xe] = param_1[0x1b];
          }
          fn_005f65fc();
          fVar6 = 0.5;
          fVar9 = 0.3;
          fVar4 = fVar4 - 0.5;
          param_1[0xc] = (int)((float)param_1[0xc] + fVar4 * 0.3);
          fn_005f65fc();
          fVar4 = fVar4 - fVar6;
          param_1[0xd] = (int)((float)param_1[0xd] + fVar4 * fVar9);
          fn_005f65fc();
          fVar4 = fVar4 - fVar6;
          param_1[0xe] = (int)((float)param_1[0xe] + fVar4 * fVar9);
          (**(code **)(*(int *)param_1[5] + 0x94))();
          fVar5 = (float)param_1[0xc];
          fVar6 = (float)param_1[0xd];
          fVar9 = (float)param_1[0xe];
          fVar8 = fVar8 / SQRT(fVar5 * fVar5 + fVar6 * fVar6 + fVar9 * fVar9);
          fVar9 = fVar9 * fVar8;
          fVar6 = fVar6 * fVar8;
          param_1[0xc] = (int)(fVar5 * fVar8);
          param_1[0xd] = (int)fVar6;
          param_1[0xe] = (int)fVar9;
          fn_006dc524(param_1 + 0xc);
          param_1[0xc] = (int)(fVar4 * fVar7);
          param_1[0xd] = (int)(fVar6 * fVar7);
          param_1[0xe] = (int)(fVar9 * fVar7);
        }
        param_1[4] = 1;
      }
      else if (param_1[4] == 1) {
        if ((param_1[6] == 0) || (iVar2 = fn_006a99b0(param_1[5]), iVar2 != 0)) {
          *(undefined1 *)(param_1[5] + 4) = 0;
          if (*(char *)(param_1[1] + 4) == '\0') {
            *(undefined4 *)(param_1[1] + 0xc) = 1;
          }
        }
        else {
          param_1[6] = param_1[6] + -1;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0059c088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(int *)param_1[5] + 0x38))((int *)param_1[5],param_1 + 0xc,1);
      return;
    }
    if (iVar2 == 3) {
      fn_0059b8dc();
      return;
    }
  }
  return;
}



undefined4 fn_0059bc30(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x14) + 0x15c))(*(int **)(param_1 + 0x14),1);
  *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x114) = 0;
  *(undefined1 *)(*(int *)(param_1 + 0x14) + 4) = 1;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (DAT_008913e4 == 0) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x10) = 1;
  }
  else {
    fn_003b5f3c(DAT_008913e4,param_1 + 0x58,param_1 + 100,param_1 + 0x70);
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  return 1;
}



void fn_0059bc04(int param_1)

{
  *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x114) = 2;
                    /* WARNING: Could not recover jumptable at 0x0059bc2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x14) + 0x15c))(*(int **)(param_1 + 0x14),0);
  return;
}



bool fn_0059bb44(int param_1)

{
  bool bVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar3 = *(float *)(param_1 + 100);
  bVar1 = fVar3 == 0.0;
  if (bVar1) {
    fVar3 = *(float *)(param_1 + 0x68);
  }
  if ((bVar1 && (bVar1 && fVar3 == 0.0)) && (*(float *)(param_1 + 0x6c) == 0.0)) {
    return false;
  }
  iVar2 = *(int *)(param_1 + 0x14);
  fVar5 = *(float *)(iVar2 + 0x20) - *(float *)(param_1 + 0x58);
  fVar4 = *(float *)(iVar2 + 0x24) - *(float *)(param_1 + 0x5c);
  fVar3 = *(float *)(iVar2 + 0x28) - *(float *)(param_1 + 0x60);
  fVar3 = (*(float *)(param_1 + 100) * fVar5 + *(float *)(param_1 + 0x68) * fVar4 +
          *(float *)(param_1 + 0x6c) * fVar3) / SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
  fn_006f9b80();
  fVar4 = 30.0;
  fn_0017fe34();
  return fVar3 < fVar4;
}


