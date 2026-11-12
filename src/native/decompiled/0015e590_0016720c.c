#include "0015e590_0016720c.h"

static void svc_0x23(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x23 }
#endif
}


void fn_001670d8(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,int param_5,
                 undefined4 param_6,uint param_7,undefined4 param_8,int param_9)

{
  uint uVar1;
  uint uVar2;
  undefined1 *puVar3;
  
  param_3 = param_3 & 0x7fffff;
  puVar3 = (undefined1 *)(*(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x20) * 0x1c);
  *puVar3 = 2;
  *(undefined4 *)(puVar3 + 4) = param_2;
  *(undefined4 *)(puVar3 + 8) = param_4;
  uVar2 = *(uint *)(puVar3 + 0xc);
  *(uint *)(puVar3 + 0xc) = param_3 | uVar2 & 0xff800000;
  if (param_5 == 0x10) {
    *(uint *)(puVar3 + 0xc) = param_3 | uVar2 & 0xfe000000;
  }
  else {
    if (param_5 == 0x18) {
      uVar2 = param_3 | uVar2 & 0xfe000000 | 0x800000;
    }
    else {
      if (param_5 != 0x20) goto LAB_00167160;
      uVar2 = param_3 | uVar2 & 0xfe000000 | 0x1000000;
    }
    *(uint *)(puVar3 + 0xc) = uVar2;
  }
LAB_00167160:
  uVar2 = *(uint *)(puVar3 + 0x18);
  uVar1 = uVar2 & 0xff800000 | param_7 & 0x7fffff;
  *(uint *)(puVar3 + 0x18) = uVar1;
  *(undefined4 *)(puVar3 + 0x14) = param_8;
  if (param_9 == 0x10) {
    uVar1 = uVar2 & 0xfe000000 | param_7 & 0x7fffff;
  }
  *(undefined4 *)(puVar3 + 0x10) = param_6;
  if (param_9 == 0x10) {
    *(uint *)(puVar3 + 0x18) = uVar1;
  }
  else {
    if (param_9 == 0x18) {
      uVar2 = uVar1 & 0xfe7fffff | 0x800000;
    }
    else {
      if (param_9 != 0x20) goto code_r0x001671bc;
      uVar2 = uVar1 & 0xfe7fffff | 0x1000000;
    }
    *(uint *)(puVar3 + 0x18) = uVar2;
  }
code_r0x001671bc:
  fn_00150284();
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  if (((DAT_008e3108 == param_1) && (DAT_008e307a != '\0')) && (DAT_008e3079 == '\0')) {
    DAT_008e3079 = '\x01';
    fn_0016720c();
  }
  fn_00150294();
  return;
}



