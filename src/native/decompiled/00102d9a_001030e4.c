#include "00102d9a_001030e4.h"



void fn_001030e4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  while( true ) {
    iVar1 = fn_00302340(*(undefined1 *)(param_1 + iVar3));
    iVar2 = fn_00302340(*(undefined1 *)(param_2 + iVar3));
    if ((iVar1 != iVar2) || (*(char *)(param_1 + iVar3) == '\0')) break;
    iVar3 = iVar3 + 1;
  }
  return;
}



char * fn_001030bc(char *param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  
  do {
    pcVar3 = param_1;
    pcVar4 = param_2;
    do {
      cVar1 = *pcVar3;
      cVar2 = *pcVar4;
      pcVar3 = pcVar3 + 1;
      pcVar4 = pcVar4 + 1;
      if (cVar1 == '\0') break;
    } while (cVar1 == cVar2);
    if (cVar2 == '\0') {
      return param_1;
    }
    if (cVar1 == '\0') {
      return (char *)0x0;
    }
    param_1 = param_1 + 1;
  } while( true );
}



int fn_001030a6(int param_1,char param_2)

{
  char *pcVar1;
  
  param_1 = param_1 + -1;
  do {
    pcVar1 = (char *)(param_1 + 1);
    param_1 = param_1 + 1;
    if (param_2 == *pcVar1) {
      return param_1;
    }
  } while (*pcVar1 != '\0');
  return 0;
}



void fn_0010301c(uint param_1,uint param_2,uint param_3,code *param_4)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  
  if ((param_3 != 0) && (param_2 != 0)) {
    if (10 < param_2) {
      fn_00102e06();
    }
    uVar8 = param_1;
    while (uVar8 < param_3 * (param_2 - 1) + param_1) {
      uVar7 = uVar8 + param_3;
      while ((param_1 <= uVar8 && (iVar2 = (*param_4)(uVar8,uVar7), 0 < iVar2))) {
        uVar8 = uVar8 - param_3;
      }
      puVar4 = (undefined4 *)(uVar8 + param_3);
      uVar3 = 0;
      uVar8 = uVar7;
      if (((param_3 | uVar7) & 3) == 0) {
        for (; uVar3 < param_3; uVar3 = uVar3 + 4) {
          puVar5 = (undefined4 *)(uVar7 + uVar3);
          uVar6 = *puVar5;
          while (puVar5 = (undefined4 *)((int)puVar5 - param_3), puVar4 <= puVar5) {
            *(undefined4 *)((int)puVar5 + param_3) = *puVar5;
          }
          *(undefined4 *)((int)puVar5 + param_3) = uVar6;
        }
      }
      else {
        for (uVar3 = 0; uVar3 < param_3; uVar3 = uVar3 + 1) {
          puVar5 = (undefined4 *)(uVar7 + uVar3);
          uVar1 = *(undefined1 *)puVar5;
          while (puVar5 = (undefined4 *)((int)puVar5 - param_3), puVar4 <= puVar5) {
            *(undefined1 *)((int)puVar5 + param_3) = *(undefined1 *)puVar5;
          }
          *(undefined1 *)((int)puVar5 + param_3) = uVar1;
        }
      }
    }
  }
  return;
}



