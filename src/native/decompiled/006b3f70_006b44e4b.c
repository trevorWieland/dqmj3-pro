#include "006b3f70_006b44e4b.h"



int fn_006b44e4(int param_1,uint param_2,int param_3,int param_4,undefined4 param_5,
                undefined4 param_6,int param_7)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int local_74;
  int local_6c;
  undefined1 auStack_5c [16];
  undefined1 auStack_4c [24];
  int local_34;
  uint local_30;
  int local_2c;
  int local_28;
  
  uVar5 = 0;
  local_6c = 0;
  local_74 = param_4;
  local_34 = param_1;
  local_30 = param_2;
  local_2c = param_3;
  local_28 = param_4;
  do {
    if ((1 << (uVar5 & 0xff) & local_30) != 0) {
      iVar2 = 0;
      piVar7 = (int *)(param_7 + uVar5 * 0xc);
      iVar1 = piVar7[1] - *piVar7 >> 2;
      if (0 < iVar1) {
        iVar6 = local_34 + uVar5 * 0xc;
        do {
          piVar3 = (int *)(*(int *)(iVar6 + 4) + *(int *)(*piVar7 + iVar2 * 4) * 0x50);
          iVar4 = *piVar3;
          if (iVar4 != 0) {
            fn_00603814(auStack_4c,param_5,piVar3 + 2,1);
            fn_00603814(auStack_5c,param_6,piVar3 + 2,0);
            iVar4 = fn_006ecfa0(iVar4,param_3,local_74,auStack_4c,auStack_5c);
            if (0 < iVar4) {
              if (param_3 == 0) {
                return iVar4;
              }
              fn_006036a0(local_2c,local_28,iVar4,local_6c,piVar3 + 2);
              local_6c = local_6c + iVar4;
              if (local_28 <= local_6c) {
                return local_28;
              }
              local_74 = local_74 - iVar4;
              param_3 = param_3 + iVar4 * 0x48;
            }
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < iVar1);
      }
    }
    uVar5 = uVar5 + 1;
    if (2 < (int)uVar5) {
      return local_6c;
    }
  } while( true );
}



int fn_006b42e0(int param_1,uint param_2,int param_3,int param_4,undefined4 param_5,
                undefined4 param_6)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  double in_d0;
  float fVar8;
  double dVar9;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  float fVar13;
  float fVar14;
  int local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float fStack_88;
  int local_34;
  uint local_30;
  int local_2c;
  int local_28;
  
  iVar7 = 0;
  uVar6 = 0;
  fVar13 = 1.7320508;
  uVar10 = 0x400000003f000000;
  dVar12 = 4.0;
  dVar11 = 0.0;
  local_a0 = param_4;
  local_34 = param_1;
  local_30 = param_2;
  local_2c = param_3;
  local_28 = param_4;
  do {
    if ((1 << (uVar6 & 0xff) & local_30) != 0) {
      iVar3 = local_34 + uVar6 * 0xc;
      iVar4 = 0;
      iVar1 = (*(int *)(iVar3 + 8) - *(int *)(iVar3 + 4)) / 0x50;
      if (0 < iVar1) {
        do {
          fVar8 = SUB84(in_d0,0);
          piVar2 = (int *)(*(int *)(iVar3 + 4) + iVar4 * 0x50);
          iVar5 = *piVar2;
          if (iVar5 != 0) {
            fn_00603814(&local_90,param_5,piVar2 + 2,1);
            fn_00603814(&local_9c,param_6,*(int *)(iVar3 + 4) + iVar4 * 0x50 + 8,0);
            fn_006edd70(iVar5);
            fVar14 = fVar8;
            fn_006edd7c(iVar5);
            fVar8 = (fVar14 + fVar8) * fVar13 * (float)uVar10;
            dVar9 = (double)((local_90 * local_9c + local_8c * local_98 + fStack_88 * local_94) *
                            (float)((ulonglong)uVar10 >> 0x20));
            in_d0 = (double)((local_90 * local_90 + local_8c * local_8c + fStack_88 * fStack_88) -
                            fVar8 * fVar8);
            if ((dVar11 <= dVar9 * dVar9 - in_d0 * dVar12) &&
               (iVar5 = fn_006ecfa0(iVar5,param_3,local_a0,&local_90,&local_9c), 0 < iVar5)) {
              if (param_3 == 0) {
                return iVar5;
              }
              fn_006036a0(local_2c,local_28,iVar5,iVar7,*(int *)(iVar3 + 4) + iVar4 * 0x50 + 8);
              iVar7 = iVar7 + iVar5;
              if (local_28 <= iVar7) {
                return local_28;
              }
              local_a0 = local_a0 - iVar5;
              param_3 = param_3 + iVar5 * 0x48;
            }
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar1);
      }
    }
    uVar6 = uVar6 + 1;
    if (2 < (int)uVar6) {
      return iVar7;
    }
  } while( true );
}


