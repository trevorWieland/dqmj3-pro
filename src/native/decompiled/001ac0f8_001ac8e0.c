#include "001ac0f8_001ac8e0.h"



undefined4 fn_001ac8e0(int param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  
  fn_00193374();
  iVar1 = fn_00189e18();
  if (iVar1 == 0) {
    fn_00193380();
    return 0;
  }
  puVar2 = *(uint **)(param_1 + (*(ushort *)(param_1 + 0x131e) & 1) * 0x60 + param_2 * 4 + 0x10b4);
  *puVar2 = *puVar2 | 0x10;
  fn_00193380();
  return 1;
}



void fn_001ac8ac(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (0x7fff < param_2) {
    param_2 = 0x7fff;
  }
  if (param_2 < 0) {
    param_2 = 0;
  }
  *(int *)(param_1 + 0x20) = param_2;
  fn_00170704();
  iVar1 = *(int *)(param_1 + 0x24);
  iVar2 = *(int *)(param_1 + 0x28);
  if (iVar1 == 0 && iVar2 == 0) {
    DAT_008f0bc4 = 0;
    DAT_008f0bc8 = 0;
  }
  else {
    if ((iVar2 != 0) && (*(int *)(iVar2 + 0x24) = iVar1, iVar1 == 0)) {
      DAT_008f0bc4 = iVar2;
    }
    if ((iVar1 != 0) &&
       (iVar2 = *(int *)(param_1 + 0x28), *(int *)(iVar1 + 0x28) = iVar2, iVar2 == 0)) {
      DAT_008f0bc8 = iVar1;
    }
  }
  iVar1 = DAT_008f0bc4;
  if (DAT_008f0bc4 == 0) {
    *(undefined4 *)(param_1 + 0x24) = 0;
    DAT_008f0bc4 = param_1;
    *(undefined4 *)(param_1 + 0x28) = 0;
LAB_001ad010:
    DAT_008f0bc8 = param_1;
  }
  else {
    while (param_2 < *(int *)(iVar1 + 0x20)) {
      if (*(int *)(iVar1 + 0x28) == 0) {
        *(int *)(iVar1 + 0x28) = param_1;
        *(int *)(param_1 + 0x24) = iVar1;
        *(undefined4 *)(param_1 + 0x28) = 0;
        goto LAB_001ad010;
      }
      iVar1 = *(int *)(iVar1 + 0x28);
    }
    iVar2 = *(int *)(iVar1 + 0x24);
    *(int *)(param_1 + 0x24) = iVar2;
    *(int *)(param_1 + 0x28) = iVar1;
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0x24) = 0;
      DAT_008f0bc4 = param_1;
    }
    else {
      *(int *)(iVar2 + 0x28) = param_1;
    }
    *(int *)(iVar1 + 0x24) = param_1;
  }
  fn_001707b4(&DAT_008f0bd0);
  return;
}



