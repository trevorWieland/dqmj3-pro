#include "004497e0_0044a5d8bbb.h"



void fn_0044a5d8(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00397a0c();
  puVar1[0x39] = 0;
  *puVar1 = &DAT_0083ef44;
  puVar1[0x3a] = 0;
  *(undefined1 *)(puVar1 + 0x3b) = 0;
  return;
}



void fn_0044a33c(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  if (*(char *)(param_1 + 0xec) == '\0') {
    puVar5 = (undefined4 *)0x0;
    *(int *)(*(int *)(param_1 + 0xe4) + 8) = param_2;
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
      puVar5[3] = 0x20;
      puVar5[4] = 0xe1;
      puVar5[5] = 0xe0;
      fn_006899f4(param_1,0x4e,1);
      *(undefined1 *)(param_1 + 0xec) = 2;
    }
    else if (param_2 == 1) {
      iVar1 = fn_00154ac8(0x93);
      if (iVar1 == 0) {
        *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x38) = 0x100094d;
        uVar4 = fn_0022f584((char *)&DAT_0044a4cc,0);
        fn_0068974c(param_1,uVar4,0,1);
        *(undefined1 *)(param_1 + 0xec) = 1;
        return;
      }
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
      fn_005c19c4(puVar5,0xe1,7);
      fn_006899f4(param_1,0x56,1);
      *(undefined1 *)(param_1 + 0xec) = 2;
      return;
    }
  }
  return;
}


