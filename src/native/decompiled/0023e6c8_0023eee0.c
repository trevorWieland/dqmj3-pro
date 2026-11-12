#include "0023e6c8_0023eee0.h"



void fn_0023eee0(int param_1)

{
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x28);
  *(undefined1 *)(param_1 + 0x3e) = 0;
  return;
}



void fn_0023eea4(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *param_2;
  *param_1 = iVar1;
  iVar3 = param_2[1];
  param_1[1] = iVar3;
  iVar2 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = iVar2;
  if (iVar1 == 2) {
    fn_00237c74(param_1 + 4,iVar3,0xff,0);
    return;
  }
  return;
}



int * fn_0023ed44(int *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  *param_1 = (int)&DAT_0081d164;
  if (param_1[4] - param_1[3] >> 2 != 0) {
    do {
      (**(code **)(*param_1 + 0xc))(param_1,uVar2);
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)(param_1[4] - param_1[3] >> 2));
  }
  fn_0023db0c(param_1,1);
  fn_002a449c(param_1[2]);
  fn_0053ec84(param_1[0xf],(char)param_1[0xe]);
  fn_005f0a90(param_1[0xf],(char)param_1[0xe]);
  uVar1 = param_1[9];
  uVar2 = uVar1;
  if ((uint)param_1[10] < uVar1) {
    do {
      uVar2 = uVar2 + 8;
    } while (uVar2 != param_1[10]);
  }
  fn_001008c4(uVar1,(int)(param_1[0xb] - uVar1) >> 3,0);
  uVar1 = param_1[6];
  uVar2 = uVar1;
  if ((uint)param_1[7] <= uVar1) {
    for (; uVar2 != param_1[7]; uVar2 = uVar2 + 8) {
    }
  }
  fn_001008c4(uVar1,(int)(param_1[8] - uVar1) >> 3,0);
  uVar1 = param_1[3];
  uVar2 = uVar1;
  if ((uint)param_1[4] <= uVar1) {
    for (; uVar2 != param_1[4]; uVar2 = uVar2 + 4) {
    }
  }
  fn_001008c4(uVar1,(int)(param_1[5] - uVar1) >> 2,0);
  if ((int *)param_1[2] != (int *)0x0) {
    (**(code **)(*(int *)param_1[2] + 4))();
  }
  return param_1;
}



