#include "001048aa_001048aa.h"

static void svc_0xc00740(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0xc00740 }
#endif
}


/* WARNING: Instruction at (ram,0x001049e8) overlaps instruction at (ram,0x001049e6)
    */

void fn_001048aa(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  undefined2 ***pppuVar6;
  uint unaff_r5;
  undefined2 *unaff_r6;
  undefined2 *unaff_r7;
  undefined2 *puVar7;
  int unaff_r8;
  uint unaff_r9;
  int unaff_r10;
  uint unaff_r11;
  int in_r12;
  undefined2 ***pppuVar8;
  undefined2 ***pppuVar9;
  undefined4 *in_lr;
  char cVar10;
  char cVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined4 in_cr6;
  undefined4 in_cr13;
  undefined4 in_cr15;
  undefined8 uVar14;
  longlong lVar15;
  undefined2 **local_250;
  undefined2 *local_24c;
  int *local_248;
  int *local_244;
  undefined4 local_240;
  undefined4 local_23c;
  int local_238;
  int local_234;
  undefined2 *local_230;
  int local_22c;
  undefined4 local_228;
  undefined2 local_224;
  undefined2 uStack_222;
  int *local_220;
  undefined2 auStack_21c [256];
  int iStack_1c;
  undefined4 local_18;
  
  uVar4 = 0;
  pppuVar6 = (undefined2 ***)0x0;
  uVar13 = SCARRY4(param_1,0x14);
  pppuVar9 = &local_250;
  pppuVar8 = &local_250;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  uVar12 = -1 < (int)((uint)*(byte *)(param_1 + 4) << 0x1c);
  cVar10 = false;
  iStack_1c = param_1;
  local_18 = param_2;
  if (!(bool)uVar12) {
    in_lr = (undefined4 *)0x1048cd;
    uVar14 = fn_00104362(param_1,0,0,param_1 + 0x20);
    uVar4 = (uint)((ulonglong)uVar14 >> 0x20);
    cVar10 = (int)uVar14 < 0;
    uVar12 = (int)uVar14 == 0;
    uVar13 = false;
    if (!(bool)uVar12) {
      iVar1 = (uint)*(byte *)(param_1 + 0x10) << 0x1d;
      if (iVar1 < 0) {
        puVar7 = &local_224;
        unaff_r6 = &uStack_222;
        local_224 = (undefined2)local_18;
        pppuVar6 = &local_250;
      }
      else {
        puVar7 = *(undefined2 **)(param_1 + 8);
        unaff_r6 = *(undefined2 **)(param_1 + 0x24);
      }
      if ((*(int *)(param_1 + 0x24) == 0) && (uVar13 = false, -1 < iVar1)) {
        uVar4 = 0;
        uVar12 = true;
        goto code_r0x001049ea;
      }
      if (*(int *)(param_1 + 0x24) != *(int *)(param_1 + 0x28)) {
        in_lr = (undefined4 *)0x104901;
        iVar1 = fn_003044d8(param_1,local_18);
        if (iVar1 == 0) {
          uVar12 = true;
          uVar4 = 0;
          pppuVar9 = &local_250;
          if (-1 < (int)((uint)*(byte *)(param_1 + 0x10) << 0x1d)) goto LAB_001049f6;
        }
      }
      local_23c = *(undefined4 *)(param_1 + 0x3c);
      local_240 = *(undefined4 *)(param_1 + 0x38);
      unaff_r5 = 0;
      local_238 = param_1 + 0x34;
      if ((*(byte *)(param_1 + 4) & 1) != 0) {
        fn_00304520(&local_250,param_1,0,2);
        fn_00304168(local_238,&local_250);
      }
      fn_00304168(param_1 + 0x40,local_238);
      local_228 = fn_003044ec(param_1 + 0x2c);
      in_lr = (undefined4 *)0x104951;
      iVar1 = fn_0010392e();
      local_22c = param_1 + 0x30;
      if (iVar1 == 0) {
        local_220 = &iStack_1c;
        unaff_r7 = auStack_21c;
        local_234 = 0;
        local_230 = (undefined2 *)0x0;
        uVar4 = 0;
        pppuVar6 = (undefined2 ***)puVar7;
        while( true ) {
          cVar10 = (int)local_230 - (int)unaff_r6 < 0;
          uVar12 = true;
          cVar11 = SBORROW4((int)local_230,(int)unaff_r6);
          if (local_230 == unaff_r6) break;
          local_250 = &local_230;
          local_244 = &local_234;
          local_248 = local_220;
          in_lr = (undefined4 *)0x10499b;
          local_24c = unaff_r7;
          lVar15 = fn_00304508(local_228,&local_240,pppuVar6,unaff_r6);
          iVar1 = (int)lVar15;
          uVar13 = SBORROW4(iVar1,2);
          cVar10 = iVar1 + -2 < 0;
          uVar12 = 1;
          pppuVar8 = &local_250;
          if (iVar1 == 2) goto LAB_001049de;
          pppuVar6 = (undefined2 ***)&DAT_00000001;
          in_lr = (undefined4 *)0x1049ad;
          uVar14 = fn_0030445c(local_22c,auStack_21c,1,local_234 - (int)unaff_r7);
          uVar4 = (uint)((ulonglong)uVar14 >> 0x20);
          cVar10 = (int)uVar14 < 0;
          uVar13 = false;
          uVar12 = 1;
          lVar15 = (ulonglong)uVar4 << 0x20;
          pppuVar8 = &local_250;
          if ((int)uVar14 == 0) goto LAB_001049de;
          unaff_r5 = (local_234 - (int)unaff_r7) + unaff_r5;
          pppuVar6 = (undefined2 ***)local_230;
        }
      }
      else {
        unaff_r5 = (int)unaff_r6 - (int)puVar7 >> 1;
        pppuVar6 = (undefined2 ***)0x2;
        in_lr = (undefined4 *)0x10496d;
        uVar14 = fn_0030445c(local_22c,puVar7,2,unaff_r5);
        uVar4 = (uint)((ulonglong)uVar14 >> 0x20);
        cVar10 = (int)uVar14 < 0;
        uVar12 = (int)uVar14 == 0;
        uVar13 = false;
        lVar15 = (ulonglong)uVar4 << 0x20;
        unaff_r7 = puVar7;
        pppuVar8 = &local_250;
        cVar11 = uVar13;
        if ((bool)uVar12) goto LAB_001049de;
      }
      uVar14 = CONCAT44(uVar4,local_238);
      if (cVar10 == cVar11) {
        in_lr = (undefined4 *)0x1049ca;
        uVar14 = func_0x0021e9d2();
      }
      uVar4 = (uint)((ulonglong)uVar14 >> 0x20);
      iVar1 = (int)uVar14;
      uVar13 = false;
      if ((bool)cVar11) {
        uVar4 = uVar4 & (int)unaff_r9 >> 0x12;
        uVar13 = SCARRY4(uVar4,(int)unaff_r7 * 0x400000);
        in_r12 = uVar4 + (int)unaff_r7 * 0x400000;
        cVar10 = in_r12 < 0;
        uVar12 = in_r12 == 0;
      }
      iVar2 = iVar1;
      if (!(bool)uVar13) {
        iVar2 = iVar1 + -0x140;
        coprocessor_store(0,in_cr6,iVar1);
      }
      lVar15 = CONCAT44(uVar4,iVar2);
      if ((bool)uVar12) {
        svc_0xc00740();
      }
      pppuVar8 = (undefined2 ***)(unaff_r11 & unaff_r5);
      goto LAB_001049de;
    }
  }
  lVar15 = (ulonglong)uVar4 << 0x20;
LAB_001049de:
  puVar7 = unaff_r7;
  if ((bool)cVar10) {
    pppuVar6 = (undefined2 ***)(undefined2 *)lVar15;
  }
  do {
    piVar5 = (int *)((ulonglong)lVar15 >> 0x20);
    uVar4 = (uint)lVar15;
    if (cVar10 != uVar13) {
      unaff_r11 = uVar4 & (0x1049eaU >> (uVar4 & 0x1f) | 0x1049ea << 0x20 - (uVar4 & 0x1f));
      uVar12 = unaff_r11 == 0;
    }
    pppuVar9 = pppuVar8;
    if ((bool)uVar13) {
      *piVar5 = param_1;
      piVar5[1] = unaff_r5;
      piVar5[2] = (int)unaff_r6;
      piVar5[3] = (int)puVar7;
      piVar5[4] = unaff_r8;
      piVar5[5] = unaff_r10;
      piVar5[6] = unaff_r11;
      piVar5[7] = in_r12;
      piVar5[8] = (int)pppuVar8;
      piVar5[9] = 0x1049ee;
    }
code_r0x001049ea:
    if ((bool)uVar12) {
      unaff_r6 = (undefined2 *)(unaff_r9 - (uVar4 >> 0x11));
    }
    if ((bool)uVar13) {
      unaff_r6 = (undefined2 *)(uVar4 ^ 0x1000000a);
    }
LAB_001049f6:
    if ((bool)uVar12) {
      unaff_r9 = uVar4 ^ (int)in_lr << 0x13;
    }
    pppuVar8 = (undefined2 ***)((int)pppuVar9 + -0x3fc);
    coprocessor_storelong2(1,in_cr15,(undefined1 *)((int)pppuVar9 + -0x3fc));
    uVar13 = 0;
    uVar3 = uVar4 - 0x24;
    coprocessor_store(1,in_cr13,uVar4);
    if (uVar4 == 0) {
      svc_0xc00740();
      *in_lr = 0xffffffdc;
      in_lr[1] = pppuVar6;
      in_lr[2] = unaff_r8;
      in_lr[3] = in_r12;
      in_lr[4] = in_lr;
      in_lr[5] = 0x104a10;
    }
    cVar10 = (int)(uVar3 * 0x10000) < 0;
    uVar12 = uVar3 * 0x10000 == 0;
    if ((bool)uVar12) {
      uVar3 = uVar3 ^ unaff_r9 << 0x18;
    }
    uVar14 = fn_00104acc(uVar3);
    if ((bool)uVar12) {
      pppuVar6 = (undefined2 ***)((uint)uVar14 ^ (int)((ulonglong)uVar14 >> 0x20) << 2);
    }
    fn_00104aa8();
    in_lr = (undefined4 *)0x104a25;
    lVar15 = fn_001039aa((undefined1 *)((int)pppuVar9 + -0x1c4));
  } while( true );
}


