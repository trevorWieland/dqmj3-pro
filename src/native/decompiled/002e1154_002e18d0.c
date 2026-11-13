#include "002e1154_002e18d0.h"



void fn_002e18d0(undefined4 param_1,int param_2)

{
  undefined2 *puVar1;
  uint uVar2;
  uint local_20;
  uint local_1c;
  int local_18;
  undefined2 local_14 [4];
  
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  fn_006bba1c(param_1,&local_20,0,0);
  uVar2 = 0;
  if ((int)(local_1c - local_20) >> 1 != 0) {
    do {
      local_14[0] = fn_002ea524((int)*(short *)(local_20 + uVar2 * 2));
      puVar1 = *(undefined2 **)(param_2 + 4);
      if (puVar1 == *(undefined2 **)(param_2 + 8)) {
        fn_0079e460(param_2,puVar1,local_14);
      }
      else {
        *(undefined2 **)(param_2 + 4) = puVar1 + 1;
        if (puVar1 != (undefined2 *)0x0) {
          *puVar1 = local_14[0];
        }
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)((int)(local_1c - local_20) >> 1));
  }
  uVar2 = local_20;
  if (local_1c < local_20) {
    do {
      uVar2 = uVar2 + 2;
    } while (uVar2 != local_1c);
  }
  fn_001008c4(local_20,(int)(local_18 - local_20) >> 1,0);
  return;
}



void fn_002e1798(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  uVar2 = *(int *)(iVar1 + 0x10) + 1;
  *(uint *)(iVar1 + 0x10) = uVar2;
  if (3 < uVar2) {
    *(undefined4 *)(iVar1 + 0x10) = 3;
  }
  return;
}



void fn_002e1784(int param_1)

{
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10) = 0;
  return;
}



void fn_002e146c(int param_1)

{
  char *pcVar1;
  byte bVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  uint uVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  bool bVar11;
  uint local_40;
  uint local_3c;
  int local_38;
  uint local_34;
  uint local_30;
  int local_2c;
  
  uVar10 = 0;
  iVar3 = fn_00129dc8(*(undefined4 *)(DAT_00897804 + 0x1c));
  if (iVar3 == 6) {
    local_40 = 0;
    local_3c = 0;
    local_38 = 0;
    fn_006bba1c(param_1,&local_40,0,0);
    bVar2 = 0;
    iVar9 = 0;
    bVar11 = (int)(local_3c - local_40) >> 1 != 0;
    pcVar4 = (char *)fn_006afe90(*(undefined4 *)(DAT_008977e0 + 0x1c),
                                  *(undefined4 *)(DAT_008977e0 + 0xa8));
    pcVar7 = (char *)&DAT_00891f18;
    iVar3 = 0x891f1a;
    iVar8 = 3;
    do {
      pcVar1 = pcVar7 + 4;
      pcVar7 = pcVar7 + 8;
      if (*pcVar1 == *pcVar4) {
        iVar9 = (int)*(short *)(iVar3 + 4);
      }
      if (*pcVar7 == *pcVar4) {
        iVar9 = (int)*(short *)(iVar3 + 8);
      }
      iVar8 = iVar8 + -1;
      iVar3 = iVar3 + 8;
    } while (iVar8 != 0);
    if (iVar9 != 0) {
      fn_002ea524(iVar9);
      uVar5 = fn_00237090();
      iVar3 = fn_006b7b34(*(undefined4 *)(DAT_00897804 + 0x24),uVar5);
      if (iVar3 == 0) {
        bVar2 = 1;
      }
    }
    if (*(char *)(param_1 + 0x14) != '\0') {
      bVar2 = 0;
    }
    if ((bool)(bVar2 & ~bVar11)) {
      iVar3 = fn_006bb944(param_1,iVar9);
      if (iVar3 == 0) {
        uVar6 = local_40;
        if (local_3c < local_40) {
          do {
            uVar6 = uVar6 + 2;
          } while (uVar6 != local_3c);
        }
      }
      else {
        fn_00242834(*(undefined4 *)(DAT_00897804 + 0x1c),iVar9);
        uVar6 = local_40;
        if (local_3c < local_40) {
          do {
            uVar6 = uVar6 + 2;
          } while (uVar6 != local_3c);
        }
      }
      fn_001008c4(local_40,(int)(local_38 - local_40) >> 1,0);
      return;
    }
    if ((!(bool)(bVar11 & ~bVar2)) && (!(bool)(bVar11 | bVar2))) {
      uVar10 = 1;
    }
    uVar6 = local_40;
    if (local_3c < local_40) {
      do {
        uVar6 = uVar6 + 2;
      } while (uVar6 != local_3c);
    }
    fn_001008c4(local_40,(int)(local_38 - local_40) >> 1,0);
    if (!(bool)(bVar11 & ~bVar2)) goto LAB_002e1640;
  }
  else {
LAB_002e1640:
    iVar3 = fn_006bc084(param_1);
    if (iVar3 != 0) {
      return;
    }
  }
  iVar3 = fn_00163868(10);
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  fn_006bba1c(param_1,&local_34,uVar10,6 < iVar3);
  if ((int)(local_30 - local_34) >> 1 == 0) {
    iVar8 = fn_00129dc8(*(undefined4 *)(DAT_00897804 + 0x1c));
    if (iVar8 != 5 && iVar8 != 4) goto LAB_002e1740;
    fn_006bba1c(param_1,&local_34,0,6 >= iVar3);
    iVar3 = fn_00163868((int)(local_30 - local_34) >> 1);
    iVar3 = (int)*(short *)(local_34 + iVar3 * 2);
    iVar8 = fn_006bb944(param_1,iVar3);
  }
  else {
    iVar3 = fn_00163868();
    iVar3 = (int)*(short *)(local_34 + iVar3 * 2);
    iVar8 = fn_006bb944(param_1,iVar3);
  }
  iVar9 = 0;
  if (iVar8 != 0) {
    iVar9 = iVar3;
  }
  fn_00242834(*(undefined4 *)(DAT_00897804 + 0x1c),iVar9);
LAB_002e1740:
  uVar6 = local_34;
  if (local_30 < local_34) {
    do {
      uVar6 = uVar6 + 2;
    } while (uVar6 != local_30);
  }
  fn_001008c4(local_34,(int)(local_2c - local_34) >> 1,0);
  return;
}



