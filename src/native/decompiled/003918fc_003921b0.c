#include "003918fc_003921b0.h"



void fn_003921b0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  fn_006732a0(*param_1,1,param_2,param_3);
  *(char *)(param_1 + 2) = (char)param_2;
  param_1[5] = 0;
  param_1[3] = param_3;
  *(undefined1 *)(param_1 + 4) = 1;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)((int)param_1 + 0x19) = 0;
  return;
}



int fn_003920f0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 != 0) {
    fn_005f6270(*param_1);
  }
  if ((char)param_1[4] != '\0') {
    if ((char)param_1[6] == '\0') {
      iVar1 = (**(code **)(*(int *)*param_1 + 0x14))();
      if (iVar1 == 0) {
        if (*(int *)(*param_1 + 0x44) == 0) {
          *(undefined1 *)(param_1 + 6) = 1;
        }
        else {
          *(undefined1 *)((int)param_1 + 0x19) = 1;
        }
      }
    }
    else if (param_1[1] <= param_1[5]) {
      iVar1 = param_1[2];
      iVar2 = param_1[3];
      fn_006732a0(*param_1,1,(char)iVar1,iVar2);
      *(char *)(param_1 + 2) = (char)iVar1;
      param_1[5] = 0;
      param_1[3] = iVar2;
      *(undefined1 *)(param_1 + 4) = 1;
      *(undefined1 *)(param_1 + 6) = 0;
      *(undefined1 *)((int)param_1 + 0x19) = 0;
    }
    param_1[5] = param_1[5] + 1;
  }
  return (int)(char)param_1[6];
}



void fn_0039208c(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 != 0) {
    if (*(int *)(iVar2 + 4) < 999999) {
      *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
    }
    *(char *)(*(int *)(param_1 + 4) + 8) = *(char *)(*(int *)(param_1 + 4) + 8) + '\x01';
    iVar2 = fn_0033cc4c();
    if (iVar2 <= *(char *)(*(int *)(param_1 + 4) + 8)) {
      uVar1 = fn_0033cb9c();
      *(undefined1 *)(*(int *)(param_1 + 4) + 8) = uVar1;
    }
  }
  return;
}



char * fn_00391fdc(void)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = fn_006f7530(DAT_008977e0);
  if (iVar1 == 0) {
    if (**(int **)(DAT_008977e0 + 0x40) == 0) {
      iVar1 = fn_002fb61c(0);
      pcVar2 = (char *)0x0;
      if (iVar1 != 0) {
        pcVar2 = "Partner%sAthletics";
      }
    }
    else {
      pcVar2 = (char *)&DAT_0039203c;
    }
  }
  else {
    pcVar2 = "Partner%sNetworkLobby";
  }
  return pcVar2;
}



undefined4 fn_00391e0c(void)

{
  int iVar1;
  undefined *puVar2;
  
  iVar1 = fn_00129dc8(*(undefined4 *)(DAT_00897804 + 0x1c));
  puVar2 = &UNK_007c0fcc;
  if (iVar1 == 7) {
LAB_00391e74:
    return *(undefined4 *)(puVar2 + 4);
  }
  if (iVar1 == 8) {
LAB_00391e7c:
    return *(undefined4 *)(puVar2 + 0xc);
  }
  if (iVar1 == 9) {
LAB_00391e84:
    return *(undefined4 *)(puVar2 + 0x14);
  }
  if (iVar1 != 10) {
    puVar2 = &UNK_007c0fec;
    if (iVar1 == 3) goto LAB_00391e74;
    if (iVar1 == 4) goto LAB_00391e7c;
    if (iVar1 == 5) goto LAB_00391e84;
    if (iVar1 != 6) {
      return 0;
    }
  }
  return *(undefined4 *)(puVar2 + 0x1c);
}



undefined4 fn_00391df8(int param_1)

{
  return (&DAT_007c0ff0)[param_1 * 2];
}



undefined4 fn_00391dac(void)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = fn_006f7530(DAT_008977e0);
  if (((iVar1 != 0) || (**(int **)(DAT_008977e0 + 0x40) != 0)) ||
     (iVar1 = fn_002fb61c(), iVar1 != 0)) {
    uVar2 = 1;
  }
  return uVar2;
}



undefined4 fn_00391d98(int param_1)

