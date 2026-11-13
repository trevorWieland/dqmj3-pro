#include "004204e8_004211b8b.h"



void fn_004211b8(undefined4 *param_1)

{
  *param_1 = &DAT_0083aa9c;
  if (param_1[0x12] != 0) {
    fn_002feef8(param_1[0x12]);
  }
  fn_001f8010(param_1);
  fn_002feef8();
  return;
}



undefined4 * fn_00421148(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_001f7e18();
  *puVar1 = &DAT_0083aa9c;
  puVar1[0x12] = 0;
  puVar1[0x13] = 0;
  puVar1[0x14] = 0;
  fn_0028e434(puVar1[4],&DAT_007d47d0);
  fn_0028e434(puVar1[5],&DAT_007d49ec);
  fn_0028e434(puVar1[3],&DAT_007d4dd4);
  fn_0028e434(puVar1[6],&DAT_007d4e24);
  return puVar1;
}



void fn_004210d8(int param_1)

{
  int iVar1;
  
  fn_001f7a98();
  if ((*(int *)(param_1 + 0x48) == 0) || (iVar1 = fn_002f9da0(), iVar1 == 0)) {
    return;
  }
  if (*(int *)(param_1 + 0x48) != 0) {
    fn_002feef8(*(int *)(param_1 + 0x48));
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  fn_001f748c(param_1,*(undefined4 *)(param_1 + 0x4c),0,1);
  fn_001f7438(param_1,*(undefined4 *)(param_1 + 0x50),0);
  return;
}



void fn_004210b4(undefined4 param_1)

{
  fn_001f7624();
  fn_001f748c(param_1,0xd4,1);
  return;
}



void fn_00421090(undefined4 param_1)

{
  fn_001f7624();
  fn_001f748c(param_1,0xd6,1);
  return;
}



void fn_0042106c(undefined4 param_1)

{
  fn_001f7624();
  fn_001f748c(param_1,0xdb,1);
  return;
}



void fn_00420fe0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0x4c) = param_3;
  *(undefined4 *)(param_1 + 0x50) = param_4;
  iVar1 = fn_00145b00(0x114,&DAT_00812c8c);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = fn_002fa328();
  }
  iVar1 = *(int *)(param_1 + 0x48);
  if (iVar1 != iVar2) {
    if (iVar1 != 0) {
      fn_002feef8(iVar1);
    }
    *(int *)(param_1 + 0x48) = iVar2;
  }
  fn_002f96c4(*(undefined4 *)(param_1 + 0x48),param_2,param_1,0);
  return;
}



void fn_00420fb8(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_001f7350();
  *puVar1 = &DAT_0083aa88;
  return;
}



void fn_00420a4c(undefined4 *param_1)

{
  *param_1 = &DAT_0083aa58;
  if ((int *)param_1[0xc] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xc] + 4))();
  }
  fn_0024ddfc(param_1);
  fn_002feef8();
  return;
}


