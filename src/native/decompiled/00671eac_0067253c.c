#include "00671eac_0067253c.h"



undefined4 fn_00672344(int *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint local_20;
  
  iVar1 = param_1[0x12];
  local_20 = param_4;
  if (iVar1 == 0) {
    fn_0066eb80(DAT_00898840,0xb);
    fn_00673f7c();
    (**(code **)(*param_1 + 0x34))(param_1,1);
    return 0;
  }
  if (iVar1 == 1) {
    iVar2 = fn_0066eb80(DAT_00898840,0xb);
    iVar1 = DAT_00898840;
    if ((*(byte *)(iVar2 + 0x4c) & 1) == 0) {
      return 0;
    }
    *(undefined1 *)(param_1 + 0x9e) = *(undefined1 *)(DAT_00898840 + 0x44);
    param_1[0x9f] = param_1[0x156];
    *(char *)((int)param_1 + 0x279) = (char)*(undefined4 *)(iVar1 + 0x38);
    fn_00301a9c(param_1 + 0xa0,(char *)&DAT_007ce986,0x25);
    param_1[0xe0] = 0x25;
    if (*(char *)(DAT_00898840 + 0x5b) == '\x01') {
      param_1[0x312] = 0;
    }
    else if ((code *)param_1[0x312] != (code *)0x0) {
      (*(code *)param_1[0x312])();
    }
    fn_004e7740(param_1 + 0x1c,param_1 + 0x9e);
    *(short *)((int)param_1 + 0x76) = (short)*(undefined4 *)(DAT_00898840 + 0x38);
    fn_004e79ac(param_1 + 0x1c,(char *)&DAT_007ce980,6);
    local_20 = fn_004de2b4(DAT_008bf504,param_1 + 0x9e);
    if ((local_20 & 0x80000000) == 0) {
      (**(code **)(*param_1 + 0x34))(param_1,2);
      return 0;
    }
  }
  else {
    if (iVar1 != 2) {
      if (iVar1 != 3) {
        return 0;
      }
      iVar1 = fn_00673be8(param_1);
      if (iVar1 == 0) {
        (**(code **)(*param_1 + 0x30))(param_1,0);
        return 0;
      }
      return 0;
    }
    iVar1 = fn_004de888(DAT_008bf504);
    if (iVar1 == 0) {
      return 0;
    }
    local_20 = fn_004de848(DAT_008bf504);
    if ((local_20 & 0x80000000) == 0) {
      param_1[0x13] = param_1[0x13] | 0x12;
      (**(code **)(*param_1 + 0x34))(param_1,3);
      return 0;
    }
  }
  fn_0067253c(param_1,param_1 + 0x313,&local_20);
  return 0xffffffff;
}



