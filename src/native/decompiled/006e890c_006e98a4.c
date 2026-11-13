#include "006e890c_006e98a4.h"



void fn_006e9850(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0xc) == -1) {
    return;
  }
  uVar1 = fn_006f7a9c(DAT_008977e0);
  iVar2 = *(int *)(param_1 + 4);
  uVar1 = fn_006b7664(uVar1,*(undefined4 *)(param_1 + 0xc));
  *(undefined4 *)(iVar2 + 4) = uVar1;
  fn_006e98a4(param_1,param_2,&DAT_008c7498);
  return;
}



void fn_006e98a4(int param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined1 *local_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 local_d4;
  undefined4 uStack_d0;
  uint local_cc;
  undefined1 *local_c8;
  undefined4 local_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 local_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined1 auStack_a0 [32];
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined1 auStack_5c [68];
  
  fn_007898e0(param_2);
  fn_00183718(&local_cc,*(undefined4 *)(param_1 + 4),param_3);
  local_e4 = local_c8;
  uStack_e0 = local_c4;
  uStack_dc = uStack_c0;
  uStack_d8 = uStack_bc;
  local_d4 = local_b8;
  uStack_d0 = uStack_b4;
  fn_0078998c(param_2);
  uVar3 = 0;
  if (local_cc != 0) {
    do {
      fn_00176ec8(auStack_5c,&local_e4,uVar3);
      fn_0017821c(auStack_a0,auStack_5c,0x44);
      local_c8 = &DAT_008f9d04;
      fn_001008cc(&local_c8,auStack_a0);
      local_c4 = local_80;
      uStack_c0 = uStack_7c;
      uStack_bc = uStack_78;
      local_b8 = local_74;
      uStack_b4 = uStack_70;
      uStack_b0 = uStack_6c;
      local_ac = local_68;
      uStack_a8 = uStack_64;
      uStack_a4 = uStack_60;
      iVar2 = *(int *)(param_2 + 4);
      if (iVar2 == *(int *)(param_2 + 8)) {
        fn_00789678(param_2,iVar2,&local_c8);
      }
      else {
        *(int *)(param_2 + 4) = iVar2 + 0x28;
        if (iVar2 != 0) {
          fn_001c6ba4(iVar2,&local_c8);
        }
      }
      if (local_c8 != &DAT_008f9d04) {
        piVar1 = (int *)(local_c8 + -0xc);
        iVar2 = *piVar1;
        if ((iVar2 == -1) || ((piVar1 != &DAT_008f9cf8 && (*piVar1 = iVar2 + -1, iVar2 == 0)))) {
          fn_001008c4(local_c8 + -0xc,*(int *)(local_c8 + -8) + 0xe,0);
        }
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < local_cc);
  }
  return;
}



int fn_006e9750(int param_1)

{
  return *(int *)(param_1 + 0x10) - *(int *)(param_1 + 0xc) >> 2;
}



int fn_006e9744(int param_1,int param_2)

{
  return *(int *)(param_1 + 0xc) + param_2 * 4;
}



bool fn_006e9714(int param_1)

{
  return *(int *)(param_1 + 0xe0) < *(int *)(param_1 + 0xe4);
}



undefined4 fn_006e9308(undefined4 param_1,short param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = fn_00660e2c((int)param_2);
  if ((iVar1 == 6 || iVar1 == 7) || (iVar1 == 8 || iVar1 == 9)) {
    uVar2 = 1;
  }
  return uVar2;
}



undefined4 fn_006e92b4(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = *(char *)(param_1 + 0x108);
  if ((((cVar1 == '\0' || cVar1 == '\x12') || (cVar1 == '\x13' || cVar1 == '\x14')) ||
      (cVar1 == '\x10' || cVar1 == '\x0f')) || (cVar1 == '\x11')) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



undefined4 * fn_006e902c(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 0x98);
  if (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar1 == &DAT_00899218) {
        return puVar2;
      }
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  return (undefined4 *)0x0;
}



int fn_006e8f88(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = fn_006ba284();
  iVar2 = fn_006ba274(param_1);
  uVar3 = iVar1 * iVar2 + param_2;
  if (((int)uVar3 < 0) ||
     (uVar4 = *(int *)(param_1 + 0xec) - *(int *)(param_1 + 0xe8),
     iVar1 = (int)((longlong)(int)uVar4 * -0x57f57f57 + ((ulonglong)uVar4 << 0x20) >> 0x20),
     (uint)((iVar1 >> 10) - (iVar1 >> 0x1f)) <= uVar3)) {
    return 0;
  }
  return *(int *)(param_1 + 0xe8) + uVar3 * 0x618;
}



undefined4 fn_006e8f10(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(int *)(param_1 + param_2 * 0x18 + 0x20) == 0) || (iVar1 = fn_00100b58(), iVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



int fn_006e8ec0(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  uVar2 = 0;
  do {
    if ((*(int *)(param_1 + uVar2 * 0x18 + 0x20) != 0) && (iVar1 = fn_00100b58(), iVar1 != 0)) {
      iVar3 = iVar3 + 1;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 10);
  return iVar3;
}



undefined4 fn_006e8d10(int param_1)

{
  undefined4 uVar1;
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [32];
  
  fn_0020bbc4(auStack_30,param_1 + 0x10);
  uVar1 = fn_006c02d4(auStack_2c,auStack_28,7);
  return uVar1;
}



void fn_006e8bec(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar4 = 0;
  uVar3 = 0;
  do {
    uVar5 = 0;
    if (uVar3 < (uint)(*(int *)(param_1 + 0xc4) - *(int *)(param_1 + 0xc0) >> 3)) {
      do {
        uVar2 = *(int *)(param_1 + 0xc4) - *(int *)(param_1 + 0xc0) >> 3;
        if (uVar2 <= uVar3) {
          fn_002ff628(9,&DAT_008c7606,&DAT_008c7606,uVar3,uVar2);
        }
        if (*(short *)(*(int *)(param_1 + 0xc0) + uVar3 * 8 + 4) != 0) {
          uVar2 = *(int *)(param_1 + 0xc4) - *(int *)(param_1 + 0xc0) >> 3;
          if (uVar2 <= uVar3) {
            fn_002ff628(9,&DAT_008c7606,&DAT_008c7606,uVar3,uVar2);
          }
          iVar1 = uVar3 * 8;
          uVar3 = uVar3 + 1;
          uVar5 = *(undefined4 *)(*(int *)(param_1 + 0xc0) + iVar1 + 4);
          break;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < (uint)(*(int *)(param_1 + 0xc4) - *(int *)(param_1 + 0xc0) >> 3));
    }
    iVar1 = iVar4 * 4;
    iVar4 = iVar4 + 1;
    *(undefined4 *)(param_2 + iVar1 + 0x56) = uVar5;
    if (6 < iVar4) {
      return;
    }
  } while( true );
}



uint fn_006e890c(undefined4 param_1,int param_2)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (param_2 < 0x14) {
    return 0;
  }
  sVar1 = (short)param_2 + -10;
  iVar5 = (int)sVar1;
  iVar6 = (int)(short)(sVar1 - ((short)param_2 +
                               (((short)(param_2 / 10) + (short)(param_2 >> 0x1f)) -
                               (short)((longlong)param_2 * 0x66666667 >> 0x3f)) * -10));
  fn_0033a3ac(iVar5);
  uVar2 = fn_002e3204();
  fn_0033a3ac(iVar6);
  uVar3 = fn_002e3204();
  iVar4 = param_2;
  if ((uVar2 & uVar3) != 0) {
    do {
      iVar6 = iVar4;
      iVar5 = param_2;
      fn_0033a3ac(iVar5);
      iVar4 = fn_002e3204();
      if (iVar4 == 0) {
        fn_0033a3ac(iVar6);
        iVar4 = fn_002e3204();
        if (iVar4 == 0) goto LAB_006e8a4c;
      }
      param_2 = (int)(short)((short)iVar5 + -1);
      iVar4 = (int)(short)((short)iVar6 + 1);
    } while( true );
  }
  if (uVar2 == 0) {
    if (uVar3 != 0) {
      while( true ) {
        fn_0033a3ac(iVar6);
        iVar4 = fn_002e3204();
        if ((iVar4 == 0) || (iVar4 = fn_0033a3c4(iVar6), iVar4 == 0)) break;
        iVar6 = (int)(short)((short)iVar6 + -10);
      }
    }
  }
  else {
    while( true ) {
      fn_0033a3ac(iVar5);
      iVar4 = fn_002e3204();
      if ((iVar4 == 0) || (iVar4 = fn_0033a3c4(iVar5), iVar4 == 0)) break;
      iVar5 = (int)(short)((short)iVar5 + -10);
    }
  }
LAB_006e8a4c:
  uVar2 = fn_0033a3ac(iVar5);
  iVar4 = fn_0033a3ac(iVar6);
  return uVar2 & 0xffff | iVar4 << 0x10;
}


