#include "0051b484_0051c328.h"



undefined4 * fn_0051c328(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)fn_004eddf4();
  *puVar1 = &DAT_008572d8;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 15000;
  puVar1[0x13] = 0;
  uVar2 = fn_004ed2e8();
  iVar3 = fn_00656e14(0x14,uVar2);
  uVar2 = 0;
  if (iVar3 != 0) {
    uVar2 = fn_004ed164();
  }
  puVar1[0x15] = uVar2;
  return puVar1;
}



void fn_0051c11c(int param_1)

{
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(int *)(param_1 + 0x4c) != 0) {
    if (DAT_008c0690 != 0) {
      fn_005196a0();
    }
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  if (**(char **)(param_1 + 0x54) == '\x01') {
    fn_004ed068();
    return;
  }
  return;
}



uint fn_0051bc70(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint unaff_r7;
  int iVar7;
  
  cVar1 = **(char **)(param_1 + 0x54);
  if (cVar1 == '\x01') {
    return 5;
  }
  if (((cVar1 == '\x02' || cVar1 == '\x03') || cVar1 == '\x04') &&
     (*(int *)(*(char **)(param_1 + 0x54) + 4) < 0)) {
    return 1;
  }
  uVar6 = *(uint *)(param_1 + 0x40);
  iVar7 = *(int *)(param_1 + 0x44);
  iVar2 = *(int *)(*(int *)(param_1 + 0x50) + 0x2c);
  uVar4 = *(uint *)(iVar2 + 0x40);
  iVar2 = *(int *)(iVar2 + 0x44);
  puVar3 = (undefined4 *)fn_004f0ce8();
  iVar2 = fn_0011c134(uVar4 - uVar6,iVar2 - (iVar7 + (uint)(uVar4 < uVar6)),*puVar3,puVar3[1]);
  if (0 < iVar2) {
    iVar2 = *(int *)(*(int *)(param_1 + 0x50) + 0x2c);
    uVar5 = *(undefined4 *)(iVar2 + 0x44);
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(iVar2 + 0x40);
    *(undefined4 *)(param_1 + 0x44) = uVar5;
  }
  *(code **)(param_1 + 0x24) = fn_0051bd7c;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(char **)(param_1 + 0x2c) = "ProcessConnectionRequestJob::SendConnectionResponse";
  return unaff_r7 & 0xff00;
}



uint fn_0051bd7c(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  uint unaff_r6;
  int iVar4;
  undefined1 auStack_60 [76];
  
  uVar1 = *(uint *)(param_1 + 0x50);
  iVar4 = *(int *)(uVar1 + 0x28);
  if (iVar4 != 0) {
    fn_00301f50(auStack_60,0x4c);
    uVar3 = 0xfd;
    fn_006da3ac(iVar4,auStack_60,(int)*(char *)(param_1 + 0x58));
    if (*(char *)(param_1 + 0x58) != '\0') {
      uVar3 = *(undefined1 *)(*(int *)(param_1 + 0x50) + 0x14);
    }
    uVar1 = *(uint *)(param_1 + 0x44);
    iVar4 = fn_00519798(DAT_008c0690,param_1 + 0x4c,auStack_60,0x4c,uVar3,
                         *(int *)(param_1 + 0x50) + 4,
                         *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x50) + 0x28) + 0xc));
    if (-1 < iVar4) {
      iVar4 = *(int *)(param_1 + 0x50);
      if (0xb < *(byte *)(iVar4 + 0x14)) {
        uVar2 = *(undefined4 *)(DAT_008bf4d4 + 0xc);
        *(undefined4 *)(iVar4 + 0x58) = *(undefined4 *)(DAT_008bf4d4 + 8);
        *(undefined4 *)(iVar4 + 0x5c) = uVar2;
      }
      *(code **)(param_1 + 0x24) = fn_0051bb88;
      *(undefined4 *)(param_1 + 0x28) = 0;
      *(char **)(param_1 + 0x2c) = "ProcessConnectionRequestJob::WaitResponseAck";
      return unaff_r6 & 0xff00 | 5;
    }
    if (*(uint *)(DAT_008bf49c + 0x34) <= *(uint *)(param_1 + 0x44) &&
        (uint)(*(uint *)(param_1 + 0x40) <= *(uint *)(DAT_008bf49c + 0x30)) <=
        *(uint *)(DAT_008bf49c + 0x34) - *(uint *)(param_1 + 0x44)) {
      return uVar1 & 0xff00 | 5;
    }
    uVar1 = fn_004ed158(*(undefined4 *)(param_1 + 0x54),
                         *(uint *)(DAT_008bf49c + 0x30) - *(uint *)(param_1 + 0x40));
  }
  return uVar1 & 0xff00 | 1;
}



uint fn_0051bb88(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  uint unaff_r5;
  
  iVar1 = fn_006db318(DAT_008c0690,*(undefined4 *)(param_1 + 0x4c));
  if (iVar1 == 0) {
    if ((((*(char *)(param_1 + 0x58) == '\0') &&
         (*(int *)(DAT_008bf4d4 + 100) - 0x100000U < 0x3ff00000)) &&
        (*(byte *)(*(int *)(param_1 + 0x50) + 0x14) < 0xc)) &&
       (*(byte *)(*(int *)(DAT_008bf4cc + 0xa4) + 0x14) < 0xc)) {
      fn_00510e04();
    }
  }
  else {
    if (*(uint *)(DAT_008bf49c + 0x34) <= *(uint *)(param_1 + 0x44) &&
        (uint)(*(uint *)(param_1 + 0x40) <= *(uint *)(DAT_008bf49c + 0x30)) <=
        *(uint *)(DAT_008bf49c + 0x34) - *(uint *)(param_1 + 0x44)) {
      return param_4 & 0xff00 | 5;
    }
    fn_004ed158(*(undefined4 *)(param_1 + 0x54));
    fn_005196a0(DAT_008c0690,*(undefined4 *)(param_1 + 0x4c));
  }
  *(undefined4 *)(param_1 + 0x4c) = 0;
  return unaff_r5 & 0xff00 | 1;
}