undefined4 fn_00671eac(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int local_168;
  int iStack_164;
  int iStack_160;
  int iStack_15c;
  int iStack_158;
  int iStack_154;
  int iStack_150;
  int iStack_14c;
  int local_148;
  int iStack_144;
  int local_140;
  int local_13c;
  int iStack_138;
  int local_134;
  int local_130;
  int iStack_12c;
  int local_128;
  int local_124;
  int local_120;
  int iStack_11c;
  int local_118;
  int local_114;
  int iStack_110;
  int local_10c;
  int local_108;
  int iStack_104;
  int local_100;
  int local_fc;
  int local_f8;
  int iStack_f4;
  int local_f0;
  int local_ec;
  int iStack_e8;
  int local_e4;
  int local_e0;
  int iStack_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  int iStack_cc;
  int local_c8;
  int local_c4;
  int iStack_c0;
  int local_bc;
  int local_b8;
  int iStack_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int iStack_a4;
  int local_a0;
  int local_9c;
  int iStack_98;
  int local_94;
  int local_90;
  int iStack_8c;
  int local_88;
  int local_84;
  int local_80;
  int iStack_7c;
  int local_78;
  int local_74;
  int iStack_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int iStack_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int iStack_2c;
  uint local_28;
  
  uVar4 = 0;
  iVar2 = param_1[0x12];
  if (iVar2 == 0) {
    param_1[0x158] = 0;
    param_1[0x13] = param_1[0x13] & 0xfffffffb;
    (**(code **)(*param_1 + 0x34))(param_1,1);
  }
  else if (iVar2 == 1) {
    uVar3 = fn_004dd960(DAT_008bf504,param_1[0x156],*(undefined1 *)(DAT_00898840 + 0x44));
    if ((uVar3 & 0x80000000) == 0) {
      (**(code **)(*param_1 + 0x34))(param_1,2);
    }
  }
  else if (iVar2 == 2) {
    iVar2 = fn_004de850();
    if (iVar2 != 0) {
      local_28 = fn_004de680(DAT_008bf504);
      if ((local_28 & 0x80000000) == 0) {
        param_1[0x157] = 0;
        fn_004de8b8(DAT_008bf504,param_1 + 0x223,param_1 + 0x157,3);
        fn_00101a1c(&local_168,&LAB_00124db8,0x28,8);
        iVar2 = 0;
        uVar3 = 0;
        if (param_1[0x157] != 0) {
          do {
            if (((char)param_1[uVar3 * 0x43 + 0x226] != '\0') &&
               ((*(ushort *)((int)param_1 + uVar3 * 0x10c + 0x8a6) >> 8 & 2) == 0)) {
              fn_0017821c(param_1 + iVar2 * 0x43 + 0x15b,param_1 + uVar3 * 0x43 + 0x224,0x108);
              iVar1 = fn_006d565c(DAT_008bf504,&local_168,8,uVar3);
              if (-1 < iVar1) {
                if ((char)local_168 == '\x01') {
                  param_1[iVar2 * 10 + 0x2ec] = local_168;
                  param_1[iVar2 * 10 + 0x2ed] = iStack_164;
                  param_1[iVar2 * 10 + 0x2ee] = iStack_160;
                  param_1[iVar2 * 10 + 0x2ef] = iStack_15c;
                  param_1[iVar2 * 10 + 0x2f0] = iStack_158;
                  param_1[iVar2 * 10 + 0x2f1] = iStack_154;
                  param_1[iVar2 * 10 + 0x2f2] = iStack_150;
                  param_1[iVar2 * 10 + 0x2f3] = iStack_14c;
                  param_1[iVar2 * 10 + 0x2f4] = local_148;
                  param_1[iVar2 * 10 + 0x2f5] = iStack_144;
                }
                if ((char)local_140 == '\x01') {
                  param_1[iVar2 * 10 + 0x2ec] = local_140;
                  param_1[iVar2 * 10 + 0x2ed] = local_13c;
                  param_1[iVar2 * 10 + 0x2ee] = iStack_138;
                  param_1[iVar2 * 10 + 0x2ef] = local_134;
                  param_1[iVar2 * 10 + 0x2f0] = local_130;
                  param_1[iVar2 * 10 + 0x2f1] = iStack_12c;
                  param_1[iVar2 * 10 + 0x2f2] = local_128;
                  param_1[iVar2 * 10 + 0x2f3] = local_124;
                  param_1[iVar2 * 10 + 0x2f4] = local_120;
                  param_1[iVar2 * 10 + 0x2f5] = iStack_11c;
                }
                if ((char)local_118 == '\x01') {
                  param_1[iVar2 * 10 + 0x2ec] = local_118;
                  param_1[iVar2 * 10 + 0x2ed] = local_114;
                  param_1[iVar2 * 10 + 0x2ee] = iStack_110;
                  param_1[iVar2 * 10 + 0x2ef] = local_10c;
                  param_1[iVar2 * 10 + 0x2f0] = local_108;
                  param_1[iVar2 * 10 + 0x2f1] = iStack_104;
                  param_1[iVar2 * 10 + 0x2f2] = local_100;
                  param_1[iVar2 * 10 + 0x2f3] = local_fc;
                  param_1[iVar2 * 10 + 0x2f4] = local_f8;
                  param_1[iVar2 * 10 + 0x2f5] = iStack_f4;
                }
                if ((char)local_f0 == '\x01') {
                  param_1[iVar2 * 10 + 0x2ec] = local_f0;
                  param_1[iVar2 * 10 + 0x2ed] = local_ec;
                  param_1[iVar2 * 10 + 0x2ee] = iStack_e8;
                  param_1[iVar2 * 10 + 0x2ef] = local_e4;
                  param_1[iVar2 * 10 + 0x2f0] = local_e0;
                  param_1[iVar2 * 10 + 0x2f1] = iStack_dc;
                  param_1[iVar2 * 10 + 0x2f2] = local_d8;
                  param_1[iVar2 * 10 + 0x2f3] = local_d4;
                  param_1[iVar2 * 10 + 0x2f4] = local_d0;
                  param_1[iVar2 * 10 + 0x2f5] = iStack_cc;
                }
                if ((char)local_c8 == '\x01') {
                  param_1[iVar2 * 10 + 0x2ec] = local_c8;
                  param_1[iVar2 * 10 + 0x2ed] = local_c4;
                  param_1[iVar2 * 10 + 0x2ee] = iStack_c0;
                  param_1[iVar2 * 10 + 0x2ef] = local_bc;
                  param_1[iVar2 * 10 + 0x2f0] = local_b8;
                  param_1[iVar2 * 10 + 0x2f1] = iStack_b4;
                  param_1[iVar2 * 10 + 0x2f2] = local_b0;
                  param_1[iVar2 * 10 + 0x2f3] = local_ac;
                  param_1[iVar2 * 10 + 0x2f4] = local_a8;
                  param_1[iVar2 * 10 + 0x2f5] = iStack_a4;
                }
                if ((char)local_a0 == '\x01') {
                  param_1[iVar2 * 10 + 0x2ec] = local_a0;
                  param_1[iVar2 * 10 + 0x2ed] = local_9c;
                  param_1[iVar2 * 10 + 0x2ee] = iStack_98;
                  param_1[iVar2 * 10 + 0x2ef] = local_94;
                  param_1[iVar2 * 10 + 0x2f0] = local_90;
                  param_1[iVar2 * 10 + 0x2f1] = iStack_8c;
                  param_1[iVar2 * 10 + 0x2f2] = local_88;
                  param_1[iVar2 * 10 + 0x2f3] = local_84;
                  param_1[iVar2 * 10 + 0x2f4] = local_80;
                  param_1[iVar2 * 10 + 0x2f5] = iStack_7c;
                }
                if ((char)local_78 == '\x01') {
                  param_1[iVar2 * 10 + 0x2ec] = local_78;
                  param_1[iVar2 * 10 + 0x2ed] = local_74;
                  param_1[iVar2 * 10 + 0x2ee] = iStack_70;
                  param_1[iVar2 * 10 + 0x2ef] = local_6c;
                  param_1[iVar2 * 10 + 0x2f0] = local_68;
                  param_1[iVar2 * 10 + 0x2f1] = local_64;
                  param_1[iVar2 * 10 + 0x2f2] = local_60;
                  param_1[iVar2 * 10 + 0x2f3] = local_5c;
                  param_1[iVar2 * 10 + 0x2f4] = local_58;
                  param_1[iVar2 * 10 + 0x2f5] = iStack_54;
                }
                if ((char)local_50 == '\x01') {
                  param_1[iVar2 * 10 + 0x2ec] = local_50;
                  param_1[iVar2 * 10 + 0x2ed] = local_4c;
                  param_1[iVar2 * 10 + 0x2ee] = local_48;
                  param_1[iVar2 * 10 + 0x2ef] = local_44;
                  param_1[iVar2 * 10 + 0x2f0] = local_40;
                  param_1[iVar2 * 10 + 0x2f1] = local_3c;
                  param_1[iVar2 * 10 + 0x2f2] = local_38;
                  param_1[iVar2 * 10 + 0x2f3] = local_34;
                  param_1[iVar2 * 10 + 0x2f4] = local_30;
                  param_1[iVar2 * 10 + 0x2f5] = iStack_2c;
                }
              }
              iVar2 = iVar2 + 1;
            }
            uVar3 = uVar3 + 1;
          } while (uVar3 < (uint)param_1[0x157]);
        }
        param_1[0x157] = iVar2;
        if (iVar2 == 0) {
          iVar2 = param_1[0x158];
          param_1[0x158] = iVar2 + 1U;
          if (((char)param_1[0x159] == '\0') && (iVar2 + 1U < 0xb)) {
            return 0;
          }
        }
        param_1[0x13] = param_1[0x13] | 4;
        (**(code **)(*param_1 + 0x34))(param_1,3);
      }
      else {
        fn_0067253c(param_1,param_1 + 0x313,&local_28);
        uVar4 = 0xffffffff;
      }
    }
  }
  else if ((iVar2 == 3) && (iVar2 = fn_00673be8(param_1), iVar2 == 0)) {
    (**(code **)(*param_1 + 0x30))(param_1,0);
  }
  return uVar4;
}



void fn_0067253c(undefined4 param_1,undefined4 *param_2,int *param_3)

{
  undefined4 uVar1;
  
  param_2[1] = 0;
  *(undefined1 *)(param_2 + 2) = 0;
  *param_2 = 0x88888888;
  if (*param_3 == -0x275eb793) {
    uVar1 = 9;
  }
  else {
    if (*param_3 != -0x275eb798) {
      param_2[1] = 1;
      goto LAB_00672580;
    }
    uVar1 = 8;
  }
  param_2[1] = uVar1;
LAB_00672580:
  *(undefined1 *)(param_2 + 2) = 1;
  return;
}