{
  return (&DAT_007c0fd0)[param_1 * 2];
}



bool fn_00391d84(int param_1)

{
  return param_1 == 1 || param_1 == 2;
}



undefined2 fn_00391d58(void)

{
  int iVar1;
  
  iVar1 = fn_00129dc8(*(undefined4 *)(DAT_00897804 + 0x1c));
  return *(undefined2 *)(&DAT_007c0fb4 + iVar1 * 2);
}



void fn_00391cf4(int param_1)

{
  if ((((param_1 == 3 || param_1 == 4) || (param_1 == 5 || param_1 == 6)) ||
      (param_1 == 7 || param_1 == 8)) || (param_1 == 9 || param_1 == 10)) {
    fn_0024276c(*(undefined4 *)(DAT_00897804 + 0x1c),param_1);
    return;
  }
  return;
}



void fn_00391ccc(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00218664();
  *puVar1 = &DAT_0082b1a4;
  return;
}



void fn_00391b9c(int *param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  
  (**(code **)(*(int *)param_1[1] + 0x34))();
  iVar1 = fn_006aff38(param_1[5],0);
  iVar2 = param_1[5];
  if (iVar1 == 0) {
    fVar3 = *(float *)(*(int *)(iVar2 + 0x170) + 0x20) - *(float *)(iVar2 + 0x20);
    fn_00525bd0();
    fVar3 = fVar3 * 0.024543693;
  }
  else {
    if ((*(byte *)(iVar2 + 0x39c) & 8) == 0) {
      iVar1 = param_1[6];
      param_1[6] = iVar1 + 1U;
      if (iVar1 + 1U <= (uint)(param_1[0x16] * 10)) {
        return;
      }
      goto LAB_00391c3c;
    }
    fVar3 = *(float *)(param_1[1] + 0x30) + 3.1415927;
    fn_005df8f8();
  }
  param_1[7] = (int)fVar3;
LAB_00391c3c:
                    /* WARNING: Could not recover jumptable at 0x00391c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2c))(param_1,6);
  return;
}



void fn_00391ad8(int *param_1)

{
  int iVar1;
  float fVar2;
  
  (**(code **)(*(int *)param_1[1] + 0x34))();
  iVar1 = fn_001c7160(param_1[1]);
  if (iVar1 != 0) {
    iVar1 = fn_006aff38(param_1[5],0);
    if (iVar1 != 0) {
      iVar1 = fn_00163868(param_1[0x17]);
      iVar1 = (iVar1 + 1) / 3;
      param_1[0x16] = iVar1;
      if (iVar1 < 1) {
        param_1[0x16] = 1;
      }
                    /* WARNING: Could not recover jumptable at 0x00391b58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x2c))(param_1,5);
      return;
    }
    fVar2 = *(float *)(*(int *)(param_1[5] + 0x170) + 0x20) - *(float *)(param_1[5] + 0x20);
    fn_00525bd0();
    param_1[7] = (int)(fVar2 * 0.024543693);
  }
  return;
}



int fn_00391a54(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = fn_003b1580();
  if (iVar2 != 0) {
    (**(code **)(*(int *)param_1[5] + 0x84))();
    iVar3 = param_1[0x16];
    iVar1 = iVar3 / 3;
    param_1[0x16] = iVar1;
    if (iVar1 < 1) {
      param_1[0x16] = 1;
    }
    fn_001da640(param_1[5],iVar3 * 0x55555556);
    (**(code **)(*param_1 + 0x2c))(param_1,6);
  }
  return iVar2;
}



void fn_003919e8(void)

{
  return;
}



void fn_003918fc(int param_1)

{
  undefined4 *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined4 *)fn_00145b00(4,&DAT_00812c8c);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = &DAT_0083dd64;
      return;
    }
  }
  else if (param_1 == 1) {
    puVar1 = (undefined4 *)fn_00145b00(4,&DAT_00812c8c);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = &DAT_0083b480;
      return;
    }
  }
  else if (param_1 == 2) {
    puVar1 = (undefined4 *)fn_00145b00(4,&DAT_00812c8c);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = &DAT_0083b46c;
      return;
    }
  }
  else {
    puVar1 = (undefined4 *)fn_00145b00(4,&DAT_00812c8c);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = &DAT_0082b130;
    }
  }
  return;
}


