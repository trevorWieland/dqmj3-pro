#include "0065fc0c_0066023c.h"



void fn_0066023c(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x94);
  if (iVar1 < 1) {
    iVar1 = 0;
  }
  *(int *)(param_1 + 0x94) = iVar1;
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(*(int *)(param_1 + 0x50) + iVar1 * 4);
  return;
}



void fn_00660200(int param_1,int param_2,undefined4 param_3)

{
  if (*(int *)(*(int *)(param_1 + 0x50) + param_2 * 4) == 0) {
    fn_00689a10(*(undefined4 *)(param_1 + 8),param_3,(int)*(char *)(param_1 + 0x47));
    *(undefined4 *)(*(int *)(param_1 + 0x50) + param_2 * 4) = param_3;
  }
  return;
}



void fn_0066012c(int param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  
  bVar3 = true;
  *(int *)(param_1 + 0x2c) = param_2;
  *(int *)(param_1 + 0x30) = param_3;
  if (*(char *)(param_1 + 0x45) == '\0') {
LAB_0066015c:
    if (*(char *)(param_1 + 0x44) != '\0') {
      cVar1 = *(char *)(param_1 + 0x4b);
      bVar4 = cVar1 == '\0';
      if (bVar4) {
        cVar1 = *(char *)(param_1 + 0x4c);
      }
      if (!bVar4 || cVar1 != '\0') goto LAB_0066017c;
    }
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x60);
  }
  else {
    cVar1 = *(char *)(param_1 + 0x49);
    bVar4 = cVar1 == '\0';
    if (bVar4) {
      cVar1 = *(char *)(param_1 + 0x4a);
    }
    if (bVar4 && cVar1 == '\0') goto LAB_0066015c;
LAB_0066017c:
    bVar3 = false;
  }
  if (param_2 < 0 || param_3 < 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(param_1 + 0x50) + (param_3 * *(int *)(param_1 + 0x3c) + param_2) * 4);
  }
  *(int *)(param_1 + 0x60) = iVar2;
  *(int *)(param_1 + 100) = iVar2;
  if (bVar3) {
    *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_1 + 0x94);
  }
  if (param_2 < 0 || param_3 < 0) {
    param_2 = -1;
  }
  else {
    param_2 = param_3 * *(int *)(param_1 + 0x3c) + param_2;
  }
  *(int *)(param_1 + 0x94) = param_2;
  *(int *)(param_1 + 0x98) = param_2;
  if (iVar2 != 0) {
    param_2 = *(int *)(param_1 + 0x10);
  }
  if ((iVar2 != 0 && param_2 != 0) && param_4 != 0) {
    fn_0069e8c8(*(undefined4 *)(param_1 + 0xc));
    return;
  }
  return;
}



void fn_00660114(int *param_1,undefined4 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00660128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2c))(param_1,param_1[0xb],param_1[0xc],param_2);
  return;
}



/* WARNING: Type propagation algorithm not settling */

