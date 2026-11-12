#include "00582a10_005831d8.h"



undefined4 fn_005831d8(int *param_1)

{
  fn_0039bdf4();
  (**(code **)(*param_1 + 0x118))(param_1,DAT_00894e7c,DAT_00894e80,DAT_00894e84);
  fn_0039be98(param_1);
  fn_00583320(param_1);
  return 1;
}



void fn_005831b0(undefined4 param_1)

{
  fn_00583248();
  fn_0039be60(param_1);
  fn_0022ccb4(param_1);
  fn_0039bcdc(param_1);
  return;
}



void fn_00583138(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00842660;
  if ((int *)param_1[0x3e] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x3e] + 4))();
  }
  fn_00431574(param_1);
  fn_002feef8();
  return;
}



undefined4 * fn_005830b8(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar1 = (undefined4 *)fn_0043148c();
  puVar4 = (undefined4 *)0x0;
  *puVar1 = &PTR_LAB_00842660;
  puVar1[0x3c] = 0;
  puVar1[0x3d] = 0;
  puVar1[0x3e] = 0;
  puVar1[0x3f] = 0;
  puVar2 = (undefined4 *)fn_001f74d8(puVar1,0x2d);
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar3 == &DAT_008951dc) {
        puVar4 = puVar2;
        break;
      }
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar1[0x3c] = puVar4;
  return puVar1;
}



void fn_00583048(int *param_1,int param_2,undefined4 param_3)

{
  fn_002c265c();
  if (param_2 == 4) {
    (**(code **)(*param_1 + 0x110))(param_1,6,param_3,0,1);
    return;
  }
  if (param_2 == 6) {
    (**(code **)(*param_1 + 0x110))(param_1,4,param_3,0,1);
  }
  return;
}



void fn_00582fd8(int *param_1,int param_2,undefined4 param_3)

{
  fn_002c2648();
  if (param_2 == 4) {
    (**(code **)(*param_1 + 0x110))(param_1,6,param_3,0,1);
    return;
  }
  if (param_2 == 6) {
    (**(code **)(*param_1 + 0x110))(param_1,4,param_3,0,1);
  }
  return;
}



