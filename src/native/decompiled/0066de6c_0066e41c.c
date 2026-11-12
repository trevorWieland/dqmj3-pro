#include "0066de6c_0066e41c.h"

static void svc_0x24(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x24 }
#endif
}


void fn_0066e41c(int param_1)

{
  fn_0012cf70(*(undefined4 *)(param_1 + 8));
  return;
}



void fn_0066e3f4(undefined4 param_1,undefined1 param_2)

{
  *(undefined1 *)(*(int *)(*(int *)(*(int *)(DAT_00898840 + 4) + 4) + 0x2c) + 0x78) = param_2;
  return;
}



int fn_0066e3bc(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 0;
  do {
    piVar1 = (int *)fn_0013d4ec();
    if (((&DAT_008cfee8)[iVar2 * 3] != *piVar1) || ((&DAT_008cfeec)[iVar2 * 3] != piVar1[1])) {
      iVar3 = iVar3 + 1;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 8);
  return iVar3;
}



void fn_0066e368(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = fn_00674758(*(undefined4 *)(*(int *)(*(int *)(DAT_00898840 + 4) + 4) + 0x2c));
  if (iVar1 == 0) {
    return;
  }
  fn_00676688(*(undefined4 *)(*(int *)(*(int *)(DAT_00898840 + 4) + 4) + 0x24),param_2,param_3);
  return;
}



void fn_0066e31c(int param_1)

{
  do {
    fn_00119854(param_1);
    fn_0012d6a4(1000000,0);
  } while (*(int *)(param_1 + 0x18) != 0);
  return;
}



void fn_0066e300(void)

{
  fn_00671e8c(*(undefined4 *)(*(int *)(*(int *)(DAT_00898840 + 4) + 4) + 0x20));
  return;
}



int fn_0066e28c(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int local_18 [3];
  
  fn_00674100(local_18,*(undefined4 *)(*(int *)(*(int *)(DAT_00898840 + 4) + 4) + 0x2c),param_2);
  if (param_3 == 0) {
    iVar1 = fn_006744e4(*(undefined4 *)(*(int *)(*(int *)(DAT_00898840 + 4) + 4) + 0x2c));
    if (iVar1 == local_18[0]) {
      piVar2 = (int *)fn_0013d4ec();
      return *piVar2;
    }
  }
  return local_18[0];
}



uint fn_0066e224(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  iVar1 = *(int *)(*(int *)(DAT_00898840 + 4) + 4);
  uVar5 = *(undefined4 *)(iVar1 + 0x28);
  uVar4 = *(undefined4 *)(iVar1 + 0x2c);
  uVar2 = fn_00673fc8(uVar4);
  uVar3 = 0;
  if (uVar2 != 0) {
    uVar3 = fn_00670ef8(uVar5);
    uVar3 = uVar2 & uVar3;
    if (*(char *)(param_1 + 0x4d) == '\x01') {
      iVar1 = fn_00674748(uVar4);
      uVar3 = uVar3 & iVar1 != 0;
    }
  }
  return uVar3;
}



undefined4 fn_0066e17c(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  
  uVar4 = 1;
  if (*(int *)(DAT_00898840 + 0x34) != 2) goto LAB_0066e1fc;
  iVar2 = **(int **)(*(int *)(param_1 + 4) + 4);
  bVar1 = *(byte *)(iVar2 + 0x4c);
  if ((bVar1 & 8) == 0) {
LAB_0066e1e0:
    uVar4 = 0;
  }
  else {
    uVar3 = *(uint *)(iVar2 + 0x74);
    svc_0x24();
    if ((int)uVar3 < 0) {
      fn_0015e294(uVar3,bVar1,0,0);
    }
    if ((uVar3 & 0x3ff) != 0x3fe) goto LAB_0066e1e0;
  }
  iVar2 = fn_00666a24(*(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 4) + 0xc));
  if (iVar2 == 0) {
    uVar4 = 0;
  }
LAB_0066e1fc:
  iVar2 = fn_00676624(*(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 4) + 0x24));
  if (iVar2 == 0) {
    uVar4 = 0;
  }
  return uVar4;
}



undefined1 fn_0066e158(int param_1)

{
  undefined1 uVar1;
  
  if ((*(int *)(param_1 + 0x18) == 1 || *(int *)(param_1 + 0x18) == 2) ||
     (uVar1 = 0, *(char *)(param_1 + 0x4e) != '\0')) {
    uVar1 = 1;
  }
  return uVar1;
}



