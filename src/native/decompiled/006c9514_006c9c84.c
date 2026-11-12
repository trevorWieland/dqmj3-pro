#include "006c9514_006c9c84.h"



void fn_006c9ba4(int param_1,int param_2)

{
  short sVar1;
  undefined2 *puVar2;
  uint uVar3;
  int iVar4;
  uint local_20;
  uint local_1c;
  int local_18;
  
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  fn_006c9184(param_1,&local_20);
  uVar3 = 0;
  if ((int)(local_1c - local_20) >> 1 != 0) {
    do {
      sVar1 = *(short *)(local_20 + uVar3 * 2);
      puVar2 = *(undefined2 **)(param_2 + 4);
      iVar4 = *(int *)(param_1 + 0x24);
      if (puVar2 == *(undefined2 **)(param_2 + 8)) {
        fn_0079e460();
      }
      else {
        *(undefined2 **)(param_2 + 4) = puVar2 + 1;
        if (puVar2 != (undefined2 *)0x0) {
          *puVar2 = *(undefined2 *)(iVar4 + sVar1 * 0x40);
        }
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)((int)(local_1c - local_20) >> 1));
  }
  uVar3 = local_20;
  if (local_1c < local_20) {
    do {
      uVar3 = uVar3 + 2;
    } while (uVar3 != local_1c);
  }
  fn_001008c4(local_20,(int)(local_18 - local_20) >> 1,0);
  return;
}



int fn_006c9b8c(int param_1)

{
  int iVar1;
  
  iVar1 = fn_001d4f28(*(undefined1 *)(*(int *)(param_1 + 8) + 8));
  return (int)*(short *)(iVar1 + 2);
}



undefined4 fn_006c9900(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 auStack_c8 [40];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  iVar1 = fn_00661094(param_2);
  if (iVar1 != 8) {
    iVar1 = fn_006c9754(param_1,param_2);
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    fn_0017821c(auStack_c8,&DAT_007bd990,0xa0);
    if (param_3 == 0) {
      iVar2 = fn_00661714(param_2);
      return auStack_c8[iVar2 * 5 + (int)*(char *)(iVar1 + 0x61)];
    }
  }
  return 0;
}



int fn_006c97c0(int param_1)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  int extraout_r1;
  ushort uVar4;
  uint local_20;
  uint local_1c;
  int local_18;
  
  iVar2 = fn_001d4f28(*(undefined1 *)(*(int *)(param_1 + 8) + 10));
  uVar4 = *(ushort *)(iVar2 + 0xc);
  if (uVar4 == 0) {
    uVar4 = 1;
  }
  else if (8 < uVar4) {
    uVar4 = 8;
  }
  local_1c = 0;
  local_18 = 0;
  local_20 = 0;
  fn_006c9c84(param_1,0,&local_20,uVar4,1,1,1,0);
  if (local_20 == local_1c) {
    fn_006c9c84(param_1,0,&local_20,uVar4,0,1,1,0);
    uVar3 = local_20;
    if (local_1c < local_20) {
      do {
        uVar3 = uVar3 + 2;
      } while (uVar3 != local_1c);
    }
    fn_001008c4(local_20,(int)(local_18 - local_20) >> 1,0);
    return 1;
  }
  fn_00169f1c(*(undefined4 *)(param_1 + 0x48),(int)(local_1c - local_20) >> 1);
  sVar1 = *(short *)(*(int *)(param_1 + 0x24) + *(short *)(local_20 + extraout_r1 * 2) * 0x40);
  uVar3 = local_20;
  if (local_1c < local_20) {
    do {
      uVar3 = uVar3 + 2;
    } while (uVar3 != local_1c);
  }
  fn_001008c4(local_20,(int)(local_18 - local_20) >> 1,0);
  return (int)sVar1;
}



void fn_006c9c84(int param_1,uint param_2,uint *param_3,int param_4,int param_5,int param_6,
                 uint param_7,undefined4 *param_8)

