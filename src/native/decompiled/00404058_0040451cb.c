#include "00404058_0040451cb.h"



void fn_0040451c(undefined4 param_1)

{
  fn_00313870(param_1,5);
  return;
}



undefined4 fn_004044c0(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  *(byte *)(*(int *)(param_1 + 0x68) + 0x44) = *(byte *)(*(int *)(param_1 + 0x68) + 0x44) & 0xfe | 1
  ;
  do {
    fn_00172c98(*(undefined4 *)(param_1 + 100),(char *)&DAT_007bb684 + uVar1 * 0x40);
    fn_003efd88();
    uVar1 = uVar1 + 1 & 0xffff;
  } while (uVar1 < 2);
  return 1;
}



void fn_00404484(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    iVar1 = fn_001828f0(*(undefined4 *)(param_1 + 100),(&DAT_007bb720)[uVar2]);
    uVar2 = uVar2 + 1;
    *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe;
  } while (uVar2 < 4);
  return;
}



undefined4 *
fn_00404360(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 unaff_r4;
  undefined4 *puVar4;
  undefined4 uVar5;
  
  iVar1 = fn_00145b00(0x68,&DAT_00812c8c);
  if (iVar1 == 0) {
    return (undefined4 *)0x0;
  }
  puVar2 = (undefined4 *)fn_0068ab5c(iVar1,param_1);
  *puVar2 = &DAT_0083792c;
  puVar2[0x19] = 0;
  iVar1 = fn_00145b00(0x40,&DAT_00812c8c);
  uVar5 = 0;
  if (iVar1 != 0) {
    puVar4 = (undefined4 *)puVar2[1];
    uVar5 = puVar2[0x12];
    if (puVar4 != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)(**(code **)*puVar4)(puVar4);
      do {
        if (puVar3 == &DAT_00890360) goto LAB_00404400;
        puVar3 = (undefined4 *)*puVar3;
      } while (puVar3 != (undefined4 *)0x0);
    }
    puVar4 = (undefined4 *)0x0;
LAB_00404400:
    uVar5 = fn_0042260c(iVar1,puVar4,uVar5,param_4,unaff_r4);
  }
  puVar2[0x19] = uVar5;
  return puVar2;
}



undefined4 fn_004042ec(int param_1)

{
  (**(code **)(**(int **)(param_1 + 100) + 0xc))(*(int **)(param_1 + 100),0xffffffff,1);
  (**(code **)(**(int **)(param_1 + 100) + 8))(*(int **)(param_1 + 100),0xffffffff);
  fn_0042253c(*(undefined4 *)(param_1 + 100));
  fn_003cfd6c(*(undefined4 *)(param_1 + 100));
  (**(code **)(**(int **)(param_1 + 100) + 0x18))(*(int **)(param_1 + 100),0,1);
  return 1;
}



void fn_004042bc(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0036c678();
  *puVar1 = &DAT_00837914;
  *(undefined1 *)((int)puVar1 + 0x69) = 0;
  return;
}


