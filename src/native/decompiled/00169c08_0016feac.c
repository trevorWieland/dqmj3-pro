#include "00169c08_0016feac.h"

static void svc_0x37(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x37 }
#endif
}


void fn_0016feac(undefined1 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  iVar1 = fn_00101a1c(param_1 + 4,&LAB_0017c0fc,0x2c,8);
  *(undefined1 *)(iVar1 + 0x180) = 0;
  *(undefined1 *)(iVar1 + 0x181) = 0;
  *(undefined1 *)(iVar1 + 0x182) = 0;
  *(undefined1 *)(iVar1 + 0x183) = 0;
  *(undefined1 *)(iVar1 + 0x184) = 0;
  *(undefined1 *)(iVar1 + 0x185) = 0;
  *(undefined1 *)(iVar1 + 0x186) = 0;
  *(undefined1 *)(iVar1 + 0x187) = 0;
  *(undefined1 *)(iVar1 + 0x188) = 0;
  *(undefined1 *)(iVar1 + 0x189) = 0;
  *(undefined1 *)(iVar1 + 0x18a) = 1;
  *(undefined1 *)(iVar1 + 0x18b) = 0;
  *(undefined1 *)(iVar1 + 0x18c) = 0;
  *(undefined1 *)(iVar1 + 0x18d) = 1;
  *(undefined1 *)(iVar1 + 400) = 0;
  *(undefined1 *)(iVar1 + 0x191) = 0;
  *(undefined1 *)(iVar1 + 0x192) = 0;
  *(undefined1 *)(iVar1 + 0x194) = 0;
  *(undefined1 *)(iVar1 + 0x195) = 0;
  *(undefined1 *)(iVar1 + 0x196) = 0;
  *(undefined1 *)(iVar1 + 0x198) = 0;
  *(undefined1 *)(iVar1 + 0x199) = 0;
  *(undefined1 *)(iVar1 + 0x19a) = 0;
  *(undefined1 *)(iVar1 + 0x19c) = 0;
  *(undefined1 *)(iVar1 + 0x19d) = 0;
  *(undefined1 *)(iVar1 + 0x19e) = 0;
  *(undefined1 *)(iVar1 + 0x1a0) = 0;
  *(undefined1 *)(iVar1 + 0x1a1) = 0;
  *(undefined1 *)(iVar1 + 0x1a2) = 0;
  *(undefined1 *)(iVar1 + 0x1a4) = 0;
  *(undefined1 *)(iVar1 + 0x1a5) = 0;
  *(undefined1 *)(iVar1 + 0x1a6) = 0;
  *(undefined1 *)(iVar1 + 0x1a8) = 0;
  *(undefined1 *)(iVar1 + 0x1a9) = 0;
  iVar4 = 8;
  *(undefined1 *)(iVar1 + 0x1aa) = 0;
  iVar2 = 0;
  do {
    iVar3 = iVar1 + -4 + iVar2;
    iVar4 = iVar4 + -1;
    *(undefined1 *)(iVar3 + 0x164) = 0;
    *(undefined1 *)(iVar3 + 0x16c) = 0;
    *(undefined1 *)(iVar3 + 0x174) = 0;
    *(undefined1 *)(iVar3 + 0x17c) = 0;
    *(char *)(iVar1 + -4 + iVar2 * 0x2c + 4) = (char)iVar2;
    iVar2 = iVar2 + 1;
  } while (iVar4 != 0);
  return;
}



