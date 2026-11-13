#include "0040c5bc_0040dae8.h"



int fn_0040dae8(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = fn_00341260(0xffffffff);
  if (iVar2 == 0) {
    iVar2 = fn_002aae50(param_4);
    if (iVar2 == 0) {
      iVar2 = *(int *)(&DAT_008916b4 + param_2 * 4);
    }
    else {
      iVar2 = 0xed8;
    }
    return iVar2;
  }
  iVar2 = fn_006f751c(DAT_008977e0);
  uVar3 = 0;
  uVar1 = *(int *)(iVar2 + 8) - *(int *)(iVar2 + 4) >> 5;
  if (uVar1 != 0) {
    do {
      if (*(int *)(*(int *)(iVar2 + 4) + uVar3 * 0x20) == param_3) {
        iVar2 = *(int *)(iVar2 + 4) + uVar3 * 0x20;
        if ((iVar2 != 0) && (0.0 < *(float *)(iVar2 + 0x14))) {
          return (int)*(float *)(iVar2 + 0x18);
        }
        break;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  return (int)(float)(&DAT_00892048)[param_2 * 3];
}



void fn_0040d95c(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  short *psVar5;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  iVar1 = (param_1[2] - param_1[1]) / 0x34;
  iVar2 = fn_006f7a84(DAT_008977e0);
  local_40 = *(undefined4 *)(iVar2 + 0x20);
  uStack_3c = *(undefined4 *)(iVar2 + 0x24);
  uStack_38 = *(undefined4 *)(iVar2 + 0x28);
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      psVar5 = (short *)(param_1[1] + iVar2 * 0x34);
      if ((*psVar5 == param_2) && (iVar3 = fn_00368c90(param_3), iVar3 == 0)) {
        iVar3 = fn_006afabc(*(undefined4 *)(DAT_008977e0 + 0x1c),
                             *(undefined4 *)(DAT_008977e0 + 0xa8));
        if (iVar3 != 0) {
          iVar3 = fn_006f7a0c(DAT_008977e0);
          iVar3 = fn_006c3a70(*(undefined4 *)(iVar3 + 0x30));
          if (*(char *)((int)psVar5 + 7) != -1 && *(char *)((int)psVar5 + 7) != iVar3)
          goto LAB_0040dab0;
        }
        if (psVar5[6] == 0) {
          fn_005f1940(&local_40,psVar5 + 8);
        }
        else {
          puVar4 = (undefined4 *)(**(code **)(*param_1 + 0x30))(param_1,iVar2,0);
          local_34 = *puVar4;
          uStack_30 = puVar4[1];
          uStack_2c = puVar4[2];
          fn_005f1940(&local_40,&local_34);
        }
        iVar3 = (**(code **)(*param_1 + 0x40))(param_1,(int)*psVar5);
        if (iVar3 != 0) {
          iVar3 = (**(code **)(*param_1 + 0x6c))(param_1,iVar3,0,iVar2);
          *(byte *)(iVar3 + 0x20) = *(byte *)(iVar3 + 0x20) | 1;
        }
      }
LAB_0040dab0:
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  return;
}



undefined4 * fn_0040d164(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  iVar2 = fn_002fb61c();
  if (iVar2 == 0) {
    iVar2 = fn_002aae50(param_4);
    if (iVar2 == 0) {
      iVar2 = fn_00341260(0xffffffff);
      if (iVar2 != 0) {
        iVar2 = fn_006f751c(DAT_008977e0);
        uVar4 = 0;
        uVar1 = *(int *)(iVar2 + 8) - *(int *)(iVar2 + 4) >> 5;
        if (uVar1 != 0) {
          do {
            if (*(int *)(*(int *)(iVar2 + 4) + uVar4 * 0x20) == param_3) {
              iVar2 = *(int *)(iVar2 + 4) + uVar4 * 0x20;
              if ((iVar2 != 0) && (0.0 < *(float *)(iVar2 + 0x14))) {
                return (undefined4 *)(iVar2 + 0x14);
              }
              break;
            }
            uVar4 = uVar4 + 1;
          } while (uVar4 < uVar1);
        }
        return &DAT_00892044 + param_2 * 3;
      }
      puVar3 = (undefined4 *)(param_2 * 0xc + 0x89166c);
    }
    else {
      puVar3 = (undefined4 *)&DAT_007be520;
    }
  }
  else {
    puVar3 = (undefined4 *)&DAT_008916a8;
  }
  return puVar3;
}



void fn_0040c8b0(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  float *pfVar5;
  code *pcVar6;
  undefined4 uVar7;
  float in_s0;
  float in_s1;
  float in_s2;
  float fVar8;
  float fVar9;
  float fVar10;
  
  uVar1 = *(uint *)(param_1 + 0x58) & 7;
  if (uVar1 == 1) {
    iVar2 = *(int *)(param_1 + 0x14);
    uVar4 = *(undefined4 *)(iVar2 + 0x24);
    uVar7 = *(undefined4 *)(iVar2 + 0x28);
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(iVar2 + 0x20);
    *(undefined4 *)(param_1 + 0x60) = uVar4;
    *(undefined4 *)(param_1 + 100) = uVar7;
    fn_006bb518(*(undefined4 *)(iVar2 + 0x170),(*(uint *)(param_1 + 0x58) & 0x7ffffff) >> 0x13);
    *(float *)(param_1 + 0x68) = in_s0;
    *(float *)(param_1 + 0x6c) = in_s1;
    *(float *)(param_1 + 0x70) = in_s2;
    pfVar5 = (float *)(param_1 + 0x74);
    fn_006bb518(*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x170),
                 ((*(uint *)(param_1 + 0x58) & 0x7ffffff) >> 0x13) + 1);
    *pfVar5 = in_s0;
    *(float *)(param_1 + 0x78) = in_s1;
    *(float *)(param_1 + 0x7c) = in_s2;
    fn_006bb518(*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x170),
                 (*(uint *)(param_1 + 0x58) & 0x7ffffff) >> 0x13);
    fVar8 = in_s2;
    fVar9 = in_s1;
    fVar10 = in_s0;
    iVar2 = (**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 0x14) + 0x170) + 0x184) + 0x34))();
    if (iVar2 != 0) {
      fn_006bb518(*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x170),
                   (*(uint *)(param_1 + 0x58) & 0x7ffff) >> 0xb);
      *(float *)(param_1 + 0x68) = *(float *)(param_1 + 0x68) + (fVar10 - in_s0);
      *(float *)(param_1 + 0x6c) = *(float *)(param_1 + 0x6c) + (fVar9 - in_s1);
      *(float *)(param_1 + 0x70) = *(float *)(param_1 + 0x70) + (fVar8 - in_s2);
      *pfVar5 = *pfVar5 + (fVar10 - in_s0);
      *(float *)(param_1 + 0x78) = *(float *)(param_1 + 0x78) + (fVar9 - in_s1);
      *(float *)(param_1 + 0x7c) = *(float *)(param_1 + 0x7c) + (fVar8 - in_s2);
    }
    piVar3 = *(int **)(param_1 + 0x14);
    pcVar6 = *(code **)(*piVar3 + 0x44);
    uVar1 = 2;
  }
  else {
    if (uVar1 != 2) goto LAB_0040ca54;
    uVar1 = 0;
    if ((*(int *)(param_1 + 0x80) != 0) &&
       (iVar2 = fn_003b1844(*(undefined4 *)(*(int *)(param_1 + 0x80) + 4)),
       iVar2 == 3 || iVar2 == 0xf)) {
      uVar1 = (uint)*(byte *)(*(int *)(param_1 + 0x80) + 8);
    }
    if ((*(ushort *)(param_1 + 0x58) & 0x7ff) >> 3 != 0xff) {
      uVar1 = (*(ushort *)(param_1 + 0x58) & 0x7ff) >> 3;
    }
    piVar3 = *(int **)(param_1 + 0x14);
    pcVar6 = *(code **)(*piVar3 + 0x44);
  }
  (*pcVar6)(piVar3,uVar1,4,0);
