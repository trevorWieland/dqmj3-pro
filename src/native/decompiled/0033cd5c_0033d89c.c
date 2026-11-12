#include "0033cd5c_0033d89c.h"



uint * fn_0033d89c(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  
  piVar3 = (int *)param_1[8];
  if (piVar3 != (int *)0x0) {
    if ((int *)*piVar3 != (int *)0x0) {
      (**(code **)(*(int *)*piVar3 + 4))();
    }
    fn_002feef8(piVar3);
  }
  uVar1 = *param_1;
  uVar2 = uVar1;
  if (param_1[1] < uVar1) {
    do {
      uVar2 = uVar2 + 4;
    } while (uVar2 != param_1[1]);
  }
  fn_001008c4(uVar1,(int)(param_1[2] - uVar1) >> 2,0);
  return param_1;
}



undefined4 * fn_0033d7e0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 6;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[7] = 0xffffffff;
  puVar1 = (undefined4 *)fn_00145b00(0x2c,&DAT_00812c8c);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    iVar2 = fn_00145b00(0x80,&DAT_00812c8c);
    uVar3 = 0;
    if (iVar2 != 0) {
      uVar3 = fn_00110518();
    }
    *puVar1 = uVar3;
    puVar1[1] = 0xffffffff;
    puVar1[2] = 0xffffffff;
    puVar1[3] = 0xffffffff;
    puVar1[5] = 0;
    puVar1[4] = 0xffffffff;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    fn_0011050c(*puVar1,*(undefined4 *)(DAT_008977e0 + 0x10),*(undefined4 *)(DAT_008977e0 + 0x14));
  }
  param_1[8] = puVar1;
  return param_1;
}



void fn_0033d350(int param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  puVar1 = *(uint **)(param_1 + 0x1c);
  uVar3 = *puVar1;
  uVar4 = puVar1[1];
  if (uVar3 != uVar4) {
    uVar2 = uVar3;
    if (uVar4 <= uVar3) {
      do {
        uVar2 = uVar2 + 4;
      } while (uVar2 != uVar4);
    }
    puVar1[1] = uVar4 - (uVar4 - uVar3 & 0xfffffffc);
  }
  return;
}



void fn_0033d214(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  
  fn_0033d358();
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  puVar3 = *(undefined4 **)(param_1 + 0x20);
  uVar1 = fn_001481c8(*puVar3,L"rom:/data/Layout/quest/upper/quest_area_out.arc",&DAT_008c6006,1,1)
  ;
  puVar3[1] = uVar1;
  uVar1 = fn_001923e0(*puVar3,(char *)&DAT_007bdd34,0,1,10);
  puVar3[2] = uVar1;
  iVar2 = fn_00178f9c(*puVar3,uVar1);
  piVar4 = *(int **)(iVar2 + 0x10);
  uVar1 = (**(code **)(*piVar4 + 0x2c))(piVar4,s_Null_timeup_008c6008,1);
  puVar3[5] = uVar1;
  uVar1 = (**(code **)(*piVar4 + 0x2c))(piVar4,s_Null_limit_1_008c6014,1);
  puVar3[6] = uVar1;
  uVar1 = (**(code **)(*piVar4 + 0x2c))(piVar4,s_Null_limit_2_008c6021,1);
  puVar3[7] = uVar1;
  uVar1 = (**(code **)(*piVar4 + 0x2c))(piVar4,s_Null_limit_3_008c602e,1);
  puVar3[8] = uVar1;
  uVar1 = (**(code **)(*piVar4 + 0x2c))(piVar4,s_Null_limit_4_008c603b,1);
  puVar3[9] = uVar1;
  uVar1 = (**(code **)(*piVar4 + 0x2c))(piVar4,s_Null_limit_5_008c6048,1);
  puVar3[10] = uVar1;
  return;
}



