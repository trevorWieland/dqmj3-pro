#include "0013a6b0_0013af30.h"



void fn_0013af30(int param_1,int param_2)

{
  undefined4 uVar1;
  
  *(int *)(param_1 + 0x68) = param_2;
  if (param_2 == 0) {
    return;
  }
  uVar1 = *(undefined4 *)(param_2 + 4);
  fn_00156298(uVar1);
  fn_001562b4(uVar1);
  fn_00153bd8(*(undefined4 *)(param_1 + 100));
  fn_00153bf0(*(undefined4 *)(param_1 + 100));
  return;
}



int * fn_0013aee8(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 4) != 0) {
      fn_0016a43c(*(int *)(iVar1 + 4),*(undefined4 *)(iVar1 + 0xc));
                    /* WARNING: Subroutine does not return */
      fn_001482f4(*(undefined4 *)(iVar1 + 4),*(undefined4 *)(iVar1 + 8));
    }
    fn_002feef8(iVar1);
  }
  return param_1;
}



void fn_0013ae4c(int *param_1,undefined4 param_2)

{
  if (param_1[3] != 0) {
    if ((*(int *)(param_1[3] + 0xc) == 0) || (fn_00151954(), param_1[3] != 0)) {
      (**(code **)(*(int *)param_1[3] + 4))();
    }
    param_1[3] = 0;
  }
  if (param_1[2] != -1) {
                    /* WARNING: Subroutine does not return */
    fn_001482f4(param_2);
  }
  if (param_1[1] != -1) {
    fn_00148348(param_2);
    param_1[1] = -1;
  }
  if (*param_1 != -1) {
                    /* WARNING: Subroutine does not return */
    fn_001482f4(param_2);
  }
  return;
}



undefined4 fn_0013add0(int param_1)

