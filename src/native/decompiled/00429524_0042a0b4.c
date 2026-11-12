#include "00429524_0042a0b4.h"



undefined4 * fn_0042a0b4(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 unaff_r4;
  
  iVar1 = fn_00145b00(200,&DAT_00812c8c);
  if (iVar1 == 0) {
    return (undefined4 *)0x0;
  }
  puVar2 = (undefined4 *)fn_003f59d0(iVar1,param_1);
  *puVar2 = &DAT_0083b650;
  puVar3 = (undefined4 *)fn_001f74d8(puVar2,0x32);
  if (puVar3 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)(**(code **)*puVar3)(puVar3);
    do {
      if (puVar4 == &DAT_00895ad8) goto LAB_0042a5e4;
      puVar4 = (undefined4 *)*puVar4;
    } while (puVar4 != (undefined4 *)0x0);
  }
  puVar3 = (undefined4 *)0x0;
LAB_0042a5e4:
  puVar2[0x31] = puVar3;
  fn_00689efc(puVar2,0x32,0,0,unaff_r4);
  return puVar2;
}



int fn_00429c10(int param_1)

{
  short sVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  short *psVar6;
  short *psVar7;
  short *psVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  short *psVar13;
  undefined4 *puVar14;
  uint *puVar15;
  
  iVar12 = 1;
  puVar14 = *(undefined4 **)(param_1 + 0x18);
  if (puVar14 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar14)(puVar14);
    do {
      if (puVar2 == &DAT_0089292c) goto LAB_00429c58;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar14 = (undefined4 *)0x0;
LAB_00429c58:
  iVar3 = fn_0037c270(puVar14[3]);
  uVar10 = *(uint *)(param_1 + 0xb4);
  uVar11 = *(uint *)(param_1 + 0xb8);
  if (uVar10 != uVar11) {
    uVar4 = uVar10;
    if (uVar11 <= uVar10) {
      do {
        uVar4 = uVar4 + 2;
      } while (uVar4 != uVar11);
    }
    *(uint *)(param_1 + 0xb8) = uVar11 - (uVar11 - uVar10 & 0xfffffffe);
  }
  iVar5 = fn_006924e0();
  if (1 < iVar5) {
    do {
      sVar1 = (short)iVar12;
      iVar12 = fn_0028bc94();
      if (iVar12 == 0) goto LAB_00429f08;
      iVar12 = fn_00163a00((int)sVar1);
      if (iVar3 == 4) {
LAB_00429d20:
        if (iVar12 == iVar3) {
LAB_00429d54:
          psVar13 = *(short **)(param_1 + 0xb8);
          puVar15 = (uint *)(param_1 + 0xb4);
          if (psVar13 == *(short **)(param_1 + 0xbc)) {
            uVar10 = (int)((int)psVar13 - *puVar15) >> 1;
            if (uVar10 < (uint)((int)((int)*(short **)(param_1 + 0xbc) - *puVar15) >> 1)) {
              *(short **)(param_1 + 0xb8) = psVar13 + 1;
              if (psVar13 != (short *)0x0) {
                *psVar13 = psVar13[-1];
              }
              psVar7 = psVar13 + -1;
              psVar8 = psVar13;
              if (psVar13 < psVar7) {
                iVar12 = (int)psVar7 - (int)psVar13;
                if (0 < iVar12) {
                  if (iVar12 * 0x40000000 < 0) {
                    psVar7 = psVar13 + -2;
                    psVar8 = psVar13 + -1;
                    *psVar8 = *psVar7;
                  }
                  for (iVar12 = iVar12 >> 2; iVar12 != 0; iVar12 = iVar12 + -1) {
                    psVar8[-1] = psVar7[-1];
                    psVar7 = psVar7 + -2;
                    psVar8 = psVar8 + -2;
                    *psVar8 = *psVar7;
                  }
                }
              }
              else {
                while (psVar13 != psVar7) {
                  psVar7 = psVar7 + -1;
                  psVar8[-1] = *psVar7;
                  psVar8 = psVar8 + -1;
                }
              }
              *psVar13 = sVar1;
            }
            else {
              uVar11 = uVar10 + (uVar10 >> 1) + (uVar10 >> 3);
              if (uVar11 < uVar10 + 0x20) {
                uVar11 = uVar10 + 0x20;
              }
              psVar6 = (short *)fn_00100fc6(uVar11 << 1,0);
              psVar8 = psVar6;
              for (psVar7 = (short *)*puVar15; psVar7 != psVar13; psVar7 = psVar7 + 1) {
                if (psVar8 != (short *)0x0) {
                  *psVar8 = *psVar7;
                }
                psVar8 = psVar8 + 1;
              }
              psVar7 = (short *)(((int)psVar13 - *puVar15 & 0xfffffffe) + (int)psVar6);
              if (psVar7 != (short *)0x0) {
                *psVar7 = sVar1;
              }
              psVar8 = *(short **)(param_1 + 0xb8);
              psVar7 = (short *)(((int)psVar13 - *puVar15 & 0xfffffffe) + (int)psVar6);
              for (; psVar13 != psVar8; psVar13 = psVar13 + 1) {
                psVar7 = psVar7 + 1;
                if (psVar7 != (short *)0x0) {
                  *psVar7 = *psVar13;
                }
              }
              uVar4 = *puVar15;
              uVar9 = *(uint *)(param_1 + 0xb8);
              uVar10 = uVar4;
              if (uVar9 < uVar4) {
                do {
                  uVar10 = uVar10 + 2;
                } while (uVar10 != uVar9);
              }
              fn_001008c4(uVar4,(int)(*(int *)(param_1 + 0xbc) - uVar4) >> 1,0);
              *(short **)(param_1 + 0xbc) = psVar6 + uVar11;
              *(short **)(param_1 + 0xb8) = psVar6 + ((int)(uVar9 - uVar4) >> 1) + 1;
              *puVar15 = (uint)psVar6;
            }
          }
          else {
            *(short **)(param_1 + 0xb8) = psVar13 + 1;
            if (psVar13 != (short *)0x0) {
              *psVar13 = sVar1;
            }
          }
        }
      }
      else {
        if (iVar3 < 5) {
          if ((iVar3 == 0) || ((iVar3 != 1 && iVar3 != 2) && iVar3 != 3)) goto LAB_00429d54;
          goto LAB_00429d20;
        }
        if (iVar3 == 5) goto LAB_00429d20;
        if (iVar3 == 8) {
          if ((iVar12 != 8 && iVar12 != 6) && iVar12 != 7) goto LAB_00429f08;
          goto LAB_00429d54;
        }
        if ((iVar3 != 99) || (iVar12 = fn_00242c6c((int)sVar1), iVar12 != 0)) goto LAB_00429d54;
      }
LAB_00429f08:
      iVar12 = (int)(short)(sVar1 + 1);
      iVar5 = fn_006924e0();
    } while (iVar12 < iVar5);
  }
  return *(int *)(param_1 + 0xb8) - *(int *)(param_1 + 0xb4) >> 1;
}



undefined4 * fn_00429a2c(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 unaff_r4;
  
  iVar1 = fn_00145b00(200,&DAT_00812c8c);
  if (iVar1 == 0) {
    return (undefined4 *)0x0;
  }
  puVar2 = (undefined4 *)fn_003f59d0(iVar1,param_1);
  *puVar2 = &DAT_0083b4ec;
  puVar2[0x31] = 0;
  puVar3 = (undefined4 *)fn_001f74d8(puVar2,0xea);
  if (puVar3 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)(**(code **)*puVar3)(puVar3);
    do {
      if (puVar4 == &DAT_00892b14) goto LAB_00429fec;
      puVar4 = (undefined4 *)*puVar4;
    } while (puVar4 != (undefined4 *)0x0);
  }
  puVar3 = (undefined4 *)0x0;
LAB_00429fec:
  puVar2[0x31] = puVar3;
  fn_00689efc(puVar2,0xea,0,0,unaff_r4);
  return puVar2;
}



