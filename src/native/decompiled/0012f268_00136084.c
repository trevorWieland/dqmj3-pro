#include "0012f268_00136084.h"



undefined4 fn_00136084(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_10;
  
  local_10 = param_4;
  iVar1 = fn_00157f58(param_1,0xffffffff,&local_10);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_001360f8,(char *)&DAT_001360e0,(char *)&DAT_007bc3e5,0x51
                        );
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  return 0;
}



undefined4 fn_00135ff4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_10;
  
  local_10 = param_4;
  iVar1 = fn_00157f58(param_1,0xffffffff,&local_10);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00136068,(char *)&DAT_00136050,(char *)&DAT_007bc411,0x65
                        );
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  return 0;
}



undefined4 fn_00135f64(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_10;
  
  local_10 = param_4;
  iVar1 = fn_00157f58(param_1,0xffffffff,&local_10);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00135fd8,(char *)&DAT_00135fc0,(char *)&DAT_007bc3fb,0x5b
                        );
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  return 0;
}



undefined4 fn_00134790(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_18 [4];
  undefined1 auStack_14 [4];
  undefined1 auStack_10 [8];
  
  iVar1 = fn_00157f58(param_1,0xfffffffd,local_18);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00134898,(char *)&DAT_00134880,(char *)&DAT_007bc36b,0x1b);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157f58(param_1,0xfffffffe,auStack_14);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00134898,(char *)&DAT_00134880,(char *)&DAT_007bc36b,0x1d);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157fb0(param_1,0xffffffff,auStack_10);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_001348b0,(char *)&DAT_00134880,(char *)&DAT_007bc36b,0x1f);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  return 0;
}



undefined4 fn_0012f7b8(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_10 [4];
  int local_c;
  
  iVar1 = fn_00157eb4(param_1,0xfffffffe,&local_c);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_0012f888,(char *)&DAT_0012f870,(char *)&DAT_007bc360,0xf);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157fb0(param_1,0xffffffff,local_10);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_0012f89c,(char *)&DAT_0012f870,(char *)&DAT_007bc360,0x11);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  return 0;
}



int * fn_0012f748(int *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_1[1];
  uVar1 = uVar2;
  if ((uint)param_1[2] < uVar2) {
    do {
      uVar1 = uVar1 + 0x28;
    } while (uVar1 != param_1[2]);
  }
  fn_001008c4(uVar2,(int)(param_1[3] - uVar2) / 0x28,0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 4))();
  }
  return param_1;
}



