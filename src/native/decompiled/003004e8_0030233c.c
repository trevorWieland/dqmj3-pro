#include "003004e8_0030233c.h"



void fn_0030233c(int param_1)

{
  int iVar1;
  int *piVar2;
  
  if (param_1 == 0) {
    return;
  }
  if (DAT_0089a508 == '\0') {
    return;
  }
  iVar1 = fn_00124ffc();
  fn_0014e774(*(undefined4 *)(iVar1 + 4),param_1);
  piVar2 = (int *)fn_00124ffc();
                    /* WARNING: Could not recover jumptable at 0x00143b8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 4))(piVar2,param_1);
  return;
}



void fn_00301d9c(undefined4 param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int local_28;
  int local_24;
  int local_20;
  int local_18 [2];
  
  local_24 = 0xffffffff;
  local_18[0] = 0;
  local_28 = param_2;
  local_20 = param_2;
  iVar1 = fn_00301d60(local_18,&local_28,param_1);
  local_24 = param_2 + local_18[0];
  if (param_3 != (int *)0x0) {
    if (local_18[0] == 0) {
      iVar2 = param_2;
    }
    else {
      iVar2 = local_24;
    }
    *param_3 = iVar2;
  }
  if ((local_18[0] != 0) && ((iVar1 < 1 || (local_28 != local_24)))) {
    local_24 = local_24 - param_2;
    local_28 = param_2;
    local_20 = param_2;
    fn_00301d60(local_18,&local_28,param_1);
  }
  return;
}



longlong fn_00300f74(uint param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  
  if ((int)(param_1 | param_2) < 0) {
    uVar4 = param_2 & 0x80000000;
    if ((int)uVar4 < 0) {
      param_2 = -param_2;
    }
    uVar7 = uVar4 ^ (int)param_1 >> 0x20;
    if (SUB41(param_1 >> 0x1f,0)) {
      param_1 = -param_1;
    }
    iVar1 = (int)uVar7 >> 0x1f;
    uVar5 = param_2;
    if (param_1 >> 4 < param_2) goto LAB_00301144;
    if (param_1 >> 8 < param_2) goto LAB_00301114;
    uVar5 = param_2 << 6;
    uVar4 = 0xfc000000;
    if (param_1 >> 8 < uVar5) goto LAB_00301114;
    uVar5 = param_2 << 0xc;
    uVar4 = 0xfff00000;
    if (param_1 >> 8 < uVar5) goto LAB_00301114;
    uVar5 = param_2 << 0x12;
    uVar4 = 0xffffc000;
    if (uVar5 <= param_1 >> 8) {
      uVar5 = param_2 << 0x18;
      uVar4 = 0xffffff00;
    }
    bVar8 = uVar5 == 0;
    if (!bVar8) {
      do {
        if (bVar8) {
          uVar5 = uVar5 >> 6;
        }
LAB_00301114:
        bVar8 = uVar5 <= param_1 >> 7;
        if (bVar8) {
          param_1 = param_1 + uVar5 * -0x80;
        }
        bVar9 = uVar5 <= param_1 >> 6;
        if (bVar9) {
          param_1 = param_1 + uVar5 * -0x40;
        }
        bVar10 = uVar5 <= param_1 >> 5;
        if (bVar10) {
          param_1 = param_1 + uVar5 * -0x20;
        }
        bVar11 = uVar5 <= param_1 >> 4;
        if (bVar11) {
          param_1 = param_1 + uVar5 * -0x10;
        }
        uVar4 = (((uVar4 * 2 + (uint)bVar8) * 2 + (uint)bVar9) * 2 + (uint)bVar10) * 2 +
                (uint)bVar11;
LAB_00301144:
        bVar8 = uVar5 <= param_1 >> 3;
        if (bVar8) {
          param_1 = param_1 + uVar5 * -8;
        }
        uVar6 = uVar4 * 2 + (uint)bVar8;
        bVar9 = uVar5 <= param_1 >> 2;
        if (bVar9) {
          param_1 = param_1 + uVar5 * -4;
        }
        uVar4 = uVar6 * 2 + (uint)bVar9;
        bVar8 = true;
      } while (CARRY4(uVar6,uVar6) || CARRY4(uVar6 * 2,(uint)bVar9));
      bVar8 = uVar5 <= param_1 >> 1;
      if (bVar8) {
        param_1 = param_1 + uVar5 * -2;
      }
      uVar6 = param_1 - uVar5;
      if (uVar5 > param_1) {
        uVar6 = param_1;
      }
      iVar2 = (uVar4 * 2 + (uint)bVar8) * 2 + (uint)(uVar5 <= param_1);
      if (iVar1 < 0) {
        iVar2 = -iVar2;
      }
      if ((bool)((byte)(uVar7 >> 0x1e) & 1)) {
        uVar6 = -uVar6;
      }
      return CONCAT44(uVar6,iVar2);
    }
    iVar2 = 0;
    if (iVar1 < 0) {
      param_1 = -param_1;
    }
LAB_00301190:
    uVar3 = fn_00147f5c(0,0,uVar4,iVar2);
    return CONCAT44(param_1,uVar3);
  }
  if (param_1 >> 1 < param_2) {
    if (param_1 < param_2) {
      return (ulonglong)param_1 << 0x20;
    }
    return CONCAT44(param_1 - param_2,1);
  }
  uVar4 = 0;
  uVar7 = param_2;
  if (param_2 <= param_1 >> 4) {
    if (param_2 <= param_1 >> 8) {
      if (param_1 >> 0xc < param_2) goto LAB_00301000;
      if (param_1 >> 0x10 < param_2) goto LAB_00300fd0;
      uVar7 = param_2 << 8;
      uVar4 = 0xff000000;
      if (uVar7 <= param_1 >> 0x10) {
        uVar4 = 0xffff0000;
        uVar7 = param_2 << 0x10;
      }
      if (param_1 >> 0xc < uVar7) goto LAB_00301000;
      iVar2 = -uVar7;
      bVar8 = false;
      if (uVar7 == 0) goto LAB_00301190;
      do {
        if (bVar8) {
          uVar7 = uVar7 >> 8;
        }
LAB_00300fd0:
        bVar8 = uVar7 <= param_1 >> 0xf;
        if (bVar8) {
          param_1 = param_1 + uVar7 * -0x8000;
        }
        bVar9 = uVar7 <= param_1 >> 0xe;
        if (bVar9) {
          param_1 = param_1 + uVar7 * -0x4000;
        }
        bVar10 = uVar7 <= param_1 >> 0xd;
        if (bVar10) {
          param_1 = param_1 + uVar7 * -0x2000;
        }
        bVar11 = uVar7 <= param_1 >> 0xc;
        if (bVar11) {
          param_1 = param_1 + uVar7 * -0x1000;
        }
        uVar4 = (((uVar4 * 2 + (uint)bVar8) * 2 + (uint)bVar9) * 2 + (uint)bVar10) * 2 +
                (uint)bVar11;
LAB_00301000:
        bVar8 = uVar7 <= param_1 >> 0xb;
        if (bVar8) {
          param_1 = param_1 + uVar7 * -0x800;
        }
        bVar9 = uVar7 <= param_1 >> 10;
        if (bVar9) {
          param_1 = param_1 + uVar7 * -0x400;
        }
        bVar10 = uVar7 <= param_1 >> 9;
        if (bVar10) {
          param_1 = param_1 + uVar7 * -0x200;
        }
        uVar5 = ((uVar4 * 2 + (uint)bVar8) * 2 + (uint)bVar9) * 2 + (uint)bVar10;
        bVar9 = uVar7 <= param_1 >> 8;
        if (bVar9) {
          param_1 = param_1 + uVar7 * -0x100;
        }
        uVar4 = uVar5 * 2 + (uint)bVar9;
        bVar8 = true;
      } while (CARRY4(uVar5,uVar5) || CARRY4(uVar5 * 2,(uint)bVar9));
    }
    bVar8 = uVar7 <= param_1 >> 7;
    if (bVar8) {
      param_1 = param_1 + uVar7 * -0x80;
    }
    bVar9 = uVar7 <= param_1 >> 6;
    if (bVar9) {
      param_1 = param_1 + uVar7 * -0x40;
    }
    bVar10 = uVar7 <= param_1 >> 5;
    if (bVar10) {
      param_1 = param_1 + uVar7 * -0x20;
    }
    bVar11 = uVar7 <= param_1 >> 4;
    if (bVar11) {
      param_1 = param_1 + uVar7 * -0x10;
    }
    uVar4 = (((uVar4 * 2 + (uint)bVar8) * 2 + (uint)bVar9) * 2 + (uint)bVar10) * 2 + (uint)bVar11;
  }
  bVar8 = uVar7 <= param_1 >> 3;
  if (bVar8) {
    param_1 = param_1 + uVar7 * -8;
  }
  bVar9 = uVar7 <= param_1 >> 2;
  if (bVar9) {
    param_1 = param_1 + uVar7 * -4;
  }
  bVar10 = uVar7 <= param_1 >> 1;
  if (bVar10) {
    param_1 = param_1 + uVar7 * -2;
  }
  uVar5 = param_1 - uVar7;
  if (uVar7 > param_1) {
    uVar5 = param_1;
  }
  return CONCAT44(uVar5,(((uVar4 * 2 + (uint)bVar8) * 2 + (uint)bVar9) * 2 + (uint)bVar10) * 2 +
                        (uint)(uVar7 <= param_1));
}



void fn_0030091a(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 auStack_40 [4];
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  local_2c = 1;
  local_34 = &LAB_00300910_1;
  local_3c = param_4;
  local_38 = param_2;
  local_30 = param_1;
  fn_00301bd8(auStack_40,param_3);
  return;
}



void fn_003007bc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  fn_00102874(param_2,param_1,8,param_3,param_4);
  return;
}



void fn_003007ac(undefined4 *param_1)

{
  *param_1 = &DAT_008f9d04;
  return;
}



void fn_0030079c(void)

{
  fn_001013b0();
  return;
}



int fn_003004e8(int param_1,undefined4 param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  float fVar7;
  int iVar8;
  bool bVar9;
  float in_s0;
  int local_160 [81];
  
  fVar7 = 0.0;
  iVar8 = 0;
  uVar1 = fn_00301f50(local_160,0x51);
  iVar4 = *(int *)(param_1 + 8);
  uVar5 = *(uint *)(param_1 + 0x24);
  if (iVar4 != 0) {
    uVar1 = (uint)*(byte *)(iVar4 + 0x58);
  }
  iVar6 = (int)(*(int *)(param_1 + 0x28) - uVar5) >> 2;
  if (iVar4 != 0 && uVar1 != 0) {
    iVar6 = iVar6 + 1;
  }
  bVar9 = iVar4 != 0;
  if (bVar9) {
    uVar5 = (uint)*(byte *)(iVar4 + 0x58);
  }
  uVar1 = (uint)(bVar9 && uVar5 != 0);
  if (bVar9 && uVar5 != 0) {
    local_160[0] = iVar4;
  }
  iVar4 = 0;
  for (; (int)uVar1 < iVar6; uVar1 = uVar1 + 1) {
    local_160[uVar1] = *(int *)(*(int *)(param_1 + 0x24) + iVar4 * 4);
    iVar4 = iVar4 + 1;
  }
  iVar4 = 0;
  if (0 < iVar6) {
    do {
      piVar2 = (int *)local_160[iVar4];
      if (((piVar2 != (int *)0x0) &&
          (iVar3 = (**(code **)(*piVar2 + 0xc4))(piVar2,param_2), iVar3 != 0)) &&
         ((fn_001daf7c(param_2,local_160[iVar4]), iVar8 == 0 || (in_s0 < fVar7)))) {
        iVar8 = local_160[iVar4];
        fVar7 = in_s0;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar6);
  }
  return iVar8;
}


