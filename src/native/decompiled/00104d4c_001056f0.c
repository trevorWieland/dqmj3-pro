#include "00104d4c_001056f0.h"



undefined * fn_001054b0(undefined4 param_1,char *param_2)

{
  int iVar1;
  
  if (((param_2 == (char *)0x0) || (*param_2 == '\0')) ||
     (iVar1 = fn_003035b0(&DAT_008863b4), iVar1 == 0)) {
    return &DAT_008863c0;
  }
  return (undefined *)0x0;
}



/* WARNING: Removing unreachable block (ram,0x0010542c) */
/* WARNING: Removing unreachable block (ram,0x0010543c) */

void fn_00105408(void)

{
  undefined4 uVar1;
  int iVar2;
  
  DAT_0089a508 = 1;
  fn_001066bc(0x1000000);
  fn_001067f4(0x2700000);
  uVar1 = fn_001066ac();
  fn_001068d4(0x8000000,uVar1);
  fn_00106908();
  iVar2 = fn_001066ac();
  fn_00106ba0(iVar2 + -0x100000);
  return;
}



void fn_001053d0(void)

{
  DAT_008d191c = 0xffffffff;
  DAT_008d1928 = 0xffffffff;
  fn_00106be0(0);
  fn_00106bcc(0);
  return;
}



void fn_00105330(void)

{
  int iVar1;
  
  fn_00106be0(&LAB_00107048,0);
  fn_00106bcc(&LAB_00107024,0);
  fn_0014ddb8(&DAT_0089a4e0,1);
  fn_0013c500(&DAT_008d1914);
  fn_0013c500(&DAT_008d1920);
  fn_0015dfc0(&DAT_0089a4e0);
  fn_00106f78(0);
  iVar1 = fn_0010be8c();
  if ((iVar1 != 0) || (iVar1 = fn_0010bb8c(), iVar1 != 0)) {
    DAT_0089a4cc = 1;
  }
  DAT_0089a4d8 = 0xffffffff;
  DAT_0089a4d4 = 0xffffffff;
  DAT_0089a4cd = 0;
  DAT_0089a4cf = 1;
  return;
}



