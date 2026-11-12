#include "001f835c_001f890c.h"



undefined4 fn_001f890c(char *param_1,char *param_2)

{
  undefined4 uVar1;
  
  if (((((*param_1 == *param_2) && (param_1[1] == param_2[1])) &&
       (*(short *)(param_1 + 2) == *(short *)(param_2 + 2))) &&
      ((((*(short *)(param_1 + 4) == *(short *)(param_2 + 4) && (param_1[6] == param_2[6])) &&
        ((param_1[7] == param_2[7] &&
         ((*(short *)(param_1 + 8) == *(short *)(param_2 + 8) &&
          (*(short *)(param_1 + 10) == *(short *)(param_2 + 10))))))) &&
       (param_1[0xc] == param_2[0xc])))) &&
     (((param_1[0xd] == param_2[0xd] && (*(short *)(param_1 + 0xe) == *(short *)(param_2 + 0xe))) &&
      (*(short *)(param_1 + 0x10) == *(short *)(param_2 + 0x10))))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



int fn_001f88e8(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  return param_2 + param_1 * 2 + param_3 * 2 + param_4 + param_5 + param_6;
}



/* WARNING: Removing unreachable block (ram,0x001f8618) */
/* WARNING: Removing unreachable block (ram,0x001f861c) */
/* WARNING: Removing unreachable block (ram,0x001f8620) */
/* WARNING: Removing unreachable block (ram,0x001f8624) */
/* WARNING: Removing unreachable block (ram,0x001f8628) */
/* WARNING: Removing unreachable block (ram,0x001f87bc) */
/* WARNING: Removing unreachable block (ram,0x001f87c0) */
/* WARNING: Removing unreachable block (ram,0x001f87c4) */
/* WARNING: Removing unreachable block (ram,0x001f87c8) */
/* WARNING: Removing unreachable block (ram,0x001f87cc) */

int fn_001f84cc(int param_1)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int local_38;
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  int local_28;
  
  piVar8 = (int *)0x0;
  local_38 = 0;
  piVar9 = (int *)0x0;
  uVar10 = 0;
  piVar5 = (int *)0x0;
  local_28 = param_1;
  do {
    iVar11 = param_1 + 0x150 + uVar10 * 0xf0;
    if (piVar5 == piVar9) {
      uVar1 = (int)piVar5 - (int)piVar8 >> 2;
      if (uVar1 < (uint)((int)piVar9 - (int)piVar8 >> 2)) {
        piVar7 = piVar5 + -1;
        if (piVar5 != (int *)0x0) {
          *piVar5 = piVar5[-1];
        }
        piVar2 = piVar5 + 1;
        piVar4 = piVar5;
        if (piVar5 < piVar7) {
          if (0 < (int)piVar7 - (int)piVar5) {
            iVar12 = (int)piVar7 - (int)piVar5 >> 2;
            iVar6 = 0;
            do {
              iVar12 = iVar12 + -1;
              piVar5[iVar6 + -1] = piVar7[iVar6 + -1];
              iVar6 = iVar6 + -1;
            } while (iVar12 != 0);
          }
        }
        else {
          while (piVar5 != piVar7) {
            piVar7 = piVar7 + -1;
            piVar4[-1] = *piVar7;
            piVar4 = piVar4 + -1;
          }
        }
        *piVar5 = iVar11;
      }
      else {
        uVar3 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
        if (uVar3 < uVar1 + 0x20) {
          uVar3 = uVar1 + 0x20;
        }
        piVar4 = (int *)fn_00100fc6(uVar3 << 2,0);
        piVar7 = piVar4;
        for (piVar2 = piVar8; piVar2 != piVar5; piVar2 = piVar2 + 1) {
          if (piVar7 != (int *)0x0) {
            *piVar7 = *piVar2;
          }
          piVar7 = piVar7 + 1;
        }
        piVar2 = (int *)(((int)piVar5 - (int)piVar8 & 0xfffffffcU) + (int)piVar4);
        if (piVar2 != (int *)0x0) {
          *piVar2 = iVar11;
        }
        piVar2 = piVar8;
        if (piVar5 < piVar8) {
          do {
            piVar2 = piVar2 + 1;
          } while (piVar2 != piVar5);
        }
        fn_001008c4(piVar8,(int)piVar9 - (int)piVar8 >> 2,0);
        piVar2 = piVar4 + ((int)piVar5 - (int)piVar8 >> 2) + 1;
        piVar9 = piVar4 + uVar3;
        piVar8 = piVar4;
      }
    }
    else {
      piVar2 = piVar5 + 1;
      if (piVar5 != (int *)0x0) {
        *piVar5 = iVar11;
      }
    }
    uVar10 = uVar10 + 1;
    piVar5 = piVar2;
  } while (uVar10 < 4);
  uVar10 = 0;
  iVar11 = local_28 + 0x514;
  do {
    iVar12 = iVar11 + uVar10 * 0xf0;
    if (piVar2 == piVar9) {
      uVar1 = (int)piVar2 - (int)piVar8 >> 2;
      if (uVar1 < (uint)((int)piVar9 - (int)piVar8 >> 2)) {
        piVar7 = piVar2 + -1;
        if (piVar2 != (int *)0x0) {
          *piVar2 = piVar2[-1];
        }
        piVar5 = piVar2 + 1;
        piVar4 = piVar2;
        if (piVar2 < piVar7) {
          if (0 < (int)piVar7 - (int)piVar2) {
            iVar6 = (int)piVar7 - (int)piVar2 >> 2;
            iVar13 = 0;
            do {
              iVar6 = iVar6 + -1;
              piVar2[iVar13 + -1] = piVar7[iVar13 + -1];
              iVar13 = iVar13 + -1;
            } while (iVar6 != 0);
          }
        }
        else {
          while (piVar2 != piVar7) {
            piVar7 = piVar7 + -1;
            piVar4[-1] = *piVar7;
            piVar4 = piVar4 + -1;
          }
        }
        *piVar2 = iVar12;
      }
      else {
        uVar3 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
        if (uVar3 < uVar1 + 0x20) {
          uVar3 = uVar1 + 0x20;
        }
        piVar4 = (int *)fn_00100fc6(uVar3 << 2,0);
        piVar7 = piVar4;
        for (piVar5 = piVar8; piVar5 != piVar2; piVar5 = piVar5 + 1) {
          if (piVar7 != (int *)0x0) {
            *piVar7 = *piVar5;
          }
          piVar7 = piVar7 + 1;
        }
        piVar5 = (int *)(((int)piVar2 - (int)piVar8 & 0xfffffffcU) + (int)piVar4);
        if (piVar5 != (int *)0x0) {
          *piVar5 = iVar12;
        }
        piVar5 = piVar8;
        if (piVar2 < piVar8) {
          do {
            piVar5 = piVar5 + 1;
          } while (piVar5 != piVar2);
        }
        fn_001008c4(piVar8,(int)piVar9 - (int)piVar8 >> 2,0);
        piVar5 = piVar4 + ((int)piVar2 - (int)piVar8 >> 2) + 1;
        piVar9 = piVar4 + uVar3;
        piVar8 = piVar4;
      }
    }
    else {
      piVar5 = piVar2 + 1;
      if (piVar2 != (int *)0x0) {
        *piVar2 = iVar12;
      }
    }
    uVar10 = uVar10 + 1;
    piVar2 = piVar5;
  } while (uVar10 < 4);
  iVar12 = 0;
  iVar11 = (int)piVar5 - (int)piVar8 >> 2;
  if (0 < iVar11) {
    do {
      iVar13 = piVar8[iVar12];
      fn_0020bbc4(auStack_30,iVar13);
      iVar6 = fn_006bf198(auStack_2c);
      if ((iVar6 != 0) && (local_38 = fn_0024e350(iVar13), local_38 != 0)) break;
      iVar12 = iVar12 + 1;
    } while (iVar12 < iVar11);
  }
  piVar2 = piVar8;
  if (piVar5 < piVar8) {
    do {
      piVar2 = piVar2 + 1;
    } while (piVar2 != piVar5);
  }
  fn_001008c4(piVar8,(int)piVar9 - (int)piVar8 >> 2,0);
  return local_38;
}



char * fn_001f84ac(char *param_1)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  
  cVar1 = *param_1;
  bVar2 = cVar1 == '\0';
  if (bVar2) {
    cVar1 = param_1[6];
  }
  bVar3 = bVar2 && cVar1 == '\0';
  if (bVar2 && cVar1 == '\0') {
    param_1 = (char *)(uint)(byte)param_1[0xc];
    bVar3 = param_1 == (char *)0x0;
  }
  if (!bVar3) {
    param_1 = &DAT_00000001;
  }
  return param_1;
}



