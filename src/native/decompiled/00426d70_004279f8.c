#include "00426d70_004279f8.h"



void fn_004279f8(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  bool bVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 0x14) + 0x60))();
  if (((iVar1 != 0) && (iVar1 = fn_006a9938(*(undefined4 *)(param_1 + 0x14)), iVar1 == 0)) &&
     (iVar1 = fn_006a99b0(*(undefined4 *)(param_1 + 0x14)), iVar1 == 0)) {
    (**(code **)(**(int **)(param_1 + 0x14) + 0x40))(*(int **)(param_1 + 0x14),1);
  }
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == 4) {
    (**(code **)(**(int **)(param_1 + 0x14) + 0x44))
              (*(int **)(param_1 + 0x14),*(undefined1 *)(param_1 + 0x58),4,0);
    uVar4 = fn_002161d4(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x5c),0,1);
    *(undefined4 *)(param_1 + 0xc) = 5;
    *(undefined4 *)(param_1 + 100) = uVar4;
  }
  else if (iVar1 == 5) {
    uVar2 = *(int *)(param_1 + 0x18) + 1;
    *(uint *)(param_1 + 0x18) = uVar2;
    if (uVar2 < 0x65) {
      fn_001da640(*(undefined4 *)(param_1 + 0x14));
    }
    else {
      fn_001da640(*(undefined4 *)(param_1 + 0x14));
    }
    VectorUnsignedToFloat(*(undefined4 *)(param_1 + 0x18),(byte)(in_fpscr >> 0x16) & 3);
    (**(code **)(**(int **)(param_1 + 0x14) + 0x20))();
    if (0x95 < *(uint *)(param_1 + 0x18)) {
      (**(code **)(**(int **)(DAT_008977e0 + 0x2c) + 0xc))
                (*(int **)(DAT_008977e0 + 0x2c),*(undefined4 *)(param_1 + 100));
      *(undefined4 *)(param_1 + 0xc) = 6;
      *(undefined4 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 100) = 0xffffffff;
      return;
    }
  }
  else {
    if (iVar1 == 6) {
      fn_00215d9c(*(undefined4 *)(param_1 + 0x14),5,0,1);
      uVar4 = fn_0023ddec(*(undefined4 *)(DAT_008977e0 + 0x2c),*(undefined4 *)(param_1 + 0x60));
      *(undefined4 *)(param_1 + 0x68) = uVar4;
      fn_0023dd30(*(undefined4 *)(DAT_008977e0 + 0x2c),uVar4);
                    /* WARNING: Subroutine does not return */
      fn_001638a0();
    }
    if (iVar1 == 7) {
      iVar1 = fn_006f7a84(DAT_008977e0);
      uVar2 = fn_006f733c(DAT_008977e0);
      bVar7 = uVar2 == 0;
      if (bVar7) {
        uVar2 = (uint)*(byte *)(param_1 + 0x6c);
      }
      if ((bVar7 && uVar2 == 0) &&
         (*(char *)(iVar1 + 0x22d) != '\r' && *(char *)(iVar1 + 0x22d) != '\a')) {
        fVar11 = *(float *)(*(int *)(iVar1 + 0x100) + 0xc) + *(float *)(param_1 + 0x70) * 100.0;
        iVar3 = fn_006f7a84(DAT_008977e0);
        iVar6 = *(int *)(param_1 + 0x14);
        fVar9 = *(float *)(iVar3 + 0x20) - *(float *)(iVar6 + 0x20);
        fVar10 = *(float *)(iVar3 + 0x24) - *(float *)(iVar6 + 0x24);
        fVar8 = *(float *)(iVar3 + 0x28) - *(float *)(iVar6 + 0x28);
        if (fVar9 * fVar9 + fVar10 * fVar10 + fVar8 * fVar8 <= fVar11 * fVar11) {
          *(undefined1 *)(param_1 + 0x6c) = 1;
          uVar4 = fn_006945fc(DAT_008977e0,(char *)&DAT_00427dc8);
          uVar5 = fn_006f75ac(DAT_008977e0);
          fn_0038fee8(uVar5,uVar4);
          uVar4 = fn_006f75ac(DAT_008977e0);
          fn_0038ff40(uVar4,0,1,1,0);
          fn_0028ae08(*(undefined4 *)(DAT_00897804 + 0xc));
          fn_006f72b4(DAT_008977e0);
          fn_0021db00();
          fn_006f7984(DAT_008977e0);
          iVar3 = fn_006ccf88();
          if (iVar3 == 0) {
            iVar3 = fn_006aab38(iVar1);
            if (iVar3 == 0) {
              fn_001de754(iVar1);
            }
            else {
              fn_006f72f4(DAT_008977e0);
            }
          }
        }
      }
      uVar2 = *(int *)(param_1 + 0x18) + 1;
      *(uint *)(param_1 + 0x18) = uVar2;
      if (9 < uVar2) {
        (**(code **)(**(int **)(param_1 + 0x14) + 0x1c4))(*(int **)(param_1 + 0x14),1);
        (**(code **)(**(int **)(param_1 + 0x14) + 0x54))(*(int **)(param_1 + 0x14),0);
        *(undefined1 *)(*(int *)(param_1 + 0x14) + 4) = 0;
        *(undefined4 *)(param_1 + 0xc) = 2;
        return;
      }
    }
  }
  return;
}



