#include "004b9414_004b9d60.h"



void fn_004b9d60(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004b9d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 4) + 0x2c))(*(int **)(param_1 + 4),param_1);
  return;
}



void fn_004b9d24(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (*(int *)(param_2 + 0x70) == 0) {
    *(undefined4 *)(param_2 + 0x70) = param_3;
    uVar1 = 0x10001;
  }
  else {
    uVar1 = 0x8001000e;
  }
  param_1[2] = 0x71;
  *param_1 = uVar1;
  param_1[1] = &DAT_007dba44;
  return;
}



void fn_004b9cb4(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    if (*(int *)(param_1 + 0x78) != 0) {
      (**(code **)(*piVar1 + 0x7c))(piVar1,*(int *)(param_1 + 0x78),param_1);
    }
    if (param_2 != 0) {
      (**(code **)(**(int **)(param_1 + 4) + 0x78))(*(int **)(param_1 + 4),param_2,param_1);
    }
  }
  *(int *)(param_1 + 0x78) = param_2;
  return;
}



void fn_004b9c58(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    if (*(int *)(param_1 + 0x7c) != 0) {
      (**(code **)(*piVar1 + 0x74))(piVar1,*(int *)(param_1 + 0x7c),param_1);
    }
    if (param_2 != 0) {
      (**(code **)(**(int **)(param_1 + 4) + 0x70))(*(int **)(param_1 + 4),param_2,param_1);
    }
  }
  *(int *)(param_1 + 0x7c) = param_2;
  return;
}



undefined8 fn_004b9c48(undefined8 *param_1)

{
  return *param_1;
}



void fn_004b9b40(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  param_2 = param_2 + param_3 * 8;
  uVar1 = *(undefined4 *)(param_2 + 0x2dc);
  *param_1 = *(undefined4 *)(param_2 + 0x2d8);
  param_1[1] = uVar1;
  return;
}



uint * fn_004b9a2c(uint *param_1,undefined4 param_2)

{
  uint uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  uVar1 = fn_0011a36c(param_2);
  param_1[1] = param_1[1] & 0xffffff00 | uVar1 >> 6 & 0xff;
  *param_1 = *param_1 & 0x3ffffff | uVar1 << 0x1a;
  uVar1 = fn_0011a3c4(param_2);
  *param_1 = (uVar1 & 0xf) << 0x16 | *param_1 & 0xfc3fffff;
  param_1[1] = param_1[1];
  uVar1 = fn_0011a314(param_2);
  *param_1 = (uVar1 & 0x1f) << 0x11 | *param_1 & 0xffc1ffff;
  param_1[1] = param_1[1];
  uVar1 = fn_00129e2c(param_2);
  *param_1 = (uVar1 & 0x1f) << 0xc | *param_1 & 0xfffe0fff;
  param_1[1] = param_1[1];
  uVar1 = fn_00129e94(param_2);
  *param_1 = (uVar1 & 0x3f) << 6 | *param_1 & 0xfffff03f;
  param_1[1] = param_1[1];
  uVar1 = fn_00129f00(param_2);
  param_1[1] = param_1[1];
  *param_1 = *param_1 & 0xffffffc0 | uVar1 & 0x3f;
  return param_1;
}



void fn_004b9850(uint *param_1)

{
  uint uVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 local_10;
  undefined4 uStack_c;
  
  fn_00114248(&local_10);
  local_18 = local_10;
  uStack_14 = uStack_c;
  uVar1 = fn_0011a36c(&local_18);
  param_1[1] = param_1[1] & 0xffffff00 | uVar1 >> 6 & 0xff;
  *param_1 = *param_1 & 0x3ffffff | uVar1 << 0x1a;
  uVar1 = fn_0011a3c4(&local_18);
  *param_1 = (uVar1 & 0xf) << 0x16 | *param_1 & 0xfc3fffff;
  param_1[1] = param_1[1];
  uVar1 = fn_0011a314(&local_18);
  *param_1 = (uVar1 & 0x1f) << 0x11 | *param_1 & 0xffc1ffff;
  param_1[1] = param_1[1];
  uVar1 = fn_00129e2c(&local_18);
  *param_1 = (uVar1 & 0x1f) << 0xc | *param_1 & 0xfffe0fff;
  param_1[1] = param_1[1];
  uVar1 = fn_00129e94(&local_18);
  *param_1 = (uVar1 & 0x3f) << 6 | *param_1 & 0xfffff03f;
  param_1[1] = param_1[1];
  uVar1 = fn_00129f00(&local_18);
  param_1[1] = param_1[1];
  *param_1 = *param_1 & 0xffffffc0 | uVar1 & 0x3f;
  return;
}



