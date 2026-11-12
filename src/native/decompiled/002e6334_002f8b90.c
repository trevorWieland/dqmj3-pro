#include "002e6334_002f8b90.h"



void fn_002f8b90(undefined4 *param_1)

{
  *param_1 = &DAT_00821374;
  (**(code **)(*DAT_00897828 + 0x10))();
  fn_002044a0(DAT_00897840);
  fn_005f6f1c(param_1);
  fn_002feef8();
  return;
}



void fn_002f8ae4(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(*DAT_00897828 + 0x1c))();
  if (iVar1 != 0 || DAT_008972cc != '\0') {
    (**(code **)(*DAT_00897828 + 0x18))();
    if (DAT_008972cd == '\0') {
      uVar2 = fn_00615ee4();
      fn_0010706c(uVar2,DAT_008972d0,2);
      DAT_008972d0 = 0;
    }
    else {
      uVar2 = fn_00615ee4();
      fn_0010706c(uVar2,&LAB_002f8abc,2);
    }
    DAT_008972cc = '\0';
    DAT_008972cd = '\x01';
  }
  return;
}



undefined4 fn_002e9a08(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  short sVar1;
  short sVar2;
  uint uVar3;
  ushort uVar4;
  int iVar5;
  short *psVar6;
  int *piVar7;
  int iVar8;
  short sVar9;
  short *psVar10;
  bool bVar11;
  
  if (DAT_00892858 != 0) {
    fn_002feca8();
    DAT_00892858 = 0;
  }
  DAT_0089285c = 0;
  DAT_00892860 = 0;
  if (((param_1 == 0) || (param_4 < (int)(uint)(param_3 == 0))) ||
     (iVar5 = fn_00147e6c(param_1,&DAT_002e9b78,4), iVar5 != 0)) {
    psVar10 = (short *)0x0;
  }
  else {
    psVar10 = (short *)(param_1 + 4);
  }
  iVar5 = 0x48;
  piVar7 = (int *)0x0;
  DAT_0089285c = fn_0011c134(param_3 - 4,param_4 - (uint)(param_3 < 4));
  if (iVar5 != 0 || piVar7 != (int *)0x0) {
    psVar10 = (short *)0x0;
  }
  if ((int)-(param_4 + (uint)(4 < param_3)) < 0 ==
      (SBORROW4(0,param_4) != SBORROW4(-param_4,(uint)(4 < param_3)))) {
    DAT_0089285c = 0;
  }
  DAT_00892860 = psVar10[DAT_0089285c * 0x24 + -0x24] + 1;
  DAT_00892854 = psVar10;
  DAT_00892858 = fn_001287d4(DAT_00892860 * 2,&DAT_00812c8c,4 - param_3);
  fn_00158f40(DAT_00892858,DAT_00892860 << 1,0xff);
  uVar3 = DAT_0089285c;
  psVar10 = DAT_00892854;
  iVar5 = DAT_0089285c - 1;
  if (0 < iVar5) {
    bVar11 = (DAT_0089285c & 1) == 0;
    psVar6 = DAT_00892854 + -0x24;
    if (bVar11) {
      piVar7 = (int *)(DAT_00892858 + *DAT_00892854 * 2);
      *(undefined2 *)piVar7 = 0;
      psVar6 = psVar10;
    }
    uVar4 = (ushort)bVar11;
    iVar5 = iVar5 >> 1;
    if (iVar5 != 0) {
      piVar7 = &DAT_00892858;
    }
    sVar1 = psVar6[0x24];
    if (iVar5 != 0) {
      iVar8 = *piVar7;
      do {
        sVar2 = psVar6[0x48];
        sVar9 = uVar4 + 1;
        *(ushort *)(iVar8 + sVar1 * 2) = uVar4;
        sVar1 = psVar6[0x6c];
        iVar5 = iVar5 + -1;
        uVar4 = uVar4 + 2;
        *(short *)(iVar8 + sVar2 * 2) = sVar9;
        psVar6 = psVar6 + 0x48;
      } while (iVar5 != 0);
    }
  }
  iVar5 = uVar3 - 1;
  if (-1 < iVar5) {
    *(short *)(DAT_00892858 + DAT_00892854[iVar5 * 0x24] * 2) = (short)iVar5;
  }
  return 1;
}