undefined4 fn_0066e13c(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  int local_40;
  undefined4 uStack_3c;
  char local_38 [4];
  undefined4 local_34;
  uint local_30;
  undefined4 local_2c;
  
  iVar2 = *(int *)(*(int *)(*(int *)(DAT_00898840 + 4) + 4) + 0x28);
  local_34 = 1;
  if (DAT_008bf49c == 0) {
    return 0;
  }
  fn_004f121c(DAT_008bf49c,0);
  iVar3 = fn_006d4504(*(undefined4 *)(iVar2 + 0x6c));
  if (iVar3 != 0) {
    uVar7 = 0;
    *(undefined1 *)(iVar2 + 0xc1) = 1;
    do {
      iVar3 = fn_006d4434(*(undefined4 *)(iVar2 + 0x6c),uVar7);
      if (iVar3 != 0) {
        local_34 = (**(code **)(iVar2 + 0x74))(uVar7);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < 0x10);
  }
  uVar7 = fn_004d8894(*(undefined4 *)(iVar2 + 0x6c));
  iVar3 = DAT_00898840;
  *(undefined1 *)(DAT_00898840 + 0x45) = 0;
  if ((uVar7 & 0x80000000) != 0) {
    uVar6 = 0xd82148a4;
    if (uVar7 != 0xd82148a4) {
      uVar6 = 0xd82148aa;
    }
    if (uVar7 == 0xd82148a4 || uVar7 == uVar6) goto LAB_00670bf8;
  }
  *(undefined1 *)(iVar3 + 0x45) = 1;
LAB_00670bf8:
  iVar3 = fn_006d4384(*(undefined4 *)(iVar2 + 0x6c));
  if (iVar3 != 0) {
    local_38[0] = '\0';
    fn_006d45f0(*(undefined4 *)(iVar2 + 0x6c),local_38,0);
    local_2c = fn_0066eb80(DAT_00898840,0xb);
    uVar7 = 0;
    local_30 = 8;
    do {
      fn_00674100(&local_40,local_2c,uVar7);
      piVar4 = (int *)fn_0013d4ec();
      if (((*piVar4 != local_40) && ((**(code **)(iVar2 + 0x7c))(uVar7), local_38[0] == '\0')) &&
         (iVar3 = fn_006d43a8(*(undefined4 *)(iVar2 + 0x6c),local_40,uStack_3c), iVar3 != 0)) {
        uVar6 = fn_006d4958(*(undefined4 *)(iVar2 + 0x6c),local_40,uStack_3c);
        uVar8 = 0;
        do {
          uVar1 = uStack_3c;
          iVar3 = local_40;
          if ((uVar6 & 1 << (uVar8 & 0xff)) != 0) {
            uVar9 = *(undefined4 *)(iVar2 + 0x6c);
            uVar5 = (**(code **)(iVar2 + 0x78))(uVar7,uVar8);
            fn_006d4ee0(uVar9,iVar3,uVar1,uVar8,uVar5,0);
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < 0x10);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < local_30);
  }
  fn_004f121c(DAT_008bf49c,0);
  return local_34;
}



undefined4 fn_0066e090(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if (((iVar1 == 1 || iVar1 == 4) || (iVar1 == 6 || iVar1 == 7)) || (iVar1 == 8 || iVar1 == 9)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



undefined4 * fn_0066df48(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)fn_00145b00(100,&DAT_00812c8c);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = &DAT_00859b90;
    fn_00129688(puVar1);
    fn_002fec40(puVar1 + 1,s_NetworkCommandSILLogin_008c6e86);
    *puVar1 = &DAT_00859be4;
    iVar2 = fn_00119b40(puVar1 + 0x13);
    puVar1 = (undefined4 *)(iVar2 + -0x4c);
    fn_00119b60();
    *puVar1 = &DAT_00859ff8;
  }
  *(undefined4 **)(param_1 + 0x98) = puVar1;
  return puVar1;
}



void fn_0066de74(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = fn_001296d0(DAT_00898840);
  if ((iVar1 == 0) && (*(char *)(DAT_00898840 + 0x60) == '\0')) {
    fn_0066ec18(param_1 + 0x10);
    fn_0066e130(DAT_00898840);
    fn_0066ec10(DAT_00898840);
    *(undefined1 *)(param_1 + 0xe) = 1;
    param_1[0xb] = 1;
    param_1[0xf] = param_2;
    return;
  }
  (**(code **)(*param_1 + 0x20))(param_1,DAT_00898840 + 0x1c);
                    /* WARNING: Could not recover jumptable at 0x0066ded0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1c))(param_1);
  return;
}



void fn_0066de6c(int *param_1)

{
  int iVar1;
  
  iVar1 = fn_001296d0(DAT_00898840);
  if ((iVar1 == 0) && (*(char *)(DAT_00898840 + 0x60) == '\0')) {
    fn_0066ec18(param_1 + 0x10);
    fn_0066e130(DAT_00898840);
    fn_0066ec10(DAT_00898840);
    *(undefined1 *)(param_1 + 0xe) = 1;
    param_1[0xb] = 1;
    param_1[0xf] = 2;
    return;
  }
  (**(code **)(*param_1 + 0x20))(param_1,DAT_00898840 + 0x1c);
                    /* WARNING: Could not recover jumptable at 0x0066ded0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1c))(param_1);
  return;
}


