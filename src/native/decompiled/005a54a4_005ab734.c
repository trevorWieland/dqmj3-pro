#include "005a54a4_005ab734.h"



void fn_005ab734(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = fn_0022f750((&PTR_s_ryousinnojouken_00890ccc)[*(int *)(param_1[0x39] + 0x40)]);
                    /* WARNING: Could not recover jumptable at 0x005ab76c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x13c))(param_1,0,0,uVar1);
  return;
}



void fn_005aa9bc(int *param_1,int param_2)

{
  (**(code **)(*param_1 + 0xc))(param_1);
  param_1[2] = param_2;
  *(undefined1 *)(param_1 + 5) = 0;
  return;
}



void fn_005a9ad0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_003cfe94();
  *puVar1 = &DAT_00847240;
  return;
}



void fn_005a5dc0(int param_1)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 auStack_e0 [52];
  char local_ac [4];
  char acStack_a8 [4];
  char acStack_a4 [4];
  undefined4 uStack_a0;
  char local_9c [4];
  char acStack_98 [4];
  char acStack_94 [4];
  char acStack_90 [4];
  char acStack_8c [4];
  undefined4 uStack_88;
  undefined1 auStack_80 [32];
  char local_60 [4];
  char acStack_5c [4];
  char acStack_58 [4];
  char acStack_54 [4];
  char local_50 [4];
  char acStack_4c [4];
  char acStack_48 [4];
  char acStack_44 [4];
  undefined4 uStack_40;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar5 = 0;
  do {
    local_9c[0] = 't';
    local_9c[1] = 'b';
    local_9c[2] = '_';
    local_9c[3] = 'b';
    acStack_98[0] = 'a';
    acStack_98[1] = 't';
    acStack_98[2] = 't';
    acStack_98[3] = 'l';
    acStack_94[0] = 'e';
    acStack_94[1] = '_';
    acStack_94[2] = 'c';
    acStack_94[3] = 'o';
    acStack_90[0] = 'u';
    acStack_90[1] = 'n';
    acStack_90[2] = 't';
    acStack_90[3] = 'e';
    acStack_8c[0] = 'r';
    acStack_8c[1] = '_';
    acStack_8c[2] = '%';
    acStack_8c[3] = '0';
    uStack_88 = 0x6432;
    local_ac[0] = 't';
    local_ac[1] = 'b';
    local_ac[2] = '_';
    local_ac[3] = 'n';
    acStack_a8[0] = 'a';
    acStack_a8[1] = 'm';
    acStack_a8[2] = 'e';
    acStack_a8[3] = '_';
    acStack_a4[0] = '%';
    acStack_a4[1] = '0';
    acStack_a4[2] = '2';
    acStack_a4[3] = 'd';
    uStack_a0 = 0;
    local_60[0] = 't';
    local_60[1] = 'b';
    local_60[2] = '_';
    local_60[3] = 'c';
    acStack_5c[0] = 'o';
    acStack_5c[1] = 'u';
    acStack_5c[2] = 'n';
    acStack_5c[3] = 't';
    acStack_58[0] = 'r';
    acStack_58[1] = 'y';
    acStack_58[2] = '_';
    acStack_58[3] = '%';
    acStack_54[0] = '0';
    acStack_54[1] = '2';
    acStack_54[2] = 'd';
    acStack_54[3] = '\0';
    local_30 = 0x30305f77;
    uStack_2c = 0x255f3130;
    uStack_28 = 0x643230;
    local_50[0] = 'N';
    local_50[1] = 'u';
    local_50[2] = 'l';
    local_50[3] = 'l';
    acStack_4c[0] = '_';
    acStack_4c[1] = 'b';
    acStack_4c[2] = 'e';
    acStack_4c[3] = 'g';
    acStack_48[0] = 'i';
    acStack_48[1] = 'n';
    acStack_48[2] = 'n';
    acStack_48[3] = 'e';
    acStack_44[0] = 'r';
    acStack_44[1] = '_';
    acStack_44[2] = '%';
    acStack_44[3] = '0';
    uStack_40 = 0x6432;
    iVar3 = fn_002f6968(iVar5 + 1);
    uVar4 = fn_00178f9c(*(undefined4 *)(param_1 + 0x6c),*(undefined4 *)(param_1 + 0x68));
    uVar6 = *(undefined4 *)(iVar3 + 0x18);
    fn_0017d96c(auStack_e0,0x20,0x1f,local_9c,iVar5);
    fn_00688ad4(uVar4,auStack_e0,uVar6,0);
    fn_0017d96c(auStack_e0,0x20,0x1f,local_ac,iVar5);
    fn_00688cc4(uVar4,auStack_e0,iVar3 + 0x20);
    uVar6 = *(undefined4 *)(param_1 + 0x70);
    uVar2 = *(undefined2 *)(iVar3 + 0x14);
    fn_0017d96c(auStack_80,0x20,0x1f,&local_30,iVar5);
    fn_0017d96c(auStack_e0,0x20,0x1f,local_60,iVar5);
    fn_0028be4c(uVar6,uVar4,uVar2,auStack_e0,auStack_80);
    cVar1 = *(char *)(iVar3 + 0x44);
    fn_0017d96c(auStack_e0,0x20,0x1f,local_50,iVar5);
    fn_006889d8(uVar4,auStack_e0,cVar1 != '\0');
    iVar5 = iVar5 + 1;
  } while (iVar5 < 3);
  return;
}



void fn_005a5bf8(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char local_d0 [28];
  char local_b4 [20];
  undefined4 local_a0;
  char acStack_9c [12];
  undefined4 local_90;
  char acStack_8c [44];
  undefined1 auStack_60 [56];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  builtin_strncpy(local_d0,(char *)&DAT_005a5d68,0x17);
  local_d0[0x17] = '\0';
  local_a0 = (local_a0 & ~((unsigned int)0xff << 0)) | ((unsigned int)('t') & 0xff);
  local_a0 = (local_a0 & ~((unsigned int)0xff << 8)) | (((unsigned int)('b') & 0xff) << 8);
  local_a0 = (local_a0 & ~((unsigned int)0xff << 16)) | (((unsigned int)('_') & 0xff) << 16);
  local_a0 = (local_a0 & ~((unsigned int)0xff << 24)) | (((unsigned int)('n') & 0xff) << 24);
  builtin_strncpy(acStack_9c,(char *)&DAT_005a5d84,9);
  acStack_9c[9] = '\0';
  acStack_9c[10] = '\0';
  acStack_9c[0xb] = '\0';
  local_90 = (local_90 & ~((unsigned int)0xff << 0)) | ((unsigned int)('t') & 0xff);
  local_90 = (local_90 & ~((unsigned int)0xff << 8)) | (((unsigned int)('b') & 0xff) << 8);
  local_90 = (local_90 & ~((unsigned int)0xff << 16)) | (((unsigned int)('_') & 0xff) << 16);
  local_90 = (local_90 & ~((unsigned int)0xff << 24)) | (((unsigned int)('c') & 0xff) << 24);
  builtin_strncpy(acStack_8c,(char *)&DAT_005a5d94,0xc);
  local_28 = 0x30305f77;
  uStack_24 = 0x255f3130;
  uStack_20 = 0x643230;
  builtin_strncpy(local_b4,(char *)&DAT_005a5dac,0x13);
  local_b4[0x13] = '\0';
  iVar3 = fn_002f6968(param_3);
  uVar4 = fn_00178f9c(*(undefined4 *)(param_1 + 0x6c),*(undefined4 *)(param_1 + 0x68));
  uVar5 = *(undefined4 *)(iVar3 + 0x18);
  fn_0017d96c(acStack_8c + 0xc,0x20,0x1f,local_d0,param_2);
  fn_00688ad4(uVar4,acStack_8c + 0xc,uVar5,0);
  fn_0017d96c(acStack_8c + 0xc,0x20,0x1f,&local_a0,param_2);
  fn_00688cc4(uVar4,acStack_8c + 0xc,iVar3 + 0x20);
  uVar5 = *(undefined4 *)(param_1 + 0x70);
  uVar2 = *(undefined2 *)(iVar3 + 0x14);
  fn_0017d96c(acStack_8c + 0xc,0x20,0x1f,&local_28,param_2);
  fn_0017d96c(auStack_60,0x20,0x1f,&local_90,param_2);
  fn_0028be4c(uVar5,uVar4,uVar2,auStack_60,acStack_8c + 0xc);
  cVar1 = *(char *)(iVar3 + 0x44);
  fn_0017d96c(acStack_8c + 0xc,0x20,0x1f,local_b4,param_2);
  fn_006889d8(uVar4,acStack_8c + 0xc,cVar1 != '\0');
  return;
}



void fn_005a5ad0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 auStack_38 [32];
  
  iVar4 = 0;
  do {
    uVar1 = fn_00178f9c(*(undefined4 *)(param_1 + 0x6c),*(undefined4 *)(param_1 + 0x68));
    fn_0017d96c(auStack_38,0x20,0x1f,(char *)&DAT_007ca010,iVar4);
    fn_006889d8(uVar1,auStack_38,0);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 3);
  iVar4 = 0;
  do {
    iVar2 = fn_002f5d5c(iVar4 + 1);
    if (iVar2 == 0) {
      uVar1 = fn_0022f750((char *)&DAT_005a5ac4);
    }
    else {
      uVar1 = fn_0022f750((char *)&DAT_005a5abc);
    }
    uVar3 = fn_00178f9c(*(undefined4 *)(param_1 + 0x6c),*(undefined4 *)(param_1 + 0x68));
    fn_0017d96c(auStack_38,0x20,0x1f,(char *)&DAT_007ca010,iVar4);
    fn_00688cc4(uVar3,auStack_38,uVar1);
    uVar1 = fn_00178f9c(*(undefined4 *)(param_1 + 0x6c),*(undefined4 *)(param_1 + 0x68));
    fn_0017d96c(auStack_38,0x20,0x1f,(char *)&DAT_007ca010,iVar4);
    fn_006889d8(uVar1,auStack_38,1);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 3);
  return;
}



void fn_005a5a04(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_38 [36];
  
  iVar1 = fn_002f5d5c(param_3);
  if (iVar1 == 0) {
    uVar2 = fn_0022f750((char *)&DAT_005a5ac4);
  }
  else {
    uVar2 = fn_0022f750((char *)&DAT_005a5abc);
  }
  uVar3 = fn_00178f9c(*(undefined4 *)(param_1 + 0x6c),*(undefined4 *)(param_1 + 0x68));
  fn_0017d96c(auStack_38,0x20,0x1f,(char *)&DAT_007ca010,param_2);
  fn_00688cc4(uVar3,auStack_38,uVar2);
  uVar2 = fn_00178f9c(*(undefined4 *)(param_1 + 0x6c),*(undefined4 *)(param_1 + 0x68));
  fn_0017d96c(auStack_38,0x20,0x1f,(char *)&DAT_007ca010,param_2);
  fn_006889d8(uVar2,auStack_38,1);
  return;
}



void fn_005a58d4(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 auStack_38 [32];
  
  iVar4 = 0;
  do {
    uVar1 = fn_00178f9c(*(undefined4 *)(param_1 + 0x6c),*(undefined4 *)(param_1 + 0x68));
    fn_0017d96c(auStack_38,0x20,0x1f,(char *)&DAT_007ca010,iVar4);
    fn_006889d8(uVar1,auStack_38,0);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 3);
  iVar4 = 0;
  if (0 < param_2) {
    do {
      iVar2 = fn_002f5d5c(iVar4 + 1);
      if (iVar2 == 0) {
        uVar1 = fn_0022f750((char *)&DAT_005a5ac4);
      }
      else {
        uVar1 = fn_0022f750((char *)&DAT_005a5abc);
      }
      uVar3 = fn_00178f9c(*(undefined4 *)(param_1 + 0x6c),*(undefined4 *)(param_1 + 0x68));
      fn_0017d96c(auStack_38,0x20,0x1f,(char *)&DAT_007ca010,iVar4);
      fn_00688cc4(uVar3,auStack_38,uVar1);
      uVar1 = fn_00178f9c(*(undefined4 *)(param_1 + 0x6c),*(undefined4 *)(param_1 + 0x68));
      fn_0017d96c(auStack_38,0x20,0x1f,(char *)&DAT_007ca010,iVar4);
      fn_006889d8(uVar1,auStack_38,1);
      iVar4 = iVar4 + 1;
    } while (iVar4 < param_2);
  }
  return;
}



void fn_005a58ac(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 *param_4)

{
  int iVar1;
  
  iVar1 = fn_002f6968(param_2);
  *param_3 = iVar1 + 0xd8;
  *param_4 = 4;
  return;
}



void fn_005a54a4(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (param_1[0x21] != 0) {
    iVar1 = fn_001f7e04();
    if (iVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x005a54e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x28))(param_1,0,0);
      return;
    }
    return;
  }
  puVar2 = (undefined4 *)fn_00689c1c(param_1,0x5f);
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar3 == &DAT_00895b30) goto LAB_005a552c;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_005a552c:
  puVar3 = (undefined4 *)param_1[6];
  if (puVar3 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)(**(code **)*puVar3)(puVar3);
    do {
      if (puVar4 == &DAT_008970f4) goto LAB_005a5568;
      puVar4 = (undefined4 *)*puVar4;
    } while (puVar4 != (undefined4 *)0x0);
  }
  puVar3 = (undefined4 *)0x0;
LAB_005a5568:
  puVar2[3] = puVar3[5];
  fn_00689878(param_1,0x5f);
  return;
}


