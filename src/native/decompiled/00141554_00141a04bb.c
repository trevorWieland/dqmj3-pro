#include "00141554_00141a04bb.h"



void fn_00141a04(int *param_1)

{
  undefined2 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1[3] + 0xc);
  uVar1 = (**(code **)(*param_1 + 0x7c))();
  fn_001425d8(param_1 + 4,0,*(undefined4 *)(iVar2 + 0x14),*(undefined2 *)(iVar2 + 10),
               *(undefined2 *)(iVar2 + 0x10),*(undefined2 *)(iVar2 + 0x12),uVar1,
               *(undefined4 *)(iVar2 + 4),1);
  return;
}



undefined4 fn_00141980(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (*param_1 != 0) {
    fn_001418e8(param_1);
    fn_00150b24(*param_1,3);
    fn_0013f624(*param_1);
    *param_1 = 0;
  }
  uVar1 = param_2 + 3U & 0xfffffffc;
  if ((uint)(param_2 + param_3) < uVar1) {
    uVar2 = 0;
  }
  else {
    iVar3 = fn_00150df8(uVar1,(param_2 + param_3) - uVar1,0);
    *param_1 = iVar3;
    uVar2 = 0;
    if ((iVar3 != 0) && (iVar3 = fn_0014185c(param_1), uVar2 = 0, iVar3 != 0)) {
      uVar2 = 1;
    }
  }
  return uVar2;
}



void fn_001418e8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = fn_00152780(param_1,0);
  while (*(int *)(param_1 + 4) != 0) {
    iVar3 = *(int *)(param_1 + 0xc);
    if (iVar1 != 0) {
      *(undefined1 *)(iVar3 + 0x14) = 0;
    }
    if (*(char *)(iVar3 + 0x14) != '\0') {
      iVar2 = iVar3 + 0xc;
      while (iVar2 != *(int *)(iVar3 + 0xc)) {
        iVar2 = *(int *)(iVar2 + 4);
        if (*(code **)(iVar2 + 0x10) != (code *)0x0) {
          (**(code **)(iVar2 + 0x10))
                    (*(undefined4 *)(iVar2 + 8),*(undefined4 *)(iVar2 + 0xc),
                     *(undefined4 *)(iVar2 + 0x14));
        }
      }
    }
    fn_00150c68(iVar3 + 8,*(undefined4 *)(iVar3 + 0xc),iVar3 + 0xc);
    fn_0017d90c(param_1 + 4,iVar3);
  }
  return;
}



bool fn_0014185c(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00150d40(*param_1,0x18,4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = puVar1 + 3;
    puVar1[4] = puVar1 + 3;
    *(undefined1 *)(puVar1 + 5) = 1;
    fn_00150c68(puVar1 + 2,puVar1[3],puVar1 + 3);
    fn_0017d948(param_1 + 1,param_1 + 2,puVar1);
  }
  return puVar1 != (undefined4 *)0x0;
}


