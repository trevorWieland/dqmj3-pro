#include "00247024_002473c0.h"



undefined1 fn_002473c0(int param_1)

{
  undefined1 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    if (param_1 < 4000) {
      uVar1 = 1;
    }
    else if (param_1 < 8000) {
      uVar1 = 2;
    }
    else if (param_1 < 12000) {
      uVar1 = 3;
    }
    else if (param_1 < 18000) {
      uVar1 = 4;
    }
    else if (param_1 < 32000) {
      uVar1 = 5;
    }
    else if (param_1 < 46000) {
      uVar1 = 6;
    }
    else if (param_1 < 74000) {
      uVar1 = 7;
    }
    else {
      uVar1 = 8;
    }
  }
  return uVar1;
}



void fn_002472a4(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 local_40 [4];
  undefined4 local_30 [4];
  
  iVar1 = fn_006b83e4(*(undefined4 *)(DAT_00897804 + 0xc));
  iVar5 = 0;
  if (0 < iVar1) {
    do {
      uVar2 = fn_00144df4(*(undefined4 *)(DAT_00897804 + 0xc),iVar5);
      local_40[iVar5] = uVar2;
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar1);
  }
  iVar6 = 0;
  iVar5 = 0;
  if (0 < iVar1) {
    do {
      fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),local_40[iVar5]);
      iVar3 = fn_00247444();
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + iVar3;
    } while (iVar5 < iVar1);
  }
  iVar5 = fn_006b84b0(*(undefined4 *)(DAT_00897804 + 0xc));
  iVar3 = 0;
  if (0 < iVar5) {
    do {
      uVar2 = fn_006b8538(*(undefined4 *)(DAT_00897804 + 0xc),iVar3);
      local_30[iVar3] = uVar2;
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar5);
  }
  iVar3 = 0;
  iVar7 = 0;
  if (0 < iVar5) {
    do {
      fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),local_30[iVar7]);
      iVar4 = fn_00247444();
      iVar7 = iVar7 + 1;
      iVar3 = iVar3 + iVar4;
    } while (iVar7 < iVar5);
  }
  fn_00300f74(iVar6 + iVar3,iVar1 + iVar5);
  return;
}



int fn_0024720c(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 local_28 [4];
  
  iVar1 = fn_006b83e4(*(undefined4 *)(DAT_00897804 + 0xc));
  iVar4 = 0;
  if (0 < iVar1) {
    do {
      uVar2 = fn_00144df4(*(undefined4 *)(DAT_00897804 + 0xc),iVar4);
      local_28[iVar4] = uVar2;
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  iVar5 = 0;
  iVar4 = 0;
  if (0 < iVar1) {
    do {
      fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),local_28[iVar4]);
      iVar3 = fn_00247444();
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + iVar3;
    } while (iVar4 < iVar1);
  }
  return iVar5;
}



int fn_002471d4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 0;
  if (0 < param_2) {
    do {
      iVar1 = fn_00247444(*(undefined4 *)(param_1 + iVar2 * 4));
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + iVar1;
    } while (iVar2 < param_2);
  }
  return iVar3;
}



int fn_00247138(int param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  piVar1 = (int *)fn_002fecec(param_2 << 2);
  if (0 < (int)param_2) {
    uVar2 = param_2 & 1;
    uVar4 = (uint)(uVar2 != 0);
    if (uVar2 != 0) {
      *piVar1 = param_1;
    }
    for (; (int)uVar2 < (int)param_2; uVar2 = uVar2 + 2) {
      piVar1[uVar4] = param_1 + uVar4 * 0xf0;
      piVar1[uVar4 + 1] = param_1 + (uVar4 + 1) * 0xf0;
      uVar4 = uVar4 + 2;
    }
  }
  iVar5 = 0;
  iVar6 = 0;
  if (0 < (int)param_2) {
    do {
      iVar3 = fn_00247444(piVar1[iVar6]);
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + iVar3;
    } while (iVar6 < (int)param_2);
  }
  fn_0030233c(piVar1);
  return iVar5;
}



undefined1 fn_00247024(void)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 local_28 [4];
  
  iVar2 = fn_006b83e4(*(undefined4 *)(DAT_00897804 + 0xc));
  iVar5 = 0;
  if (0 < iVar2) {
    do {
      uVar3 = fn_00144df4(*(undefined4 *)(DAT_00897804 + 0xc),iVar5);
      local_28[iVar5] = uVar3;
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar2);
  }
  iVar5 = 0;
  iVar6 = 0;
  if (0 < iVar2) {
    do {
      fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),local_28[iVar6]);
      iVar4 = fn_00247444();
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + iVar4;
    } while (iVar6 < iVar2);
  }
  uVar1 = 0;
  if (iVar5 != 0) {
    if (iVar5 < 4000) {
      uVar1 = 1;
    }
    else if (iVar5 < 8000) {
      uVar1 = 2;
    }
    else if (iVar5 < 12000) {
      uVar1 = 3;
    }
    else if (iVar5 < 18000) {
      uVar1 = 4;
    }
    else if (iVar5 < 32000) {
      uVar1 = 5;
    }
    else if (iVar5 < 46000) {
      uVar1 = 6;
    }
    else if (iVar5 < 74000) {
      uVar1 = 7;
    }
    else {
      uVar1 = 8;
    }
  }
  return uVar1;
}


