#include "006c7398_006c7f68.h"



int fn_006c7f68(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = fn_006c2578(*(undefined4 *)(DAT_00897834 + 0x20),*(undefined1 *)(param_1 + 4));
  return (int)*(short *)(iVar1 + param_2 * 0x18 + 0xe);
}



undefined4 fn_006c7ef8(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)
           fn_006c2578(*(undefined4 *)(DAT_00897834 + 0x20),*(undefined1 *)(param_1 + 4));
  return *puVar1;
}



int fn_006c7ec4(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = fn_006c2578(*(undefined4 *)(DAT_00897834 + 0x20),*(undefined1 *)(param_1 + 4));
  return iVar1 + param_2 * 0x18 + 0x12;
}



bool fn_006c7e7c(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = (int *)fn_006c2578(*(undefined4 *)(DAT_00897834 + 0x20),*(undefined1 *)(param_1 + 4));
  iVar3 = *piVar1;
  iVar2 = fn_006b64b0(*(undefined4 *)(DAT_00897804 + 8));
  return iVar3 <= iVar2;
}



int fn_006c7e54(int param_1)

{
  int iVar1;
  
  iVar1 = fn_006c2578(*(undefined4 *)(DAT_00897834 + 0x20),*(undefined1 *)(param_1 + 4));
  return (int)*(short *)(iVar1 + 10);
}



int fn_006c7e20(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = fn_006c2578(*(undefined4 *)(DAT_00897834 + 0x20),*(undefined1 *)(param_1 + 4));
  return (int)*(short *)(iVar1 + param_2 * 0x18 + 0xc);
}



undefined4 fn_006c7df8(int param_1)

{
  int iVar1;
  
  iVar1 = fn_006c2578(*(undefined4 *)(DAT_00897834 + 0x20),*(undefined1 *)(param_1 + 4));
  return *(undefined4 *)(iVar1 + 4);
}



int fn_006c7b58(undefined4 param_1,undefined4 param_2)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  
  uVar2 = fn_00292f20();
  iVar3 = fn_006be0f4(uVar2,param_2);
  sVar1 = *(short *)(iVar3 + 0x120);
  if (sVar1 != 1) {
    if (sVar1 == 2) {
      pcVar8 = "MenuMessagePassingGreetingNumNochorin";
      pcVar7 = "MenuMessagePassingGreetingTogetherNochorin";
      iVar4 = fn_00291ac0(iVar3);
      if (iVar4 == 0) {
        pcVar6 = "MenuMessagePassingGreetingNochorin";
      }
      else {
        pcVar6 = (char *)0x0;
      }
      goto LAB_006c7ba0;
    }
    if (sVar1 != 0x1b) {
      return 0;
    }
  }
  pcVar8 = (char *)&DAT_006c7d2c;
  pcVar7 = (char *)&DAT_006c7d4c;
  pcVar6 = (char *)0x0;
LAB_006c7ba0:
  iVar4 = 0;
  if ((((((*(int *)(iVar3 + 0x908) != 0 || *(int *)(iVar3 + 0x90c) != 0) &&
         (iVar4 = 1, *(int *)(iVar3 + 0x934) != 0 || *(int *)(iVar3 + 0x930) != 0)) &&
        (iVar4 = 2, *(int *)(iVar3 + 0x958) != 0 || *(int *)(iVar3 + 0x95c) != 0)) &&
       ((iVar4 = 3, *(int *)(iVar3 + 0x984) != 0 || *(int *)(iVar3 + 0x980) != 0 &&
        (iVar4 = 4, *(int *)(iVar3 + 0x9ac) != 0 || *(int *)(iVar3 + 0x9a8) != 0)))) &&
      ((iVar4 = 5, *(int *)(iVar3 + 0x9d4) != 0 || *(int *)(iVar3 + 0x9d0) != 0 &&
       ((iVar4 = 6, *(int *)(iVar3 + 0x9f8) != 0 || *(int *)(iVar3 + 0x9fc) != 0 &&
        (iVar4 = 7, *(int *)(iVar3 + 0xa20) != 0 || *(int *)(iVar3 + 0xa24) != 0)))))) &&
     (iVar4 = 8, *(int *)(iVar3 + 0xa4c) != 0 || *(int *)(iVar3 + 0xa48) != 0)) {
    iVar4 = 9;
  }
  uVar5 = *(ushort *)(iVar3 + iVar4 * 0x28 + 0x8e8) + 2;
  if ((uVar5 % 10 == 0) && (uVar5 != 0)) {
    fn_0015b0f8();
    iVar3 = fn_0022f584(pcVar8,0);
    return iVar3;
  }
  if ((*(byte *)(iVar3 + 0xa74) & 0x20) != 0) {
    uVar2 = fn_00292f20();
    fn_006be0cc(uVar2,param_2);
    fn_0015b0dc();
    iVar3 = fn_0022f584(pcVar7,0);
    return iVar3;
  }
  if (pcVar6 == (char *)0x0) {
    return iVar3 + 0x38;
  }
  iVar3 = fn_0022f584(pcVar6,0);
  return iVar3;
}



