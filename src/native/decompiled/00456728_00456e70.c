#include "00456728_00456e70.h"

static void svc_0x19(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x19 }
#endif
}

static void svc_0x23(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x23 }
#endif
}


void fn_00456e70(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined *local_28;
  code *local_24;
  undefined4 uStack_20;
  undefined *local_1c;
  undefined1 auStack_18 [12];
  
  iVar2 = fn_001249d0();
  iVar2 = fn_0048a058(*(undefined4 *)(iVar2 + 0x10),*(undefined4 *)(param_1 + 0xe0));
  if (iVar2 == 0) {
    fn_004b2f04(param_1);
    return;
  }
  cVar1 = *(char *)(param_1 + 0x78);
  if ((cVar1 != '\x02' && cVar1 != '\x03') && cVar1 != '\x04') {
    fn_004b2e68(param_1,0xfa);
    return;
  }
  local_38 = *(int *)(param_1 + 0xa0);
  uStack_34 = *(undefined4 *)(param_1 + 0xa4);
  uStack_30 = *(undefined4 *)(param_1 + 0xa8);
  local_2c = 0x80680006;
  piVar3 = (int *)fn_004b8d4c(auStack_18,&local_2c);
  if (local_38 == *piVar3) {
    local_24 = fn_00456f50;
    uStack_20 = 0;
    local_1c = &DAT_00456f48;
    local_28 = &DAT_00853500;
    fn_00479c98(param_1,&local_28);
    return;
  }
  fn_004b9e68(param_1,&local_38);
  return;
}



void fn_00456dd4(int param_1)

{
  int iVar1;
  undefined4 local_18;
  
  if ((*(char *)(param_1 + 0x11c) != '\0') && (*(int *)(param_1 + 0x118) != 0)) {
    svc_0x23();
    *(undefined4 *)(param_1 + 0x118) = 0;
  }
  local_18 = 0;
  if (*(int *)(param_1 + 0x118) == 0) {
    iVar1 = fn_00158ef8(&local_18,0);
    if (-1 < iVar1) {
      iVar1 = 0;
      *(undefined4 *)(param_1 + 0x118) = local_18;
    }
  }
  else {
    iVar1 = -0x1f5fe7c5;
  }
  if (iVar1 < 0) {
    fn_0015e294();
  }
  svc_0x19();
  if (*(int *)(param_1 + 0x118) < 0) {
    fn_0015e294();
  }
  *(undefined1 *)(param_1 + 0x11c) = 1;
  return;
}



void fn_00456aa0(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar1 = *(undefined4 *)(param_2 + 8);
  uVar2 = *(undefined4 *)(param_2 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 0x10);
  uVar4 = *(undefined4 *)(param_2 + 0x14);
  uVar5 = *(undefined4 *)(param_2 + 0x18);
  uVar6 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  *(undefined4 *)(param_1 + 0x18) = uVar5;
  *(undefined4 *)(param_1 + 0x1c) = uVar6;
  return;
}



void fn_00456a78(undefined4 *param_1)

{
  *param_1 = &DAT_008528bc;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)((int)param_1 + 5) = 2;
  return;
}



void fn_00456a48(undefined4 *param_1,uint param_2,uint param_3)

{
  *param_1 = &DAT_008528bc;
  param_1[1] = 0;
  *(undefined1 *)((int)param_1 + 5) = 2;
  param_1[2] = param_2 << 0x18 | (param_2 >> 8 & 0xff) << 0x10 | (param_2 >> 0x10 & 0xff) << 8 |
               param_2 >> 0x18;
  *(ushort *)((int)param_1 + 6) = (ushort)((param_3 & 0xff) << 8) | (ushort)(param_3 >> 8) & 0xff;
  return;
}



void fn_00456a28(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  *param_1 = &DAT_008528bc;
  uVar1 = *(undefined4 *)(param_2 + 8);
  uVar2 = *(undefined4 *)(param_2 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 0x10);
  uVar4 = *(undefined4 *)(param_2 + 0x14);
  uVar5 = *(undefined4 *)(param_2 + 0x18);
  uVar6 = *(undefined4 *)(param_2 + 0x1c);
  param_1[1] = *(undefined4 *)(param_2 + 4);
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  param_1[4] = uVar3;
  param_1[5] = uVar4;
  param_1[6] = uVar5;
  param_1[7] = uVar6;
  return;
}



void fn_00456a1c(int param_1,uint param_2)

{
  *(ushort *)(param_1 + 6) = (ushort)((param_2 & 0xff) << 8) | (ushort)(param_2 >> 8) & 0xff;
  return;
}



void fn_004569f4(undefined4 *param_1,int param_2)

