#include "006d4434_006d53d8.h"



undefined4 fn_006d53d8(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x1240);
}



void fn_006d53ac(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  fn_001694e4(param_2,param_3 + (uint)*(ushort *)(param_1 + 0xe) + *(int *)(param_1 + 4),param_4);
  return;
}



undefined1 * fn_006d50d4(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  undefined1 *puVar2;
  
  cVar1 = *(char *)(*(int *)(DAT_008bf504 + 0x14) + 0xf);
  if (cVar1 == -1) {
    return &DAT_e0a14827;
  }
  puVar2 = (undefined1 *)fn_006d518c(param_1,cVar1,param_2);
  return puVar2;
}



longlong fn_006d518c(undefined4 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  uint extraout_r1;
  undefined1 auStack_50 [24];
  undefined4 local_38;
  undefined1 local_28 [16];
  
  if (param_2 == 0xff) {
    uVar1 = 0xff;
    if (DAT_008c0630 != 0) {
      uVar1 = 8;
    }
  }
  else {
    uVar1 = 0x3ff00000;
    if (param_3 - 0x100000U < 0x3ff00000) {
      fn_0014f590(local_28);
      fn_0013d5c4(auStack_50);
      fn_004ed6f4(local_28,param_2);
      fn_0050d060(auStack_50,local_28);
      local_38 = *(undefined4 *)(DAT_008bf49c + 0x30);
      fn_0050d090(param_3 + 4,auStack_50);
      fn_0050d178(auStack_50);
      return (ulonglong)extraout_r1 << 0x20;
    }
    if (DAT_008c0630 != 0) {
      uVar1 = 8;
    }
  }
  return CONCAT44(uVar1,0xe0e14826);
}



undefined8
fn_006d4ee0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined1 local_20 [16];
  
  puVar1 = (undefined1 *)fn_006dbecc(DAT_008bf4d4,local_20,param_2,param_3);
  if (-1 < (int)puVar1) {
    uVar3 = fn_006d49a0(param_1,local_20[0],param_4,param_5,param_6);
    return uVar3;
  }
  puVar2 = &DAT_008c0630;
  if (puVar1 == &DAT_d8814829) {
    if (DAT_008c0630 != 0) {
      puVar2 = (undefined4 *)0x8;
    }
    puVar1 = (undefined1 *)0xe0e14826;
  }
  else if (puVar1 == (undefined1 *)0xd0a14830) {
    if (DAT_008c0630 != 0) {
      puVar2 = (undefined4 *)0x8;
    }
    return CONCAT44(puVar2,&DAT_e0a14827);
  }
  return CONCAT44(puVar2,puVar1);
}



undefined1 * fn_006d49a0(int param_1,uint param_2,uint param_3,undefined4 param_4,uint param_5)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  char local_38 [4];
  int iStack_34;
  uint uStack_30;
  uint uStack_2c;
  undefined4 local_28;
  
  if ((*(char *)(param_1 + 0x18) == -3) || (*(char *)(param_1 + 0x19) != '\x03')) {
LAB_006d4e20:
    return &DAT_e0a14827;
  }
  if (((uint)(*(int *)(param_1 + 0x658) * 2) < param_5) ||
     ((((*(uint *)(param_1 + 0x14) & 0xff) <= param_2 ||
       (iVar4 = *(int *)(param_1 + 0x5b4) + param_2 * 0x20, *(char *)(iVar4 + 1) == '\0')) ||
      (uVar1 = 1 << (param_3 & 0xff), (*(uint *)(iVar4 + 4) & uVar1) == 0)))) {
    return (undefined1 *)0xe0e14826;
  }
  iStack_34 = param_1;
  uStack_30 = param_2;
  uStack_2c = param_3;
  local_28 = param_4;
  puVar2 = (uint *)fn_004d7bc8(param_1,param_2,*(int *)(param_1 + 0x668) + param_5);
  if (((*puVar2 & uVar1) == 0) && (param_5 != 0)) {
    return (undefined1 *)0xd1614828;
  }
  if (*(int *)(param_1 + 0x64c) != 0) {
    iVar4 = fn_006d45f0(param_1,local_38,param_5);
    if ((param_5 != 0) && (iVar4 == -0x1f1eb7da)) {
      return (undefined1 *)0xe0e14826;
    }
    if (local_38[0] != '\0') goto LAB_006d4e20;
  }
  iVar3 = *(int *)(param_1 + 0x65c);
  iVar4 = param_5 + *(int *)(param_1 + 0x678);
  if (iVar4 < 0) {
    iVar4 = iVar4 + iVar3;
  }
  else if (iVar3 <= iVar4) {
    iVar4 = iVar4 - iVar3;
  }
  iVar3 = param_1 + param_3 * 8;
  fn_001694e4(local_28,(param_2 * *(int *)(param_1 + 0x65c) + iVar4) * *(int *)(param_1 + 0x650) +
                        *(int *)(iVar3 + 0x5c8) + *(int *)(param_1 + 0x5c0),
               *(undefined4 *)(iVar3 + 0x5cc));
  return (undefined1 *)0x0;
}



