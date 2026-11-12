#include "003261bc_00326e40b.h"



undefined4 * fn_00326e40(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint local_20;
  uint local_1c [2];
  
  iVar1 = fn_00145b00(0xec,&DAT_00812c8c);
  if (iVar1 == 0) {
    return (undefined4 *)0x0;
  }
  puVar2 = (undefined4 *)fn_002c4694(iVar1,param_1);
  *puVar2 = &DAT_00823b0c;
  puVar2[0x2c] = &DAT_00859080;
  puVar2[0x2d] = 0;
  puVar2[0x2e] = 0;
  puVar2[0x2f] = 0;
  puVar2[0x30] = 0;
  puVar2[0x33] = 0;
  puVar2[0x34] = 0;
  puVar2[0x31] = 0;
  puVar2[0x32] = 0;
  puVar2[0x35] = 0;
  puVar2[0x36] = 0;
  puVar2[0x37] = 0;
  puVar2[0x38] = 0xffffffff;
  puVar2[0x39] = 0;
  *(undefined1 *)(puVar2 + 0x3a) = 0;
  local_20 = 5;
  puVar10 = puVar2 + 0x35;
  if ((uint)((int)(puVar2[0x37] - puVar2[0x35]) / 0xc) < 5) {
    uVar11 = (int)(puVar2[0x36] - puVar2[0x35]) / 0xc;
    local_1c[0] = uVar11 + (uVar11 >> 1) + (uVar11 >> 3);
    if (local_1c[0] < uVar11 + 0x20) {
      local_1c[0] = uVar11 + 0x20;
    }
    puVar6 = local_1c;
    if (local_1c[0] < 6) {
      puVar6 = &local_20;
    }
    uVar11 = *puVar6;
    puVar3 = (undefined4 *)fn_00100fc6(uVar11 * 0xc,0);
    puVar8 = (undefined4 *)puVar2[0x36];
    puVar4 = puVar3;
    for (puVar7 = (undefined4 *)*puVar10; puVar7 != puVar8; puVar7 = puVar7 + 3) {
      if (puVar4 != (undefined4 *)0x0) {
        uVar12 = puVar7[1];
        uVar13 = puVar7[2];
        *puVar4 = *puVar7;
        puVar4[1] = uVar12;
        puVar4[2] = uVar13;
      }
      puVar4 = puVar4 + 3;
    }
    uVar9 = *puVar10;
    uVar5 = uVar9;
    if ((uint)puVar2[0x36] < uVar9) {
      do {
        uVar5 = uVar5 + 0xc;
      } while (uVar5 != puVar2[0x36]);
    }
    fn_001008c4(uVar9,(int)(puVar2[0x37] - uVar9) / 0xc,0);
    uVar5 = *puVar10;
    *puVar10 = (uint)puVar3;
    puVar2[0x36] = puVar3 + ((int)(puVar2[0x36] - uVar5) / 0xc) * 3;
    puVar2[0x37] = puVar3 + uVar11 * 3;
  }
  return puVar2;
}



void fn_00326d10(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  fn_002c3d68();
  puVar2 = *(undefined4 **)(param_1 + 0x18);
  if (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar1 == &DAT_00893b10) goto LAB_00326d58;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_00326d58:
  puVar2[2] = 0;
  fn_006899f4(param_1,0,0,0);
  fn_00689d04(param_1,0);
  fn_00689878(param_1,0);
  fn_00689bd0(param_1,0,0);
  fn_001076bc(2);
  fn_005f3c30(2);
  return;
}



void fn_00326bbc(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  iVar1 = (**(code **)(*param_1 + 8))(param_1);
  piVar3 = *(int **)(iVar1 + 0x18);
  if (piVar3 != (int *)0x0) {
    puVar2 = (undefined4 *)(**(code **)(*piVar3 + 0xc))(piVar3);
    do {
      if (puVar2 == &DAT_00891a14) {
        if (piVar3 != (int *)0x0) {
          if (param_1[0x34] == 0) {
            fn_00689d04(param_1,0);
            fn_00689824(param_1,0);
            return;
          }
          iVar1 = fn_006896fc(param_1,0x90);
          if (iVar1 == 0) {
            fn_002a8244(piVar3,(int)(char)param_1[0x38],param_1[0x39],8,0);
            param_1[0x31] = 0;
            param_1[0x32] = 0;
          }
          return;
        }
        break;
      }
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  return;
}



void fn_00326800(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x8c,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00326830(iVar1,param_1);
  return;
}



void fn_00326830(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0025dea8(param_1,param_2,&DAT_008942c0,1);
  *puVar1 = &DAT_008239f4;
  return;
}



void fn_003267d8(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0039e374();
  *puVar1 = &DAT_008238ac;
  return;
}



void fn_00326778(int param_1)

{
  char cVar1;
  
  fn_0039e370();
  cVar1 = *(char *)(param_1 + 0xf0);
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      fn_006899f4(param_1,0x5d,0);
      return;
    }
    if (cVar1 == '\x02') {
      fn_006899f4(param_1,*(undefined4 *)(*(int *)(param_1 + 0xe4) + 0x20),0);
      return;
    }
  }
  return;
}