void fn_00102e06(undefined4 param_1,undefined4 param_2,uint param_3,code *param_4)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 auStack_134 [32];
  uint auStack_b4 [33];
  undefined4 *local_30;
  int local_2c;
  uint local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  uint uStack_1c;
  code *local_18;
  
  local_18 = param_4;
  uStack_1c = param_3;
  uStack_20 = param_2;
  uStack_24 = param_1;
  local_2c = 1;
  auStack_b4[1] = param_2;
  auStack_134[1] = param_1;
  do {
    iVar2 = local_2c;
    local_2c = local_2c + -1;
    puVar8 = (undefined4 *)auStack_134[iVar2];
    local_28 = auStack_b4[iVar2];
LAB_00102e2e:
    while( true ) {
      iVar2 = param_3 * ((int)local_28 >> 1);
      puVar7 = (undefined4 *)((int)puVar8 + iVar2);
      if ((local_28 & 1) == 0) {
        iVar2 = iVar2 - param_3;
      }
      puVar9 = (undefined4 *)((int)puVar7 + iVar2);
      iVar2 = (*local_18)(puVar8,puVar7);
      if (0 < iVar2) {
        uVar3 = param_3;
        if (((param_3 | (uint)puVar8) & 3) == 0) {
          do {
            uVar5 = *puVar8;
            uVar3 = uVar3 - 4;
            *puVar8 = *puVar7;
            puVar8 = puVar8 + 1;
            *puVar7 = uVar5;
            puVar7 = puVar7 + 1;
          } while (uVar3 != 0);
        }
        else {
          do {
            uVar1 = *(undefined1 *)puVar8;
            uVar3 = uVar3 - 1;
            *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
            *(undefined1 *)puVar7 = uVar1;
            puVar7 = (undefined4 *)((int)puVar7 + 1);
            puVar8 = (undefined4 *)((int)puVar8 + 1);
          } while (uVar3 != 0);
        }
        puVar8 = (undefined4 *)((int)puVar8 - param_3);
        puVar7 = (undefined4 *)((int)puVar7 - param_3);
      }
      iVar2 = (*local_18)(puVar7,puVar9);
      if (0 < iVar2) {
        iVar2 = (*local_18)(puVar8,puVar9);
        if (0 < iVar2) {
          uVar3 = param_3;
          if (((param_3 | (uint)puVar8) & 3) == 0) {
            do {
              uVar5 = *puVar8;
              uVar3 = uVar3 - 4;
              *puVar8 = *puVar9;
              puVar8 = puVar8 + 1;
              *puVar9 = uVar5;
              puVar9 = puVar9 + 1;
            } while (uVar3 != 0);
          }
          else {
            do {
              uVar1 = *(undefined1 *)puVar8;
              uVar3 = uVar3 - 1;
              *(undefined1 *)puVar8 = *(undefined1 *)puVar9;
              *(undefined1 *)puVar9 = uVar1;
              puVar8 = (undefined4 *)((int)puVar8 + 1);
              puVar9 = (undefined4 *)((int)puVar9 + 1);
            } while (uVar3 != 0);
          }
          puVar8 = (undefined4 *)((int)puVar8 - param_3);
          puVar9 = (undefined4 *)((int)puVar9 - param_3);
        }
        uVar3 = param_3;
        if (((param_3 | (uint)puVar7) & 3) == 0) {
          do {
            uVar5 = *puVar7;
            uVar3 = uVar3 - 4;
            *puVar7 = *puVar9;
            puVar7 = puVar7 + 1;
            *puVar9 = uVar5;
            puVar9 = puVar9 + 1;
          } while (uVar3 != 0);
        }
        else {
          do {
            uVar1 = *(undefined1 *)puVar7;
            uVar3 = uVar3 - 1;
            *(undefined1 *)puVar7 = *(undefined1 *)puVar9;
            *(undefined1 *)puVar9 = uVar1;
            puVar7 = (undefined4 *)((int)puVar7 + 1);
            puVar9 = (undefined4 *)((int)puVar9 + 1);
          } while (uVar3 != 0);
        }
        puVar7 = (undefined4 *)((int)puVar7 - param_3);
        puVar9 = (undefined4 *)((int)puVar9 - param_3);
      }
      puVar9 = (undefined4 *)((int)puVar9 - param_3);
      uVar3 = param_3;
      if (((param_3 | (uint)puVar7) & 3) == 0) {
        do {
          uVar5 = *puVar7;
          uVar3 = uVar3 - 4;
          *puVar7 = *puVar9;
          puVar7 = puVar7 + 1;
          *puVar9 = uVar5;
          puVar9 = puVar9 + 1;
        } while (uVar3 != 0);
      }
      else {
        do {
          uVar1 = *(undefined1 *)puVar7;
          uVar3 = uVar3 - 1;
          *(undefined1 *)puVar7 = *(undefined1 *)puVar9;
          *(undefined1 *)puVar9 = uVar1;
          puVar9 = (undefined4 *)((int)puVar9 + 1);
          puVar7 = (undefined4 *)((int)puVar7 + 1);
        } while (uVar3 != 0);
      }
      puVar9 = (undefined4 *)((int)puVar9 - param_3);
      puVar7 = puVar8;
      local_30 = puVar9;
      while( true ) {
        do {
          puVar7 = (undefined4 *)((int)puVar7 + param_3);
          iVar2 = (*local_18)(puVar7,local_30);
        } while (iVar2 < 0);
        do {
          puVar9 = (undefined4 *)((int)puVar9 - param_3);
          iVar2 = (*local_18)(puVar9,local_30);
        } while (0 < iVar2);
        if (puVar9 <= puVar7) break;
        uVar3 = param_3;
        if (((param_3 | (uint)puVar7) & 3) == 0) {
          do {
            uVar5 = *puVar7;
            uVar3 = uVar3 - 4;
            *puVar7 = *puVar9;
            puVar7 = puVar7 + 1;
            *puVar9 = uVar5;
            puVar9 = puVar9 + 1;
          } while (uVar3 != 0);
        }
        else {
          do {
            uVar1 = *(undefined1 *)puVar7;
            uVar3 = uVar3 - 1;
            *(undefined1 *)puVar7 = *(undefined1 *)puVar9;
            *(undefined1 *)puVar9 = uVar1;
            puVar7 = (undefined4 *)((int)puVar7 + 1);
            puVar9 = (undefined4 *)((int)puVar9 + 1);
          } while (uVar3 != 0);
        }
        puVar7 = (undefined4 *)((int)puVar7 - param_3);
        puVar9 = (undefined4 *)((int)puVar9 - param_3);
      }
      uVar3 = param_3;
      if (((param_3 | (uint)puVar7) & 3) == 0) {
        do {
          uVar5 = *puVar7;
          uVar3 = uVar3 - 4;
          *puVar7 = *local_30;
          puVar7 = puVar7 + 1;
          *local_30 = uVar5;
          local_30 = local_30 + 1;
        } while (uVar3 != 0);
      }
      else {
        do {
          uVar1 = *(undefined1 *)puVar7;
          uVar3 = uVar3 - 1;
          *(undefined1 *)puVar7 = *(undefined1 *)local_30;
          puVar7 = (undefined4 *)((int)puVar7 + 1);
          *(undefined1 *)local_30 = uVar1;
          local_30 = (undefined4 *)((int)local_30 + 1);
        } while (uVar3 != 0);
      }
      puVar7 = (undefined4 *)((int)puVar7 - param_3);
      iVar4 = fn_00169f1c((int)puVar7 - (int)puVar8,param_3);
      iVar2 = local_2c;
      uVar3 = iVar4 - 1;
      uVar6 = (local_28 - uVar3) - 1;
      if ((int)uVar6 < (int)uVar3) break;
      if ((int)uVar3 < 0xb) {
        if (10 < (int)uVar6) goto LAB_00103008;
        goto LAB_00103010;
      }
      auStack_134[local_2c + 1] = puVar7;
      auStack_b4[iVar2 + 1] = uVar6;
      local_2c = local_2c + 1;
LAB_00102fe8:
      local_28 = uVar3;
    }
    if (10 < (int)uVar6) {
      auStack_134[local_2c + 1] = puVar8;
      auStack_b4[iVar2 + 1] = uVar3;
      local_2c = local_2c + 1;
LAB_00103008:
      puVar8 = puVar7;
      local_28 = uVar6;
      goto LAB_00102e2e;
    }
    if (10 < (int)uVar3) goto LAB_00102fe8;
LAB_00103010:
    if (local_2c == 0) {
      return;
    }
  } while( true );
}



int fn_00102d9a(int param_1,short *param_2,uint param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_30 [8];
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  short *psStack_1c;
  uint local_18;
  
  iVar3 = 0;
  local_20 = param_1;
  psStack_1c = param_2;
  local_18 = param_3;
  puVar1 = (undefined4 *)fn_002fea7a(0,3);
  while( true ) {
    if (puVar1 != (undefined4 *)0x0) {
      local_28 = *puVar1;
      local_24 = puVar1[1];
    }
    iVar2 = fn_002ff59c(auStack_30,*param_2,puVar1);
    if (iVar2 == -1) {
      return -1;
    }
    if (local_20 != 0) {
      if (local_18 < (uint)(iVar2 + iVar3)) {
        if (puVar1 == (undefined4 *)0x0) {
          return iVar3;
        }
        *puVar1 = local_28;
        puVar1[1] = local_24;
        return iVar3;
      }
      fn_00301a9c(local_20 + iVar3,auStack_30,iVar2);
    }
    iVar3 = iVar3 + iVar2;
    if (*param_2 == 0) break;
    param_2 = param_2 + 1;
  }
  return iVar3 + -1;
}