int fn_001ac354(int param_1)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar1 = *(int *)(param_1 + 0xe4);
  while (iVar1 != 0) {
    uVar5 = *(undefined4 *)(*(int *)(param_1 + 0xe0) + iVar1 * 4 + -4);
    fn_001ac354(uVar5);
    fn_0019d680(uVar5,0xf4);
    iVar1 = *(int *)(param_1 + 0xe4) + -1;
    *(int *)(param_1 + 0xe4) = iVar1;
  }
  if (*(int *)(param_1 + 0xe8) != 0) {
    for (uVar2 = 0; uVar2 < *(uint *)(param_1 + 0xe4); uVar2 = uVar2 + 1) {
    }
    fn_0019d680(*(undefined4 *)(param_1 + 0xe0),*(int *)(param_1 + 0xe8) << 2);
  }
  if (*(int *)(param_1 + 0xcc) != 0) {
    for (uVar2 = 0; uVar2 < *(uint *)(param_1 + 200); uVar2 = uVar2 + 1) {
    }
    fn_0019d680(*(undefined4 *)(param_1 + 0xc4),*(int *)(param_1 + 0xcc) << 2);
  }
  if (*(int *)(param_1 + 0xc0) != 0) {
    for (uVar2 = 0; uVar2 < *(uint *)(param_1 + 0xbc); uVar2 = uVar2 + 1) {
    }
    fn_0019d680(*(undefined4 *)(param_1 + 0xb8),*(int *)(param_1 + 0xc0) << 2);
  }
  if (*(int *)(param_1 + 0xb4) != 0) {
    for (uVar2 = 0; uVar2 < *(uint *)(param_1 + 0xb0); uVar2 = uVar2 + 1) {
    }
    fn_0019d680(*(undefined4 *)(param_1 + 0xac),*(int *)(param_1 + 0xb4) << 2);
  }
  if (*(int *)(param_1 + 0xa4) != 0) {
    for (uVar2 = 0; uVar2 < *(uint *)(param_1 + 0xa0); uVar2 = uVar2 + 1) {
    }
    fn_0019d680(*(undefined4 *)(param_1 + 0x9c),*(int *)(param_1 + 0xa4) << 3);
  }
  if (((*(uint *)(param_1 + 0x90) & 0x8000000) != 0) &&
     (iVar1 = *(int *)(*(int *)(param_1 + 0x94) + 4) + -1,
     *(int *)(*(int *)(param_1 + 0x94) + 4) = iVar1, iVar1 == 0)) {
    (**(code **)(**(int **)(param_1 + 0x94) + 8))();
  }
  if (((*(uint *)(param_1 + 0x88) & 0x8000000) != 0) &&
     (iVar1 = *(int *)(*(int *)(param_1 + 0x8c) + 4) + -1,
     *(int *)(*(int *)(param_1 + 0x8c) + 4) = iVar1, iVar1 == 0)) {
    (**(code **)(**(int **)(param_1 + 0x8c) + 8))();
  }
  if (((*(uint *)(param_1 + 0x80) & 0x8000000) != 0) &&
     (iVar1 = *(int *)(*(int *)(param_1 + 0x84) + 4) + -1,
     *(int *)(*(int *)(param_1 + 0x84) + 4) = iVar1, iVar1 == 0)) {
    (**(code **)(**(int **)(param_1 + 0x84) + 8))();
  }
  if (((*(uint *)(param_1 + 0x78) & 0x8000000) != 0) &&
     (iVar1 = *(int *)(*(int *)(param_1 + 0x7c) + 4) + -1,
     *(int *)(*(int *)(param_1 + 0x7c) + 4) = iVar1, iVar1 == 0)) {
    (**(code **)(**(int **)(param_1 + 0x7c) + 8))();
  }
  if (*(int *)(param_1 + 0x74) != 0) {
    uVar2 = 0;
    if (*(int *)(param_1 + 0x70) != 0) {
      do {
        puVar3 = (uint *)(*(int *)(param_1 + 0x6c) + uVar2 * 0x14);
        if (((*puVar3 & 0x8000000) != 0) &&
           (iVar1 = *(int *)(puVar3[1] + 4) + -1, *(int *)(puVar3[1] + 4) = iVar1, iVar1 == 0)) {
          (**(code **)(*(int *)puVar3[1] + 8))();
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)(param_1 + 0x70));
    }
    fn_0019d680(*(int *)(param_1 + 0x6c),*(int *)(param_1 + 0x74) * 0x14);
  }
  if (*(int *)(param_1 + 0x68) != 0) {
    for (uVar2 = 0; uVar2 < *(uint *)(param_1 + 100); uVar2 = uVar2 + 1) {
    }
    fn_0019d680(*(undefined4 *)(param_1 + 0x60),*(int *)(param_1 + 0x68) << 3);
  }
  if (*(int *)(param_1 + 0x5c) != 0) {
    uVar2 = 0;
    if (*(int *)(param_1 + 0x58) != 0) {
      do {
        iVar1 = *(int *)(param_1 + 0x54) + uVar2 * 0x14;
        if (((*(uint *)(iVar1 + 0xc) & 0x8000000) != 0) &&
           (iVar4 = *(int *)(*(int *)(iVar1 + 0x10) + 4) + -1,
           *(int *)(*(int *)(iVar1 + 0x10) + 4) = iVar4, iVar4 == 0)) {
          (**(code **)(**(int **)(iVar1 + 0x10) + 8))();
        }
        if (((*(uint *)(iVar1 + 4) & 0x8000000) != 0) &&
           (iVar4 = *(int *)(*(int *)(iVar1 + 8) + 4) + -1,
           *(int *)(*(int *)(iVar1 + 8) + 4) = iVar4, iVar4 == 0)) {
          (**(code **)(**(int **)(iVar1 + 8) + 8))();
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)(param_1 + 0x58));
    }
    fn_0019d680(*(int *)(param_1 + 0x54),*(int *)(param_1 + 0x5c) * 0x14);
  }
  if (*(int *)(param_1 + 0x50) != 0) {
    uVar2 = 0;
    if (*(int *)(param_1 + 0x4c) != 0) {
      do {
        puVar3 = (uint *)(*(int *)(param_1 + 0x48) + uVar2 * 8);
        if (((*puVar3 & 0x8000000) != 0) &&
           (iVar1 = *(int *)(puVar3[1] + 4) + -1, *(int *)(puVar3[1] + 4) = iVar1, iVar1 == 0)) {
          (**(code **)(*(int *)puVar3[1] + 8))();
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)(param_1 + 0x4c));
    }
    fn_0019d680(*(int *)(param_1 + 0x48),*(int *)(param_1 + 0x50) << 3);
  }
  if (*(int *)(param_1 + 0x44) != 0) {
    uVar2 = 0;
    if (*(int *)(param_1 + 0x40) != 0) {
      do {
        puVar3 = (uint *)(*(int *)(param_1 + 0x3c) + uVar2 * 8);
        if (((*puVar3 & 0x8000000) != 0) &&
           (iVar1 = *(int *)(puVar3[1] + 4) + -1, *(int *)(puVar3[1] + 4) = iVar1, iVar1 == 0)) {
          (**(code **)(*(int *)puVar3[1] + 8))();
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)(param_1 + 0x40));
    }
    fn_0019d680(*(int *)(param_1 + 0x3c),*(int *)(param_1 + 0x44) << 3);
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    for (uVar2 = 0; uVar2 < *(uint *)(param_1 + 0x34); uVar2 = uVar2 + 1) {
    }
    fn_0019d680(*(undefined4 *)(param_1 + 0x30),*(int *)(param_1 + 0x38) << 2);
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    for (uVar2 = 0; uVar2 < *(uint *)(param_1 + 0x28); uVar2 = uVar2 + 1) {
    }
    fn_0019d680(*(undefined4 *)(param_1 + 0x24),*(int *)(param_1 + 0x2c) << 2);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    for (uVar2 = 0; uVar2 < *(uint *)(param_1 + 0x14); uVar2 = uVar2 + 1) {
    }
    fn_0019d680(*(undefined4 *)(param_1 + 0x10),*(int *)(param_1 + 0x18) << 2);
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    uVar2 = 0;
    if (*(int *)(param_1 + 8) != 0) {
      do {
        puVar3 = (uint *)(*(int *)(param_1 + 4) + uVar2 * 0x14);
        if (((*puVar3 & 0x8000000) != 0) &&
           (iVar1 = *(int *)(puVar3[1] + 4) + -1, *(int *)(puVar3[1] + 4) = iVar1, iVar1 == 0)) {
          (**(code **)(*(int *)puVar3[1] + 8))();
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)(param_1 + 8));
    }
    fn_0019d680(*(int *)(param_1 + 4),*(int *)(param_1 + 0xc) * 0x14);
  }
  return param_1;
}



