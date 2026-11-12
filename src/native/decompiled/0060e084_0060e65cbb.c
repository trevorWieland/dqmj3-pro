#include "0060e084_0060e65cbb.h"



undefined4 fn_0060e65c(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  puVar6 = (undefined4 *)0x0;
  puVar5 = *(undefined4 **)(param_1 + 0x18);
  if (puVar5 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar5)(puVar5);
    do {
      if (puVar1 == &DAT_00898ce0) goto LAB_0060e6a4;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar5 = (undefined4 *)0x0;
LAB_0060e6a4:
  fn_0057481c(param_1 + 0xe4,puVar5 + 5);
  puVar5 = (undefined4 *)fn_001f74d8(param_1,0xdd);
  if (puVar5 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar5)(puVar5);
    do {
      if (puVar1 == &DAT_00898eac) goto LAB_0060e6f4;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar5 = (undefined4 *)0x0;
LAB_0060e6f4:
  fn_0057481c(puVar5 + 10,param_1 + 0xe4);
  puVar5 = (undefined4 *)fn_001f74d8(param_1,0xdd);
  if (puVar5 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar5)(puVar5);
    do {
      if (puVar1 == &DAT_00898eac) goto LAB_0060e744;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar5 = (undefined4 *)0x0;
LAB_0060e744:
  puVar1 = *(undefined4 **)(param_1 + 0x18);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00898ce0) goto LAB_0060e77c;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_0060e77c:
  *(undefined1 *)(puVar5 + 9) = *(undefined1 *)((int)puVar1 + 0xd);
  puVar5 = *(undefined4 **)(param_1 + 0x18);
  if (puVar5 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar5)(puVar5);
    do {
      if (puVar1 == &DAT_00898ce0) goto LAB_0060e7b8;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar5 = (undefined4 *)0x0;
LAB_0060e7b8:
  if (*(char *)((int)puVar5 + 0xd) == '\0') {
    pcVar3 = (char *)&DAT_0060e848;
  }
  else {
    pcVar3 = (char *)&DAT_0060e864;
  }
  uVar4 = fn_0022f584(pcVar3,0);
  puVar5 = (undefined4 *)fn_001f74d8(param_1,0xdd);
  if (puVar5 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar5)(puVar5);
    do {
      if (puVar1 == &DAT_00898eac) {
        puVar6 = puVar5;
        break;
      }
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  fn_0058c9a8(puVar6,uVar4);
  fn_00689efc(param_1,0xdd,0);
  return 1;
}



undefined4 * fn_0060e5c8(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)fn_0028e264();
  *puVar1 = &DAT_0085026c;
  puVar1[2] = 0;
  puVar1[3] = 0;
  iVar2 = fn_006b6494(*(undefined4 *)(DAT_00897804 + 8));
  if (iVar2 < 0x6e) {
    iVar2 = 0x6e;
  }
  puVar1[3] = ((iVar2 + 9) / 10) * 10;
  return puVar1;
}


