#include "0075619c_0075656c.h"



undefined4 fn_0075656c(int *param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  
  if ((int)(param_1[3] & 0x3fffffffU) < (int)param_2) {
    piVar3 = (int *)*param_1;
    if ((piVar3 == (int *)0x0) || ((param_1[3] & 0xc0000000U) != 0x40000000)) {
      uVar2 = 0;
    }
    else {
      puVar4 = (undefined4 *)(**(code **)(*piVar3 + 8))(piVar3,param_2 * 0x28,0x20);
      uVar2 = 0;
      if (puVar4 != (undefined4 *)0x0) {
        puVar5 = (undefined4 *)param_1[1];
        puVar7 = (undefined4 *)param_1[2];
        iVar10 = 0;
        puVar11 = puVar4;
        if (puVar5 != puVar7) {
          do {
            if (puVar11 != (undefined4 *)0x0) {
              uVar2 = puVar5[1];
              uVar12 = puVar5[2];
              uVar13 = puVar5[3];
              uVar14 = puVar5[4];
              uVar15 = puVar5[5];
              uVar16 = puVar5[6];
              uVar17 = puVar5[7];
              *puVar11 = *puVar5;
              puVar11[1] = uVar2;
              puVar11[2] = uVar12;
              puVar11[3] = uVar13;
              puVar11[4] = uVar14;
              puVar11[5] = uVar15;
              puVar11[6] = uVar16;
              puVar11[7] = uVar17;
              uVar2 = puVar5[9];
              puVar11[8] = puVar5[8];
              puVar11[9] = uVar2;
            }
            puVar5 = puVar5 + 10;
            puVar11 = puVar11 + 10;
          } while (puVar5 != puVar7);
          iVar10 = (param_1[2] - param_1[1]) / 0x28;
        }
        uVar6 = param_1[1];
        if (uVar6 != 0) {
          uVar9 = param_1[2];
          uVar1 = uVar6;
          if (uVar6 < uVar9) {
            iVar8 = 1;
            if (1 < (int)(uVar9 - uVar6) / 0x28 + 1) {
              do {
                iVar8 = iVar8 + 1;
              } while (iVar8 < (int)(uVar9 - uVar6) / 0x28 + 1);
            }
          }
          else {
            for (; uVar1 != uVar9; uVar1 = uVar1 + 0x28) {
            }
          }
          param_1[2] = uVar6;
          (**(code **)(*(int *)*param_1 + 0xc))((int *)*param_1,param_1[1]);
        }
        param_1[1] = (int)puVar4;
        param_1[2] = (int)(puVar4 + iVar10 * 10);
        param_1[3] = param_1[3] & 0xc0000000U | param_2;
        return 1;
      }
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



void fn_0075650c(short *param_1,int param_2,short *param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  short *psVar4;
  
  uVar2 = param_2 - 1;
  uVar1 = 0;
  if (param_4 < uVar2) {
    uVar3 = param_4;
  }
  else {
    uVar3 = uVar2;
  }
  psVar4 = param_1;
  if (uVar3 != 0) {
    do {
      uVar1 = uVar1 + 1;
      param_1 = psVar4 + 1;
      *psVar4 = *param_3;
      if (param_3[1] == 0) break;
      if (param_4 < uVar2) {
        uVar3 = param_4;
      }
      else {
        uVar3 = uVar2;
      }
      param_3 = param_3 + 1;
      psVar4 = param_1;
    } while (uVar1 < uVar3);
  }
  *param_1 = 0;
  return;
}



int fn_0075644c(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  piVar1 = *(int **)(param_1 + 8);
  piVar2 = *(int **)(param_1 + 0xc);
  if (piVar1 < piVar2) {
    iVar5 = 1;
    iVar4 = (int)piVar2 - (int)piVar1 >> 2;
    if (1 < iVar4 + 1) {
      do {
        iVar3 = *piVar1;
        iVar5 = iVar5 + 1;
        piVar1 = piVar1 + 1;
        if (iVar3 != 0) {
          *(undefined4 *)(iVar3 + 0xc) = 0;
        }
      } while (iVar5 < iVar4 + 1);
    }
  }
  else {
    while (piVar1 != piVar2) {
      iVar4 = *piVar1;
      piVar1 = piVar1 + 1;
      if (iVar4 != 0) {
        *(undefined4 *)(iVar4 + 0xc) = 0;
      }
    }
  }
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 8);
  piVar2 = *(int **)(param_1 + 4);
  if (piVar2 != (int *)0x0) {
    piVar1 = *(int **)(param_1 + 8);
  }
  if (piVar2 != (int *)0x0 && piVar1 != (int *)0x0) {
    (**(code **)(*piVar2 + 0xc))();
  }
  return param_1;
}



int fn_007562f0(undefined4 *param_1,int param_2,uint param_3,int param_4,uint param_5)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint *puVar4;
  uint uVar5;
  undefined4 uVar6;
  
  uVar6 = *param_1;
  puVar3 = param_1 + 5;
  puVar4 = param_1 + 9;
  iVar1 = param_1[9];
  uVar5 = 0;
  if (0 < iVar1) {
    uVar5 = param_5;
    if (0x10U - iVar1 <= param_5) {
      uVar5 = 0x10U - iVar1;
    }
    fn_00301a9c(iVar1 + (int)puVar3,param_4,uVar5);
    uVar2 = *puVar4;
    param_4 = param_4 + uVar5;
    *puVar4 = uVar2 + uVar5;
    param_5 = param_5 - uVar5;
    if (uVar2 + uVar5 < 0x10) {
      return 0;
    }
    if (param_3 < 0x10) {
      return 0x10;
    }
    fn_00756208(param_2,param_1 + 1,puVar3,1,uVar6);
    uVar5 = *puVar4;
    *puVar4 = 0;
    param_2 = param_2 + uVar5;
    param_3 = param_3 - uVar5;
  }
  uVar2 = param_5 >> 4;
  if (param_3 >> 4 < uVar2) {
    iVar1 = uVar2 << 4;
  }
  else {
    fn_00756208(param_2,param_1 + 1,param_4,uVar2,uVar6);
    param_5 = param_5 + uVar2 * -0x10;
    iVar1 = uVar5 + uVar2 * 0x10;
    if (param_5 != 0) {
      fn_00301a9c(puVar3,param_4 + uVar2 * 0x10,param_5);
    }
    *puVar4 = param_5;
  }
  return iVar1;
}



void fn_007562c8(int param_1)

{
  int iVar1;
  char cVar2;
  
  iVar1 = 0xf;
  do {
    cVar2 = *(char *)(param_1 + iVar1) + '\x01';
    *(char *)(param_1 + iVar1) = cVar2;
    if (cVar2 != '\0') {
      return;
    }
    iVar1 = iVar1 + -1;
  } while (0 < iVar1);
  return;
}



uint fn_0075619c(undefined4 *param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  undefined1 auStack_28 [20];
  
  uVar1 = param_1[9];
  if (uVar1 != 0) {
    fn_00756208(auStack_28,param_1 + 1,param_1 + 5,1,*param_1);
    if (uVar1 < param_3) {
      param_3 = uVar1;
    }
    fn_00301a9c(param_2,auStack_28,param_3);
    param_1[9] = 0;
  }
  return uVar1;
}



void fn_00756208(uint *param_1,int param_2,uint *param_3,int param_4,int *param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  
  iVar3 = 0;
  if (0 < param_4) {
    do {
      (**(code **)(*param_5 + 0x14))(param_5,&local_30,param_2);
      iVar2 = 0xf;
      *param_1 = *param_3 ^ local_30;
      param_1[1] = param_3[1] ^ local_2c;
      param_1[2] = param_3[2] ^ local_28;
      param_1[3] = param_3[3] ^ local_24;
      do {
        cVar1 = *(char *)(param_2 + iVar2) + '\x01';
        *(char *)(param_2 + iVar2) = cVar1;
        if (cVar1 != '\0') break;
        iVar2 = iVar2 + -1;
      } while (0 < iVar2);
      iVar3 = iVar3 + 1;
      param_3 = param_3 + 4;
      param_1 = param_1 + 4;
    } while (iVar3 < param_4);
  }
  return;
}


