#include "0079a6b8_0079abe0.h"



void fn_0079abe0(int *param_1,uint param_2,undefined4 param_3)

{
  char cVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  code *pcVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint *puVar12;
  int iVar13;
  uint uVar14;
  bool bVar15;
  uint local_40;
  int iStack_3c;
  uint *local_38;
  uint local_34;
  int *piStack_30;
  uint uStack_2c;
  undefined4 local_28;
  
  puVar12 = (uint *)param_1[2];
  uVar14 = param_1[3];
  piStack_30 = param_1;
  uStack_2c = param_2;
  local_28 = param_3;
  if ((uVar14 + ((int)puVar12 - *param_1 >> 2) * 0x20) - param_1[1] < param_2) {
    param_2 = param_2 - ((uVar14 + ((int)puVar12 - *param_1 >> 2) * 0x20) - param_1[1]);
    if (param_2 != 0) {
      iVar6 = param_1[1];
      local_28 = (local_28 & ~((unsigned int)0xff << 0)) | ((unsigned int)((char)param_3) & 0xff);
      cVar1 = (char)local_28;
      if ((uint)((param_1[4] - *param_1 >> 2) * 0x20 -
                (param_1[3] + (param_1[2] - *param_1 >> 2) * 0x20)) < param_2) {
        iVar13 = *param_1;
        iVar4 = param_1[2];
        iVar11 = param_1[3];
        uVar2 = param_2;
        if (param_2 < (uint)((iVar11 + (iVar4 - iVar13 >> 2) * 0x20) - iVar6)) {
          uVar2 = (iVar11 + (iVar4 - iVar13 >> 2) * 0x20) - iVar6;
        }
        local_40 = uVar2 + ((iVar11 + (iVar4 - iVar13 >> 2) * 0x20) - iVar6) + 0x1f >> 5;
        iVar6 = fn_0015ece0(local_40 << 2);
        fn_0079afac(&local_38,param_1,*param_1,param_1[1],puVar12,uVar14,iVar6,0);
        puVar7 = local_38;
        uVar8 = local_34;
        uVar2 = param_2;
        do {
          uVar2 = uVar2 - 1;
          uVar9 = uVar8 + 1;
          uVar10 = 1 << (uVar8 & 0xff);
          puVar3 = puVar7;
          uVar8 = uVar9;
          if (uVar9 == 0x20) {
            uVar8 = 0;
            puVar3 = puVar7 + 1;
          }
          if (cVar1 == '\0') {
            uVar10 = *puVar7 & ~uVar10;
          }
          else {
            uVar10 = uVar10 | *puVar7;
          }
          *puVar7 = uVar10;
          puVar7 = puVar3;
        } while (uVar2 != 0);
        iVar11 = local_34 + param_2;
        iVar4 = iVar11 % 0x20;
        puVar7 = local_38 + ((int)(iVar11 + ((uint)(iVar11 >> 0x1f) >> 0x1b)) >> 5);
        if (iVar4 < 0) {
          iVar4 = iVar4 + 0x20;
          puVar7 = puVar7 + -1;
        }
        fn_0079afac(&local_38,param_1,puVar12,uVar14,param_1[2],param_1[3],puVar7,iVar4);
        param_1[2] = (int)local_38;
        param_1[3] = local_34;
        if (*param_1 != 0) {
          pcVar5 = *(code **)(*param_1 + -8);
          if (pcVar5 == (code *)0x0) {
            fn_0030233c();
          }
          else {
            (*pcVar5)();
          }
        }
        param_1[4] = iVar6 + local_40 * 4;
        param_1[1] = 0;
        *param_1 = iVar6;
        return;
      }
      puVar7 = (uint *)param_1[2];
      uVar8 = param_1[3];
      iVar6 = uVar8 + param_2;
      uVar2 = iVar6 % 0x20;
      puVar3 = puVar7 + ((int)(iVar6 + ((uint)(iVar6 >> 0x1f) >> 0x1b)) >> 5);
      if ((int)uVar2 < 0) {
        uVar2 = uVar2 + 0x20;
        puVar3 = puVar3 + -1;
      }
      while (puVar12 != puVar7 || uVar14 != uVar8) {
        bVar15 = uVar2 == 0;
        uVar2 = uVar2 - 1;
        if (bVar15) {
          uVar2 = 0x1f;
          puVar3 = puVar3 + -1;
        }
        uVar10 = 1 << (uVar2 & 0xff);
        uVar9 = uVar8 - 1;
        if (uVar8 == 0) {
          puVar7 = puVar7 + -1;
          uVar9 = 0x1f;
        }
        if ((*puVar7 & 1 << (uVar9 & 0xff)) == 0) {
          uVar10 = *puVar3 & ~uVar10;
        }
        else {
          uVar10 = uVar10 | *puVar3;
        }
        *puVar3 = uVar10;
        uVar8 = uVar9;
      }
      iVar6 = uVar14 + param_2;
      uVar2 = iVar6 % 0x20;
      puVar7 = puVar12 + ((int)(iVar6 + ((uint)(iVar6 >> 0x1f) >> 0x1b)) >> 5);
      if ((int)uVar2 < 0) {
        uVar2 = uVar2 + 0x20;
        puVar7 = puVar7 + -1;
      }
      while (puVar12 != puVar7 || uVar14 != uVar2) {
        uVar10 = uVar14 + 1;
        uVar8 = 1 << (uVar14 & 0xff);
        puVar3 = puVar12;
        uVar14 = uVar10;
        if (uVar10 == 0x20) {
          uVar14 = 0;
          puVar3 = puVar12 + 1;
        }
        if ((char)local_28 == '\0') {
          uVar8 = *puVar12 & ~uVar8;
        }
        else {
          uVar8 = uVar8 | *puVar12;
        }
        *puVar12 = uVar8;
        puVar12 = puVar3;
      }
      iVar6 = param_1[3] + param_2;
      iVar4 = param_1[2] + ((int)(iVar6 + ((uint)(iVar6 >> 0x1f) >> 0x1b)) >> 5) * 4;
      iVar6 = iVar6 % 0x20;
      param_1[2] = iVar4;
      if (iVar6 < 0) {
        param_1[2] = iVar4 + -4;
        param_1[3] = iVar6 + 0x20;
      }
      else {
        param_1[3] = iVar6;
      }
    }
  }
  else if (param_2 < (uVar14 + ((int)puVar12 - *param_1 >> 2) * 0x20) - param_1[1]) {
    iVar6 = param_2 + param_1[1];
    iVar4 = *param_1 + ((int)(iVar6 + ((uint)(iVar6 >> 0x1f) >> 0x1b)) >> 5) * 4;
    iVar6 = iVar6 % 0x20;
    if (iVar6 < 0) {
      iVar6 = iVar6 + 0x20;
      iVar4 = iVar4 + -4;
    }
    fn_0079afac(&local_40,param_1,param_1[2],uVar14,param_1[2],uVar14,iVar4,iVar6);
    param_1[2] = local_40;
    param_1[3] = iStack_3c;
    return;
  }
  return;
}



