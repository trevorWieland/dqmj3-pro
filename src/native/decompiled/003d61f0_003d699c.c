#include "003d61f0_003d699c.h"



void fn_003d699c(int param_1,int param_2)

{
  int iVar1;
  undefined2 *puVar2;
  int iVar3;
  uint uVar4;
  
  fn_0079e608(param_2);
  uVar4 = 0;
  iVar1 = *(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x3c);
  iVar3 = iVar1 >> 0x1f;
  if (iVar1 / 0x430 + iVar3 != iVar3) {
    do {
      iVar3 = *(int *)(param_1 + 0x3c);
      puVar2 = *(undefined2 **)(param_2 + 4);
      if (puVar2 == *(undefined2 **)(param_2 + 8)) {
        fn_0079e460();
      }
      else {
        *(undefined2 **)(param_2 + 4) = puVar2 + 1;
        if (puVar2 != (undefined2 *)0x0) {
          *puVar2 = *(undefined2 *)(iVar3 + uVar4 * 0x430);
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uint)((*(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x3c)) / 0x430));
  }
  return;
}



int fn_003d686c(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int unaff_r4;
  uint uVar3;
  int iVar4;
  
  if (100 < param_3) {
    param_3 = 100;
  }
  uVar3 = *(uint *)(param_1 + 0x1c);
  if ((int)uVar3 < 1) {
    uVar2 = 0;
  }
  else {
    uVar2 = uVar3 & 1;
    if (uVar2 != 0) {
      unaff_r4 = *(int *)(param_1 + 0x2c);
    }
    iVar4 = 0;
    if (uVar2 != 0) {
      do {
        if (*(short *)(unaff_r4 + iVar4 * 0x2a) == param_2) {
          return (int)*(short *)(unaff_r4 + iVar4 * 0x2a + ((param_3 + -1) / 5) * 2 + 2);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)uVar2);
    }
  }
  if ((int)uVar2 < (int)uVar3) {
    iVar4 = *(int *)(param_1 + 0x2c);
    do {
      if (*(short *)(iVar4 + uVar2 * 0x2a) == param_2) {
        iVar1 = ((param_3 + -1) / 5) * 2 + 2;
LAB_003d6974:
        return (int)*(short *)(iVar4 + uVar2 * 0x2a + iVar1);
      }
      if (*(short *)(iVar4 + uVar2 * 0x2a + 0x2a) == param_2) {
        iVar1 = ((param_3 + -1) / 5) * 2 + 0x2c;
        goto LAB_003d6974;
      }
      uVar2 = uVar2 + 2;
    } while ((int)uVar2 < (int)uVar3);
  }
  return 0;
}



void fn_003d61f0(undefined4 param_1,short *param_2,int *param_3,undefined4 param_4,uint param_5,
                 int param_6,int param_7,uint param_8)

{
  uint uVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  short *psVar9;
  short **ppsVar10;
  short **ppsVar11;
  short *psVar12;
  short *psVar13;
  short **ppsVar14;
  uint uVar15;
  short *psVar16;
  uint uVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  uint in_fpscr;
  float fVar21;
  float fVar22;
  undefined8 uVar23;
  short *local_8c;
  short *local_88;
  short *local_84;
  int local_80;
  short *local_7c;
  short *local_78;
  short *local_74;
  short local_70 [4];
  short *local_68;
  short *local_64;
  short *local_60;
  short local_5c [2];
  int local_58;
  int local_54;
  short local_44 [2];
  undefined2 local_40 [6];
  undefined4 local_34;
  short *psStack_30;
  int *piStack_2c;
  undefined4 uStack_28;
  
  iVar5 = (int)(short)param_4;
  local_64 = (short *)0x0;
  local_60 = (short *)0x0;
  local_68 = (short *)0x0;
  local_8c = (short *)0x0;
  local_88 = (short *)0x0;
  local_84 = (short *)0x0;
  local_7c = (short *)0x0;
  local_78 = (short *)0x0;
  local_74 = (short *)0x0;
  local_34 = param_1;
  psStack_30 = param_2;
  piStack_2c = param_3;
  uStack_28 = param_4;
  iVar6 = fn_0066173c();
  bVar19 = param_6 != 0;
  iVar8 = 0;
  if (bVar19) {
    iVar8 = iVar6 + -2;
  }
  bVar20 = iVar6 != 2;
  bVar18 = bVar19 && SBORROW4(iVar6,2);
  *(char *)(param_2 + 0x2c) = (char)param_5;
  *(char *)((int)param_2 + 0x59) = (char)iVar6;
  if ((bVar19 && bVar20) && iVar8 < 0 == bVar18) {
    iVar6 = 2;
  }
  *param_2 = (short)param_4;
  if ((bVar19 && bVar20) && iVar8 < 0 == bVar18) {
    *(char *)((int)param_2 + 0x59) = (char)iVar6;
  }
  psVar13 = (short *)(int)*(char *)((int)param_2 + 0x59);
  fn_002377a0(&local_7c,iVar5,psVar13,param_5 & 0xff,param_8 ^ 1);
  local_40[0] = fn_006617a8(iVar5);
  fn_0079e764(param_3,local_40);
  if (param_8 == 0) {
    iVar8 = 0;
    if (0 < *(int *)(*(char *)((int)param_2 + 0x59) * 4 + 0x89125c) + -1) {
      do {
        do {
          do {
            do {
              fn_0068f7e4();
              sVar4 = fn_00163868();
              psVar16 = (short *)(int)sVar4;
            } while (psVar16 == (short *)0x0);
            iVar6 = fn_0068f818(psVar16);
          } while ((iVar6 == 0) || (iVar6 = fn_0068f654(psVar16), iVar6 == 0));
          psVar12 = (short *)param_3[1];
          psVar9 = (short *)*param_3;
          while( true ) {
            if (psVar9 != psVar12) {
              psVar13 = (short *)(int)*psVar9;
            }
            if (psVar9 == psVar12 || psVar13 == psVar16) break;
            psVar9 = psVar9 + 1;
          }
        } while (psVar9 != psVar12);
        local_5c[0] = sVar4;
        if (param_3[1] == param_3[2]) {
          psVar13 = local_5c;
          fn_0079e460(param_3,psVar12);
        }
        else {
          psVar13 = psVar12 + 1;
          param_3[1] = (int)psVar13;
          if (psVar12 != (short *)0x0) {
            *psVar12 = sVar4;
          }
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < *(int *)(*(char *)((int)param_2 + 0x59) * 4 + 0x89125c) + -1);
    }
  }
  else {
    uVar7 = fn_00661714(iVar5);
    uVar3 = fn_006c9598(local_34,uVar7,param_3,param_8,1);
    local_80 = CONCAT22(((unsigned int)(local_80) >> 16) & 0xffff,uVar3);
    fn_0079e764(param_3,&local_80);
    iVar8 = fn_00163868(100);
    if (iVar8 < 0x19) {
      uVar7 = fn_00661714(iVar5);
      local_70[0] = fn_006c9598(local_34,uVar7,param_3,param_8,0);
      fn_0079e764(param_3,local_70);
    }
  }
  iVar8 = 0;
  uVar17 = 1;
  local_80 = (int)(short)(param_3[1] - *param_3 >> 1);
  uVar15 = (uint)*(byte *)(param_2 + 0x2c);
  bVar19 = 0x77 < uVar15;
  if (uVar15 < 0x79) {
    bVar19 = uVar15 != 0;
    uVar1 = uVar15;
  }
  else {
    uVar1 = 0x78;
  }
  if (bVar19) {
    do {
      iVar6 = fn_00388758(uVar17);
      uVar17 = uVar17 + 1 & 0xff;
      iVar8 = iVar8 + iVar6;
    } while (uVar17 <= uVar1);
  }
  iVar8 = (param_3[1] - *param_3 >> 1) * iVar8;
  fVar21 = (float)VectorSignedToFloat(iVar8,(byte)(in_fpscr >> 0x16) & 3);
  fVar21 = fVar21 * 0.2 * 3.0;
  fn_006f9f20(iVar8);
  iVar8 = (int)(short)(int)fVar21;
  if (100 < uVar15) {
    fVar21 = (float)VectorSignedToFloat(uVar15 - 100,(byte)(in_fpscr >> 0x16) & 3);
    fVar22 = (float)VectorSignedToFloat(iVar8,(byte)(in_fpscr >> 0x16) & 3);
    iVar8 = (int)((fVar21 * 0.01 + 1.0) * fVar22);
  }
  uVar23 = fn_00300f74(iVar8,local_80);
  iVar8 = 0;
  if (0 < local_80) {
    do {
      local_58 = (int)((ulonglong)uVar23 >> 0x20);
      local_54 = (int)uVar23;
      uVar15 = local_54 + (uint)(iVar8 < local_58) & 0xffff;
      uVar17 = fn_0068f6a8((int)*(short *)(*param_3 + iVar8 * 2));
      if (uVar17 < uVar15) {
        uVar15 = uVar17;
      }
      iVar6 = fn_0068f708((int)*(short *)(*param_3 + iVar8 * 2),uVar15);
      ppsVar14 = &local_64;
      local_5c[0] = (short)iVar6;
      if (local_64 == local_60) {
        fn_0079e460(&local_68,local_64,local_5c);
        psVar13 = local_64;
      }
      else {
        psVar13 = local_64 + 1;
        if (local_64 != (short *)0x0) {
          *local_64 = local_5c[0];
        }
      }
      local_64 = psVar13;
      uVar15 = 1;
      if (0 < iVar6) {
        do {
          ppsVar10 = (short **)fn_0068f7c4((int)*(short *)(*param_3 + iVar8 * 2),uVar15 & 0xff);
          ppsVar11 = (short **)fn_0068f7f8((int)*(short *)(*param_3 + iVar8 * 2),uVar15 & 0xff);
          psVar13 = local_88;
          if (ppsVar10 != (short **)0x0) {
            psVar16 = local_8c;
            while( true ) {
              if (psVar16 != local_88) {
                ppsVar14 = (short **)(int)*psVar16;
              }
              if (psVar16 == local_88 || ppsVar14 == ppsVar10) break;
              psVar16 = psVar16 + 1;
            }
            if (local_88 == psVar16) {
              local_44[0] = (short)ppsVar10;
              if (local_88 == local_84) {
                fn_0079e460(&local_8c,local_88,local_44);
                psVar13 = local_88;
              }
              else {
                psVar13 = local_88 + 1;
                if (local_88 != (short *)0x0) {
                  *local_88 = local_44[0];
                }
              }
            }
          }
          local_88 = psVar13;
          psVar13 = local_78;
          if (ppsVar11 != (short **)0x0) {
            psVar16 = local_7c;
            while( true ) {
              if (psVar16 != local_78) {
                ppsVar14 = (short **)(int)*psVar16;
              }
              if (psVar16 == local_78 || ppsVar14 == ppsVar11) break;
              psVar16 = psVar16 + 1;
            }
            if (local_78 == psVar16) {
              local_70[0] = (short)ppsVar11;
              if (local_78 == local_74) {
                fn_0079e460(&local_7c,local_78,local_70);
                psVar13 = local_78;
              }
              else {
                psVar13 = local_78 + 1;
                if (local_78 != (short *)0x0) {
                  *local_78 = local_70[0];
                }
              }
            }
          }
          local_78 = psVar13;
          uVar15 = uVar15 + 1;
        } while ((int)uVar15 <= iVar6);
      }
      uVar23 = CONCAT44(local_58,local_54);
      iVar8 = iVar8 + 1;
    } while (iVar8 < local_80);
  }
  for (uVar15 = 0; ((int)uVar15 < (int)local_78 - (int)local_7c >> 1 && (uVar15 < 0x4c));
      uVar15 = uVar15 + 1) {
    param_2[uVar15 + 0x142] = local_7c[uVar15];
  }
  uVar15 = (int)local_88 - (int)local_8c >> 1;
  param_2[0x92] = 1;
  uVar17 = (uint)(0 < (int)uVar15);
  if ((0 < (int)uVar15) && (uVar17 = uVar15 & 1, uVar17 != 0)) {
    param_2[0x93] = *local_8c;
  }
  for (; (int)uVar17 < (int)uVar15; uVar17 = uVar17 + 2) {
    param_2[uVar17 + 0x93] = local_8c[uVar17];
    param_2[uVar17 + 0x94] = local_8c[uVar17 + 1];
  }
  *(char *)(param_2 + 0x90) = (char)uVar15 + '\x01';
  uVar15 = 1;
  do {
    local_58 = (int)((ulonglong)uVar23 >> 0x20);
    local_54 = (int)uVar23;
    uVar7 = fn_002376f0(param_5,param_8 ^ 1);
    uVar7 = fn_00661430(iVar5,uVar15,uVar7);
    uVar2 = fn_001f89d8(uVar15 & 0xff,uVar7,param_2 + 0x142,0x4c);
    uVar23 = CONCAT44(local_58,local_54);
    uVar17 = uVar15 + 1;
    *(undefined1 *)((int)param_2 + uVar15 + 0x3a4) = uVar2;
    uVar15 = uVar17;
  } while ((int)uVar17 < 0x1a);
  if (param_7 != 0) {
    *(undefined1 *)((int)param_2 + 0x3b7) = 5;
    *(undefined1 *)(param_2 + 0x1dc) = 5;
    *(undefined1 *)((int)param_2 + 0x3b9) = 5;
    *(undefined1 *)(param_2 + 0x1dd) = 5;
    *(undefined1 *)((int)param_2 + 0x3bb) = 5;
    *(undefined1 *)(param_2 + 0x1de) = 5;
    *(undefined1 *)((int)param_2 + 0x3bd) = 5;
  }
  fn_003d5998(local_34,param_2,param_7,param_8);
  psVar13 = local_7c;
  if (local_78 < local_7c) {
    do {
      psVar13 = psVar13 + 1;
    } while (psVar13 != local_78);
  }
  fn_001008c4(local_7c,(int)local_74 - (int)local_7c >> 1,0);
  psVar13 = local_8c;
  if (local_88 < local_8c) {
    do {
      psVar13 = psVar13 + 1;
    } while (psVar13 != local_88);
  }
  fn_001008c4(local_8c,(int)local_84 - (int)local_8c >> 1,0);
  psVar13 = local_68;
  if (local_64 < local_68) {
    do {
      psVar13 = psVar13 + 1;
    } while (psVar13 != local_64);
  }
  fn_001008c4(local_68,(int)local_60 - (int)local_68 >> 1,0);
  return;
}


