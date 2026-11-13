#include "00139ca4_0014d6cc.h"



void fn_0014d6cc(undefined4 *param_1,short *param_2,undefined4 param_3)

{
  short sVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 local_28;
  undefined4 local_24;
  short *local_20;
  int local_1c;
  
  puVar2 = (undefined4 *)fn_0017750c(param_2);
  if (puVar2 != (undefined4 *)0x0) {
    do {
      local_20 = param_2 + 1;
      sVar1 = *param_2;
      param_2 = local_20;
    } while (sVar1 != 0x3a);
    local_24 = 4;
    iVar3 = fn_00100b58();
    local_1c = (iVar3 + 1) * 2;
    iVar3 = (**(code **)*puVar2)(puVar2,&local_28,&local_24,param_3);
    if (-1 < iVar3) {
      *param_1 = local_28;
    }
  }
  return;
}



int fn_0014cda0(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_18;
  undefined4 auStack_14 [2];
  
  iVar2 = fn_00157f58(param_1,0xfffffffe,&local_18);
  if (iVar2 < 0) {
    uVar3 = fn_00148918((char *)&DAT_0014ce74,(char *)&DAT_0014ce5c,(char *)&DAT_007bceee,0x443);
    cVar1 = fn_001581d0(param_1,uVar3);
    return (int)cVar1;
  }
  iVar2 = fn_00157f58(param_1,0xffffffff,auStack_14);
  if (iVar2 < 0) {
    uVar3 = fn_00148918((char *)&DAT_0014ce74,(char *)&DAT_0014ce5c,(char *)&DAT_007bceee,0x446);
    cVar1 = fn_001581d0(param_1,uVar3);
    return (int)cVar1;
  }
  iVar2 = fn_00174c34(DAT_00898898,param_2,local_18,auStack_14[0]);
  return iVar2;
}



void fn_001481c8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_128 [268];
  
  uVar1 = fn_0011ced8();
  fn_0017d96c(auStack_128,0x100,0xff,&DAT_001482bc,uVar1);
  iVar2 = fn_00145b00(0x34,&DAT_00812c8c);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = fn_0011c200(iVar2,uVar1,auStack_128,param_2);
  }
  fn_0017d948(param_1 + 4,param_1 + 8,iVar2 + 0x2c);
  uVar3 = fn_0011dd90(*(undefined4 *)(param_1 + 0x68),DAT_00898158);
  fn_0012d750(param_1,uVar1,uVar3,DAT_00898160);
  uVar3 = fn_0011dd90(*(undefined4 *)(param_1 + 0x68),DAT_0089815c);
  fn_0012d750(param_1,uVar1,uVar3,PTR_s_break_font_L_bffnt_00898164);
  fn_0011c298(param_1,iVar2,param_2,param_3,param_4,param_5);
  return;
}



bool fn_00147fd4(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *local_14 [2];
  
  uVar3 = *(undefined4 *)(DAT_00898154 + 4);
  local_14[0] = &DAT_008f9cf4;
  uVar2 = 0xe7e3ffff;
  uVar1 = fn_00156b34(uVar3,local_14,&DAT_0089a4f4,param_2,param_1);
  switch(uVar1) {
  case 0:
  case 1:
  case 2:
  case 4:
    uVar2 = fn_001666dc(uVar3,local_14[0]);
  }
  fn_001588d4(local_14);
  return (uVar2 & 0x80000000) == 0;
}



undefined4 fn_00142c80(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  switch(param_2) {
  case 0x100:
  case 0x102:
    uVar1 = 4;
    break;
  case 0x101:
    uVar1 = 0x80;
    break;
  case 0x103:
    uVar1 = 0x40;
    break;
  case 0x104:
  case 0x105:
    uVar1 = 0x10;
  }
  if (param_1 == 0x10000) {
    uVar1 = fn_00143ac8(param_4,uVar1);
  }
  else {
    if (param_1 == 0x20000) {
      uVar1 = fn_001540f8(*DAT_0089a514,param_4,uVar1,0);
      return uVar1;
    }
    if (param_1 != 0x30000) {
      return 0;
    }
    uVar1 = fn_001540f8(DAT_0089a514[1],param_4,uVar1,0);
  }
  return uVar1;
}



void fn_0013f8bc(undefined4 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0013f8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_0089a91c + 0xc))(DAT_0089a91c,param_1);
  return;
}



