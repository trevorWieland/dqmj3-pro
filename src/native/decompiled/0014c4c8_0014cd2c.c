#include "0014c4c8_0014cd2c.h"



int fn_0014cd2c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  iVar2 = 0;
  do {
    if (*(short *)(iVar1 + iVar2 * 0x48 + 0x1d5dc) == param_2) {
      iVar2 = iVar2 * 0x48 + 0x1d5dc;
LAB_0014cd78:
      return iVar1 + iVar2;
    }
    if (*(short *)(iVar1 + iVar2 * 0x48 + 0x1d624) == param_2) {
      iVar2 = iVar2 * 0x48 + 0x1d624;
      goto LAB_0014cd78;
    }
    iVar2 = iVar2 + 2;
    if (0x13 < iVar2) {
      return 0;
    }
  } while( true );
}



bool fn_0014ccb4(undefined2 param_1,undefined4 param_2,uint param_3)

{
  undefined2 local_34 [2];
  uint local_30;
  uint uStack_2c;
  uint uStack_28;
  uint local_24;
  uint local_20;
  uint uStack_1c;
  uint uStack_18;
  uint local_14;
  undefined4 local_10 [2];
  
  local_34[0] = param_1;
  local_10[0] = param_2;
  fn_001628b0(&local_30,local_34,2,local_10,4);
  return (local_30 ^ uStack_2c ^ uStack_28 ^ local_24 ^ local_20 ^ uStack_1c ^ uStack_18 ^ local_14)
         == param_3;
}



