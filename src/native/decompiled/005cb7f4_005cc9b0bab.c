#include "005cb7f4_005cc9b0bab.h"



undefined4 fn_005cc404(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = fn_005a56e4(param_1,L"rom:/data/Layout/menu/wifi_ranking_battle/upper/gp_result_list.arc"
                       ,(char *)&DAT_005cc45c);
  fn_005a5dc0(param_1);
  uVar2 = fn_002f7930();
  uVar3 = fn_002f6de0();
  uVar4 = fn_002f65b4();
  fn_005a5f50(param_1,uVar4,uVar3,uVar2);
  fn_005a5ad0(param_1);
  return uVar1;
}



void fn_005cc3dc(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002c4694();
  *puVar1 = &DAT_0084b744;
  return;
}


