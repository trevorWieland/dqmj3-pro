#include "00424a1c_0042636cb.h"



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_0042636c(undefined4 param_1,short param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 local_28;
  undefined4 local_24 [2];
  
  uVar1 = fn_0022f584((char *)&DAT_0042640c,0);
  uVar2 = _DAT_00891cf4;
  fn_00580cb8(param_1,0,uVar1);
  local_24[0] = uVar2;
  fn_003981d4(param_1,0,local_24);
  fn_006cdb0c(&local_28,param_1,(int)param_2,param_3);
  uVar1 = _DAT_00891cf4;
  fn_00580cb8(param_1,3,local_28);
  local_24[0] = uVar1;
  fn_003981d4(param_1,3,local_24);
  fn_001588d4(&local_28);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_00425c04(undefined4 param_1,short param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  iVar2 = (int)param_2;
  cVar1 = fn_0068f708(iVar2,param_3);
  uVar3 = fn_0022f584((char *)&DAT_00425d4c,0);
  uVar5 = _DAT_00891cd8;
  fn_00580cb8(param_1,0,uVar3);
  local_2c = uVar5;
  fn_003981d4(param_1,0,&local_2c);
  iVar4 = fn_0068f85c(iVar2,cVar1 + '\x01');
  uVar3 = _DAT_00891cd8;
  local_28 = 0;
  local_24 = 0;
  fn_00101a50(&local_28,4,&DAT_004254dc,iVar4 - param_3);
  fn_00580cb8(param_1,1,&local_28);
  local_2c = uVar3;
  fn_003981d4(param_1,1,&local_2c);
  uVar3 = fn_0022f584((char *)&DAT_00425d74,0);
  uVar5 = _DAT_00891cd8;
  fn_00580cb8(param_1,2,uVar3);
  local_2c = uVar5;
  fn_003981d4(param_1,2,&local_2c);
  fn_006cdb0c(&local_30,param_1,iVar2,cVar1 + '\x01');
  uVar3 = _DAT_00891cd8;
  fn_00580cb8(param_1,3,local_30);
  local_2c = uVar3;
  fn_003981d4(param_1,3,&local_2c);
  fn_001588d4(&local_30);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_00425b98(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 local_18;
  
  local_18 = param_4;
  uVar1 = fn_0022f584((char *)&DAT_00425be0,0);
  uVar2 = _DAT_00891cd8;
  fn_00580cb8(param_1,0,uVar1);
  local_18 = uVar2;
  fn_003981d4(param_1,0,&local_18);
  return;
}



void fn_004254e4(int param_1,undefined4 param_2,short param_3,undefined4 param_4)

{
  int iVar1;
  short *psVar2;
  uint uVar3;
  int iVar4;
  undefined4 *unaff_r8;
  short local_20;
  undefined2 local_1e;
  undefined4 local_1c;
  
  local_1e = (undefined2)param_4;
  local_20 = param_3;
  fn_005b73e8(*(undefined4 *)(param_1 + 0xf8),param_2,&local_20);
  iVar1 = fn_006ba284(param_1);
  if (iVar1 < 1) {
    fn_00231410(&local_1c,(int)param_3,param_4);
    fn_0031b78c(param_1,param_2,0,local_1c);
    iVar1 = fn_006ba284(param_1);
    if (iVar1 < 1) {
      fn_002c3df8(param_1,param_2,4,param_4);
    }
    fn_001588d4(&local_1c);
  }
  iVar1 = fn_006e8d10(*(undefined4 *)(param_1 + 0xf8));
  if (0 < iVar1) {
    unaff_r8 = &DAT_00891cc4;
  }
  iVar4 = 0;
  if (0 < iVar1) {
    do {
      if (*(int *)(param_1 + 0x100) == iVar4) {
LAB_004255f8:
        local_1c = unaff_r8[5];
        fn_002c37e0(param_1,iVar4,&local_1c);
      }
      else {
        if (*(short *)(*(int *)(param_1 + 0xf8) + 0x4a) != 0) {
          psVar2 = (short *)fn_006e8d04(*(undefined4 *)(param_1 + 0xf8),iVar4);
          uVar3 = fn_0068f6a8((int)*psVar2);
          if ((ushort)psVar2[1] < uVar3) goto LAB_004255f8;
        }
        local_1c = unaff_r8[7];
        fn_002c37e0(param_1,iVar4,&local_1c);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  return;
}



void fn_00424ee0(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x104) + 0x14))();
  if (*(int **)(param_1 + 0x104) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x104) + 4))();
    *(undefined4 *)(param_1 + 0x104) = 0;
  }
  fn_005b73f8(*(undefined4 *)(param_1 + 0xf8));
  fn_0039834c(param_1);
  return;
}



void fn_00424eac(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00385b88();
  puVar1[0x27] = 0;
  *puVar1 = &DAT_0083b18c;
  puVar1[0x28] = 0;
  return;
}


