#include "0031f954_0031fee0.h"



undefined4 * fn_0031fee0(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined2 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *local_24;
  undefined1 auStack_20 [4];
  
  puVar1 = (undefined4 *)fn_0069e7cc();
  *puVar1 = &DAT_008230dc;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x13] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  puVar1[0x1a] = 0;
  puVar1[0x1b] = 0;
  puVar1[0x1c] = 0;
  piVar2 = (int *)fn_00168a24(&local_24,&DAT_00320174,auStack_20);
  iVar3 = *piVar2;
  puVar8 = &DAT_008f9ce8;
  if (*(int *)(iVar3 + -0xc) == -1) {
    uVar7 = *(uint *)(iVar3 + -4);
    if (0xfffffff1 < uVar7) {
      fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar7,0xfffffff1);
    }
    puVar5 = puVar8;
    if (uVar7 != 0) {
      puVar5 = (undefined4 *)fn_00100fc6((uVar7 + 8) * 2,0);
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar5[2] = 0;
      }
      puVar5[1] = uVar7;
      puVar6 = (undefined2 *)((int)puVar5 + uVar7 * 2 + 0xc);
      puVar5[2] = uVar7;
      *puVar5 = 0;
      if (puVar6 != (undefined2 *)0x0) {
        *puVar6 = 0;
      }
    }
    puVar1[0x1d] = puVar5 + 3;
    fn_00301a9c(puVar5 + 3,*piVar2,uVar7 << 1);
  }
  else {
    puVar1[0x1d] = iVar3;
    piVar4 = (int *)(iVar3 + -0xc);
    if (piVar4 != &DAT_008f9ce8) {
      *piVar4 = *piVar4 + 1;
    }
  }
  iVar3 = *piVar2;
  if (*(int *)(iVar3 + -0xc) == -1) {
    uVar7 = *(uint *)(iVar3 + -4);
    if (0xfffffff1 < uVar7) {
      fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar7,0xfffffff1);
    }
    if (uVar7 != 0) {
      puVar8 = (undefined4 *)fn_00100fc6((uVar7 + 8) * 2,0);
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = 0;
        puVar8[1] = 0;
        puVar8[2] = 0;
      }
      puVar8[1] = uVar7;
      puVar6 = (undefined2 *)((int)puVar8 + uVar7 * 2 + 0xc);
      puVar8[2] = uVar7;
      *puVar8 = 0;
      if (puVar6 != (undefined2 *)0x0) {
        *puVar6 = 0;
      }
    }
    puVar1[0x1e] = puVar8 + 3;
    fn_00301a9c(puVar8 + 3,*piVar2,uVar7 << 1);
  }
  else {
    puVar1[0x1e] = iVar3;
    piVar2 = (int *)(iVar3 + -0xc);
    if (piVar2 != &DAT_008f9ce8) {
      *piVar2 = *piVar2 + 1;
    }
  }
  if (local_24 != &DAT_008f9cf4) {
    piVar2 = local_24 + -3;
    iVar3 = *piVar2;
    if ((iVar3 == -1) || ((piVar2 != &DAT_008f9ce8 && (*piVar2 = iVar3 + -1, iVar3 == 0)))) {
      fn_001008c4(local_24 + -3,local_24[-2] + 8,0);
    }
  }
  *(undefined1 *)(puVar1 + 0x1f) = 0xff;
  *(undefined1 *)((int)puVar1 + 0x7d) = 0xff;
  *(undefined1 *)((int)puVar1 + 0x7e) = 0;
  *(undefined1 *)((int)puVar1 + 0x7f) = 0;
  *(undefined1 *)(puVar1 + 0x20) = 0;
  *(undefined1 *)((int)puVar1 + 0x81) = 0;
  *(undefined1 *)((int)puVar1 + 0x82) = 0xff;
  *(undefined1 *)((int)puVar1 + 0x83) = 0xff;
  *(undefined1 *)(puVar1 + 0x21) = 0;
  *(undefined1 *)((int)puVar1 + 0x85) = 0;
  *(undefined1 *)((int)puVar1 + 0x86) = 0;
  *(undefined1 *)((int)puVar1 + 0x87) = 0;
  return puVar1;
}



void fn_0031fe38(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 *local_20;
  undefined1 auStack_1c [16];
  
  uVar1 = fn_00168a24(&local_20,param_2,auStack_1c);
  fn_007854f8(param_1 + 0x78,uVar1);
  if (local_20 != &DAT_008f9cf4) {
    piVar2 = local_20 + -3;
    iVar3 = *piVar2;
    if ((iVar3 == -1) || ((piVar2 != &DAT_008f9ce8 && (*piVar2 = iVar3 + -1, iVar3 == 0)))) {
      fn_001008c4(local_20 + -3,local_20[-2] + 8,0);
    }
  }
  fn_0031ec6c(param_1,0);
  return;
}



