#include "00673a70_00674100.h"



void fn_00674100(undefined4 *param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  uVar1 = (&DAT_008cfeec)[param_3 * 3];
  *param_1 = (&DAT_008cfee8)[param_3 * 3];
  param_1[1] = uVar1;
  return;
}



void fn_006740c4(int param_1,int param_2)

{
  undefined4 in_s16;
  
  fn_0066ec18(param_2);
  *(undefined4 *)(param_2 + 0x14) = in_s16;
  *(undefined4 *)(param_2 + 0xc) = 9;
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_1 + 0x44);
  return;
}



undefined4 * fn_0067408c(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  puVar1 = (undefined4 *)fn_0013d4ec();
  *param_1 = *puVar1;
  param_1[1] = puVar1[1];
  param_1[2] = 0xffffffff;
  return param_1;
}



bool fn_00673ff8(int *param_1)

{
  bool bVar1;
  
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  if ((*(byte *)(param_1 + 0x13) & 1) != 0) {
    (**(code **)(*param_1 + 0x30))(param_1,7);
    return true;
  }
  fn_00673ce8(param_1,7);
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  bVar1 = (*(byte *)(param_1 + 0x13) & 1) == 0;
  if (bVar1) {
    DAT_00898860 = 0;
    (**(code **)(*param_1 + 0x30))(param_1,1);
  }
  return bVar1;
}



uint fn_00673fc8(void)

{
  uint uVar1;
  
  uVar1 = 0;
  if (DAT_008bf4e0 != 0) {
    uVar1 = fn_006d9250();
    uVar1 = uVar1 >> 0x1f ^ 1;
  }
  return uVar1;
}



bool fn_00673f7c(int *param_1)

{
  bool bVar1;
  
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  bVar1 = (*(byte *)(param_1 + 0x13) & 1) == 0;
  if (bVar1) {
    DAT_00898860 = 0;
    (**(code **)(*param_1 + 0x30))(param_1,1);
  }
  return bVar1;
}



void fn_00673ce8(int param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  bool bVar11;
  
  puVar9 = *(uint **)(param_1 + 100);
  uVar3 = (int)puVar9 - *(int *)(param_1 + 0x60) >> 2;
  bVar11 = uVar3 == 0;
  uVar4 = param_2;
  if (!bVar11) {
    uVar4 = uVar3 >> 1;
    bVar11 = uVar4 == 0;
  }
  if (!bVar11) {
    do {
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  puVar10 = (uint *)(param_1 + 0x60);
  if (puVar9 != *(uint **)(param_1 + 0x68)) {
    *(uint **)(param_1 + 100) = puVar9 + 1;
    if (puVar9 != (uint *)0x0) {
      *puVar9 = param_2;
    }
    return;
  }
  if (uVar3 < (uint)((int)*(uint **)(param_1 + 0x68) - *(int *)(param_1 + 0x60) >> 2)) {
    *(uint **)(param_1 + 100) = puVar9 + 1;
    if (puVar9 != (uint *)0x0) {
      *puVar9 = puVar9[-1];
    }
    puVar10 = puVar9 + -1;
    puVar6 = puVar9;
    if (puVar9 < puVar10) {
      iVar5 = (int)puVar10 - (int)puVar9;
      if (0 < iVar5) {
        if (iVar5 * 0x20000000 < 0) {
          puVar10 = puVar9 + -2;
          puVar6 = puVar9 + -1;
          *puVar6 = *puVar10;
        }
        for (iVar5 = iVar5 >> 3; iVar5 != 0; iVar5 = iVar5 + -1) {
          puVar6[-1] = puVar10[-1];
          puVar10 = puVar10 + -2;
          puVar6 = puVar6 + -2;
          *puVar6 = *puVar10;
        }
      }
    }
    else {
      while (puVar9 != puVar10) {
        puVar10 = puVar10 + -1;
        puVar6[-1] = *puVar10;
        puVar6 = puVar6 + -1;
      }
    }
    *puVar9 = param_2;
    return;
  }
  uVar4 = uVar3 + (uVar3 >> 1) + (uVar3 >> 3);
  if (uVar4 < uVar3 + 0x20) {
    uVar4 = uVar3 + 0x20;
  }
  puVar1 = (uint *)fn_00100fc6(uVar4 << 2,0);
  puVar7 = puVar1;
  for (puVar6 = (uint *)*puVar10; puVar6 != puVar9; puVar6 = puVar6 + 1) {
    if (puVar7 != (uint *)0x0) {
      *puVar7 = *puVar6;
    }
    puVar7 = puVar7 + 1;
  }
  puVar6 = (uint *)(((int)puVar9 - *puVar10 & 0xfffffffc) + (int)puVar1);
  if (puVar6 != (uint *)0x0) {
    *puVar6 = param_2;
  }
  puVar7 = *(uint **)(param_1 + 100);
  puVar6 = (uint *)(((int)puVar9 - *puVar10 & 0xfffffffc) + (int)puVar1);
  for (; puVar9 != puVar7; puVar9 = puVar9 + 1) {
    puVar6 = puVar6 + 1;
    if (puVar6 != (uint *)0x0) {
      *puVar6 = *puVar9;
    }
  }
  uVar2 = *puVar10;
  uVar8 = *(uint *)(param_1 + 100);
  uVar3 = uVar2;
  if (uVar8 < uVar2) {
    do {
      uVar3 = uVar3 + 4;
    } while (uVar3 != uVar8);
  }
  fn_001008c4(uVar2,(int)(*(int *)(param_1 + 0x68) - uVar2) >> 2,0);
  *(uint **)(param_1 + 0x68) = puVar1 + uVar4;
  *(uint **)(param_1 + 100) = puVar1 + ((int)(uVar8 - uVar2) >> 2) + 1;
  *puVar10 = (uint)puVar1;
  return;
}



undefined4 fn_00673cb8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x58) != '\0') {
    iVar1 = *(int *)(param_1 + 0x54);
    iVar3 = *(int *)(param_1 + 0x50) + 1;
    iVar2 = iVar1;
    if (iVar1 <= iVar3) {
      iVar2 = 0;
    }
    *(int *)(param_1 + 0x50) = iVar3;
    if (iVar1 <= iVar3) {
      *(char *)(param_1 + 0x58) = (char)iVar2;
    }
  }
  return 1;
}