void fn_002e6334(int *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  uint *puVar14;
  int iVar15;
  undefined4 uVar16;
  
  uVar1 = fn_00231cb8((&DAT_007c6de9)[param_1[0x3b] * 2]);
  fn_00243550(param_1[0x29],uVar1);
  uVar1 = *(undefined4 *)(DAT_00897804 + 0x18);
  uVar7 = param_1[0x3e];
  uVar10 = param_1[0x3d];
  if (uVar10 != uVar7) {
    uVar2 = uVar10;
    if (uVar7 <= uVar10) {
      do {
        uVar2 = uVar2 + 0x10;
      } while (uVar2 != uVar7);
    }
    param_1[0x3e] = uVar7 - (uVar7 - uVar10 & 0xfffffff0);
  }
  iVar15 = 0;
  iVar3 = fn_006c78d8(param_1[0x39]);
  if (0 < iVar3) {
    do {
      puVar4 = (undefined4 *)fn_006c78cc(param_1[0x39],iVar15);
      puVar14 = (uint *)(param_1 + 0x3d);
      puVar5 = (undefined4 *)fn_00242540(uVar1,*puVar4);
      puVar4 = (undefined4 *)param_1[0x3e];
      if (puVar4 == (undefined4 *)param_1[0x3f]) {
        uVar7 = (int)((int)puVar4 - *puVar14) >> 4;
        if (uVar7 < (uint)((int)(param_1[0x3f] - *puVar14) >> 4)) {
          param_1[0x3e] = (int)(puVar4 + 4);
          if (puVar4 != (undefined4 *)0x0) {
            *puVar4 = puVar4[-4];
            puVar4[1] = puVar4[-3];
            puVar4[2] = puVar4[-2];
            puVar4[3] = puVar4[-1];
          }
          puVar8 = puVar4 + -4;
          puVar13 = puVar4;
          if (puVar4 < puVar8) {
            iVar3 = (int)puVar8 - (int)puVar4;
            if (0 < iVar3) {
              if (iVar3 * 0x8000000 < 0) {
                puVar8 = puVar4 + -8;
                puVar13 = puVar4 + -4;
                *puVar13 = *puVar8;
                puVar4[-3] = puVar4[-7];
                puVar4[-2] = puVar4[-6];
                puVar4[-1] = puVar4[-5];
              }
              for (iVar3 = iVar3 >> 5; iVar3 != 0; iVar3 = iVar3 + -1) {
                uVar11 = puVar8[-3];
                uVar12 = puVar8[-2];
                uVar16 = puVar8[-1];
                puVar13[-4] = puVar8[-4];
                puVar13[-3] = uVar11;
                puVar13[-2] = uVar12;
                puVar13[-1] = uVar16;
                uVar11 = puVar8[-7];
                uVar12 = puVar8[-6];
                uVar16 = puVar8[-5];
                puVar13[-8] = puVar8[-8];
                puVar13[-7] = uVar11;
                puVar13[-6] = uVar12;
                puVar13[-5] = uVar16;
                puVar8 = puVar8 + -8;
                puVar13 = puVar13 + -8;
              }
            }
          }
          else {
            while (puVar4 != puVar8) {
              uVar11 = puVar8[-3];
              uVar12 = puVar8[-2];
              uVar16 = puVar8[-1];
              puVar13[-4] = puVar8[-4];
              puVar13[-3] = uVar11;
              puVar13[-2] = uVar12;
              puVar13[-1] = uVar16;
              puVar13 = puVar13 + -4;
              puVar8 = puVar8 + -4;
            }
          }
          uVar11 = puVar5[1];
          uVar12 = puVar5[2];
          uVar16 = puVar5[3];
          *puVar4 = *puVar5;
          puVar4[1] = uVar11;
          puVar4[2] = uVar12;
          puVar4[3] = uVar16;
        }
        else {
          uVar10 = uVar7 + (uVar7 >> 1) + (uVar7 >> 3);
          if (uVar10 < uVar7 + 0x20) {
            uVar10 = uVar7 + 0x20;
          }
          puVar6 = (undefined4 *)fn_00100fc6(uVar10 << 4,0);
          puVar13 = puVar6;
          for (puVar8 = (undefined4 *)*puVar14; puVar8 != puVar4; puVar8 = puVar8 + 4) {
            if (puVar13 != (undefined4 *)0x0) {
              uVar11 = puVar8[1];
              uVar12 = puVar8[2];
              uVar16 = puVar8[3];
              *puVar13 = *puVar8;
              puVar13[1] = uVar11;
              puVar13[2] = uVar12;
              puVar13[3] = uVar16;
            }
            puVar13 = puVar13 + 4;
          }
          puVar8 = (undefined4 *)(((int)puVar4 - *puVar14 & 0xfffffff0) + (int)puVar6);
          if (puVar8 != (undefined4 *)0x0) {
            uVar11 = puVar5[1];
            uVar12 = puVar5[2];
            uVar16 = puVar5[3];
            *puVar8 = *puVar5;
            puVar8[1] = uVar11;
            puVar8[2] = uVar12;
            puVar8[3] = uVar16;
          }
          puVar8 = (undefined4 *)param_1[0x3e];
          puVar5 = (undefined4 *)(((int)puVar4 - *puVar14 & 0xfffffff0) + (int)puVar6);
          for (; puVar4 != puVar8; puVar4 = puVar4 + 4) {
            puVar13 = puVar5 + 4;
            if (puVar13 != (undefined4 *)0x0) {
              uVar11 = puVar4[1];
              uVar12 = puVar4[2];
              uVar16 = puVar4[3];
              *puVar13 = *puVar4;
              puVar5[5] = uVar11;
              puVar5[6] = uVar12;
              puVar5[7] = uVar16;
            }
            puVar5 = puVar13;
          }
          uVar2 = *puVar14;
          uVar9 = param_1[0x3e];
          uVar7 = uVar2;
          if (uVar9 < uVar2) {
            do {
              uVar7 = uVar7 + 0x10;
            } while (uVar7 != uVar9);
          }
          fn_001008c4(uVar2,(int)(param_1[0x3f] - uVar2) >> 4);
          *puVar14 = (uint)puVar6;
          param_1[0x3e] = (int)(puVar6 + ((int)(uVar9 - uVar2) >> 4) * 4 + 4);
          param_1[0x3f] = (int)(puVar6 + uVar10 * 4);
        }
      }
      else {
        param_1[0x3e] = (int)(puVar4 + 4);
        if (puVar4 != (undefined4 *)0x0) {
          uVar11 = puVar5[1];
          uVar12 = puVar5[2];
          uVar16 = puVar5[3];
          *puVar4 = *puVar5;
          puVar4[1] = uVar11;
          puVar4[2] = uVar12;
          puVar4[3] = uVar16;
        }
      }
      iVar15 = iVar15 + 1;
      iVar3 = fn_006c78d8(param_1[0x39]);
    } while (iVar15 < iVar3);
  }
  fn_0022e7e8(param_1 + 0x3d,(&DAT_007c6de8)[param_1[0x3b] * 2]);
  if ((&DAT_007c6de8)[param_1[0x3b] * 2] != '\x02') {
    fn_002e5484(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x002e6634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x124))(param_1);
  return;
}


