#include "006c52ec_006c5a34.h"



int fn_006c5a34(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  
  iVar2 = fn_00204404(DAT_00897840);
  iVar6 = *(int *)(iVar2 + 4);
  uVar5 = 0;
  iVar3 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10);
  iVar2 = iVar3 >> 0x1f;
  if (iVar3 / 0xc + iVar2 != iVar2) {
    do {
      uVar1 = (*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10)) / 0xc;
      if (uVar1 <= uVar5) {
        fn_002ff628(9,&DAT_008c7603,&DAT_008c7603,uVar5,uVar1);
      }
      piVar4 = (int *)(*(int *)(param_1 + 0x10) + uVar5 * 0xc);
      iVar2 = *piVar4;
      iVar3 = piVar4[1];
      if (iVar2 == iVar6) {
        return iVar3;
      }
      if (iVar3 == iVar6) {
        return iVar2;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < (uint)((*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10)) / 0xc));
  }
  return -1;
}



int fn_006c58ac(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  iVar7 = 0;
  uVar5 = 0;
  iVar2 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10);
  iVar4 = iVar2 >> 0x1f;
  if (iVar2 / 0xc + iVar4 != iVar4) {
    do {
      bVar1 = false;
      uVar6 = (*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10)) / 0xc;
      if (uVar6 <= uVar5) {
        fn_002ff628(9,&DAT_008c7603,&DAT_008c7603,uVar5,uVar6);
      }
      piVar3 = (int *)(*(int *)(param_1 + 0x10) + uVar5 * 0xc);
      uVar6 = piVar3[1];
      if (((*piVar3 < 0) || (iVar4 = fn_002043cc(DAT_00897840), *(char *)(iVar4 + 0x10) == '\x02'))
         || ((iVar2 = fn_0066e510(DAT_00897850,*(undefined4 *)(iVar4 + 4)), iVar2 == 0 &&
             (iVar2 = *(int *)(iVar4 + 8), iVar4 = fn_0066e530(DAT_00897850), iVar2 != iVar4)))) {
        if (-1 < (int)uVar6) goto LAB_006c599c;
LAB_006c59ec:
        if (bVar1) {
LAB_006c59f4:
          iVar7 = iVar7 + 1;
        }
      }
      else {
        bVar1 = uVar6 < 0x80000000;
        if (uVar6 < 0x80000000) {
LAB_006c599c:
          iVar4 = fn_002043cc(DAT_00897840,uVar6);
          if ((*(char *)(iVar4 + 0x10) == '\x02') ||
             ((iVar2 = fn_0066e510(DAT_00897850,*(undefined4 *)(iVar4 + 4)), iVar2 == 0 &&
              (iVar2 = *(int *)(iVar4 + 8), iVar4 = fn_0066e530(DAT_00897850), iVar2 != iVar4))))
          goto LAB_006c59ec;
          goto LAB_006c59f4;
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < (uint)((*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10)) / 0xc));
  }
  return iVar7;
}



uint fn_006c57d8(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar4 = 0;
  uVar6 = 0xffffffff;
  cVar1 = *(char *)(DAT_00897840 + 4);
  iVar3 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10);
  iVar5 = iVar3 >> 0x1f;
  if (iVar3 / 0xc + iVar5 != iVar5) {
    do {
      iVar5 = 0;
      do {
        uVar2 = (*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10)) / 0xc;
        if (uVar2 <= uVar4) {
          fn_002ff628(9,&DAT_008c7603,&DAT_008c7603,uVar4,uVar2);
        }
        iVar3 = iVar5 * 4;
        iVar5 = iVar5 + 1;
        if (*(int *)(*(int *)(param_1 + 0x10) + uVar4 * 0xc + iVar3) == (int)cVar1) {
          uVar6 = uVar4;
        }
      } while (iVar5 < 2);
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uint)((*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10)) / 0xc));
  }
  return uVar6;
}



bool fn_006c57b0(int *param_1)

{
  return (char)param_1[7] == (&DAT_007c670c)[*param_1 * 4];
}



uint fn_006c56e4(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = 0;
  uVar5 = 0xffffffff;
  iVar2 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10);
  iVar4 = iVar2 >> 0x1f;
  if (iVar2 / 0xc + iVar4 != iVar4) {
    do {
      iVar4 = 0;
      do {
        uVar1 = (*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10)) / 0xc;
        if (uVar1 <= uVar3) {
          fn_002ff628(9,&DAT_008c7603,&DAT_008c7603,uVar3,uVar1);
        }
        iVar2 = iVar4 * 4;
        iVar4 = iVar4 + 1;
        if (*(int *)(*(int *)(param_1 + 0x10) + uVar3 * 0xc + iVar2) == param_2) {
          uVar5 = uVar3;
        }
      } while (iVar4 < 2);
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)((*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10)) / 0xc));
  }
  return uVar5;
}



