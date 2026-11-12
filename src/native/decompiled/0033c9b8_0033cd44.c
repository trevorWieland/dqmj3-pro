#include "0033c9b8_0033cd44.h"



void fn_0033cd44(void)

{
  DAT_008924d8 = 0;
  DAT_008924dc = 0;
  return;
}



undefined4 fn_0033cd34(void)

{
  return DAT_008924dc;
}



undefined4 fn_0033cc98(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  int iVar1;
  
  DAT_008924d8 = 0;
  DAT_008924dc = 0;
  if (((param_1 == 0) || (param_4 < (int)(uint)(param_3 == 0))) ||
     (iVar1 = fn_00147e6c(param_1,&DAT_0033cd2c), iVar1 != 0)) {
    DAT_008924d8 = 0;
  }
  else {
    DAT_008924d8 = param_1 + 4;
  }
  if ((param_3 - 4 & 7) != 0) {
    DAT_008924d8 = 0;
  }
  if ((int)-(param_4 + (uint)(4 < param_3)) < 0 ==
      (SBORROW4(0,param_4) != SBORROW4(-param_4,(uint)(4 < param_3)))) {
    DAT_008924dc = 0;
  }
  else {
    DAT_008924dc = fn_0011c134(param_3 - 4,param_4 - (uint)(param_3 < 4),8,0);
  }
  return 1;
}



int fn_0033cc74(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  bool bVar4;
  bool bVar5;
  
  bVar5 = SCARRY4((int)param_1,1);
  iVar1 = (int)param_1 + 1;
  bVar4 = param_1 == (undefined4 *)0xffffffff;
  puVar3 = &DAT_008924d8;
  if (param_1 < (undefined4 *)0x80000000) {
    puVar3 = DAT_008924dc;
  }
  if (-1 < (int)param_1) {
    bVar5 = SBORROW4((int)puVar3,(int)param_1);
    iVar1 = (int)puVar3 - (int)param_1;
    bVar4 = puVar3 == param_1;
  }
  iVar2 = DAT_008924d8;
  if (!bVar4 && iVar1 < 0 == bVar5) {
    iVar2 = DAT_008924d8 + (int)param_1 * 8;
  }
  return (int)*(short *)(iVar2 + 4);
}



void fn_0033cc5c(void)

{
  DAT_008924cc = 0;
  DAT_008924d0 = 0;
  return;
}



undefined4 fn_0033cc4c(void)

{
  return DAT_008924d0;
}



int fn_0033cc24(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  bool bVar4;
  bool bVar5;
  
  bVar5 = SCARRY4((int)param_1,1);
  iVar1 = (int)param_1 + 1;
  bVar4 = param_1 == (undefined4 *)0xffffffff;
  puVar3 = &DAT_008924cc;
  if (param_1 < (undefined4 *)0x80000000) {
    puVar3 = DAT_008924d0;
  }
  if (-1 < (int)param_1) {
    bVar5 = SBORROW4((int)puVar3,(int)param_1);
    iVar1 = (int)puVar3 - (int)param_1;
    bVar4 = puVar3 == param_1;
  }
  iVar2 = DAT_008924cc;
  if (!bVar4 && iVar1 < 0 == bVar5) {
    iVar2 = DAT_008924cc + (int)param_1 * 0x14;
  }
  return (int)*(short *)(iVar2 + 10);
}



int fn_0033cbfc(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  bool bVar4;
  bool bVar5;
  
  bVar5 = SCARRY4((int)param_1,1);
  iVar1 = (int)param_1 + 1;
  bVar4 = param_1 == (undefined4 *)0xffffffff;
  puVar3 = &DAT_008924cc;
  if (param_1 < (undefined4 *)0x80000000) {
    puVar3 = DAT_008924d0;
  }
  if (-1 < (int)param_1) {
    bVar5 = SBORROW4((int)puVar3,(int)param_1);
    iVar1 = (int)puVar3 - (int)param_1;
    bVar4 = puVar3 == param_1;
  }
  iVar2 = DAT_008924cc;
  if (!bVar4 && iVar1 < 0 == bVar5) {
    iVar2 = DAT_008924cc + (int)param_1 * 0x14;
  }
  return (int)*(short *)(iVar2 + 8);
}



