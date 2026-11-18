/* Byte-exact functions recovered by the fuzzy-first sweep.
 *
 * Each function below was compiled with the measured original profile
 * (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork --c99 -O3 -Otime) and
 * kept only because its placed bytes equal the original extent byte for byte.
 * Every one was re-scored inside this exact file after it was written; a single
 * differing byte would have kept it out. Nothing here is fitted.
 *
 * Address range of this file's functions: 004ac794 .. 004e9ebc.
 */
#include "decompiled.h"
#include "fuzzy_30.h"


undefined4 * fn_004ac794(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)fn_0046e6d0(param_1,1);
  *puVar1 = DAT_008555c0;
  if (param_2 != 0) {
    *(short *)(puVar1 + 8) = (short)param_2;
    iVar2 = fn_0015ecdc(0x44);
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = fn_004ac794(iVar2,0);
    }
    iVar2 = fn_0045c8f4();
    fn_0047f194(*(undefined4 *)(iVar2 + 0xc),param_2,uVar3);
  }
  return puVar1;
}



void fn_004b301c(int param_1,int param_2)

{
  *(char *)(param_1 + 0x22) = (char)param_2;
  if ((param_2 == 5) && (*(code **)(param_1 + 0x18) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x004b3038. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x18))(param_1,param_1 + 0x1c);
    return;
  }
  return;
}



undefined4 * fn_004b54dc(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)fn_0014f1e0();
  *puVar1 = DAT_00855a18;
  uVar2 = fn_0014f470();
  fn_0014f440(puVar1,uVar2,0);
  return puVar1;
}



undefined4 * fn_004b637c(undefined4 *param_1,int param_2)

{
  *param_1 = DAT_00855a94;
  fn_0015e6f0(param_1 + 1,*(undefined4 *)(param_2 + 4));
  return param_1;
}



void fn_004b9d60(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004b9d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 4) + 0x2c))(*(int **)(param_1 + 4),param_1);
  return;
}



void fn_004b9d74(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004b9d84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 4) + 0x40))(*(int **)(param_1 + 4),param_1);
  return;
}



int fn_004bb560(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = DAT_00853388;
  iVar1 = fn_00170f54(param_1 + 10);
  return iVar1 + -0x28;
}



void fn_004c4994(undefined4 *param_1,int param_2,int param_3)

{
  *param_1 = DAT_00855e00;
  param_1[1] = param_2;
  param_1[2] = param_3;
  if ((param_2 != 0) && (param_3 == 0)) {
    param_1[2] = param_2 + 0xc;
  }
  return;
}



void fn_004c63a8(undefined4 *param_1)

{
  *param_1 = DAT_00855ec0;
  *(undefined2 *)(param_1 + 1) = 0;
  *(undefined2 *)((int)param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)((int)param_1 + 9) = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  return;
}



void fn_004c67e0(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  if (*(char *)(DAT_008bf4f4 + 0x30) != '\0') {
    local_14 = *param_2;
    local_10 = *param_3;
    local_c = *param_4;
    if (*(char *)(*(int *)(param_1 + 0x24) + 0x10) == '\x01') {
      fn_00456510(*(int *)(param_1 + 0x24),4);
    }
    fn_00456400(*(undefined4 *)(param_1 + 0x24));
    fn_0049de08(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x24),&local_14,&local_10
                 ,&local_c);
  }
  return;
}



undefined4 * fn_004caec4(undefined4 *param_1)

{
  *param_1 = DAT_00855fd8;
  fn_00301f50(param_1 + 1,0x554);
  *(undefined1 *)(param_1 + 0x156) = 0;
  param_1[0x157] = 0;
  return param_1;
}



void fn_004cb374(undefined4 param_1)

{
  fn_004ed464(DAT_008c06c4,param_1);
  return;
}



void fn_004d12c8(int param_1)

{
  if (*(char *)(param_1 + 0x84) != '\0') {
    fn_004d5734(DAT_008bf4f4,*(undefined4 *)(param_1 + 0x104));
    *(undefined1 *)(param_1 + 0x101) = 0;
  }
  return;
}



void fn_004db800(int param_1)

{
  if (*(char *)(param_1 + 4) != '\0') {
    fn_004dedec(DAT_008bf504);
    *(undefined1 *)(param_1 + 4) = 0;
  }
  return;
}



void fn_004dedfc(int param_1,undefined4 param_2)

{
  if (*(code **)(param_1 + 0x78) == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004dee10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x78))(1,param_2,*(undefined4 *)(param_1 + 0x7c));
  return;
}



void fn_004dee18(int param_1)

{
  if (*(code **)(param_1 + 0x78) == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004dee34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x78))
            (2,*(undefined1 *)(*(int *)(param_1 + 0x14) + 0xe),*(undefined4 *)(param_1 + 0x7c));
  return;
}



void fn_004df308(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_004eddf4();
  *puVar1 = DAT_008563f0;
  return;
}



void fn_004df3fc(undefined4 *param_1)

{
  *param_1 = DAT_00856428;
  return;
}



void fn_004e2b10(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_004eddf4();
  *puVar1 = DAT_00856774;
  return;
}



void fn_004e45d0(int param_1)

{
  char *pcVar1;
  
  fn_004ed158(*(undefined4 *)(param_1 + 0x44));
  pcVar1 = *(char **)(param_1 + 0x40);
  if (pcVar1 != (char *)0x0) {
    if (*pcVar1 == '\x01') {
      fn_004ed098(pcVar1,0xd9214824);
    }
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  *(undefined1 *)(*(int *)(DAT_008bf504 + 0x18) + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x48) = 0;
  return;
}



void fn_004e78b8(int param_1)

{
  char *pcVar1;
  
  pcVar1 = *(char **)(param_1 + 0x40);
  if (pcVar1 != (char *)0x0) {
    if (*pcVar1 == '\x01') {
      fn_004ed098(pcVar1,0xd9214824);
    }
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  *(undefined1 *)(param_1 + 0x44) = 10;
  *(undefined1 *)(param_1 + 0x45) = 0;
  *(undefined1 *)(param_1 + 0x46) = 0;
  return;
}



void fn_004e7974(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_004eddf4();
  puVar1[0x10] = 0;
  *puVar1 = DAT_0085695c;
  *(undefined1 *)(puVar1 + 0x11) = 10;
  *(undefined1 *)((int)puVar1 + 0x45) = 0;
  *(undefined1 *)((int)puVar1 + 0x46) = 0;
  return;
}



void fn_004e81d8(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_004eddf4();
  *puVar1 = DAT_008569fc;
  return;
}



void fn_004e9a58(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_004eddf4();
  puVar1[0x10] = 0;
  *puVar1 = DAT_00856a60;
  return;
}



void fn_004e9bc8(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = fn_004ed2e8();
  iVar2 = fn_00656e14(1000,uVar1);
  if (iVar2 == 0) {
    return;
  }
  fn_004ec0f0();
  return;
}



void fn_004e9ebc(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_004eddf4();
  puVar1[0x10] = 0;
  *puVar1 = DAT_00856ab0;
  return;
}

