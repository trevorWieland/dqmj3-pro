#include "005b0a14_005b1864.h"



undefined4 * fn_005b1864(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined *puVar7;
  char *pcVar8;
  undefined *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  
  puVar9 = &DAT_00862924;
  puVar5 = &DAT_0086292c;
  puVar7 = &DAT_00862934;
  pcVar8 = "customruleok";
  uVar6 = 0x101;
  uVar4 = 0;
  uVar15 = 0xf2;
  uVar18 = 0x101;
  uVar19 = 0x101;
  uVar10 = 0;
  uVar11 = 0xf2;
  uVar12 = 0x101;
  uVar13 = 0;
  uVar14 = 0xf2;
  uVar16 = 0;
  uVar17 = 0xec;
  if (((DAT_00892f4c & 1) == 0) && (iVar1 = fn_00303afc(&DAT_00892f4c), iVar1 != 0)) {
    DAT_008c9fc0 = puVar9;
    DAT_008c9fc4 = uVar13;
    DAT_008c9fc8 = uVar14;
    DAT_008c9fcc = uVar6;
    DAT_008c9fd0 = puVar5;
    DAT_008c9fd4 = uVar10;
    DAT_008c9fd8 = uVar11;
    DAT_008c9fdc = uVar12;
    DAT_008c9fe0 = puVar7;
    DAT_008c9fe4 = uVar4;
    DAT_008c9fe8 = uVar15;
    DAT_008c9fec = uVar18;
    DAT_008c9ff0 = pcVar8;
    DAT_008c9ff4 = uVar16;
    DAT_008c9ff8 = uVar17;
    DAT_008c9ffc = uVar19;
  }
  puVar2 = (undefined4 *)fn_001f74ec(param_1,0xe7);
  if (puVar2 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar2)();
    do {
      bVar3 = puVar2 != &DAT_00892ee4;
      if (bVar3) {
        puVar2 = (undefined4 *)*puVar2;
      }
    } while (bVar3 && puVar2 != (undefined4 *)0x0);
  }
  *param_2 = 4;
  return &DAT_008c9fc0;
}



void fn_005b17f4(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x8c,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005b1824(iVar1,param_1);
  return;
}



void fn_005b1824(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0025dea8(param_1,param_2,&DAT_00892b30,1);
  *puVar1 = &DAT_00847bbc;
  return;
}



void fn_005b1708(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_00847a98;
  fn_001218d4(DAT_00897800,DAT_00898784);
  uVar1 = param_1[0x37];
  uVar2 = uVar1;
  if ((uint)param_1[0x38] < uVar1) {
    do {
      uVar2 = uVar2 + 4;
    } while (uVar2 != param_1[0x38]);
  }
  fn_001008c4(uVar1,(int)(param_1[0x39] - uVar1) >> 2,0);
  uVar1 = param_1[0x34];
  uVar2 = uVar1;
  if ((uint)param_1[0x35] <= uVar1) {
    for (; uVar2 != param_1[0x35]; uVar2 = uVar2 + 4) {
    }
  }
  fn_001008c4(uVar1,(int)(param_1[0x36] - uVar1) >> 2,0);
  uVar1 = param_1[0x31];
  uVar2 = uVar1;
  if ((uint)param_1[0x32] <= uVar1) {
    for (; uVar2 != param_1[0x32]; uVar2 = uVar2 + 4) {
    }
  }
  fn_001008c4(uVar1,(int)(param_1[0x33] - uVar1) >> 2,0);
  *param_1 = &PTR_LAB_0084b2b4;
  if ((int *)param_1[0x2b] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x2b] + 4))();
  }
  fn_003bc2c8(param_1);
  return;
}