{
  int iVar1;
  
  if (param_1 < 10000) {
    if (((param_1 < 1) || (DAT_00892860 <= param_1)) || (*(short *)(DAT_00892858 + param_1 * 2) < 0)
       ) {
      return 0;
    }
  }
  else {
    iVar1 = fn_0014cd2c(*(undefined4 *)(DAT_00897804 + 0xc),param_1);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 1;
}



undefined1 fn_0013ad98(int param_1)

{
  undefined1 uVar1;
  
  if (param_1 < 10000) {
    uVar1 = *(undefined1 *)(DAT_00892854 + *(short *)(DAT_00892858 + param_1 * 2) * 0x48 + 4);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



int fn_0013a6b0(int param_1,undefined4 param_2,undefined4 param_3,ushort *param_4)

{
  ushort uVar1;
  ushort *puVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ushort **ppuVar7;
  int *piVar8;
  ushort *puVar9;
  undefined2 *puVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  ushort *puVar15;
  uint uVar16;
  int iVar17;
  ushort *local_44;
  ushort *local_40;
  undefined4 *local_3c;
  undefined4 *local_38;
  undefined4 *local_34 [2];
  int local_2c;
  undefined4 uStack_28;
  
  local_2c = param_1;
  uStack_28 = param_2;
  puVar2 = (ushort *)fn_00100b58(param_2);
  puVar14 = &DAT_008f9ce8;
  puVar13 = &DAT_008f9cf4;
  local_38 = puVar13;
  if (puVar2 != (ushort *)0x0) {
    ppuVar7 = &local_40;
    if (&DAT_00000020 < puVar2) {
      ppuVar7 = &local_44;
    }
    local_44 = puVar2;
    local_40 = (ushort *)0x20;
    puVar15 = *ppuVar7;
    if ((ushort *)0xfffffff1 < puVar15) {
      param_4 = puVar15;
      fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,puVar15,0xfffffff1);
    }
    if (puVar15 < puVar2) {
      param_4 = puVar2;
      fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,puVar2,puVar15);
    }
    puVar3 = puVar14;
    if (puVar15 != (ushort *)0x0) {
      puVar3 = (undefined4 *)fn_00100fc6((int)(puVar15 + 4) * 2,0);
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
      }
      puVar3[2] = puVar2;
      puVar10 = (undefined2 *)((int)puVar3 + (int)puVar2 * 2 + 0xc);
      *puVar3 = 0;
      puVar3[1] = puVar15;
      if (puVar10 != (undefined2 *)0x0) {
        *puVar10 = 0;
      }
    }
    local_38 = puVar3 + 3;
  }
  fn_00301a9c(local_38,param_2,(int)puVar2 << 1);
  puVar2 = (ushort *)fn_00100b58();
  if ((ushort *)0xfffffff1 < puVar2) {
    param_4 = puVar2;
    fn_002ff628(8,&DAT_008c75f7,&DAT_008c75f7,puVar2,0xfffffff1);
  }
  iVar4 = local_38[-1];
  if (iVar4 != 0) {
    for (; iVar4 != 0; iVar4 = iVar4 + -1) {
      if (puVar2 != (ushort *)0x0) {
        puVar15 = (ushort *)((uint)puVar2 & 1);
        if (puVar15 != (ushort *)0x0) {
          param_4 = (ushort *)(iVar4 * 2 + -2);
        }
        puVar9 = (ushort *)0x0;
        if (puVar15 != (ushort *)0x0) {
          param_4 = (ushort *)(uint)*(ushort *)((int)local_38 + (int)param_4);
          do {
            if (param_4 == (ushort *)(uint)(ushort)(&DAT_0013ab3c)[(int)puVar9]) goto LAB_0013a858;
            puVar9 = (ushort *)((int)puVar9 + 1);
          } while (puVar9 < puVar15);
        }
        if (puVar15 < puVar2) {
          puVar9 = (ushort *)(uint)*(ushort *)((int)local_38 + iVar4 * 2 + -2);
          do {
            param_4 = &DAT_0013ab3c + (int)puVar15;
            uVar1 = *param_4;
            if (puVar9 != (ushort *)(uint)uVar1) {
              param_4 = (ushort *)(uint)(ushort)(&DAT_0013ab3e)[(int)puVar15];
            }
            if (puVar9 == (ushort *)(uint)uVar1 || puVar9 == param_4) goto LAB_0013a858;
            puVar15 = puVar15 + 1;
          } while (puVar15 < puVar2);
        }
      }
    }
  }
  iVar4 = -1;
LAB_0013a878:
  uVar16 = iVar4 + 1;
  uVar5 = fn_00100b58();
  if (0xfffffff1 < uVar5) {
    fn_002ff628(8,&DAT_008c75f7,&DAT_008c75f7,uVar5,0xfffffff1);
  }
  iVar17 = local_38[-1];
  iVar4 = iVar17;
  if (iVar17 != 0) {
    for (; iVar4 != 0; iVar4 = iVar4 + -1) {
      if (uVar5 != 0) {
        uVar6 = uVar5 & 1;
        uVar11 = 0;
        if (uVar6 != 0) {
          do {
            if (*(short *)((int)local_38 + iVar4 * 2 + -2) == (&DAT_0013ab44)[uVar11])
            goto LAB_0013a938;
            uVar11 = uVar11 + 1;
          } while (uVar11 < uVar6);
        }
        if (uVar6 < uVar5) {
          puVar2 = (ushort *)(uint)*(ushort *)((int)local_38 + iVar4 * 2 + -2);
          do {
            puVar15 = &DAT_0013ab44 + uVar6;
            uVar1 = *puVar15;
            if (puVar2 != (ushort *)(uint)uVar1) {
              puVar15 = (ushort *)(uint)(ushort)(&DAT_0013ab46)[uVar6];
            }
            if (puVar2 == (ushort *)(uint)uVar1 || puVar2 == puVar15) goto LAB_0013a938;
            uVar6 = uVar6 + 2;
          } while (uVar6 < uVar5);
        }
      }
    }
  }
  iVar4 = -1;
LAB_0013a958:
  if ((uint)local_38[-1] < uVar16) {
    fn_002ff628(9,&DAT_008c75f9,&DAT_008c75f9,uVar16,iVar17);
  }
  iVar17 = (int)local_38 + uVar16 * 2;
  puVar2 = (ushort *)(iVar4 - uVar16);
  if ((ushort *)(local_38[-1] - uVar16) <= (ushort *)(iVar4 - uVar16)) {
    puVar2 = (ushort *)(local_38[-1] - uVar16);
  }
  if ((ushort *)0xfffffff1 < puVar2) {
    fn_002ff628(8,&DAT_008c7612,&DAT_008c7612,puVar2,0xfffffff1);
  }
  local_34[0] = puVar13;
  if (puVar2 != (ushort *)0x0) {
    ppuVar7 = &local_40;
    if (&DAT_00000020 < puVar2) {
      ppuVar7 = &local_44;
    }
    local_44 = puVar2;
    local_40 = (ushort *)0x20;
    puVar15 = *ppuVar7;
    if ((ushort *)0xfffffff1 < puVar15) {
      fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,puVar15,0xfffffff1);
    }
    if (puVar15 < puVar2) {
      fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,puVar2,puVar15);
    }
    puVar3 = puVar14;
    if (puVar15 != (ushort *)0x0) {
      puVar3 = (undefined4 *)fn_00100fc6((int)(puVar15 + 4) * 2,0);
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
      }
      puVar10 = (undefined2 *)((int)puVar3 + (int)puVar2 * 2 + 0xc);
      *puVar3 = 0;
      puVar3[1] = puVar15;
      puVar3[2] = puVar2;
      if (puVar10 != (undefined2 *)0x0) {
        *puVar10 = 0;
      }
    }
    local_34[0] = puVar3 + 3;
  }
  if (iVar17 != 0) {
    fn_00301a9c(local_34[0],iVar17,(int)puVar2 << 1);
  }
  puVar2 = (ushort *)fn_00100b58(L"rom:/data/Message/Layout/");
  if (puVar2 != (ushort *)0x0) {
    ppuVar7 = &local_40;
    if (&DAT_00000020 < puVar2) {
      ppuVar7 = &local_44;
    }
    local_44 = puVar2;
    local_40 = (ushort *)0x20;
    puVar15 = *ppuVar7;
    if ((ushort *)0xfffffff1 < puVar15) {
      fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,puVar15,0xfffffff1);
    }
    if (puVar15 < puVar2) {
      fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,puVar2,puVar15);
    }
    if (puVar15 != (ushort *)0x0) {
      puVar14 = (undefined4 *)fn_00100fc6((int)(puVar15 + 4) * 2,0);
      if (puVar14 != (undefined4 *)0x0) {
        *puVar14 = 0;
        puVar14[1] = 0;
        puVar14[2] = 0;
      }
      puVar10 = (undefined2 *)((int)puVar14 + (int)puVar2 * 2 + 0xc);
      *puVar14 = 0;
      puVar14[1] = puVar15;
      puVar14[2] = puVar2;
      if (puVar10 != (undefined2 *)0x0) {
        *puVar10 = 0;
      }
    }
    puVar13 = puVar14 + 3;
  }
  local_3c = puVar13;
  fn_00301a9c(puVar13,L"rom:/data/Message/Layout/",(int)puVar2 << 1);
  uVar5 = local_3c[-1];
  puVar2 = (ushort *)local_34[0][-1];
  if (((uint)local_3c[-2] < uVar5 + (int)puVar2) || (1 < local_3c[-3] + 1)) {
    if (-(int)puVar2 - 0xfU < uVar5) {
      fn_002ff628(8,&DAT_008c760f,&DAT_008c760f,uVar5,-(int)puVar2 - 0xfU);
    }
    local_44 = (ushort *)0x0;
    local_40 = puVar2;
    fn_00177c88(&local_3c,local_3c[-1],0,local_34[0],local_34[0][-1]);
  }
  else {
    fn_00301a9c((int)local_3c + uVar5 * 2,local_34[0],((int)puVar2 + 1) * 2);
    local_3c[-1] = uVar5 + (int)puVar2;
  }
  uVar12 = local_3c[-1];
  local_40 = (ushort *)fn_00100b58(L".mes");
  local_44 = (ushort *)0x0;
  fn_00177c88(&local_3c,uVar12,0,L".mes",local_40);
  iVar4 = fn_00147fd4(local_3c,5);
  if (iVar4 == 0) {
    fn_001588d4(&local_3c);
    fn_001588d4(local_34);
    fn_001588d4(&local_38);
    return -1;
  }
  iVar4 = fn_00121838(DAT_00897800,local_3c,1);
  iVar17 = 0;
  piVar8 = *(int **)(local_2c + 8);
  while (piVar8 != (int *)(local_2c + 8)) {
    if (piVar8[-2] == iVar17) {
      iVar17 = iVar17 + 1;
      piVar8 = *(int **)(local_2c + 8);
    }
    else {
      piVar8 = (int *)*piVar8;
    }
  }
  piVar8 = (int *)fn_00145b00(0x10,&DAT_00812c8c);
  if (piVar8 != (int *)0x0) {
    *piVar8 = iVar17;
    piVar8[1] = iVar4;
    piVar8[2] = 0;
    piVar8[3] = 0;
  }
  fn_0017d948(local_2c + 4,local_2c + 8,piVar8 + 2);
  fn_001588d4(&local_3c);
  fn_001588d4(local_34);
  fn_001588d4(&local_38);
  return iVar17;
LAB_0013a858:
  iVar4 = iVar4 + -1;
  goto LAB_0013a878;
LAB_0013a938:
  iVar4 = iVar4 + -1;
  goto LAB_0013a958;
}


