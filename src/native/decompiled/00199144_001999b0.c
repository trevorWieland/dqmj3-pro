#include "00199144_001999b0.h"



undefined4
fn_001999b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint *param_4,uint *param_5,
            undefined4 param_6,int param_7)

{
  int iVar1;
  uint local_38;
  int *local_34;
  uint local_30;
  int *local_2c;
  uint local_28;
  int *local_24;
  
  local_24 = (int *)0x0;
  local_28 = 0x1000001;
  local_30 = *param_4;
  local_2c = (int *)param_4[1];
  if ((local_30 & 0x8000000) != 0) {
    local_2c[1] = local_2c[1] + 1;
  }
  local_38 = *param_5;
  local_34 = (int *)param_5[1];
  if ((local_38 & 0x8000000) != 0) {
    local_34[1] = local_34[1] + 1;
  }
  iVar1 = fn_00198578(param_1,&local_30,&local_38,&local_28,0,1);
  if (iVar1 == 0) {
    fn_0019828c(param_1,&local_38);
    if (((local_38 & 0x8000000) != 0) &&
       (iVar1 = local_34[1], local_34[1] = iVar1 + -1, iVar1 + -1 == 0)) {
      (**(code **)(*local_34 + 8))();
    }
    if (((local_30 & 0x8000000) != 0) &&
       (iVar1 = local_2c[1], local_2c[1] = iVar1 + -1, iVar1 + -1 == 0)) {
      (**(code **)(*local_2c + 8))();
    }
    if ((local_28 & 0x8000000) == 0) {
      return 0;
    }
    iVar1 = local_24[1] + -1;
    local_24[1] = iVar1;
  }
  else {
    iVar1 = fn_001a1234(param_1,param_2,param_3,&local_28,param_6);
    if (iVar1 != 0) {
      fn_001987e4(param_1,&local_30,&local_38,param_3,1);
      if (param_7 != 0) {
        fn_0019e864(param_3,&local_28);
      }
      if (((local_38 & 0x8000000) != 0) &&
         (iVar1 = local_34[1], local_34[1] = iVar1 + -1, iVar1 + -1 == 0)) {
        (**(code **)(*local_34 + 8))();
      }
      if (((local_30 & 0x8000000) != 0) &&
         (iVar1 = local_2c[1], local_2c[1] = iVar1 + -1, iVar1 + -1 == 0)) {
        (**(code **)(*local_2c + 8))();
      }
      if (((local_28 & 0x8000000) != 0) &&
         (iVar1 = local_24[1], local_24[1] = iVar1 + -1, iVar1 + -1 == 0)) {
        (**(code **)(*local_24 + 8))();
      }
      return 1;
    }
    if (((local_38 & 0x8000000) != 0) &&
       (iVar1 = local_34[1], local_34[1] = iVar1 + -1, iVar1 + -1 == 0)) {
      (**(code **)(*local_34 + 8))();
    }
    if (((local_30 & 0x8000000) != 0) &&
       (iVar1 = local_2c[1], local_2c[1] = iVar1 + -1, iVar1 + -1 == 0)) {
      (**(code **)(*local_2c + 8))();
    }
    if ((local_28 & 0x8000000) == 0) {
      return 0;
    }
    iVar1 = local_24[1] + -1;
    local_24[1] = iVar1;
  }
  if (iVar1 == 0) {
    (**(code **)(*local_24 + 8))();
  }
  return 0;
}