void fn_004299bc(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(int *)(*(int *)(param_1 + 0x9c) + 0xcc) *
          (*(int *)(param_1 + 0x7c) - *(int *)(param_1 + 0x78) >> 2) + param_2;
  uVar1 = *(int *)(param_1 + 0xb8) - *(int *)(param_1 + 0xb4) >> 1;
  if (uVar1 <= uVar2) {
    fn_002ff628(9,&DAT_008c7674,&DAT_008c7674,uVar2,uVar1);
  }
  *(undefined2 *)(*(int *)(param_1 + 0xc4) + 0x1c) =
       *(undefined2 *)(*(int *)(param_1 + 0xb4) + uVar2 * 2);
  return;
}



void fn_0042983c(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[3];
  if ((*(char *)(param_1[5] + 0x59) != '\0') || (iVar1 == 7)) {
    if (iVar1 == 4) {
      (**(code **)(*param_1 + 0x20))(param_1);
    }
    else if (iVar1 == 5) {
      (**(code **)(*param_1 + 0x24))(param_1);
    }
    else {
      if (iVar1 != 6) {
        if (iVar1 == 7) {
                    /* WARNING: Could not recover jumptable at 0x00429890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*param_1 + 0x30))(param_1);
          return;
        }
        return;
      }
      (**(code **)(*param_1 + 0x28))(param_1);
    }
    iVar1 = param_1[0x1b];
    param_1[0x1b] = iVar1 + 1;
    if (9 < iVar1 + 1) {
      param_1[0x1b] = 0;
      iVar1 = (**(code **)(*param_1 + 0x34))(param_1);
      if (iVar1 == 0) {
        param_1[0x1a] = 0;
      }
      else {
        iVar1 = param_1[0x1a];
        param_1[0x1a] = iVar1 + 1;
        if (5 < iVar1 + 1) {
          (**(code **)(*param_1 + 0x2c))(param_1,7);
          (**(code **)(*(int *)param_1[5] + 0x188))((int *)param_1[5],1);
          param_1[0x1a] = 0;
        }
      }
    }
  }
  return;
}



void fn_00429770(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0x14);
  if (0x3e800000 < *(int *)(iVar1 + 0xf8)) {
    return;
  }
  iVar4 = (int)*(short *)(*(int *)(iVar1 + 0x19c) + 10);
  if ((iVar4 != 0) &&
     (piVar2 = (int *)fn_002fdd54(param_1,iVar4,iVar1 + 0x20,0), piVar2 != (int *)0x0)) {
    uVar3 = fn_003b1844(*(undefined4 *)(param_1 + 0x74));
    (**(code **)(*piVar2 + 0x1dc))(piVar2,1,uVar3,*(undefined4 *)(param_1 + 0x78));
    (**(code **)(*piVar2 + 0xd8))(piVar2);
    fn_00215aec(piVar2,10);
  }
  (**(code **)(**(int **)(param_1 + 0x14) + 0x54))(*(int **)(param_1 + 0x14),0);
  *(undefined1 *)(*(int *)(param_1 + 0x14) + 4) = 0;
                    /* WARNING: Could not recover jumptable at 0x0042982c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x14) + 0x1c4))(*(int **)(param_1 + 0x14),1);
  return;
}



undefined4 fn_004295dc(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  float *pfVar5;
  float in_s1;
  float fVar6;
  float fVar7;
  undefined1 auStack_318 [4];
  short local_314 [32];
  undefined4 local_2d4 [163];
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  
  fn_006bd414(param_1,*(undefined4 *)(param_1 + 0x14),(char *)&DAT_00429718);
  fVar7 = 0.0;
  fVar6 = -in_s1 - 3.0;
  fn_00101a1c(auStack_318,&DAT_005f4c78,0x48,10);
  iVar1 = *(int *)(param_1 + 0x14);
  pfVar5 = &local_48;
  local_48 = *(float *)(iVar1 + 0x20) + fVar7;
  local_40 = *(float *)(iVar1 + 0x28) + fVar7;
  local_44 = *(float *)(iVar1 + 0x24) + in_s1 + 1.0;
  local_3c = local_48 + fVar7;
  local_38 = local_44 + fVar6;
  local_34 = local_40 + fVar7;
  piVar2 = (int *)fn_006f7388(DAT_008977e0);
  iVar1 = (**(code **)(*piVar2 + 0x10))(piVar2,7,auStack_318,10,pfVar5,&local_3c,0);
  if (iVar1 != 0) {
    pfVar5 = (float *)0x0;
  }
  if (0 < iVar1) {
    do {
      uVar3 = fn_006f7388(DAT_008977e0);
      iVar4 = fn_006b4240(uVar3,local_2d4[(int)pfVar5 * 0x12]);
      if ((iVar4 != 0) &&
         (iVar4 = fn_006bab38(iVar4,(int)local_314[(int)pfVar5 * 0x24]),
         *(int *)(param_1 + 0x70) == iVar4)) {
        return 1;
      }
      pfVar5 = (float *)((int)pfVar5 + 1);
    } while ((int)pfVar5 < iVar1);
  }
  return 0;
}



void fn_00429524(int param_1,int param_2)

{
  if (param_2 == 4) {
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  else if (param_2 == 5 || param_2 == 6) {
    *(undefined4 *)(param_1 + 0x60) = 6;
  }
  else if (param_2 == 7) {
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined1 *)(*(int *)(param_1 + 0x14) + 4) = 1;
    fn_00215d9c(*(undefined4 *)(param_1 + 0x14),10,1,1);
    fn_0023ddec(*(undefined4 *)(DAT_008977e0 + 0x2c),0x7d0a);
    (**(code **)(**(int **)(param_1 + 0x14) + 0xe4))(*(int **)(param_1 + 0x14),0x10009df,0);
  }
  fn_003b1518(param_1,param_2);
  return;
}