int fn_0033cbd4(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  bool bVar4;
  bool bVar5;
  
  bVar5 = SCARRY4((int)param_1,1);
  iVar1 = (int)param_1 + 1;
  bVar4 = param_1 == (undefined4 *)0xffffffff;
  puVar3 = &DAT_008924cc;
  if (param_1 < (undefined4 *)0x80000000) {
    puVar3 = DAT_008924d0;
  }
  if (-1 < (int)param_1) {
    bVar5 = SBORROW4((int)puVar3,(int)param_1);
    iVar1 = (int)puVar3 - (int)param_1;
    bVar4 = puVar3 == param_1;
  }
  iVar2 = DAT_008924cc;
  if (!bVar4 && iVar1 < 0 == bVar5) {
    iVar2 = DAT_008924cc + (int)param_1 * 0x14;
  }
  return (int)*(short *)(iVar2 + 0xc);
}



int fn_0033cbac(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  bool bVar4;
  bool bVar5;
  
  bVar5 = SCARRY4((int)param_1,1);
  iVar1 = (int)param_1 + 1;
  bVar4 = param_1 == (undefined4 *)0xffffffff;
  puVar3 = &DAT_008924cc;
  if (param_1 < (undefined4 *)0x80000000) {
    puVar3 = DAT_008924d0;
  }
  if (-1 < (int)param_1) {
    bVar5 = SBORROW4((int)puVar3,(int)param_1);
    iVar1 = (int)puVar3 - (int)param_1;
    bVar4 = puVar3 == param_1;
  }
  iVar2 = DAT_008924cc;
  if (!bVar4 && iVar1 < 0 == bVar5) {
    iVar2 = DAT_008924cc + (int)param_1 * 0x14;
  }
  return (int)*(short *)(iVar2 + 0xe);
}



undefined4 fn_0033cb9c(void)

{
  return DAT_008924d4;
}



undefined4 fn_0033cab8(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  DAT_008924cc = 0;
  DAT_008924d0 = 0;
  if (((param_1 == 0) || (param_4 < (int)(uint)(param_3 == 0))) ||
     (iVar1 = fn_00147e6c(param_1,&DAT_0033cb94,4), iVar1 != 0)) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + 4;
  }
  iVar1 = 0x14;
  iVar2 = 0;
  DAT_008924d0 = fn_0011c134(param_3 - 4,param_4 - (uint)(param_3 < 4));
  DAT_008924cc = 0;
  if (iVar1 == 0 && iVar2 == 0) {
    DAT_008924cc = param_1;
  }
  if ((int)-(param_4 + (uint)(4 < param_3)) < 0 ==
      (SBORROW4(0,param_4) != SBORROW4(-param_4,(uint)(4 < param_3)))) {
    DAT_008924d0 = 0;
  }
  iVar1 = 0;
  if (DAT_008924d0 < 1) {
    return 1;
  }
  do {
    if (iVar1 < DAT_008924d0) {
      iVar2 = iVar1;
      iVar1 = DAT_008924cc + iVar1 * 0x14;
      goto LAB_0033cb68;
    }
    do {
      iVar2 = iVar1;
      iVar1 = DAT_008924cc;
LAB_0033cb68:
      if (*(char *)(iVar1 + 0x10) != '\0') {
        DAT_008924d4 = iVar2;
        return 1;
      }
      iVar1 = iVar2 + 1;
      if (DAT_008924d0 <= iVar1) {
        return 1;
      }
    } while (iVar2 == -2 || iVar1 < -1);
  } while( true );
}



undefined4 fn_0033ca90(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  bool bVar4;
  bool bVar5;
  
  bVar5 = SCARRY4((int)param_1,1);
  iVar1 = (int)param_1 + 1;
  bVar4 = param_1 == (undefined4 *)0xffffffff;
  puVar3 = &DAT_008924cc;
  if (param_1 < (undefined4 *)0x80000000) {
    puVar3 = DAT_008924d0;
  }
  if (-1 < (int)param_1) {
    bVar5 = SBORROW4((int)puVar3,(int)param_1);
    iVar1 = (int)puVar3 - (int)param_1;
    bVar4 = puVar3 == param_1;
  }
  iVar2 = DAT_008924cc;
  if (!bVar4 && iVar1 < 0 == bVar5) {
    iVar2 = DAT_008924cc + (int)param_1 * 0x14;
  }
  return *(undefined4 *)(iVar2 + 4);
}



void fn_0033c9b8(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002cb3c0();
  *puVar1 = &DAT_00824df4;
  puVar1[7] = 0;
  *(undefined1 *)(puVar1 + 8) = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  return;
}


