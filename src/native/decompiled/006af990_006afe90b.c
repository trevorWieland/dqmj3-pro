#include "006af990_006afe90b.h"



int fn_006afe90(int param_1,int param_2)

{
  return *(int *)(param_1 + 4) + param_2 * 0x74;
}



undefined4 fn_006afe0c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  char local_38 [4];
  undefined4 local_34 [9];
  
  uVar3 = 0;
  local_38[0] = 'A';
  local_38[1] = '\0';
  local_38[2] = '\0';
  local_38[3] = '\0';
  local_34[0] = 0x1d9;
  local_34[1] = 0x47;
  local_34[2] = 0x1da;
  local_34[3] = 0x49;
  local_34[4] = 0x1db;
  local_34[5] = 0x53;
  local_34[6] = 0x1dc;
  local_34[7] = 0x56;
  local_34[8] = 0x1dd;
  iVar1 = *(int *)(param_1 + 4);
  while( true ) {
    if ((*(char *)(iVar1 + param_2 * 0x74) == local_38[uVar3 * 8]) &&
       (iVar2 = fn_00154ac8(local_34[uVar3 * 2]), iVar2 != 0)) break;
    uVar3 = uVar3 + 1;
    if (4 < uVar3) {
      return 0;
    }
  }
  return 1;
}



int fn_006afdf4(int param_1,int param_2)

{
  return (int)*(short *)(*(int *)(param_1 + 4) + param_2 * 0x74 + 0x12);
}



int fn_006afd2c(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  
  iVar1 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10);
  uVar3 = 0;
  iVar2 = iVar1 >> 0x1f;
  if (iVar1 / 0xc + iVar2 != iVar2) {
    do {
      piVar4 = (int *)(*(int *)(param_1 + 0x10) + uVar3 * 0xc);
      if ((*piVar4 == param_2) && (iVar2 = fn_00154ac8(piVar4[1]), iVar2 != 0)) {
        iVar2 = *(int *)(*(int *)(param_1 + 0x10) + uVar3 * 0xc + 8);
        if (iVar2 != 0) {
          return iVar2;
        }
        break;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)((*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10)) / 0xc));
  }
  return *(int *)(*(int *)(param_1 + 4) + param_2 * 0x74 + param_4 * 8 + param_3 * 4 + 0x5c);
}



int fn_006afd14(int param_1,int param_2)

{
  return (int)*(char *)(*(int *)(param_1 + 4) + param_2 * 0x74 + 0x14);
}



char * fn_006afcec(undefined4 param_1,int param_2)

{
  char *pcVar1;
  
  if (param_2 == 0) {
    pcVar1 = "bf_Z06_00";
  }
  else {
    pcVar1 = "bf_Z06_01";
  }
  return pcVar1;
}



int fn_006afcd4(int param_1,int param_2)

{
  return (int)*(short *)(*(int *)(param_1 + 4) + param_2 * 0x74 + 0x56);
}



int fn_006afcbc(int param_1,int param_2)

{
  return (int)*(short *)(*(int *)(param_1 + 4) + param_2 * 0x74 + 0x58);
}



int fn_006afca4(int param_1,int param_2)

{
  return (int)*(short *)(*(int *)(param_1 + 4) + param_2 * 0x74 + 0x6c);
}



void fn_006afbd4(void)

{
  return;
}



void fn_006afbbc(void)

{
  return;
}



void fn_006afba4(void)

{
  return;
}



int fn_006afb84(int param_1,int param_2)

{
  int iVar1;
  uint in_fpscr;
  
  iVar1 = (int)*(short *)(*(int *)(param_1 + 4) + param_2 * 0x74 + 0x16);
  VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x16) & 3);
  return iVar1;
}