uint * fn_0079ab98(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  uVar1 = uVar2;
  if (param_1[1] <= uVar2) {
    for (; uVar1 != param_1[1]; uVar1 = uVar1 + 1) {
    }
  }
  fn_001008c4(uVar2,param_1[2] - uVar2,0);
  return param_1;
}



void fn_0079a8b8(uint *param_1,uint param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  uint uVar3;
  int iVar4;
  undefined2 *puVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  undefined2 *puVar9;
  uint uVar10;
  uint local_20 [2];
  uint *puStack_18;
  uint local_14;
  
  local_14 = param_2;
  puStack_18 = param_1;
  if (0x1fffffff < param_2) {
    local_20[0] = 0x1fffffff;
    fn_002ff628(8,&DAT_007dd000);
  }
  if ((uint)((int)(param_1[2] - *param_1) >> 3) < local_14) {
    uVar10 = (int)(param_1[1] - *param_1) >> 3;
    local_20[0] = uVar10 + (uVar10 >> 1) + (uVar10 >> 3);
    if (local_20[0] < uVar10 + 0x20) {
      local_20[0] = uVar10 + 0x20;
    }
    puVar7 = &local_14;
    if (local_14 < local_20[0]) {
      puVar7 = local_20;
    }
    uVar10 = *puVar7;
    puVar1 = (undefined2 *)fn_0015ece0(uVar10 << 3);
    puVar9 = (undefined2 *)param_1[1];
    puVar2 = puVar1;
    for (puVar5 = (undefined2 *)*param_1; puVar5 != puVar9; puVar5 = puVar5 + 4) {
      if (puVar2 != (undefined2 *)0x0) {
        *puVar2 = *puVar5;
        *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(puVar5 + 2);
      }
      puVar2 = puVar2 + 4;
    }
    uVar3 = param_1[1];
    uVar6 = *param_1;
    if (uVar6 < uVar3) {
      puVar7 = (uint *)(uVar3 - uVar6);
    }
    if (uVar6 < uVar3) {
      uVar8 = ((uint)puVar7 & 0xf) >> 3;
    }
    else {
      uVar8 = 0;
    }
    for (iVar4 = uVar8 + 1; iVar4 < ((int)(uVar3 - uVar6) >> 3) + 1; iVar4 = iVar4 + 2) {
    }
    if (uVar6 != 0) {
      if (*(code **)(uVar6 - 8) == (code *)0x0) {
        fn_0030233c(uVar6 - 8);
      }
      else {
        (**(code **)(uVar6 - 8))();
      }
    }
    uVar3 = *param_1;
    *param_1 = (uint)puVar1;
    param_1[1] = (param_1[1] - uVar3 & 0xfffffff8) + (int)puVar1;
    param_1[2] = (uint)(puVar1 + uVar10 * 4);
  }
  return;
}



