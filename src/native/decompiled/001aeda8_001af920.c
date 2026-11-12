#include "001aeda8_001af920.h"



int fn_001af8ec(uint param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = 0;
  uVar2 = 0;
  iVar3 = 0x13;
  do {
    if ((param_1 & 1 << (uVar2 & 0xff)) != 0) {
      iVar1 = iVar1 + 1;
    }
    iVar3 = iVar3 + -1;
    uVar2 = uVar2 + 1;
  } while (iVar3 != 0);
  return iVar1;
}



void fn_001af874(undefined4 param_1,int param_2)

{
  undefined4 local_160 [60];
  undefined1 local_6f;
  undefined4 local_5c;
  undefined1 auStack_40 [56];
  
  fn_001b14b8(auStack_40,&UNK_007efcf4 + param_2 * 0x36,0x36);
  fn_001b1970(local_160,auStack_40,0);
  local_160[0] = 3;
  local_6f = 1;
  local_5c = 3;
  fn_001b03f0(param_1,0,local_160);
  return;
}



void fn_001af464(undefined4 *param_1,int param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  short *psVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ushort *puVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int iVar15;
  undefined4 uVar16;
  
  if ((*(char *)(param_2 + 0xf2) == '\0') ||
     ((((psVar3 = (short *)fn_001b5248(), *(short *)(param_2 + 0x118) == *psVar3 &&
        (*(short *)(param_2 + 0x11a) == psVar3[1])) && (*(short *)(param_2 + 0x11c) == psVar3[2]))
      && (*(short *)(param_2 + 0x11e) == psVar3[3])))) {
    iVar4 = 0;
    uVar7 = *(undefined4 *)(param_2 + 0xb8);
    uVar13 = *(undefined4 *)(param_2 + 0xbc);
    uVar14 = *(undefined4 *)(param_2 + 0xc0);
    uVar16 = *(undefined4 *)(param_2 + 0xc4);
    *param_1 = *(undefined4 *)(param_2 + 0xb4);
    param_1[1] = uVar7;
    param_1[2] = uVar13;
    param_1[3] = uVar14;
    param_1[4] = uVar16;
    *(undefined2 *)(param_1 + 5) = 0;
    *(undefined4 *)((int)param_1 + 0x16) = *(undefined4 *)(param_2 + 0xca);
    *(undefined4 *)((int)param_1 + 0x1a) = *(undefined4 *)(param_2 + 0xce);
    *(undefined4 *)((int)param_1 + 0x1e) = *(undefined4 *)(param_2 + 0xd2);
    *(undefined4 *)((int)param_1 + 0x22) = *(undefined4 *)(param_2 + 0xd6);
    *(undefined4 *)((int)param_1 + 0x26) = *(undefined4 *)(param_2 + 0xda);
    *(undefined2 *)((int)param_1 + 0x2a) = 0;
    do {
      puVar12 = (ushort *)((int)param_1 + iVar4 * 2);
      uVar1 = *puVar12;
      if (uVar1 == 0) break;
      if ((uVar1 < 0x20) || (uVar1 == 0x7f)) {
        *puVar12 = 0x3f;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 10);
    iVar4 = 0;
    do {
      puVar12 = (ushort *)((int)param_1 + iVar4 * 2 + 0x16);
      uVar1 = *puVar12;
      if (uVar1 == 0) break;
      if ((uVar1 < 0x20) || (uVar1 == 0x7f)) {
        *puVar12 = 0x3f;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 10);
    if (param_3 != 0) {
      iVar15 = *(int *)(param_2 + 0xf8);
      iVar4 = fn_00454388();
      if (iVar15 == 0) {
        if ((iVar4 == 0) || ((iVar4 == 1 || iVar4 == 2) || iVar4 == 3)) goto LAB_001af664;
      }
      else if (iVar15 == 1) {
        if (iVar4 == 4) goto LAB_001af664;
      }
      else if (iVar15 == 2) {
        if (iVar4 == 5) goto LAB_001af664;
      }
      else if (iVar15 == 3 && iVar4 == 6) goto LAB_001af664;
      iVar4 = 0;
      do {
        puVar12 = (ushort *)((int)param_1 + iVar4 * 2);
        uVar1 = *puVar12;
        if (uVar1 == 0) break;
        iVar4 = iVar4 + 1;
        if (0x7f < uVar1) {
          *puVar12 = 0x3f;
        }
      } while (iVar4 < 10);
      iVar4 = 0;
      do {
        puVar12 = (ushort *)((int)param_1 + iVar4 * 2 + 0x16);
        uVar1 = *puVar12;
        if (uVar1 == 0) break;
        iVar4 = iVar4 + 1;
        if (0x7f < uVar1) {
          *puVar12 = 0x3f;
        }
      } while (iVar4 < 10);
    }
  }
  else {
    fn_001b97f0(param_1,DAT_008c0710,0xb);
    fn_001b97f0((int)param_1 + 0x16,DAT_008c0710,0xb);
  }
LAB_001af664:
  fn_006f94f4(param_1 + 0xb,param_2 + 0x108);
  param_1[0xe] = param_1[0xe] & 0xfffffffe | *(uint *)(param_2 + 0xe0) & 1;
  iVar4 = *(int *)(param_2 + 0xe4);
  iVar15 = *(int *)(param_2 + 0xe8);
  if ((iVar4 == 0 && iVar15 == 0) ||
     (((iVar4 != 0 && iVar15 != 0 && (iVar4 - 1U < 0xc)) &&
      (iVar4 = fn_001ba950(), iVar15 <= iVar4)))) {
    uVar5 = param_1[0xe];
    uVar8 = (*(uint *)(param_2 + 0xe4) & 0xf) << 1;
    param_1[0xe] = uVar5 & 0xffffffe1 | uVar8;
    uVar5 = uVar5 & 0xfffffc01 | uVar8 | (*(uint *)(param_2 + 0xe8) & 0x1f) << 5;
  }
  else {
    uVar5 = param_1[0xe] & 0xfffffc01;
  }
  param_1[0xe] = uVar5;
  uVar8 = (*(uint *)(param_2 + 0xec) & 0xf) << 10;
  param_1[0xe] = uVar5 & 0xffffc3ff | uVar8;
  uVar9 = (*(byte *)(param_2 + 0xf0) & 1) << 0xe;
  param_1[0xe] = uVar5 & 0xffff83ff | uVar8 | uVar9;
  uVar10 = *(uint *)(param_2 + 0xac) & 0xff;
  if (0x7f < uVar10) {
    uVar10 = 0x7f;
  }
  uVar6 = *(uint *)(param_2 + 0xb0) & 0xff;
  if (0x7f < uVar6) {
    uVar6 = 0x7f;
  }
  uVar11 = (uVar10 & 0x7f) << 0xf;
  uVar10 = (uVar6 & 0x7f) << 0x16;
  uVar6 = uVar10 | uVar11 | uVar5 & 0xe00003ff | uVar8 | uVar9;
  param_1[0xe] = uVar6;
  if (*(char *)(param_2 + 0xf2) == '\0') {
    uVar6 = uVar10 | uVar11 | uVar5 & 0xc00003ff | uVar8 | uVar9;
  }
  else {
    uVar6 = uVar6 | 0x20000000;
  }
  param_1[0xe] = uVar6;
  param_1[0xe] = uVar6 & 0x3fffffff | *(int *)(param_2 + 0xf8) << 0x1e;
  uVar1 = *(ushort *)((int)param_1 + 0x36);
  uVar2 = (ushort)*(undefined4 *)(param_2 + 0xfc) & 0xf;
  *(ushort *)((int)param_1 + 0x36) = uVar1 & 0xfff0 | uVar2;
  *(ushort *)((int)param_1 + 0x36) =
       uVar1 & 0xff00 | uVar2 | (ushort)((*(uint *)(param_2 + 0x100) & 0xf) << 4);
  uVar5 = param_1[0xf];
  uVar9 = *(uint *)(param_2 + 4) & 0xf;
  param_1[0xf] = uVar5 & 0xfffffff0 | uVar9;
  uVar8 = (*(uint *)(param_2 + 0x14) & 0xff) << 4;
  param_1[0xf] = uVar5 & 0xfffff000 | uVar9 | uVar8;
  param_1[0xf] = uVar5 & 0xffffe000 | uVar9 | uVar8 | (*(uint *)(param_2 + 0x1c) & 1) << 0xc;
  uVar7 = fn_001af920(*(undefined4 *)(param_2 + 8));
  param_1[0x10] = uVar7;
  *(ushort *)((int)param_1 + 0x36) = *(ushort *)((int)param_1 + 0x36) & 0xff;
  param_1[0xf] = param_1[0xf] & 0x1fff;
  return;
}



undefined4 fn_001af920(int param_1)

{
  if (5 < param_1) {
    param_1 = 5;
  }
  return *(undefined4 *)(&DAT_007e1350 + param_1 * 4);
}



undefined4 fn_001af208(int param_1)

{
  int iVar1;
  
  iVar1 = fn_0044d7dc(param_1 + 0x138);
  *(int *)(param_1 + 0x14) = iVar1;
  if (iVar1 < 0) {
    *(undefined4 *)(param_1 + 4) = 0xb;
    *(undefined4 *)(param_1 + 8) = 0xffffff80;
  }
  else {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return *(undefined4 *)(param_1 + 4);
}



void fn_001af1c8(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = fn_00192114();
  *(undefined1 *)(iVar1 + 0xc0) = 0;
  iVar1 = fn_00192114();
  if (*(int *)(iVar1 + 200) == 0 || *(int *)(iVar1 + 200) == 10) {
    iVar1 = fn_00192114();
    *(undefined4 *)(iVar1 + 200) = param_1;
    iVar1 = fn_00192114();
    *(undefined4 *)(iVar1 + 0xcc) = param_2;
  }
  return;
}



undefined4 fn_001aeda8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined1 auStack_28 [16];
  
  uVar8 = 1;
  iVar2 = fn_00191f08();
  iVar1 = DAT_008bf51c;
  if ((((iVar2 != 0) && (DAT_008bf51c != 0)) && (iVar2 = fn_00184c20(1), iVar2 == 0)) &&
     (iVar2 = fn_00184c20(0), iVar2 == 0)) {
    iVar2 = fn_001b00cc(param_1 + 0xc);
    if (((iVar2 != 0) && (iVar2 = fn_001aff30(param_1 + 0xc), iVar2 != 0)) &&
       ((iVar2 = fn_001aff40(param_1 + 4), iVar2 == 0 &&
        (iVar2 = fn_001afea8(param_1 + 4), iVar2 == 0)))) {
      iVar2 = param_1 + 0xc;
      uVar9 = (uint)(iVar2 == 0);
      if (iVar2 != 0) {
        do {
          fn_001af844(auStack_28,uVar9);
          iVar3 = fn_001affc4(auStack_28,iVar2);
          if (iVar3 != 0) goto LAB_001af024;
          uVar9 = uVar9 + 1;
        } while ((int)uVar9 < 6);
      }
      iVar2 = fn_001ae8fc(0,param_1 + 0xc);
      if (iVar2 == 0) {
        iVar2 = iVar1 + 0xc820;
        iVar3 = 0;
        if (0 < *(int *)(iVar1 + 0xc824)) {
          do {
            uVar9 = (uint)*(byte *)(iVar2 + iVar3 + 8);
            iVar4 = fn_001affc4(iVar2 + uVar9 * 0x48 + 0x78,param_1 + 0xc);
            if (iVar4 != 0) {
              if (uVar9 != 0xffffffff) goto LAB_001aef40;
              break;
            }
            iVar3 = iVar3 + 1;
          } while (iVar3 < *(int *)(iVar1 + 0xc824));
        }
        if (*(int *)(iVar1 + 0xc824) < 100) {
          uVar9 = 0;
          do {
            iVar3 = fn_001aff7c(iVar2 + uVar9 * 0x48 + 0x78);
            if (iVar3 != 0) {
              if (uVar9 != 0xffffffff) goto LAB_001aef40;
              break;
            }
            uVar9 = uVar9 + 1;
          } while ((int)uVar9 < 100);
        }
        uVar9 = (uint)*(byte *)(iVar1 + 0xc828);
        fn_002a3298(iVar2,0);
LAB_001aef40:
        fn_0017821c(iVar2 + uVar9 * 0x48 + 0x6c,param_1,0x48);
        uVar7 = *(uint *)(iVar1 + 0xc824);
        if ((int)uVar7 < 1) {
          uVar5 = 0;
        }
        else {
          uVar5 = uVar7 & 1;
          uVar6 = 0;
          if (uVar5 != 0) {
            do {
              if (*(byte *)(iVar2 + uVar6 + 8) == uVar9) goto LAB_001aefc0;
              uVar6 = uVar6 + 1;
            } while ((int)uVar6 < (int)uVar5);
          }
        }
        while( true ) {
          uVar6 = uVar5;
          if ((int)uVar7 <= (int)uVar6) goto LAB_001aefe8;
          if (*(byte *)(iVar2 + uVar6 + 8) == uVar9) goto LAB_001aefc0;
          if (*(byte *)(iVar2 + uVar6 + 9) == uVar9) break;
          uVar5 = uVar6 + 2;
        }
        uVar6 = uVar6 + 1;
LAB_001aefc0:
        if (uVar6 == 0xffffffff) {
LAB_001aefe8:
          if (99 < (int)uVar7) {
            fn_002a3298(iVar2,0);
          }
        }
        else {
          fn_002a3298(iVar2);
        }
        *(char *)(*(int *)(iVar1 + 0xc824) + iVar1 + 0xc828) = (char)uVar9;
        *(int *)(iVar1 + 0xc824) = *(int *)(iVar1 + 0xc824) + 1;
        *(undefined1 *)(iVar1 + 0xe4ac) = 1;
      }
    }
LAB_001af024:
    uVar8 = 0;
  }
  return uVar8;
}



void fn_001af844(undefined4 *param_1,int param_2)

{
  if (param_2 < 6) {
    *param_1 = 0x80;
    param_1[1] = 0xd282ffec;
    *(undefined2 *)(param_1 + 2) = 0;
    *(char *)((int)param_1 + 3) = (char)param_2;
  }
  return;
}