void fn_004b983c(void)

{
  fn_004b9968();
  return;
}



void fn_004b9968(uint *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5
                 )

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  *param_1 = 0;
  param_1[1] = 0;
  iVar1 = fn_0011c134(param_3,param_4,0x15180,0);
  fn_004b96e8(param_1,iVar1 + param_5);
  fn_00169c20(param_3,param_4,0xe10,0);
  uVar3 = 0x18;
  fn_00169c20();
  uVar2 = *param_1;
  uVar6 = param_1[1];
  uVar4 = 0x3c;
  fn_00169c20(param_3,param_4,0x3c,0);
  uVar5 = 0x3c;
  fn_00169c20();
  *param_1 = (uVar5 & 0x3f) << 6 | (uVar3 & 0x1f) << 0xc | uVar2 & 0xfffe0000 | uVar4 & 0x3f;
  param_1[1] = uVar6;
  return;
}



void fn_004b96e8(uint *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar1 = ((param_2 + 0x267432) * 4) / 0x23ab1;
  iVar2 = iVar1 * 0x23ab1 + 3;
  iVar3 = (param_2 + 0x267432) - ((int)(iVar2 + ((uint)(iVar2 >> 0x1f) >> 0x1e)) >> 2);
  uVar4 = (iVar3 + 1) * 4000;
  iVar2 = (int)((longlong)(int)uVar4 * -0x48441d23 + ((ulonglong)uVar4 << 0x20) >> 0x20);
  iVar5 = (iVar2 >> 0x14) - (iVar2 >> 0x1f);
  iVar2 = (short)iVar5 * 0x5b5;
  iVar3 = (iVar3 - ((int)(iVar2 + ((uint)(iVar2 >> 0x1f) >> 0x1e)) >> 2)) + 0x1f;
  iVar2 = (iVar3 * 0x50) / 0x98f;
  uVar4 = iVar5 + (iVar1 + -0x31) * 100 + iVar2 / 0xb;
  param_1[1] = uVar4 >> 6 & 0xff | param_1[1] & 0xffffff00;
  *param_1 = (iVar3 - (iVar2 * 0x98f) / 0x50) * 0x20000 & 0x3e0000U |
             *param_1 & 0x1ffff | uVar4 * 0x4000000 |
             (iVar2 + (iVar2 / 0xb) * -0xc + 2) * 0x400000 & 0x3c00000U;
  return;
}



