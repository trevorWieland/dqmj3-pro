#include "006d6164_006d690c.h"



undefined4 fn_006d68c8(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  while ((*(char *)(*(int *)(param_1 + 4) + uVar1 * 0x10) != '\x01' &&
         (*(char *)(*(int *)(param_1 + 4) + uVar1 * 0x10 + 0x10) != '\x01'))) {
    uVar1 = uVar1 + 2;
    if (0xb < uVar1) {
      return 0;
    }
  }
  return 1;
}



undefined1 fn_006d689c(int param_1,uint param_2)

{
  if ((param_2 == 0) || (0xc < param_2)) {
    return 0;
  }
  return *(undefined1 *)(*(int *)(param_1 + 4) + param_2 * 0x10 + -0x10);
}



bool fn_006d6880(uint param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*(byte *)(param_1 + 0xe);
  if (uVar1 != 0xff) {
    param_1 = (uint)*(byte *)(param_1 + 0xf);
  }
  return uVar1 != 0xff && uVar1 != param_1;
}



undefined4 fn_006d685c(int param_1)

{
  undefined4 uVar1;
  
  if ((*(char *)(param_1 + 0xe) == -1) || (*(char *)(param_1 + 0xe) != *(char *)(param_1 + 0xf))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



uint fn_006d67fc(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar2 = 0;
  uVar3 = 0;
  iVar4 = 0xc;
  do {
    uVar1 = 1 << (uVar3 & 0xff);
    if (((*(uint *)(param_1 + 0x127c) & uVar1) != 0) &&
       ((param_2 == 0 || ((uint)*(byte *)(param_1 + 0xe) != uVar3 + 1)))) {
      uVar2 = uVar2 | uVar1;
    }
    iVar4 = iVar4 + -1;
    uVar3 = uVar3 + 1;
  } while (iVar4 != 0);
  return uVar2;
}



bool fn_006d67e4(int param_1)

{
  return *(int *)(*(int *)(param_1 + 0x1200) + 0x40) != 0;
}



uint fn_006d67a0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = fn_006d58dc(DAT_008bf504);
  if (iVar1 == 0) {
    return (uint)*(ushort *)(param_1 + param_2 * 2 + 0xe);
  }
  uVar2 = fn_006d6aa8(*(undefined4 *)(DAT_008bf504 + 0x18),param_2);
  return uVar2;
}



uint fn_006d6690(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  uVar2 = 0;
  do {
    if (((*(short *)(param_1 + uVar2 * 2 + 0x10) != *(short *)(param_1 + 0x42)) &&
        (uVar1 = fn_006d6700(param_1), uVar1 != 0xff)) &&
       ((param_2 == 0 || (*(byte *)(param_1 + 0xe) != uVar1)))) {
      uVar3 = uVar3 | 1 << (uVar1 - 1 & 0xff);
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0xc);
  return uVar3;
}



uint fn_006d6700(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  if (*(ushort *)(param_1 + 0x42) != param_2) {
    if (*(ushort *)(param_1 + 0x44) == param_2) {
      return 0xfe;
    }
    iVar1 = fn_006d58dc(DAT_008bf504);
    uVar2 = 0;
    if (iVar1 != 0) {
      if (*(ushort *)(*(int *)(DAT_008bf504 + 0x14) + 0x42) != param_2) {
        iVar1 = *(int *)(*(int *)(DAT_008bf504 + 0x18) + 8);
        uVar2 = 0;
        do {
          if (*(ushort *)(iVar1 + uVar2 * 2) == param_2) {
            uVar2 = uVar2 + 1;
LAB_006d6a88:
            return uVar2 & 0xff;
          }
          if (*(ushort *)(iVar1 + uVar2 * 2 + 2) == param_2) {
            uVar2 = uVar2 + 2;
            goto LAB_006d6a88;
          }
          uVar2 = uVar2 + 2;
        } while (uVar2 < 0xc);
      }
      return 0xff;
    }
    do {
      iVar1 = uVar2 * 2;
      uVar2 = uVar2 + 1 & 0xff;
      if (*(ushort *)(param_1 + iVar1 + 0x10) == param_2) {
        return uVar2;
      }
    } while (uVar2 < 0xc);
  }
  return 0xff;
}



void fn_006d6624(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = fn_006d58dc(DAT_008bf504);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*param_1 + 0x50))(param_1);
    fn_001694e4(param_2,iVar1 + param_3,param_4);
    return;
  }
  fn_006d690c(*(undefined4 *)(DAT_008bf504 + 0x18),param_2,param_3,param_4);
  return;
}



