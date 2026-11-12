#include "0015cdbc_0015d34c.h"



int fn_0015d34c(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined1 uVar8;
  undefined1 auStack_2f [27];
  
  iVar1 = fn_00101a1c(param_1,&DAT_0016ffe4,0x18,6);
  *(undefined1 *)(iVar1 + 0x90) = 0;
  *(undefined1 *)(iVar1 + 0x91) = 0;
  *(undefined1 *)(iVar1 + 0x92) = 0;
  uVar7 = 0;
  *(undefined1 *)(iVar1 + 0x93) = 0;
  do {
    uVar8 = 0;
    iVar2 = fn_00101a1c(auStack_2f,&DAT_00183a30,1,3,0);
    puVar3 = (undefined1 *)fn_00101a1c(iVar2 + 3,&DAT_00183a2c,1,3);
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[-1] = 0;
    puVar3[-2] = 0;
    puVar3[-3] = 0;
    if ((uVar7 & 0xff) == 0) {
      uVar4 = 0xe;
    }
    else {
      uVar4 = 0xf;
    }
    puVar3[2] = uVar4;
    puVar3[1] = uVar4;
    *puVar3 = uVar4;
    puVar3[5] = 0;
    iVar2 = fn_00101a1c(puVar3 + 6,&DAT_00183a30,1,3,uVar8);
    puVar3 = (undefined1 *)fn_00101a1c(iVar2 + 3,&DAT_00183a2c,1,3);
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[-1] = 0;
    puVar3[-2] = 0;
    if ((uVar7 & 0xff) == 0) {
      uVar8 = 0xe;
    }
    else {
      uVar8 = 0xf;
    }
    puVar3[-3] = 0;
    puVar3[2] = uVar8;
    puVar3[1] = uVar8;
    *puVar3 = uVar8;
    puVar3[5] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[8] = 0;
    switch(uVar7) {
    case 0:
      uVar5 = 0xc0;
      break;
    case 1:
      uVar5 = 200;
      break;
    case 2:
      uVar5 = 0xd0;
      break;
    case 3:
      uVar5 = 0xd8;
      break;
    case 4:
      uVar5 = 0xf0;
      break;
    case 5:
      uVar5 = 0xf8;
      break;
    default:
      goto switchD_0015d468_default;
    }
    *(undefined2 *)(puVar3 + 9) = uVar5;
switchD_0015d468_default:
    puVar6 = (undefined4 *)(iVar1 + uVar7 * 0x18);
    uVar7 = uVar7 + 1;
    *puVar6 = *(undefined4 *)(puVar3 + -0xd);
    puVar6[1] = *(undefined4 *)(puVar3 + -9);
    puVar6[2] = *(undefined4 *)(puVar3 + -5);
    puVar6[3] = *(undefined4 *)(puVar3 + -1);
    puVar6[4] = *(undefined4 *)(puVar3 + 3);
    puVar6[5] = *(undefined4 *)(puVar3 + 7);
    if (5 < uVar7) {
      return iVar1;
    }
  } while( true );
}



void fn_0015d2dc(undefined1 *param_1)

{
  *param_1 = 1;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 3;
  param_1[6] = 0xf;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 1;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 3;
  param_1[0xf] = 0xf;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  return;
}



void fn_0015d280(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0xf;
  param_1[5] = 0xf;
  param_1[6] = 0xf;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0xf;
  param_1[0xe] = 0xf;
  param_1[0xf] = 0xf;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  return;
}



void fn_0015cf8c(int *param_1)

{
  if (param_1 == (int *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0015cf9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x30))();
  return;
}



void fn_0015cf54(void)

{
  int iVar1;
  
  iVar1 = fn_00159d14();
  fn_0016b414(*(undefined4 *)(iVar1 + 100));
  return;
}



void fn_0015cf08(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_10;
  
  local_10 = param_4;
  fn_0016ac8c(*(undefined4 *)(param_1 + 100),1,0,param_2);
  local_10 = 0xaa000000;
  fn_00163988(DAT_0089780c,&local_10,1);
  fn_0016ac3c(*(undefined4 *)(param_1 + 100),1);
  return;
}



void fn_0015cef4(void)

{
  int iVar1;
  undefined4 in_r3;
  undefined4 auStack_10 [2];
  
  iVar1 = fn_00159d14();
  auStack_10[0] = in_r3;
  fn_0016ac8c(*(undefined4 *)(iVar1 + 100),1,0,1);
  auStack_10[0] = 0xaa000000;
  fn_00163988(DAT_0089780c,auStack_10,1);
  fn_0016ac3c(*(undefined4 *)(iVar1 + 100),1);
  return;
}



void fn_0015cdbc(undefined4 param_1,undefined4 param_2,float *param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  float local_20;
  float local_1c;
  
  iVar1 = fn_00174864(DAT_008977e4);
  uVar2 = fn_00176d68(*(undefined4 *)(iVar1 + 4));
  fn_00174708(&local_20,param_2,uVar2);
  local_20 = local_20 + *param_3;
  local_1c = local_1c + param_3[1];
  uVar2 = fn_0016e8ec(param_1,&local_20);
  fn_0016e824(param_1,uVar2,param_4,param_5);
  return;
}


