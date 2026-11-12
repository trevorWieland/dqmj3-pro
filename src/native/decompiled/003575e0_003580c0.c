#include "003575e0_003580c0.h"



void fn_003580c0(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_00826908;
  fn_003575e0(param_1);
  if ((int *)param_1[0x2f] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x2f] + 4))();
  }
  if ((int *)param_1[0x2e] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x2e] + 4))();
  }
  if ((int *)param_1[0x2d] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x2d] + 4))();
  }
  if ((int *)param_1[0x2c] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x2c] + 4))();
  }
  if ((int *)param_1[0x2b] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x2b] + 4))();
  }
  if ((int *)param_1[0x2a] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x2a] + 4))();
  }
  uVar1 = param_1[0x27];
  uVar2 = uVar1;
  if ((uint)param_1[0x28] < uVar1) {
    do {
      uVar2 = uVar2 + 4;
    } while (uVar2 != param_1[0x28]);
  }
  fn_001008c4(uVar1,(int)(param_1[0x29] - uVar1) >> 2,0);
  uVar1 = param_1[0x24];
  uVar2 = uVar1;
  if ((uint)param_1[0x25] <= uVar1) {
    for (; uVar2 != param_1[0x25]; uVar2 = uVar2 + 4) {
    }
  }
  fn_001008c4(uVar1,(int)(param_1[0x26] - uVar1) >> 2,0);
  uVar1 = param_1[0x21];
  uVar2 = uVar1;
  if ((uint)param_1[0x22] <= uVar1) {
    for (; uVar2 != param_1[0x22]; uVar2 = uVar2 + 4) {
    }
  }
  fn_001008c4(uVar1,(int)(param_1[0x23] - uVar1) >> 2,0);
  uVar1 = param_1[0x1e];
  uVar2 = uVar1;
  if ((uint)param_1[0x1f] < uVar1) {
    do {
      uVar2 = uVar2 + 4;
    } while (uVar2 != param_1[0x1f]);
  }
  fn_001008c4(uVar1,(int)(param_1[0x20] - uVar1) >> 2,0);
  fn_0068ad5c(param_1);
  return;
}