int fn_006c5600(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = 0;
  uVar4 = 0;
  if (*(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2 != 0) {
    do {
      uVar1 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2;
      if (uVar1 <= uVar4) {
        fn_002ff628(9,&DAT_008c760c,&DAT_008c760c,uVar4,uVar1);
      }
      iVar2 = fn_002043cc(DAT_00897840,*(undefined4 *)(*(int *)(param_1 + 4) + uVar4 * 4));
      if ((*(char *)(iVar2 + 0x10) != '\x02') &&
         ((iVar3 = fn_0066e510(DAT_00897850,*(undefined4 *)(iVar2 + 4)), iVar3 != 0 ||
          (iVar3 = *(int *)(iVar2 + 8), iVar2 = fn_0066e530(DAT_00897850), iVar3 == iVar2)))) {
        iVar5 = iVar5 + 1;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uint)(*(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2));
  }
  return iVar5;
}



bool fn_006c55ec(uint *param_1)

{
  return (*param_1 & 0x80000001) == 1;
}



int fn_006c5514(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  
  iVar4 = 0;
  if (param_2 < 10000) {
    iVar1 = fn_0013add0();
    if (iVar1 != 0) {
      iVar4 = fn_002ea524((int)(short)param_2);
    }
  }
  else {
    iVar2 = 0;
    iVar1 = *(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14) >> 2;
    if (0 < iVar1) {
      do {
        psVar3 = *(short **)(*(int *)(param_1 + 0x14) + iVar2 * 4);
        if ((psVar3 != (short *)0x0) && (*psVar3 == param_2)) {
          return (int)psVar3[1];
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar1);
    }
  }
  return iVar4;
}



undefined4 fn_006c548c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined *local_20;
  int local_1c;
  int iStack_18;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) >> 2;
    if (iVar1 < 1) {
      uVar2 = 0;
    }
    else {
      iVar4 = 0;
      do {
        local_1c = *(int *)(*(int *)(param_1 + 8) + iVar4 * 4);
        if (local_1c == 0) {
          return 0;
        }
        local_20 = &DAT_0082a7fc;
        iStack_18 = param_1;
        iVar3 = fn_006c4acc(&local_20);
        if (iVar3 == 0) {
          return 0;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar1);
      uVar2 = 1;
    }
  }
  return uVar2;
}



short * fn_006c543c(int param_1,int param_2)

{
  int iVar1;
  short *psVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = *(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14) >> 2;
  if (0 < iVar1) {
    do {
      psVar2 = *(short **)(*(int *)(param_1 + 0x14) + iVar3 * 4);
      if ((psVar2 != (short *)0x0) && (*psVar2 == param_2)) {
        return psVar2;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  return (short *)0x0;
}



uint fn_006c52ec(undefined4 param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  
  if ((param_3 != 0) && (param_2 == 0x3130)) {
    if (((DAT_00895bdc & 1) == 0) && (iVar1 = fn_00303afc(&DAT_00895bdc), iVar1 != 0)) {
      DAT_008cc320 = fn_0022876c(&DAT_006c5414);
      DAT_008cc322 = fn_0022876c(&DAT_006c5418);
      DAT_008cc324 = fn_0022876c(&DAT_006c541c);
      DAT_008cc326 = fn_0022876c(&DAT_006c5420);
      DAT_008cc328 = fn_0022876c(&DAT_006c5424);
      DAT_008cc32a = fn_0022876c(&DAT_006c5428);
      DAT_008cc32c = fn_0022876c(&DAT_006c542c);
      DAT_008cc32e = fn_0022876c(&DAT_006c5430);
      DAT_008cc330 = fn_0022876c(&DAT_006c5434);
      DAT_008cc332 = fn_0022876c(&DAT_006c5438);
    }
    if (DAT_008cc320 == param_3) {
      param_2 = (uint)DAT_008cc322;
    }
    else if (DAT_008cc324 == param_3) {
      param_2 = (uint)DAT_008cc326;
    }
    else if (DAT_008cc328 == param_3) {
      param_2 = (uint)DAT_008cc32a;
    }
    else {
      if (DAT_008cc32c != param_3) {
        uVar2 = 0x3130;
        if (DAT_008cc330 == param_3) {
          uVar2 = (uint)DAT_008cc332;
        }
        return uVar2;
      }
      param_2 = (uint)DAT_008cc32e;
    }
  }
  return param_2;
}