undefined4 fn_004278d4(int *param_1,int param_2)

{
  int *piVar1;
  
  if (param_2 == 0) {
    piVar1 = (int *)param_1[5];
    if ((char)piVar1[0xdb] == '\0') {
      piVar1[0x4e] = piVar1[0x4e] | 0x40;
      (**(code **)(*(int *)param_1[5] + 0x188))((int *)param_1[5],1);
      param_1[6] = 0;
      *(undefined1 *)(param_1 + 0x1b) = 0;
      *(undefined1 *)(param_1[5] + 4) = 1;
      param_1[3] = 4;
    }
    else {
      param_1[3] = 2;
      (**(code **)(*piVar1 + 0x1dc))(piVar1,2,3,0);
    }
    param_1[0x1c] = *(int *)(param_1[5] + 0x38);
  }
  else if (param_2 == 2) {
    (**(code **)(*param_1 + 0x14))(param_1);
  }
  else if (param_2 == 1) {
    (**(code **)(*param_1 + 0x10))(param_1);
  }
  return 1;
}



undefined4 * fn_00427790(undefined4 param_1,undefined4 param_2,short *param_3)

{
  undefined4 *puVar1;
  short *psVar2;
  
  puVar1 = (undefined4 *)fn_002fdf94(param_1,param_2,0x11);
  puVar1[0x17] = 0;
  puVar1[0x1a] = 0xffffffff;
  *puVar1 = &DAT_0083b3f0;
  psVar2 = (short *)fn_001287d4(10,&DAT_00812c8c);
  puVar1[0x16] = psVar2;
  *psVar2 = *param_3;
  if (*param_3 != 0) {
    puVar1[0x17] = puVar1[0x17] + 1;
  }
  *(short *)(puVar1[0x16] + 2) = param_3[1];
  if (param_3[1] != 0) {
    puVar1[0x17] = puVar1[0x17] + 1;
  }
  *(short *)(puVar1[0x16] + 4) = param_3[2];
  if (param_3[2] != 0) {
    puVar1[0x17] = puVar1[0x17] + 1;
  }
  *(short *)(puVar1[0x16] + 6) = param_3[3];
  if (param_3[3] != 0) {
    puVar1[0x17] = puVar1[0x17] + 1;
  }
  *(short *)(puVar1[0x16] + 8) = param_3[4];
  if (param_3[4] != 0) {
    puVar1[0x17] = puVar1[0x17] + 1;
  }
  *(char *)(puVar1 + 0x18) = (char)param_3[5];
  puVar1[0x19] = *(undefined4 *)(param_3 + 6);
  return puVar1;
}



/* WARNING: Removing unreachable block (ram,0x00427524) */
/* WARNING: Removing unreachable block (ram,0x0042753c) */
/* WARNING: Removing unreachable block (ram,0x00427460) */