void fn_0033d198(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0x20);
  if (puVar1[3] != -1) {
    fn_00159f34(*puVar1);
    puVar1[3] = 0xffffffff;
  }
  if (puVar1[4] != -1) {
    fn_00159f34(*puVar1);
    puVar1[4] = 0xffffffff;
  }
  if (puVar1[2] != -1) {
    fn_0016a43c(*puVar1);
    puVar1[2] = 0xffffffff;
  }
  if (puVar1[1] != -1) {
                    /* WARNING: Subroutine does not return */
    fn_001482f4(*puVar1);
  }
  fn_0033d358(param_1);
  return;
}



void fn_0033d358(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *param_1;
  uVar3 = param_1[1];
  if (uVar2 != uVar3) {
    uVar1 = uVar2;
    if (uVar3 <= uVar2) {
      do {
        uVar1 = uVar1 + 4;
      } while (uVar1 != uVar3);
    }
    param_1[1] = uVar3 - (uVar3 - uVar2 & 0xfffffffc);
  }
  return;
}



void fn_0033d0f4(int param_1,int param_2)

{
  *(byte *)(*(int *)(param_1 + 0x18) + 0x44) =
       param_2 == 0 | *(byte *)(*(int *)(param_1 + 0x18) + 0x44) & 0xfe;
  *(byte *)(*(int *)(param_1 + 0x1c) + 0x44) =
       param_2 == 1 | *(byte *)(*(int *)(param_1 + 0x1c) + 0x44) & 0xfe;
  *(byte *)(*(int *)(param_1 + 0x20) + 0x44) =
       param_2 == 2 | *(byte *)(*(int *)(param_1 + 0x20) + 0x44) & 0xfe;
  *(byte *)(*(int *)(param_1 + 0x24) + 0x44) =
       *(byte *)(*(int *)(param_1 + 0x24) + 0x44) & 0xfe | param_2 == 3;
  *(byte *)(*(int *)(param_1 + 0x28) + 0x44) =
       param_2 == 4 | *(byte *)(*(int *)(param_1 + 0x28) + 0x44) & 0xfe;
  return;
}



void fn_0033cf3c(int param_1,undefined4 param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  uint uVar11;
  
  puVar1 = *(uint **)(param_1 + 0x1c);
  puVar10 = (undefined4 *)puVar1[1];
  if (puVar10 != (undefined4 *)puVar1[2]) {
    puVar1[1] = (uint)(puVar10 + 1);
    if (puVar10 != (undefined4 *)0x0) {
      *puVar10 = param_2;
    }
    return;
  }
  uVar4 = (int)((int)puVar10 - *puVar1) >> 2;
  if ((uint)((int)((int)puVar1[2] - *puVar1) >> 2) <= uVar4) {
    uVar11 = uVar4 + (uVar4 >> 1) + (uVar4 >> 3);
    if (uVar11 < uVar4 + 0x20) {
      uVar11 = uVar4 + 0x20;
    }
    puVar2 = (undefined4 *)fn_00100fc6(uVar11 << 2,0);
    puVar7 = puVar2;
    for (puVar6 = (undefined4 *)*puVar1; puVar6 != puVar10; puVar6 = puVar6 + 1) {
      if (puVar7 != (undefined4 *)0x0) {
        *puVar7 = *puVar6;
      }
      puVar7 = puVar7 + 1;
    }
    puVar6 = (undefined4 *)(((int)puVar10 - *puVar1 & 0xfffffffc) + (int)puVar2);
    if (puVar6 != (undefined4 *)0x0) {
      *puVar6 = param_2;
    }
    puVar7 = (undefined4 *)puVar1[1];
    puVar6 = (undefined4 *)(((int)puVar10 - *puVar1 & 0xfffffffc) + (int)puVar2);
    for (; puVar10 != puVar7; puVar10 = puVar10 + 1) {
      puVar6 = puVar6 + 1;
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = *puVar10;
      }
    }
    uVar3 = *puVar1;
    uVar8 = puVar1[1];
    uVar4 = uVar3;
    if (uVar8 < uVar3) {
      do {
        uVar4 = uVar4 + 4;
      } while (uVar4 != uVar8);
    }
    fn_001008c4(uVar3,(int)(puVar1[2] - uVar3) >> 2,0);
    puVar1[2] = (uint)(puVar2 + uVar11);
    puVar1[1] = (uint)(puVar2 + ((int)(uVar8 - uVar3) >> 2) + 1);
    *puVar1 = (uint)puVar2;
    return;
  }
  puVar1[1] = (uint)(puVar10 + 1);
  if (puVar10 != (undefined4 *)0x0) {
    *puVar10 = puVar10[-1];
  }
  puVar6 = puVar10 + -1;
  puVar7 = puVar10;
  if (puVar10 < puVar6) {
    if (0 < (int)puVar6 - (int)puVar10) {
      iVar9 = (int)puVar6 - (int)puVar10 >> 2;
      iVar5 = 0;
      do {
        iVar9 = iVar9 + -1;
        puVar10[iVar5 + -1] = puVar6[iVar5 + -1];
        iVar5 = iVar5 + -1;
      } while (iVar9 != 0);
    }
  }
  else {
    while (puVar10 != puVar6) {
      puVar6 = puVar6 + -1;
      puVar7[-1] = *puVar6;
      puVar7 = puVar7 + -1;
    }
  }
  *puVar10 = param_2;
  return;
}