void fn_00104d4c(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  fn_001078d4();
  fn_00107254(200);
  local_38 = 0;
  local_34 = 0;
  fn_00114248(&local_30);
  local_38 = local_30;
  local_34 = local_2c;
  uVar1 = fn_0011a314(&local_38);
  uVar2 = fn_0011a3c4(&local_38);
  uVar3 = fn_0011a36c(&local_38);
  iVar4 = fn_00114150(uVar3,uVar2,uVar1);
  iVar5 = fn_001084c0(&local_38);
  fn_00107aac(iVar4 + iVar5);
  fn_0010d9d4(iVar4 + iVar5);
  fn_001054f8();
  iVar4 = fn_00145b00(8,&DAT_00812c8c);
  piVar6 = (int *)0x0;
  if (iVar4 != 0) {
    piVar6 = (int *)fn_00105760();
  }
  if (DAT_008931b0 != piVar6) {
    if (DAT_008931b0 != (int *)0x0) {
      (**(code **)(*DAT_008931b0 + 4))();
    }
    DAT_008931b0 = piVar6;
  }
  fn_0010564c();
  iVar4 = fn_00145b00(0x3c,&DAT_00812c8c);
  piVar6 = (int *)0x0;
  if (iVar4 != 0) {
    piVar6 = (int *)fn_00105a84();
  }
  if (DAT_008931a8 != piVar6) {
    if (DAT_008931a8 != (int *)0x0) {
      (**(code **)(*DAT_008931a8 + 4))(DAT_008931a8);
    }
    DAT_008931a8 = piVar6;
  }
  fn_0010581c(DAT_008931a8);
  fn_00105860(DAT_008931a8);
  fn_001237bc();
  local_34 = CONCAT13(((unsigned int)(local_34) >> 24) & 0xff,0x10202);
  local_30 = 0x60000;
  local_2c = 500;
  local_38 = 0x100;
  iVar4 = fn_00145b00(0x68c,&DAT_00812c8c);
  piVar6 = (int *)0x0;
  if (iVar4 != 0) {
    piVar6 = (int *)fn_001084a8();
  }
  if (DAT_008931ac != piVar6) {
    if (DAT_008931ac != (int *)0x0) {
      (**(code **)(*DAT_008931ac + 4))(DAT_008931ac);
    }
    DAT_008931ac = piVar6;
  }
  fn_00107458(&local_38);
  piVar6 = DAT_008931ac;
  uVar1 = fn_00117984();
  fn_0010c924(uVar1,L"rom:/rom/shader/nwfont2_RectDrawerShader.shbin",piVar6);
  iVar4 = fn_00145b00(8,&DAT_00812c8c);
  piVar6 = (int *)0x0;
  if (iVar4 != 0) {
    piVar6 = (int *)fn_001079a0(iVar4,L"rom:/rom/shader/nwfont2_RectDrawerShader.shbin",
                                 L"rom:/rom/Font/DebugFontDummy.bffnt",0x600);
  }
  if (DAT_008931a0 != piVar6) {
    if (DAT_008931a0 != (int *)0x0) {
      (**(code **)(*DAT_008931a0 + 4))(DAT_008931a0);
    }
    DAT_008931a0 = piVar6;
  }
  iVar4 = fn_00145b00(0x60,&DAT_00812c8c);
  piVar6 = (int *)0x0;
  if (iVar4 != 0) {
    piVar6 = (int *)fn_00106510();
  }
  if (DAT_008931a4 != piVar6) {
    if (DAT_008931a4 != (int *)0x0) {
      (**(code **)(*DAT_008931a4 + 4))(DAT_008931a4);
    }
    DAT_008931a4 = piVar6;
  }
  uVar1 = fn_00117984();
  fn_001074c0(uVar1,2);
  fn_0010803c();
  iVar4 = fn_00145b00(8,&DAT_00812c8c);
  if (iVar4 == 0) {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = (int *)fn_00107170();
  }
  if (DAT_0089319c != piVar6) {
    if (DAT_0089319c != (int *)0x0) {
      (**(code **)(*DAT_0089319c + 4))();
    }
    DAT_0089319c = piVar6;
  }
  fn_0010706c(DAT_0089319c,&LAB_00105aec,2);
  fn_00105b48(DAT_008931a4);
  fn_001076bc(0xffffffff);
  do {
    if (DAT_00893194 != '\0') {
LAB_001051f0:
      if (DAT_0089319c != (int *)0x0) {
        (**(code **)(*DAT_0089319c + 4))();
        DAT_0089319c = (int *)0x0;
      }
      fn_00107abc();
      if (DAT_008931a4 != (int *)0x0) {
        (**(code **)(*DAT_008931a4 + 4))();
        DAT_008931a4 = (int *)0x0;
      }
      if (DAT_008931a0 != (int *)0x0) {
        (**(code **)(*DAT_008931a0 + 4))();
        DAT_008931a0 = (int *)0x0;
      }
      fn_0010768c();
      if (DAT_008931ac != (int *)0x0) {
        (**(code **)(*DAT_008931ac + 4))();
        DAT_008931ac = (int *)0x0;
      }
      fn_0013c674();
      fn_0010d23c(DAT_008931a8);
      if (DAT_008931a8 != (int *)0x0) {
        (**(code **)(*DAT_008931a8 + 4))();
        DAT_008931a8 = (int *)0x0;
      }
      fn_001056c0();
      fn_0010555c();
      fn_001073dc();
      fn_0010791c();
      if (DAT_0089a508 == '\0') {
        return;
      }
      iVar4 = fn_00124ffc();
                    /* WARNING: Could not recover jumptable at 0x001078c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(int **)(iVar4 + 4) + 0x14))();
      return;
    }
    uVar1 = fn_00117984();
    fn_001074c0(uVar1,DAT_00893198);
    fn_001056b0();
    fn_0010797c(DAT_008931a0);
    fn_001070c4(DAT_0089319c);
    if (DAT_00897850 != 0) {
      fn_00119854();
    }
    if (DAT_00897838 != 0) {
      fn_00105590();
    }
    fn_001058a4(DAT_008931a8);
    local_38 = fn_00117984();
    fn_00117674();
    if (DAT_00893198 < 2) {
      DAT_00893195 = DAT_00893195 ^ 1;
    }
    else {
      DAT_00893195 = 0;
    }
    if (DAT_00893195 == 0) {
      iVar4 = fn_00108514(DAT_0089319c);
      if ((iVar4 == 0) && (DAT_008931a4[0x17] == 0)) {
        fn_00105b38();
      }
      else {
        fn_00105b14(DAT_008931a4);
      }
      uVar1 = fn_00107558(local_38);
      fn_00106608(uVar1);
      fn_001076f4();
      iVar4 = fn_001076e4();
      if (iVar4 != 0) {
        if (DAT_00897850 != 0) {
          *(undefined1 *)(DAT_00897850 + 0x5b) = 1;
        }
        goto LAB_001051f0;
      }
    }
    else {
      fn_00105b28(DAT_008931a4);
    }
    fn_001056f0(DAT_008931b0);
    uVar1 = fn_00108528(local_38);
    fn_00106580(*(undefined4 *)(DAT_00897804 + 8),uVar1);
    fn_0010d89c(local_38);
    if (DAT_00893195 == 0) {
      fn_001074cc(local_38);
    }
  } while( true );
}



void fn_001056f0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 4);
  if ((*(int *)(iVar2 + 0x1004) < 1) ||
     (iVar1 = *(int *)(iVar2 + 0x1018) + 1, *(int *)(iVar2 + 0x1018) = iVar1, iVar1 < 0x79)) {
    return;
  }
  fn_00170704(iVar2 + 0x1020);
  if (0 < *(int *)(iVar2 + 0x1004)) {
    fn_00301f50(iVar2 + 4,0x1000);
    *(undefined4 *)(iVar2 + 0x1004) = 0;
    *(undefined4 *)(iVar2 + 0x1018) = 0;
  }
  fn_001707b4(iVar2 + 0x1020);
  return;
}



void fn_0010564c(void)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = fn_00145b00(8,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_0010d094();
  }
  if (DAT_008981a8 != piVar2) {
    if (DAT_008981a8 != (int *)0x0) {
      (**(code **)(*DAT_008981a8 + 4))(DAT_008981a8);
    }
    DAT_008981a8 = piVar2;
  }
  fn_0010cfec(DAT_008981a8,10,3);
  return;
}



void fn_00105590(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_0010d56c();
  if ((iVar1 != 0) && (*(int *)(param_1 + 0x18) == -1)) {
    uVar2 = fn_0010887c(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),
                         (char *)&DAT_00105630,*(undefined4 *)(param_1 + 0x14));
    *(undefined4 *)(param_1 + 0x18) = uVar2;
  }
  iVar1 = fn_0010d9a8();
  if (((iVar1 == 0) || (iVar1 = fn_0010d998(), iVar1 == 0)) && (*(int *)(param_1 + 0x18) != -1)) {
    fn_001088e0(*(undefined4 *)(param_1 + 0xc));
    iVar1 = fn_00154a6c();
    if (iVar1 != 0) {
      fn_001103e0(*(undefined4 *)(param_1 + 0xc),param_1 + 0x18);
      fn_0010d57c();
      return;
    }
  }
  return;
}



void fn_001054f8(void)

{
  int iVar1;
  int *piVar2;
  
  fn_0010c444(0,1);
  iVar1 = fn_00145b00(8,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_0010c550();
  }
  if (DAT_00898154 != piVar2) {
    if (DAT_00898154 != (int *)0x0) {
      (**(code **)(*DAT_00898154 + 4))(DAT_00898154);
    }
    DAT_00898154 = piVar2;
  }
  return;
}