undefined4 fn_006d4958(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint local_10;
  
  local_10 = param_4;
  iVar1 = fn_006dbecc(DAT_008bf4d4,&local_10,param_2,param_3);
  if (iVar1 < 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = fn_006d4904(param_1,local_10 & 0xff);
  }
  return uVar2;
}



undefined4 fn_006d4904(int param_1,uint param_2)

{
  char cVar1;
  char *pcVar2;
  
  if (((*(char *)(param_1 + 0x18) != -3) && (param_2 < (*(uint *)(param_1 + 0x14) & 0xff))) &&
     (cVar1 = *(char *)(param_1 + 0x19), (cVar1 == '\x01' || cVar1 == '\x02') || cVar1 == '\x03')) {
    pcVar2 = (char *)(*(int *)(param_1 + 0x5b4) + param_2 * 0x20);
    cVar1 = '\0';
    if (*pcVar2 != '\0') {
      cVar1 = pcVar2[1];
    }
    if (*pcVar2 != '\0' && cVar1 != '\0') {
      return *(undefined4 *)(pcVar2 + 4);
    }
  }
  return 0;
}



uint fn_006d48ac(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(DAT_008c0634 + 4);
  iVar1 = fn_004f0230(1);
  iVar2 = fn_00169f1c((uVar3 & 0xfffffffc) - 0x1c,iVar1);
  return iVar2 * iVar1 - 0x28U & 0xfffffffc;
}



longlong fn_006d45f0(int param_1,undefined1 *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0x3ff00000;
  if (param_2 + -0x100000 < (undefined1 *)0x3ff00000) {
    uVar3 = (uint)*(byte *)(param_1 + 0x18);
    if ((uVar3 == 0xfd) || (*(char *)(param_1 + 0x19) != '\x03')) {
      if (DAT_008c0630 != 0) {
        uVar3 = 8;
      }
      return CONCAT44(uVar3,&DAT_e0a14827);
    }
    if (*(int *)(param_1 + 0x6a8) == 0) {
      uVar1 = *(uint *)(param_1 + 0x654);
    }
    else {
      uVar1 = ((*(int *)(param_1 + 0x6ac) + *(int *)(param_1 + 0x654)) - *(int *)(param_1 + 0x668))
              - 1;
    }
    if (param_3 <= uVar1) {
      iVar2 = fn_006d45c4(param_1,uVar3,*(int *)(param_1 + 0x668) + param_3);
      uVar3 = *(uint *)(param_1 + 0x5bc);
      if (*(int *)(uVar3 + iVar2 * 4) == 0) {
        *param_2 = 0;
      }
      else {
        *param_2 = 1;
      }
      return (ulonglong)uVar3 << 0x20;
    }
    if (DAT_008c0630 != 0) {
      uVar3 = 8;
    }
  }
  else if (DAT_008c0630 != 0) {
    uVar3 = 8;
  }
  return CONCAT44(uVar3,0xe0e14826);
}



