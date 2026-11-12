#include "0023b804_0023be08.h"



undefined4
fn_0023be08(int param_1,int *param_2,float *param_3,float *param_4,uint param_5,int param_6)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  float fVar7;
  float fVar9;
  ulonglong uVar8;
  ulonglong uVar10;
  float local_5fc;
  float local_5f8;
  float local_5f4;
  undefined1 auStack_5f0 [4];
  short local_5ec [2];
  float local_5e8 [12];
  float local_5b8 [353];
  int iStack_34;
  int *local_30;
  float *pfStack_2c;
  float *pfStack_28;
  
  uVar5 = 0;
  local_5fc = *param_3 + *param_4;
  local_5f8 = param_3[1] + param_4[1];
  local_5f4 = param_3[2] + param_4[2];
  uVar6 = 0x461c4000;
  iStack_34 = param_1;
  local_30 = param_2;
  pfStack_2c = param_3;
  pfStack_28 = param_4;
  fn_001a4a80();
  uVar10 = (ulonglong)uVar6;
  fn_00101a1c(auStack_5f0,&DAT_005f4c78,0x48,0x14);
  iVar1 = (**(code **)(*local_30 + 8))(local_30,~param_5 & 1,auStack_5f0,0x14,&local_5fc);
  if (0 < iVar1) {
    uVar8 = 0;
    iVar4 = 0;
    do {
      if (param_6 == 0) {
LAB_0023befc:
        fVar9 = (float)(uVar8 >> 0x20);
        if (local_5b8[iVar4 * 0x12] * *param_4 + local_5b8[iVar4 * 0x12 + 1] * param_4[1] +
            local_5b8[iVar4 * 0x12 + 2] * param_4[2] <= fVar9) {
          if ((param_1 != 0) &&
             (fVar7 = (local_5e8[iVar4 * 0x12] - local_5fc) * (local_5e8[iVar4 * 0x12] - local_5fc)
                      + (local_5e8[iVar4 * 0x12 + 1] - local_5f8) *
                        (local_5e8[iVar4 * 0x12 + 1] - local_5f8) +
                      (local_5e8[iVar4 * 0x12 + 2] - local_5f4) *
                      (local_5e8[iVar4 * 0x12 + 2] - local_5f4), uVar8 = CONCAT44(fVar9,fVar7),
             fVar7 < (float)uVar10)) {
            fn_0017821c(param_1,auStack_5f0 + iVar4 * 0x48,0x48);
            uVar10 = uVar8 & 0xffffffff;
          }
          uVar5 = 1;
        }
      }
      else {
        uVar2 = fn_006b4240(local_30,local_5b8[iVar4 * 0x12 + 3]);
        iVar3 = fn_006bab78(uVar2,(int)local_5ec[iVar4 * 0x24]);
        if (iVar3 == 0) goto LAB_0023befc;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  return uVar5;
}



undefined4 fn_0023bc6c(uint param_1,uint param_2)

{
  float in_s0;
  float in_s1;
  float in_s2;
  
  if ((param_1 & param_2) == 0) {
    if (param_1 == 0) {
      if (param_2 == 0) {
        return 0;
      }
      return 8;
    }
  }
  else if ((in_s1 < in_s2) && (in_s0 < ABS(in_s1 - in_s2))) {
    return 8;
  }
  return 4;
}



undefined4 fn_0023bc18(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_50 [8];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  
  iVar1 = (**(code **)(*param_1 + 0x10))(param_1,7,auStack_50,1,param_2,param_3,0);
  uVar2 = 0;
  if (iVar1 != 0) {
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = local_48;
      param_4[1] = uStack_44;
      param_4[2] = uStack_40;
    }
    uVar2 = 1;
  }
  return uVar2;
}



int fn_0023ba48(float *param_1,int param_2,undefined4 param_3,float *param_4,undefined4 param_5,
                uint param_6)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  float in_s0;
  float in_s1;
  float in_s2;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_d0 [8];
  float local_c8;
  float local_c4;
  float fStack_c0;
  undefined1 auStack_88 [8];
  float local_80;
  float local_7c;
  float local_78;
  
  fVar4 = 0.0;
  fVar7 = param_4[2] + 0.0;
  fVar6 = param_4[1] + in_s2;
  fVar5 = *param_4 + 0.0;
  local_78 = fVar7 + 0.0;
  local_7c = fVar6 + in_s1;
  local_80 = fVar5 + 0.0;
  if (0.0 < in_s2) {
    param_5 = 0;
  }
  local_c8 = fVar5;
  local_c4 = fVar6;
  fStack_c0 = fVar7;
  uVar1 = fn_0023bcc0(~param_6 & 2,auStack_d0,param_3,&local_c8,param_5);
  uVar2 = fn_0023bcc0(~param_6 & 4,auStack_88,param_3,&local_80,param_5);
  iVar3 = 0;
  if ((uVar1 & uVar2) == 0) {
    if (uVar1 == 0) {
      if (uVar2 == 0) goto LAB_0023bb5c;
      goto LAB_0023bb58;
    }
  }
  else if ((local_c4 < local_7c) && (in_s1 < ABS(local_c4 - local_7c))) {
LAB_0023bb58:
    iVar3 = 8;
    goto LAB_0023bb5c;
  }
  iVar3 = 4;
LAB_0023bb5c:
  if (param_1 != (float *)0x0) {
    *param_1 = fVar5;
    param_1[1] = fVar6;
    param_1[2] = fVar7;
  }
  if (iVar3 == 8) {
    if (param_1 != (float *)0x0) {
      *param_1 = local_80 + fVar4;
      param_1[1] = local_7c + (in_s0 - in_s1);
      param_1[2] = local_78 + fVar4;
    }
    if (param_2 != 0) {
      fn_0017821c(param_2,auStack_88,0x48);
    }
  }
  else if (iVar3 == 4) {
    if (param_1 != (float *)0x0) {
      *param_1 = local_c8 + fVar4;
      param_1[1] = local_c4 + in_s0;
      param_1[2] = fStack_c0 + fVar4;
    }
    if (param_2 != 0) {
      fn_0017821c(param_2,auStack_d0,0x48);
    }
  }
  return iVar3;
}