{
  char *pcVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  short *psVar8;
  undefined2 *puVar9;
  uint uVar10;
  short *psVar11;
  bool bVar12;
  int local_40;
  undefined2 local_3c [2];
  undefined *local_38;
  int iStack_34;
  uint local_30;
  uint *puStack_2c;
  int local_28;
  
  iStack_34 = param_1;
  local_30 = param_2;
  puStack_2c = param_3;
  local_28 = param_4;
  iVar4 = fn_001d4f28(*(undefined1 *)(*(int *)(param_1 + 8) + 8));
  sVar2 = *(short *)(iVar4 + 2);
  iVar4 = fn_001d4f28(*(undefined1 *)(*(int *)(param_1 + 8) + 8));
  sVar3 = *(short *)(iVar4 + 4);
  iVar4 = fn_001d4f28(*(undefined1 *)(*(int *)(param_1 + 8) + 10));
  local_40 = 0;
  local_38 = &DAT_007bd96c + (*(byte *)(iVar4 + 10) - 1) * 9;
LAB_006c9ce4:
  do {
    uVar10 = 0;
    if (0 < *(int *)(param_1 + 0x14)) {
      do {
        psVar11 = (short *)(*(int *)(param_1 + 0x24) + uVar10 * 0x40);
        iVar4 = fn_00661094((int)*psVar11);
        iVar5 = fn_00661714((int)*psVar11);
        if (((char)psVar11[1] == '\0') &&
           (((param_6 != 0 || (*(char *)((int)psVar11 + 3) == '\0')) &&
            (((int)sVar2 & 1 << (iVar4 - 1U & 0xff)) != 0)))) {
          if (param_5 != 0) {
            bVar12 = false;
            pcVar7 = (char *)((int)psVar11 + 3);
            uVar6 = 0;
            iVar4 = 5;
            do {
              pcVar1 = pcVar7 + 1;
              pcVar7 = pcVar7 + 2;
              if (*pcVar1 != '\0' && ((int)sVar3 & 1 << (uVar6 & 0xff)) != 0) {
                bVar12 = true;
              }
              if ((*pcVar7 != '\0') && (((int)sVar3 & 1 << (uVar6 + 1 & 0xff)) != 0)) {
                bVar12 = true;
              }
              iVar4 = iVar4 + -1;
              uVar6 = uVar6 + 2;
            } while (iVar4 != 0);
            if (!bVar12) goto LAB_006c9e58;
          }
          if (local_28 == -1) {
            if (local_38[iVar5] != '\0') goto LAB_006c9db0;
          }
          else if (iVar5 == local_28) {
LAB_006c9db0:
            uVar6 = (int)*psVar11 - 1;
            if ((uVar6 < 0x3ff) && (iVar4 = fn_006616f4((int)*psVar11,0), iVar4 != 0)) {
              if (param_8 != (undefined4 *)0x0) {
                psVar8 = (short *)param_8[1];
                psVar11 = (short *)*param_8;
                while( true ) {
                  if (psVar11 != psVar8) {
                    uVar6 = (uint)*psVar11;
                  }
                  if (psVar11 == psVar8 || uVar6 == uVar10) break;
                  psVar11 = psVar11 + 1;
                }
                if (psVar11 != psVar8) goto LAB_006c9e58;
              }
              local_3c[0] = (undefined2)uVar10;
              puVar9 = (undefined2 *)param_3[1];
              if (puVar9 == (undefined2 *)param_3[2]) {
                fn_0079e460(param_3,puVar9,local_3c);
              }
              else {
                param_3[1] = (uint)(puVar9 + 1);
                if (puVar9 != (undefined2 *)0x0) {
                  *puVar9 = local_3c[0];
                }
              }
            }
          }
        }
LAB_006c9e58:
        uVar10 = uVar10 + 1;
      } while ((int)uVar10 < *(int *)(param_1 + 0x14));
    }
    if (local_30 <= (uint)((int)(param_3[1] - *param_3) >> 1)) goto LAB_006c9eac;
    if (local_40 == 0) {
      local_28 = -1;
      local_40 = 1;
      goto LAB_006c9ce4;
    }
    if (local_40 == 1) {
      param_5 = 0;
    }
    local_40 = local_40 + 1;
    if (2 < local_40) {
LAB_006c9eac:
      bVar12 = param_7 == 0;
      uVar10 = local_30;
      if (bVar12) {
        param_7 = *param_3;
        uVar10 = param_3[1];
      }
      if (bVar12 && param_7 == uVar10) {
        local_40 = CONCAT22(((unsigned int)(local_40) >> 16) & 0xffff,1);
        fn_0079e764(param_3,&local_40);
      }
      return;
    }
  } while( true );
}



int fn_006c9754(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (*(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x3c)) / 0x430;
  if (0 < iVar1) {
    param_1 = *(int *)(param_1 + 0x3c);
  }
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      if (*(short *)(param_1 + iVar2 * 0x430) == param_2) {
        return param_1 + iVar2 * 0x430;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  return 0;
}



uint fn_006c9514(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0;
  iVar3 = (int)*(short *)(*(int *)(param_1 + 0x24) + param_2 * 0x40);
  iVar1 = fn_0066173c(iVar3);
  if (1 < iVar1) {
    uVar2 = 8;
  }
  iVar1 = fn_00242b6c(iVar3);
  if ((iVar1 == 0) || (iVar1 = fn_00242b0c(iVar3), iVar1 == 0)) {
    uVar2 = uVar2 | 1;
  }
  else {
    iVar1 = fn_00242b6c(iVar3);
    if (iVar1 == 1) {
      uVar2 = uVar2 | 2;
    }
    else {
      iVar1 = fn_00242b6c(iVar3);
      if (iVar1 == 2) {
        uVar2 = uVar2 | 4;
      }
    }
  }
  return uVar2;
}


