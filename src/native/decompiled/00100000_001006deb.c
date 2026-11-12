#include "00100000_001006deb.h"



int fn_001006de(ushort *param_1,ushort *param_2,int param_3)

{
  while( true ) {
    if (param_3 == 0) {
      return 0;
    }
    if ((uint)*param_1 != (uint)*param_2) break;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
    param_3 = param_3 + -1;
  }
  return (uint)*param_1 - (uint)*param_2;
}



void fn_001006ac(undefined4 param_1,undefined4 param_2,int param_3)

{
  fn_00147f60(param_1,param_2,param_3 << 1);
  return;
}



void fn_00100654(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    fn_00100414(param_1,param_2,*(undefined4 *)(param_1 + -8),*(undefined4 *)(param_1 + -4));
  }
  return;
}



void fn_00100648(undefined4 *param_1)

{
  *param_1 = &DAT_0085ad78;
  return;
}



undefined4 fn_001004d8(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int local_50;
  undefined4 local_4c;
  int local_48;
  undefined1 auStack_44 [4];
  int local_40;
  undefined *local_3c;
  undefined4 *local_38;
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [8];
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  
  local_24 = param_1;
  local_20 = param_2;
  local_1c = param_3;
  local_18 = param_4;
  if (DAT_008c3d84 == (char *)0x0) {
    puVar2 = (undefined1 *)fn_00100744(s_rwstderr_1_008c3d90,0x3a);
    if (puVar2 != (undefined1 *)0x0) {
      *puVar2 = 0;
      iVar3 = fn_00100704(puVar2 + 1,&DAT_00100634,&DAT_008c3d88);
      if ((iVar3 != 1) || (DAT_008c3d88 < 1)) {
        DAT_008c3d88 = 1;
      }
    }
    local_38 = &DAT_008f9c80;
    DAT_008f9c84 = 0x200;
    DAT_008f9c88 = 0;
    DAT_008f9c8c = 0;
    DAT_008f9c80 = &DAT_0085aa34;
    local_3c = &DAT_008f9c90;
    uVar4 = fn_002fed80(&local_40,&DAT_008c7676,auStack_2c);
    iVar3 = fn_002fedb8(local_3c,uVar4);
    fn_002fedf4(&local_40);
    *(undefined ***)(iVar3 + -0x10) = &PTR_FUN_00104130_1_0085ad38;
    uVar4 = fn_002fed80(&local_4c,s_rwstderr_1_008c3d90,auStack_30);
    uVar5 = fn_002feeb0(&local_50);
    DAT_008c3d8c = (**(code **)(DAT_008f9c80 + 0xc))(&DAT_008f9c80,uVar4,uVar5);
    if ((local_50 != 0) &&
       (iVar3 = *(int *)(local_50 + 0x1c) + -1, *(int *)(local_50 + 0x1c) = iVar3, iVar3 == 0)) {
      fn_002feca8(*(undefined4 *)(local_50 + 0x18));
      fn_002feca8(*(undefined4 *)(local_50 + 8));
      fn_002feed4(local_50);
      fn_002feef8();
    }
    fn_002fedf4(&local_4c);
    DAT_008c3d84 = s_rwstderr_1_008c3d90;
  }
  iVar1 = local_1c;
  iVar3 = DAT_008c3d88;
  if (DAT_008c3d8c != -1) {
    local_40 = DAT_008c3d8c;
    local_4c = fn_002fed80(auStack_44,"",auStack_34);
    local_50 = iVar1;
    (**(code **)(DAT_008f9c80 + 0x10))(&local_48,&DAT_008f9c80,local_40,iVar3);
    fn_002fedf4(auStack_44);
    if (*(int *)(local_48 + -4) != 0) {
      uVar4 = fn_002feb78(local_24,local_20,local_48,local_18);
      fn_002fedf4(&local_48);
      return uVar4;
    }
    fn_002fedf4(&local_48);
  }
  return 0;
}



/* WARNING: Removing unreachable block (ram,0x001004be) */

undefined4 * fn_0010048a(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)fn_00156fd8();
  puVar2 = (undefined4 *)*puVar1;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)fn_002fecec(0x20);
    if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      fn_00146590();
    }
    *puVar1 = puVar2;
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = &DAT_00100485;
    *(undefined1 *)(puVar2 + 3) = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
  }
  return puVar2;
}



void fn_00100438(void)

{
  fn_00100440();
  return;
}



void fn_00100440(void)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)fn_002fecec(0x88);
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = 0;
  }
  return;
}



int fn_00100414(int param_1,code *param_2,int param_3,int param_4)

{
  int iVar1;
  
  if (param_4 != 0) {
    iVar1 = param_4 * param_3 + param_1;
    do {
      iVar1 = iVar1 - param_3;
      (*param_2)(iVar1);
    } while (param_1 != iVar1);
  }
  return param_1 + -8;
}