int fn_0023bcc0(undefined4 param_1,int param_2,int *param_3,float *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float in_s0;
  float in_s1;
  float fVar4;
  ulonglong uVar5;
  undefined4 local_600;
  undefined4 local_5fc;
  undefined4 local_5f8;
  float local_5f4;
  float local_5f0;
  float fStack_5ec;
  undefined1 auStack_5e8 [12];
  float local_5dc [365];
  
  iVar2 = 0;
  fVar4 = 0.0;
  local_600 = 0;
  local_5fc = 0xbf800000;
  local_5f8 = 0;
  fn_00101a1c(auStack_5e8,&DAT_005f4c78,0x48,0x14);
  local_5f4 = *param_4 + fVar4;
  fStack_5ec = param_4[2] + fVar4;
  local_5f0 = param_4[1] + in_s0 + in_s1;
  iVar1 = (**(code **)(*param_3 + 0xc))(param_3,param_1,auStack_5e8,0x14,&local_5f4,&local_600);
  iVar3 = 0;
  in_s1 = (local_5f0 - in_s0 * 2.0) - in_s1;
  uVar5 = CONCAT44(in_s0,in_s1);
  if (param_5 != 0) {
    uVar5 = (ulonglong)(uint)(in_s1 - in_s0 * 0.5);
  }
  if (0 < iVar1) {
    do {
      if ((float)uVar5 <= local_5dc[iVar3 * 0x12]) {
        uVar5 = (ulonglong)(uint)local_5dc[iVar3 * 0x12];
        fn_0017821c(auStack_5e8,auStack_5e8 + iVar3 * 0x48,0x48);
        iVar2 = 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
    if (iVar2 != 0 && param_2 != 0) {
      fn_0017821c(param_2,auStack_5e8,0x48);
    }
  }
  return iVar2;
}



int fn_0023b858(int *param_1,int param_2,float *param_3,float *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float in_s0;
  float fVar7;
  ulonglong uVar8;
  float local_5fc;
  float local_5f8;
  float local_5f4;
  undefined1 auStack_5f0 [4];
  short local_5ec [2];
  float local_5e8 [15];
  undefined4 local_5ac [349];
  int *local_38;
  int iStack_34;
  float *pfStack_30;
  float *local_2c;
  
  iVar6 = 0;
  local_38 = param_1;
  iStack_34 = param_2;
  pfStack_30 = param_3;
  local_2c = param_4;
  fn_00101a1c(auStack_5f0,&DAT_005f4c78,0x48,0x14);
  local_5fc = *param_3 - 0.0;
  local_5f8 = param_3[1] - in_s0;
  local_5f4 = param_3[2] - 0.0;
  iVar1 = (**(code **)(*local_38 + 0x10))(local_38,2,auStack_5f0,10,param_3,&local_5fc,0);
  iVar2 = (**(code **)(*local_38 + 0x10))
                    (local_38,4,auStack_5f0 + iVar1 * 0x48,10,param_3,&local_5fc,0);
  if (0 < iVar1 + iVar2) {
    iVar5 = 0;
    uVar8 = (ulonglong)
            (uint)((*param_3 - local_5fc) * (*param_3 - local_5fc) +
                   (param_3[1] - local_5f8) * (param_3[1] - local_5f8) +
                  (param_3[2] - local_5f4) * (param_3[2] - local_5f4));
    do {
      if (param_2 == 0) {
LAB_0023b98c:
        fVar7 = (local_5e8[iVar5 * 0x12] - *param_3) * (local_5e8[iVar5 * 0x12] - *param_3) +
                (local_5e8[iVar5 * 0x12 + 1] - param_3[1]) *
                (local_5e8[iVar5 * 0x12 + 1] - param_3[1]) +
                (local_5e8[iVar5 * 0x12 + 2] - param_3[2]) *
                (local_5e8[iVar5 * 0x12 + 2] - param_3[2]);
        if (fVar7 <= (float)uVar8) {
          uVar8 = (ulonglong)(uint)fVar7;
          if (iVar5 < iVar1) {
            iVar6 = 4;
          }
          local_5e8[0] = local_5e8[iVar5 * 0x12];
          local_5e8[1] = local_5e8[iVar5 * 0x12 + 1];
          local_5e8[2] = local_5e8[iVar5 * 0x12 + 2];
          if (iVar1 <= iVar5) {
            iVar6 = 8;
          }
        }
      }
      else {
        uVar3 = fn_006b4240(local_38,local_5ac[iVar5 * 0x12]);
        iVar4 = fn_006bab78(uVar3,(int)local_5ec[iVar5 * 0x24]);
        if (iVar4 == 0) goto LAB_0023b98c;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar1 + iVar2);
    if (iVar6 != 0) {
      if (local_2c != (float *)0x0) {
        *local_2c = local_5e8[0];
        local_2c[1] = local_5e8[1];
        local_2c[2] = local_5e8[2];
      }
      if (param_5 != 0) {
        fn_0017821c(param_5,auStack_5f0,0x48);
      }
    }
  }
  return iVar6;
}



undefined4 fn_0023b804(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_58 [8];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  
  uVar2 = 0;
  iVar1 = (**(code **)(*param_1 + 0x10))(param_1,2,auStack_58,1,param_2,param_3,0);
  if (0 < iVar1) {
    uVar2 = 4;
    *param_4 = local_50;
    param_4[1] = uStack_4c;
    param_4[2] = uStack_48;
  }
  return uVar2;
}