/* WARNING: Removing unreachable block (ram,0x005b15fc) */
/* WARNING: Removing unreachable block (ram,0x005b1674) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffdc : 0x005b1604 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 * fn_005b11a8(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  int local_28;
  
  iVar1 = fn_00145b00(0xe8,&DAT_00812c8c);
  if (iVar1 == 0) {
    return (undefined4 *)0x0;
  }
  puVar2 = (undefined4 *)fn_005cacf0(iVar1,param_1);
  *puVar2 = &PTR_FUN_00847a98;
  puVar2[0x2c] = 0;
  puVar2[0x2d] = 0;
  puVar2[0x2e] = 0;
  puVar2[0x2f] = 0;
  puVar2[0x30] = 0;
  puVar2[0x31] = 0;
  puVar2[0x32] = 0;
  puVar2[0x33] = 0;
  puVar3 = (undefined4 *)fn_00100fc6(0x80,0);
  iVar1 = 8;
  puVar2[0x31] = puVar3;
  do {
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = 0;
    }
    iVar1 = iVar1 + -1;
    puVar3 = puVar3 + 1;
  } while (iVar1 != 0);
  iVar1 = puVar2[0x31];
  puVar2[0x32] = iVar1 + 0x20;
  puVar2[0x33] = iVar1 + 0x80;
  piVar4 = puVar2 + 0x34;
  *piVar4 = 0;
  puVar2[0x35] = 0;
  puVar2[0x36] = 0;
  local_28 = 4;
  puVar3 = (undefined4 *)fn_00100fc6(0x80,0);
  *piVar4 = (int)puVar3;
  for (; local_28 != 0; local_28 = local_28 + -1) {
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = 0;
    }
    puVar3 = puVar3 + 1;
  }
  puVar2[0x35] = *piVar4 + 0x10;
  puVar2[0x36] = *piVar4 + 0x80;
  puVar2[0x37] = 0;
  puVar2[0x38] = 0;
  puVar2[0x39] = 0;
  local_28 = 4;
  puVar3 = (undefined4 *)fn_00100fc6(0x80,0);
  puVar2[0x37] = puVar3;
  for (; local_28 != 0; local_28 = local_28 + -1) {
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = 0;
    }
    puVar3 = puVar3 + 1;
  }
  iVar1 = puVar2[0x37];
  puVar2[0x39] = iVar1 + 0x80;
  puVar2[0x38] = iVar1 + 0x10;
  fn_00121838(DAT_00897800,DAT_00898784,1);
  return puVar2;
}



int fn_005b1104(int param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(int *)(param_1 + 200) - *(int *)(param_1 + 0xc4) >> 2;
  if (uVar1 <= param_2) {
    fn_002ff628(9,&DAT_008c7667,&DAT_008c7667,param_2,uVar1);
  }
  fn_00190d50(*(undefined4 *)(*(int *)(param_1 + 0xc4) + param_2 * 4),param_3);
  uVar1 = *(int *)(param_1 + 200) - *(int *)(param_1 + 0xc4) >> 2;
  if (uVar1 <= param_2) {
    fn_002ff628(9,&DAT_008c7667,&DAT_008c7667,param_2,uVar1);
  }
  iVar2 = *(int *)(*(int *)(param_1 + 0xc4) + param_2 * 4);
  *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe | 1;
  return param_2 + 1;
}



undefined4 fn_005b0bfc(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 local_24;
  undefined4 local_20 [2];
  
  iVar1 = fn_00661308(param_2);
  iVar2 = fn_0033a374();
  if (iVar2 == 0) {
    return 0;
  }
  uVar3 = fn_006e890c(param_1,iVar1);
  iVar2 = fn_001a46f4((int)(short)uVar3);
  if ((iVar2 == 0) || (iVar2 = fn_001a46f4((int)uVar3 >> 0x10), iVar2 == 0)) {
    if (iVar1 == 1) {
      uVar3 = 0;
    }
    else {
      uVar3 = fn_0033a3ac((int)(short)((short)iVar1 + -1));
      iVar1 = fn_0033a3ac((int)(short)((short)iVar1 + 1));
      uVar3 = uVar3 & 0xffff | iVar1 << 0x10;
    }
  }
  iVar1 = fn_001a46f4();
  if (iVar1 != 0) {
    iVar1 = fn_001a46f4();
    if (iVar1 != 0) {
      if (param_3 != 0) {
        if (*(int *)(param_1 + 0xd4) - *(int *)(param_1 + 0xd0) >> 2 == 0) {
          fn_002ff628(9,&DAT_008c7666,&DAT_008c7666,0,0);
        }
        *(byte *)(**(int **)(param_1 + 0xd0) + 0x44) =
             *(byte *)(**(int **)(param_1 + 0xd0) + 0x44) & 0xfe | 1;
        fn_002317d8(&local_24,(int)(short)uVar3,0);
        if (*(int *)(param_1 + 200) - *(int *)(param_1 + 0xc4) >> 2 == 0) {
          fn_002ff628(9,&DAT_008c7667,&DAT_008c7667,0,0);
        }
        fn_00190d50(**(undefined4 **)(param_1 + 0xc4),local_24);
        if (*(int *)(param_1 + 200) - *(int *)(param_1 + 0xc4) >> 2 == 0) {
          fn_002ff628(9,&DAT_008c7667,&DAT_008c7667,0,0);
        }
        *(byte *)(**(int **)(param_1 + 0xc4) + 0x44) =
             *(byte *)(**(int **)(param_1 + 0xc4) + 0x44) & 0xfe | 1;
        fn_002317d8(local_20,(int)uVar3 >> 0x10,0);
        uVar3 = *(int *)(param_1 + 200) - *(int *)(param_1 + 0xc4) >> 2;
        if (uVar3 < 2) {
          fn_002ff628(9,&DAT_008c7667,&DAT_008c7667,1,uVar3);
        }
        fn_00190d50(*(undefined4 *)(*(int *)(param_1 + 0xc4) + 4),local_20[0]);
        uVar3 = *(int *)(param_1 + 200) - *(int *)(param_1 + 0xc4) >> 2;
        if (uVar3 < 2) {
          fn_002ff628(9,&DAT_008c7667,&DAT_008c7667,1,uVar3);
        }
        iVar1 = *(int *)(*(int *)(param_1 + 0xc4) + 4);
        *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe | 1;
        fn_001588d4(local_20);
        fn_001588d4(&local_24);
      }
      return 2;
    }
  }
  return 0;
}



uint fn_005b0a14(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  short local_3c [2];
  undefined4 *local_38 [2];
  int iStack_30;
  int local_2c;
  int iStack_28;
  
  uVar6 = 0;
  iVar7 = 0;
  iStack_30 = param_1;
  local_2c = param_2;
  iStack_28 = param_3;
  iVar3 = fn_0026cda4();
  if (0 < iVar3) {
    do {
      iVar3 = fn_0026cdd0(iVar7);
      if (iVar3 == local_2c) {
        if (param_3 != 0) {
          uVar1 = (int)uVar6 / 2;
          uVar2 = *(int *)(param_1 + 0xd4) - *(int *)(param_1 + 0xd0) >> 2;
          if (uVar2 <= uVar1) {
            fn_002ff628(9,&DAT_008c7666,&DAT_008c7666,uVar1,uVar2);
          }
          iVar3 = *(int *)(*(int *)(param_1 + 0xd0) + uVar1 * 4);
          *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xfe | 1;
        }
        fn_0026cdec(iVar7,local_3c,2);
        iVar3 = 0;
        do {
          if (param_3 != 0) {
            fn_002317d8(local_38,(int)local_3c[iVar3],0);
            uVar1 = *(int *)(param_1 + 200) - *(int *)(param_1 + 0xc4) >> 2;
            if (uVar1 <= uVar6) {
              fn_002ff628(9,&DAT_008c7667,&DAT_008c7667,uVar6,uVar1);
            }
            fn_00190d50(*(undefined4 *)(*(int *)(param_1 + 0xc4) + uVar6 * 4),local_38[0]);
            uVar1 = *(int *)(param_1 + 200) - *(int *)(param_1 + 0xc4) >> 2;
            if (uVar1 <= uVar6) {
              fn_002ff628(9,&DAT_008c7667,&DAT_008c7667,uVar6,uVar1);
            }
            iVar4 = *(int *)(*(int *)(param_1 + 0xc4) + uVar6 * 4);
            *(byte *)(iVar4 + 0x44) = *(byte *)(iVar4 + 0x44) & 0xfe | 1;
            if (local_38[0] != &DAT_008f9cf4) {
              piVar5 = local_38[0] + -3;
              iVar4 = *piVar5;
              if ((iVar4 == -1) || ((piVar5 != &DAT_008f9ce8 && (*piVar5 = iVar4 + -1, iVar4 == 0)))
                 ) {
                fn_001008c4(local_38[0] + -3,local_38[0][-2] + 8,0);
              }
            }
          }
          iVar3 = iVar3 + 1;
          uVar6 = uVar6 + 1;
        } while (iVar3 < 2);
      }
      if (5 < (int)uVar6) {
        return uVar6;
      }
      iVar7 = iVar7 + 1;
      iVar3 = fn_0026cda4();
    } while (iVar7 < iVar3);
  }
  return uVar6;
}


