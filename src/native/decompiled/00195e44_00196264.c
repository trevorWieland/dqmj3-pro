#include "00195e44_00196264.h"

static void svc_0x28(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x28 }
#endif
}


undefined4 fn_00196264(int param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  int extraout_r1;
  int extraout_r1_00;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  bool bVar7;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 *local_f8;
  uint local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  int local_d4;
  undefined4 local_d0;
  undefined1 local_cc;
  undefined2 local_ca [25];
  undefined4 local_98;
  char local_94;
  uint local_90;
  undefined4 local_8c;
  undefined1 auStack_88 [8];
  undefined4 local_80;
  undefined2 local_68;
  undefined2 local_66;
  undefined2 local_64;
  int local_60;
  undefined4 local_5c [3];
  undefined1 auStack_50 [28];
  int local_34;
  int local_30;
  int iStack_2c;
  undefined4 local_28;
  
  uVar5 = *(undefined4 *)(param_1 + 0xa4);
  iStack_2c = param_1;
  local_28 = param_2;
  uVar1 = fn_00169f1c(*(int *)(param_1 + 0x98) + -1,uVar5);
  iVar3 = *(int *)(param_1 + 0x94);
  fn_00169f1c(iVar3,uVar5);
  local_60 = extraout_r1;
  local_e0 = fn_00169f1c(iVar3 - extraout_r1,uVar5);
  local_30 = (uVar1 - local_e0) + 1;
  uVar6 = 0;
  if (*(int *)(param_1 + 0x68) != 0) {
    local_34 = local_e0 + 1;
    do {
      local_dc = 0;
      local_d4 = 0;
      local_d0 = 0;
      local_cc = 0;
      iVar3 = 0;
      local_d8 = 0;
      local_98 = 0;
      local_94 = '\0';
      local_90 = 0;
      local_8c = 0;
      if (uVar1 < uVar6) {
        fn_00169f1c(uVar6 - uVar1,local_30);
        iVar3 = extraout_r1_00;
      }
      if ((uVar1 == 0 || uVar1 == uVar6) || ((uVar1 != 0 && uVar1 < uVar6 && (iVar3 == 0)))) {
        local_d8 = *(undefined4 *)(param_1 + 0xb0);
        local_8c = *(undefined4 *)(param_1 + 0xac);
        if (*(char *)(param_1 + 0x90) == '\0') {
          uVar5 = 0;
          local_94 = '\x01';
        }
        else {
          local_98 = 1;
          uVar5 = *(undefined4 *)(param_1 + 0x94);
        }
        *(undefined4 *)(param_1 + 0x21c) = uVar5;
        local_90 = uVar1;
      }
      else if (*(char *)(param_1 + 0x90) == '\0' || uVar6 <= uVar1) {
        local_d8 = *(undefined4 *)(param_1 + 0xa4);
        local_f8 = &local_dc;
        local_8c = *(undefined4 *)(param_1 + 0xa8);
        uVar2 = *(int *)(param_1 + 0x21c) + *(int *)(param_1 + 0xa4);
        bVar7 = *(char *)(param_1 + 0x88) == '\x03';
        *(uint *)(param_1 + 0x21c) = uVar2;
        if (bVar7) {
          uVar2 = uVar6;
        }
        local_90 = uVar6;
        if (bVar7 && uVar2 == 0) {
          local_5c[0] = local_28;
          uVar2 = 0;
          if (*(int *)(param_1 + 0xb4) != 0) {
            do {
              iVar3 = fn_001a2338(local_5c[0],auStack_88,auStack_50,uVar2);
              if (iVar3 == 0) {
                return 0;
              }
              iVar3 = param_1 + 0x110 + uVar2 * 0x20;
              fn_00301a9c(iVar3,auStack_88,0x20);
              fn_001a3c8c(*(undefined4 *)(param_1 + uVar2 * 0x3c8 + 0x22c),0,iVar3);
              uVar4 = uVar2 + 1;
              local_ca[uVar2 * 3] = local_68;
              local_ca[uVar2 * 3 + 1] = local_66;
              local_ca[uVar2 * 3 + 2] = local_64;
              uVar2 = uVar4;
            } while (uVar4 < *(uint *)(param_1 + 0xb4));
            goto LAB_00196584;
          }
LAB_00196594:
          local_f8 = &local_dc;
          local_cc = 1;
        }
      }
      else {
        local_d8 = *(undefined4 *)(param_1 + 0xa4);
        if (iVar3 == 1) {
          local_f8 = &local_dc;
          local_8c = *(undefined4 *)(param_1 + 0xa8);
          local_90 = local_e0;
          local_d4 = local_60;
          *(int *)(param_1 + 0x21c) = *(int *)(param_1 + 0xa4) * local_34;
          if (*(char *)(param_1 + 0x88) == '\x03') {
            local_80 = local_28;
            uVar2 = 0;
            if (*(int *)(param_1 + 0xb4) == 0) goto LAB_00196594;
            do {
              iVar3 = fn_001a2338(local_80,local_5c,&local_100,uVar2);
              if (iVar3 == 0) {
                return 0;
              }
              iVar3 = param_1 + 0x110 + uVar2 * 0x20;
              fn_00301a9c(iVar3,local_5c,0x20);
              fn_001a3c8c(*(undefined4 *)(param_1 + uVar2 * 0x3c8 + 0x22c),0,iVar3);
              uVar4 = uVar2 + 1;
              local_ca[uVar2 * 3] = (undefined2)local_100;
              local_ca[uVar2 * 3 + 1] = ((unsigned int)(local_100) >> 16) & 0xffff;
              local_ca[uVar2 * 3 + 2] = (undefined2)local_fc;
              uVar2 = uVar4;
            } while (uVar4 < *(uint *)(param_1 + 0xb4));
LAB_00196584:
            *(undefined1 *)(local_f8 + 4) = 1;
          }
        }
        else {
          local_8c = *(undefined4 *)(param_1 + 0xa8);
          *(int *)(param_1 + 0x21c) = *(int *)(param_1 + 0x21c) + *(int *)(param_1 + 0xa4);
          local_90 = local_e0 + iVar3 + -1;
        }
      }
      local_dc = *(undefined4 *)(param_1 + 0x6c);
      local_d0 = 0;
      local_100 = local_90;
      local_fc = local_8c;
      fn_001a078c(param_1,1,&local_dc);
      uVar2 = *(int *)(param_1 + 0x6c) + 1;
      *(uint *)(param_1 + 0x6c) = uVar2;
      if (*(uint *)(param_1 + 0x68) <= uVar2) {
        *(undefined4 *)(param_1 + 0x6c) = 0;
      }
    } while ((local_94 == '\0') && (uVar6 = uVar6 + 1, uVar6 < *(uint *)(param_1 + 0x68)));
  }
  return 1;
}