void fn_0031fb1c(undefined4 param_1,int *param_2,uint *param_3,int param_4,uint param_5)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  uint uVar12;
  undefined4 *puVar13;
  int iVar14;
  int *piVar15;
  uint uVar16;
  uint local_40;
  uint local_3c [2];
  undefined4 uStack_34;
  int *piStack_30;
  uint *puStack_2c;
  int local_28;
  
  puVar1 = &local_40;
  local_3c[0] = param_5;
  uStack_34 = param_1;
  piStack_30 = param_2;
  puStack_2c = param_3;
  local_28 = param_4;
  if (0x3fffffff < param_5) {
    local_40 = 0x3fffffff;
    fn_002ff628(8,&DAT_008c7664,&DAT_008c7664,param_5);
  }
  if ((uint)((int)(param_3[2] - *param_3) >> 2) < local_3c[0]) {
    uVar16 = (int)(param_3[1] - *param_3) >> 2;
    local_40 = uVar16 + (uVar16 >> 1) + (uVar16 >> 3);
    if (local_40 < uVar16 + 0x20) {
      local_40 = uVar16 + 0x20;
    }
    if (local_40 <= local_3c[0]) {
      puVar1 = local_3c;
    }
    uVar16 = *puVar1;
    puVar2 = (undefined4 *)fn_00100fc6(uVar16 << 2,0);
    puVar13 = (undefined4 *)param_3[1];
    puVar3 = puVar2;
    for (puVar8 = (undefined4 *)*param_3; puVar8 != puVar13; puVar8 = puVar8 + 1) {
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = *puVar8;
      }
      puVar3 = puVar3 + 1;
    }
    uVar4 = *param_3;
    uVar5 = uVar4;
    if (param_3[1] < uVar4) {
      do {
        uVar5 = uVar5 + 4;
      } while (uVar5 != param_3[1]);
    }
    fn_001008c4(uVar4,(int)(param_3[2] - uVar4) >> 2,0);
    uVar5 = *param_3;
    *param_3 = (uint)puVar2;
    param_3[1] = (param_3[1] - uVar5 & 0xfffffffc) + (int)puVar2;
    param_3[2] = (uint)(puVar2 + uVar16);
  }
  uVar16 = 0;
  if (param_5 != 0) {
    do {
      iVar6 = (**(code **)(*param_2 + 0x2c))(param_2,*(undefined4 *)(local_28 + uVar16 * 4),1);
      *(byte *)(iVar6 + 0x44) = *(byte *)(iVar6 + 0x44) & 0xfe;
      piVar15 = (int *)param_3[1];
      if (piVar15 == (int *)param_3[2]) {
        uVar5 = (int)((int)piVar15 - *param_3) >> 2;
        if (uVar5 < (uint)((int)((int)param_3[2] - *param_3) >> 2)) {
          param_3[1] = (uint)(piVar15 + 1);
          if (piVar15 != (int *)0x0) {
            *piVar15 = piVar15[-1];
          }
          piVar10 = piVar15 + -1;
          piVar11 = piVar15;
          if (piVar15 < piVar10) {
            if (0 < (int)piVar10 - (int)piVar15) {
              iVar14 = (int)piVar10 - (int)piVar15 >> 2;
              iVar9 = 0;
              do {
                iVar14 = iVar14 + -1;
                piVar15[iVar9 + -1] = piVar10[iVar9 + -1];
                iVar9 = iVar9 + -1;
              } while (iVar14 != 0);
            }
          }
          else {
            while (piVar15 != piVar10) {
              piVar10 = piVar10 + -1;
              piVar11[-1] = *piVar10;
              piVar11 = piVar11 + -1;
            }
          }
          *piVar15 = iVar6;
        }
        else {
          local_40 = uVar5 + (uVar5 >> 1) + (uVar5 >> 3);
          if (local_40 < uVar5 + 0x20) {
            local_40 = uVar5 + 0x20;
          }
          piVar7 = (int *)fn_00100fc6(local_40 << 2,0);
          piVar11 = piVar7;
          for (piVar10 = (int *)*param_3; piVar10 != piVar15; piVar10 = piVar10 + 1) {
            if (piVar11 != (int *)0x0) {
              *piVar11 = *piVar10;
            }
            piVar11 = piVar11 + 1;
          }
          piVar10 = (int *)(((int)piVar15 - *param_3 & 0xfffffffc) + (int)piVar7);
          if (piVar10 != (int *)0x0) {
            *piVar10 = iVar6;
          }
          piVar11 = (int *)param_3[1];
          piVar10 = (int *)(((int)piVar15 - *param_3 & 0xfffffffc) + (int)piVar7);
          for (; piVar15 != piVar11; piVar15 = piVar15 + 1) {
            piVar10 = piVar10 + 1;
            if (piVar10 != (int *)0x0) {
              *piVar10 = *piVar15;
            }
          }
          uVar4 = *param_3;
          uVar12 = param_3[1];
          uVar5 = uVar4;
          if (uVar12 < uVar4) {
            do {
              uVar5 = uVar5 + 4;
            } while (uVar5 != uVar12);
          }
          fn_001008c4(uVar4,(int)(param_3[2] - uVar4) >> 2,0);
          param_3[2] = (uint)(piVar7 + local_40);
          param_3[1] = (uint)(piVar7 + ((int)(uVar12 - uVar4) >> 2) + 1);
          *param_3 = (uint)piVar7;
        }
      }
      else {
        param_3[1] = (uint)(piVar15 + 1);
        if (piVar15 != (int *)0x0) {
          *piVar15 = iVar6;
        }
      }
      uVar16 = uVar16 + 1;
    } while (uVar16 < param_5);
  }
  return;
}