void fn_0042738c(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint in_fpscr;
  uint uVar6;
  float fVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar19;
  undefined8 uVar18;
  undefined8 uVar20;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  float local_90;
  float local_8c;
  float local_88;
  float local_80;
  float local_7c;
  float local_78;
  float local_70;
  float local_6c;
  float fStack_68;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == 4) {
    (**(code **)(**(int **)(param_1 + 0x14) + 0x44))
              (*(int **)(param_1 + 0x14),*(undefined1 *)(param_1 + 0x60),4,0);
    uVar3 = 5;
  }
  else if (iVar1 == 5) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x14) + 0x48))();
    if (iVar1 == 0) {
      return;
    }
    uVar3 = fn_0023ddec(*(undefined4 *)(DAT_008977e0 + 0x2c),*(undefined4 *)(param_1 + 100));
    *(undefined4 *)(param_1 + 0x68) = uVar3;
    *(undefined1 *)(*(int *)(param_1 + 0x14) + 4) = 1;
    fn_00215d9c(*(undefined4 *)(param_1 + 0x14),0xf,1,1);
    uVar3 = 6;
  }
  else {
    fVar16 = 0.0;
    if (iVar1 == 6) {
      if (*(float *)(*(int *)(param_1 + 0x14) + 0xf8) != 0.0) {
        return;
      }
      uVar3 = 7;
    }
    else {
      if (iVar1 != 7) {
        return;
      }
      fVar17 = *(float *)(*(int *)(*(int *)(param_1 + 0x14) + 0x100) + 0xc);
      iVar1 = (int)*(uint *)(param_1 + 0x5c) / 2;
      if ((*(uint *)(param_1 + 0x5c) & 1) == 0) {
        fVar7 = (float)VectorSignedToFloat(iVar1 * 3,(byte)(in_fpscr >> 0x16) & 3);
        fVar7 = 1.75 - fVar7;
      }
      else {
        fVar7 = (float)VectorSignedToFloat(iVar1 * -3,(byte)(in_fpscr >> 0x16) & 3);
      }
      uVar20 = 0;
      fVar19 = *(float *)(*(int *)(param_1 + 0x14) + 0x30);
      uVar18 = CONCAT44(fVar19,fVar7 * fVar17);
      fVar19 = fVar19 * 40.743664;
      uVar6 = in_fpscr & 0xfffffff;
      for (fVar7 = ABS(fVar19); 0x477fffff < (int)fVar7; fVar7 = fVar7 - 65536.0) {
      }
      uVar8 = VectorFloatToUnsigned(0,3);
      uVar9 = VectorFloatToUnsigned(fVar7,3);
      uVar10 = VectorFloatToUnsigned(0,3);
      uVar5 = uVar9 & 0xff;
      uVar4 = uVar8 & 0xff;
      fVar15 = (float)VectorUnsignedToFloat(uVar8 & 0xffff,(byte)(uVar6 >> 0x16) & 3);
      fVar13 = (float)VectorUnsignedToFloat(uVar9 & 0xffff,(byte)(uVar6 >> 0x16) & 3);
      uVar8 = uVar10 & 0xff;
      fVar11 = (float)VectorUnsignedToFloat(uVar10 & 0xffff,(byte)(uVar6 >> 0x16) & 3);
      fVar12 = (float)(&DAT_007d6f20)[uVar4 * 4] +
               (0.0 - fVar15) * (float)(&DAT_007d6f28)[uVar4 * 4];
      fVar14 = (float)(&DAT_007d6f24)[uVar4 * 4] +
               (0.0 - fVar15) * (float)(&DAT_007d6f2c)[uVar4 * 4];
      fVar15 = (float)(&DAT_007d6f20)[uVar5 * 4] +
               (fVar7 - fVar13) * (float)(&DAT_007d6f28)[uVar5 * 4];
      fStack_68 = (float)(&DAT_007d6f24)[uVar5 * 4] +
                  (fVar7 - fVar13) * (float)(&DAT_007d6f2c)[uVar5 * 4];
      fVar7 = (float)(&DAT_007d6f20)[uVar8 * 4] + (0.0 - fVar11) * (float)(&DAT_007d6f28)[uVar8 * 4]
      ;
      fVar11 = (float)(&DAT_007d6f24)[uVar8 * 4] +
               (0.0 - fVar11) * (float)(&DAT_007d6f2c)[uVar8 * 4];
      if (fVar19 < 0.0) {
        fVar15 = -fVar15;
      }
      local_90 = fVar11 * fStack_68;
      local_80 = fVar7 * fStack_68;
      local_6c = fVar12 * fStack_68;
      fStack_68 = fVar14 * fStack_68;
      local_70 = -fVar15;
      local_88 = fVar12 * fVar7 + fVar14 * fVar11 * fVar15;
      local_7c = fVar14 * fVar11 + fVar12 * fVar7 * fVar15;
      local_8c = fVar12 * fVar11 * fVar15 - fVar14 * fVar7;
      local_78 = fVar14 * fVar7 * fVar15 - fVar12 * fVar11;
      iVar1 = 0;
      fVar7 = fVar16;
      if (0 < *(int *)(param_1 + 0x5c)) {
        do {
          if (*(short *)(*(int *)(param_1 + 0x58) + iVar1 * 2) != 0) {
            local_b8 = fVar16 + fVar7;
            fVar19 = (float)VectorSignedToFloat(iVar1 * 3,(byte)(uVar6 >> 0x16) & 3);
            local_bc = (float)uVar20 + fVar7;
            local_c0 = (float)uVar18 + fVar19 * fVar17;
            fn_0016947c(&local_c0,&local_90);
            iVar2 = *(int *)(param_1 + 0x14);
            fStack_a8 = local_b8 + *(float *)(iVar2 + 0x28);
            local_b0 = local_c0 + *(float *)(iVar2 + 0x20);
            fStack_ac = local_bc + *(float *)(iVar2 + 0x24);
            uVar3 = fn_002fdd54(param_1,(int)*(short *)(*(int *)(param_1 + 0x58) + iVar1 * 2),
                                 &local_b0,0);
            fn_00215aec(uVar3,5);
          }
          iVar1 = iVar1 + 1;
        } while (iVar1 < *(int *)(param_1 + 0x5c));
      }
      (**(code **)(**(int **)(param_1 + 0x14) + 0x1c4))(*(int **)(param_1 + 0x14),1);
      (**(code **)(**(int **)(param_1 + 0x14) + 0x54))(*(int **)(param_1 + 0x14),0);
      *(undefined1 *)(*(int *)(param_1 + 0x14) + 4) = 0;
      uVar3 = 2;
    }
  }
  *(undefined4 *)(param_1 + 0xc) = uVar3;
  return;
}