void fn_0051ba28(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return;
  }
  iVar2 = param_1 + 0xf4;
  fn_004edc34(iVar2);
  uVar1 = 0;
  if (*(uint *)(param_1 + 0xf0) != 0) {
    do {
      if (*(int *)(param_1 + uVar1 * 4 + 0xc0) == param_2) {
        *(undefined4 *)(param_1 + uVar1 * 4 + 0xc0) = 0;
        fn_004edc70(iVar2);
        return;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 0xf0));
  }
  fn_004edc70(iVar2);
  return;
}



undefined4 fn_0051b8d8(int param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  if (param_2 < 0xd) {
    *(uint *)(param_1 + 0xf0) = param_2;
    uVar1 = fn_004ed2e8(param_1);
    iVar2 = fn_00656e14(param_2 * 0x54,uVar1);
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      uVar3 = 0;
      if (param_2 != 0) {
        do {
          if (iVar2 + uVar3 * 0x54 != 0) {
            fn_00124e48();
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < param_2);
      }
    }
    *(int *)(param_1 + 0xbc) = iVar2;
    *(undefined4 *)(param_1 + 0xc0) = 0;
    *(undefined4 *)(param_1 + 0xc4) = 0;
    *(undefined4 *)(param_1 + 200) = 0;
    *(undefined4 *)(param_1 + 0xcc) = 0;
    *(undefined4 *)(param_1 + 0xd0) = 0;
    *(undefined4 *)(param_1 + 0xd4) = 0;
    *(undefined4 *)(param_1 + 0xd8) = 0;
    *(undefined4 *)(param_1 + 0xdc) = 0;
    *(undefined4 *)(param_1 + 0xe0) = 0;
    *(undefined4 *)(param_1 + 0xe4) = 0;
    *(undefined4 *)(param_1 + 0xe8) = 0;
    uVar1 = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
  }
  else {
    uVar1 = 0xe0e14826;
  }
  return uVar1;
}



void fn_0051b884(int param_1)

{
  fn_004edc34(param_1 + 0xf4);
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  *(undefined4 *)(param_1 + 0xec) = 0;
  fn_004edc70(param_1 + 0xf4);
  return;
}



undefined1 * fn_0051b784(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  
  if (param_2 == 0) {
    return (undefined1 *)0xe0e14826;
  }
  iVar1 = param_1 + 0xf4;
  fn_004edc34();
  uVar3 = *(uint *)(param_1 + 0xf0);
  uVar2 = 0;
  if (uVar3 != 0) {
    do {
      uVar4 = *(uint *)(param_1 + uVar2 * 4 + 0xc0);
      bVar5 = param_2 <= uVar4;
      if (uVar4 != param_2) {
        uVar2 = uVar2 + 1;
        bVar5 = uVar2 <= uVar3;
      }
    } while (bVar5 && (uVar4 != param_2 && uVar3 != uVar2));
  }
  if (uVar3 != uVar2) {
    fn_00518140(*(int *)(param_1 + 0xbc) + uVar2 * 0x54,param_3);
    fn_004edc70(iVar1);
    return (undefined1 *)0x0;
  }
  uVar2 = 0;
  if (uVar3 != 0) {
    do {
      bVar5 = *(int *)(param_1 + uVar2 * 4 + 0xc0) == 0;
      if (!bVar5) {
        uVar2 = uVar2 + 1;
      }
    } while ((bVar5 || uVar2 <= uVar3) && (!bVar5 && uVar3 != uVar2));
  }
  if (uVar3 == uVar2) {
    fn_004edc70(iVar1);
    return &DAT_e0a14827;
  }
  *(uint *)(param_1 + uVar2 * 4 + 0xc0) = param_2;
  fn_00518140(*(int *)(param_1 + 0xbc) + uVar2 * 0x54,param_3);
  fn_004edc70(iVar1);
  return (undefined1 *)0x0;
}



undefined8 fn_0051b484(int param_1,uint param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (0xb < param_2) {
    if (DAT_008c0630 != 0) {
      uVar2 = 8;
    }
    return CONCAT44(uVar2,0xe0e14826);
  }
  if (*(char *)(param_1 + 0x14) == '\0') {
    if (DAT_008c0630 != 0) {
      uVar2 = 8;
    }
    return CONCAT44(uVar2,&DAT_e0a1482b);
  }
  if (*(char *)(param_1 + 0x15) == '\0') {
    if (DAT_008c0630 != 0) {
      uVar2 = 8;
    }
  }
  else {
    cVar1 = *(char *)(param_1 + 0x2c);
    if ((cVar1 == '\0' || cVar1 == '\x04') || cVar1 == '\x05') {
      *(undefined1 *)(param_1 + 0x2c) = 0;
      *(undefined1 *)(param_1 + 0x38) = 0;
      *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x50) = 0;
      *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
      *(undefined1 *)(param_1 + 0x58) = 0;
      *(undefined4 *)(param_1 + 0x30) = 0;
      *(undefined4 *)(param_1 + 0x34) = 0;
      *(undefined4 *)(param_1 + 0x40) = 0;
      *(undefined4 *)(param_1 + 0x44) = 0;
      *(char *)(param_1 + 0x4c) = (char)param_2;
      return 0;
    }
  }
  if (DAT_008c0630 != 0) {
    uVar2 = 8;
  }
  return CONCAT44(uVar2,&DAT_e0a14827);
}


