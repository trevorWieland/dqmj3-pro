#include "0051e8b0_0051f07c.h"

static void svc_0x24(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x24 }
#endif
}


undefined1 * fn_0051f07c(int param_1,int param_2,int param_3,uint param_4)

{
  undefined1 *puVar1;
  undefined4 local_24 [2];
  
  fn_00170704(&DAT_008ec46c);
  if (DAT_008c0382 == '\0') {
    puVar1 = (undefined1 *)0xe0a113f8;
  }
  else {
    fn_001237bc();
    fn_0013c674();
    if ((param_2 == 2) &&
       ((*(char *)(param_1 + 8) == '\0' || ((*(ushort *)(param_1 + 0x16) >> 8 & 1) != 0)))) {
      puVar1 = (undefined1 *)0xe10113ea;
    }
    else if ((param_3 == 0) || ((param_4 < 8 || (0xff < param_4)))) {
      puVar1 = &DAT_e10113fd;
    }
    else {
      local_24[0] = DAT_008c038c;
      puVar1 = (undefined1 *)fn_0052073c(local_24,param_1,param_2,param_3,param_4);
      if (puVar1 == (undefined1 *)0xc920181a) {
        fn_0015e590(0xc920181a,0x51f140);
      }
    }
  }
  fn_001707b4(&DAT_008ec46c);
  return puVar1;
}



int fn_0051f004(void)

{
  undefined4 in_r3;
  int iVar1;
  undefined4 local_10;
  
  local_10 = in_r3;
  fn_00170704(&DAT_008ec46c);
  if (DAT_008c0382 == '\0') {
    iVar1 = -0x1f5eec08;
  }
  else {
    local_10 = DAT_008c038c;
    iVar1 = fn_00520a40(&local_10,6,0);
    if (iVar1 == -0x36dfe7e6) {
      fn_0015e590(0xc920181a,0x51f058);
    }
  }
  fn_001707b4(&DAT_008ec46c);
  return iVar1;
}



undefined1 *
fn_0051ee60(int param_1,uint param_2,int param_3,int param_4,uint param_5,undefined4 param_6,
            uint param_7,undefined4 param_8,undefined4 param_9)

{
  int iVar1;
  int extraout_r1;
  undefined1 *puVar2;
  undefined4 local_3c [2];
  int iStack_34;
  uint uStack_30;
  int local_2c;
  int local_28;
  
  iStack_34 = param_1;
  uStack_30 = param_2;
  local_2c = param_3;
  local_28 = param_4;
  fn_00170704(&DAT_008ec46c);
  if (DAT_008c0382 == '\0') {
    puVar2 = (undefined1 *)0xe0a113f8;
  }
  else if (local_2c == 0) {
    puVar2 = (undefined1 *)0xe10113ea;
  }
  else {
    puVar2 = &DAT_e10113fd;
    if ((1 < param_2) && (param_2 < 0x11)) {
      iVar1 = extraout_r1;
      if (param_1 != 0xff) {
        iVar1 = local_28;
      }
      if ((((param_1 != 0xff && iVar1 != 0) && (7 < param_5)) && (param_5 < 0x100)) &&
         ((param_7 < 2 || (param_7 == 6 || param_7 == 0xb)))) {
        fn_001237bc();
        iVar1 = fn_00453c94();
        if (iVar1 == 0) {
          param_7 = 0;
        }
        fn_0013c674();
        if (DAT_008c0380 != 0) {
          param_7 = (uint)DAT_008c0380;
        }
        puVar2 = (undefined1 *)
                 fn_0051f754(&DAT_008ec364,local_2c,param_1,param_2,param_7,param_8,param_9);
        if (-1 < (int)puVar2) {
          local_3c[0] = DAT_008c038c;
          puVar2 = (undefined1 *)fn_005209f8(local_3c,&DAT_007e4348,param_6);
          if ((-1 < (int)puVar2) &&
             (puVar2 = (undefined1 *)fn_005206c0(local_3c,&DAT_008ec364,local_28,param_5),
             puVar2 == (undefined1 *)0xc920181a)) {
            fn_0015e590(0xc920181a,0x51efa0);
          }
        }
      }
    }
  }
  fn_001707b4(&DAT_008ec46c);
  return puVar2;
}



int fn_0051eca4(int *param_1,uint param_2,int *param_3,undefined4 param_4,uint param_5,int param_6)

{
  int iVar1;
  int iVar2;
  undefined4 local_3c;
  uint local_38;
  int *piStack_34;
  uint local_30;
  int *piStack_2c;
  undefined4 uStack_28;
  
  if (DAT_008c0382 == '\0') {
    return -0x1f5eec08;
  }
  iVar2 = -0x1efeec16;
  if (*param_1 == 0) {
    return -0x1efeec16;
  }
  piStack_34 = param_1;
  local_30 = param_2;
  piStack_2c = param_3;
  uStack_28 = param_4;
  fn_00170704(&DAT_008ec46c);
  iVar1 = 0;
  while( true ) {
    if (((&DAT_008ec47c)[iVar1 * 3] == *param_1) && ((&DAT_008ec480)[iVar1 * 0xc] != '\0'))
    goto LAB_0051ed40;
    if (((&DAT_008ec488)[iVar1 * 3] == *param_1) && ((&DAT_008ec48c)[iVar1 * 0xc] != '\0')) break;
    iVar1 = iVar1 + 2;
    if (0xf < iVar1) {
LAB_0051ed40:
      if (iVar1 < 0x10) {
        fn_001707b4(&DAT_008ec46c);
        if ((param_5 & 3) == 0) {
          if (((local_30 & 3) != 0) || (local_30 == 0)) {
            return -0x1efeec0f;
          }
          local_38 = param_5 >> 2;
          do {
            local_3c = DAT_008c0388;
            iVar2 = fn_0052061c(&local_3c,*param_1,local_30,local_38,param_5,param_3,param_4);
            if (((iVar2 < 0) || (*param_3 != 0)) || (param_6 == 1)) {
              if (iVar2 == -0x36dfe7e6) {
                return -0x1f5eec08;
              }
              return iVar2;
            }
            if ((&DAT_008ec47c)[iVar1 * 3] == 0) {
              return -0x1efeec16;
            }
            svc_0x24();
          } while (-1 < (int)(&DAT_008ec478)[iVar1 * 3]);
          return -0x1efeec16;
        }
        iVar2 = -0x1efeec0e;
      }
      else {
        fn_001707b4(&DAT_008ec46c);
      }
      return iVar2;
    }
  }
  iVar1 = iVar1 + 1;
  goto LAB_0051ed40;
}



