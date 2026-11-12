#include "0037788c_0037812c.h"



undefined1 * fn_0037812c(int param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_48 [32];
  undefined1 auStack_28 [4];
  int local_24 [2];
  
  fn_00117984();
  fn_0010fa20();
  uVar1 = fn_006eb278();
  iVar2 = fn_005e19a4(uVar1,0);
  fn_005eff40(iVar2,1);
  fn_001028d4(auStack_48,(char *)&DAT_003782ec);
  iVar3 = *param_2;
  uVar1 = fn_002febd8(auStack_48);
  iVar3 = fn_00190fe0(*(int *)(iVar3 + 0x30) + 0x40,auStack_48,uVar1);
  if (iVar3 == 0xffff) {
    fn_001028d4(auStack_48,(char *)&DAT_003782ec);
  }
  fn_006eb304(auStack_28,param_2,auStack_48);
  uVar1 = fn_005eff2c(iVar2,0);
  fn_005e529c(uVar1,auStack_28,*(undefined4 *)(param_1 + 4));
  fn_001028d4(auStack_48,(char *)&DAT_003782fc);
  iVar3 = *param_2;
  uVar1 = fn_002febd8(auStack_48);
  iVar3 = fn_00190fe0(*(int *)(iVar3 + 0x30) + 0x40,auStack_48,uVar1);
  if (iVar3 == 0xffff) {
    fn_001028d4(auStack_48,(char *)&DAT_003782fc);
  }
  fn_006eb304(local_24,param_2,auStack_48);
  fn_005e42a8(iVar2 + 0xc,local_24[0] + 0x30);
  return auStack_28;
}



undefined4 fn_00377fe4(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = fn_00145b00(4,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_0026bb64();
    *piVar2 = (int)&DAT_008347b4;
  }
  piVar3 = *(int **)(param_1 + 8);
  if (piVar3 != piVar2) {
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))(piVar3);
    }
    *(int **)(param_1 + 8) = piVar2;
  }
  if (*(int **)(param_1 + 8) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 8) + 8))();
  }
  return 1;
}



void fn_00377e8c(void)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  bool bVar4;
  
  iVar1 = fn_00174834(DAT_008977e4);
  bVar3 = *(char *)(iVar1 + 0x185eed) != '\0';
  bVar4 = *(char *)(iVar1 + 0x185eef) != '\0';
  if (bVar3 || bVar4) {
    if (!bVar3) {
      uVar2 = fn_00182994(DAT_008977e4);
      fn_00207650(uVar2,6);
      return;
    }
    if (bVar4) {
      uVar2 = fn_00182994(DAT_008977e4);
      fn_00207650(uVar2,8);
      return;
    }
    uVar2 = fn_00182994(DAT_008977e4);
    fn_00207650(uVar2,4);
    return;
  }
  bVar3 = *(char *)(iVar1 + 0x185ef1) == '\0';
  bVar4 = *(char *)(iVar1 + 0x185ef3) == '\0';
  if (bVar3 && bVar4) {
    return;
  }
  if (bVar3) {
    uVar2 = fn_00182994(DAT_008977e4);
    fn_00207650(uVar2,0xc);
    return;
  }
  if (bVar4) {
    uVar2 = fn_00182994(DAT_008977e4);
    fn_00207650(uVar2,10);
    return;
  }
  uVar2 = fn_00182994(DAT_008977e4);
  fn_00207650(uVar2,0xe);
  return;
}



void fn_00377ddc(int *param_1)

