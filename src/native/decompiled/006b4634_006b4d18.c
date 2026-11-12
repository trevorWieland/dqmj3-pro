#include "006b4634_006b4d18.h"



uint fn_006b4d18(int param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  uVar5 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0xc) + param_2 * 4) + 8);
  if (-1 < (int)param_3) {
    iVar6 = *(int *)(param_1 + 8);
    iVar1 = fn_00182d34(iVar6,uVar5);
    piVar4 = (int *)0x0;
    if (-1 < iVar1) {
      piVar4 = (int *)(*(int *)(iVar6 + 0x1c) + iVar1 * 0x28 + 0x18);
    }
    if (param_3 < (uint)(piVar4[1] - *piVar4 >> 2)) {
      uVar2 = fn_00182d34(*(undefined4 *)(param_1 + 8),uVar5);
      iVar1 = fn_005f07fc(*(undefined4 *)(param_1 + 0x3c),uVar2);
      if (iVar1 != 0) {
        iVar7 = *(int *)(param_1 + 8);
        iVar6 = fn_00182d34(iVar7,uVar5);
        if (((-1 < iVar6) &&
            (iVar6 = *(int *)(*(int *)(*(int *)(iVar7 + 0x1c) + iVar6 * 0x28 + 0x18) + param_3 * 4),
            iVar6 != 0)) &&
           (iVar6 = fn_006dc71c(*(undefined4 *)(param_1 + 0x3c),iVar6 + 0x40,uVar2), iVar6 != -1))
        {
          if (param_4 == 0) {
            uVar3 = (uint)*(byte *)(*(int *)(iVar1 + 0x18) + iVar6 * 0x3c + 0xc);
          }
          else {
            if (param_4 != 1) {
              return 0xffffffff;
            }
            uVar3 = (uint)(*(ushort *)(*(int *)(iVar1 + 0x18) + iVar6 * 0x3c + 0xc) >> 8);
          }
          return uVar3;
        }
      }
    }
  }
  return 0xffffffff;
}



uint fn_006b4cf4(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = fn_00692ec8(param_2);
  return uVar1 ^ 1;
}



undefined4 fn_006b4cbc(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0xc) + param_2 * 4);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = *(undefined4 *)(iVar1 + 8);
  }
  return uVar2;
}



void fn_006b4c38(undefined4 *param_1,int param_2,uint param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_2 + 0x398);
  uVar1 = (piVar3[1] - *piVar3) / 0xc;
  if (uVar1 <= param_3) {
    fn_002ff628(9,&DAT_008c7600,&DAT_008c7600,param_3,uVar1);
  }
  puVar2 = (undefined4 *)(*piVar3 + param_3 * 0xc);
  *param_1 = *puVar2;
  param_1[1] = puVar2[1];
  param_1[2] = puVar2[2];
  return;
}



void fn_006b4c0c(int param_1,int param_2,int param_3)

{
  if (*(int *)(*(int *)(param_1 + param_2 * 0xc + 4) + param_3 * 0x50) == 0) {
    return;
  }
  fn_006edd70();
  return;
}