int fn_0051ec1c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_10;
  
  local_10 = param_4;
  fn_00170704(&DAT_008ec46c);
  if (DAT_008c0382 == '\0') {
    iVar1 = -0x1f5eec08;
  }
  else if (param_1 == 1) {
    iVar1 = -0x1efeec16;
  }
  else {
    local_10 = DAT_008c038c;
    iVar1 = fn_00520688(&local_10,param_1);
    if (iVar1 == -0x36dfe7e6) {
      fn_0015e590(0xc920181a,0x51ec7c);
    }
  }
  fn_001707b4(&DAT_008ec46c);
  return iVar1;
}



int fn_0051eb54(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = -0x1f9eec07;
  if (DAT_008c0382 == '\0') {
    iVar1 = fn_00114848(0);
    if (iVar1 == 2 || iVar1 == 4) {
      iVar2 = -0x375eec16;
    }
    else {
      iVar1 = fn_0010b500(iVar1);
      if (iVar1 < 0) {
        iVar2 = -0x379eec0d;
      }
      else {
        iVar1 = fn_00454a2c(2);
        if (-1 < iVar1) {
          iVar2 = fn_0052023c(param_1,param_2,param_3,param_4);
          if (iVar2 < 0) {
            fn_00454a70();
            fn_00454af0();
            return iVar2;
          }
          DAT_008c0380 = 0;
          DAT_008c0381 = 0;
          return iVar2;
        }
        fn_00454af0();
      }
    }
  }
  return iVar2;
}



undefined4 fn_0051eadc(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (DAT_0089a7c0 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar1 = 0;
    do {
      if (((&DAT_008e376c)[uVar1 * 3] == param_2 && (&DAT_008e3768)[uVar1 * 3] == param_1) &&
         ((&DAT_008e3770)[uVar1 * 3] != 7)) {
        uVar2 = 1;
        break;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < 1000);
  }
  return uVar2;
}



undefined4 fn_0051e8b0(void)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  uint local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 auStack_40 [16];
  int local_30;
  int local_2c;
  
  bVar1 = true;
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  iVar6 = 0;
  iVar2 = fn_0044cdd0(DAT_0089a7c4,0xf000000b);
  if (iVar2 < 0) {
    uVar5 = 0xf960ebff;
  }
  else {
    while( true ) {
      local_48 = 0;
      local_44 = 0;
      local_50 = 0;
      local_4c = 0;
      uVar3 = fn_0014d6cc(&local_54,L"ubl_:/ubll.lst",1);
      if (-1 < (int)uVar3) break;
      if ((((uVar3 & 0x3fc00) != 0x4400) || ((uVar3 & 0x3ff) < 0xe6)) || (0x153 < (uVar3 & 0x3ff)))
      goto LAB_0051ea30;
      iVar6 = iVar6 + 1;
      if (99 < iVar6) goto LAB_0051ea38;
      fn_0012d6a4(DAT_0089a7c8,DAT_0089a7cc);
    }
    iVar2 = fn_001560d8(&local_54,&local_30);
    if (((-1 < iVar2) && (local_2c == 0 && local_30 == 12000)) &&
       (iVar2 = fn_0014d9ec(&local_54,auStack_40,&DAT_008e3768), -1 < iVar2)) {
      bVar1 = false;
    }
    if ((local_54 & 0xfffffffe) != 0) {
      if ((local_54 & 1) != 0) {
        fn_00146594();
      }
      fn_0015cf8c(local_54 & 0xfffffffe);
      local_54 = 0;
    }
LAB_0051ea30:
    if (bVar1) {
LAB_0051ea38:
      iVar2 = 0;
      iVar6 = 500;
      puVar4 = (undefined4 *)0x8e3764;
      do {
        (&DAT_008e3768)[iVar2 * 3] = 0;
        (&DAT_008e376c)[iVar2 * 3] = 0;
        puVar4[3] = 7;
        (&DAT_008e3774)[iVar2 * 3] = 0;
        (&DAT_008e3778)[iVar2 * 3] = 0;
        iVar6 = iVar6 + -1;
        iVar2 = iVar2 + 2;
        puVar4 = puVar4 + 6;
        *puVar4 = 7;
      } while (iVar6 != 0);
    }
    fn_0016e9e0(DAT_0089a7c4);
    uVar5 = 0;
  }
  if ((local_54 & 0xfffffffe) != 0) {
    if ((local_54 & 1) != 0) {
      fn_00146594();
    }
    fn_0015cf8c(local_54 & 0xfffffffe);
  }
  return uVar5;
}