{
  undefined1 uVar1;
  int iVar2;
  
  switch((char)param_1[2]) {
  case '\0':
    iVar2 = (**(code **)(*param_1 + 0x18))(param_1);
    if (iVar2 == 0) {
      return;
    }
    uVar1 = 1;
    break;
  case '\x01':
    iVar2 = (**(code **)(*param_1 + 0x1c))(param_1);
    if (iVar2 != 0) {
      *(undefined1 *)(param_1 + 2) = 2;
    }
    return;
  case '\x02':
    (**(code **)(*param_1 + 0x20))(param_1);
    uVar1 = 3;
    break;
  case '\x03':
    iVar2 = fn_0026b74c(param_1);
    if (iVar2 != 0) {
      *(undefined1 *)(param_1 + 2) = 4;
    }
  case '\x04':
                    /* WARNING: Could not recover jumptable at 0x00377e88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x10))(param_1);
    return;
  default:
    return;
  }
  *(undefined1 *)(param_1 + 2) = uVar1;
  return;
}



void fn_00377c40(undefined4 param_1,char *param_2,char *param_3,int param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (*param_2 != '\0') {
    iVar3 = param_4 + param_2[1] * 8 + 0x4180;
  }
  iVar2 = 0;
  if (*param_3 != '\0') {
    iVar2 = param_4 + param_3[1] * 8 + 0x4180;
  }
  if (iVar3 != 0) {
    if (*(char *)(iVar3 + 2) != 0) {
      if ((int)param_2[1] - 0x20U < 2) {
        fn_0017419c();
      }
      else {
        fn_00174398(param_4 + *(char *)(iVar3 + 2) * 0x418 + -0x4080,0);
      }
    }
    cVar1 = param_2[2];
    *(char *)(iVar3 + 2) = cVar1;
    if (cVar1 != 0) {
      if ((int)param_2[1] - 0x20U < 2) {
        fn_0017419c();
      }
      else {
        fn_00174398(param_4 + cVar1 * 0x418 + -0x4080,1);
      }
    }
  }
  if (iVar2 != 0) {
    if (*(char *)(iVar2 + 2) != 0) {
      if ((int)param_3[1] - 0x20U < 2) {
        fn_0017419c();
      }
      else {
        fn_00174398(param_4 + *(char *)(iVar2 + 2) * 0x418 + -0x4080,0);
      }
    }
    cVar1 = param_3[2];
    *(char *)(iVar2 + 2) = cVar1;
    if (cVar1 != 0) {
      if ((int)param_3[1] - 0x20U < 2) {
        fn_0017419c();
        return;
      }
      fn_00174398(param_4 + cVar1 * 0x418 + -0x4080,1);
      return;
    }
  }
  return;
}



void fn_003779c4(undefined4 *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = 0;
  *param_1 = &DAT_008289ec;
  uVar2 = *(undefined4 *)(param_1[0x19] + 0x2c);
  do {
    fn_0042238c(param_1 + uVar1 * 0x20 + 0x21,uVar2);
    uVar1 = uVar1 + 1;
  } while (uVar1 < 4);
  if (param_1[0x1a] != -1) {
    fn_0016a43c(uVar2);
    param_1[0x1a] = 0xffffffff;
  }
  fn_00100414(param_1 + 0x21,&DAT_004223f0,0x80,4);
  fn_0068ad5c(param_1);
  fn_002feef8();
  return;
}



int fn_003778f4(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 unaff_r4;
  
  iVar1 = fn_00145b00(0x288,&DAT_00812c8c);
  if (iVar1 == 0) {
    return 0;
  }
  puVar2 = (undefined4 *)fn_0068ab5c();
  *puVar2 = &DAT_008289ec;
  if (param_1 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*param_1)(param_1);
    do {
      if (puVar3 == &DAT_00890360) goto LAB_00377974;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  param_1 = (undefined4 *)0x0;
LAB_00377974:
  puVar2[0x1b] = 0;
  puVar2[0x19] = param_1;
  puVar2[0x1a] = 0xffffffff;
  *(undefined1 *)(puVar2 + 0x20) = 0xff;
  iVar1 = fn_00101a1c(puVar2 + 0x21,&LAB_004223b8,0x80,4,unaff_r4);
  *(undefined1 *)(iVar1 + 0x200) = 0;
  *(undefined1 *)(iVar1 + 0x201) = 0xff;
  *(undefined1 *)(iVar1 + 0x202) = 0;
  *(undefined4 *)(iVar1 + -0x14) = 0;
  *(undefined4 *)(iVar1 + -0x10) = 0;
  *(undefined4 *)(iVar1 + -0xc) = 0;
  return iVar1 + -0x84;
}



undefined4 fn_003778b4(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = fn_004218b4(param_1 + iVar2 * 0x80 + 0x84);
    if (iVar1 != 0) {
      return 1;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  return 0;
}



void fn_0037788c(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    fn_004221b0(param_1 + iVar1 * 0x80 + 0x84);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  return;
}