void fn_0016fd44(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 6;
  param_1[4] = 6;
  param_1[5] = 7;
  param_1[6] = 7;
  param_1[7] = 0xff;
  param_1[8] = 0xff;
  param_1[9] = 0xff;
  param_1[10] = 0xff;
  *(undefined1 **)(param_1 + 0xc) = param_1;
  param_1[0x10] = 0;
  param_1[0x11] = 6;
  *(undefined1 **)(param_1 + 0x14) = param_1;
  param_1[0x18] = 0;
  param_1[0x19] = 1;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0x3f800000;
  *(undefined1 **)(param_1 + 0x2c) = param_1;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  *(undefined1 **)(param_1 + 0x34) = param_1;
  param_1[0x38] = 0;
  param_1[0x39] = 0xff;
  param_1[0x3c] = 1;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0xff;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  *(undefined1 **)(param_1 + 0x4c) = param_1;
  param_1[0x50] = 0xf;
  param_1[0x54] = 1;
  param_1[0x55] = 1;
  param_1[0x56] = 4;
  *(undefined1 **)(param_1 + 0x58) = param_1;
  param_1[0x5c] = 1;
  param_1[0x5d] = 1;
  param_1[0x5e] = 1;
  *(undefined1 **)(param_1 + 0x60) = param_1;
  *(undefined4 *)(param_1 + 100) = 0;
  param_1[0x68] = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0x3f800000;
  param_1[0x78] = 0x18;
  *(undefined1 **)(param_1 + 0x7c) = param_1;
  return;
}



void fn_0016fd14(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xffffffff;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[0x25] = 0;
  param_1[0x27] = 0;
  *(undefined1 *)(param_1 + 0x28) = 3;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2f] = 0;
  return;
}



/* WARNING: Removing unreachable block (ram,0x0016e960) */

void fn_0016e8ec(undefined4 param_1,float *param_2,float *param_3)

{
  float *pfVar1;
  float *pfVar2;
  float local_10 [4];
  
  pfVar2 = local_10;
  local_10[1] = *param_3;
  local_10[2] = -168.0;
  local_10[0] = 168.0;
  if (*param_3 < -168.0) {
    pfVar1 = local_10 + 2;
  }
  else {
    pfVar1 = local_10 + 1;
  }
  if (168.0 < *pfVar1) {
    pfVar1 = local_10;
  }
  *param_2 = *pfVar1;
  local_10[0] = param_3[1];
  local_10[1] = -88.0;
  local_10[2] = 53.0;
  if (param_3[1] < -88.0) {
    pfVar2 = local_10 + 1;
  }
  if (53.0 < *pfVar2) {
    pfVar2 = local_10 + 2;
  }
  param_2[1] = *pfVar2;
  return;
}



void fn_0016dd18(undefined4 param_1,int param_2)

{
  fn_001481c8(param_1,(&PTR_u_rom__data_Layout_battle_battle_l_007ba188)[param_2],&DAT_0016dd40,1,1
              );
  return;
}



void fn_0016dcdc(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  fn_001480d0(param_1,param_2,(&PTR_s_battle_subwindows_bflyt_007ba1bc)[param_3],&DAT_0016dd14,
               param_4,param_5,param_6);
  return;
}



void fn_0016aa48(void)

{
  undefined4 in_r3;
  
  switch(in_r3) {
  case 0:
    break;
  case 1:
    break;
  case 2:
    break;
  case 3:
    break;
  case 4:
  }
  fn_00179c8c();
  return;
}



void fn_0016a9b0(void)

{
  undefined4 in_r3;
  
  switch(in_r3) {
  case 0:
    break;
  case 1:
    break;
  case 2:
    break;
  case 3:
    break;
  case 4:
  }
  fn_00179ac8();
  return;
}



