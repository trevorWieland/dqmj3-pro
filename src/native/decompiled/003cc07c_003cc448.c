#include "003cc07c_003cc448.h"



void fn_003cc448(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x90,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003ccfa4(iVar1,param_1);
  return;
}



undefined4 fn_003cc394(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = fn_001481c8(*(undefined4 *)(param_1 + 0x7c),L"rom:/data/Layout/common/back_ground_u.arc",
                       &DAT_003cc428,1,1);
  *(undefined4 *)(param_1 + 0x80) = uVar1;
  uVar1 = fn_001480d0(*(undefined4 *)(param_1 + 0x7c),uVar1,(char *)&DAT_003cc434,&DAT_003cc430,1,1
                       ,0);
  *(undefined4 *)(param_1 + 0x84) = uVar1;
  uVar1 = fn_001480d0(*(undefined4 *)(param_1 + 0x7c),*(undefined4 *)(param_1 + 0x80),
                       (char *)&DAT_003cc434,&DAT_003cc430,0,1,0);
  *(undefined4 *)(param_1 + 0x88) = uVar1;
  fn_00689930(param_1,0,0);
  return 1;
}



void fn_003cc368(int param_1)

{
  fn_0016a43c(*(undefined4 *)(param_1 + 0x7c),*(undefined4 *)(param_1 + 0x88));
  fn_0016a43c(*(undefined4 *)(param_1 + 0x7c),*(undefined4 *)(param_1 + 0x84));
                    /* WARNING: Subroutine does not return */
  fn_001482f4(*(undefined4 *)(param_1 + 0x7c),*(undefined4 *)(param_1 + 0x80));
}



void fn_003cc328(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)fn_0068ab5c();
  *puVar1 = &DAT_00830cf4;
  uVar2 = *(undefined4 *)(param_2 + 8);
  puVar1[0x1a] = 0xffffffff;
  puVar1[0x19] = uVar2;
  puVar1[0x1b] = 0xffffffff;
  return;
}



undefined4 fn_003cc278(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = fn_001481c8(*(undefined4 *)(param_1 + 100),
                       L"rom:/data/Layout/menu/wifi_ranking_gcup/upper/gcup_select.arc",
                       &DAT_003cc2d4,1,1);
  *(undefined4 *)(param_1 + 0x68) = uVar1;
  uVar1 = fn_001480d0(*(undefined4 *)(param_1 + 100),uVar1,(char *)&DAT_003cc2e0,&DAT_003cc2dc,0,1,0)
  ;
  *(undefined4 *)(param_1 + 0x6c) = uVar1;
  return 1;
}



void fn_003cc1f4(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x70,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003cc224(iVar1,param_1);
  return;
}



void fn_003cc224(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0068ab5c();
  *puVar1 = &DAT_00830be4;
  puVar1[0x19] = *(undefined4 *)(param_2 + 8);
  return;
}



void fn_003cc07c(int param_1)

{
  fn_0016a43c(*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x6c));
                    /* WARNING: Subroutine does not return */
  fn_001482f4(*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x68));
}