void fn_0079a6b8(uint *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  undefined4 uVar13;
  
  puVar1 = (undefined4 *)param_1[1];
  uVar6 = (int)((int)puVar1 - *param_1) >> 3;
  if (uVar6 < (uint)((int)(param_1[2] - *param_1) >> 3)) {
    param_1[1] = (uint)(puVar1 + 2);
    if (puVar1 != (undefined4 *)0x0) {
      *(undefined2 *)puVar1 = *(undefined2 *)(puVar1 + -2);
      puVar1[1] = puVar1[-1];
    }
    puVar8 = puVar1 + -2;
    iVar11 = (int)puVar8 - (int)param_2;
    if (0 < iVar11 >> 3) {
      puVar2 = puVar1;
      if (iVar11 * 0x10000000 < 0) {
        puVar8 = puVar1 + -4;
        puVar2 = puVar1 + -2;
        *puVar2 = *puVar8;
        puVar1[-1] = puVar1[-3];
      }
      for (iVar11 = iVar11 >> 4; iVar11 != 0; iVar11 = iVar11 + -1) {
        uVar13 = puVar8[-1];
        puVar2[-2] = puVar8[-2];
        puVar2[-1] = uVar13;
        uVar13 = puVar8[-3];
        puVar2[-4] = puVar8[-4];
        puVar2[-3] = uVar13;
        puVar2 = puVar2 + -4;
        puVar8 = puVar8 + -4;
      }
    }
    uVar13 = param_3[1];
    *param_2 = *param_3;
    param_2[1] = uVar13;
    return;
  }
  uVar9 = uVar6 + (uVar6 >> 1) + (uVar6 >> 3);
  uVar12 = uVar6 + 0x20;
  if (uVar6 + 0x20 <= uVar9) {
    uVar12 = uVar9;
  }
  puVar3 = (undefined2 *)fn_0015ece0(uVar12 << 3);
  puVar4 = puVar3;
  for (puVar1 = (undefined4 *)*param_1; puVar1 != param_2; puVar1 = puVar1 + 2) {
    if (puVar4 != (undefined2 *)0x0) {
      *puVar4 = *(undefined2 *)puVar1;
      *(undefined4 *)(puVar4 + 2) = puVar1[1];
    }
    puVar4 = puVar4 + 4;
  }
  puVar4 = (undefined2 *)(((int)param_2 - *param_1 & 0xfffffff8) + (int)puVar3);
  if (puVar4 != (undefined2 *)0x0) {
    *puVar4 = *(undefined2 *)param_3;
    *(undefined4 *)(puVar4 + 2) = param_3[1];
  }
  puVar1 = (undefined4 *)param_1[1];
  puVar4 = (undefined2 *)(((int)param_2 - *param_1 & 0xfffffff8) + (int)puVar3);
  for (; param_2 != puVar1; param_2 = param_2 + 2) {
    puVar5 = puVar4 + 4;
    if (puVar5 != (undefined2 *)0x0) {
      *puVar5 = *(undefined2 *)param_2;
      *(undefined4 *)(puVar4 + 6) = param_2[1];
    }
    puVar4 = puVar5;
  }
  uVar9 = param_1[1];
  uVar10 = *param_1;
  uVar6 = uVar9;
  if (uVar10 < uVar9) {
    uVar6 = (uVar9 - uVar10) * 0x10000000;
  }
  iVar11 = (int)(uVar9 - uVar10) >> 3;
  if (uVar10 < uVar9) {
    uVar6 = uVar6 >> 0x1f;
  }
  else {
    uVar6 = 0;
  }
  for (iVar7 = uVar6 + 1; iVar7 < iVar11 + 1; iVar7 = iVar7 + 2) {
  }
  if (uVar10 != 0) {
    if (*(code **)(uVar10 - 8) == (code *)0x0) {
      fn_0030233c(uVar10 - 8);
    }
    else {
      (**(code **)(uVar10 - 8))();
    }
  }
  param_1[2] = (uint)(puVar3 + uVar12 * 4);
  param_1[1] = (uint)(puVar3 + iVar11 * 4 + 4);
  *param_1 = (uint)puVar3;
  return;
}


