#include "003bc118_003bd084.h"



void fn_003bd084(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xb4,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003bd438(iVar1,param_1);
  return;
}



void fn_003bc340(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  int iVar8;
  undefined4 *local_48;
  uint local_44;
  uint local_40;
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0xac) - *(int *)(param_1 + 0xa8) >> 2 != 0) {
    do {
      iVar5 = *(int *)(*(int *)(param_1 + 0xa8) + uVar1 * 4);
      uVar1 = uVar1 + 1;
      *(byte *)(iVar5 + 0x44) = *(byte *)(iVar5 + 0x44) & 0xfe;
    } while (uVar1 < (uint)(*(int *)(param_1 + 0xac) - *(int *)(param_1 + 0xa8) >> 2));
  }
  if (param_2 != 0) {
    iVar5 = fn_006b7e5c(*(undefined4 *)(DAT_00897804 + 0x24),param_2);
    puVar6 = (undefined4 *)0x0;
    local_44 = 0;
    local_40 = 0;
    local_3c = 0;
    fn_003bcd38(param_1,&local_44,param_2);
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    local_2c = 0;
    local_28 = 0;
    fn_0022ef60(&local_38,9);
    if ((int)(local_40 - local_44) >> 1 == 0) {
      piVar7 = *(int **)(param_1 + 0xa8);
      uVar4 = fn_0022f584((char *)&DAT_003bc600,0);
      iVar5 = *piVar7;
      *(byte *)(iVar5 + 0x44) = *(byte *)(iVar5 + 0x44) & 0xfe | 1;
      fn_00190d50(*piVar7,uVar4);
    }
    else if (*(int *)(param_1 + 0xac) - *(int *)(param_1 + 0xa8) >> 2 != 0) {
      do {
        piVar7 = (int *)(*(int *)(param_1 + 0xa8) + (int)puVar6 * 4);
        if (puVar6 < (undefined4 *)((int)(local_40 - local_44) >> 1)) {
          *(byte *)(*piVar7 + 0x44) = *(byte *)(*piVar7 + 0x44) & 0xfe | 1;
          if (puVar6 < (undefined4 *)
                       ((*(int *)(param_1 + 0xac) - *(int *)(param_1 + 0xa8) >> 2) + -1)) {
            puVar3 = (undefined4 *)((int)(local_40 - local_44) >> 1);
            if (puVar3 <= puVar6) {
              local_48 = puVar3;
              fn_002ff628(9,&DAT_008c7674,&DAT_008c7674,puVar6);
            }
            iVar8 = (int)*(short *)(local_44 + (int)puVar6 * 2);
            if ((iVar5 != 0) &&
               (iVar2 = fn_006b7b34(*(undefined4 *)(DAT_00897804 + 0x24),iVar8), iVar2 != 0)) {
              fn_002317d8(&local_48,iVar8,0);
              fn_00190d50(*piVar7,local_48);
              if (local_48 != &DAT_008f9cf4) {
                piVar7 = local_48 + -3;
                iVar8 = *piVar7;
                if ((iVar8 == -1) ||
                   ((piVar7 != &DAT_008f9ce8 && (*piVar7 = iVar8 + -1, iVar8 == 0)))) {
                  fn_001008c4(local_48 + -3,local_48[-2] + 8,0);
                }
              }
              goto LAB_003bc550;
            }
            iVar8 = *piVar7;
            puVar3 = &local_38;
          }
          else {
            puVar3 = (undefined4 *)fn_0022f750(&DAT_003bc5f8);
            iVar8 = *piVar7;
          }
          fn_00190d50(iVar8,puVar3);
        }
LAB_003bc550:
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      } while (puVar6 < (undefined4 *)(*(int *)(param_1 + 0xac) - *(int *)(param_1 + 0xa8) >> 2));
    }
    uVar1 = local_44;
    if (local_40 < local_44) {
      do {
        uVar1 = uVar1 + 2;
      } while (uVar1 != local_40);
    }
    fn_001008c4(local_44,(int)(local_3c - local_44) >> 1,0);
  }
  return;
}



