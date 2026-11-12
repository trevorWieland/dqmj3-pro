#include "002a51f8_002a54ac.h"



void fn_002a54ac(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int extraout_r1;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  bool bVar14;
  float in_s0;
  float fVar15;
  float fVar16;
  float fVar17;
  ulonglong uVar18;
  undefined1 auStack_9c [128];
  
  if (*(char *)(param_1 + 0xc) != '\0') {
    iVar1 = (**(code **)(**(int **)(DAT_008977e0 + 0x28) + 0x2c))();
    if (iVar1 != 0) {
      return;
    }
    fn_0033ceb4(*(undefined4 *)(param_1 + 0x1c),0);
    *(undefined1 *)(param_1 + 0xc) = 0;
  }
  iVar1 = fn_006c1658(*(undefined4 *)(param_1 + 0x1c));
  if ((iVar1 == 0) && (iVar1 = (**(code **)(**(int **)(DAT_008977e0 + 0x28) + 0x2c))(), iVar1 != 0))
  {
    fn_0033ceb4(*(undefined4 *)(param_1 + 0x1c),1);
    *(undefined1 *)(param_1 + 0xc) = 1;
    return;
  }
  if (*(char *)(DAT_008977e0 + 0x170) == '\0') {
    return;
  }
  iVar1 = fn_002a5800(param_1);
  if (iVar1 != 0) {
    fn_002a69bc(param_1);
    return;
  }
  if (*(char *)(*(int *)(param_1 + 0x14) + 0x14) == '\0') {
    fn_006a826c();
    fn_00318be8(*(undefined4 *)(*(int *)(DAT_008977e0 + 0x40) + 8),auStack_9c + 0x84);
  }
  piVar2 = *(int **)(param_1 + 0x1c);
  puVar9 = (undefined4 *)piVar2[8];
  fn_001c93c8(*puVar9);
  fVar16 = 1.0;
  if (puVar9[3] != -1) {
    in_s0 = 1.0;
    fn_001088e0(*puVar9);
    fVar16 = in_s0;
    iVar1 = fn_00154a6c();
    if (iVar1 != 0) {
      fn_00159f34(*puVar9,puVar9[3]);
      puVar9[3] = 0xffffffff;
      fn_0033d0f4(puVar9,6);
    }
  }
  if (puVar9[4] != -1) {
    in_s0 = fVar16;
    fn_001088e0(*puVar9);
    iVar1 = fn_00154a6c();
    if (iVar1 != 0) {
      fn_00159f34(*puVar9,puVar9[4]);
      uVar3 = fn_0010887c(*puVar9,puVar9[1],(char *)&DAT_007bdd69,puVar9[2]);
      puVar9[4] = uVar3;
    }
  }
  if ((char)piVar2[6] != '\0') {
    return;
  }
  if (*piVar2 == piVar2[1]) {
LAB_0033d524:
    piVar2[3] = 0;
    puVar9 = (undefined4 *)piVar2[8];
    *(byte *)(puVar9[5] + 0x44) = *(byte *)(puVar9[5] + 0x44) & 0xfe;
    if (puVar9[4] != -1) {
      fn_00159f34(*puVar9);
      puVar9[4] = 0xffffffff;
      piVar7 = (int *)fn_006f72e0(DAT_008977e0);
      iVar1 = (**(code **)(*piVar7 + 0x3c))();
      if (iVar1 == 0) {
        fn_00692fb0(*(undefined4 *)(DAT_008977e0 + 0x40));
      }
    }
    fn_0033d0f4(puVar9,6);
    if (puVar9[3] != -1) {
      fn_00159f34(*puVar9);
      puVar9[3] = 0xffffffff;
    }
    if (piVar2[7] != -1) {
                    /* WARNING: Subroutine does not return */
      fn_001638a0();
    }
  }
  else {
    pfVar4 = (float *)fn_006f7770(DAT_008977e0);
    iVar11 = *piVar2;
    iVar13 = 0;
    iVar10 = 0;
    iVar1 = piVar2[1] - iVar11 >> 2;
    if (0 < iVar1) {
      uVar18 = (ulonglong)(uint)pfVar4[2];
      do {
        iVar5 = *(int *)(iVar11 + iVar10 * 4);
        fn_00300f74(iVar10 + 1,iVar1);
        fVar16 = *(float *)(iVar5 + 0x28);
        iVar6 = *(int *)(iVar11 + extraout_r1 * 4);
        fVar17 = (float)uVar18;
        bVar14 = fVar17 <= fVar16;
        if (!bVar14 || fVar16 == fVar17) {
          in_s0 = *(float *)(iVar6 + 0x28);
          bVar14 = in_s0 <= fVar17;
        }
        if (bVar14) {
          in_s0 = *(float *)(iVar6 + 0x28);
          bVar14 = fVar17 <= in_s0;
          if (!bVar14 || in_s0 == fVar17) {
            bVar14 = fVar16 <= fVar17;
          }
          if (!bVar14) {
            iVar8 = -1;
            goto LAB_0033d4e0;
          }
        }
        else {
          iVar8 = 1;
LAB_0033d4e0:
          fVar15 = *(float *)(iVar5 + 0x20);
          in_s0 = fVar15 + ((fVar17 - fVar16) / (in_s0 - fVar16)) *
                           (*(float *)(iVar6 + 0x20) - fVar15);
          if (*pfVar4 < in_s0) {
            iVar13 = iVar13 + iVar8;
          }
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < iVar1);
      if (iVar13 != 0) goto LAB_0033d524;
    }
    puVar9 = (undefined4 *)piVar2[8];
    if (puVar9[4] == -1) {
      fn_00692f98(*(undefined4 *)(DAT_008977e0 + 0x40));
      *(byte *)(puVar9[5] + 0x44) = *(byte *)(puVar9[5] + 0x44) & 0xfe | 1;
      uVar3 = fn_0010887c(*puVar9,puVar9[1],(char *)&DAT_007bdd49,puVar9[2]);
      puVar9[4] = uVar3;
    }
    iVar1 = fn_006b6244(*(undefined4 *)(DAT_00897804 + 8));
    if (piVar2[3] == 0) {
      piVar2[3] = iVar1;
    }
    uVar12 = 6 - (iVar1 - piVar2[3]);
    if ((int)uVar12 < 1) {
      *(undefined1 *)(piVar2 + 6) = 1;
    }
    else if (uVar12 < (uint)piVar2[4]) {
      puVar9 = (undefined4 *)piVar2[8];
      if (puVar9[3] != -1) {
        fn_00159f34(*puVar9);
        puVar9[3] = 0xffffffff;
      }
      switch(uVar12) {
      case 1:
        uVar3 = fn_0010887c(*puVar9,puVar9[1],s_quest_area_out_time_limit_1_bfla_008c5fe4,puVar9[2]
                            );
        puVar9[3] = uVar3;
        fn_0033d0f4(puVar9,0);
        break;
      case 2:
        uVar3 = fn_0010887c(*puVar9,puVar9[1],s_quest_area_out_time_limit_2_bfla_008c5fc2,puVar9[2]
                            );
        puVar9[3] = uVar3;
        fn_0033d0f4(puVar9,1);
        break;
      case 3:
        uVar3 = fn_0010887c(*puVar9,puVar9[1],s_quest_area_out_time_limit_3_bfla_008c5fa0,puVar9[2]
                            );
        puVar9[3] = uVar3;
        fn_0033d0f4(puVar9,2);
        break;
      case 4:
        uVar3 = fn_0010887c(*puVar9,puVar9[1],s_quest_area_out_time_limit_4_bfla_008c5f7e,puVar9[2]
                            );
        puVar9[3] = uVar3;
        fn_0033d0f4(puVar9,3);
        break;
      case 5:
        uVar3 = fn_0010887c(*puVar9,puVar9[1],s_quest_area_out_time_limit_5_bfla_008c5f5c,puVar9[2]
                            );
        puVar9[3] = uVar3;
        fn_0033d0f4(puVar9,4);
      }
    }
    piVar2[4] = uVar12;
    if (piVar2[7] == -1) {
                    /* WARNING: Subroutine does not return */
      fn_001638a0();
    }
  }
  return;
}



void fn_002a5478(undefined4 *param_1)

{
  param_1[1] = 0xffffffff;
  *param_1 = &DAT_0081e7f0;
  param_1[2] = 0xffffffff;
  param_1[4] = 0xffffffff;
  param_1[5] = 0;
  param_1[6] = 0xffffffff;
  *(undefined1 *)(param_1 + 7) = 0;
  return;
}



void fn_002a5314(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int in_s0;
  
  if (*(char *)(param_1 + 0x1c) == '\0') {
    uVar2 = *(undefined4 *)(DAT_008977e0 + 0x2c);
    if (*(int *)(param_1 + 0x10) == 0) {
      if (*(int *)(param_1 + 0x14) == 1) {
        uVar2 = fn_0023e194(uVar2,*(undefined4 *)(&DAT_008911f0 + *(int *)(param_1 + 0xc) * 4),0,
                             param_4,param_4);
        *(undefined4 *)(param_1 + 0x18) = uVar2;
      }
      else if (*(int *)(param_1 + 0x14) == 0) {
        fn_00699648(DAT_008977e0,0xff,1,1,0x14);
      }
      *(undefined4 *)(param_1 + 0x10) = 1;
      return;
    }
    if (*(int *)(param_1 + 0x10) == 1) {
      if (*(int *)(param_1 + 0x14) == 1) {
        fn_0023da78(uVar2,*(undefined4 *)(param_1 + 0x18));
        if (in_s0 == 0x42700000) {
          fn_00699648(DAT_008977e0,0xff,0,1,0x14);
        }
        fn_0023da78(uVar2,*(undefined4 *)(param_1 + 0x18));
        if (in_s0 == 0x428c0000) {
          fn_00699648(DAT_008977e0,0xff,1,0,1);
        }
        iVar1 = fn_006b4cd0(uVar2,*(undefined4 *)(param_1 + 0x18));
      }
      else {
        if (*(int *)(param_1 + 0x14) != 0) {
          return;
        }
        iVar1 = fn_006f73a0(DAT_008977e0,1);
      }
      if (iVar1 != 0) {
        *(undefined1 *)(param_1 + 0x1c) = 1;
        return;
      }
    }
  }
  return;
}



void fn_002a5280(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 8) = param_3;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  switch(param_2) {
  case 0:
    piVar1 = (int *)fn_006f756c(DAT_008977e0);
    uVar2 = (**(code **)(*piVar1 + 0x54))();
    *(undefined4 *)(param_1 + 0xc) = uVar2;
    *(undefined4 *)(param_1 + 0x14) = 1;
    return;
  case 1:
  case 2:
  case 3:
  case 4:
    piVar1 = (int *)fn_006f756c(DAT_008977e0);
    uVar2 = (**(code **)(*piVar1 + 0x50))
                      (piVar1,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
    *(undefined4 *)(param_1 + 0xc) = uVar2;
    *(undefined4 *)(param_1 + 0x14) = 1;
    return;
  default:
    return;
  }
}



undefined1 * fn_002a51f8(undefined1 *param_1,int param_2)

{
  undefined4 uVar1;
  uint in_fpscr;
  float fVar2;
  float fVar3;
  
  *param_1 = 0;
  fVar3 = 10.0;
  if (param_2 == 0) {
    uVar1 = fn_006afca4(*(undefined4 *)(DAT_008977e0 + 0x1c),*(undefined4 *)(DAT_008977e0 + 0xa8));
    fVar2 = (float)VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x16) & 3);
    fVar3 = fVar2 * fVar3 * fVar2 * fVar3;
  }
  else {
    uVar1 = fn_006afca4(*(undefined4 *)(DAT_008977e0 + 0x1c),*(undefined4 *)(DAT_008977e0 + 0xa8));
    fVar2 = (float)VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x16) & 3);
    fVar3 = fVar2 * fVar3 * fVar2 * fVar3 * 2.0;
  }
  param_1[8] = (char)param_2;
  *(float *)(param_1 + 4) = fVar3;
  return param_1;
}