undefined4 fn_00673be8(int *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  
  puVar2 = (undefined4 *)param_1[0x19];
  puVar6 = (undefined4 *)param_1[0x18];
  iVar5 = (int)puVar2 - (int)puVar6 >> 2;
  if (iVar5 == 0) {
    uVar1 = 0;
  }
  else {
    puVar3 = puVar6 + iVar5;
    puVar4 = puVar3 + -1;
    uVar1 = *puVar4;
    if (puVar6 != puVar2) {
      if (puVar2 != puVar3) {
        if (puVar2 < puVar3) {
          for (; puVar3 != puVar2; puVar3 = puVar3 + 1) {
            *puVar4 = *puVar3;
            puVar4 = puVar4 + 1;
          }
        }
        else {
          iVar5 = (int)puVar2 - (int)puVar3;
          if (0 < iVar5) {
            puVar2 = puVar3 + -1;
            puVar6 = puVar3 + -2;
            if (iVar5 * 0x20000000 < 0) {
              *puVar4 = *puVar3;
              puVar2 = puVar3;
              puVar6 = puVar4;
            }
            for (iVar5 = iVar5 >> 3; iVar5 != 0; iVar5 = iVar5 + -1) {
              puVar6[1] = puVar2[1];
              puVar3 = puVar2 + 2;
              puVar2 = puVar2 + 2;
              puVar6[2] = *puVar3;
              puVar6 = puVar6 + 2;
            }
          }
        }
      }
      param_1[0x19] = param_1[0x19] + -4;
    }
    (**(code **)(*param_1 + 0x30))(param_1,uVar1);
    uVar1 = 1;
  }
  return uVar1;
}



void fn_00673b84(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(uint *)(param_1 + 0x60);
  uVar3 = *(uint *)(param_1 + 100);
  if (uVar2 != uVar3) {
    uVar1 = uVar2;
    if (uVar3 <= uVar2) {
      do {
        uVar1 = uVar1 + 4;
      } while (uVar1 != uVar3);
    }
    *(uint *)(param_1 + 100) = uVar3 - (uVar3 - uVar2 & 0xfffffffc);
  }
  return;
}



void fn_00673b04(undefined4 param_1)

{
  fn_0066de74(param_1,2);
  return;
}



undefined4 * fn_00673a70(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)fn_00145b00(0x68,&DAT_00812c8c);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = &DAT_00859b90;
    fn_00129688(puVar1);
    fn_002fec40(puVar1 + 1,s_NetworkCommandFriendSearch_008c6ff6);
    *puVar1 = &DAT_00859be4;
    iVar2 = fn_00119b40(puVar1 + 0x13);
    puVar1 = (undefined4 *)(iVar2 + -0x4c);
    fn_00119b60();
    *puVar1 = &DAT_0085a400;
    *(undefined1 *)(iVar2 + 0x18) = 1;
  }
  *(undefined4 **)(param_1 + 0x98) = puVar1;
  return puVar1;
}