void fn_0016720c(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 *puVar8;
  uint uVar9;
  bool bVar10;
  
  iVar1 = DAT_008e3108;
  if ((DAT_008e3080 != '\x01') &&
     (iVar2 = *(int *)(DAT_008e3108 + 0x24), iVar2 < *(int *)(DAT_008e3108 + 0x20))) {
    do {
      if (DAT_008e307c + *(int *)(iVar1 + 0x28) <= iVar2) {
        return;
      }
      puVar8 = (undefined1 *)(*(int *)(iVar1 + 0x18) + iVar2 * 0x1c);
      switch(*puVar8) {
      case 0:
        fn_00157c00(*(undefined4 *)(puVar8 + 8),*(undefined4 *)(puVar8 + 4),
                     *(undefined4 *)(puVar8 + 0xc),~*(uint *)(puVar8 + 0x10) & 1);
        break;
      case 1:
        fn_0015f920(*(undefined4 *)(puVar8 + 4),*(undefined4 *)(puVar8 + 8),
                     ~(*(uint *)(puVar8 + 0xc) >> 2) & 1,*(uint *)(puVar8 + 0xc) & 1);
        break;
      case 2:
        fn_00157c34(*(int *)(puVar8 + 4),
                     *(int *)(puVar8 + 4) + (*(uint *)(puVar8 + 0xc) & 0x7fffff),
                     *(undefined4 *)(puVar8 + 8),*(uint *)(puVar8 + 0xc) >> 0xf & 0x300 | 1,
                     *(int *)(puVar8 + 0x10),
                     (*(uint *)(puVar8 + 0x18) & 0x7fffff) + *(int *)(puVar8 + 0x10),
                     *(undefined4 *)(puVar8 + 0x14),*(uint *)(puVar8 + 0x18) >> 0xf & 0x300 | 1);
        break;
      case 3:
        uVar3 = *(uint *)(puVar8 + 0x14);
        uVar5 = *(uint *)(puVar8 + 0xc);
        uVar6 = *(uint *)(puVar8 + 0x10);
        uVar7 = uVar3 << 0x19;
        uVar9 = uVar6 & 0xffff;
        bVar10 = (uVar5 & 0xffff) <= uVar9;
        uVar4 = (uVar3 & 0x7f) >> 6;
        if (bVar10) {
          uVar7 = uVar6 >> 0x10;
        }
        if (!(bVar10 && uVar5 >> 0x10 <= uVar7)) {
          uVar4 = uVar4 | 4;
        }
        fn_00157c14(*(undefined4 *)(puVar8 + 4),uVar5 & 0xffff,uVar5 >> 0x10,
                     *(undefined4 *)(puVar8 + 8),uVar9,uVar6 >> 0x10,
                     uVar3 >> 6 & 0x20 |
                     (uVar3 & 0x200) << 7 |
                     (uVar3 & 0x180) << 0x11 | uVar4 | (uVar3 & 7) << 8 | (uVar3 & 0x38) << 9 |
                     uVar3 >> 9 & 2);
        break;
      case 4:
        uVar7 = *(uint *)(puVar8 + 0x10);
        if (((uVar7 & 0xffff) != 0) || (uVar4 = 0, (*(uint *)(puVar8 + 0x14) & 0xffff) != 0)) {
          uVar4 = 4;
        }
        fn_00157c54(*(undefined4 *)(puVar8 + 4),*(undefined4 *)(puVar8 + 8),
                     *(undefined4 *)(puVar8 + 0xc),uVar7 >> 0x10,uVar7 & 0xffff,
                     *(uint *)(puVar8 + 0x14) >> 0x10,*(uint *)(puVar8 + 0x14) & 0xffff,uVar4 | 8);
      }
      iVar2 = *(int *)(iVar1 + 0x24) + 1;
      *(int *)(iVar1 + 0x24) = iVar2;
      if (puVar8[2] == '\x01') {
        DAT_008e3080 = 1;
        return;
      }
    } while (iVar2 < *(int *)(iVar1 + 0x20));
  }
  return;
}



void fn_00164230(int param_1)

{
  int iVar1;
  
  iVar1 = fn_0016533c(*(undefined4 *)(param_1 + 0x84));
  if (iVar1 == 0) {
    return;
  }
  fn_001667e0(iVar1 + 10,0x200);
  return;
}



void fn_00164208(int param_1)

{
  int iVar1;
  
  iVar1 = fn_0016533c(*(undefined4 *)(param_1 + 0x84));
  if (iVar1 == 0) {
    return;
  }
  fn_001667e0(iVar1 + 10,0x100);
  return;
}



void fn_00162ce4(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined2 *)(param_1 + 2) = 0xffff;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}



void fn_001627b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
                 undefined1 param_5)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0016a50c();
  puVar1[2] = param_3;
  *puVar1 = &DAT_0084545c;
  puVar1[1] = param_2;
  *(undefined1 *)(puVar1 + 3) = param_4;
  *(undefined1 *)((int)puVar1 + 0xd) = param_5;
  *(undefined1 *)((int)puVar1 + 0xe) = 0;
  *(undefined1 *)((int)puVar1 + 0xf) = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  *(undefined1 *)(puVar1 + 8) = 0;
  *(undefined1 *)((int)puVar1 + 0x21) = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  return;
}



