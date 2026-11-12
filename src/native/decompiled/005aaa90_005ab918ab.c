#include "005aaa90_005ab918ab.h"



int fn_005ab500(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = fn_006ba284();
  return iVar1 * 9 + param_2;
}



void fn_005aae84(int param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  uVar2 = fn_005cea40();
  iVar3 = fn_006ba220(param_1,param_2);
  if (iVar3 == 0) {
    uVar1 = *(int *)(param_1 + 0xd0) - *(int *)(param_1 + 0xcc) >> 3;
    if (uVar1 <= uVar2) {
      fn_002ff628(9,&DAT_008c7632,&DAT_008c7632,uVar2,uVar1);
    }
    if (*(char *)(*(int *)(param_1 + 0xcc) + uVar2 * 8 + 3) != '\0') {
      fn_0068ab44(param_1,0x100094d);
      return;
    }
    puVar5 = (undefined4 *)fn_001f74ec(param_1,0xd6);
    if (puVar5 != (undefined4 *)0x0) {
      puVar5 = (undefined4 *)(**(code **)*puVar5)(puVar5);
      do {
        if (puVar5 == &DAT_00890b08) break;
        puVar5 = (undefined4 *)*puVar5;
      } while (puVar5 != (undefined4 *)0x0);
    }
    fn_006ba284(param_1);
                    /* WARNING: Subroutine does not return */
    fn_006ba250(param_1);
  }
  iVar3 = fn_006e9714(param_1);
  if (iVar3 != 0) {
    uVar4 = fn_0022f584((char *)&DAT_005aad7c,0);
    fn_0036c5f4(*(undefined4 *)(param_1 + 0x5c),uVar4,1,0,1,1,0,0,1);
    fn_00689bd0(param_1,0x48,0);
    fn_0068ab44(param_1,0x1000950);
    return;
  }
  puVar5 = (undefined4 *)fn_001f74ec(param_1,0xd6);
  if (puVar5 != (undefined4 *)0x0) {
    puVar5 = (undefined4 *)(**(code **)*puVar5)(puVar5);
    do {
      if (puVar5 == &DAT_00890b08) break;
      puVar5 = (undefined4 *)*puVar5;
    } while (puVar5 != (undefined4 *)0x0);
  }
  fn_006ba284(param_1);
                    /* WARNING: Subroutine does not return */
  fn_006ba250(param_1);
}



void fn_005aae20(undefined4 param_1)

{
  fn_002c3d68();
  fn_006899f4(param_1,0xd5,0,1);
  fn_0068ab44(param_1,0x100094c);
  return;
}



void fn_005aad9c(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = fn_001c80ac(*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x68),
                       (char *)&DAT_005aae08);
  fn_0036c5f4(*(undefined4 *)(param_1 + 0x5c),uVar1,1,1,0,1,0,0,1);
  fn_00689bd0(param_1,0x48,0);
  fn_005cefa0(param_1,2);
  return;
}


