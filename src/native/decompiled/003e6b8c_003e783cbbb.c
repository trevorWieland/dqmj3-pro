#include "003e6b8c_003e783cbbb.h"



void fn_003e783c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00397a0c();
  puVar1[0x39] = 0;
  *puVar1 = &DAT_008334c4;
  *(undefined1 *)(puVar1 + 0x3a) = 0;
  return;
}



void fn_003e75b8(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  if (*(char *)(param_1 + 0xe8) == '\0') {
    puVar5 = (undefined4 *)0x0;
    if (param_2 == 0) {
      fn_0068ab44(param_1,0x100094b);
      puVar2 = (undefined4 *)fn_001f74ec(param_1,0x4e);
      if (puVar2 != (undefined4 *)0x0) {
        puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
        do {
          if (puVar3 == &DAT_00894694) {
            puVar5 = puVar2;
            break;
          }
          puVar3 = (undefined4 *)*puVar3;
        } while (puVar3 != (undefined4 *)0x0);
      }
      puVar5[3] = 0x10;
      puVar5[4] = 0xf1;
      puVar5[5] = 0xef;
      fn_006899f4(param_1,0x4e,1);
      *(undefined1 *)(param_1 + 0xe8) = 2;
    }
    else if (param_2 == 1) {
      iVar1 = fn_00154ac8(0x93);
      if (iVar1 == 0) {
        *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x38) = 0x100094d;
        uVar4 = fn_0022f584((char *)&DAT_003e775c,0);
        fn_0068974c(param_1,uVar4,0,1);
        *(undefined1 *)(param_1 + 0xe8) = 1;
      }
      else {
        fn_0068ab44(param_1,0x100094b);
        puVar2 = (undefined4 *)fn_001f74ec(param_1,0x56);
        if (puVar2 != (undefined4 *)0x0) {
          puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
          do {
            if (puVar3 == &DAT_00894498) {
              puVar5 = puVar2;
              break;
            }
            puVar3 = (undefined4 *)*puVar3;
          } while (puVar3 != (undefined4 *)0x0);
        }
        fn_005c19c4(puVar5,0xf1,6);
        fn_006899f4(param_1,0x56,1);
        *(undefined1 *)(param_1 + 0xe8) = 2;
      }
    }
    *(int *)(*(int *)(param_1 + 0xe4) + 8) = param_2;
  }
  return;
}