{
  fn_004569e8(param_2,*param_1);
  *(ushort *)(param_2 + 6) = *(ushort *)(param_1 + 1) << 8 | *(ushort *)(param_1 + 1) >> 8;
  return;
}



void fn_004569e8(int param_1,uint param_2)

{
  *(uint *)(param_1 + 8) =
       param_2 << 0x18 | (param_2 >> 8 & 0xff) << 0x10 | (param_2 >> 0x10 & 0xff) << 8 |
       param_2 >> 0x18;
  return;
}



void fn_004569c8(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &DAT_00853388;
  iVar1 = fn_00170f54(param_1 + 10);
  fn_00455018(iVar1 + -0x28);
  return;
}



void fn_00456958(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &DAT_00852880;
  if (param_1[9] != 0) {
    param_1[9] = 0;
  }
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  fn_004b63a4(param_1 + 5,&DAT_007dddfc);
  fn_004b63a4(param_1 + 7,&DAT_007dddfc);
  iVar1 = fn_00170f54(param_1 + 7);
  iVar1 = fn_00170f54(iVar1 + -8);
  fn_0047f3e8(iVar1 + -0x14);
  fn_00455018();
  return;
}



undefined4 * fn_00456728(undefined4 *param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  undefined4 *puVar6;
  uint uVar7;
  int *piVar8;
  code *pcVar9;
  uint uVar10;
  int *piVar11;
  
  *param_1 = &DAT_00852864;
  iVar1 = fn_001249d0();
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0xc);
  }
  if (iVar1 != 0 && iVar2 != 0) {
    iVar2 = fn_001249d0();
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(iVar2 + 0xc);
    }
    piVar3 = (int *)(iVar2 + 0x50);
    (**(code **)(*piVar3 + 8))();
    if (*(char *)(param_1 + 4) == '\x01') {
      fn_00456510(param_1,4);
    }
    if (param_1[0x11] != 0) {
      iVar2 = fn_001249d0();
      fn_00489f34(*(undefined4 *)(iVar2 + 0x10),param_1[0x11]);
      param_1[0x11] = 0;
    }
    (**(code **)(*piVar3 + 0xc))(piVar3);
  }
  if ((int *)param_1[0x14] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x14] + 4))();
    param_1[0x14] = 0;
  }
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  uVar4 = param_1[0xb];
  uVar7 = param_1[0xc];
  if (uVar4 < uVar7) {
    param_3 = uVar7 - uVar4;
  }
  if (uVar4 < uVar7) {
    uVar10 = (param_3 & 7) >> 2;
  }
  else {
    uVar10 = 0;
  }
  iVar1 = uVar10 + 1;
  iVar2 = (int)(uVar7 - uVar4) >> 2;
  if (iVar1 < iVar2 + 1) {
    do {
      iVar1 = iVar1 + 2;
    } while (iVar1 < iVar2 + 1);
  }
  if (uVar4 != 0) {
    if (*(code **)(uVar4 - 8) == (code *)0x0) {
      fn_0030233c();
    }
    else {
      (**(code **)(uVar4 - 8))();
    }
  }
  piVar11 = param_1 + 5;
  piVar3 = (int *)param_1[9];
  if (piVar3 != (int *)0x0) {
    piVar5 = (int *)*piVar3;
    while (piVar5 != piVar3) {
      piVar8 = (int *)param_1[9];
      if (piVar5 != (int *)param_1[9]) {
        piVar8 = (int *)*piVar5;
        *(int *)piVar5[1] = *piVar5;
        *(int *)(*piVar5 + 4) = piVar5[1];
        param_1[10] = param_1[10] + -1;
        *piVar5 = param_1[6];
        param_1[6] = piVar5;
      }
      piVar5 = piVar8;
    }
    puVar6 = (undefined4 *)param_1[9];
    *puVar6 = param_1[6];
    param_1[6] = puVar6;
    piVar3 = (int *)*piVar11;
    while (piVar3 != (int *)0x0) {
      *piVar11 = *piVar3;
      if (piVar3[2] != 0) {
        pcVar9 = *(code **)(piVar3[2] + -8);
        if (pcVar9 == (code *)0x0) {
          fn_0030233c();
        }
        else {
          (*pcVar9)();
        }
      }
      if (piVar3 != (int *)0x0) {
        if ((code *)piVar3[-2] == (code *)0x0) {
          fn_0030233c(piVar3 + -2);
        }
        else {
          (*(code *)piVar3[-2])();
        }
      }
      piVar3 = (int *)*piVar11;
    }
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
  }
  *param_1 = &DAT_00853740;
  param_1[1] = 0;
  return param_1;
}