/* WARNING: Removing unreachable block (ram,0x00357cd0) */
/* WARNING: Removing unreachable block (ram,0x00357bdc) */
/* WARNING: Removing unreachable block (ram,0x00357c58) */
/* WARNING: Removing unreachable block (ram,0x00357d48) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffd4 : 0x00357be0 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int fn_00357b48(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  char cVar12;
  char cVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int local_30 [3];
  
  puVar1 = (undefined4 *)fn_0068ab5c();
  *puVar1 = &PTR_FUN_00826908;
  if (param_2 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*param_2)(param_2);
    do {
      if (puVar2 == &DAT_00890360) goto LAB_00357b9c;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  param_2 = (undefined4 *)0x0;
LAB_00357b9c:
  puVar1[0x19] = param_2;
  puVar1[0x1a] = 0;
  puVar1[0x1c] = 0xffffffff;
  puVar1[0x1b] = 0;
  puVar1[0x1d] = 0xffffffff;
  piVar11 = puVar1 + 0x1e;
  *piVar11 = 0;
  puVar1[0x1f] = 0;
  puVar1[0x20] = 0;
  local_30[0] = 4;
  local_30[1] = 0x20;
  puVar2 = (undefined4 *)fn_00100fc6(0x80,0);
  *piVar11 = (int)puVar2;
  for (iVar10 = local_30[0]; iVar10 != 0; iVar10 = iVar10 + -1) {
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0;
    }
    puVar2 = puVar2 + 1;
  }
  puVar1[0x1f] = *piVar11 + local_30[0] * 4;
  puVar1[0x20] = *piVar11 + 0x80;
  puVar1[0x21] = 0;
  puVar1[0x22] = 0;
  puVar1[0x23] = 0;
  local_30[0] = 4;
  local_30[1] = 0x20;
  puVar2 = (undefined4 *)fn_00100fc6(0x80,0);
  puVar1[0x21] = puVar2;
  for (iVar10 = local_30[0]; iVar10 != 0; iVar10 = iVar10 + -1) {
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0;
    }
    puVar2 = puVar2 + 1;
  }
  iVar10 = puVar1[0x21];
  puVar1[0x22] = iVar10 + local_30[0] * 4;
  puVar1[0x23] = iVar10 + 0x80;
  piVar11 = puVar1 + 0x24;
  *piVar11 = 0;
  puVar1[0x25] = 0;
  puVar1[0x26] = 0;
  local_30[0] = 4;
  local_30[1] = 0x20;
  puVar2 = (undefined4 *)fn_00100fc6(0x80,0);
  *piVar11 = (int)puVar2;
  for (iVar10 = local_30[0]; iVar10 != 0; iVar10 = iVar10 + -1) {
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0;
    }
    puVar2 = puVar2 + 1;
  }
  puVar1[0x25] = *piVar11 + local_30[0] * 4;
  puVar1[0x26] = *piVar11 + 0x80;
  puVar1[0x27] = 0;
  puVar1[0x28] = 0;
  puVar1[0x29] = 0;
  local_30[0] = 4;
  local_30[1] = 0x20;
  puVar2 = (undefined4 *)fn_00100fc6(0x80,0);
  puVar1[0x27] = puVar2;
  for (iVar10 = local_30[0]; iVar10 != 0; iVar10 = iVar10 + -1) {
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0;
    }
    puVar2 = puVar2 + 1;
  }
  iVar10 = puVar1[0x27];
  puVar1[0x28] = iVar10 + local_30[0] * 4;
  puVar1[0x29] = iVar10 + 0x80;
  puVar1[0x2a] = 0;
  puVar1[0x2b] = 0;
  puVar1[0x2c] = 0;
  puVar1[0x2d] = 0;
  puVar1[0x2e] = 0;
  puVar1[0x2f] = 0;
  *(undefined1 *)(puVar1 + 0x30) = 0;
  *(undefined1 *)((int)puVar1 + 0xc1) = 0;
  puVar1[0x31] = 0;
  puVar1[0x32] = 0;
  puVar1[0x34] = 0xffffffff;
  puVar1[0x33] = 0;
  *(undefined1 *)(puVar1 + 0x35) = 0;
  *(undefined1 *)((int)puVar1 + 0xd5) = 0;
  puVar1[0x36] = 0xffffffff;
  *(undefined1 *)(puVar1 + 0x37) = 0;
  *(undefined1 *)((int)puVar1 + 0xdd) = 0;
  *(undefined1 *)((int)puVar1 + 0xde) = 0;
  iVar10 = fn_00101a1c(puVar1 + 0x38,&LAB_003573a4,0x14,2);
  *(undefined4 *)(iVar10 + 0x28) = 0;
  *(undefined1 *)(iVar10 + 0x2c) = 0;
  *(undefined4 *)(iVar10 + 0x30) = 0;
  iVar10 = fn_00101a1c(iVar10 + 0x34,&LAB_0035490c,8);
  iVar15 = iVar10 + -0x114;
  *(undefined4 *)(iVar10 + 0x40) = 0;
  uVar3 = fn_0016dd18(*(undefined4 *)(*(int *)(iVar10 + -0xb0) + 0x2c),0xc);
  *(undefined4 *)(iVar10 + -0xa4) = uVar3;
  iVar4 = fn_00145b00(0x24,&DAT_00812c8c);
  if (iVar4 == 0) {
    piVar11 = (int *)0x0;
  }
  else {
    piVar11 = (int *)fn_0036fc00();
  }
  piVar5 = *(int **)(iVar10 + -0x5c);
  if (piVar5 != piVar11) {
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 4))();
    }
    *(int **)(iVar10 + -0x5c) = piVar11;
  }
  iVar16 = 0;
  iVar4 = 0;
  do {
    iVar6 = fn_0028b0a0(*(undefined4 *)(DAT_00897804 + 0xc),iVar16);
    iVar14 = iVar4;
    if (iVar6 != 0) {
      fn_0020bbc4(local_30,iVar6);
      uVar3 = fn_006bf5e0(local_30 + 1);
      iVar14 = iVar4 + 1;
      *(undefined4 *)(*(int *)(iVar10 + -0x84) + iVar4 * 4) = uVar3;
      fn_006bfe90(local_30 + 1);
      iVar6 = fn_001cab7c();
      iVar7 = 1;
      iVar4 = iVar14;
      if (1 < iVar6) {
        do {
          iVar7 = iVar7 + 1;
          iVar14 = iVar4 + 1;
          *(undefined4 *)(*(int *)(iVar10 + -0x84) + iVar4 * 4) = 0;
          iVar4 = iVar14;
        } while (iVar7 < iVar6);
      }
    }
    iVar16 = iVar16 + 1;
    iVar4 = iVar14;
  } while (iVar16 < 4);
  for (; iVar14 < 4; iVar14 = iVar14 + 1) {
    *(undefined4 *)(*(int *)(iVar10 + -0x84) + iVar14 * 4) = 0;
  }
  iVar16 = 0;
  iVar4 = 0;
  do {
    iVar6 = fn_0028b348(*(undefined4 *)(DAT_00897804 + 0xc),iVar16);
    iVar14 = iVar4;
    if (iVar6 != 0) {
      fn_0020bbc4(local_30);
      uVar3 = fn_006bf5e0(local_30 + 1);
      iVar14 = iVar4 + 1;
      *(undefined4 *)(*(int *)(iVar10 + -0x78) + iVar4 * 4) = uVar3;
      fn_006bfe90(local_30 + 1);
      iVar6 = fn_001cab7c();
      iVar7 = 1;
      iVar4 = iVar14;
      if (1 < iVar6) {
        do {
          iVar7 = iVar7 + 1;
          iVar14 = iVar4 + 1;
          *(undefined4 *)(*(int *)(iVar10 + -0x78) + iVar4 * 4) = 0;
          iVar4 = iVar14;
        } while (iVar7 < iVar6);
      }
    }
    iVar16 = iVar16 + 1;
    iVar4 = iVar14;
  } while (iVar16 < 4);
  for (; iVar14 < 4; iVar14 = iVar14 + 1) {
    *(undefined4 *)(*(int *)(iVar10 + -0x78) + iVar14 * 4) = 0;
  }
  cVar13 = '\x10';
  cVar12 = '\x18';
  uVar8 = 0;
  do {
    if (*(int *)(*(int *)(iVar10 + -0x84) + uVar8 * 4) != 0) {
      *(char *)(iVar15 + uVar8 * 8 + 0x114) = cVar13;
      cVar13 = cVar13 + '\x01';
    }
    iVar4 = iVar15 + uVar8 * 8;
    *(undefined4 *)(iVar4 + 0x118) = *(undefined4 *)(*(int *)(iVar10 + -0x84) + uVar8 * 4);
    if (*(int *)(*(int *)(iVar10 + -0x78) + uVar8 * 4) != 0) {
      *(char *)(iVar4 + 0x134) = cVar12;
      cVar12 = cVar12 + '\x01';
    }
    uVar9 = uVar8 + 1;
    *(undefined4 *)(iVar4 + 0x138) = *(undefined4 *)(*(int *)(iVar10 + -0x78) + uVar8 * 4);
    uVar8 = uVar9;
  } while (uVar9 < 4);
  return iVar15;
}



undefined4 fn_00357ae4(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  if (*(char *)(param_1 + 0xd5) == '\0') {
    piVar2 = *(int **)(param_1 + 0x78);
    piVar1 = *(int **)(param_1 + 0x90);
    if ((((*piVar2 != *piVar1) || (piVar2[1] != piVar1[1])) || (piVar2[2] != piVar1[2])) ||
       (piVar2[3] != piVar1[3])) {
      return 1;
    }
  }
  return 0;
}



void fn_003579f8(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  (**(code **)(**(int **)(param_1 + 0xb0) + 0x20))(*(int **)(param_1 + 0xb0),0);
  piVar1 = (int *)fn_00354b70(param_1,*(undefined4 *)(param_1 + 0xd0));
  uVar4 = *(int *)(param_1 + 0xd0) % 2;
  if (1 < uVar4) goto LAB_00357a8c;
  iVar2 = *(int *)(param_1 + 0xd0) / 2;
  if (uVar4 == 0) {
    iVar2 = *(int *)(*(int *)(param_1 + 0x90) + iVar2 * 4);
LAB_00357a6c:
    if (iVar2 == 0) goto LAB_00357a78;
    uVar3 = 1;
  }
  else {
    if (uVar4 == 1) {
      iVar2 = *(int *)(*(int *)(param_1 + 0x9c) + iVar2 * 4);
      goto LAB_00357a6c;
    }
LAB_00357a78:
    uVar3 = 0;
  }
  (**(code **)(*piVar1 + 0x20))(piVar1,uVar3);
LAB_00357a8c:
  *(undefined1 *)(*(int *)(param_1 + 0xbc) + 0xd4) = 1;
  (**(code **)(**(int **)(param_1 + 0xbc) + 0x2c))
            (*(int **)(param_1 + 0xbc),param_2 % 2,param_2 / 2,0);
  *(undefined4 *)(param_1 + 0xd0) = 0xffffffff;
  *(undefined1 *)(*(int *)(param_1 + 0xbc) + 0xe4) = 0xff;
  *(undefined1 *)(*(int *)(param_1 + 0xbc) + 0x48) = 1;
  *(undefined1 *)(param_1 + 0xc0) = 0;
  return;
}



void fn_003575e0(int param_1)

{
  if (*(char *)(param_1 + 0x10c) != '\0') {
    *(undefined1 *)(param_1 + 0x10c) = 0;
    if (*(int **)(param_1 + 0xb4) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0xb4) + 0x14))();
      if (*(int **)(param_1 + 0xb4) != (int *)0x0) {
        (**(code **)(**(int **)(param_1 + 0xb4) + 4))();
        *(undefined4 *)(param_1 + 0xb4) = 0;
      }
    }
    if (*(int **)(param_1 + 0xb0) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0xb0) + 0x18))();
      if (*(int **)(param_1 + 0xb0) != (int *)0x0) {
        (**(code **)(**(int **)(param_1 + 0xb0) + 4))();
        *(undefined4 *)(param_1 + 0xb0) = 0;
      }
    }
    if (*(int **)(param_1 + 0xac) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0xac) + 0x18))();
      if (*(int **)(param_1 + 0xac) != (int *)0x0) {
        (**(code **)(**(int **)(param_1 + 0xac) + 4))();
        *(undefined4 *)(param_1 + 0xac) = 0;
      }
    }
    if (*(int **)(param_1 + 0xa8) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0xa8) + 0x18))();
      if (*(int **)(param_1 + 0xa8) != (int *)0x0) {
        (**(code **)(**(int **)(param_1 + 0xa8) + 4))();
        *(undefined4 *)(param_1 + 0xa8) = 0;
      }
    }
    if (*(int **)(param_1 + 0xb8) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0xb8) + 4))();
      *(undefined4 *)(param_1 + 0xb8) = 0;
    }
    if (*(int **)(param_1 + 0xbc) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0xbc) + 4))();
      *(undefined4 *)(param_1 + 0xbc) = 0;
    }
    if (*(int *)(param_1 + 0x74) != -1) {
      fn_0016a43c(*(undefined4 *)(*(int *)(param_1 + 100) + 0x2c));
      *(undefined4 *)(param_1 + 0x74) = 0xffffffff;
    }
    if (*(int *)(param_1 + 0x70) != -1) {
      fn_00192f50(*(undefined4 *)(*(int *)(param_1 + 100) + 0x2c));
      return;
    }
  }
  return;
}