int fn_006c7aa8(int param_1)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  uVar1 = 0;
  if (*(int *)(param_1 + 0x178) +
      (*(int *)(param_1 + 0x174) - *(int *)(param_1 + 0x16c) >> 2) * 0x20 !=
      *(int *)(param_1 + 0x170)) {
    do {
      iVar4 = *(int *)(param_1 + 0x170) + uVar1;
      uVar1 = uVar1 + 1;
      puVar2 = (uint *)(*(int *)(param_1 + 0x16c) +
                       ((int)(iVar4 + ((uint)(iVar4 >> 0x1f) >> 0x1b)) >> 5) * 4);
      uVar3 = iVar4 % 0x20;
      if ((int)uVar3 < 0) {
        puVar2 = puVar2 + -1;
        uVar3 = uVar3 + 0x20;
      }
      if ((*puVar2 & 1 << (uVar3 & 0xff)) != 0) {
        iVar5 = iVar5 + 1;
      }
    } while (uVar1 < (uint)((*(int *)(param_1 + 0x178) +
                            (*(int *)(param_1 + 0x174) - *(int *)(param_1 + 0x16c) >> 2) * 0x20) -
                           *(int *)(param_1 + 0x170)));
  }
  return iVar5;
}



int fn_006c78d8(int param_1)

{
  return *(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) >> 2;
}



int fn_006c78cc(int param_1,int param_2)

{
  return *(int *)(param_1 + 8) + param_2 * 4;
}



bool fn_006c7840(int param_1)

{
  int iVar1;
  
  iVar1 = fn_00145aac(*(undefined4 *)(param_1 + 0xc));
  return iVar1 == 1;
}



undefined4 fn_006c7810(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_00145aac(*(undefined4 *)(param_1 + 0xc));
  if ((iVar1 != 1) || (iVar1 = fn_00145aac(*(undefined4 *)(param_1 + 0x1c)), uVar2 = 1, iVar1 != 1)
     ) {
    uVar2 = 0;
  }
  return uVar2;
}



bool fn_006c77c8(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = (int *)**(int **)(param_1 + 0x18);
  while( true ) {
    if (piVar1 == *(int **)(param_1 + 0x18)) {
      return false;
    }
    if (*(int *)(piVar1[2] + 4) == param_2) break;
    piVar1 = (int *)*piVar1;
  }
  return **(int **)(piVar1[2] + 0x14) != 0;
}



undefined4 fn_006c7798(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_00145aac(*(undefined4 *)(param_1 + 0xc));
  if ((iVar1 != 1) || (iVar1 = fn_00145aac(*(undefined4 *)(param_1 + 0x1c)), uVar2 = 1, iVar1 != 1)
     ) {
    uVar2 = 0;
  }
  return uVar2;
}



bool fn_006c76f8(int param_1)

{
  return *(int *)(param_1 + 0xc) != -1;
}



int fn_006c75c8(undefined4 param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  if ((param_3 != 0) && (param_3 < 0x5a)) {
    uVar1 = (uint)(byte)(&DAT_007c0d1c)[param_3];
    if (0x59 < uVar1) {
      uVar1 = 0;
    }
    iVar2 = fn_00154ac8(uVar1 + 500);
    if (iVar2 != 0) {
      bVar4 = (&DAT_007c0d1c)[param_3];
      if (0x59 < bVar4) {
        bVar4 = 0;
      }
      goto LAB_006c761c;
    }
  }
  bVar4 = 0;
LAB_006c761c:
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  fn_001028d4(&local_38,(char *)&DAT_006c75a0,param_2,bVar4);
  iVar2 = fn_0016ba34(DAT_00897800,DAT_00898788,&local_38,0);
  if ((iVar2 == 0) || (iVar3 = fn_00100b58(), iVar3 == 0)) {
    fn_001028d4(&local_38,&DAT_006c75b4,param_2,DAT_00891a4c);
    iVar2 = fn_0016ba34(DAT_00897800,DAT_00898788,&local_38,0);
  }
  return iVar2;
}



bool fn_006c73fc(int param_1)

{
  return *(int *)(param_1 + 0x1a0) != -1;
}



undefined4 fn_006c7398(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_006a9938(param_2);
  if (iVar1 != 0) {
    if (*(float *)(param_1 + 0x24) - DAT_008c8e7c * 2.0 < *(float *)(param_2 + 0x24)) {
      uVar2 = fn_0065fd34(*(undefined4 *)(param_1 + 0x1a8),*(undefined4 *)(param_2 + 0x164),0);
      return uVar2;
    }
  }
  return 0;
}