void fn_0031f954(int param_1,int param_2)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  if ((param_2 == 0) && (*(char *)(param_1 + 0x82) == *(char *)(param_1 + 0x83))) {
    return;
  }
  iVar4 = (int)*(char *)(param_1 + 0x7d);
  if ((int)*(char *)(param_1 + 0x7c) == (int)*(char *)(param_1 + 0x7d)) {
    iVar4 = (int)*(char *)(param_1 + 0x7c);
  }
  iVar5 = *(int *)(param_1 + 0x6c);
  if (iVar5 != 0) {
    *(byte *)(iVar5 + 0x44) = *(byte *)(iVar5 + 0x44) & 0xfe;
  }
  cVar2 = *(char *)(param_1 + 0x83);
  *(undefined4 *)(param_1 + 0x6c) = 0;
  switch(iVar4) {
  case 0:
    if (cVar2 == -1) {
      return;
    }
    if (cVar2 != '\0') goto LAB_0031fa14;
    uVar1 = *(int *)(param_1 + 0x38) - *(int *)(param_1 + 0x34) >> 2;
    if (uVar1 < 3) {
      fn_002ff628(9,&DAT_008c7663,&DAT_008c7663,2,uVar1);
    }
    iVar4 = *(int *)(param_1 + 0x34);
LAB_0031faf0:
    uVar3 = *(undefined4 *)(iVar4 + 8);
    break;
  case 1:
    if (cVar2 == -1) {
      return;
    }
    if (cVar2 == '\0') {
      uVar1 = *(int *)(param_1 + 0x44) - *(int *)(param_1 + 0x40) >> 2;
      if (uVar1 < 0xb) {
        fn_002ff628(9,&DAT_008c7663,&DAT_008c7663,10,uVar1);
      }
      uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x28);
    }
    else {
      if (cVar2 != '\x01') goto LAB_0031fa14;
      uVar1 = *(int *)(param_1 + 0x44) - *(int *)(param_1 + 0x40) >> 2;
      if (uVar1 < 0xc) {
        fn_002ff628(9,&DAT_008c7663,&DAT_008c7663,0xb,uVar1);
      }
      uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x2c);
    }
    break;
  case 2:
    if (cVar2 == -1) {
      return;
    }
    if (cVar2 == '\x03') {
      uVar1 = *(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x4c) >> 2;
      if (uVar1 < 3) {
        fn_002ff628(9,&DAT_008c7663,&DAT_008c7663,2,uVar1);
      }
      iVar4 = *(int *)(param_1 + 0x4c);
      goto LAB_0031faf0;
    }
LAB_0031fa14:
    uVar3 = 0;
    break;
  case 3:
    goto switchD_0031f9b0_caseD_3;
  default:
    goto switchD_0031f9b0_caseD_ffffffff;
  }
  *(undefined4 *)(param_1 + 0x6c) = uVar3;
switchD_0031f9b0_caseD_ffffffff:
  iVar4 = *(int *)(param_1 + 0x6c);
  if (iVar4 != 0) {
    *(byte *)(iVar4 + 0x44) = *(byte *)(iVar4 + 0x44) & 0xfe | 1;
  }
switchD_0031f9b0_caseD_3:
  return;
}


