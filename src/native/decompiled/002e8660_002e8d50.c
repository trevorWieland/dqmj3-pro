#include "002e8660_002e8d50.h"



void fn_002e8d50(void)

{
  fn_002d6808(DAT_00897828);
  return;
}



undefined4 * fn_002e8cf0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)fn_001f74f8(*(undefined4 *)(DAT_00897828 + 0x2c),0xdf);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00893064) goto LAB_002e8d40;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_002e8d40:
  return puVar1 + 3;
}



void fn_002e8c7c(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)fn_001f74f8(*(undefined4 *)(DAT_00897828 + 0x2c),0xdf);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00893064) goto LAB_002e8cd0;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_002e8cd0:
  fn_0017821c(param_1,puVar1 + 3,0x8d8);
  return;
}



uint fn_002e8660(undefined4 param_1,int param_2,int *param_3)

{
  short sVar1;
  short sVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  uint uVar12;
  undefined4 uVar13;
  bool bVar14;
  uint local_84 [2];
  uint local_7c;
  undefined1 auStack_78 [4];
  undefined1 auStack_74 [16];
  uint *local_64;
  uint *local_60;
  uint *local_5c;
  uint *local_50;
  uint *local_4c;
  uint *local_48;
  uint *local_44;
  uint *local_40;
  int local_3c;
  uint *local_38;
  uint *local_34;
  uint *local_30;
  uint **local_2c;
  
  uVar12 = 0;
  if (param_2 == 0) {
    return 0;
  }
  iVar4 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc));
  fn_0020bbc4(auStack_78,iVar4);
  switch(param_1) {
  default:
    goto switchD_002e86a4_caseD_0;
  case 1:
    sVar1 = *(short *)(iVar4 + 0x1c);
    iVar4 = 0;
    do {
      sVar2 = (&DAT_007c6644)[iVar4];
      bVar14 = sVar2 == sVar1;
      if (!bVar14) {
        sVar2 = (&DAT_007c6646)[iVar4];
      }
      if (bVar14 || sVar2 == sVar1) {
        uVar12 = 1;
        break;
      }
      iVar4 = iVar4 + 2;
    } while (iVar4 < 0x18);
    iVar4 = fn_002e3204();
    if (iVar4 == 0) {
      return uVar12;
    }
    break;
  case 2:
    uVar12 = fn_006bf2b4(auStack_74);
    return uVar12;
  case 3:
    iVar4 = fn_006bfe90(auStack_74);
    if (iVar4 != 4) {
      return 0;
    }
    break;
  case 4:
    local_38 = (uint *)0x0;
    local_34 = (uint *)0x0;
    local_30 = (uint *)0x0;
    local_50 = (uint *)0x0;
    local_4c = (uint *)0x0;
    local_48 = (uint *)0x0;
    iVar7 = 0;
    uVar13 = *(undefined4 *)(DAT_00897804 + 0xc);
    iVar4 = fn_006b83e4(uVar13);
    if (0 < iVar4) {
      do {
        local_7c = fn_00144df4(uVar13,iVar7);
        puVar6 = local_34;
        if (local_7c != 0) {
          if (local_34 == local_30) {
            fn_0079df24(&local_38,local_34,&local_7c);
            puVar6 = local_34;
          }
          else {
            puVar6 = local_34 + 1;
            if (local_34 != (uint *)0x0) {
              *local_34 = local_7c;
            }
          }
        }
        local_34 = puVar6;
        iVar7 = iVar7 + 1;
        iVar4 = fn_006b83e4(uVar13);
      } while (iVar7 < iVar4);
    }
    iVar7 = (int)local_34 - (int)local_38;
    fn_007b8d50(local_38,local_34);
    iVar4 = 0;
    if (param_3 != (int *)0x0) {
      uVar12 = 0;
      if (param_3[1] - *param_3 >> 2 != 0) {
        do {
          uVar9 = param_3[1] - *param_3 >> 2;
          if (uVar9 <= uVar12) {
            fn_002ff628(9,&DAT_008c7672,&DAT_008c7672,uVar12,uVar9);
          }
          local_84[0] = *(uint *)(*param_3 + uVar12 * 4);
          puVar6 = local_4c;
          if (local_84[0] != 0) {
            if (local_4c == local_48) {
              fn_0079df24(&local_50,local_4c,local_84);
              puVar6 = local_4c;
            }
            else {
              puVar6 = local_4c + 1;
              if (local_4c != (uint *)0x0) {
                *local_4c = local_84[0];
              }
            }
          }
          local_4c = puVar6;
          uVar12 = uVar12 + 1;
        } while (uVar12 < (uint)(param_3[1] - *param_3 >> 2));
      }
      iVar4 = (int)local_4c - (int)local_50 >> 2;
      fn_007b8d50(local_50,local_4c);
    }
    puVar3 = local_34;
    puVar6 = local_4c;
    local_44 = (uint *)0x0;
    local_40 = (uint *)0x0;
    local_3c = 0;
    local_2c = &local_44;
    puVar10 = local_38;
    puVar11 = local_50;
    while (puVar10 != puVar3 && puVar11 != puVar6) {
      uVar9 = *puVar10;
      uVar12 = *puVar11;
      if (uVar12 < uVar9) {
        puVar11 = puVar11 + 1;
      }
      if (uVar12 >= uVar9 && uVar12 != uVar9) {
        puVar10 = puVar10 + 1;
      }
      if (uVar12 == uVar9) {
        puVar8 = local_2c[1];
        if (puVar8 == local_2c[2]) {
          fn_0079df24(local_2c,puVar8,puVar10);
        }
        else {
          local_2c[1] = puVar8 + 1;
          if (puVar8 != (uint *)0x0) {
            *puVar8 = *puVar10;
          }
        }
        puVar10 = puVar10 + 1;
        puVar11 = puVar11 + 1;
      }
    }
    fn_007b8d50(local_44,local_40);
    puVar10 = local_34;
    puVar3 = local_40;
    local_64 = (uint *)0x0;
    local_60 = (uint *)0x0;
    local_5c = (uint *)0x0;
    puVar6 = local_38;
    puVar11 = local_44;
    while (puVar6 != puVar10 && puVar11 != puVar3) {
      uVar12 = *puVar6;
      if (*puVar11 == uVar12) {
        puVar6 = puVar6 + 1;
      }
      if (uVar12 < *puVar11) {
        if (local_60 == local_5c) {
          fn_0079df24(&local_64,local_60,puVar6);
          puVar8 = local_60;
        }
        else {
          puVar8 = local_60 + 1;
          if (local_60 != (uint *)0x0) {
            *local_60 = *puVar6;
          }
        }
        local_60 = puVar8;
        puVar6 = puVar6 + 1;
      }
      else {
        puVar11 = puVar11 + 1;
      }
    }
    for (; puVar6 != puVar10; puVar6 = puVar6 + 1) {
      if (local_60 == local_5c) {
        fn_0079df24(&local_64,local_60,puVar6);
        puVar3 = local_60;
      }
      else {
        puVar3 = local_60 + 1;
        if (local_60 != (uint *)0x0) {
          *local_60 = *puVar6;
        }
      }
      local_60 = puVar3;
    }
    for (iVar5 = 0; iVar5 < iVar7 >> 2; iVar5 = iVar5 + 1) {
    }
    for (iVar7 = 0; iVar7 < iVar4; iVar7 = iVar7 + 1) {
    }
    for (uVar12 = 0; uVar12 < (uint)((int)local_40 - (int)local_44 >> 2); uVar12 = uVar12 + 1) {
    }
    uVar12 = (int)local_60 - (int)local_64 >> 2;
    for (uVar9 = 0; uVar9 < uVar12; uVar9 = uVar9 + 1) {
    }
    puVar6 = local_64;
    if (local_60 < local_64) {
      do {
        puVar6 = puVar6 + 1;
      } while (puVar6 != local_60);
    }
    fn_001008c4(local_64,(int)local_5c - (int)local_64 >> 2,0);
    puVar6 = local_44;
    if (local_40 < local_44) {
      do {
        puVar6 = puVar6 + 1;
      } while (puVar6 != local_40);
    }
    fn_001008c4(local_44,local_3c - (int)local_44 >> 2,0);
    puVar6 = local_50;
    if (local_4c < local_50) {
      do {
        puVar6 = puVar6 + 1;
      } while (puVar6 != local_4c);
    }
    fn_001008c4(local_50,(int)local_48 - (int)local_50 >> 2,0);
    puVar6 = local_38;
    if (local_34 < local_38) {
      do {
        puVar6 = puVar6 + 1;
      } while (puVar6 != local_34);
    }
    fn_001008c4(local_38,(int)local_30 - (int)local_38 >> 2,0);
    return (uint)(uVar12 == 0);
  case 5:
    iVar4 = fn_00154ac8(0x19);
    if (iVar4 != 0) {
      return 0;
    }
    goto LAB_002e8b7c;
  case 6:
    iVar4 = fn_00154ac8(0x19);
    if (iVar4 == 0) {
      return 0;
    }
LAB_002e8b7c:
    uVar12 = fn_006bf34c(auStack_74);
    return uVar12;
  case 7:
    iVar4 = fn_00154ac8(0x463);
    if (iVar4 == 0) {
      uVar12 = fn_006bf184(auStack_74);
      return uVar12;
    }
    return 0;
  case 8:
    iVar4 = fn_00154ac8(0x463);
    if (iVar4 == 0) {
      return 0;
    }
    uVar12 = fn_006bf184(auStack_74);
    return uVar12;
  case 9:
    iVar4 = 0;
    uVar13 = *(undefined4 *)(DAT_00897804 + 0x1c);
    while (iVar7 = fn_006b51d8(uVar13,iVar4), iVar7 != param_2) {
      do {
        iVar4 = iVar4 + 1;
        if (3 < iVar4) {
          return 0;
        }
      } while (param_2 == 0);
    }
    break;
  case 10:
    iVar4 = fn_006b51c0(*(undefined4 *)(DAT_00897804 + 0x1c));
    if (iVar4 != param_2) {
      return 0;
    }
  }
  uVar12 = 1;
switchD_002e86a4_caseD_0:
  return uVar12;
}


