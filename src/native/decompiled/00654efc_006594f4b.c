#include "00654efc_006594f4b.h"



void fn_006594f4(int param_1,undefined4 param_2,int param_3)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_3 + 0xd);
  fn_0057481c(param_1 + 0x14,param_3 + 0x14);
  return;
}



void fn_00658bdc(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined *local_18;
  char *local_14;
  
  DAT_008c06dc = 0;
  local_14 = "RootHeap";
  local_18 = &DAT_00859700;
  DAT_008c06d4 = param_1;
  uVar1 = fn_00658974(*param_1,param_1[1],&local_18,0);
  if (DAT_008eef3c < DAT_008eef40) {
    *(undefined4 *)(DAT_008eef44 + DAT_008eef3c * 4) = uVar1;
    DAT_008eef3c = DAT_008eef3c + 1;
  }
  DAT_008c06d0 = &DAT_008c06d8;
  return;
}



int fn_00657a14(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                undefined1 param_5,undefined4 param_6,uint param_7,undefined4 param_8)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  
  puVar1 = (undefined4 *)fn_00659048();
  puVar1[4] = &DAT_00859700;
  puVar1[5] = *(undefined4 *)(param_2 + 4);
  *puVar1 = &DAT_0085992c;
  iVar2 = fn_0065683c(puVar1 + 6);
  *(uint *)(iVar2 + 0x38) = param_7;
  *(undefined4 *)(iVar2 + 0x3c) = 0;
  *(undefined4 *)(iVar2 + 0x40) = 0;
  *(undefined4 *)(iVar2 + 0x48) = 0;
  *(undefined4 *)(iVar2 + 0x4c) = 0;
  *(undefined1 *)(iVar2 + 0x50) = param_5;
  *(undefined4 *)(iVar2 + 0x54) = param_6;
  *(undefined4 *)(iVar2 + 0x58) = 0;
  *(undefined4 *)(iVar2 + 0x5c) = 0;
  *(undefined4 *)(iVar2 + 0x6c) = 0xfffffffe;
  *(undefined4 *)(iVar2 + 0x60) = 0;
  *(int *)(iVar2 + 0x44) = iVar2 + -0x18;
  *(undefined4 *)(iVar2 + 100) = 0;
  *(undefined4 *)(iVar2 + 0x68) = param_4;
  fn_006567d4(iVar2,param_8,param_3);
  iVar3 = fn_00656e14(param_7,param_3);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    uVar4 = 0;
    if (param_7 != 0) {
      do {
        puVar5 = (undefined1 *)(iVar3 + uVar4);
        uVar4 = uVar4 + 1;
        if (puVar5 != (undefined1 *)0x0) {
          *puVar5 = 0;
        }
      } while (uVar4 < param_7);
    }
  }
  *(int *)(iVar2 + 100) = iVar3;
  puVar1 = (undefined4 *)fn_00656e14(8,param_3);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 1;
  }
  *(undefined4 **)(iVar2 + 0x60) = puVar1;
  iVar3 = DAT_008c06e0;
  if (DAT_008c06e0 != 0) {
    iVar7 = *(int *)(iVar2 + 0x48);
    iVar6 = DAT_008c06e0 + 0x14;
    if (iVar7 != 0) {
      *(undefined4 *)(iVar2 + 0x48) = 0;
      fn_00658e3c();
      *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + -1;
    }
    *(int *)(iVar2 + 0x48) = iVar6;
    fn_00658e20(iVar6,iVar2 + 0x3c);
    *(int *)(iVar3 + 0x1c) = *(int *)(iVar3 + 0x1c) + 1;
  }
  return iVar2 + -0x18;
}



int fn_00657950(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_20;
  
  local_20 = param_4;
  puVar1 = (undefined4 *)fn_00659048();
  puVar1[4] = &DAT_00859700;
  puVar1[5] = (char *)&DAT_007ed6b0;
  *puVar1 = &DAT_0085992c;
  iVar2 = fn_0065683c(puVar1 + 6);
  *(undefined4 *)(iVar2 + 0x38) = 0;
  *(undefined4 *)(iVar2 + 0x3c) = 0;
  *(undefined4 *)(iVar2 + 0x40) = 0;
  *(undefined4 *)(iVar2 + 0x44) = 0;
  *(undefined4 *)(iVar2 + 0x48) = 0;
  *(undefined4 *)(iVar2 + 0x4c) = 0;
  *(undefined1 *)(iVar2 + 0x50) = 1;
  *(undefined4 *)(iVar2 + 0x54) = 0x7fffffff;
  *(undefined4 *)(iVar2 + 0x58) = param_4;
  *(undefined4 *)(iVar2 + 0x5c) = 1;
  *(undefined4 **)(iVar2 + 0x60) = param_3;
  *(undefined4 *)(iVar2 + 100) = 0;
  iVar3 = fn_001ad63c(&local_20,*param_3);
  if (iVar3 < 0) {
    fn_0015e294();
  }
  uVar4 = fn_0044fc38(local_20);
  *(undefined4 *)(iVar2 + 0x68) = uVar4;
  *(undefined4 *)(iVar2 + 0x6c) = 0xfffffffe;
  *(int *)(iVar2 + 0x44) = iVar2 + -0x18;
  fn_006567d4(iVar2,0x20,param_2);
  return iVar2 + -0x18;
}



void fn_006577a8(uint param_1,uint param_2)

{
  longlong lVar1;
  
  lVar1 = (ulonglong)param_1 * 3 +
          ((ulonglong)
           (uint)(((int)param_2 >> 0x1f) * -0x452cb512 +
                 (int)((ulonglong)param_2 * 0xbad34aee >> 0x20)) << 0x20 |
          (ulonglong)param_2 * 0xbad34aee & 0xffffffff) +
          CONCAT44(param_2 * 3,(int)((ulonglong)param_1 * 0xbad34aee >> 0x20));
  fn_0012d6a4((int)lVar1,(int)((ulonglong)lVar1 >> 0x20));
  return;
}