undefined4 * fn_002e12ec(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  undefined4 unaff_r4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = 0;
  *param_1 = &PTR_FUN_00820804;
  do {
    if ((int *)param_1[iVar5 + 0x50] != (int *)0x0) {
      (**(code **)(*(int *)param_1[iVar5 + 0x50] + 0xa4))();
      piVar2 = (int *)param_1[iVar5 + 0x50];
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 4))();
      }
      param_1[iVar5 + 0x50] = 0;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x10);
  param_1[0x40] = 0;
  fn_002df5c0(param_1);
  if ((int *)param_1[0x62] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x62] + 4))();
    param_1[0x62] = 0;
  }
  uVar3 = param_1[0x69];
  uVar4 = uVar3;
  if ((uint)param_1[0x6a] < uVar3) {
    do {
      uVar4 = uVar4 + 2;
    } while (uVar4 != param_1[0x6a]);
  }
  fn_001008c4(uVar3,(int)(param_1[0x6b] - uVar3) >> 1,0);
  uVar3 = param_1[0x66];
  uVar4 = uVar3;
  if ((uint)param_1[0x67] <= uVar3) {
    for (; uVar4 != param_1[0x67]; uVar4 = uVar4 + 0xc) {
    }
  }
  fn_001008c4(uVar3,(int)(param_1[0x68] - uVar3) / 0xc,0);
  uVar3 = param_1[99];
  uVar4 = uVar3;
  if ((uint)param_1[100] < uVar3) {
    do {
      uVar4 = uVar4 + 4;
    } while (uVar4 != param_1[100]);
  }
  fn_001008c4(uVar3,(int)(param_1[0x65] - uVar3) >> 2,0);
  if ((int *)param_1[0x62] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x62] + 4))();
  }
  if ((int *)param_1[0x61] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x61] + 4))();
  }
  iVar5 = 0;
  *param_1 = &DAT_0081bab4;
  do {
    iVar1 = iVar5 * 4;
    piVar2 = (int *)param_1[iVar1 + 0x1a];
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    iVar5 = iVar5 + 1;
    param_1[iVar1 + 0x1a] = 0;
  } while (iVar5 < 8);
  *param_1 = &DAT_00850e30;
  uVar3 = param_1[5];
  uVar4 = uVar3;
  if ((uint)param_1[6] < uVar3) {
    do {
      uVar4 = uVar4 + 8;
    } while (uVar4 != param_1[6]);
  }
  fn_001008c4(uVar3,(int)(param_1[7] - uVar3) >> 3,0,uVar3,unaff_r4,in_lr);
  return param_1;
}