void fn_0019622c(undefined4 param_1,uint param_2,int param_3)

{
  if (param_2 < 2) {
    fn_0018b010();
    *(undefined4 *)(param_3 + 4) = 0;
    return;
  }
  if (param_2 == 2 || param_2 == 3) {
    *(undefined4 *)(param_3 + 4) = 0;
  }
  return;
}



void fn_00196118(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,uint param_6,undefined1 param_7)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  iVar1 = fn_001a0a7c(param_1 + 0x90);
  if (iVar1 == 0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    fn_00301f50(iVar1,0x58);
    puVar5 = (undefined4 *)fn_0017e758(iVar1);
    *puVar5 = &DAT_00858374;
    puVar5[0x14] = 0;
    puVar5[0x15] = 0;
  }
  puVar5[0x13] = param_1;
  puVar5[0xf] = param_3;
  puVar5[0x10] = param_4;
  puVar5[0x11] = param_5;
  *(undefined1 *)(puVar5 + 0x12) = param_7;
  puVar5[6] = param_1;
  if (*(uint *)(param_1 + 0x20) != 0) {
    uVar2 = *(uint *)(param_1 + 0x20) & 1;
    if (uVar2 == 1) {
      puVar5[7] = *param_2;
    }
    uVar4 = (uint)(uVar2 == 1);
    if (uVar2 < *(uint *)(param_1 + 0x20)) {
      do {
        puVar5[uVar4 + 7] = param_2[uVar4];
        uVar2 = uVar2 + 2;
        puVar5[uVar4 + 8] = param_2[uVar4 + 1];
        uVar4 = uVar4 + 2;
      } while (uVar2 < *(uint *)(param_1 + 0x20));
    }
  }
  fn_0017d948(param_1 + 0x84,param_1 + 0x88,puVar5 + 0x14);
  iVar1 = fn_00172e2c();
  fn_00170704(iVar1 + 0x2c);
  fn_0013c428(puVar5 + 3);
  *(undefined1 *)(puVar5 + 5) = 1;
  iVar3 = iVar1 + (param_6 & 0xff) * 0xc;
  fn_0017d948(iVar3,iVar3 + 4,puVar5 + 1);
  fn_001839ac(iVar1 + 0x38,0);
  fn_001707b4(iVar1 + 0x2c);
  return;
}



