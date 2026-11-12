#include "single_001fb28c_r.h"


extern undefined4 u_rom__data_Race_Obj_o_rac_18_Null_008c3dfc;

bool fn_001fb28c(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 local_b0;
  undefined4 local_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [32];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  
  puVar4 = (undefined4 *)*param_1;
  uVar1 = fn_00118290();
  uVar1 = fn_0011c184(u_rom__data_Race_Obj_o_rac_18_Null_008c3dfc,uVar1,4,5);
  iVar2 = fn_00145ac0();
  if (iVar2 != 0) {
    uVar3 = fn_00145ac0(uVar1);
    fn_00692e98(auStack_68,uVar3);
    fn_00183718(&local_e8,auStack_68,s_entrance_008c3e46);
    local_a4 = local_e8;
    uStack_a0 = uStack_e4;
    uStack_9c = uStack_e0;
    uStack_98 = uStack_dc;
    uStack_94 = uStack_d8;
    uStack_90 = uStack_d4;
    uStack_8c = uStack_d0;
    fn_00176ec8(&local_e8,&uStack_a0,0);
    fn_0017821c(auStack_60,&local_e8,0x44);
    *puVar4 = local_40;
    puVar4[1] = uStack_3c;
    puVar4[2] = uStack_38;
    fn_00183718(&local_e8,auStack_68,&DAT_008c3e4f);
    local_88 = local_e8;
    uStack_84 = uStack_e4;
    uStack_80 = uStack_e0;
    uStack_7c = uStack_dc;
    uStack_78 = uStack_d8;
    uStack_74 = uStack_d4;
    uStack_70 = uStack_d0;
    fn_00176ec8(auStack_60,&uStack_84,0);
    fn_0017821c(&local_e8,auStack_60,0x44);
    puVar4[3] = local_b0;
  }
  fn_0012d73c(uVar1);
  return iVar2 != 0;
}