undefined8 fn_00169f1c(uint param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  
  iVar3 = 0;
  uVar2 = param_2;
  if (param_2 <= param_1 >> 2) {
    if (param_2 <= param_1 >> 5) {
      if (param_2 <= param_1 >> 8) {
        if (param_1 >> 0xc < param_2) goto LAB_00301000;
        if (param_1 >> 0x10 < param_2) goto LAB_00300fd0;
        uVar2 = param_2 << 8;
        iVar3 = -0x1000000;
        if (uVar2 <= param_1 >> 0x10) {
          iVar3 = -0x10000;
          uVar2 = param_2 << 0x10;
        }
        if (param_1 >> 0xc < uVar2) goto LAB_00301000;
        bVar5 = false;
        if (uVar2 == 0) {
          uVar1 = fn_00147f5c(0,0,iVar3,0);
          return CONCAT44(param_1,uVar1);
        }
        do {
          if (bVar5) {
            uVar2 = uVar2 >> 8;
          }
LAB_00300fd0:
          bVar5 = uVar2 <= param_1 >> 0xf;
          if (bVar5) {
            param_1 = param_1 + uVar2 * -0x8000;
          }
          bVar6 = uVar2 <= param_1 >> 0xe;
          if (bVar6) {
            param_1 = param_1 + uVar2 * -0x4000;
          }
          bVar7 = uVar2 <= param_1 >> 0xd;
          if (bVar7) {
            param_1 = param_1 + uVar2 * -0x2000;
          }
          bVar8 = uVar2 <= param_1 >> 0xc;
          if (bVar8) {
            param_1 = param_1 + uVar2 * -0x1000;
          }
          iVar3 = (((iVar3 * 2 + (uint)bVar5) * 2 + (uint)bVar6) * 2 + (uint)bVar7) * 2 +
                  (uint)bVar8;
LAB_00301000:
          bVar5 = uVar2 <= param_1 >> 0xb;
          if (bVar5) {
            param_1 = param_1 + uVar2 * -0x800;
          }
          bVar6 = uVar2 <= param_1 >> 10;
          if (bVar6) {
            param_1 = param_1 + uVar2 * -0x400;
          }
          bVar7 = uVar2 <= param_1 >> 9;
          if (bVar7) {
            param_1 = param_1 + uVar2 * -0x200;
          }
          uVar4 = ((iVar3 * 2 + (uint)bVar5) * 2 + (uint)bVar6) * 2 + (uint)bVar7;
          bVar6 = uVar2 <= param_1 >> 8;
          if (bVar6) {
            param_1 = param_1 + uVar2 * -0x100;
          }
          iVar3 = uVar4 * 2 + (uint)bVar6;
          bVar5 = true;
        } while (CARRY4(uVar4,uVar4) || CARRY4(uVar4 * 2,(uint)bVar6));
      }
      bVar5 = uVar2 <= param_1 >> 7;
      if (bVar5) {
        param_1 = param_1 + uVar2 * -0x80;
      }
      bVar6 = uVar2 <= param_1 >> 6;
      if (bVar6) {
        param_1 = param_1 + uVar2 * -0x40;
      }
      bVar7 = uVar2 <= param_1 >> 5;
      if (bVar7) {
        param_1 = param_1 + uVar2 * -0x20;
      }
      iVar3 = ((iVar3 * 2 + (uint)bVar5) * 2 + (uint)bVar6) * 2 + (uint)bVar7;
    }
    bVar5 = uVar2 <= param_1 >> 4;
    if (bVar5) {
      param_1 = param_1 + uVar2 * -0x10;
    }
    bVar6 = uVar2 <= param_1 >> 3;
    if (bVar6) {
      param_1 = param_1 + uVar2 * -8;
    }
    bVar7 = uVar2 <= param_1 >> 2;
    if (bVar7) {
      param_1 = param_1 + uVar2 * -4;
    }
    iVar3 = ((iVar3 * 2 + (uint)bVar5) * 2 + (uint)bVar6) * 2 + (uint)bVar7;
  }
  bVar5 = uVar2 <= param_1 >> 1;
  if (bVar5) {
    param_1 = param_1 + uVar2 * -2;
  }
  uVar4 = param_1 - uVar2;
  if (uVar2 > param_1) {
    uVar4 = param_1;
  }
  return CONCAT44(uVar4,(iVar3 * 2 + (uint)bVar5) * 2 + (uint)(uVar2 <= param_1));
}



void fn_00169c08(undefined4 *param_1,undefined4 param_2)

{
  svc_0x37();
  *param_1 = param_2;
  return;
}