void fn_001960ec(int param_1,int param_2)

{
  fn_0017d90c(param_1 + 4,param_2 + 0x58);
  fn_0017d948(param_1 + 0x10,param_1 + 0x14,param_2 + 0x58);
  return;
}



int fn_00195ff8(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  undefined4 uVar6;
  
  if (*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x20) < *(int *)(param_1 + 0x10)) {
LAB_0019608c:
    iVar2 = *(int *)(param_1 + 0x14);
    iVar3 = iVar2 + -0x58;
    iVar5 = fn_001a0584(iVar3,param_2,param_3,param_4,param_5);
    iVar1 = 0;
    if (iVar5 != 0) {
      *(uint *)(iVar2 + -0x18) = param_3 & 0xff;
      fn_001a8374(param_1,iVar3);
      iVar1 = iVar3;
    }
    return iVar1;
  }
  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = *(int *)(param_1 + 8);
    iVar2 = iVar1 + -0x58;
    if (*(int *)(iVar1 + -0x18) <= (int)param_3) {
      iVar5 = *(int *)(iVar1 + -0x50);
      pcVar4 = *(code **)(iVar1 + -0x4c);
      uVar6 = *(undefined4 *)(iVar1 + -0x48);
      fn_0017ea58(iVar2);
      fn_0018b010(iVar2);
      if (pcVar4 != (code *)0x0) {
        (*pcVar4)(iVar2,2,uVar6);
      }
      if (iVar5 != 0) goto LAB_0019608c;
    }
  }
  return 0;
}



int fn_00195f44(int *param_1)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  if (param_1[4] < param_1[3]) {
    uVar4 = param_1[3] + 7;
    iVar6 = 0;
    iVar1 = (int)((uVar4 & 0xfffffff8) + ((uint)((int)uVar4 >> 0x1f) >> 0x1d)) >> 3;
    if (0 < iVar1) {
      do {
        bVar2 = *(byte *)((int)param_1 + iVar6 + 0x14);
        if (bVar2 != 0xff) {
          bVar3 = 1;
          iVar5 = 0;
          do {
            if ((bVar2 & bVar3) == 0) {
              *(byte *)((int)param_1 + iVar6 + 0x14) =
                   bVar3 | *(byte *)((int)param_1 + iVar6 + 0x14);
              param_1[4] = param_1[4] + 1;
              return param_1[2] * (iVar5 + iVar6 * 8) + *param_1;
            }
            iVar5 = iVar5 + 1;
            bVar3 = bVar3 << 1;
          } while (iVar5 < 8);
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar1);
    }
  }
  return 0;
}



void fn_00195f04(int *param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = fn_00169f1c(param_2 - *param_1,param_1[2]);
  *(byte *)((int)param_1 + (uVar1 >> 3) + 0x14) =
       *(byte *)((int)param_1 + (uVar1 >> 3) + 0x14) & ~(byte)(1 << (uVar1 & 7));
  param_1[4] = param_1[4] + -1;
  return;
}



void fn_00195e44(undefined *param_1,int param_2,uint param_3)

{
  int iVar1;
  char cVar2;
  int extraout_r1;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  
  cVar2 = DAT_008ece51;
  param_3 = param_3 & 0xff;
  svc_0x28();
  iVar3 = param_3 * 3;
  iVar1 = param_3 * 0xc;
  puVar4 = *(undefined4 **)(&DAT_008ecea8 + iVar1);
  if (DAT_008ece51 == '\x02') {
    uVar5 = 4;
  }
  else {
    uVar5 = 2;
  }
  if (puVar4 != (undefined4 *)(&DAT_008ecea8 + iVar1)) {
    do {
      (**(code **)(puVar4[-1] + 0x10))(puVar4 + -1,uVar5,param_1,param_2,2,cVar2);
      puVar4 = (undefined4 *)*puVar4;
      iVar3 = extraout_r1;
    } while (puVar4 != (undefined4 *)(&DAT_008ecea8 + iVar1));
  }
  svc_0x28();
  *(int *)(&DAT_008ed0d0 + param_3 * 8) = (int)(&DAT_008ecea8 + iVar1) - (int)param_1;
  *(uint *)(&DAT_008ed0d4 + param_3 * 8) =
       iVar3 - (param_2 + (uint)(&DAT_008ecea8 + iVar1 < param_1));
  return;
}