int fn_006b4a5c(int param_1,uint param_2,int param_3,int param_4,undefined4 param_5,
                undefined4 param_6,int param_7)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  int local_78;
  int local_68;
  undefined1 auStack_58 [20];
  undefined1 auStack_44 [16];
  int local_34;
  uint local_30;
  int local_2c;
  int local_28;
  
  uVar7 = 0;
  local_68 = 0;
  local_78 = param_4;
  local_34 = param_1;
  local_30 = param_2;
  local_2c = param_3;
  local_28 = param_4;
  do {
    if ((1 << (uVar7 & 0xff) & local_30) != 0) {
      iVar5 = local_34 + uVar7 * 0xc;
      iVar6 = 0;
      iVar1 = *(int *)(iVar5 + 8) - *(int *)(iVar5 + 4);
      iVar8 = iVar1 >> 0x1f;
      uVar4 = iVar1 / 0x50 + iVar8;
      iVar8 = uVar4 - iVar8;
      if (0 < iVar8) {
        do {
          piVar2 = (int *)(*(int *)(iVar5 + 4) + iVar6 * 0x50);
          iVar1 = *piVar2;
          if (iVar1 != 0) {
            if (param_7 != 0) {
              uVar4 = (uint)*(byte *)(piVar2 + 0x13);
            }
            if (param_7 == 0 || uVar4 == 0) {
              fn_00603814(auStack_44,param_5,piVar2 + 2,1);
              fn_00603814(auStack_58,param_6,*(int *)(iVar5 + 4) + iVar6 * 0x50 + 8,1);
              iVar3 = fn_006ed054(iVar1,auStack_44,auStack_58);
              if (iVar3 == -1) {
                uVar9 = fn_006ed01c(iVar1,param_3,local_78,auStack_44,auStack_58);
              }
              else {
                uVar9 = fn_006ed088(iVar1,iVar3,param_3,local_78,auStack_44,auStack_58);
              }
              uVar4 = (uint)((ulonglong)uVar9 >> 0x20);
              iVar1 = (int)uVar9;
              if (0 < iVar1) {
                if (param_3 == 0) {
                  return iVar1;
                }
                fn_006036a0(local_2c,local_28,iVar1,local_68,*(int *)(iVar5 + 4) + iVar6 * 0x50 + 8
                            );
                local_68 = local_68 + iVar1;
                if (local_28 <= local_68) {
                  return local_28;
                }
                uVar4 = iVar1 * 9;
                local_78 = local_78 - iVar1;
                param_3 = param_3 + iVar1 * 0x48;
              }
            }
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < iVar8);
      }
    }
    uVar7 = uVar7 + 1;
    if (2 < (int)uVar7) {
      return local_68;
    }
  } while( true );
}



int fn_006b48ec(int param_1,uint param_2,int param_3,int param_4,undefined4 param_5,
                undefined4 param_6,int param_7)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  int local_74;
  int local_68;
  undefined1 auStack_50 [12];
  undefined1 auStack_44 [16];
  int local_34;
  uint local_30;
  int local_2c;
  int local_28;
  
  uVar6 = 0;
  local_68 = 0;
  local_74 = param_4;
  local_34 = param_1;
  local_30 = param_2;
  local_2c = param_3;
  local_28 = param_4;
  do {
    if ((1 << (uVar6 & 0xff) & local_30) != 0) {
      iVar4 = local_34 + uVar6 * 0xc;
      iVar5 = 0;
      iVar1 = *(int *)(iVar4 + 8) - *(int *)(iVar4 + 4);
      iVar7 = iVar1 >> 0x1f;
      uVar3 = iVar1 / 0x50 + iVar7;
      iVar7 = uVar3 - iVar7;
      if (0 < iVar7) {
        do {
          piVar2 = (int *)(*(int *)(iVar4 + 4) + iVar5 * 0x50);
          iVar1 = *piVar2;
          if (iVar1 != 0) {
            if (param_7 != 0) {
              uVar3 = (uint)*(byte *)(piVar2 + 0x13);
            }
            if (param_7 == 0 || uVar3 == 0) {
              fn_00603814(auStack_44,param_5,piVar2 + 2,1);
              fn_00603814(auStack_50,param_6,*(int *)(iVar4 + 4) + iVar5 * 0x50 + 8,1);
              uVar8 = fn_006ed01c(iVar1,param_3,local_74,auStack_44,auStack_50);
              uVar3 = (uint)((ulonglong)uVar8 >> 0x20);
              iVar1 = (int)uVar8;
              if (0 < iVar1) {
                if (param_3 == 0) {
                  return iVar1;
                }
                fn_006036a0(local_2c,local_28,iVar1,local_68,*(int *)(iVar4 + 4) + iVar5 * 0x50 + 8
                            );
                local_68 = local_68 + iVar1;
                if (local_28 <= local_68) {
                  return local_28;
                }
                uVar3 = iVar1 * 9;
                local_74 = local_74 - iVar1;
                param_3 = param_3 + iVar1 * 0x48;
              }
            }
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < iVar7);
      }
    }
    uVar6 = uVar6 + 1;
    if (2 < (int)uVar6) {
      return local_68;
    }
  } while( true );
}