undefined4 * fn_0014c5e4(undefined4 *param_1)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  int *piVar6;
  
  fn_0019e864(param_1 + 0xf,&DAT_008c06e8);
  (**(code **)(*(int *)param_1[0xc] + 0x10))();
  (**(code **)(*(int *)param_1[0xe] + 0x10))();
  (**(code **)(*(int *)param_1[2] + 0x10))();
  fn_0019e864(param_1 + 0xb,&DAT_008c06e8);
  fn_0019e864(param_1 + 0xd,&DAT_008c06e8);
  fn_0019e864(param_1 + 1,&DAT_008c06e8);
  while( true ) {
    iVar3 = ((int *)param_1[3])[1];
    if (iVar3 == 0) break;
    fn_0019e864(*(int *)param_1[3] + iVar3 * 8 + -8,&DAT_008c06e8);
    piVar1 = (int *)param_1[3];
    piVar1[1] = piVar1[1] + -1;
    puVar2 = (uint *)(*piVar1 + piVar1[1] * 8);
    if (((*puVar2 & 0x8000000) != 0) &&
       (iVar3 = *(int *)(puVar2[1] + 4) + -1, *(int *)(puVar2[1] + 4) = iVar3, iVar3 == 0)) {
      (**(code **)(*(int *)puVar2[1] + 8))();
    }
  }
  (**(code **)(*(int *)param_1[0x13] + 0x10))();
  fn_0019e864(param_1 + 0x12,&DAT_008c06e8);
  fn_0019e864(param_1 + 0x14,&DAT_008c06e8);
  fn_0019e864(param_1 + 0x16,&DAT_008c06e8);
  fn_0019e864(param_1 + 0x18,&DAT_008c06e8);
  fn_0019e864(param_1 + 0x1a,&DAT_008c06e8);
  fn_0019e864(param_1 + 0x1e,&DAT_008c06e8);
  fn_0019e864(param_1 + 0x1c,&DAT_008c06e8);
  fn_0019e864(param_1 + 0x20,&DAT_008c06e8);
  fn_0019e864(param_1 + 0x22,&DAT_008c06e8);
  fn_0019e864(param_1 + 0x24,&DAT_008c06e8);
  fn_0019e864(param_1 + 0x26,&DAT_008c06e8);
  iVar3 = param_1[8];
  uVar4 = 0;
  if (param_1[6] != 0) {
    do {
      fn_0019e864(iVar3,&DAT_008c06e8);
      uVar4 = uVar4 + 1;
      iVar3 = iVar3 + 0x10;
    } while (uVar4 < (uint)param_1[6]);
  }
  piVar1 = (int *)param_1[0x11];
  if (piVar1 != (int *)0x0) {
    piVar1[1] = piVar1[1] + 1;
    do {
      (**(code **)(*piVar1 + 0x10))(piVar1);
      piVar6 = (int *)piVar1[3];
      if (piVar6 != (int *)0x0) {
        piVar6[1] = piVar6[1] + 1;
      }
      iVar3 = piVar1[1];
      piVar1[1] = iVar3 + -1;
      if (iVar3 + -1 == 0) {
        (**(code **)(*piVar1 + 8))(piVar1);
      }
      piVar1 = piVar6;
    } while (piVar6 != (int *)0x0);
    if (param_1[0x11] != 0) {
                    /* WARNING: Subroutine does not return */
      fn_00146590();
    }
  }
  piVar1 = (int *)param_1[4];
  if (piVar1[2] != 0) {
    uVar4 = 0;
    if (piVar1[1] != 0) {
      do {
        puVar2 = (uint *)(*piVar1 + uVar4 * 8);
        if (((*puVar2 & 0x8000000) != 0) &&
           (iVar3 = *(int *)(puVar2[1] + 4) + -1, *(int *)(puVar2[1] + 4) = iVar3, iVar3 == 0)) {
          (**(code **)(*(int *)puVar2[1] + 8))();
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < (uint)piVar1[1]);
    }
    fn_0019d680(*piVar1,piVar1[2] << 3);
  }
  fn_0019d680(param_1[4],0xc);
  piVar1 = (int *)param_1[3];
  if (piVar1[2] != 0) {
    uVar4 = 0;
    if (piVar1[1] != 0) {
      do {
        puVar2 = (uint *)(*piVar1 + uVar4 * 8);
        if (((*puVar2 & 0x8000000) != 0) &&
           (iVar3 = *(int *)(puVar2[1] + 4) + -1, *(int *)(puVar2[1] + 4) = iVar3, iVar3 == 0)) {
          (**(code **)(*(int *)puVar2[1] + 8))();
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < (uint)piVar1[1]);
    }
    fn_0019d680(*piVar1,piVar1[2] << 3);
  }
  fn_0019d680(param_1[3],0xc);
  piVar1 = (int *)*param_1;
  if (piVar1[2] != 0) {
    uVar4 = 0;
    if (piVar1[1] != 0) {
      do {
        puVar2 = (uint *)(*piVar1 + uVar4 * 8);
        if (((*puVar2 & 0x8000000) != 0) &&
           (iVar3 = *(int *)(puVar2[1] + 4) + -1, *(int *)(puVar2[1] + 4) = iVar3, iVar3 == 0)) {
          (**(code **)(*(int *)puVar2[1] + 8))();
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < (uint)piVar1[1]);
    }
    fn_0019d680(*piVar1,piVar1[2] << 3);
  }
  fn_0019d680(*param_1,0xc);
  puVar5 = (undefined4 *)param_1[5];
  fn_0019d680(*puVar5,puVar5[1] << 2);
  *puVar5 = 0;
  fn_0019d680(param_1[5],0xc);
  if (param_1[0x2b] != 0) {
    fn_0019d680(param_1[0x2b],param_1[0x2c]);
  }
  if (((param_1[0x26] & 0x8000000) != 0) &&
     (iVar3 = *(int *)(param_1[0x27] + 4) + -1, *(int *)(param_1[0x27] + 4) = iVar3, iVar3 == 0)) {
    (**(code **)(*(int *)param_1[0x27] + 8))();
  }
  if (((param_1[0x24] & 0x8000000) != 0) &&
     (iVar3 = *(int *)(param_1[0x25] + 4) + -1, *(int *)(param_1[0x25] + 4) = iVar3, iVar3 == 0)) {
    (**(code **)(*(int *)param_1[0x25] + 8))();
  }
  if (((param_1[0x22] & 0x8000000) != 0) &&
     (iVar3 = *(int *)(param_1[0x23] + 4) + -1, *(int *)(param_1[0x23] + 4) = iVar3, iVar3 == 0)) {
    (**(code **)(*(int *)param_1[0x23] + 8))();
  }
  if (((param_1[0x20] & 0x8000000) != 0) &&
     (iVar3 = *(int *)(param_1[0x21] + 4) + -1, *(int *)(param_1[0x21] + 4) = iVar3, iVar3 == 0)) {
    (**(code **)(*(int *)param_1[0x21] + 8))();
  }
  if (((param_1[0x1e] & 0x8000000) != 0) &&
     (iVar3 = *(int *)(param_1[0x1f] + 4) + -1, *(int *)(param_1[0x1f] + 4) = iVar3, iVar3 == 0)) {
    (**(code **)(*(int *)param_1[0x1f] + 8))();
  }
  if (((param_1[0x1c] & 0x8000000) != 0) &&
     (iVar3 = *(int *)(param_1[0x1d] + 4) + -1, *(int *)(param_1[0x1d] + 4) = iVar3, iVar3 == 0)) {
    (**(code **)(*(int *)param_1[0x1d] + 8))();
  }
  if (((param_1[0x1a] & 0x8000000) != 0) &&
     (iVar3 = *(int *)(param_1[0x1b] + 4) + -1, *(int *)(param_1[0x1b] + 4) = iVar3, iVar3 == 0)) {
    (**(code **)(*(int *)param_1[0x1b] + 8))();
  }
  if (((param_1[0x18] & 0x8000000) != 0) &&
     (iVar3 = *(int *)(param_1[0x19] + 4) + -1, *(int *)(param_1[0x19] + 4) = iVar3, iVar3 == 0)) {
    (**(code **)(*(int *)param_1[0x19] + 8))();
  }
  if (((param_1[0x16] & 0x8000000) != 0) &&
     (iVar3 = *(int *)(param_1[0x17] + 4) + -1, *(int *)(param_1[0x17] + 4) = iVar3, iVar3 == 0)) {
    (**(code **)(*(int *)param_1[0x17] + 8))();
  }
  if (((param_1[0x14] & 0x8000000) != 0) &&
     (iVar3 = *(int *)(param_1[0x15] + 4) + -1, *(int *)(param_1[0x15] + 4) = iVar3, iVar3 == 0)) {
    (**(code **)(*(int *)param_1[0x15] + 8))();
  }
  if (((param_1[0x12] & 0x8000000) != 0) &&
     (iVar3 = *(int *)(param_1[0x13] + 4) + -1, *(int *)(param_1[0x13] + 4) = iVar3, iVar3 == 0)) {
    (**(code **)(*(int *)param_1[0x13] + 8))();
  }
  if (((param_1[0xf] & 0x8000000) != 0) &&
     (iVar3 = *(int *)(param_1[0x10] + 4) + -1, *(int *)(param_1[0x10] + 4) = iVar3, iVar3 == 0)) {
    (**(code **)(*(int *)param_1[0x10] + 8))();
  }
  if (((param_1[0xd] & 0x8000000) != 0) &&
     (iVar3 = *(int *)(param_1[0xe] + 4) + -1, *(int *)(param_1[0xe] + 4) = iVar3, iVar3 == 0)) {
    (**(code **)(*(int *)param_1[0xe] + 8))();
  }
  if (((param_1[0xb] & 0x8000000) != 0) &&
     (iVar3 = *(int *)(param_1[0xc] + 4) + -1, *(int *)(param_1[0xc] + 4) = iVar3, iVar3 == 0)) {
    (**(code **)(*(int *)param_1[0xc] + 8))();
  }
  fn_0019d680(param_1[10],param_1[6] * 0x14);
  if (((param_1[1] & 0x8000000) != 0) &&
     (iVar3 = *(int *)(param_1[2] + 4) + -1, *(int *)(param_1[2] + 4) = iVar3, iVar3 == 0)) {
    (**(code **)(*(int *)param_1[2] + 8))();
  }
  return param_1;
}



void fn_0014c4c8(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 4) = 0x1000001;
  iVar1 = fn_002fece8(0x50);
  puVar5 = (undefined4 *)(iVar1 + 0x10);
  uVar4 = 0;
  puVar3 = puVar5;
  do {
    puVar2 = puVar3;
    *(undefined4 *)(iVar1 + uVar4 * 4) = 0;
    puVar2[2] = 0;
    if (puVar2 != (undefined4 *)0x0) {
      puVar2[1] = 0;
      *puVar2 = 0x1000001;
    }
    uVar4 = uVar4 + 1;
    puVar2[3] = puVar2 + 4;
    puVar3 = puVar2 + 4;
  } while (uVar4 < 3);
  *(undefined4 *)(iVar1 + uVar4 * 4) = 0;
  puVar2[6] = 0;
  if (puVar3 != (undefined4 *)0x0) {
    puVar2[5] = 0;
    *puVar3 = 0x1000001;
  }
  puVar2[7] = 0;
  *(undefined4 **)(param_1 + 0x24) = puVar5;
  *(int *)(param_1 + 0x28) = iVar1;
  *(undefined4 **)(param_1 + 0x20) = puVar5;
  *(undefined4 *)(param_1 + 0x18) = 4;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0x1000001;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0x1000001;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0x1000001;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0x1000001;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0x1000001;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0x1000001;
  *(undefined4 *)(param_1 + 0x60) = 0x1000001;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0x1000001;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0x1000001;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0x1000001;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0x1000001;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0x1000001;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0x1000001;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0x1000001;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined1 *)(param_1 + 0xa8) = 0;
  *(undefined1 *)(param_1 + 0xa9) = 0;
  return;
}