/* WARNING: Removing unreachable block (ram,0x0023e99c) */
/* WARNING: Removing unreachable block (ram,0x0023ea10) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffe0 : 0x0023e93c */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 * fn_0023e8ec(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  uint uVar11;
  undefined4 *puVar12;
  uint *puVar13;
  undefined4 uVar14;
  uint local_20;
  uint local_1c;
  
  piVar3 = param_1 + 3;
  *param_1 = &DAT_0081d164;
  param_1[1] = 0;
  param_1[2] = 0;
  *piVar3 = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  local_20 = 0x40;
  local_1c = 0x20;
  puVar1 = (undefined4 *)fn_00100fc6(0x100,0);
  *piVar3 = (int)puVar1;
  for (uVar11 = local_20; uVar11 != 0; uVar11 = uVar11 - 1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  param_1[4] = *piVar3 + local_20 * 4;
  param_1[5] = *piVar3 + 0x100;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  local_20 = 0;
  local_1c = 0x20;
  puVar1 = (undefined4 *)fn_00100fc6(0x100,0);
  param_1[6] = puVar1;
  for (uVar11 = local_20; uVar11 != 0; uVar11 = uVar11 - 1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
      puVar1[1] = 0;
    }
    puVar1 = puVar1 + 2;
  }
  iVar2 = param_1[6];
  param_1[7] = iVar2 + local_20 * 8;
  param_1[8] = iVar2 + 0x100;
  param_1[9] = 0;
  puVar13 = param_1 + 9;
  param_1[10] = 0;
  param_1[0xb] = 0;
  local_20 = 0;
  local_1c = 0x20;
  puVar1 = (undefined4 *)fn_00100fc6(0x100,0);
  *puVar13 = (uint)puVar1;
  for (uVar11 = local_20; uVar11 != 0; uVar11 = uVar11 - 1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
      puVar1[1] = 0;
    }
    puVar1 = puVar1 + 2;
  }
  param_1[0xb] = *puVar13 + 0x100;
  param_1[0xc] = 0;
  param_1[10] = *puVar13 + local_20 * 8;
  *(undefined1 *)(param_1 + 0xd) = 1;
  param_1[0xf] = 0;
  param_1[0xe] = param_2;
  param_1[0xf] = *(undefined4 *)(DAT_0089781c + 4);
  iVar2 = fn_00145b00(0x2c,&DAT_00812c8c);
  piVar3 = (int *)0x0;
  if (iVar2 != 0) {
    piVar3 = (int *)fn_002a4e24(iVar2,param_1[0xf]);
  }
  piVar4 = (int *)param_1[2];
  if (piVar4 != piVar3) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))();
    }
    param_1[2] = piVar3;
  }
  local_20 = 0x40;
  puVar10 = param_1 + 6;
  if ((uint)((int)(param_1[8] - param_1[6]) >> 3) < 0x40) {
    uVar11 = (int)(param_1[7] - param_1[6]) >> 3;
    uVar8 = uVar11 + (uVar11 >> 1) + (uVar11 >> 3);
    local_1c = uVar11 + 0x20;
    if (uVar11 + 0x20 <= uVar8) {
      local_1c = uVar8;
    }
    puVar9 = &local_1c;
    if (local_1c < 0x41) {
      puVar9 = &local_20;
    }
    uVar11 = *puVar9;
    puVar5 = (undefined4 *)fn_00100fc6(uVar11 << 3,0);
    puVar12 = (undefined4 *)param_1[7];
    puVar6 = puVar5;
    for (puVar1 = (undefined4 *)*puVar10; puVar1 != puVar12; puVar1 = puVar1 + 2) {
      if (puVar6 != (undefined4 *)0x0) {
        uVar14 = puVar1[1];
        *puVar6 = *puVar1;
        puVar6[1] = uVar14;
      }
      puVar6 = puVar6 + 2;
    }
    uVar7 = *puVar10;
    uVar8 = uVar7;
    if ((uint)param_1[7] < uVar7) {
      do {
        uVar8 = uVar8 + 8;
      } while (uVar8 != param_1[7]);
    }
    fn_001008c4(uVar7,(int)(param_1[8] - uVar7) >> 3,0);
    uVar8 = *puVar10;
    *puVar10 = (uint)puVar5;
    param_1[7] = (param_1[7] - uVar8 & 0xfffffff8) + (int)puVar5;
    param_1[8] = puVar5 + uVar11 * 2;
  }
  local_20 = 5;
  if ((uint)((int)(param_1[0xb] - *puVar13) >> 3) < 5) {
    uVar11 = (int)(param_1[10] - *puVar13) >> 3;
    uVar8 = uVar11 + (uVar11 >> 1) + (uVar11 >> 3);
    local_1c = uVar11 + 0x20;
    if (uVar11 + 0x20 <= uVar8) {
      local_1c = uVar8;
    }
    puVar10 = &local_1c;
    if (local_1c < 6) {
      puVar10 = &local_20;
    }
    uVar11 = *puVar10;
    puVar5 = (undefined4 *)fn_00100fc6(uVar11 << 3,0);
    puVar12 = (undefined4 *)param_1[10];
    puVar6 = puVar5;
    for (puVar1 = (undefined4 *)*puVar13; puVar1 != puVar12; puVar1 = puVar1 + 2) {
      if (puVar6 != (undefined4 *)0x0) {
        uVar14 = puVar1[1];
        *puVar6 = *puVar1;
        puVar6[1] = uVar14;
      }
      puVar6 = puVar6 + 2;
    }
    uVar7 = *puVar13;
    uVar8 = uVar7;
    if ((uint)param_1[10] < uVar7) {
      do {
        uVar8 = uVar8 + 8;
      } while (uVar8 != param_1[10]);
    }
    fn_001008c4(uVar7,(int)(param_1[0xb] - uVar7) >> 3,0);
    uVar8 = *puVar13;
    *puVar13 = (uint)puVar5;
    param_1[10] = (param_1[10] - uVar8 & 0xfffffff8) + (int)puVar5;
    param_1[0xb] = puVar5 + uVar11 * 2;
  }
  uVar11 = param_1[10];
  uVar8 = *puVar13;
  if (uVar8 != uVar11) {
    uVar7 = uVar8;
    if (uVar11 <= uVar8) {
      do {
        uVar7 = uVar7 + 8;
      } while (uVar7 != uVar11);
    }
    param_1[10] = uVar11 - (uVar11 - uVar8 & 0xfffffff8);
  }
  fn_0023df88(param_1,3,fn_0023d9c8);
  fn_0023df88(param_1,4,&LAB_0023d3fc);
  return param_1;
}