int fn_006b4634(int param_1,uint param_2,int param_3,int param_4,float *param_5)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  ulonglong uVar16;
  int local_5c;
  undefined1 auStack_58 [36];
  int local_34;
  uint local_30;
  int local_2c;
  int local_28;
  
  iVar9 = 0;
  uVar10 = 0;
  uVar16 = 0x7f7fffff;
  uVar15 = 0;
  local_5c = param_4;
  local_34 = param_1;
  local_30 = param_2;
  local_2c = param_3;
  local_28 = param_4;
  do {
    if ((1 << (uVar10 & 0xff) & local_30) != 0) {
      fVar12 = (float)uVar16;
      iVar5 = -1;
      iVar7 = local_34 + uVar10 * 0xc;
      iVar3 = 0;
      do {
        piVar4 = (int *)(*(int *)(iVar7 + 4) + iVar3 * 0x50);
        if (*piVar4 != 0) {
          fVar11 = *(float *)(*(int *)(iVar7 + 4) + iVar3 * 0x50 + 0x48);
          fVar14 = (float)uVar15;
          bVar1 = fVar11 < fVar14;
          bVar2 = NAN(fVar11) || NAN(fVar14);
          fVar13 = (*param_5 - (float)piVar4[0xf]) * (*param_5 - (float)piVar4[0xf]) +
                   (param_5[1] - (float)piVar4[0x10]) * (param_5[1] - (float)piVar4[0x10]) +
                   (param_5[2] - (float)piVar4[0x11]) * (param_5[2] - (float)piVar4[0x11]);
          if (fVar11 != fVar14) {
            bVar1 = fVar13 < fVar11;
            bVar2 = NAN(fVar13) || NAN(fVar11);
          }
          if (((fVar11 == fVar14 || fVar13 == fVar11) || bVar1 != bVar2) && (fVar13 < fVar12)) {
            iVar5 = iVar3;
            fVar12 = fVar13;
          }
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 10);
      if (iVar5 != -1) {
        puVar6 = (undefined4 *)(*(int *)(iVar7 + 4) + iVar5 * 0x50);
        uVar8 = *puVar6;
        uVar16 = uVar16 & 0xffffffff;
        fn_00603814(auStack_58,param_5,puVar6 + 2,1);
        iVar3 = fn_006ed0e0(uVar8,param_3,local_5c,auStack_58);
        if (0 < iVar3) {
          if (param_3 == 0) {
            return iVar3;
          }
          fn_006036a0(local_2c,local_28,iVar3,iVar9,*(int *)(iVar7 + 4) + iVar5 * 0x50 + 8);
          iVar9 = iVar9 + iVar3;
          if (local_28 <= iVar9) {
            return local_28;
          }
          local_5c = local_5c - iVar3;
          param_3 = param_3 + iVar3 * 0x48;
        }
      }
      iVar5 = 10;
      do {
        piVar4 = (int *)(*(int *)(iVar7 + 4) + iVar5 * 0x50);
        iVar3 = *piVar4;
        if ((iVar3 != 0) &&
           (((float)piVar4[0x12] == (float)uVar15 ||
            ((*param_5 - (float)piVar4[0xf]) * (*param_5 - (float)piVar4[0xf]) +
             (param_5[1] - (float)piVar4[0x10]) * (param_5[1] - (float)piVar4[0x10]) +
             (param_5[2] - (float)piVar4[0x11]) * (param_5[2] - (float)piVar4[0x11]) <=
             *(float *)(*(int *)(iVar7 + 4) + iVar5 * 0x50 + 0x48))))) {
          uVar16 = uVar16 & 0xffffffff;
          fn_00603814(auStack_58,param_5,*(int *)(iVar7 + 4) + iVar5 * 0x50 + 8,1);
          iVar3 = fn_006ed0e0(iVar3,param_3,local_5c,auStack_58);
          if (0 < iVar3) {
            if (param_3 == 0) {
              return iVar3;
            }
            fn_006036a0(local_2c,local_28,iVar3,iVar9,*(int *)(iVar7 + 4) + iVar5 * 0x50 + 8);
            iVar9 = iVar9 + iVar3;
            if (local_28 <= iVar9) {
              return local_28;
            }
            local_5c = local_5c - iVar3;
            param_3 = param_3 + iVar3 * 0x48;
          }
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < 0x8a);
    }
    uVar10 = uVar10 + 1;
    if (2 < (int)uVar10) {
      return iVar9;
    }
  } while( true );
}


