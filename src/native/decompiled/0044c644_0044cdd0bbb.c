#include "0044c644_0044cdd0bbb.h"



int fn_0044cdd0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_18 [12];
  int *local_c;
  
  fn_0044cc30(auStack_18,0,param_2);
  iVar1 = fn_0044e084(&local_c,auStack_18);
  if (-1 < iVar1) {
    iVar2 = fn_001233c4(param_1,local_c,0);
    iVar1 = 0;
    if (iVar2 < 0) {
      (**(code **)(*local_c + 0x30))();
      iVar1 = iVar2;
    }
  }
  return iVar1;
}



undefined1 * fn_0044cccc(uint param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  int *piVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined4 *local_38;
  undefined4 uStack_34;
  int local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  uint local_20;
  undefined4 *local_1c;
  
  local_20 = param_1 & 0xffffff00 | param_4;
  local_38 = &local_28;
  local_1c = DAT_0089a670;
  uStack_34 = 0xc;
  local_28 = param_2;
  uStack_24 = param_3;
  puVar4 = (undefined1 *)fn_0044e2a4(&local_1c,&local_30,0x567890b4,2);
  iVar3 = iStack_2c;
  iVar2 = local_30;
  puVar1 = DAT_0089a670;
  if (-1 < (int)puVar4) {
    uVar7 = fn_001587b0(&DAT_008e33ac);
    puVar6 = (undefined *)((ulonglong)uVar7 >> 0x20);
    piVar5 = (int *)uVar7;
    if (piVar5 == (int *)0x0) {
      puVar4 = &DAT_d8604659;
    }
    else {
      puVar6 = &DAT_0085251c;
      *piVar5 = (int)&DAT_0085251c;
      piVar5[2] = iVar2;
      piVar5[3] = iVar3;
      puVar4 = (undefined1 *)0x0;
      piVar5[1] = (int)puVar1;
    }
    if ((int)puVar4 < 0) {
      local_38 = DAT_0089a670;
      fn_0044e304(&local_38,puVar6,local_30,iStack_2c);
    }
    else {
      puVar4 = (undefined1 *)fn_001233c4(param_1,piVar5,0);
      if ((int)puVar4 < 0) {
        (**(code **)(*piVar5 + 0x30))(piVar5);
      }
    }
  }
  return puVar4;
}