undefined4 fn_001996f4(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  uint local_40;
  int *local_3c;
  uint local_38;
  int *local_34;
  uint local_30;
  int *local_2c;
  
  uVar5 = 0;
  local_3c = (int *)0x0;
  local_40 = 0x1000001;
  if (param_3 != -1) {
    param_3 = *(int *)(param_1 + 0x34) + param_3;
    piVar4 = (int *)(*(int *)(param_1 + 0x18) + param_3 * 8);
    if (*piVar4 != 0x8004000) {
      uVar5 = fn_00191f20(piVar4);
      fn_0019813c(param_1,(char *)&DAT_00199990,uVar5);
      if (((local_40 & 0x8000000) != 0) &&
         (iVar2 = local_3c[1], local_3c[1] = iVar2 + -1, iVar2 + -1 == 0)) {
        (**(code **)(*local_3c + 8))();
      }
      return 0;
    }
    uVar5 = *(undefined4 *)(*(int *)(param_1 + 0x18) + param_3 * 8 + 4);
  }
  if (param_4 != 0xff) {
    fn_0019e864(&local_40,*(int *)(param_1 + 0x18) + (*(int *)(param_1 + 0x34) + param_4) * 8);
  }
  uVar1 = *(undefined4 *)(param_1 + 0x8c);
  local_2c = (int *)fn_002fece8(0x5c);
  if (local_2c != (int *)0x0) {
    fn_001a18a8(local_2c,uVar1,uVar5);
  }
  local_30 = 0x8004000;
  if (local_2c == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    fn_00146590();
  }
  local_2c[1] = local_2c[1] + 1;
  fn_0019e864(param_2,&local_30);
  if (((local_30 & 0x8000000) != 0) &&
     (iVar2 = local_2c[1], local_2c[1] = iVar2 + -1, iVar2 + -1 == 0)) {
    (**(code **)(*local_2c + 8))();
  }
  if (*(int *)(*(int *)(*(int *)(param_2 + 4) + 0x38) + 0x88) != 0x1000001) {
    local_34 = (int *)0x0;
    local_38 = 0x1000001;
    iVar2 = *(int *)(param_1 + 0x30);
    *(int *)(param_1 + 0x30) = iVar2 + 1;
    fn_0019e864(*(int *)(param_1 + 0x18) + iVar2 * 8,param_2);
    iVar2 = *(int *)(param_1 + 0x30);
    *(int *)(param_1 + 0x30) = iVar2 + 1;
    fn_0019e864(*(int *)(param_1 + 0x18) + iVar2 * 8,&local_40);
    fn_0017ffac(param_1,*(int *)(*(int *)(param_2 + 4) + 0x38) + 0x88,2,
                 *(int *)(param_1 + 0x30) + -2,&local_38,0);
    iVar2 = 0;
    do {
      iVar3 = *(int *)(param_1 + 0x30) + -1;
      *(int *)(param_1 + 0x30) = iVar3;
      fn_0019e864(*(int *)(param_1 + 0x18) + iVar3 * 8,&DAT_008c06e8);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 2);
    if (((local_38 & 0x8000000) != 0) &&
       (iVar2 = local_34[1], local_34[1] = iVar2 + -1, iVar2 + -1 == 0)) {
      (**(code **)(*local_34 + 8))();
    }
  }
  fn_0019e864(*(int *)(param_2 + 4) + 0x44,&local_40);
  if (((local_40 & 0x8000000) != 0) &&
     (iVar2 = local_3c[1], local_3c[1] = iVar2 + -1, iVar2 + -1 == 0)) {
    (**(code **)(*local_3c + 8))();
  }
  return 1;
}



bool fn_001994c0(int param_1,int param_2,int param_3,undefined4 param_4)

