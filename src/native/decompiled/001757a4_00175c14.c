#include "001757a4_00175c14.h"



char * fn_00175c14(int param_1)

{
  char *pcVar1;
  
  if (((*(char *)(param_1 + 4) == '\0') && (pcVar1 = *(char **)(param_1 + 8), pcVar1 != (char *)0x0)
      ) && (*pcVar1 == '\x10')) {
    pcVar1 = pcVar1 + 4;
  }
  else {
    pcVar1 = (char *)0x0;
  }
  return pcVar1;
}



char * fn_00175be4(int param_1)

{
  char *pcVar1;
  
  if (((*(char *)(param_1 + 4) == '\0') && (pcVar1 = *(char **)(param_1 + 8), pcVar1 != (char *)0x0)
      ) && (*pcVar1 == '\x02')) {
    pcVar1 = pcVar1 + 4;
  }
  else {
    pcVar1 = (char *)0x0;
  }
  return pcVar1;
}



int fn_00175bd0(int param_1)

{
  if (*(char *)(param_1 + 4) == '\x17') {
    param_1 = param_1 + 8;
  }
  else {
    param_1 = 0;
  }
  return param_1;
}



int fn_00175ab8(int param_1,undefined4 *param_2,int param_3)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  
  iVar6 = 0;
  if (param_2 != (undefined4 *)0x0) {
    iVar6 = param_3;
  }
  if ((param_2 == (undefined4 *)0x0 || param_3 == 0) || iVar6 < 0) {
    return 0;
  }
  cVar1 = *(char *)(param_1 + 4);
  if (((cVar1 == '\0') && (pcVar2 = *(char **)(param_1 + 8), pcVar2 != (char *)0x0)) &&
     (*pcVar2 == '\x01')) {
    if (pcVar2 + 4 != (char *)0x0) {
      *param_2 = pcVar2 + 4;
      return 1;
    }
  }
  else if (cVar1 == '\x01') {
    iVar6 = *(int *)(param_1 + 0xc);
    if (iVar6 < 1) {
      return 0;
    }
    iVar3 = 0;
    do {
      if (param_3 <= iVar3) {
        return iVar3;
      }
      if (*(char *)(param_1 + 4) == '\x01') {
        bVar7 = -1 < iVar3;
        bVar8 = iVar3 == 0;
        iVar4 = 1;
        if (bVar7) {
          iVar4 = *(int *)(param_1 + 0xc);
          bVar8 = iVar4 == iVar3;
        }
        iVar5 = iVar4;
        if (!bVar8 && (bVar7 && iVar3 <= iVar4)) {
          iVar5 = param_1 + iVar3 * 4;
        }
        if (!bVar8 && (bVar7 && iVar3 <= iVar4)) {
          iVar5 = *(int *)(iVar5 + 0x10);
        }
        if (bVar8 || (!bVar7 || iVar4 < iVar3)) goto LAB_00175b50;
      }
      else {
LAB_00175b50:
        iVar5 = 0;
      }
      param_2[iVar3] = iVar5;
      iVar3 = iVar3 + 1;
      if (iVar6 <= iVar3) {
        return iVar3;
      }
    } while( true );
  }
  if ((cVar1 != '\x15') || (iVar6 = *(int *)(param_1 + 0x10), iVar6 < 1)) {
    return 0;
  }
  iVar3 = 0;
  do {
    if (param_3 <= iVar3) {
      return iVar3;
    }
    if (*(char *)(param_1 + 4) == '\x15') {
      bVar7 = -1 < iVar3;
      bVar8 = iVar3 == 0;
      iVar4 = 0x15;
      if (bVar7) {
        iVar4 = *(int *)(param_1 + 0x10);
        bVar8 = iVar4 == iVar3;
      }
      iVar5 = iVar4;
      if (!bVar8 && (bVar7 && iVar3 <= iVar4)) {
        iVar5 = param_1 + iVar3 * 4;
      }
      if (!bVar8 && (bVar7 && iVar3 <= iVar4)) {
        iVar5 = *(int *)(iVar5 + 0x14);
      }
      if (bVar8 || (!bVar7 || iVar4 < iVar3)) goto LAB_00175ba4;
    }
    else {
LAB_00175ba4:
      iVar5 = 0;
    }
    param_2[iVar3] = iVar5;
    iVar3 = iVar3 + 1;
    if (iVar6 <= iVar3) {
      return iVar3;
    }
  } while( true );
}



int fn_00175aa4(int param_1)

{
  if (*(char *)(param_1 + 4) == '\a') {
    param_1 = param_1 + 8;
  }
  else {
    param_1 = 0;
  }
  return param_1;
}



