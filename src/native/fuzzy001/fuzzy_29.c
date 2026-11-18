/* Byte-exact functions recovered by the fuzzy-first sweep.
 *
 * Each function below was compiled with the measured original profile
 * (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork --c99 -O3 -Otime) and
 * kept only because its placed bytes equal the original extent byte for byte.
 * Every one was re-scored inside this exact file after it was written; a single
 * differing byte would have kept it out. Nothing here is fitted.
 *
 * Address range of this file's functions: 00443e54 .. 004ae660.
 */
#include "decompiled.h"
#include "fuzzy_29.h"


void fn_00443e54(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002e6a94();
  puVar1[0x27] = 0;
  *puVar1 = DAT_0083dfe0;
  return;
}



void fn_00445088(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_004117bc(param_1,param_2,0,0x7c);
  *puVar1 = DAT_0083e3fc;
  return;
}



void fn_004453d0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0028e264();
  puVar1[2] = 0;
  *puVar1 = DAT_0083e5cc;
  puVar1[3] = 0;
  *(undefined1 *)(puVar1 + 4) = 0;
  return;
}



void fn_004456a0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0056a508();
  puVar1[5] = 0;
  *puVar1 = DAT_0083e5f4;
  puVar1[6] = 0;
  return;
}



void fn_00445ff8(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0028e264();
  *puVar1 = DAT_0083e664;
  *(undefined1 *)(puVar1 + 2) = 0;
  *(undefined1 *)((int)puVar1 + 9) = 0;
  *(undefined1 *)((int)puVar1 + 10) = 0;
  *(undefined1 *)((int)puVar1 + 0xb) = 0;
  *(undefined1 *)(puVar1 + 3) = 0;
  *(undefined1 *)((int)puVar1 + 0xd) = 0;
  *(undefined1 *)((int)puVar1 + 0xe) = 0;
  return;
}



void fn_0044a5d8(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00397a0c();
  puVar1[0x39] = 0;
  *puVar1 = DAT_0083ef44;
  puVar1[0x3a] = 0;
  *(undefined1 *)(puVar1 + 0x3b) = 0;
  return;
}



int fn_0045af48(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = DAT_0085448c;
  iVar1 = fn_0014f2b0(param_1 + 3);
  return iVar1 + -0xc;
}



int fn_0045fbe8(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = DAT_00852db4;
  iVar1 = fn_00170f54(param_1 + 4);
  iVar1 = fn_00170f54(iVar1 + -0xc);
  return iVar1 + -4;
}



undefined4 * fn_00482070(undefined4 *param_1)

{
  *param_1 = DAT_00853880;
  param_1[1] = 0;
  fn_004b3b48();
  return param_1;
}



void fn_00482100(void)

{
  fn_004896f4(&DAT_008aec70);
  return;
}



void fn_004823bc(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = DAT_00853890;
  fn_004895c0();
  iVar1 = fn_0046e758(param_1 + 0x15);
  iVar1 = fn_0046e758(iVar1 + -0x44);
  fn_0046b3fc(iVar1 + -0x10);
  return;
}



void fn_004823f0(undefined4 *param_1)

{
  *param_1 = DAT_008538c0;
  return;
}



void fn_00495170(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = DAT_008544cc;
  fn_0046dd70();
  iVar1 = fn_0046e758(param_1 + 4);
  fn_0046b3fc(iVar1 + -0x10);
  fn_00455018();
  return;
}



void fn_0049d2a0(undefined4 param_1)

{
  undefined4 uVar1;
  undefined1 auStack_18 [12];
  undefined4 local_c;
  
  local_c = 0x10001;
  uVar1 = fn_004b8d4c(auStack_18,&local_c);
  fn_0049c724(param_1,uVar1);
  return;
}



void fn_0049df44(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  (**(code **)(**(int **)(param_1 + 0x14) + 0x78))(*(int **)(param_1 + 0x14),param_2);
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x24);
  }
  if (iVar1 != 0 && iVar2 != 0) {
    iVar2 = (**(code **)(**(int **)(iVar2 + 0x14) + 0x28))(*(int **)(iVar2 + 0x14),3);
  }
  if (param_2 != 0) {
    iVar2 = *(int *)(param_2 + 0x24);
  }
  if (param_2 != 0 && iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0049dfb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(iVar2 + 0x14) + 0x24))
              (*(int **)(iVar2 + 0x14),3,*(undefined4 *)(param_1 + 0x14));
    return;
  }
  return;
}



void fn_0049e094(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0046b318(param_1,3);
  puVar1[4] = 0;
  *puVar1 = DAT_008548e4;
  puVar1[5] = 0;
  return;
}



void fn_004a0a1c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_28 [12];
  undefined4 local_1c;
  undefined1 auStack_18 [12];
  undefined4 local_c;
  
  iVar1 = fn_001249d0();
  iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x68));
  if (iVar1 == 0) {
    local_c = 0x80010004;
    uVar2 = fn_004b8d4c(auStack_18,&local_c);
    fn_004a0898(param_1,uVar2);
    return;
  }
  local_1c = 0x10001;
  uVar2 = fn_004b8d4c(auStack_28,&local_1c);
  fn_004a0898(param_1,uVar2);
  return;
}



void fn_004a1a00(undefined4 *param_1)

{
  *param_1 = DAT_00854b98;
  param_1[1] = 0;
  return;
}



void fn_004a3d10(undefined4 param_1,undefined4 *param_2)

{
  int *piVar1;
  
  piVar1 = (int *)*param_2;
  (**(code **)(*piVar1 + 8))(piVar1);
  if (piVar1 == (int *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004a3d40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 4))(piVar1);
  return;
}



void fn_004a679c(undefined4 *param_1)

{
  *param_1 = DAT_00855760;
  return;
}



undefined4 * fn_004a899c(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)fn_0046e6d0(param_1,1);
  *puVar1 = DAT_008552b4;
  if (param_2 != 0) {
    *(short *)(puVar1 + 8) = (short)param_2;
    iVar2 = fn_0015ecdc(0x44);
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = fn_004a899c(iVar2,0);
    }
    iVar2 = fn_0045c8f4();
    fn_0047f194(*(undefined4 *)(iVar2 + 0xc),param_2,uVar3);
  }
  return puVar1;
}



void fn_004aaaa0(undefined4 *param_1)

{
  *param_1 = DAT_008554e0;
  fn_0014f1bc(param_1[0xe]);
  fn_0014f1bc(param_1[0xb]);
  fn_00455018(param_1);
  return;
}



void fn_004ab0ac(int param_1,undefined4 param_2)

{
  fn_004b6230(param_1 + 0x14,DAT_007d96a4,param_2);
  return;
}



void fn_004ab0e8(int param_1,int param_2)

{
  fn_004b6230(*(int *)(param_1 + 8) + param_2 * 8,L"%u,%u");
  return;
}



void fn_004ab104(int param_1,undefined4 param_2)

{
  fn_004b6230(param_1 + 0x2c,DAT_007d96a4,param_2);
  return;
}



void fn_004ae660(undefined4 param_1)

{
  undefined4 uVar1;
  undefined1 auStack_18 [12];
  undefined4 local_c;
  
  local_c = 0x10001;
  uVar1 = fn_004b8d4c(auStack_18,&local_c);
  fn_004adbfc(param_1,uVar1);
  return;
}