int fn_006d45c4(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x65c);
  iVar1 = *(int *)(param_1 + 0x678) + (param_3 - *(int *)(param_1 + 0x668));
  if (iVar1 < 0) {
    iVar1 = iVar1 + iVar2;
  }
  else if (iVar2 <= iVar1) {
    iVar1 = iVar1 - iVar2;
  }
  return iVar1;
}



undefined4 fn_006d4504(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  uVar2 = (uint)*(byte *)(param_1 + 0x18);
  if ((uVar2 != 0xfd) &&
     (*(char *)(param_1 + 0x19) == '\x02' || *(char *)(param_1 + 0x19) == '\x03')) {
    iVar3 = *(int *)(param_1 + 0x6a8);
    bVar5 = iVar3 == 0;
    iVar4 = 0;
    if (!bVar5) {
      param_4 = *(int *)(param_1 + 0x654);
      iVar4 = param_4 - iVar3;
    }
    if (((((bVar5 || param_4 == iVar3) || iVar4 < 0 != (!bVar5 && SBORROW4(param_4,iVar3))) ||
         ((uint)((param_4 + *(int *)(param_1 + 0x6ac)) - iVar3) <= *(uint *)(param_1 + 0x668))) &&
        ((iVar4 = *(int *)(param_1 + 0x5b4) + uVar2 * 0x20, *(char *)(iVar4 + 0x14) == '\0' ||
         ((uint)(*(int *)(param_1 + 0x668) + *(int *)(param_1 + 0x654) + *(int *)(param_1 + 0x6b0))
          <= *(uint *)(iVar4 + 0x18))))) &&
       (iVar4 = *(int *)(iVar4 + 4),
       piVar1 = (int *)fn_004d7bc8(param_1,uVar2,
                                    *(int *)(param_1 + 0x668) + *(int *)(param_1 + 0x654) +
                                    *(int *)(param_1 + 0x6b0)), *piVar1 != iVar4)) {
      return 1;
    }
  }
  return 0;
}



undefined4 fn_006d4434(int param_1,uint param_2)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int in_r12;
  bool bVar6;
  
  uVar3 = (uint)*(byte *)(param_1 + 0x18);
  if (((uVar3 != 0xfd) && (param_2 < 0x10)) &&
     (*(char *)(param_1 + 0x19) == '\x02' || *(char *)(param_1 + 0x19) == '\x03')) {
    iVar4 = *(int *)(param_1 + 0x6a8);
    bVar6 = iVar4 == 0;
    iVar5 = 0;
    if (!bVar6) {
      in_r12 = *(int *)(param_1 + 0x654);
      iVar5 = in_r12 - iVar4;
    }
    if (((((bVar6 || in_r12 == iVar4) || iVar5 < 0 != (!bVar6 && SBORROW4(in_r12,iVar4))) ||
         ((uint)((in_r12 + *(int *)(param_1 + 0x6ac)) - iVar4) <= *(uint *)(param_1 + 0x668))) &&
        ((iVar5 = *(int *)(param_1 + 0x5b4) + uVar3 * 0x20, *(char *)(iVar5 + 0x14) == '\0' ||
         ((uint)(*(int *)(param_1 + 0x668) + *(int *)(param_1 + 0x654) + *(int *)(param_1 + 0x6b0))
          <= *(uint *)(iVar5 + 0x18))))) &&
       ((uVar1 = 1 << (param_2 & 0xff), (*(uint *)(iVar5 + 4) & uVar1) != 0 &&
        (puVar2 = (uint *)fn_004d7bc8(param_1,uVar3,
                                       *(int *)(param_1 + 0x668) + *(int *)(param_1 + 0x654) +
                                       *(int *)(param_1 + 0x6b0)), (*puVar2 & uVar1) == 0)))) {
      return 1;
    }
  }
  return 0;
}