void fn_0065ff7c(int *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  
  bVar5 = *(char *)((int)param_1 + 0x47) != '\0';
  cVar1 = '\0';
  if (bVar5) {
    cVar1 = *(char *)((int)param_1 + 0x46);
  }
  if (bVar5 && cVar1 != '\0') {
    uVar2 = fn_006f6a38(param_1[2]);
    uVar3 = fn_006f6a5c(param_1[2]);
    if ((uVar2 & 0x10000) == 0) {
      if ((uVar2 & 0x20000) == 0) {
        if ((uVar2 & 0x40000) == 0) {
          if ((uVar2 & 0x80000) == 0) {
            if ((uVar2 & 0x400000) == 0) {
              if ((uVar3 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00660094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (**(code **)(*param_1 + 200))(param_1);
                return;
              }
              if ((uVar3 & 2) != 0) {
                    /* WARNING: Could not recover jumptable at 0x006600b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (**(code **)(*param_1 + 0xcc))(param_1);
                return;
              }
              if ((uVar3 & 4) != 0) {
                    /* WARNING: Could not recover jumptable at 0x006600cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (**(code **)(*param_1 + 0xd0))(param_1);
                return;
              }
              if ((uVar3 & 8) == 0) {
                return;
              }
                    /* WARNING: Could not recover jumptable at 0x006600e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*param_1 + 0xd4))(param_1);
              return;
            }
            iVar4 = param_1[10];
            param_1[0x23] = param_1[0x18];
            param_1[0x30] = param_1[0x25];
          }
          else {
            iVar4 = param_1[9];
            param_1[0x22] = param_1[0x18];
            param_1[0x2f] = param_1[0x25];
          }
        }
        else {
          iVar4 = param_1[8];
          param_1[0x21] = param_1[0x18];
          param_1[0x2e] = param_1[0x25];
        }
      }
      else {
        iVar4 = param_1[6];
        param_1[0x20] = param_1[0x18];
        param_1[0x2d] = param_1[0x25];
      }
    }
    else {
      iVar4 = param_1[5];
      param_1[0x1f] = param_1[0x18];
      param_1[0x2c] = param_1[0x25];
    }
    if (iVar4 != 0) {
      fn_0069e8c8(param_1[3]);
      return;
    }
  }
  return;
}



undefined4 * fn_0065fdf0(undefined4 *param_1)

{
  *param_1 = &DAT_00850c64;
  *(undefined1 *)(param_1 + 0x3e) = 0xff;
  fn_00301f50(param_1 + 1,0xf4);
  return param_1;
}



void fn_0065fdd0(int param_1)

{
  undefined4 in_s0;
  undefined4 in_s1;
  undefined4 in_s2;
  undefined4 in_s3;
  
  *(undefined1 *)(param_1 + 0xf8) = 0;
  *(undefined4 *)(param_1 + 0x14) = in_s0;
  *(undefined4 *)(param_1 + 4) = 1;
  *(undefined4 *)(param_1 + 8) = in_s1;
  *(undefined4 *)(param_1 + 0xc) = in_s2;
  *(undefined4 *)(param_1 + 0x10) = in_s3;
  return;
}



void fn_0065fdc4(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 in_s0;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar2 = *param_2;
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  iVar1 = *(int *)(param_1 + 4);
  *(undefined1 *)(iVar1 + 0xf8) = 0;
  *(undefined4 *)(iVar1 + 0x14) = in_s0;
  *(undefined4 *)(iVar1 + 4) = 1;
  *(undefined4 *)(iVar1 + 8) = uVar2;
  *(undefined4 *)(iVar1 + 0xc) = uVar3;
  *(undefined4 *)(iVar1 + 0x10) = uVar4;
  return;
}



void fn_0065fd9c(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  *(undefined1 *)(param_1 + 0xf8) = 3;
  *(undefined4 *)(param_1 + 4) = 1;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  uVar4 = param_2[4];
  uVar5 = param_2[5];
  uVar6 = param_2[6];
  uVar7 = param_2[7];
  *(undefined4 *)(param_1 + 8) = *param_2;
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  *(undefined4 *)(param_1 + 0x18) = uVar4;
  *(undefined4 *)(param_1 + 0x1c) = uVar5;
  *(undefined4 *)(param_1 + 0x20) = uVar6;
  *(undefined4 *)(param_1 + 0x24) = uVar7;
  uVar1 = param_2[9];
  uVar2 = param_2[10];
  uVar3 = param_2[0xb];
  uVar4 = param_2[0xc];
  uVar5 = param_2[0xd];
  uVar6 = param_2[0xe];
  *(undefined4 *)(param_1 + 0x28) = param_2[8];
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  *(undefined4 *)(param_1 + 0x30) = uVar2;
  *(undefined4 *)(param_1 + 0x34) = uVar3;
  *(undefined4 *)(param_1 + 0x38) = uVar4;
  *(undefined4 *)(param_1 + 0x3c) = uVar5;
  *(undefined4 *)(param_1 + 0x40) = uVar6;
  return;
}



void fn_0065fd88(int param_1)

{
  *(undefined1 *)(param_1 + 0xf8) = 0xff;
  fn_00301f50(param_1 + 4,0xf4);
  return;
}



undefined4 fn_0065fd34(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    if (((uint)(int)*(char *)(param_1 + 0xf8) < 4 && (uint)(int)*(char *)(param_2 + 0xf8) < 4) &&
       ((code *)(&PTR_FUN_00898168)[*(char *)(param_1 + 0xf8) * 4 + (int)*(char *)(param_2 + 0xf8)]
        != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0065fd74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(&PTR_FUN_00898168)
                        [*(char *)(param_1 + 0xf8) * 4 + (int)*(char *)(param_2 + 0xf8)])();
      return uVar1;
    }
  }
  return 0;
}



undefined4 fn_0065fc0c(int param_1,int param_2,float *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  
  piVar4 = (int *)(param_1 + 4);
  piVar3 = (int *)(param_2 + 4);
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    do {
      iVar2 = 0;
      local_38 = (float)piVar4[iVar5 * 4 + 1];
      local_34 = (float)piVar4[iVar5 * 4 + 2];
      local_30 = (float)piVar4[iVar5 * 4 + 3];
      fVar8 = (float)piVar4[iVar5 * 4 + 4];
      if (0 < *piVar3) {
        do {
          local_2c = (float)piVar3[iVar2 * 4 + 1];
          local_28 = (float)piVar3[iVar2 * 4 + 2];
          local_24 = (float)piVar3[iVar2 * 4 + 3];
          fVar7 = (float)piVar3[iVar2 * 4 + 4];
          iVar1 = fn_005f1d84(&local_38,&local_2c);
          if (iVar1 != 0) {
            if (param_3 != (float *)0x0) {
              fVar6 = fVar8 + fVar7;
              *param_3 = (local_38 * fVar7 + local_2c * fVar8) / fVar6;
              param_3[1] = (local_34 * fVar7 + local_28 * fVar8) / fVar6;
              param_3[2] = (local_30 * fVar7 + local_24 * fVar8) / fVar6;
            }
            return 1;
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < *piVar3);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *piVar4);
  }
  return 0;
}