undefined4 * fn_002e1154(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  puVar1 = (undefined4 *)fn_001c7c68();
  *puVar1 = &PTR_FUN_00820804;
  puVar1[0x37] = 0;
  puVar1[0x38] = 0;
  puVar1[0x39] = param_2;
  puVar1[0x3a] = 0;
  puVar1[0x3b] = 0xffffffff;
  puVar1[0x3c] = 0;
  *(undefined2 *)(puVar1 + 0x3d) = 0;
  puVar1[0x40] = 0;
  puVar1[0x3f] = param_3;
  puVar1[0x3e] = 0xffffffff;
  *(undefined2 *)(puVar1 + 0x41) = 0;
  *(undefined2 *)((int)puVar1 + 0x106) = 0;
  *(undefined2 *)(puVar1 + 0x42) = 0;
  *(undefined2 *)((int)puVar1 + 0x10a) = 0xffff;
  *(undefined1 *)(puVar1 + 0x43) = 1;
  *(undefined1 *)((int)puVar1 + 0x10d) = 1;
  *(undefined1 *)((int)puVar1 + 0x10e) = 0;
  *(undefined1 *)((int)puVar1 + 0x10f) = 0;
  *(undefined1 *)(puVar1 + 0x44) = 0;
  puVar1[0x45] = 0xffffffff;
  puVar1[0x46] = 0xffffffff;
  puVar1[0x47] = 0xffffffff;
  puVar1[0x48] = 0;
  puVar1[0x49] = 0;
  puVar1[0x4a] = 0;
  puVar1[0x4b] = 0;
  puVar1[0x4c] = 0;
  puVar1[0x4d] = 0;
  puVar1[0x4e] = 0;
  puVar1[0x4f] = 0;
  puVar1[0x60] = 0;
  puVar1[0x61] = 0;
  puVar1[0x62] = 0;
  puVar1[99] = 0;
  puVar1[100] = 0;
  puVar1[0x65] = 0;
  puVar1[0x66] = 0;
  puVar1[0x67] = 0;
  puVar1[0x68] = 0;
  puVar1[0x69] = 0;
  puVar1[0x6a] = 0;
  puVar1[0x6b] = 0;
  puVar1[0x50] = 0;
  puVar1[0x51] = 0;
  puVar1[0x52] = 0;
  puVar1[0x53] = 0;
  puVar1[0x54] = 0;
  puVar1[0x55] = 0;
  puVar1[0x56] = 0;
  puVar1[0x57] = 0;
  puVar1[0x58] = 0;
  puVar1[0x59] = 0;
  puVar1[0x5a] = 0;
  puVar1[0x5b] = 0;
  puVar1[0x5c] = 0;
  puVar1[0x5d] = 0;
  puVar1[0x5e] = 0;
  puVar1[0x5f] = 0;
  if ((int *)puVar1[0x61] != (int *)0x0) {
    (**(code **)(*(int *)puVar1[0x61] + 4))();
    puVar1[0x61] = 0;
  }
  iVar2 = fn_00145b00(0x40,&DAT_00812c8c);
  piVar3 = (int *)0x0;
  if (iVar2 != 0) {
    piVar3 = (int *)fn_00369618();
  }
  piVar4 = (int *)puVar1[0x62];
  if (piVar4 != piVar3) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
    puVar1[0x62] = piVar3;
  }
  return puVar1;
}