void fn_0033ceb4(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    if (param_2 == 0) {
      iVar1 = fn_006b6244(*(undefined4 *)(DAT_00897804 + 8));
      *(int *)(param_1 + 0xc) = iVar1 - *(int *)(param_1 + 0x14);
      *(undefined4 *)(param_1 + 0x14) = 0;
      return;
    }
    if (*(int *)(param_1 + 0x1c) != -1) {
                    /* WARNING: Subroutine does not return */
      fn_001638a0();
    }
    iVar1 = fn_006b6244(*(undefined4 *)(DAT_00897804 + 8));
    *(int *)(param_1 + 0x14) = iVar1 - *(int *)(param_1 + 0xc);
  }
  return;
}



void fn_0033cd5c(int param_1)

{
  int iVar1;
  undefined4 extraout_r1;
  int iVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  
  if (0 < *(int *)(param_1 + 4)) {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    fVar3 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 8),(byte)(in_fpscr >> 0x16) & 3);
    fVar3 = 6.2831855 / fVar3;
    fn_00300f74();
    fVar4 = (float)VectorSignedToFloat(extraout_r1,(byte)(in_fpscr >> 0x16) & 3);
    fVar4 = fVar3 * fVar4 * 40.743664;
    fn_00525abc();
    fVar5 = *(float *)(param_1 + 0xc);
    fVar3 = 0.0;
    *(float *)(param_1 + 0x14) = fVar4 * fVar5;
    if (*(int *)(param_1 + 4) < *(int *)(param_1 + 0x10)) {
      if (*(char *)(param_1 + 0x18) == '\0') {
        *(undefined4 *)(param_1 + 4) = 0;
        *(undefined4 *)(param_1 + 8) = 0;
        *(undefined4 *)(param_1 + 0xc) = 0;
        *(undefined4 *)(param_1 + 0x10) = 0;
        *(undefined4 *)(param_1 + 0x14) = 0;
        *(undefined1 *)(param_1 + 0x19) = 0;
        *(undefined4 *)(param_1 + 0x1c) = 0;
      }
      else {
        *(undefined4 *)(param_1 + 0x10) = 0;
      }
    }
    else if (*(char *)(param_1 + 0x19) != '\0') {
      iVar2 = *(int *)(param_1 + 8);
      uVar6 = fn_00300f74();
      iVar1 = (int)uVar6;
      if (((int)((ulonglong)uVar6 >> 0x20) == 0) && (fVar3 < fVar5)) {
        fVar5 = fVar5 - *(float *)(param_1 + 0x1c);
        *(float *)(param_1 + 0xc) = fVar5;
        if (fVar3 < fVar5) {
          fVar3 = fVar5;
        }
        if (3 < iVar2) {
          iVar1 = iVar2 + -1;
        }
        *(float *)(param_1 + 0xc) = fVar3;
        if (3 < iVar2) {
          *(int *)(param_1 + 8) = iVar1;
        }
        return;
      }
    }
  }
  return;
}