{
  uint *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  if (((*(int *)(param_1 + 0x50) != 0x1000001) &&
      (*(int *)(param_1 + 0x54) != *(int *)(*(int *)(param_1 + 0x84) + 0xc))) &&
     (iVar6 = 0, 0 < *(int *)(*(int *)(param_1 + 0x84) + 0x24))) {
    do {
      fn_001a0d30(param_1,0x72,0);
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(*(int *)(param_1 + 0x84) + 0x24));
  }
  iVar6 = *(int *)(param_1 + 0x84);
  iVar8 = *(int *)(param_1 + 0x34);
  iVar7 = *(int *)(param_1 + 0x30);
  iVar9 = *(int *)(iVar6 + 0x20);
  iVar10 = *(int *)(iVar6 + 0x28);
  iVar2 = iVar8 - *(int *)(iVar6 + 0x18);
  *(int *)(param_1 + 0x34) = iVar2;
  *(int *)(param_1 + 0x30) = iVar2 + *(int *)(iVar6 + 0x1c);
  if (*(short *)(iVar6 + 0x2c) != 0) {
    fn_001a0cc0(param_1,iVar6 + 0x2c);
  }
  *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + -1;
  iVar6 = *(int *)(param_1 + 0x84);
  uVar5 = *(uint *)(iVar6 + 8);
  piVar3 = *(int **)(iVar6 + 0xc);
  *(undefined4 *)(iVar6 + 8) = 0x1000001;
  *(undefined4 *)(iVar6 + 0xc) = 0;
  if (((uVar5 & 0x8000000) != 0) && (iVar6 = piVar3[1], piVar3[1] = iVar6 + -1, iVar6 + -1 == 0)) {
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  if (*(int *)(param_1 + 100) == 0) {
    *(undefined4 *)(param_1 + 0x84) = 0;
  }
  else {
    *(int *)(param_1 + 0x84) = *(int *)(param_1 + 100) * 0x30 + -0x30 + *(int *)(param_1 + 0x60);
  }
  if (iVar10 == 0) {
    if (iVar9 != -1) {
      if (param_2 == 0xff) {
        iVar6 = *(int *)(param_1 + 0x18) + (*(int *)(param_1 + 0x34) + iVar9) * 8;
        puVar4 = &DAT_008c06e8;
      }
      else {
        puVar4 = (undefined4 *)(*(int *)(param_1 + 0x18) + (iVar8 + param_3) * 8);
        iVar6 = *(int *)(param_1 + 0x18) + (*(int *)(param_1 + 0x34) + iVar9) * 8;
      }
      fn_0019e864(iVar6,puVar4);
    }
  }
  else if (param_2 == 0xff) {
    fn_0019e864(param_4,&DAT_008c06e8);
  }
  else {
    fn_0019e864(param_4,*(int *)(param_1 + 0x18) + (iVar8 + param_3) * 8);
  }
  if (*(int *)(param_1 + 0x30) <= iVar7) {
    do {
      puVar1 = (uint *)(*(int *)(param_1 + 0x18) + iVar7 * 8);
      iVar7 = iVar7 + -1;
      uVar5 = *puVar1;
      piVar3 = (int *)puVar1[1];
      *puVar1 = 0x1000001;
      puVar1[1] = 0;
      if (((uVar5 & 0x8000000) != 0) && (iVar6 = piVar3[1], piVar3[1] = iVar6 + -1, iVar6 + -1 == 0)
         ) {
        (**(code **)(*piVar3 + 8))(piVar3);
      }
    } while (*(int *)(param_1 + 0x30) <= iVar7);
  }
  if (iVar8 < *(int *)(param_1 + 0x34)) {
                    /* WARNING: Subroutine does not return */
    fn_00146590();
  }
  return iVar10 != 0;
}



/* WARNING: Removing unreachable block (ram,0x00199288) */
/* WARNING: Removing unreachable block (ram,0x001992a0) */
/* WARNING: Removing unreachable block (ram,0x00199244) */
/* WARNING: Removing unreachable block (ram,0x0019925c) */
/* WARNING: Removing unreachable block (ram,0x001993c0) */

undefined4 fn_00199144(int param_1,uint *param_2,uint *param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  uint in_fpscr;
  float fVar5;
  uint local_28;
  int *local_24;
  
  uVar1 = *param_2;
  uVar3 = *param_3;
  if (uVar1 != uVar3) {
    if ((uVar1 & 0x4000000) == 0 || (uVar3 & 0x4000000) == 0) {
      if (uVar1 != 0x1000001) {
        if (uVar3 != 0x1000001) {
          fn_001a0f20(param_1,param_2,param_3);
          return 0;
        }
LAB_00199448:
        *param_4 = 1;
        return 1;
      }
    }
    else {
      bVar4 = uVar1 != 0x5000002;
      if (!bVar4) {
        uVar1 = uVar3 + 0xfb000000;
      }
      if (bVar4 || uVar1 != 4) {
        fVar5 = (float)VectorSignedToFloat(param_3[1],(byte)(in_fpscr >> 0x16) & 3);
        if ((float)param_2[1] == fVar5) goto LAB_00199468;
        fVar5 = (float)VectorSignedToFloat(param_3[1],(byte)((in_fpscr & 0xfffffff) >> 0x16) & 3);
        if (fVar5 <= (float)param_2[1]) goto LAB_00199448;
      }
      else {
        fVar5 = (float)VectorSignedToFloat(param_2[1],(byte)(in_fpscr >> 0x16) & 3);
        if (fVar5 == (float)param_3[1]) {
LAB_00199468:
          *param_4 = 0;
          return 1;
        }
        fVar5 = (float)VectorSignedToFloat(param_2[1],(byte)((in_fpscr & 0xfffffff) >> 0x16) & 3);
        if ((float)param_3[1] <= fVar5) goto LAB_00199448;
      }
    }
    *param_4 = -1;
    return 1;
  }
  if (param_2[1] == param_3[1]) {
    *param_4 = 0;
    return 1;
  }
  local_24 = (int *)0x0;
  local_28 = 0x1000001;
  uVar1 = *param_2;
  if (uVar1 == 0xa000020) {
LAB_001992a4:
    if (*(int *)(param_2[1] + 0x18) != 0) {
      iVar2 = *(int *)(param_1 + 0x30);
      *(int *)(param_1 + 0x30) = iVar2 + 1;
      fn_0019e864(*(int *)(param_1 + 0x18) + iVar2 * 8,param_2);
      iVar2 = *(int *)(param_1 + 0x30);
      *(int *)(param_1 + 0x30) = iVar2 + 1;
      fn_0019e864(*(int *)(param_1 + 0x18) + iVar2 * 8,param_3);
      iVar2 = fn_0018d4fc(param_1,param_2[1],10,2,&local_28);
      if (iVar2 != 0) {
        if (local_28 == 0x5000002) {
          *param_4 = (int)local_24;
          return 1;
        }
        fn_001a0f20(param_1,param_2,param_3);
        if (((local_28 & 0x8000000) != 0) &&
           (iVar2 = local_24[1], local_24[1] = iVar2 + -1, iVar2 + -1 == 0)) {
          (**(code **)(*local_24 + 8))();
        }
        return 0;
      }
    }
  }
  else if ((int)uVar1 < 0xa000020) {
    if (uVar1 == 0x5000002) {
      *param_4 = param_2[1] - param_3[1];
      return 1;
    }
    if (uVar1 == 0x5000004) {
      if ((float)param_2[1] < (float)param_3[1]) {
        iVar2 = -1;
      }
      else {
        iVar2 = 1;
      }
      *param_4 = iVar2;
      return 1;
    }
    if (uVar1 == 0x8000010) {
      iVar2 = fn_003035b0(param_2[1] + 0x1c,param_3[1] + 0x1c);
      *param_4 = iVar2;
      if ((local_28 & 0x8000000) == 0) {
        return 1;
      }
      iVar2 = local_24[1] + -1;
      local_24[1] = iVar2;
      goto joined_r0x00199390;
    }
  }
  else {
    bVar4 = uVar1 != 0xa000080;
    if (bVar4) {
      uVar1 = uVar1 + 0xf5ff8fe0;
    }
    if (!bVar4 || uVar1 == 0xfe0) goto LAB_001992a4;
  }
  if (param_2[1] < param_3[1]) {
    iVar2 = -1;
  }
  else {
    iVar2 = 1;
  }
  *param_4 = iVar2;
  if ((local_28 & 0x8000000) == 0) {
    return 1;
  }
  iVar2 = local_24[1] + -1;
  local_24[1] = iVar2;
joined_r0x00199390:
  if (iVar2 == 0) {
    (**(code **)(*local_24 + 8))();
  }
  return 1;
}