void fn_0012f268(uint *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined4 *puVar11;
  int iVar12;
  int *piVar13;
  int *piVar14;
  undefined4 *puVar15;
  uint local_30 [4];
  
  piVar13 = (int *)param_1[1];
  for (piVar14 = (int *)*param_1; piVar14 != piVar13; piVar14 = piVar14 + 1) {
    if ((int *)*piVar14 != (int *)0x0) {
      (**(code **)(*(int *)*piVar14 + 0x14))();
      if ((int *)*piVar14 != (int *)0x0) {
        (**(code **)(*(int *)*piVar14 + 4))();
      }
    }
  }
  piVar13 = (int *)param_1[0x24];
  for (piVar14 = (int *)param_1[0x23]; piVar14 != piVar13; piVar14 = piVar14 + 1) {
    if ((int *)*piVar14 != (int *)0x0) {
      (**(code **)(*(int *)*piVar14 + 4))();
    }
  }
  puVar4 = (undefined4 *)param_1[1];
  puVar9 = (undefined4 *)*param_1;
  if (puVar9 != puVar4) {
    puVar6 = puVar9;
    if (puVar4 <= puVar9) {
      do {
        puVar6 = puVar6 + 1;
      } while (puVar6 != puVar4);
    }
    puVar4 = (undefined4 *)((int)puVar4 - ((int)puVar4 - (int)puVar9 & 0xfffffffcU));
    param_1[1] = (uint)puVar4;
  }
  if ((uint)((int)(param_1[2] - (int)puVar9) >> 2) < ((int)puVar4 - (int)puVar9 >> 2) + 100U) {
    local_30[0] = ((int)((int)puVar4 - *param_1) >> 2) + 100;
    uVar8 = (int)(param_1[1] - *param_1) >> 2;
    uVar10 = uVar8 + (uVar8 >> 1) + (uVar8 >> 3);
    local_30[2] = uVar8 + 0x20;
    if (uVar8 + 0x20 <= uVar10) {
      local_30[2] = uVar10;
    }
    puVar5 = local_30;
    if (local_30[0] < local_30[2]) {
      puVar5 = local_30 + 2;
    }
    uVar8 = *puVar5;
    puVar2 = (undefined4 *)fn_00100fc6(uVar8 << 2,0);
    puVar6 = puVar2;
    for (puVar4 = (undefined4 *)*param_1; puVar4 != puVar9; puVar4 = puVar4 + 1) {
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = *puVar4;
      }
      puVar6 = puVar6 + 1;
    }
    iVar1 = 100;
    puVar4 = (undefined4 *)(((int)puVar9 - *param_1 & 0xfffffffc) + (int)puVar2);
    do {
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = 0;
      }
      iVar1 = iVar1 + -1;
      puVar4 = puVar4 + 1;
    } while (iVar1 != 0);
    puVar6 = (undefined4 *)param_1[1];
    puVar4 = puVar2 + ((int)((int)puVar9 - *param_1) >> 2) + 100;
    for (; puVar9 != puVar6; puVar9 = puVar9 + 1) {
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = *puVar9;
      }
      puVar4 = puVar4 + 1;
    }
    uVar3 = *param_1;
    uVar7 = param_1[1];
    uVar10 = uVar3;
    if (uVar7 < uVar3) {
      do {
        uVar10 = uVar10 + 4;
      } while (uVar10 != uVar7);
    }
    fn_001008c4(uVar3,(int)(param_1[2] - uVar3) >> 2,0);
    param_1[2] = (uint)(puVar2 + uVar8);
    param_1[1] = (uint)(puVar2 + ((int)(uVar7 - uVar3) >> 2) + 100);
    *param_1 = (uint)puVar2;
  }
  else {
    puVar6 = puVar9 + 100;
    param_1[1] = (uint)(puVar4 + 100);
    if (puVar6 < puVar4) {
      puVar11 = puVar4 + -100;
      puVar15 = puVar4;
      for (puVar2 = puVar11; puVar2 != puVar4; puVar2 = puVar2 + 1) {
        if (puVar15 != (undefined4 *)0x0) {
          *puVar15 = *puVar2;
        }
        puVar15 = puVar15 + 1;
      }
      if (puVar9 < puVar11) {
        if (0 < (int)puVar11 - (int)puVar9) {
          iVar1 = (int)puVar11 - (int)puVar9 >> 2;
          iVar12 = 0;
          do {
            iVar1 = iVar1 + -1;
            puVar4[iVar12 + -1] = puVar11[iVar12 + -1];
            iVar12 = iVar12 + -1;
          } while (iVar1 != 0);
        }
      }
      else {
        while (puVar9 != puVar11) {
          puVar11 = puVar11 + -1;
          puVar4 = puVar4 + -1;
          *puVar4 = *puVar11;
        }
      }
      if (puVar9 < puVar6) {
        iVar1 = (int)puVar6 - (int)puVar9;
        if (0 < iVar1) {
          puVar4 = puVar9;
          if (iVar1 * 0x20000000 < 0) {
            puVar4 = puVar9 + 1;
            *puVar9 = 0;
          }
          for (iVar1 = iVar1 >> 3; iVar1 != 0; iVar1 = iVar1 + -1) {
            puVar9 = puVar4 + 1;
            *puVar4 = 0;
            puVar4 = puVar4 + 2;
            *puVar9 = 0;
          }
        }
      }
      else {
        for (; puVar9 != puVar6; puVar9 = puVar9 + 1) {
          *puVar9 = 0;
        }
      }
    }
    else {
      iVar1 = (int)puVar4 - (int)puVar9;
      puVar2 = puVar4;
      for (iVar12 = 100 - (iVar1 >> 2); puVar15 = puVar9, iVar12 != 0; iVar12 = iVar12 + -1) {
        if (puVar2 != (undefined4 *)0x0) {
          *puVar2 = 0;
        }
        puVar2 = puVar2 + 1;
      }
      for (; puVar15 != puVar4; puVar15 = puVar15 + 1) {
        if (puVar6 != (undefined4 *)0x0) {
          *puVar6 = *puVar15;
        }
        puVar6 = puVar6 + 1;
      }
      if (puVar9 < puVar4) {
        if (0 < iVar1) {
          puVar4 = puVar9;
          if (iVar1 * 0x20000000 < 0) {
            puVar4 = puVar9 + 1;
            *puVar9 = 0;
          }
          for (iVar1 = iVar1 >> 3; iVar1 != 0; iVar1 = iVar1 + -1) {
            puVar9 = puVar4 + 1;
            *puVar4 = 0;
            puVar4 = puVar4 + 2;
            *puVar9 = 0;
          }
        }
      }
      else {
        for (; puVar9 != puVar4; puVar9 = puVar9 + 1) {
          *puVar9 = 0;
        }
      }
    }
  }
  uVar8 = param_1[0x24];
  uVar10 = param_1[0x23];
  if (uVar10 != uVar8) {
    uVar3 = uVar10;
    if (uVar8 <= uVar10) {
      do {
        uVar3 = uVar3 + 4;
      } while (uVar3 != uVar8);
    }
    param_1[0x24] = uVar8 - (uVar8 - uVar10 & 0xfffffffc);
  }
  uVar8 = param_1[0x21];
  uVar10 = param_1[0x20];
  if (uVar10 != uVar8) {
    uVar3 = uVar10;
    if (uVar8 <= uVar10) {
      do {
        uVar3 = uVar3 + 4;
      } while (uVar3 != uVar8);
    }
    param_1[0x21] = uVar8 - (uVar8 - uVar10 & 0xfffffffc);
  }
  local_30[1] = 0xffffffff;
  uVar8 = param_1[4];
  uVar10 = param_1[3];
  if (uVar10 != uVar8) {
    uVar3 = uVar10;
    if (uVar8 <= uVar10) {
      do {
        uVar3 = uVar3 + 4;
      } while (uVar3 != uVar8);
    }
    param_1[4] = uVar8 - (uVar8 - uVar10 & 0xfffffffc);
  }
  fn_00158938(param_1 + 3,param_1[3],4,local_30 + 1);
  uVar10 = param_1[6];
  uVar8 = param_1[7];
  if (uVar10 != uVar8) {
    uVar3 = uVar10;
    if (uVar8 <= uVar10) {
      do {
        uVar3 = uVar3 + 4;
      } while (uVar3 != uVar8);
    }
    param_1[7] = uVar8 - (uVar8 - uVar10 & 0xfffffffc);
  }
  local_30[0] = 0xffffffff;
  fn_00158938(param_1 + 6,uVar10,4,local_30);
  return;
}