undefined4 fn_00175a90(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 4) == '\x19') {
    uVar1 = *(undefined4 *)(param_1 + 8);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



int fn_00175a78(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 4) == '\r') {
    iVar1 = *(int *)(param_1 + 8) + 4;
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}



char * fn_00175a48(int param_1)

{
  char *pcVar1;
  
  if (((*(char *)(param_1 + 4) == '\0') && (pcVar1 = *(char **)(param_1 + 8), pcVar1 != (char *)0x0)
      ) && (*pcVar1 == '\f')) {
    pcVar1 = pcVar1 + 4;
  }
  else {
    pcVar1 = (char *)0x0;
  }
  return pcVar1;
}



undefined4 fn_00175a0c(int param_1,uint param_2)

{
  if (((*(char *)(param_1 + 4) != '\x03') || ((int)param_2 < 0)) || (3 < param_2)) {
    return 0;
  }
  if (*(int *)(param_1 + 8) < 2) {
    param_2 = 0;
  }
  return *(undefined4 *)(param_1 + param_2 * 4 + 0xc);
}



undefined4 fn_001759f8(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 4) == '\x18') {
    uVar1 = *(undefined4 *)(param_1 + 8);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



uint fn_001759d0(uint param_1)

{
  bool bVar1;
  
  bVar1 = *(char *)(param_1 + 5) == '\0';
  if (bVar1) {
    param_1 = (uint)*(byte *)(param_1 + 8);
  }
  if (!bVar1 || param_1 != 0) {
    param_1 = 1;
  }
  return param_1;
}



undefined4 fn_00175978(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = fn_00182d34(*(undefined4 *)(param_1 + 8));
  if ((-1 < iVar2) && (iVar2 = fn_001793c4(param_2), iVar2 != 0)) {
    cVar1 = *(char *)(iVar2 + 6);
    if (cVar1 == '\x01') {
      return 0;
    }
    if (cVar1 == '\x02') {
      return 1;
    }
    if (cVar1 == '\x03') {
      return 2;
    }
  }
  return 0xffffffff;
}



undefined2 fn_00175944(int param_1,undefined4 param_2)

{
  undefined2 uVar1;
  int iVar2;
  
  iVar2 = fn_00182d34(*(undefined4 *)(param_1 + 8));
  if ((iVar2 < 0) || (iVar2 = fn_001793c4(param_2), iVar2 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined2 *)(iVar2 + 4);
  }
  return uVar1;
}



void fn_001757a4(undefined4 param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float in_s0;
  int local_28 [4];
  
  iVar2 = fn_00164a34(param_1,param_2,param_1);
  if (((((iVar2 != 0) && (0.0 <= in_s0)) && ((int)in_s0 < 0x3f800001)) &&
      ((local_28[0] = param_2, iVar2 = fn_00164a34(param_1,param_2), iVar2 != 0 &&
       (iVar2 = fn_0017484c(DAT_008977e4), iVar2 != 0)))) &&
     (iVar2 = fn_00165bb4(iVar2,local_28), iVar2 != 0)) {
    fn_00179928();
    cVar1 = (char)param_2;
    if ((int)cVar1 - 0x10U < 8) {
      iVar2 = 0x20;
      do {
        local_28[0] = iVar2;
        iVar3 = fn_0017484c(DAT_008977e4);
        if (iVar3 != 0) {
          iVar4 = fn_00175dcc(iVar3,local_28);
          iVar3 = 0;
          if (iVar4 != 0) {
            iVar3 = *(int *)(iVar4 + 0x50);
          }
          if ((iVar4 != 0 && iVar3 != 0) && (iVar3 = fn_001748ec(iVar4), iVar3 == cVar1)) {
            fn_00179928(iVar4);
          }
        }
        iVar2 = (int)(char)((char)iVar2 + '\x01');
      } while (iVar2 < 0x22);
      iVar2 = 0x22;
      do {
        local_28[0] = iVar2;
        iVar3 = fn_0017484c(DAT_008977e4);
        if (iVar3 != 0) {
          iVar4 = fn_00175d88(iVar3,local_28);
          iVar3 = 0;
          if (iVar4 != 0) {
            iVar3 = *(int *)(iVar4 + 0x50);
          }
          if ((iVar4 != 0 && iVar3 != 0) && (iVar3 = fn_001748ec(iVar4), iVar3 == cVar1)) {
            fn_00179928(iVar4);
          }
        }
        iVar2 = (int)(char)((char)iVar2 + '\x01');
      } while (iVar2 < 0x24);
    }
  }
  return;
}