void fn_0016278c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0016a8e4(param_1,param_2,0,0,param_3);
  *puVar1 = &DAT_008412d0;
  return;
}



void fn_00161bac(undefined4 *param_1)

{
  param_1[1] = 0;
  *param_1 = &DAT_00857fd4;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  return;
}



void fn_001618cc(undefined4 *param_1)

{
  param_1[1] = param_1 + 1;
  *param_1 = 0;
  param_1[2] = param_1 + 1;
  param_1[3] = 0;
  param_1[4] = param_1 + 4;
  param_1[5] = param_1 + 4;
  param_1[6] = 0;
  param_1[7] = param_1 + 7;
  param_1[8] = param_1 + 7;
  param_1[9] = 0;
  param_1[10] = param_1 + 10;
  param_1[0xb] = param_1 + 10;
  param_1[0xe] = 0;
  param_1[0xd] = 0x7fffffff;
  param_1[0xc] = 1;
  param_1[0xf] = 0x3f800000;
  param_1[0x10] = 0;
  param_1[0x11] = 0xffffffff;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  return;
}



void fn_0016184c(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_1[0xd];
  if ((param_2 <= iVar1) && (iVar1 = param_2, param_2 < 0)) {
    iVar1 = 0;
  }
  param_1[0xc] = iVar1;
  while (param_1[0xc] < *param_1) {
    (**(code **)(*(int *)(param_1[4] + -0x108) + 0x10))();
  }
  return;
}



void fn_001603f8(uint *param_1,uint param_2)

{
  *param_1 = param_2 << 0x18 | ((param_2 & 0xffff) >> 8) << 0x10 |
             ((param_2 & 0xffffff) >> 0x10) << 8 | param_2 >> 0x18;
  return;
}



undefined4 * fn_0015ecdc(int param_1)

{
  undefined4 *puVar1;
  
  if (DAT_008b63b4 == (code *)0x0) {
    puVar1 = (undefined4 *)fn_002fecec((param_1 + 3U & 0xfffffffc) + 8);
  }
  else {
    puVar1 = (undefined4 *)(*DAT_008b63b4)();
  }
  *puVar1 = DAT_008b63b8;
  return puVar1 + 2;
}



void fn_0015e590(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  bool bVar2;
  int aiStack_20 [2];
  
  DAT_008e3261 = 0;
  DAT_008e3262 = 0xf251;
  DAT_008e3260 = 0;
  DAT_008e3264 = param_1;
  DAT_008e3268 = param_2;
  while( true ) {
    fn_00170704(&DAT_008e32e0);
    if ((DAT_0089a634 != 0) || (uVar1 = fn_0011c0d0(&DAT_0089a634,"err:f"), -1 < (int)uVar1)) {
      uVar1 = 0;
    }
    if (-1 < (int)uVar1) break;
    bVar2 = uVar1 == 0xd0401834;
    if (bVar2) {
      uVar1 = (uint)DAT_008e3260;
    }
    if (!bVar2 || uVar1 != 2) goto LAB_00123bf0;
    fn_0012d6a4(&DAT_004c4b40,0);
    fn_001707b4(&DAT_008e32e0);
  }
  fn_0012d68c(&DAT_008e326c,0xffff8001);
  aiStack_20[0] = DAT_0089a634;
  fn_0013c8e8(aiStack_20,&DAT_008e3260);
  if (DAT_0089a634 != 0) {
    svc_0x23();
    DAT_0089a634 = 0;
  }
LAB_00123bf0:
  fn_001707b4(&DAT_008e32e0);
  if (DAT_008e3260 != 2 && DAT_008e3260 != 5) {
    aiStack_20[0] = 0;
    aiStack_20[1] = 0;
    fn_0014ddb8(aiStack_20,1);
    fn_0015def0(aiStack_20);
  }
  return;
}