void fn_006d690c(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  fn_001694e4(param_2,*(int *)(param_1 + 0x38) + param_3,param_4);
  return;
}



undefined1 fn_006d6604(int param_1)

{
  undefined1 uVar1;
  
  if (*(int *)(param_1 + 8) - 0x100000U < 0x3ff00000) {
    uVar1 = *(undefined1 *)(*(int *)(param_1 + 8) + 6);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



char fn_006d65d4(int param_1)

{
  char cVar1;
  short *psVar2;
  int iVar3;
  
  cVar1 = '\0';
  iVar3 = 0xc;
  psVar2 = (short *)(param_1 + 0x10);
  do {
    if (*psVar2 != *(short *)(param_1 + 0x42)) {
      cVar1 = cVar1 + '\x01';
    }
    iVar3 = iVar3 + -1;
    psVar2 = psVar2 + 1;
  } while (iVar3 != 0);
  return cVar1;
}



undefined4 fn_006d6594(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (*(ushort *)(param_1 + 0x42) == param_2) {
    uVar1 = 0;
  }
  else if (param_2 == 1) {
    uVar1 = 1;
  }
  else {
    uVar1 = 2;
  }
  return uVar1;
}



int fn_006d6510(int *param_1)

{
  int iVar1;
  
  iVar1 = fn_006d58dc(DAT_008bf504);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*param_1 + 0x50))(param_1);
    return 200 - iVar1;
  }
  return *(int *)(*(int *)(DAT_008bf504 + 0x18) + 0x3c);
}



undefined1 * fn_006d6194(undefined4 param_1,int *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined1 *in_r12;
  bool bVar5;
  
  if (-1 < *param_2) {
    return (undefined1 *)0x0;
  }
  puVar1 = (undefined1 *)*param_2;
  if (puVar1 != (undefined1 *)0xc8a113ea) {
    in_r12 = (undefined1 *)0xe0a113f8;
  }
  if (puVar1 == (undefined1 *)0xc8a113ea || puVar1 == in_r12) {
LAB_006d6258:
    puVar1 = (undefined1 *)0xd0a14867;
  }
  else {
    uVar4 = (uint)puVar1 >> 0x1b;
    if (((uint)puVar1 & 0x80000000) != 0) {
      uVar4 = uVar4 - 0x20;
    }
    if ((uVar4 == 0xfffffffb) && (((uint)puVar1 & 0x3fc00) == 0x6c00)) {
      bVar5 = ((uint)puVar1 & 0x7e00000) == 0xa00000;
      if (bVar5) {
        puVar1 = (undefined1 *)((uint)puVar1 & 0x3ff);
      }
      if (bVar5 && puVar1 == (undefined1 *)0x6) goto LAB_006d6258;
    }
    puVar2 = (undefined1 *)*param_2;
    if (puVar2 == in_r12 || puVar2 == (undefined1 *)0xc8a113ea) {
LAB_006d626c:
      return &DAT_e0a14827;
    }
    puVar3 = (undefined1 *)0xe10113ea;
    puVar1 = (undefined1 *)0xe0e14826;
    if (puVar2 != (undefined1 *)0xe10113ea) {
      puVar3 = (undefined1 *)0xe10113e9;
    }
    if ((puVar2 != (undefined1 *)0xe10113ea && puVar2 != puVar3) && (puVar2 != &DAT_e10113fd)) {
      puVar3 = (undefined1 *)0xc9411002;
      if (puVar2 != (undefined1 *)0xc9411002) {
        puVar3 = (undefined1 *)0xe10113f2;
      }
      else {
        puVar1 = (undefined1 *)0xd8a14825;
      }
      if ((puVar2 != (undefined1 *)0xc9411002 && puVar2 != puVar3) &&
         (puVar2 != (undefined1 *)0xe10113f1)) goto LAB_006d626c;
    }
  }
  return puVar1;
}



undefined4 fn_006d6164(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_006d58dc(DAT_008bf504);
  if (iVar1 == 0) {
    uVar2 = 0x10;
  }
  else {
    uVar2 = *(undefined4 *)(*(int *)(DAT_008bf504 + 0x18) + 0x38);
  }
  return uVar2;
}


