#include "0030c0e4_0030c344.h"



void fn_0030c344(void)

{
  DAT_00892834 = 0;
  DAT_00892838 = 0;
  return;
}



undefined4 fn_0030c230(int param_1,int param_2,int param_3)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  int iVar6;
  
  if ((param_1 == 0) || (DAT_00892838 <= param_1)) {
    return 0;
  }
  iVar6 = DAT_00892834 + param_1 * 0x12;
  iVar3 = 0;
  do {
    if (param_3 == 0) {
      psVar5 = (short *)(iVar6 + iVar3 * 6);
      iVar2 = param_2 + iVar3 * 6;
      sVar1 = *psVar5;
      if (sVar1 == 0x7fff) {
        sVar1 = 0;
      }
      *(char *)(iVar2 + 1) = (char)sVar1;
      sVar1 = psVar5[1];
      if (sVar1 == 0x7fff) {
        sVar1 = 0;
      }
      *(short *)(iVar2 + 2) = sVar1;
      sVar1 = psVar5[2];
      if (sVar1 == 0x7fff) {
        sVar1 = 0;
      }
      *(short *)(iVar2 + 4) = sVar1;
    }
    else {
      psVar5 = (short *)(iVar6 + iVar3 * 6);
      iVar2 = (int)*psVar5;
      if (iVar2 == 0x7fff) {
        iVar2 = fn_00163868(0xf1);
        iVar2 = iVar2 + -0x78;
      }
      iVar4 = param_2 + iVar3 * 6;
      *(char *)(iVar4 + 1) = (char)iVar2;
      sVar1 = psVar5[1];
      if (sVar1 == 0x7fff) {
        sVar1 = fn_00163868(0x1ff);
        sVar1 = sVar1 + -0xff;
      }
      *(short *)(iVar4 + 2) = sVar1;
      sVar1 = psVar5[2];
      if (sVar1 == 0x7fff) {
        sVar1 = fn_00163868(0x97);
        sVar1 = sVar1 + -100;
      }
      *(short *)(iVar4 + 4) = sVar1;
    }
    iVar2 = iVar3 + 1;
    *(undefined1 *)(param_2 + iVar3 * 6) = 1;
    iVar3 = iVar2;
  } while (iVar2 < 3);
  return 1;
}



void fn_0030c174(undefined4 *param_1,short *param_2)

{
  short sVar1;
  bool bVar2;
  bool bVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined2 *)(param_1 + 4) = 0;
  *(char *)((int)param_1 + 1) = (char)*param_2;
  *(short *)((int)param_1 + 2) = param_2[1];
  *(short *)(param_1 + 1) = param_2[2];
  sVar1 = *param_2;
  bVar2 = sVar1 == 0;
  if (bVar2) {
    sVar1 = param_2[1];
  }
  bVar3 = bVar2 && sVar1 == 0;
  if (bVar2 && sVar1 == 0) {
    bVar3 = param_2[2] == 0;
  }
  if (!bVar3) {
    *(undefined1 *)param_1 = 1;
  }
  *(char *)((int)param_1 + 7) = (char)param_2[3];
  *(short *)(param_1 + 2) = param_2[4];
  *(short *)((int)param_1 + 10) = param_2[5];
  sVar1 = param_2[3];
  bVar2 = sVar1 == 0;
  if (bVar2) {
    sVar1 = param_2[4];
  }
  bVar3 = bVar2 && sVar1 == 0;
  if (bVar2 && sVar1 == 0) {
    bVar3 = param_2[5] == 0;
  }
  if (!bVar3) {
    *(undefined1 *)((int)param_1 + 6) = 1;
  }
  *(char *)((int)param_1 + 0xd) = (char)param_2[6];
  *(short *)((int)param_1 + 0xe) = param_2[7];
  *(short *)(param_1 + 4) = param_2[8];
  sVar1 = param_2[6];
  bVar2 = sVar1 == 0;
  if (bVar2) {
    sVar1 = param_2[7];
  }
  bVar3 = bVar2 && sVar1 == 0;
  if (bVar2 && sVar1 == 0) {
    bVar3 = param_2[8] == 0;
  }
  if (!bVar3) {
    *(undefined1 *)(param_1 + 3) = 1;
  }
  return;
}



undefined4 fn_0030c0e4(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  if (((param_1 == 0) || (param_4 < (int)(uint)(param_3 == 0))) ||
     (iVar1 = fn_00147e6c(param_1,&DAT_0030c168,4), iVar1 != 0)) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + 4;
  }
  iVar1 = 0x12;
  iVar2 = 0;
  DAT_00892838 = fn_0011c134(param_3 - 4,param_4 - (uint)(param_3 < 4));
  if (iVar1 != 0 || iVar2 != 0) {
    param_1 = 0;
  }
  if ((int)-(param_4 + (uint)(4 < param_3)) < 0 ==
      (SBORROW4(0,param_4) != SBORROW4(-param_4,(uint)(4 < param_3)))) {
    DAT_00892838 = 0;
  }
  DAT_00892834 = param_1;
  return 1;
}