void fn_00582f70(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  fn_002c263c();
  if (param_2 != 4) {
    return;
  }
  iVar1 = fn_00430f14(param_1,param_3,1);
  if (iVar1 == 0) {
    fn_0042fea4(param_1,param_3);
    fn_0068ab44(param_1,0x100094f);
  }
                    /* WARNING: Could not recover jumptable at 0x00582fcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1b4))(param_1);
  return;
}



void fn_00582f2c(int param_1)

{
  uint uVar1;
  
  uVar1 = fn_006f6a5c();
  if ((uVar1 & 0x100000) == 0) {
    if ((uVar1 & 0x200000) != 0) {
      *(undefined1 *)(*(int *)(param_1 + 0xf0) + 0x18) = 2;
    }
  }
  else {
    *(undefined1 *)(*(int *)(param_1 + 0xf0) + 0x18) = 1;
  }
  fn_00430fb0(param_1);
  return;
}



void fn_00582ed4(int param_1)

{
  char cVar1;
  uint uVar2;
  
  cVar1 = *(char *)(*(int *)(param_1 + 0x5c) + 0x31);
  if (cVar1 == '\x01') {
    if (*(char *)(param_1 + 0x104) == '\x04') {
      *(undefined1 *)(*(int *)(param_1 + 0x100) + 0x1e) = 1;
    }
  }
  else if (cVar1 == '\x02') {
    *(undefined1 *)(param_1 + 0x104) = 0;
  }
  else if (cVar1 == '\x03') {
    fn_00413bf4();
  }
  uVar2 = fn_006f6a5c();
  if ((uVar2 & 0x100000) == 0) {
    if ((uVar2 & 0x200000) != 0) {
      *(undefined1 *)(*(int *)(param_1 + 0xf0) + 0x18) = 2;
    }
  }
  else {
    *(undefined1 *)(*(int *)(param_1 + 0xf0) + 0x18) = 1;
  }
  fn_00430fb0(param_1);
  return;
}



void fn_00582e28(int *param_1,int *param_2)

{
  undefined4 uVar1;
  
  if ((char)param_1[0x1f] == '\0') {
    fn_0068ab44(param_1,0x1000950);
    param_1[0x3f] = (param_1[0x3f] + 1U) % 3;
    (**(code **)(*param_1 + 0x1a8))(param_1,0);
    (*(code *)**(undefined4 **)param_1[0x2d])((undefined4 *)param_1[0x2d],0);
    if (*param_2 < 6) {
      uVar1 = fn_002e3e9c(param_1[0x2d],param_2[1],param_2[2]);
                    /* WARNING: Could not recover jumptable at 0x00582ec4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 400))(param_1,uVar1);
      return;
    }
  }
  return;
}



void fn_00582dc4(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  fn_002c2070();
  if (param_2 != 4) {
    return;
  }
  iVar1 = fn_0043100c(param_1,param_3);
  if (iVar1 == 0) {
    fn_0042fdf8(param_1,param_3);
    fn_0068ab44(param_1,0x100094f);
  }
                    /* WARNING: Could not recover jumptable at 0x00582e1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1b4))(param_1);
  return;
}



void fn_00582c24(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  if (*(int *)(param_2 + 0xc) == 0) {
    fn_0068ab44(param_1,0x100094d);
    return;
  }
  puVar3 = *(undefined4 **)(param_1 + 0x18);
  if (puVar3 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar3)(puVar3);
    do {
      if (puVar1 == &DAT_008944c0) goto LAB_00582c78;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar3 = (undefined4 *)0x0;
LAB_00582c78:
  puVar3[3] = *(undefined4 *)(param_2 + 8);
  puVar3[4] = *(undefined4 *)(param_2 + 4);
  uVar2 = (**(code **)(**(int **)(param_1 + 0xe0) + 0x5c))();
  puVar3[5] = uVar2;
  puVar3[6] = *(undefined4 *)(param_1 + 0xfc);
  puVar3 = (undefined4 *)fn_001f74ec(param_1,0x53);
  if (puVar3 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar3)(puVar3);
    do {
      if (puVar1 == &DAT_008944cc) goto LAB_00582ce4;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar3 = (undefined4 *)0x0;
LAB_00582ce4:
  puVar3[2] = 0;
  puVar3[3] = *(undefined4 *)(param_2 + 0xc);
  fn_006899f4(param_1,0x53,0,1);
  fn_0068ab44(param_1,0x100094b);
  return;
}



void fn_00582b98(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0x18);
  if (piVar2 != (int *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*piVar2)(piVar2);
    do {
      if (puVar1 == &DAT_008944c0) goto LAB_00582bdc;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  piVar2 = (int *)0x0;
LAB_00582bdc:
  (**(code **)(*piVar2 + 0xc))(piVar2);
  if (*(int *)(param_1 + 100) == 6) {
    fn_0068ab44(param_1,0x100094c);
  }
  fn_006899f4(param_1,0x4f,0,1);
  return;
}



void fn_00582b78(int *param_1)

{
  fn_0042fe80();
                    /* WARNING: Could not recover jumptable at 0x00582b94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1b4))(param_1);
  return;
}



void fn_00582b58(int *param_1)

{
  fn_0042fe80();
                    /* WARNING: Could not recover jumptable at 0x00582b74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1b4))(param_1);
  return;
}



void fn_00582b14(int *param_1,int param_2)

{
  fn_004309e8(param_1);
  if (param_2 < 6) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00582b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 400))(param_1,0);
  return;
}



void fn_00582a10(int *param_1,undefined4 param_2)

{
  fn_004309c4();
  (**(code **)(*param_1 + 0x11c))(param_1,param_1[0x2d] + 4,param_2,0);
  (*(code *)**(undefined4 **)param_1[0x2d])((undefined4 *)param_1[0x2d],0);
  fn_00430b80(param_1);
                    /* WARNING: Could not recover jumptable at 0x00582a6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1b4))(param_1);
  return;
}


