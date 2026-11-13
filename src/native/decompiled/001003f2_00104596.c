#include "001003f2_00104596.h"

static void svc_0xc00740(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0xc00740 }
#endif
}


/* WARNING: Instruction at (ram,0x001046c8) overlaps instruction at (ram,0x001046c6)
    */

undefined4 fn_00104596(int param_1,undefined4 param_2)

{
  int iVar1;
  uint *puVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 ***pppuVar10;
  uint unaff_r5;
  undefined4 *unaff_r6;
  undefined4 *unaff_r7;
  undefined4 *puVar11;
  int *piVar12;
  undefined4 unaff_r8;
  uint unaff_r9;
  uint unaff_r10;
  uint unaff_r11;
  undefined4 in_r12;
  undefined4 *in_lr;
  char cVar13;
  bool bVar14;
  char cVar15;
  bool bVar16;
  bool bVar17;
  undefined4 in_cr0;
  undefined4 in_cr1;
  undefined4 in_cr9;
  undefined4 in_cr11;
  undefined4 in_cr13;
  undefined4 in_cr15;
  undefined8 uVar18;
  int iStack_494;
  int iStack_490;
  int iStack_48c;
  int *piStack_488;
  int iStack_484;
  int iStack_480;
  undefined4 uStack_47c;
  undefined1 *puStack_478;
  undefined1 auStack_474 [512];
  undefined1 auStack_274 [12];
  undefined1 auStack_268 [12];
  undefined1 auStack_25c [12];
  undefined4 **local_250;
  undefined4 *local_24c;
  int *local_248;
  int *local_244;
  undefined4 local_240;
  undefined4 local_23c;
  undefined1 local_238;
  undefined1 auStack_237 [7];
  int local_230;
  undefined4 *local_22c;
  int local_228;
  undefined4 local_224;
  int *local_220;
  undefined4 auStack_21c [128];
  int iStack_1c;
  undefined4 local_18;
  
  puVar6 = (undefined4 *)0x0;
  pppuVar10 = (undefined4 ***)0x0;
  bVar17 = SCARRY4(param_1,0x14);
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  iStack_1c = param_1;
  local_18 = param_2;
  if ((int)((uint)*(byte *)(param_1 + 4) << 0x1c) < 0) {
    in_lr = (undefined4 *)0x1045b9;
    uVar18 = fn_00104358(param_1,0,0,param_1 + 0x20);
    puVar6 = (undefined4 *)((ulonglong)uVar18 >> 0x20);
    bVar17 = false;
    if ((int)uVar18 == 0) goto LAB_001046c6_2;
    iVar1 = (uint)*(byte *)(param_1 + 0x10) << 0x1d;
    puVar6 = (undefined4 *)-(iVar1 >> 0x1f);
    if (puVar6 == (undefined4 *)0x0) {
      puVar11 = *(undefined4 **)(param_1 + 8);
      unaff_r6 = *(undefined4 **)(param_1 + 0x24);
    }
    else {
      puVar11 = (undefined4 *)&local_238;
      unaff_r6 = (undefined4 *)auStack_237;
      local_238 = (undefined1)local_18;
      pppuVar10 = &local_250;
    }
    unaff_r7 = puVar11;
    if (*(int *)(param_1 + 0x24) == 0) {
      bVar16 = -1 < iVar1;
      bVar17 = false;
      puVar2 = (uint *)0x0;
      if (!bVar16) goto LAB_001045de;
      goto LAB_001046d2;
    }
LAB_001045de:
    if (*(int *)(param_1 + 0x24) == *(int *)(param_1 + 0x28)) {
LAB_001045f8:
      local_23c = *(undefined4 *)(param_1 + 0x3c);
      local_240 = *(undefined4 *)(param_1 + 0x38);
      unaff_r5 = 0;
      (*(unsigned int *)((unsigned char *)auStack_237 + 3)) = ((*(unsigned int *)((unsigned char *)auStack_237 + 3)) & ~0xffffffff) | ((param_1 + 0x34) & 0xffffffff);
      if ((*(byte *)(param_1 + 4) & 1) != 0) {
        fn_0030428c(&local_250,param_1,0,2);
        fn_00304168((*(unsigned int *)((unsigned char *)auStack_237 + 3)),&local_250);
      }
      fn_00304168(param_1 + 0x40,(*(unsigned int *)((unsigned char *)auStack_237 + 3)));
      local_224 = fn_0030414c(param_1 + 0x2c);
      in_lr = (undefined4 *)0x10463d;
      iVar1 = fn_00103904();
      local_228 = param_1 + 0x30;
      if (iVar1 == 0) {
        local_220 = &iStack_1c;
        unaff_r7 = auStack_21c;
        local_230 = 0;
        local_22c = (undefined4 *)0x0;
        pppuVar10 = (undefined4 ***)puVar11;
        while (puVar11 = unaff_r7, local_22c != unaff_r6) {
          local_244 = &local_230;
          local_250 = &local_22c;
          local_248 = local_220;
          in_lr = (undefined4 *)0x104683;
          local_24c = unaff_r7;
          uVar18 = fn_00304258(local_224,&local_240,pppuVar10,unaff_r6);
          puVar6 = (undefined4 *)((ulonglong)uVar18 >> 0x20);
          bVar17 = SBORROW4((int)uVar18,2);
          if ((int)uVar18 == 2) goto LAB_001046c6_2;
          pppuVar10 = (undefined4 ***)&DAT_00000001;
          in_lr = (undefined4 *)0x104695;
          uVar18 = fn_0030445c(local_228,auStack_21c,1,local_230 - (int)unaff_r7);
          puVar6 = (undefined4 *)((ulonglong)uVar18 >> 0x20);
          bVar17 = false;
          if ((int)uVar18 == 0) goto LAB_001046c6_2;
          unaff_r5 = (local_230 - (int)unaff_r7) + unaff_r5;
          pppuVar10 = (undefined4 ***)local_22c;
        }
      }
      else {
        unaff_r5 = (int)unaff_r6 - (int)puVar11;
        pppuVar10 = (undefined4 ***)&DAT_00000001;
        in_lr = (undefined4 *)0x104655;
        uVar18 = fn_0030445c(local_228,puVar11,1,unaff_r5);
        puVar6 = (undefined4 *)((ulonglong)uVar18 >> 0x20);
        bVar17 = false;
        if ((int)uVar18 == 0) goto LAB_001046c6_2;
      }
      puVar2 = (uint *)(*(unsigned int *)((unsigned char *)auStack_237 + 3));
      uVar7 = *(uint *)(*(unsigned int *)((unsigned char *)auStack_237 + 3));
      bVar17 = SCARRY4(uVar7,unaff_r5);
      puVar6 = (undefined4 *)(uVar7 + unaff_r5);
      bVar14 = (int)puVar6 < 0;
      bVar16 = puVar6 == (undefined4 *)0x0;
      if (!CARRY4(uVar7,unaff_r5) || bVar16) {
        *puVar11 = in_lr;
        puVar11[-1] = &local_250;
        puVar11[-2] = puVar2;
        *(undefined4 *)(param_1 + -4) = 0x1046be;
        *(undefined4 *)(param_1 + -8) = in_r12;
        *(uint *)(param_1 + -0xc) = unaff_r11;
        *(uint *)(param_1 + -0x10) = unaff_r9;
        *(undefined4 ****)(param_1 + -0x14) = pppuVar10;
        *(uint **)(param_1 + -0x18) = puVar2;
      }
      if (bVar17) {
        unaff_r6 = (undefined4 *)((int)puVar6 + (int)pppuVar10 * -2);
      }
      if (bVar16) {
        *(char *)((int)puVar2 - ((uint)puVar2 >> 0x18)) = (char)puVar11;
      }
      if (bVar16 || bVar14 != bVar17) {
        puVar2 = (uint *)(unaff_r5 & (int)puVar2 >> 0x1f);
      }
      unaff_r7 = puVar11;
      if (CARRY4(uVar7,unaff_r5)) {
        in_lr = (undefined4 *)((uint)puVar2 & unaff_r10);
      }
      goto code_r0x001046ca;
    }
    in_lr = (undefined4 *)0x1045ed;
    iVar1 = fn_00304138(param_1,local_18);
    if (iVar1 != 0) goto LAB_001045f8;
    bVar16 = -1 < (int)((uint)*(byte *)(param_1 + 0x10) << 0x1d);
    puVar2 = (uint *)0x0;
    if (!bVar16) goto LAB_001045f8;
  }
  else {
LAB_001046c6_2:
    puVar2 = (uint *)0x0;
    bVar16 = true;
    bVar14 = false;
code_r0x001046ca:
    if (bVar14 != bVar17) {
      bVar17 = SBORROW4((int)puVar2 >> 7,0x1046d2);
      param_1 = ((int)puVar2 >> 7) + -0x1046d2;
      bVar14 = param_1 < 0;
      bVar16 = param_1 == 0;
    }
    if (bVar14 != bVar17) {
      puVar2 = puVar2 + 0x10;
      coprocessor_loadlong(0,in_cr11,puVar2);
    }
LAB_001046d2:
    if (bVar17) {
      *puVar2 = (uint)puVar2;
      puVar2[1] = unaff_r5;
      puVar2[2] = (uint)unaff_r6;
      puVar2[3] = (uint)unaff_r7;
      puVar2[4] = unaff_r11;
      puVar2[5] = (uint)&local_250;
      puVar2[6] = (uint)in_lr;
      puVar2 = puVar2 + 7;
    }
    if (!bVar16) {
      *puVar6 = in_lr;
      puVar6[-1] = &local_250;
      puVar6[-2] = unaff_r9;
      puVar6[-3] = unaff_r6;
      puVar6[-4] = unaff_r5;
    }
  }
  if (bVar16) {
    unaff_r9 = (uint)puVar2 ^ (int)in_lr << 0x13;
  }
  coprocessor_store2(1,in_cr15,unaff_r9 - 0x3fc);
  cVar13 = '\0';
  coprocessor_store(1,in_cr13,puVar2);
  if (puVar2 == (uint *)0x0) {
    svc_0xc00740();
    *in_lr = 0xffffffdc;
    in_lr[1] = pppuVar10;
    in_lr[2] = unaff_r8;
    in_lr[3] = in_r12;
    in_lr[4] = in_lr;
    in_lr[5] = 0x1046f8;
    coprocessor_function(6,0,0,in_cr0,in_cr9,in_cr1);
  }
  cVar15 = param_1 < 0;
  fn_00104a60();
  fn_00104a3c();
  piVar3 = (int *)fn_00103980(&local_18);
  if (cVar15 != cVar13) {
    piVar3 = (int *)((int)piVar3 + 0x7de);
  }
  if (piVar3[9] == 0) {
code_r0x00104736:
    iVar1 = piVar3[6];
    piStack_488 = piVar3 + 0x10;
    piVar12 = piVar3 + 0xd;
    if (iVar1 != 0) {
      iVar8 = piVar3[5];
      iVar9 = piVar3[0x13];
      uStack_47c = fn_003044ec(piVar3 + 0xb);
      iVar5 = func_0x0010396a();
      if (iVar5 < 1) {
        iVar5 = 0;
        puStack_478 = auStack_274;
        iStack_48c = 0;
        iStack_484 = 0;
        iStack_480 = piVar3[6];
        iStack_490 = piVar3[0x12];
        iStack_494 = piVar3[0x11];
        iVar1 = piVar3[5] + piVar3[0x13] * 2;
        while (iStack_48c != iStack_480) {
          iVar1 = fn_00304508(uStack_47c,&iStack_494,iVar1,iStack_480,&iStack_48c,auStack_474,
                               puStack_478,&iStack_484);
          if (iVar1 == 2) {
            return 0xffffffff;
          }
          iVar5 = (iStack_484 - (int)auStack_474) + iVar5;
          iVar1 = iStack_48c;
        }
        fn_00304270(auStack_268,piStack_488,iVar5);
        fn_00304168(piVar12,auStack_268);
        piVar3[0xf] = iStack_490;
        piVar3[0xe] = iStack_494;
      }
      else {
        fn_00304168(piVar12,piStack_488);
        *piVar12 = *piVar12 + ((iVar1 - iVar8 >> 1) - iVar9) * iVar5;
      }
      uVar4 = fn_003040f4(auStack_25c,0xffffffff);
      fn_00304520(auStack_274,piVar3,piVar3[0xd],0);
      iVar1 = func_0x003042aa(auStack_274,uVar4);
      if (iVar1 != 0) goto code_r0x00104802;
      fn_0010399e(piVar3[5],piVar3[6] + piVar3[0x13] * -2);
      iVar1 = piVar3[5] + piVar3[0x13] * 2;
      piVar3[6] = iVar1;
      piVar3[7] = iVar1;
    }
    fn_00304168(piStack_488,piVar12);
    uVar4 = 0;
    piVar3[9] = 0;
    piVar3[8] = 0;
    piVar3[10] = 0;
  }
  else {
    uVar4 = (**(code **)(*piVar3 + 0x28))(piVar3,0xffffffff);
    iVar1 = fn_003044d8(piVar3,uVar4);
    if (iVar1 == 0) goto code_r0x00104736;
code_r0x00104802:
    uVar4 = 0xffffffff;
  }
  return uVar4;
}



void fn_00100704(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *local_48 [6];
  undefined1 *local_30;
  undefined1 *local_2c;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 uStack_10;
  undefined4 local_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  local_48[0] = &uStack_8;
  local_20 = 0xffffffff;
  local_18 = 0;
  local_30 = &LAB_00102a0c_1;
  local_2c = &LAB_00102a2c_1;
  local_24 = param_1;
  local_1c = param_1;
  uStack_10 = param_1;
  local_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  fn_002fef4c(&local_24,param_2,local_48);
  return;
}



void fn_001003f2(int param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(param_1 + -1);
  do {
    pcVar1 = pcVar3 + 1;
    pcVar3 = pcVar3 + 1;
  } while (*pcVar1 != '\0');
  do {
    cVar2 = *param_2;
    param_2 = param_2 + 1;
    *pcVar3 = cVar2;
    pcVar3 = pcVar3 + 1;
  } while (cVar2 != '\0');
  return;
}


