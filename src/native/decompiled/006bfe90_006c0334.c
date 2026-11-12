#include "006bfe90_006c0334.h"



bool fn_006c0334(undefined4 *param_1)

{
  return *(int *)*param_1 == -0x1194d800;
}



int fn_006c02d4(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  short *psVar4;
  
  iVar2 = 0;
  uVar3 = 0;
  do {
    psVar4 = (short *)(*param_1 + uVar3 * 4 + 0x56);
    iVar1 = fn_0068f818((int)*psVar4);
    if (iVar1 != 0) {
      if (param_3 <= iVar2) {
        return iVar2;
      }
      iVar1 = iVar2 * 4;
      iVar2 = iVar2 + 1;
      *(undefined4 *)(param_2 + iVar1) = *(undefined4 *)psVar4;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 7);
  return iVar2;
}



int fn_006c01f4(int *param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  short sVar6;
  int iVar7;
  short local_b8 [78];
  
  sVar1 = *(short *)(*param_1 + 0x2a);
  sVar2 = *(short *)(*param_1 + 0x8c);
  fn_00301f50(local_b8,0x98);
  iVar4 = fn_006bf5ec(param_1,local_b8,0x4c,1,1,1,1,1);
  sVar6 = 0;
  iVar7 = 0;
  if (0 < iVar4) {
    do {
      iVar5 = 0;
      do {
        if (((&DAT_007c421e)[iVar5] & 0xffff) == (int)local_b8[iVar7]) {
          sVar6 = sVar6 + (short)((uint)(&DAT_007c421e)[iVar5] >> 0x10);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < 10);
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar4);
  }
  if (*(int *)(*param_1 + 0xe0) == 0) {
    sVar3 = 0;
  }
  else {
    sVar3 = fn_00203f80();
  }
  return (int)(short)(sVar3 + sVar6 + sVar2 + sVar1);
}



int fn_006c0114(int *param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  short sVar6;
  int iVar7;
  short local_b8 [78];
  
  sVar1 = *(short *)(*param_1 + 0x20);
  sVar2 = *(short *)(*param_1 + 0x86);
  fn_00301f50(local_b8,0x98);
  iVar4 = fn_006bf5ec(param_1,local_b8,0x4c,1,1,1,1,1);
  sVar6 = 0;
  iVar7 = 0;
  if (0 < iVar4) {
    do {
      iVar5 = 0;
      do {
        if (((&DAT_007c41a6)[iVar5] & 0xffff) == (int)local_b8[iVar7]) {
          sVar6 = sVar6 + (short)((uint)(&DAT_007c41a6)[iVar5] >> 0x10);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < 10);
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar4);
  }
  if (*(int *)(*param_1 + 0xe0) == 0) {
    sVar3 = 0;
  }
  else {
    sVar3 = fn_00203f60();
  }
  return (int)(short)(sVar3 + sVar6 + sVar2 + sVar1);
}



int fn_006c0028(int *param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  short sVar6;
  int iVar7;
  short local_b8 [78];
  
  sVar1 = *(short *)(*param_1 + 0x1e);
  sVar2 = *(short *)(*param_1 + 0x84);
  fn_00301f50(local_b8,0x98);
  iVar4 = fn_006bf5ec(param_1,local_b8,0x4c,1,1,1,1,1);
  sVar6 = 0;
  iVar7 = 0;
  if (0 < iVar4) {
    do {
      iVar5 = 0;
      do {
        if (((&DAT_007c417e)[iVar5] & 0xffff) == (int)local_b8[iVar7]) {
          sVar6 = sVar6 + (short)((uint)(&DAT_007c417e)[iVar5] >> 0x10);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < 10);
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar4);
  }
  if (*(int *)(*param_1 + 0xe0) == 0) {
    sVar3 = 0;
  }
  else {
    sVar3 = fn_00203f40();
  }
  return (int)(short)(sVar3 + sVar6 + sVar2 + sVar1);
}



int fn_006c001c(int *param_1)

{
  return *param_1 + 0xe0;
}



int fn_006c0010(int *param_1)

{
  return *param_1 + 0x72;
}



int fn_006bff0c(int *param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  short sVar6;
  int iVar7;
  short local_b8 [78];
  
  sVar1 = *(short *)(*param_1 + 0x2c);
  sVar2 = *(short *)(*param_1 + 0x8e);
  fn_00301f50(local_b8,0x98);
  iVar4 = fn_006bf5ec(param_1,local_b8,0x4c,1,1,1,1,1);
  sVar6 = 0;
  iVar7 = 0;
  if (0 < iVar4) {
    do {
      iVar5 = 0;
      do {
        if (((&DAT_007c4246)[iVar5] & 0xffff) == (int)local_b8[iVar7]) {
          sVar6 = sVar6 + (short)((uint)(&DAT_007c4246)[iVar5] >> 0x10);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < 10);
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar4);
  }
  if (*(int *)(*param_1 + 0xe0) == 0) {
    sVar3 = 0;
  }
  else {
    sVar3 = fn_00203ed8();
  }
  return (int)(short)(sVar3 + sVar6 + sVar2 + sVar1);
}



undefined4 fn_006bfe90(int *param_1)

{
  short sVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar2 = 0;
  do {
    sVar1 = *(short *)(*param_1 + uVar2 * 2 + 0x44);
    if ((int)sVar1 - 0x46U < 5) {
      switch(sVar1) {
      case 0x46:
        return 0;
      case 0x47:
        return 1;
      case 0x48:
        return 2;
      case 0x49:
        return 3;
      case 0x4a:
        return 4;
      }
      break;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 9);
  uVar3 = fn_0066173c((int)*(short *)(*param_1 + 0x1c));
  return uVar3;
}