LAB_0040ca54:
  *(undefined4 *)(param_1 + 0xc) = 5;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}



undefined4 fn_0040c7b0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  float in_s0;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_20 [16];
  int iStack_10;
  
  iStack_10 = param_1;
  iVar1 = fn_006bb5dc(*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x170),
                       (int)*(char *)(*(int *)(param_1 + 0x14) + 0x16c),1);
  if (iVar1 != 0) {
    (**(code **)(**(int **)(param_1 + 0x14) + 0x94))();
    iVar2 = *(int *)(param_1 + 0x14);
    fVar6 = *(float *)(iVar1 + 0x20) - *(float *)(iVar2 + 0x20);
    in_s0 = in_s0 + (*(float *)(*(int *)(iVar1 + 0x100) + 0xc) +
                    *(float *)(*(int *)(*(int *)(param_1 + 0x14) + 0x100) + 0xc)) * 2.0;
    fVar5 = *(float *)(iVar1 + 0x24) - *(float *)(iVar2 + 0x24);
    fVar4 = *(float *)(iVar1 + 0x28) - *(float *)(iVar2 + 0x28);
    if (fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4 < in_s0 * in_s0) {
      return 0;
    }
  }
  (**(code **)(**(int **)(param_1 + 0x14) + 0x94))();
  iVar1 = fn_006a80b8(*(undefined4 *)(param_1 + 0x14),auStack_20);
  if (iVar1 == 0) {
    uVar3 = (**(code **)(**(int **)(param_1 + 0x14) + 0x2c))(*(int **)(param_1 + 0x14),auStack_20,1)
    ;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}



