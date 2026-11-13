#include "005c079c_005c21acaa.h"



void fn_005c19d0(int param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  return;
}



void fn_005c19c4(int param_1,undefined4 param_2,undefined1 param_3)

{
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined1 *)(param_1 + 0x10) = param_3;
  return;
}



void fn_005c18a8(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0043d350(param_1,param_2,(char *)&DAT_005c1908,0xe7);
  *puVar1 = &DAT_0084a070;
  puVar1[0x41] = &DAT_008593d0;
  *(undefined1 *)(puVar1 + 0x42) = 0;
  *(undefined1 *)((int)puVar1 + 0x109) = 0;
  *(undefined1 *)((int)puVar1 + 0x10a) = 0;
  puVar1[0x43] = 0;
  puVar1[0x44] = 0;
  puVar1[0x45] = 0;
  *(undefined1 *)(puVar1 + 0x46) = 0;
  puVar1[0x47] = 0;
  puVar1[0x48] = 0;
  puVar1[0x49] = 0;
  puVar1[0x4a] = 0;
  puVar1[0x4c] = 0xffffffff;
  puVar1[0x4b] = 0;
  return;
}



undefined1 * fn_005c079c(int *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  bool bVar5;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  puVar1 = (undefined4 *)fn_001f74ec(param_1,0xe7);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00892ee4) goto LAB_005c07ec;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_005c07ec:
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1);
  if (puVar2 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar2)();
    do {
      bVar5 = puVar2 != &DAT_008963ac;
      if (bVar5) {
        puVar2 = (undefined4 *)*puVar2;
      }
    } while (bVar5 && puVar2 != (undefined4 *)0x0);
  }
  if ((param_2 < (*(int *)(param_1[0x47] + 0xc) - *(int *)(param_1[0x47] + 8)) / 0x14) &&
     (-1 < param_2)) {
    fn_00120c70(&local_28);
    iVar4 = *(int *)(param_1[0x47] + 8) + param_2 * 0x14;
    local_28 = *(undefined4 *)(iVar4 + 8);
    uStack_24 = *(undefined4 *)(iVar4 + 0xc);
    uStack_20 = *(undefined4 *)(iVar4 + 0x10);
    fn_0057dce8(puVar1,&local_28);
    return (undefined1 *)&local_28;
  }
  puVar3 = (undefined1 *)fn_0057dcdc(puVar1);
  *puVar3 = 0xff;
  return puVar3;
}


