#include "00579dec_0057a4f8aa.h"



undefined1 * fn_00579f68(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_20 [12];
  
  iVar1 = fn_00406e9c();
  uVar2 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),param_2);
  fn_0020bbc4(auStack_20,uVar2);
  iVar3 = fn_0024e350(uVar2);
  if (iVar3 == 0) {
    if (iVar1 == 0) {
      iVar1 = fn_00408118(param_1,param_2);
      if (iVar1 == 0) {
        fn_004082a4(param_1,param_2);
      }
      else {
        fn_00407de0(param_1);
      }
    }
    else {
      fn_00406c48(param_1,iVar1);
    }
  }
  else {
    fn_00407140(param_1);
  }
  return auStack_20;
}



undefined4 fn_00579e40(undefined4 param_1)

{
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined1 local_c;
  
  local_c = 0;
  local_18 = DAT_00890bac;
  uStack_14 = DAT_00890bb0;
  uStack_10 = 0xd5;
  fn_004059f4(param_1,&local_18);
  return 1;
}



undefined4 * fn_00579dec(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = &DAT_008416a4;
  uVar1 = param_1[3];
  uVar2 = uVar1;
  if ((uint)param_1[4] < uVar1) {
    do {
      uVar2 = uVar2 + 4;
    } while (uVar2 != param_1[4]);
  }
  fn_001008c4(uVar1,(int)(param_1[5] - uVar1) >> 2,0);
  return param_1;
}


