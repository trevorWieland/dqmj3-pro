/* Byte-exact functions recovered by the fuzzy-first sweep.
 *
 * Each function below was compiled with the measured original profile
 * (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork --c99 -O3 -Otime) and
 * kept only because its placed bytes equal the original extent byte for byte.
 * Every one was re-scored inside this exact file after it was written; a single
 * differing byte would have kept it out. Nothing here is fitted.
 *
 * Address range of this file's functions: 0010b2a4 .. 001467e4.
 */
#include "decompiled.h"
#include "fuzzy_01.h"


void fn_0010b2a4(undefined4 param_1)

{
  DAT_0089a7a0 = param_1;
  return;
}



void fn_001160fc(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00116f6c();
  *puVar1 = DAT_00857c28;
  return;
}



undefined4 * fn_00124c10(undefined4 *param_1)

{
  *(undefined2 *)(param_1 + 1) = 0;
  *(undefined2 *)((int)param_1 + 6) = 0;
  param_1[2] = 0;
  *param_1 = DAT_008561e8;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[0x10a] = 0;
  param_1[0x10b] = 0x80;
  *(undefined1 *)(param_1 + 0x10c) = 0;
  *(undefined1 *)((int)param_1 + 0x431) = 0;
  param_1[0x10d] = 0;
  *(undefined1 *)(param_1 + 0x10e) = 0;
  param_1[0x10f] = 0;
  *(undefined1 *)(param_1 + 0x110) = 0;
  param_1[0x111] = 0;
  *(undefined1 *)(param_1 + 0x112) = 0;
  *(undefined1 *)((int)param_1 + 0x449) = 0;
  *(undefined1 *)((int)param_1 + 0x44a) = 0;
  param_1[0x113] = 0;
  *(undefined1 *)(param_1 + 0x114) = 0;
  *(undefined1 *)((int)param_1 + 0x472) = 0;
  *(undefined2 *)(param_1 + 0x11d) = 0;
  param_1[0x11e] = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  fn_00158f6c((int)param_1 + 0xe,0x202);
  fn_00301f50(param_1 + 0x11f,0x42);
  fn_00158f6c((int)param_1 + 0x452,0x20);
  return param_1;
}



void fn_00124dc4(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0013d574();
  *puVar1 = DAT_008564ac;
  return;
}



int fn_00124e48(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = DAT_00857210;
  iVar1 = fn_0013d5c4(param_1 + 1);
  iVar1 = fn_0013d5c4(iVar1 + 0x28);
  return iVar1 + -0x2c;
}



void fn_00124f90(undefined4 param_1)

{
  fn_0013d6fc(&DAT_008ef56c,param_1);
  return;
}



void fn_0012659c(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00140688(param_1,0);
  *puVar1 = DAT_00857f10;
  return;
}



void fn_001271d4(undefined4 *param_1)

{
  *param_1 = DAT_0085820c;
  param_1[1] = 0;
  return;
}



void fn_001273d0(undefined4 *param_1)

{
  *param_1 = DAT_0085828c;
  return;
}



void fn_00127ab0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00127984();
  *puVar1 = DAT_00858780;
  return;
}



void fn_00129668(int param_1)

{
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined1 *)(param_1 + 0xf8) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  fn_00301f50(DAT_008cff54,0x100);
  return;
}



void fn_00129a80(int param_1)

{
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  DAT_00898870 = 1;
  *(undefined1 *)(param_1 + 0xc0) = 0;
  *(undefined1 *)(param_1 + 0xc1) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  return;
}



undefined4 fn_0012b234(int param_1)

{
  DAT_0089a51c = param_1;
  fn_00146398();
  fn_00145c50(DAT_0089a51c + 4);
  fn_00157988(DAT_0089a51c + 8);
  fn_00145f58(DAT_0089a51c + 0xc);
  return 0;
}



void fn_0012d73c(undefined4 param_1)

{
  fn_00142b64(DAT_00898154,param_1);
  return;
}



undefined4 fn_0012dce4(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_10;
  undefined4 uStack_c;
  
  iVar1 = fn_00157fb0(param_1,0xfffffffe,&local_10);
  if ((iVar1 < 0) || (iVar1 = fn_00157f58(param_1,0xffffffff,&uStack_c), iVar1 < 0)) {
    uVar2 = fn_001581d0(param_1,DAT_00148920);
    return uVar2;
  }
  uVar2 = fn_001485e8(DAT_00898898,local_10,uStack_c);
  fn_001580cc(param_1,uVar2);
  return 1;
}



undefined4 fn_00133564(undefined4 param_1)

{
  fn_001552cc(DAT_00898898);
  fn_00158004(param_1,1);
  return 1;
}



undefined4 fn_001348cc(undefined4 param_1)

{
  fn_00149628(DAT_00898898);
  fn_00158004(param_1,1);
  return 1;
}



undefined4 fn_00134ba0(undefined4 param_1)

{
  fn_0015cef4(DAT_00898898);
  fn_00158004(param_1,1);
  return 1;
}



void fn_00135110(undefined4 param_1)

{
  fn_0015cf54(DAT_00898898);
  fn_001638b0(param_1);
  return;
}



undefined4 fn_00135884(undefined4 param_1)

{
  fn_0015559c(DAT_00898898);
  fn_00158004(param_1,1);
  return 1;
}



undefined4 fn_00135e0c(undefined4 param_1)

{
  fn_0015564c(DAT_00898898);
  fn_00158004(param_1,1);
  return 1;
}



undefined4 * fn_0013d3e8(undefined4 *param_1)

{
  *param_1 = DAT_00855a94;
  fn_0015e6f0(param_1 + 1);
  return param_1;
}



undefined4 * fn_0013d40c(undefined4 *param_1)

{
  *param_1 = DAT_00855a94;
  fn_0015e6f0(param_1 + 1,DAT_007db524);
  return param_1;
}



void fn_0013d6ec(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 3) = param_2;
  fn_0014fb58(&DAT_008f34bc);
  return;
}



void fn_0013e368(void)

{
  fn_0013c428(&DAT_008bfb0c);
  return;
}



void fn_0013e374(void)

{
  fn_0015def0(&DAT_008bfb0c);
  return;
}



void fn_0013e67c(void)

{
  fn_0013c3d8(&DAT_008bfb0c);
  return;
}



void fn_00141734(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x1a8) != 0) {
    fn_0017ea58();
    fn_0018b010(*(undefined4 *)(param_1 + 0x1a8));
    *(undefined4 *)(param_1 + 0x1a8) = 0;
    *(undefined1 *)(param_1 + 0x138) = 0;
    *(undefined1 *)(param_1 + 0x139) = 0;
    if (*(code **)(param_1 + 0x1a0) != (code *)0x0) {
      (**(code **)(param_1 + 0x1a0))(param_1,0,*(undefined4 *)(param_1 + 0x1a4));
    }
    if (*(char *)(param_1 + 0x13a) != '\0') {
      *(undefined1 *)(param_1 + 0x13a) = 0;
      uVar1 = fn_00152724();
      fn_00173100(uVar1,param_1);
      return;
    }
  }
  return;
}



void fn_001467e4(int param_1)

{
  DAT_008bf790 = param_1 + DAT_008bf790;
  return;
}

