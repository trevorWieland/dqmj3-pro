#include "002487f4_00249088.h"



void fn_00249088(undefined4 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 in_d8;
  undefined4 uVar4;
  undefined8 in_d9;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  uint local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 auStack_38 [32];
  
  fn_001028d4(auStack_38,(char *)&DAT_00249178);
  fn_00247eb8(&local_44,param_1,&DAT_00249180,auStack_38);
  local_78 = local_44;
  uStack_74 = uStack_40;
  uStack_70 = uStack_3c;
  (**(code **)(*param_2 + 0x1c))(param_2);
  fn_00183718(&local_6c,param_1,&DAT_00249180);
  uVar4 = (undefined4)in_d9;
  local_8c = local_58;
  uStack_88 = uStack_54;
  uStack_9c = uStack_68;
  uStack_98 = uStack_64;
  uStack_94 = uStack_60;
  uStack_90 = uStack_5c;
  uVar3 = 0;
  if (local_6c != 0) {
    do {
      iVar1 = fn_006f6e30(&uStack_9c,uVar3);
      iVar2 = fn_003035b0(iVar1,auStack_38);
      uVar4 = (undefined4)in_d9;
      if (iVar2 == 0) {
        in_d8 = *(undefined8 *)(iVar1 + 0x2c);
        uVar4 = *(undefined4 *)(iVar1 + 0x34);
        break;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < local_6c);
  }
  local_78 = (undefined4)in_d8;
  uStack_74 = (undefined4)((ulonglong)in_d8 >> 0x20);
  uStack_70 = uVar4;
  (**(code **)(*param_2 + 0x24))(param_2);
  return;
}



undefined4 fn_00248f44(int *param_1,uint *param_2,int *param_3,int *param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar4 = 0;
  iVar6 = 0;
  if (0 < param_5) {
    do {
      uVar1 = *param_2;
      uVar3 = 0;
      if (uVar1 != 0) {
        do {
          if (((*(char *)(*param_3 + uVar3) == '\0') && (*(char *)(*param_1 + uVar3) == '\0')) &&
             (*(char *)(*param_4 + uVar3) == '\0')) break;
          uVar3 = uVar3 + 1;
        } while (uVar3 < uVar1);
      }
      if (uVar1 == uVar3) {
        return 0;
      }
      iVar2 = fn_00163868(uVar1 - iVar6);
      iVar2 = iVar2 + 1;
      iVar5 = 1;
      if (0 < iVar2) {
        iVar7 = *param_3;
        uVar1 = *param_2;
        do {
          fn_00169f1c(iVar4 + iVar5,uVar1);
          if (((*(char *)(iVar7 + extraout_r1) == '\0') &&
              (*(char *)(*param_1 + extraout_r1) == '\0')) &&
             (*(char *)(*param_4 + extraout_r1) == '\0')) {
            iVar5 = iVar5 + 1;
          }
          else {
            fn_00169f1c(iVar4 + 1,uVar1);
            iVar4 = extraout_r1_00;
          }
        } while (iVar5 <= iVar2);
      }
      fn_00169f1c(iVar4 + iVar2,*param_2);
      iVar6 = iVar6 + 1;
      *(undefined1 *)(*param_1 + extraout_r1_01) = 1;
      iVar4 = extraout_r1_01;
    } while (iVar6 < param_5);
  }
  return 1;
}



int * fn_00248898(undefined4 param_1,undefined4 param_2,int param_3,short *param_4,uint param_5,
                  int param_6,uint param_7,int param_8,undefined4 param_9,undefined4 *param_10,
                  undefined4 *param_11,undefined4 *param_12,int param_13)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  int *local_e4;
  int local_e0;
  undefined4 *local_dc;
  undefined4 *local_d8;
  undefined4 *local_d4;
  undefined4 *local_d0;
  undefined4 local_cc;
  int local_c8;
  undefined4 local_c4;
  undefined4 local_c0 [12];
  undefined4 local_90;
  int *local_8c;
  undefined4 local_88 [12];
  int local_58;
  undefined4 local_54;
  undefined1 auStack_50 [8];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  uVar8 = 0x42c8000000000000;
  if (param_3 == 0) {
    local_d8 = (undefined4 *)0x0;
    local_d4 = (undefined4 *)0x0;
    local_d0 = (undefined4 *)0x0;
    local_e4 = (int *)0x0;
    local_e0 = 0x42c80000;
    local_dc = (undefined4 *)0x0;
    piVar4 = (int *)fn_00249adc(param_1,param_2,&local_e4,&local_d8,(int)*param_4,0,0,param_8,
                                 *param_10,*param_11,*param_12);
    return piVar4;
  }
  fn_00692e98(auStack_50,param_3);
  local_58 = fn_0068f050(auStack_50,local_c0,4,local_88,4,param_13 == 1);
  uVar6 = 0;
  local_8c = (int *)0x0;
  if (0 < (int)param_5) {
    do {
      local_c8 = (int)(char)uVar6;
      if (uVar6 == param_7) {
        if ((int)uVar6 < local_58) {
          local_48 = local_c0[uVar6 * 3];
          uStack_44 = local_c0[uVar6 * 3 + 1];
          local_40 = local_c0[uVar6 * 3 + 2];
          local_3c = local_88[uVar6 * 3];
          local_38 = local_88[uVar6 * 3 + 1];
          local_34 = local_88[uVar6 * 3 + 2];
        }
        else {
          local_48 = (undefined4)uVar8;
          uStack_44 = (undefined4)((ulonglong)uVar8 >> 0x20);
          local_40 = local_48;
          local_3c = local_48;
          local_38 = local_48;
          local_34 = local_48;
        }
        local_d0 = &local_48;
        local_d4 = &local_3c;
        iVar7 = param_11[uVar6];
        iVar1 = param_8 + uVar6 * 0x18;
        local_e0 = (int)param_4[uVar6];
        uVar2 = param_10[uVar6];
        uVar3 = param_12[uVar6];
        if (iVar7 == 0) {
          local_8c = (int *)fn_00264324(param_1,uVar6);
        }
        else {
          local_8c = (int *)fn_002644ec(param_1);
        }
        local_54 = fn_00264b5c(param_1,local_e0,uVar6);
        local_dc = (undefined4 *)fn_002650cc(param_1,local_e0);
        if (local_dc == (undefined4 *)&DAT_ffffffff) {
          local_dc = (undefined4 *)fn_00264d74(param_1,local_e0,0);
        }
        local_90 = fn_00264fd4(param_1,uVar6);
        local_d8 = (undefined4 *)fn_00264e94(param_1,local_e0,uVar6);
        piVar4 = (int *)fn_00263678(param_2,local_8c,local_90,local_e0,local_54,local_d8,local_dc,
                                     uVar6 & 0xff,local_c8,iVar1,uVar2,iVar7,uVar3);
        (**(code **)(*piVar4 + 0x1c))(piVar4,local_d0);
        (**(code **)(*piVar4 + 0x24))(piVar4,local_d4);
        fn_006a06a0(piVar4,local_e0);
        fn_00265538(param_1,local_90);
        fn_00265538(param_1,local_d8);
        local_8c = piVar4;
      }
      else {
        local_d8 = local_c0 + uVar6 * 3;
        iVar7 = param_11[uVar6];
        local_dc = local_88 + uVar6 * 3;
        iVar1 = param_8 + uVar6 * 0x18;
        local_e0 = (int)param_4[uVar6];
        uVar2 = param_10[uVar6];
        uVar3 = param_12[uVar6];
        if (iVar7 == 0) {
          local_d0 = (undefined4 *)fn_00264324(param_1,uVar6);
        }
        else {
          local_d0 = (undefined4 *)fn_002644ec(param_1);
        }
        local_d4 = (undefined4 *)fn_00264fd4(param_1,uVar6);
        local_90 = fn_00264b5c(param_1,local_e0,uVar6);
        local_e4 = (int *)fn_00264e94(param_1,local_e0,uVar6);
        iVar5 = fn_002650cc(param_1,local_e0);
        if (iVar5 == -1) {
          iVar5 = fn_00264d74(param_1,local_e0,0);
        }
        local_e4 = (int *)fn_002621bc(param_2,local_d0,local_d4,local_e0,local_90,local_e4,iVar5,
                                       uVar6 & 0xff,local_c8,iVar1,uVar2,iVar7,uVar3);
        (**(code **)(*local_e4 + 0x1c))(local_e4,local_d8);
        (**(code **)(*local_e4 + 0x24))(local_e4,local_dc);
        iVar1 = fn_0032d6f4(local_e0);
        fn_0069f6ec(local_e4);
        fn_0069fb50(local_e4);
        fn_0069fb68(local_e4);
        fn_0069f6d4(local_e4);
        *(undefined1 *)(local_e4 + 0x4a) = *(undefined1 *)(iVar1 + 0x1c);
        *(undefined1 *)((int)local_e4 + 0x129) = *(undefined1 *)(iVar1 + 0x1d);
        fn_006a2b28(local_e4);
        local_e4[0x4c] = *(int *)(iVar1 + 0x14);
        fn_0069f6b8(local_e4);
        fn_006a0744(local_e4,0,*(undefined1 *)(iVar1 + 0x1e));
        fn_006a0744(local_e4,1,*(undefined1 *)(iVar1 + 0x1f));
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < (int)param_5);
  }
  local_d8 = (undefined4 *)(param_6 + param_5);
  if ((int)param_5 < (int)local_d8) {
    do {
      iVar1 = (int)(char)param_5;
      if (param_13 == 1) {
        if (iVar1 == 2) {
          iVar1 = 0;
        }
        else if (iVar1 == 3) {
          iVar1 = 1;
        }
      }
      iVar7 = (int)param_4[param_5];
      uVar2 = param_10[param_5];
      uVar3 = param_12[param_5];
      local_d4 = local_c0 + param_5 * 3;
      iVar5 = param_8 + param_5 * 0x18;
      local_dc = local_88 + param_5 * 3;
      local_e4 = (int *)fn_00264324(param_1,param_5);
      local_c4 = fn_00264fd4(param_1,param_5);
      local_c8 = fn_00264b5c(param_1,iVar7,param_5);
      local_cc = fn_00264e94(param_1,iVar7,param_5);
      local_d0 = (undefined4 *)fn_002650cc(param_1,iVar7);
      if (local_c8 == -1) {
        local_c8 = fn_0026455c(param_1,iVar7,0);
      }
      if (local_d0 == (undefined4 *)&DAT_ffffffff) {
        local_d0 = (undefined4 *)fn_00264d74(param_1,iVar7,0);
      }
      piVar4 = (int *)fn_00261d7c(param_2,local_e4,local_c4,iVar7,local_c8,local_cc,local_d0,
                                   param_5 & 0xff,iVar1,iVar5,uVar2,uVar3);
      (**(code **)(*piVar4 + 0x1c))(piVar4,local_d4);
      (**(code **)(*piVar4 + 0x24))(piVar4,local_dc);
      fn_006a06a0(piVar4,iVar7);
      param_5 = param_5 + 1;
    } while ((int)param_5 < (int)local_d8);
  }
  return local_8c;
}



undefined1 * fn_002487f4(undefined4 param_1,int *param_2)

{
  int iVar1;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined1 auStack_10 [8];
  
  fn_00692e98(auStack_10,param_1);
  fn_00183718(&local_30,auStack_10,(char *)&DAT_00248890);
  local_4c = local_30;
  uStack_48 = uStack_2c;
  uStack_44 = uStack_28;
  uStack_40 = uStack_24;
  uStack_3c = uStack_20;
  uStack_38 = uStack_1c;
  uStack_34 = uStack_18;
  iVar1 = fn_0068ede0(&local_4c,(char)param_2[0x41],&local_58,&local_64);
  if (iVar1 != 0) {
    local_30 = local_58;
    uStack_2c = uStack_54;
    uStack_28 = uStack_50;
    fn_006a67f8(param_2);
    local_30 = local_64;
    uStack_2c = uStack_60;
    uStack_28 = uStack_5c;
    (**(code **)(*param_2 + 0x24))(param_2);
  }
  return auStack_10;
}


