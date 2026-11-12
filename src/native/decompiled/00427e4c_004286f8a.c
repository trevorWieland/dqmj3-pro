#include "00427e4c_004286f8a.h"



void fn_00428284(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *param_1;
  uVar3 = param_1[1];
  if (uVar2 != uVar3) {
    uVar1 = uVar2;
    if (uVar3 <= uVar2) {
      do {
        uVar1 = uVar1 + 6;
      } while (uVar1 != uVar3);
    }
    param_1[1] = uVar3 + ((int)(uVar3 - uVar2) / 6) * -6;
  }
  return;
}



void fn_00427ee4(uint *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint local_38;
  undefined4 local_34;
  uint *puStack_2c;
  uint local_28;
  
  puStack_2c = param_1;
  local_28 = param_2;
  iVar1 = fn_001a46f4(param_2);
  if ((iVar1 != 0) &&
     ((uint)((int)(param_1[1] - *param_1) / 6) < (uint)((int)(param_1[2] - *param_1) / 6))) {
    local_34 = 0;
    local_38 = local_28 & 0xffff;
    uVar2 = param_1[1];
    if (uVar2 == param_1[2]) {
      iVar1 = uVar2 - *param_1;
      uVar4 = (int)(param_1[2] - *param_1) / 6;
      uVar7 = iVar1 / 6;
      if (uVar7 < uVar4) {
        param_1[1] = uVar2 + 6;
        if (uVar2 != 0) {
          fn_0019bc50(uVar2,uVar2 - 6);
        }
        uVar7 = uVar2 - 6;
        uVar4 = uVar2;
        if (uVar2 < uVar7) {
          iVar1 = uVar7 - uVar2;
          if (0 < iVar1) {
            iVar3 = iVar1 / 6 + (iVar1 >> 0x1f);
            uVar6 = uVar7;
            if ((iVar3 - (iVar1 >> 0x1f) & 1U) != 0) {
              uVar6 = uVar2 - 0xc;
              fn_0019bc50(uVar7,uVar6);
              uVar4 = uVar7;
            }
            for (iVar3 = iVar3 / 2; iVar3 != 0; iVar3 = iVar3 + -1) {
              fn_0019bc50(uVar4 - 6,uVar6 - 6);
              uVar4 = uVar4 - 0xc;
              uVar6 = uVar6 - 0xc;
              fn_0019bc50();
            }
          }
        }
        else {
          while (uVar2 != uVar7) {
            uVar7 = uVar7 - 6;
            fn_0019bc50(uVar4 - 6,uVar7);
            uVar4 = uVar4 - 6;
          }
        }
        fn_0019bc50(uVar2,&local_38);
      }
      else {
        uVar6 = uVar7 + (uVar7 >> 1) + (uVar7 >> 3);
        if (uVar6 < uVar7 + 0x20) {
          uVar6 = uVar7 + 0x20;
        }
        uVar5 = fn_00100fc6(uVar6 * 6,0,uVar4,iVar1 * 0x2aaaaaab);
        uVar7 = uVar5;
        for (uVar4 = *param_1; uVar4 != uVar2; uVar4 = uVar4 + 6) {
          if (uVar7 != 0) {
            fn_0019bc50(uVar7,uVar4);
          }
          uVar7 = uVar7 + 6;
        }
        iVar1 = uVar5 + ((int)(uVar2 - *param_1) / 6) * 6;
        if (iVar1 != 0) {
          fn_0019bc50(iVar1,&local_38);
        }
        uVar4 = param_1[1];
        iVar1 = uVar5 + ((int)(uVar2 - *param_1) / 6) * 6;
        for (; uVar2 != uVar4; uVar2 = uVar2 + 6) {
          iVar1 = iVar1 + 6;
          if (iVar1 != 0) {
            fn_0019bc50(iVar1,uVar2);
          }
        }
        uVar4 = *param_1;
        uVar7 = param_1[1];
        uVar2 = uVar4;
        if (uVar7 < uVar4) {
          do {
            uVar2 = uVar2 + 6;
          } while (uVar2 != uVar7);
        }
        fn_001008c4(uVar4,(int)(param_1[2] - uVar4) / 6,0);
        *param_1 = uVar5;
        param_1[1] = uVar5 + ((int)(uVar7 - uVar4) / 6) * 6 + 6;
        param_1[2] = uVar5 + uVar6 * 6;
      }
    }
    else {
      param_1[1] = uVar2 + 6;
      if (uVar2 != 0) {
        fn_0019bc50(uVar2,&local_38);
      }
    }
    fn_004282d0(param_1,local_28);
  }
  return;
}



short * fn_004282d0(undefined4 *param_1,int param_2)

{
  short *psVar1;
  short *psVar2;
  int iVar3;
  int iVar4;
  
  psVar1 = (short *)*param_1;
  psVar2 = (short *)param_1[1];
  if (psVar1 < psVar2) {
    iVar4 = (int)psVar2 - (int)psVar1;
    iVar3 = 1;
    if (1 < iVar4 / 6 + 1) {
      do {
        if (*psVar1 == param_2) {
          return psVar1;
        }
        iVar3 = iVar3 + 1;
        psVar1 = psVar1 + 3;
      } while (iVar3 < iVar4 / 6 + 1);
    }
  }
  else {
    for (; psVar1 != psVar2; psVar1 = psVar1 + 3) {
      if (*psVar1 == param_2) {
        return psVar1;
      }
    }
  }
  return (short *)0x0;
}



void fn_00427e4c(undefined4 *param_1)

{
  *param_1 = &DAT_0083b418;
  if (param_1[0x19] != -1) {
    (**(code **)(**(int **)(DAT_008977e0 + 0x2c) + 0xc))();
    if (param_1[0x19] != -1) {
      fn_00216938(param_1[5]);
      param_1[0x19] = 0xffffffff;
    }
  }
  fn_00226f48(param_1);
  fn_002feef8();
  return;
}