uint * fn_004b9414(uint *param_1,uint *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  uint local_20;
  uint local_1c [2];
  
  if (param_2 != param_1) {
    puVar2 = (undefined4 *)param_2[1];
    puVar10 = (undefined4 *)*param_2;
    puVar7 = (undefined4 *)*param_1;
    uVar11 = (int)puVar2 - (int)puVar10;
    local_20 = (int)uVar11 >> 2;
    if ((uint)((int)(param_1[2] - (int)puVar7) >> 2) < local_20) {
      uVar11 = (int)(param_1[1] - (int)puVar7) >> 2;
      local_1c[0] = uVar11 + (uVar11 >> 1) + (uVar11 >> 3);
      if (local_1c[0] < uVar11 + 0x20) {
        local_1c[0] = uVar11 + 0x20;
      }
      puVar3 = local_1c;
      if (local_1c[0] <= local_20) {
        puVar3 = &local_20;
      }
      uVar11 = *puVar3;
      puVar2 = (undefined4 *)fn_0015ece0(uVar11 << 2);
      puVar8 = (undefined4 *)param_2[1];
      puVar7 = puVar2;
      for (puVar10 = (undefined4 *)*param_2; puVar10 != puVar8; puVar10 = puVar10 + 1) {
        if (puVar7 != (undefined4 *)0x0) {
          *puVar7 = *puVar10;
        }
        puVar7 = puVar7 + 1;
      }
      uVar4 = *param_1;
      uVar6 = param_1[1];
      uVar1 = uVar4;
      if (uVar4 < uVar6) {
        if (0 < (int)(uVar6 - uVar4)) {
          for (iVar5 = (int)(uVar6 - uVar4) >> 3; iVar5 != 0; iVar5 = iVar5 + -1) {
          }
        }
      }
      else {
        for (; uVar1 != uVar6; uVar1 = uVar1 + 4) {
        }
      }
      fn_0014f1bc(uVar4);
      *param_1 = (uint)puVar2;
      param_1[1] = (param_2[1] - *param_2 & 0xfffffffc) + (int)puVar2;
      param_1[2] = (uint)(puVar2 + uVar11);
    }
    else {
      uVar1 = (int)(param_1[1] - (int)puVar7) >> 2;
      if (uVar1 < local_20) {
        puVar2 = puVar10 + uVar1;
        if (puVar10 < puVar2) {
          if (0 < (int)puVar2 - (int)puVar10) {
            puVar8 = puVar10 + -1;
            puVar9 = puVar7 + -1;
            if (((int)puVar2 - (int)puVar10) * 0x20000000 < 0) {
              *puVar7 = *puVar10;
              puVar8 = puVar10;
              puVar9 = puVar7;
            }
            for (iVar5 = (int)puVar2 - (int)puVar10 >> 3; iVar5 != 0; iVar5 = iVar5 + -1) {
              puVar9[1] = puVar8[1];
              puVar8 = puVar8 + 2;
              puVar9 = puVar9 + 2;
              *puVar9 = *puVar8;
            }
          }
        }
        else {
          for (; puVar10 != puVar2; puVar10 = puVar10 + 1) {
            *puVar7 = *puVar10;
            puVar7 = puVar7 + 1;
          }
        }
        param_1[1] = (param_2[1] - *param_2 & 0xfffffffc) + *param_1;
        puVar2 = (undefined4 *)param_2[1];
        puVar7 = (undefined4 *)(*param_1 + uVar1 * 4);
        for (puVar10 = (undefined4 *)(*param_2 + uVar1 * 4); puVar10 != puVar2;
            puVar10 = puVar10 + 1) {
          if (puVar7 != (undefined4 *)0x0) {
            *puVar7 = *puVar10;
          }
          puVar7 = puVar7 + 1;
        }
      }
      else {
        if (puVar10 < puVar2) {
          if (0 < (int)uVar11) {
            puVar2 = puVar7 + -1;
            puVar8 = puVar10 + -1;
            if ((int)(uVar11 * 0x20000000) < 0) {
              *puVar7 = *puVar10;
              puVar2 = puVar7;
              puVar8 = puVar10;
            }
            for (iVar5 = (int)uVar11 >> 3; iVar5 != 0; iVar5 = iVar5 + -1) {
              puVar2[1] = puVar8[1];
              puVar8 = puVar8 + 2;
              puVar2 = puVar2 + 2;
              *puVar2 = *puVar8;
            }
            puVar7 = (undefined4 *)((int)puVar7 + (uVar11 & 0xfffffffc));
          }
        }
        else {
          for (; puVar10 != puVar2; puVar10 = puVar10 + 1) {
            *puVar7 = *puVar10;
            puVar7 = puVar7 + 1;
          }
        }
        puVar10 = (undefined4 *)param_1[1];
        if (puVar7 < puVar10) {
          if (0 < (int)puVar10 - (int)puVar7) {
            for (iVar5 = (int)puVar10 - (int)puVar7 >> 3; iVar5 != 0; iVar5 = iVar5 + -1) {
            }
          }
        }
        else {
          for (; puVar7 != puVar10; puVar7 = puVar7 + 1) {
          }
        }
        uVar11 = *param_1 + (param_2[1] - *param_2 & 0xfffffffc);
        param_1[1] = uVar11;
        param_1[2] = uVar11;
      }
    }
  }
  return param_1;
}


