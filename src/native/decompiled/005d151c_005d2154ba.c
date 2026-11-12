#include "005d151c_005d2154ba.h"



undefined4 * fn_005d2044(undefined4 param_1,undefined4 param_2,short *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)fn_002fdf94(param_1,param_2,0x13);
  puVar1[0x18] = 0xffffffff;
  *puVar1 = &DAT_0084c30c;
  *(char *)(puVar1 + 0x16) = (char)param_3[5];
  uVar2 = 0;
  if (*param_3 != 0) {
    uVar2 = 1;
    if (param_3[1] != 0) {
      uVar2 = 2;
      if (param_3[2] != 0) {
        uVar2 = 3;
        if (param_3[3] != 0) {
          uVar2 = 4;
          if (param_3[4] != 0) {
            uVar2 = 5;
          }
        }
      }
    }
  }
  iVar3 = fn_00163868(uVar2);
  *(short *)((int)puVar1 + 0x5a) = param_3[iVar3];
  puVar1[0x17] = *(undefined4 *)(param_3 + iVar3 * 2 + 6);
  return puVar1;
}



void fn_005d1eac(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == 4) {
    (**(code **)(**(int **)(param_1 + 0x14) + 0x44))
              (*(int **)(param_1 + 0x14),*(undefined1 *)(param_1 + 0x58),4,0);
    uVar2 = 5;
  }
  else {
    if (iVar1 == 5) {
      iVar1 = (**(code **)(**(int **)(param_1 + 0x14) + 0x48))();
      if (iVar1 != 0) {
        uVar2 = fn_0023ddec(*(undefined4 *)(DAT_008977e0 + 0x2c),*(undefined4 *)(param_1 + 0x5c));
        *(undefined4 *)(param_1 + 0x60) = uVar2;
        fn_0023dca4(*(undefined4 *)(DAT_008977e0 + 0x2c),uVar2,*(int *)(param_1 + 0x14) + 0x38);
        *(undefined1 *)(*(int *)(param_1 + 0x14) + 4) = 1;
        fn_00215d9c(*(undefined4 *)(param_1 + 0x14),0xf,1,1);
                    /* WARNING: Subroutine does not return */
        fn_001638a0();
      }
      return;
    }
    if (iVar1 == 6) {
      if (*(float *)(*(int *)(param_1 + 0x14) + 0xf8) != 0.0) {
        return;
      }
      uVar2 = 7;
    }
    else {
      if (iVar1 != 7) {
        return;
      }
      uVar2 = fn_002fdd54(param_1,(int)*(short *)(param_1 + 0x5a),*(int *)(param_1 + 0x14) + 0x20,0
                          );
      fn_00215aec(uVar2,5);
      (**(code **)(**(int **)(param_1 + 0x14) + 0x1c4))(*(int **)(param_1 + 0x14),1);
      (**(code **)(**(int **)(param_1 + 0x14) + 0x54))(*(int **)(param_1 + 0x14),0);
      *(undefined1 *)(*(int *)(param_1 + 0x14) + 4) = 0;
      if (*(int *)(param_1 + 0x60) != -1) {
        fn_0023e640(*(undefined4 *)(DAT_008977e0 + 0x2c),*(int *)(param_1 + 0x60),0);
      }
      uVar2 = 2;
    }
  }
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  return;
}



void fn_005d19b4(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0057a7f0();
  puVar1[0x47] = 0;
  *puVar1 = &PTR_LAB_0084c16c;
  puVar1[0x39] = &DAT_0084c2cc;
  puVar1[0x48] = 0;
  puVar1[0x49] = 0;
  puVar1[0x4a] = 0;
  puVar1[0x4b] = 0;
  puVar1[0x4c] = 0;
  puVar1[0x4d] = 0;
  puVar1[0x4e] = 0;
  puVar1[0x4f] = 0;
  return;
}