int fn_0023e730(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  iVar1 = 0;
  while (iVar5 = (*(int *)(param_1 + 0x30) + iVar1) % 0x40,
        *(int *)(*(int *)(param_1 + 0xc) + iVar5 * 4) != 0) {
    iVar1 = iVar1 + 1;
    if (0x3f < iVar1) {
      return -1;
    }
  }
  if (iVar5 < 0) {
    return -1;
  }
  *(int *)(param_1 + 0x30) = (iVar5 + 1) % 0x40;
  iVar1 = fn_00692ec8(param_2);
  fn_002a406c(*(undefined4 *)(param_1 + 8),param_2);
  iVar2 = fn_002a47cc(*(undefined4 *)(param_1 + 8),param_2,*(undefined4 *)(param_1 + 0x38),iVar1);
  if (iVar2 == 0) {
    return -1;
  }
  uVar6 = 0;
  if (iVar1 == 0) {
    piVar4 = (int *)fn_002e9024(iVar2,*(undefined4 *)(param_1 + 4));
  }
  else {
    iVar7 = *(int *)(param_1 + 8);
    iVar1 = fn_00182d34(iVar7,param_2);
    if (iVar1 < 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(*(int *)(iVar7 + 0x1c) + iVar1 * 0x28 + 0xc);
    }
    piVar4 = (int *)fn_0034e710(uVar3,*(undefined4 *)(param_1 + 0x38),
                                 *(undefined4 *)(param_1 + 0x3c),iVar2,*(undefined4 *)(param_1 + 4))
    ;
  }
  if (piVar4 == (int *)0x0) {
    return -1;
  }
  piVar4[2] = param_2;
  iVar1 = fn_00182d34(*(undefined4 *)(param_1 + 8),param_2);
  if ((-1 < iVar1) && (iVar1 = fn_001793c4(param_2), iVar1 != 0)) {
    uVar6 = (uint)*(ushort *)(iVar1 + 4);
  }
  *(char *)(piVar4 + 1) = (char)((uVar6 & 2) >> 1);
  uVar3 = (**(code **)(*piVar4 + 0x48))(piVar4);
  fn_001969a4(*(undefined4 *)(*(int *)(param_1 + 4) + 0x24),uVar3);
  fn_00162d44(*(undefined4 *)(*(int *)(param_1 + 4) + 0x24));
  *(int **)(*(int *)(param_1 + 0xc) + iVar5 * 4) = piVar4;
  return iVar5;
}



void fn_0023e6c8(int param_1)

{
  int iVar1;
  int *piVar2;
  
  fn_0023d448();
  piVar2 = *(int **)(param_1 + 0xc);
  if (*(int **)(param_1 + 0x10) != piVar2) {
    do {
      if (((int *)*piVar2 != (int *)0x0) &&
         (iVar1 = (**(code **)(*(int *)*piVar2 + 0x40))(), iVar1 == 0)) {
        (**(code **)(*(int *)*piVar2 + 0x60))((int *)*piVar2,0);
      }
      piVar2 = piVar2 + 1;
    } while (*(int **)(param_1 + 0x10) != piVar2);
  }
  return;
}