void fn_00426d70(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  ushort *puVar4;
  int iVar5;
  short *psVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *unaff_r8;
  undefined4 local_20;
  
  local_20 = param_4;
  fn_002c3e78();
  iVar3 = fn_006e8d10(*(undefined4 *)(param_1 + 0xf8));
  puVar8 = (undefined4 *)0x0;
  if (0 < iVar3) {
    do {
      puVar4 = (ushort *)fn_006e8d04(*(undefined4 *)(param_1 + 0xf8),puVar8);
      uVar1 = *puVar4;
      uVar2 = puVar4[1];
      iVar5 = fn_006ba284(param_1);
      unaff_r8 = (undefined4 *)(uint)uVar1;
      if (iVar5 < 1) {
        fn_00231410(&local_20,(int)(short)uVar1,uVar2);
        fn_0031b78c(param_1,puVar8,0,local_20);
        iVar5 = fn_006ba284(param_1);
        if (iVar5 < 1) {
          fn_002c3df8(param_1,puVar8,4,uVar2);
        }
        fn_001588d4(&local_20);
        unaff_r8 = puVar8;
      }
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    } while ((int)puVar8 < iVar3);
  }
  iVar5 = fn_006e8d10(*(undefined4 *)(param_1 + 0xf8));
  if (0 < iVar5) {
    unaff_r8 = &DAT_00891cc4;
  }
  iVar9 = 0;
  if (0 < iVar5) {
    do {
      if (*(int *)(param_1 + 0x100) == iVar9) {
LAB_00426ea0:
        local_20 = unaff_r8[5];
        fn_002c37e0(param_1,iVar9,&local_20);
      }
      else {
        if (*(short *)(*(int *)(param_1 + 0xf8) + 0x4a) != 0) {
          psVar6 = (short *)fn_006e8d04(*(undefined4 *)(param_1 + 0xf8),iVar9);
          uVar7 = fn_0068f6a8((int)*psVar6);
          if ((ushort)psVar6[1] < uVar7) goto LAB_00426ea0;
        }
        local_20 = unaff_r8[7];
        fn_002c37e0(param_1,iVar9,&local_20);
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < iVar5);
  }
  *(int *)(param_1 + 0x100) = iVar3;
  return;
}


