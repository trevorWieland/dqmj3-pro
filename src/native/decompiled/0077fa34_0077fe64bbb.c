#include "0077fa34_0077fe64bbb.h"



int fn_0077fe64(undefined4 param_1,int *param_2,undefined4 *param_3,int *param_4,int param_5,
                int param_6)

{
  short *psVar1;
  short *psVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  short *psVar6;
  short *local_a8;
  int local_a4;
  short *local_a0;
  short *local_9c;
  undefined1 auStack_98 [4];
  short *local_94;
  undefined4 *local_90;
  int local_7c;
  short *psStack_78;
  undefined1 *local_74;
  short **local_70;
  undefined1 auStack_68 [16];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  short *local_48;
  int local_44;
  undefined1 auStack_40 [12];
  undefined4 local_34;
  int *piStack_30;
  undefined4 *local_2c;
  int *piStack_28;
  
  local_34 = param_1;
  piStack_30 = param_2;
  local_2c = param_3;
  piStack_28 = param_4;
  fn_004544cc(auStack_68);
  iVar4 = fn_004543a8(auStack_68,param_6);
  if (iVar4 < 0) {
    return iVar4;
  }
  psVar6 = (short *)0x0;
  local_74 = auStack_68;
  local_4c = local_34;
  local_90 = local_2c;
  local_9c = (short *)0x0;
  local_a8 = (short *)0x0;
  iVar4 = fn_00454414(local_74,&local_a4);
  if (-1 < iVar4) {
    iVar4 = fn_00780224(local_4c,&local_9c,&local_58,&local_a8);
    while (-1 < iVar4) {
      local_94 = local_9c;
      while( true ) {
        while( true ) {
          psVar2 = local_a0;
          iVar5 = local_a4;
          psVar1 = local_a8;
          if (local_74[0xc] != '\0') {
            *param_2 = (int)local_a8;
            param_2[1] = local_a4;
            param_2[2] = (int)local_a0;
            *local_90 = local_58;
            local_90[1] = uStack_54;
            local_90[2] = uStack_50;
            iVar4 = 0;
            psVar6 = local_94;
            goto LAB_0077ff28;
          }
          iVar4 = fn_00454414(local_74,&local_a4);
          uVar3 = local_4c;
          if (iVar4 < 0) goto LAB_0077ff28;
          if ((local_a4 != 1) || (*local_a0 != 0x2e)) break;
          local_a8 = psVar1;
          local_a4 = iVar5;
          local_a0 = psVar2;
        }
        if ((local_a4 != 2) || ((*local_a0 != 0x2e || (local_a0[1] != 0x2e)))) break;
        if (local_94 == (short *)0x0) {
          iVar4 = -0x1f3fb8fe;
          goto LAB_0077ff28;
        }
        local_70 = &local_94;
        local_44 = param_6;
        local_7c = local_a4;
        psStack_78 = local_a0;
        iVar4 = fn_0077fba0(local_4c,&local_48,auStack_40,0,0,local_a8);
        if (-1 < iVar4) {
          local_a8 = local_48;
          iVar4 = fn_004544e4(&local_a4,&local_7c,local_44);
          if ((-1 < iVar4) && (iVar4 = fn_00780224(uVar3,local_70,&local_58,&local_a8), -1 < iVar4)
             ) {
            iVar4 = 0;
          }
        }
        if (iVar4 < 0) goto LAB_0077ff28;
      }
      local_a8 = local_94;
      iVar4 = fn_00780224(local_4c,&local_9c,&local_58,&local_a8);
    }
  }
LAB_0077ff28:
  if (iVar4 < 0) {
    return iVar4;
  }
  if (param_5 == 0) {
    iVar4 = fn_006d01b0(auStack_68);
    if (iVar4 != 0) {
      return -0x1f3fb8fe;
    }
    *param_4 = (int)psVar6;
    iVar4 = fn_006d0180(auStack_68,param_4 + 1);
  }
  else {
    iVar4 = fn_006d0204(auStack_68,&local_a0);
    if (iVar4 < 0) {
      return iVar4;
    }
    if (local_a0 == (short *)&DAT_00000001) {
      if (*local_9c != 0x2e) goto LAB_00780144;
      local_a8 = (short *)param_2[2];
      iVar4 = *param_2;
      iVar5 = param_2[1];
      param_4[2] = (int)local_a8;
      *param_4 = iVar4;
      param_4[1] = iVar5;
      if (iVar4 == 0) {
        return 0;
      }
      local_a4 = param_6;
      iVar4 = fn_0077fdd8(local_34,auStack_98,param_2,local_2c,iVar4,iVar5);
    }
    else {
      if (((local_a0 != (short *)0x2) || (*local_9c != 0x2e)) || (local_9c[1] != 0x2e)) {
LAB_00780144:
        param_4[1] = (int)local_a0;
        param_4[2] = (int)local_9c;
        if (local_a0 == (short *)0x0) {
          psVar6 = (short *)0x0;
        }
        *param_4 = (int)psVar6;
        return 0;
      }
      if (psVar6 == (short *)0x0) {
        return -0x1f3fb8fe;
      }
      local_a4 = param_6;
      local_a8 = (short *)param_2[2];
      iVar4 = fn_0077fdd8(local_34,auStack_98,param_4,&local_94,*param_2,param_2[1]);
      if (iVar4 < 0) {
        return iVar4;
      }
      if (*param_4 == 0) {
        return 0;
      }
      local_a4 = param_6;
      local_a8 = (short *)param_4[2];
      iVar4 = fn_0077fdd8(local_34,auStack_98,param_2,local_2c,*param_4,param_4[1]);
    }
  }
  if (iVar4 < 0) {
    return iVar4;
  }
  return 0;
}


