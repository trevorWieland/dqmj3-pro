#include "003af59c_003b078caa.h"



/* WARNING: Removing unreachable block (ram,0x002e2e94) */

void fn_003af740(undefined4 param_1,short param_2,short param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (int)param_3 * (int)param_2 + param_4 + 1 & 0xff;
  if ((uVar3 != 0) && (uVar3 < 0x5a)) {
    uVar1 = (uint)(byte)(&DAT_007c0d1c)[uVar3];
    if (0x59 < uVar1) {
      uVar1 = 0;
    }
    iVar2 = fn_00154ac8(uVar1 + 500);
    if (iVar2 != 0) {
      uVar3 = (uint)(byte)(&DAT_007c0d1c)[uVar3];
      if (0x59 < uVar3) {
        uVar3 = 0;
      }
      iVar2 = *(int *)(*(int *)(DAT_00897804 + 0x20) + 4);
      *(uint *)(iVar2 + 0x44 + (uVar3 >> 5) * 4) =
           *(uint *)(iVar2 + 0x44 + (uVar3 >> 5) * 4) | 1 << (uVar3 & 0x1f);
      return;
    }
  }
  return;
}



void fn_003af59c(int param_1,short param_2)

{
  undefined4 uVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  uVar7 = 0;
  do {
    uVar6 = param_2 * 10 + uVar7 + 1 & 0xff;
    if ((uVar6 == 0) || (0x59 < uVar6)) {
      uVar6 = 0;
    }
    local_58 = 0;
    local_54 = 0;
    local_50 = 0;
    local_4c = 0;
    local_48 = 0;
    local_44 = 0;
    local_40 = 0;
    local_3c = 0;
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    local_2c = 0;
    uVar1 = fn_006c75c8(param_1,DAT_00891a44,uVar6);
    fn_00101a50(&local_58,0x18,DAT_00891a50,uVar6,uVar1);
    fn_0031b78c(param_1,uVar7,0,&local_58);
    if (((uVar6 == 0) || (0x59 < uVar6)) &&
       (*(int *)(*(int *)(param_1 + 0x9c) + 0xcc) == *(int *)(*(int *)(param_1 + 0x9c) + 200) + -1))
    {
      piVar2 = *(int **)(*(int *)(param_1 + 0x78) + uVar7 * 4);
      (**(code **)(*piVar2 + 0x20))(piVar2,0);
    }
    else {
      uVar3 = (**(code **)(**(int **)(param_1 + 0x9c) + 0x5c))();
      if (uVar3 != uVar7) {
        fn_0031b3c4(*(undefined4 *)(*(int *)(param_1 + 0x78) + uVar7 * 4),1);
      }
    }
    if ((uVar6 != 0) && (uVar6 < 0x5a)) {
      bVar5 = (&DAT_007c0d1c)[uVar6];
      if (0x59 < bVar5) {
        bVar5 = 0;
      }
      iVar4 = fn_002e2e44(*(undefined4 *)(DAT_00897804 + 0x20),bVar5);
      if (iVar4 == 0) {
        uVar6 = (uint)(byte)(&DAT_007c0d1c)[uVar6];
        if (0x59 < uVar6) {
          uVar6 = 0;
        }
        fn_00154ac8(uVar6 + 500);
      }
    }
    fn_002c32c4(param_1,uVar7);
    uVar7 = uVar7 + 1 & 0xff;
  } while (uVar7 < 10);
  return;
}