void fn_0040c75c(int *param_1)

{
  undefined1 local_20 [24];
  
  (**(code **)(*(int *)param_1[5] + 0x94))();
  (**(code **)(*param_1 + 0x30))(param_1);
  fn_006a80b8(param_1[5],local_20);
  return;
}



undefined4 fn_0040c674(int *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    (**(code **)(*param_1 + 0xc))(param_1);
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[0x16] = 0;
  }
  else if (param_2 == 2) {
    if ((param_1[0x16] == 0) && (*(int *)(param_1[5] + 0x390) != 0)) {
      iVar1 = fn_00215d3c();
      param_1[0x16] = iVar1;
      (**(code **)(*(int *)param_1[5] + 0x194))((int *)param_1[5],1);
      if (((param_1[0x16] & 0x8000000U) == 0) && ((param_1[0x16] & 7U) != 2)) {
        param_1[3] = 3;
        param_1[4] = 0;
      }
      else {
        param_1[3] = 4;
        param_1[4] = 0;
      }
    }
    (**(code **)(*param_1 + 0x14))(param_1);
  }
  else if (param_2 == 1) {
    (**(code **)(*(int *)param_1[5] + 0x194))((int *)param_1[5],0);
  }
  return 1;
}



void fn_0040c654(int param_1)

{
  fn_006bb800(*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x170),
               (int)*(char *)(*(int *)(param_1 + 0x14) + 0x16c));
  return;
}



void fn_0040c5bc(int *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = param_1[0x16];
  if ((uVar1 & 7) == 1) {
    fn_006bb518(*(undefined4 *)(param_1[5] + 0x170),(uVar1 & 0x7ffff) >> 0xb);
    iVar2 = (**(code **)(*param_1 + 0x2c))(param_1);
    if (iVar2 == 0) {
      return;
    }
  }
  else {
    if ((uVar1 & 7) != 2) {
      return;
    }
    fn_006bb518(*(undefined4 *)(param_1[5] + 0x170),(uVar1 & 0x7ffff) >> 0xb);
    iVar2 = (**(code **)(*param_1 + 0x2c))(param_1);
    if (iVar2 == 0) {
      return;
    }
  }
  param_1[3] = 4;
  param_1[4] = 0;
  return;
}