undefined4 *
fn_001ac0f8(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  int *piVar1;
  int iVar2;
  uint local_38;
  int *local_34;
  undefined4 local_30;
  
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0x1000001;
  param_1[0x1f] = 0;
  param_1[0x20] = 0x1000001;
  param_1[0x21] = 0;
  param_1[0x22] = 0x1000001;
  param_1[0x23] = 0;
  param_1[0x24] = 0x1000001;
  param_1[0x25] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x26] = 0;
  local_34 = (int *)fn_002fece8(0x2c);
  if (local_34 != (int *)0x0) {
    fn_0019b998(local_34,param_2,0);
  }
  local_34[6] = 0;
  local_38 = 0xa000020;
  if (local_34 != (int *)0x0) {
    local_34[1] = local_34[1] + 1;
    fn_0019e864(param_1 + 0x1e,&local_38);
    if (((local_38 & 0x8000000) != 0) &&
       (iVar2 = local_34[1], local_34[1] = iVar2 + -1, iVar2 + -1 == 0)) {
      (**(code **)(*local_34 + 8))();
    }
    local_30 = 0;
    piVar1 = (int *)fn_002fece8(0x2c);
    if (piVar1 != (int *)0x0) {
      fn_0019b998(piVar1,param_2,local_30);
    }
    piVar1[6] = 0;
    local_38 = 0xa000020;
    local_34 = piVar1;
    if (piVar1 != (int *)0x0) {
      piVar1[1] = piVar1[1] + 1;
      fn_0019e864(param_1 + 0x20,&local_38);
      if (((local_38 & 0x8000000) != 0) &&
         (iVar2 = local_34[1], local_34[1] = iVar2 + -1, iVar2 + -1 == 0)) {
        (**(code **)(*local_34 + 8))();
      }
      param_1[0x34] = 0;
      *(undefined1 *)(param_1 + 0x36) = 1;
      param_1[7] = 0;
      param_1[0x35] = 0;
      *param_1 = 0;
      *(undefined1 *)(param_1 + 8) = 0;
      *(undefined1 *)((int)param_1 + 0x21) = 0;
      param_1[0x37] = param_2;
      param_1[0x2a] = param_3;
      param_1[0x3b] = param_4;
      param_1[0x3c] = param_5;
      return param_1;
    }
  }
  local_38 = 0xa000020;
                    /* WARNING: Subroutine does not return */
  fn_00146590();
}