void fn_001f8424(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_98 [132];
  
  fn_00301f50(auStack_98,0x80);
  uVar1 = fn_00242bd4(param_3);
  fn_001782b8(auStack_98,uVar1,0x7f);
  puVar2 = (undefined1 *)fn_001030a6(auStack_98,0x5f);
  if (puVar2 != (undefined1 *)0x0) {
    *puVar2 = 0;
  }
  if (param_4 != 0) {
    fn_00101d5c(auStack_98,&DAT_001f84a8,param_2);
  }
  fn_001782b8(param_1,auStack_98,param_2);
  return;
}



void fn_001f835c(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_98 [132];
  
  uVar1 = fn_00242bd4(param_3);
  if (param_4 == 0) {
    fn_001782b8(param_1,uVar1,param_2);
    return;
  }
  fn_00301f50(auStack_98,0x80);
  fn_001782b8(auStack_98,uVar1,0x7f);
  puVar2 = (undefined1 *)fn_001030a6(auStack_98,0x5f);
  uVar1 = fn_001030a6(uVar1,0x5f);
  if (puVar2 == (undefined1 *)0x0) {
    fn_001003f2(auStack_98,&DAT_001f8420);
  }
  else {
    *puVar2 = 0x4c;
    puVar2[1] = 0;
    fn_001003f2(auStack_98,uVar1);
  }
  fn_001782b8(param_1,auStack_98,param_2);
  return;
}


