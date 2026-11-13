#include "00156b34_00157bfc.h"



void fn_00157bfc(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = fn_001502a4();
  fn_001501e8(uVar1,0xffff8001,param_1,param_2);
  return;
}



void fn_00157bb0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  fn_001670d8(DAT_008e3104,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



void fn_00157994(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  
  iVar1 = DAT_008bfab0;
  piVar5 = (int *)(DAT_008bfab0 + 0x5d8);
  iVar10 = DAT_008bfab0 + 0x458;
  iVar11 = DAT_008bfab0 + 0x298;
  puVar9 = (undefined4 *)(DAT_008bfab0 + 0x6a0);
  if ((*(uint *)(DAT_008bfab0 + 8) & 0x200) != 0) {
    *(bool *)(DAT_008bfab0 + 0x81c) = *(int *)(DAT_008bfab0 + 0x5dc) != 0;
  }
  *(undefined1 *)(iVar1 + 0x76c) = 0;
  if (*piVar5 == 0) {
    fn_00167470(0x10);
  }
  else if (*(int *)(DAT_008bfae0 + 0x80c) == 0) {
    *(undefined1 *)(iVar1 + 0x76c) = 1;
    fn_00167470(0x10);
  }
  else {
    puVar7 = *(undefined4 **)(*(int *)(DAT_008bfae0 + 0x80c) + 8);
    uVar2 = fn_00166b28(*puVar7);
    *puVar9 = uVar2;
    *(undefined4 *)(iVar1 + 0x6e8) = puVar7[2];
  }
  iVar8 = 0;
  do {
    iVar4 = DAT_008bfab0;
    iVar6 = iVar10 + iVar8 * 0x18;
    if (*(char *)(iVar6 + 0x15) == '\0') {
      puVar9[iVar8 + 0x13] = iVar11 + iVar8 * 0x10;
      puVar9[iVar8 + 0x23] = 0;
    }
    else if (*(int *)(iVar6 + 0x10) == 0) {
      fn_00167470(iVar8);
    }
    else {
      iVar6 = *(int *)(DAT_008bfae0 + iVar8 * 4 + 0x810);
      if (iVar6 == 0) {
        *(undefined1 *)(iVar1 + 0x76c) = 1;
        fn_00167470(iVar8);
      }
      else {
        piVar5 = *(int **)(iVar6 + 8);
        puVar7 = (undefined4 *)(DAT_008bfab0 + 0x6a0);
        if (iVar8 == 0x10) {
          uVar2 = fn_00166b28(*piVar5);
          *puVar7 = uVar2;
          *(int *)(iVar4 + 0x6e8) = piVar5[2];
          return;
        }
        piVar3 = (int *)(DAT_008bfab0 + 0x458 + iVar8 * 0x18);
        uVar2 = fn_00166b28(*piVar5 + *piVar3);
        puVar7[iVar8 + 1] = uVar2;
        puVar7[iVar8 + 0x13] = *piVar3 + piVar5[2];
        iVar4 = piVar3[2];
        bVar12 = iVar4 == 0x1400;
        if (!bVar12) {
          iVar4 = iVar4 + -0x1401;
          bVar12 = iVar4 == 0;
        }
        if (bVar12) {
          iVar4 = 1;
        }
        else if (iVar4 == 1) {
          iVar4 = 2;
        }
        else if (iVar4 == 5) {
          iVar4 = 4;
        }
        else {
          iVar4 = 0;
        }
        iVar6 = piVar3[3];
        if (iVar6 == 0) {
          iVar6 = piVar3[1] * iVar4;
        }
        puVar7[iVar8 + 0x23] = iVar6;
      }
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 < 0x10);
  return;
}



void fn_00157988(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  
  *param_1 = 0x42;
  iVar1 = DAT_008bfab0;
  piVar5 = (int *)(DAT_008bfab0 + 0x5d8);
  iVar10 = DAT_008bfab0 + 0x458;
  iVar11 = DAT_008bfab0 + 0x298;
  puVar9 = (undefined4 *)(DAT_008bfab0 + 0x6a0);
  if ((*(uint *)(DAT_008bfab0 + 8) & 0x200) != 0) {
    *(bool *)(DAT_008bfab0 + 0x81c) = *(int *)(DAT_008bfab0 + 0x5dc) != 0;
  }
  *(undefined1 *)(iVar1 + 0x76c) = 0;
  if (*piVar5 == 0) {
    fn_00167470(0x10);
  }
  else if (*(int *)(DAT_008bfae0 + 0x80c) == 0) {
    *(undefined1 *)(iVar1 + 0x76c) = 1;
    fn_00167470(0x10);
  }
  else {
    puVar7 = *(undefined4 **)(*(int *)(DAT_008bfae0 + 0x80c) + 8);
    uVar2 = fn_00166b28(*puVar7);
    *puVar9 = uVar2;
    *(undefined4 *)(iVar1 + 0x6e8) = puVar7[2];
  }
  iVar8 = 0;
  do {
    iVar4 = DAT_008bfab0;
    iVar6 = iVar10 + iVar8 * 0x18;
    if (*(char *)(iVar6 + 0x15) == '\0') {
      puVar9[iVar8 + 0x13] = iVar11 + iVar8 * 0x10;
      puVar9[iVar8 + 0x23] = 0;
    }
    else if (*(int *)(iVar6 + 0x10) == 0) {
      fn_00167470(iVar8);
    }
    else {
      iVar6 = *(int *)(DAT_008bfae0 + iVar8 * 4 + 0x810);
      if (iVar6 == 0) {
        *(undefined1 *)(iVar1 + 0x76c) = 1;
        fn_00167470(iVar8);
      }
      else {
        piVar5 = *(int **)(iVar6 + 8);
        puVar7 = (undefined4 *)(DAT_008bfab0 + 0x6a0);
        if (iVar8 == 0x10) {
          uVar2 = fn_00166b28(*piVar5);
          *puVar7 = uVar2;
          *(int *)(iVar4 + 0x6e8) = piVar5[2];
          return;
        }
        piVar3 = (int *)(DAT_008bfab0 + 0x458 + iVar8 * 0x18);
        uVar2 = fn_00166b28(*piVar5 + *piVar3);
        puVar7[iVar8 + 1] = uVar2;
        puVar7[iVar8 + 0x13] = *piVar3 + piVar5[2];
        iVar4 = piVar3[2];
        bVar12 = iVar4 == 0x1400;
        if (!bVar12) {
          iVar4 = iVar4 + -0x1401;
          bVar12 = iVar4 == 0;
        }
        if (bVar12) {
          iVar4 = 1;
        }
        else if (iVar4 == 1) {
          iVar4 = 2;
        }
        else if (iVar4 == 5) {
          iVar4 = 4;
        }
        else {
          iVar4 = 0;
        }
        iVar6 = piVar3[3];
        if (iVar6 == 0) {
          iVar6 = piVar3[1] * iVar4;
        }
        puVar7[iVar8 + 0x23] = iVar6;
      }
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 < 0x10);
  return;
}



int fn_00156fd8(void)

{
  int iVar1;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  return iVar1 + 0x5c;
}



int fn_00156f30(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_1;
  if (param_2 != 0) {
    iVar1 = (int)*(char *)(param_1 + 0x21a);
  }
  if (param_2 == 0 || iVar1 == -1) {
    iVar1 = (int)*(char *)(param_1 + 0x219);
  }
  return iVar1;
}



undefined4 fn_00156ef0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  iVar3 = iVar1 + 0x340;
  fn_00170704(iVar3);
  uVar2 = fn_001666d0(iVar1 + 0x34c);
  fn_001707b4(iVar3);
  return uVar2;
}



int fn_00156b34(undefined4 param_1,int *param_2,int *param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined2 local_2c [4];
  int local_24;
  undefined1 auStack_20 [8];
  
  if (param_4 == 5) {
    fn_00147974(param_2,param_5);
    uVar2 = fn_00100b58(L"rom:");
    iVar1 = fn_001006b6(*param_2,L"rom:",uVar2);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      uVar2 = fn_00100b58(L"data:");
      iVar1 = fn_001006b6(*param_2,L"data:",uVar2);
      if (iVar1 == 0) {
        iVar1 = 1;
      }
      else {
        uVar2 = fn_00100b58(L"sdmc:");
        iVar1 = fn_001006b6(*param_2,L"sdmc:",uVar2);
        if (iVar1 == 0) {
          iVar1 = 2;
        }
        else {
          uVar2 = fn_00100b58(L"patch:");
          iVar6 = fn_001006b6(*param_2,L"patch:",uVar2);
          iVar1 = 5;
          if (iVar6 == 0) {
            uVar5 = fn_001666dc(param_1,*param_2);
            if ((uVar5 & 0x80000000) == 0) {
              iVar1 = 4;
            }
            else {
              uVar2 = fn_00100b58(&DAT_00156eb0);
              fn_00177c88(param_2,0,5,&DAT_00156eb0,uVar2,0,uVar2);
              iVar1 = 0;
            }
          }
        }
      }
    }
    return iVar1;
  }
  fn_00168a24(&local_24,param_5,auStack_20);
  iVar1 = fn_00101160(local_24,&DAT_00156e78);
  if ((iVar1 != 0) && (iVar1 = iVar1 - local_24 >> 1, iVar1 != -1)) {
    uVar4 = iVar1 + 1;
    uVar5 = *(uint *)(local_24 + -4);
    if (uVar4 < *(uint *)(local_24 + -4)) {
      uVar5 = uVar4;
    }
    local_2c[0] = 0;
    fn_00177c88(&local_24,0,uVar5,local_2c,0,0,0);
  }
  switch(param_4) {
  case 0:
    fn_00147974(param_2,L"rom:");
    break;
  case 1:
    fn_00147974(param_2,L"data:");
    break;
  case 2:
    fn_00147974(param_2,L"sdmc:");
    break;
  case 3:
    iVar1 = *param_3;
    if (*(int *)(iVar1 + -0xc) == -1) {
      if (param_2 != param_3) {
        fn_00177c88(param_2,0,*(undefined4 *)(*param_2 + -4),iVar1,*(undefined4 *)(iVar1 + -4),0,
                     *(undefined4 *)(iVar1 + -4));
      }
    }
    else {
      if ((int *)(iVar1 + -0xc) != &DAT_008f9ce8) {
        *(int *)(iVar1 + -0xc) = *(int *)(iVar1 + -0xc) + 1;
      }
      if ((undefined4 *)*param_2 != &DAT_008f9cf4) {
        piVar3 = (undefined4 *)*param_2 + -3;
        iVar1 = *piVar3;
        if ((iVar1 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar1 + -1, iVar1 == 0)))) {
          fn_001008c4(*param_2 + -0xc,*(int *)(*param_2 + -8) + 8,0);
        }
      }
      *param_2 = *param_3;
    }
    break;
  case 4:
    fn_00147974(param_2,L"patch:");
  }
  iVar1 = *param_2;
  uVar5 = *(uint *)(iVar1 + -4);
  iVar6 = *(int *)(local_24 + -4);
  if ((*(uint *)(iVar1 + -8) < uVar5 + iVar6) || (1 < *(int *)(iVar1 + -0xc) + 1U)) {
    if (-iVar6 - 0xfU < uVar5) {
      fn_002ff628(8,&DAT_008c760f,&DAT_008c760f,uVar5,-iVar6 - 0xfU);
    }
    fn_00177c88(param_2,*(undefined4 *)(*param_2 + -4),0,local_24,*(undefined4 *)(local_24 + -4),0,
                 iVar6);
  }
  else {
    fn_00301a9c(iVar1 + uVar5 * 2,local_24,(iVar6 + 1) * 2);
    *(uint *)(*param_2 + -4) = uVar5 + iVar6;
  }
  fn_001588d4(&local_24);
  return param_4;
}