uint fn_0013e380(uint param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char unaff_r9;
  undefined4 local_58;
  uint local_54;
  int local_50 [4];
  undefined4 local_40 [5];
  uint local_2c;
  undefined4 *puStack_28;
  
  iVar4 = 0;
  local_2c = param_1;
  puStack_28 = param_2;
  while( true ) {
    do {
      local_58 = 0;
      uVar2 = fn_0013ebcc(&local_54,local_50,0,0,local_40,&local_58,DAT_0089a558,DAT_0089a55c);
      uVar3 = 0;
      if ((uVar2 & 0x3ff) != 0x3ef) {
        unaff_r9 = '\x01';
        if ((-1 < (int)uVar2) && (DAT_0089a5cc != (code *)0x0)) {
          unaff_r9 = (*DAT_0089a5cc)(DAT_0089a60c,local_54,local_50[0],0,0,local_40[0],local_58);
        }
        uVar3 = local_54;
        iVar4 = local_50[0];
        if (param_2 != (undefined4 *)0x0) {
          *param_2 = local_58;
        }
      }
    } while (unaff_r9 == '\0');
    if ((int)(uVar2 & 0x80000000) < 0) break;
    uVar1 = uVar2 & 0x80000000;
    if (iVar4 == 3) {
      uVar1 = local_2c;
    }
    if (iVar4 == 3 && uVar1 == uVar3) {
      return uVar2;
    }
  }
  return uVar2;
}



undefined4 fn_0013a5e8(undefined4 param_1)

{
  undefined1 local_10 [4];
  uint local_c [3];
  
  fn_001488c4(param_1,local_c,local_10);
  fn_00155d94(DAT_00898898,local_c[0] & 0xff);
  return 0;
}



undefined4 fn_0013a5ac(undefined4 param_1)

{
  undefined1 local_10 [4];
  uint local_c [3];
  
  fn_001488c4(param_1,local_c,local_10);
  fn_00155d14(DAT_00898898,local_c[0] & 0xff);
  return 0;
}



undefined4 fn_0013a4b8(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint local_10;
  short local_c [2];
  
  iVar1 = fn_00157f58(param_1,0xfffffffe,&local_10);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_0013a58c,(char *)&DAT_0013a574,(char *)&DAT_007bcaea,0x722);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157f58(param_1,0xffffffff,local_c);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_0013a58c,(char *)&DAT_0013a574,(char *)&DAT_007bcaea,0x725);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  fn_00155cec(DAT_00898898,local_10 & 0xff,(int)local_c[0]);
  return 0;
}



undefined4 fn_0013a3c4(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint local_10;
  short local_c [2];
  
  iVar1 = fn_00157f58(param_1,0xfffffffe,&local_10);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_0013a498,(char *)&DAT_0013a480,(char *)&DAT_007bcae0,0x716);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157f58(param_1,0xffffffff,local_c);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_0013a498,(char *)&DAT_0013a480,(char *)&DAT_007bcae0,0x719);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  fn_00155cc4(DAT_00898898,local_10 & 0xff,(int)local_c[0]);
  return 0;
}



undefined4 fn_0013a388(undefined4 param_1)

{
  undefined1 local_10 [4];
  uint local_c [3];
  
  fn_001488c4(param_1,local_c,local_10);
  fn_001757a4(DAT_00898898,local_c[0] & 0xff);
  return 0;
}



undefined4 fn_00139da0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10 [2];
  
  iVar1 = fn_00157f58(param_1,0xfffffffc,&local_1c);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00139f10,(char *)&DAT_00139ef8,(char *)&DAT_007bcd36,0x9d9);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157f58(param_1,0xfffffffd,&local_18);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00139f10,(char *)&DAT_00139ef8,(char *)&DAT_007bcd36,0x9db);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157f58(param_1,0xfffffffe,&local_14);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00139f10,(char *)&DAT_00139ef8,(char *)&DAT_007bcd36,0x9dd);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157f58(param_1,0xffffffff,local_10);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00139f10,(char *)&DAT_00139ef8,(char *)&DAT_007bcd36,0x9df);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  fn_0014a584(DAT_00898898,local_1c & 0xff,local_18 & 0xff,local_14 & 0xff,local_10[0] & 0xff);
  return 0;
}



undefined4 fn_00139ca4(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  undefined1 local_10 [4];
  undefined1 local_c [4];
  
  iVar1 = fn_00157f58(param_1,0xfffffffe,local_10);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00139d80,(char *)&DAT_00139d68,(char *)&DAT_007bcb05,0x73a);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157f58(param_1,0xffffffff,local_c);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00139d80,(char *)&DAT_00139d68,(char *)&DAT_007bcb05,0x73b);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  fn_001596c4(DAT_00898898,local_18,local_14);
  return 0;
}