void fn_003bcd38(int param_1,int *param_2,int param_3)

{
  uint uVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  short *psVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint local_30;
  short *local_2c;
  short *local_28;
  short *local_24;
  short local_20 [2];
  
  if (param_3 == 0) {
    return;
  }
  iVar7 = 1;
  local_2c = (short *)0x0;
  local_28 = (short *)0x0;
  local_24 = (short *)0x0;
  iVar3 = fn_006616e0();
  if (1 < iVar3) {
    do {
      sVar2 = (short)iVar7;
      iVar3 = fn_0028bc24();
      psVar6 = local_28;
      if ((iVar3 != 0) && (iVar3 = fn_006617a8((int)sVar2), psVar6 = local_28, iVar3 == param_3)) {
        local_30 = CONCAT22(((unsigned int)(local_30) >> 16) & 0xffff,sVar2);
        if (local_28 == local_24) {
          fn_0079e460(&local_2c,local_28,&local_30);
          psVar6 = local_28;
        }
        else {
          psVar6 = local_28 + 1;
          if (local_28 != (short *)0x0) {
            *local_28 = sVar2;
          }
        }
      }
      local_28 = psVar6;
      iVar7 = iVar7 + 1;
      iVar3 = fn_006616e0();
    } while (iVar7 < iVar3);
  }
  if ((uint)((int)local_28 - (int)local_2c >> 1) <
      (uint)(*(int *)(param_1 + 0xac) - *(int *)(param_1 + 0xa8) >> 2)) {
    iVar7 = 1;
    iVar3 = fn_002ea29c();
    if (1 < iVar3) {
      do {
        iVar3 = (int)(short)iVar7;
        iVar4 = fn_0013add0();
        psVar6 = local_28;
        if ((iVar4 != 0) && (iVar4 = fn_002e9f9c(iVar3), psVar6 = local_28, iVar4 != 0)) {
          iVar4 = fn_002ea524(iVar3);
          iVar5 = fn_001a46f4();
          psVar6 = local_28;
          if ((iVar5 != 0) &&
             ((iVar5 = fn_006616e0(), psVar6 = local_28, iVar4 < iVar5 &&
              (iVar5 = fn_0028bc24(iVar4), psVar6 = local_28, iVar5 != 0)))) {
            uVar9 = 0;
            do {
              iVar5 = fn_002ea3e8(iVar3,uVar9 & 0xff);
              if (iVar5 == param_3) {
                local_30 = CONCAT22(((unsigned int)(local_30) >> 16) & 0xffff,(short)iVar4);
                if (local_28 == local_24) {
                  fn_0079e460(&local_2c,local_28,&local_30);
                  psVar6 = local_28;
                }
                else {
                  psVar6 = local_28 + 1;
                  if (local_28 != (short *)0x0) {
                    *local_28 = (short)iVar4;
                  }
                }
                break;
              }
              uVar9 = uVar9 + 1;
              psVar6 = local_28;
            } while ((int)uVar9 < 3);
          }
        }
        local_28 = psVar6;
        iVar7 = iVar7 + 1;
        iVar3 = fn_002ea29c();
      } while (iVar7 < iVar3);
    }
  }
  uVar9 = 0;
  if ((int)local_28 - (int)local_2c >> 1 != 0) {
    do {
      uVar8 = 0;
      uVar1 = (int)local_28 - (int)local_2c >> 1;
      if (uVar1 <= uVar9) {
        local_30 = uVar1;
        fn_002ff628(9,&DAT_008c7674,&DAT_008c7674,uVar9);
      }
      local_20[0] = local_2c[uVar9];
      if (param_2[1] - *param_2 >> 1 != 0) {
        do {
          uVar1 = param_2[1] - *param_2 >> 1;
          if (uVar1 <= uVar8) {
            local_30 = uVar1;
            fn_002ff628(9,&DAT_008c7674,&DAT_008c7674,uVar8);
          }
        } while ((*(short *)(*param_2 + uVar8 * 2) != local_20[0]) &&
                (uVar8 = uVar8 + 1, uVar8 < (uint)(param_2[1] - *param_2 >> 1)));
      }
      psVar6 = (short *)param_2[1];
      if ((int)psVar6 - *param_2 >> 1 == uVar8) {
        if (psVar6 == (short *)param_2[2]) {
          fn_0079e460(param_2,psVar6,local_20);
        }
        else {
          param_2[1] = (int)(psVar6 + 1);
          if (psVar6 != (short *)0x0) {
            *psVar6 = local_20[0];
          }
        }
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < (uint)((int)local_28 - (int)local_2c >> 1));
  }
  fn_0022de40(param_2,6);
  psVar6 = local_2c;
  if (local_28 < local_2c) {
    do {
      psVar6 = psVar6 + 1;
    } while (psVar6 != local_28);
  }
  fn_001008c4(local_2c,(int)local_24 - (int)local_2c >> 1,0);
  return;
}



void fn_003bc2c8(undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  *param_1 = &PTR_FUN_0082f408;
  puVar1 = (undefined4 *)param_1[0x27];
  if (puVar1 != &DAT_008f9cf4) {
    piVar2 = puVar1 + -3;
    iVar3 = *piVar2;
    if ((iVar3 == -1) || ((piVar2 != &DAT_008f9ce8 && (*piVar2 = iVar3 + -1, iVar3 == 0)))) {
      iVar3 = param_1[0x27];
      fn_001008c4(iVar3 + -0xc,*(int *)(iVar3 + -8) + 8,0);
    }
  }
  fn_0022d118(param_1);
  return;
}



undefined4 * fn_003bc118(void)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint *puVar4;
  undefined2 *puVar5;
  uint uVar6;
  uint local_24 [2];
  
  puVar1 = (undefined4 *)fn_0022cfac();
  *puVar1 = &PTR_FUN_0082f408;
  uVar2 = fn_00100b58(&DAT_003bc238);
  if (uVar2 == 0) {
    puVar3 = &DAT_008f9cf4;
  }
  else {
    puVar4 = local_24 + 1;
    if (0x20 < uVar2) {
      puVar4 = local_24;
    }
    local_24[0] = uVar2;
    local_24[1] = 0x20;
    uVar6 = *puVar4;
    if (0xfffffff1 < uVar6) {
      fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar6,0xfffffff1);
    }
    if (uVar6 < uVar2) {
      fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar2,uVar6);
    }
    if (uVar6 == 0) {
      puVar3 = &DAT_008f9ce8;
    }
    else {
      puVar3 = (undefined4 *)fn_00100fc6((uVar6 + 8) * 2,0);
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
      }
      puVar3[2] = uVar2;
      puVar5 = (undefined2 *)((int)puVar3 + uVar2 * 2 + 0xc);
      *puVar3 = 0;
      puVar3[1] = uVar6;
      if (puVar5 != (undefined2 *)0x0) {
        *puVar5 = 0;
      }
    }
    puVar3 = puVar3 + 3;
  }
  puVar1[0x27] = puVar3;
  fn_00301a9c(puVar3,&DAT_003bc238,uVar2 << 1);
  *(undefined1 *)(puVar1 + 0x28) = 0;
  *(undefined1 *)((int)puVar1 + 0xa1) = 0;
  *(undefined2 *)((int)puVar1 + 0xa2) = 0;
  *(undefined1 *)(puVar1 + 0x29) = 0;
  *(undefined1 *)((int)puVar1 + 0xa5) = 0;
  *(undefined1 *)((int)puVar1 + 0xa6) = 0;
  return puVar1;
}


