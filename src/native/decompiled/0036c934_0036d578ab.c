#include "0036c934_0036d578ab.h"



void fn_0036cd84(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xc4,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0036cecc(iVar1,param_1);
  return;
}



undefined4 fn_0036cc28(int *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  uint uVar6;
  
  puVar5 = (undefined4 *)param_1[6];
  if (puVar5 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar5)(puVar5);
    do {
      if (puVar2 == &DAT_008942e8) goto LAB_0036cc74;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar5 = (undefined4 *)0x0;
LAB_0036cc74:
  param_1[0x2c] = (int)puVar5;
  iVar3 = fn_001481c8(param_1[0x19],L"rom:/data/Layout/common/help_window.arc",&DAT_0036cd70,1,1);
  param_1[0x1a] = iVar3;
  iVar3 = fn_001480d0(param_1[0x19],iVar3,(char *)&DAT_008648e0,&DAT_0036cd78,1,1,0);
  param_1[0x1b] = iVar3;
  uVar4 = fn_00178f9c(param_1[0x19],iVar3);
  fn_00229fec(param_1,uVar4);
  iVar3 = param_1[0x2c];
  param_1[0x2d] = *(int *)(iVar3 + 0x20) - *(int *)(iVar3 + 0x1c) >> 2;
  uVar6 = param_1[0x2e];
  uVar1 = *(int *)(iVar3 + 0x20) - *(int *)(iVar3 + 0x1c) >> 2;
  if (uVar1 <= uVar6) {
    fn_002ff628(9,&DAT_008c7662,&DAT_008c7662,uVar6,uVar1);
  }
  puVar5 = *(undefined4 **)(*(int *)(iVar3 + 0x1c) + uVar6 * 4);
  fn_00190d50(param_1[0x1f],*puVar5);
  fn_00190d50(param_1[0x21],puVar5[1]);
  (**(code **)(*param_1 + 0x108))(param_1,puVar5[2]);
  return 1;
}



void fn_0036cbf8(int param_1)

{
  fn_0016a43c(*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x6c));
  *(undefined4 *)(param_1 + 0x6c) = 0xffffffff;
                    /* WARNING: Subroutine does not return */
  fn_001482f4(*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x68));
}


