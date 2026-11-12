#include "00366dbc_003672fc.h"



undefined4 fn_003672fc(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  int *piVar5;
  
  iVar1 = fn_006f7a20(DAT_008977e0);
  if (iVar1 != 0) {
    return 1;
  }
  fn_00428284(*(undefined4 *)(param_1 + 0xc));
  iVar1 = fn_00145b00(0x40,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_003b5770();
  }
  piVar5 = *(int **)(param_1 + 0x28);
  if (piVar5 != piVar2) {
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 4))(piVar5);
    }
    *(int **)(param_1 + 0x28) = piVar2;
    piVar5 = piVar2;
  }
  uVar3 = fn_006afe90(*(undefined4 *)(DAT_008977e0 + 0x1c),*(undefined4 *)(DAT_008977e0 + 0xa8));
  (**(code **)(*piVar5 + 8))(piVar5,uVar3);
  iVar1 = fn_006f7358(DAT_008977e0);
  if (iVar1 == 0) {
    iVar1 = fn_002d8370(0xffffffff);
    if (iVar1 == 0) {
      if (**(int **)(DAT_008977e0 + 0x40) == 0) {
        iVar1 = fn_00145b00(0x2c,&DAT_00812c8c);
        piVar2 = (int *)0x0;
        if (iVar1 != 0) {
          piVar2 = (int *)fn_0040e3f0(iVar1,*(undefined4 *)(param_1 + 0x28));
        }
        piVar5 = *(int **)(param_1 + 0x24);
        if (piVar5 == piVar2) goto LAB_00367558;
      }
      else {
        iVar1 = fn_006f6fc4();
        if (iVar1 == 0) {
          iVar1 = fn_006f6fe8(*(undefined4 *)(DAT_008977e0 + 0x40));
          if (iVar1 == 0) goto LAB_00367558;
          iVar1 = fn_00145b00(0x2c,&DAT_00812c8c);
          piVar2 = (int *)0x0;
          if (iVar1 != 0) {
            piVar2 = (int *)fn_0058aec4(iVar1,*(undefined4 *)(param_1 + 0x28));
          }
          piVar5 = *(int **)(param_1 + 0x24);
          if (piVar5 == piVar2) goto LAB_00367558;
        }
        else {
          iVar1 = fn_00145b00(0x2c,&DAT_00812c8c);
          piVar2 = (int *)0x0;
          if (iVar1 != 0) {
            piVar2 = (int *)fn_003db8d8(iVar1,*(undefined4 *)(param_1 + 0x28));
          }
          piVar5 = *(int **)(param_1 + 0x24);
          if (piVar5 == piVar2) goto LAB_00367558;
        }
      }
    }
    else {
      iVar1 = fn_002dbd0c();
      if ((iVar1 == 0) || (iVar1 = fn_002dbdb4(), iVar1 != 0)) {
        iVar1 = fn_00145b00(0x2c,&DAT_00812c8c);
        piVar2 = (int *)0x0;
        if (iVar1 != 0) {
          piVar2 = (int *)fn_003f46a8(iVar1,*(undefined4 *)(param_1 + 0x28));
        }
        piVar5 = *(int **)(param_1 + 0x24);
        if (piVar5 == piVar2) goto LAB_00367558;
      }
      else {
        iVar1 = fn_00145b00(0x2c,&DAT_00812c8c);
        piVar2 = (int *)0x0;
        if (iVar1 != 0) {
          piVar2 = (int *)fn_003f4634(iVar1,*(undefined4 *)(param_1 + 0x28));
        }
        piVar5 = *(int **)(param_1 + 0x24);
        if (piVar5 == piVar2) goto LAB_00367558;
      }
    }
  }
  else {
    iVar1 = fn_00145b00(0x2c,&DAT_00812c8c);
    piVar2 = (int *)0x0;
    if (iVar1 != 0) {
      piVar2 = (int *)fn_003f4738(iVar1,*(undefined4 *)(param_1 + 0x28));
    }
    piVar5 = *(int **)(param_1 + 0x24);
    if (piVar5 == piVar2) goto LAB_00367558;
  }
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 4))(piVar5);
  }
  *(int **)(param_1 + 0x24) = piVar2;
LAB_00367558:
  (**(code **)(**(int **)(param_1 + 0x24) + 8))();
  fn_003665b8(param_1);
  uVar4 = *(uint *)(param_1 + 4);
  if (*(char *)(DAT_008977e0 + 0x218) != '\0') {
    uVar4 = uVar4 | 2;
    *(uint *)(param_1 + 4) = uVar4;
  }
  *(uint *)(param_1 + 4) = uVar4 & 0xfffffff7 | 4;
  return 1;
}



void fn_00367224(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = fn_006f7a20(DAT_008977e0);
  if (iVar1 != 0) {
    return;
  }
  fn_00365c9c(param_1);
  fn_006f7a9c(DAT_008977e0);
  fn_002797d8();
  if (*(int **)(param_1 + 0x28) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x28) + 4))();
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  if (*(int **)(param_1 + 0x24) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x24) + 4))();
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  uVar2 = *(uint *)(param_1 + 0x18);
  uVar4 = *(uint *)(param_1 + 0x1c);
  if (uVar2 != uVar4) {
    uVar3 = uVar2;
    if (uVar4 <= uVar2) {
      do {
        uVar3 = uVar3 + 0x2c;
      } while (uVar3 != uVar4);
    }
    *(uint *)(param_1 + 0x1c) = uVar4 + ((int)(uVar4 - uVar2) / 0x2c) * -0x2c;
  }
  fn_00428284(*(undefined4 *)(param_1 + 0xc));
  return;
}



void fn_00367018(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  uVar1 = *(uint *)(param_1 + 4);
  if ((uVar1 & 8) == 0) {
    return;
  }
  if ((uVar1 & 4) != 0) {
    if ((uVar1 & 1) == 0) {
      uVar1 = 0;
      do {
        fn_002a4d40(*(undefined4 *)(DAT_008977e0 + 0x2c),(&DAT_007be49c)[uVar1]);
        uVar1 = uVar1 + 1;
      } while (uVar1 < 0x15);
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
    }
    uVar1 = 0;
    iVar2 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18);
    iVar3 = iVar2 >> 0x1f;
    if (iVar2 / 0x2c + iVar3 != iVar3) {
      do {
        if (*(char *)(*(int *)(param_1 + 0x18) + uVar1 * 0x2c + 0x17) == '\x01') {
          fn_00365a1c(param_1);
        }
        uVar1 = uVar1 + 1;
      } while (uVar1 < (uint)((*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18)) / 0x2c));
    }
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffff9;
  }
  iVar3 = *(int *)(param_1 + 0x14) + 1;
  *(int *)(param_1 + 0x14) = iVar3;
  if (9 < iVar3) {
    fn_003665b8(param_1);
    uVar1 = 0;
    iVar2 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18);
    iVar3 = iVar2 >> 0x1f;
    if (iVar2 / 0x2c + iVar3 != iVar3) {
      do {
        if (*(char *)(*(int *)(param_1 + 0x18) + uVar1 * 0x2c + 0x17) == '\x01') {
          fn_00365a1c(param_1);
        }
        uVar1 = uVar1 + 1;
      } while (uVar1 < (uint)((*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18)) / 0x2c));
    }
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  pfVar4 = (float *)fn_006f7770(DAT_008977e0);
  uVar1 = 0;
  iVar2 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18);
  iVar3 = iVar2 >> 0x1f;
  if (iVar2 / 0x2c + iVar3 != iVar3) {
    do {
      iVar2 = *(int *)(param_1 + 0x18) + uVar1 * 0x2c;
      iVar3 = *(int *)(iVar2 + 8);
      if (iVar3 != 0) {
        fVar5 = *pfVar4 - *(float *)(iVar3 + 0x20);
        fVar7 = pfVar4[1] - *(float *)(iVar3 + 0x24);
        fVar6 = pfVar4[2] - *(float *)(iVar3 + 0x28);
        *(float *)(iVar2 + 0xc) = fVar5 * fVar5 + fVar7 * fVar7 + fVar6 * fVar6;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < (uint)((*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18)) / 0x2c));
  }
  fn_00366790(param_1);
  return;
}



void fn_00366f0c(int param_1,short *param_2,short *param_3,undefined2 param_4)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  short *psVar4;
  short *psVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  iVar6 = *(int *)(param_1 + 0x2c);
  iVar7 = 0;
  iVar3 = (*(int *)(param_1 + 0x30) - iVar6) / 0x34;
  if (0 < iVar3) {
    do {
      psVar5 = (short *)(iVar6 + iVar7 * 0x34);
      psVar4 = (short *)(int)*psVar5;
      bVar8 = psVar4 == param_2;
      if (bVar8) {
        psVar4 = (short *)(int)psVar5[1];
      }
      if (bVar8 && psVar4 == param_3) {
        *(undefined2 *)(iVar6 + iVar7 * 0x34 + 6) = param_4;
        piVar2 = *(int **)(param_1 + 0x24);
        if (piVar2 == (int *)0x0) {
          return;
        }
        iVar3 = (**(code **)(*piVar2 + 0x38))(piVar2,param_3,0);
        if (iVar3 == 0) {
          return;
        }
        *(char *)(iVar3 + 4) = (char)param_4;
        return;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar3);
  }
  iVar7 = *(int *)(param_1 + 0x38);
  iVar3 = (*(int *)(param_1 + 0x3c) - iVar7) / 0x34;
  iVar6 = 0;
  if (iVar3 < 1) {
    return;
  }
  while( true ) {
    psVar4 = (short *)(iVar7 + iVar6 * 0x34);
    sVar1 = *psVar4;
    if ((short *)(int)sVar1 == param_2) {
      psVar4 = (short *)(int)psVar4[1];
    }
    if ((short *)(int)sVar1 == param_2 && psVar4 == param_3) break;
    iVar6 = iVar6 + 1;
    if (iVar3 <= iVar6) {
      return;
    }
  }
  *(undefined2 *)(iVar7 + iVar6 * 0x34 + 6) = param_4;
  return;
}



void fn_00366efc(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00366f08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x24) + 0x3c))();
  return;
}



void fn_00366dbc(int param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  iVar1 = param_2[1];
  iVar6 = *param_2;
  if (iVar6 != iVar1) {
    uVar2 = fn_007b8834(iVar1,iVar1,iVar6);
    uVar3 = param_2[1];
    if (uVar3 < uVar2) {
      do {
        uVar2 = uVar2 + 0x34;
      } while (uVar2 != uVar3);
    }
    param_2[1] = uVar3 + ((iVar1 - iVar6) / 0x34) * -0x34;
  }
  iVar6 = 0;
  iVar1 = (*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x2c)) / 0x34;
  if (0 < iVar1) {
    do {
      if (((param_3 == -1) || (*(short *)(*(int *)(param_1 + 0x2c) + iVar6 * 0x34) == param_3)) &&
         ((param_4 == -1 || (*(short *)(*(int *)(param_1 + 0x2c) + iVar6 * 0x34 + 4) == param_4))))
      {
        puVar4 = (undefined4 *)param_2[1];
        puVar5 = (undefined4 *)(*(int *)(param_1 + 0x2c) + iVar6 * 0x34);
        if (puVar4 == (undefined4 *)param_2[2]) {
          fn_0078f330(param_2);
        }
        else {
          param_2[1] = (int)(puVar4 + 0xd);
          if (puVar4 != (undefined4 *)0x0) {
            uVar7 = puVar5[1];
            uVar8 = puVar5[2];
            uVar9 = puVar5[3];
            uVar10 = puVar5[4];
            uVar11 = puVar5[5];
            uVar12 = puVar5[6];
            uVar13 = puVar5[7];
            *puVar4 = *puVar5;
            puVar4[1] = uVar7;
            puVar4[2] = uVar8;
            puVar4[3] = uVar9;
            puVar4[4] = uVar10;
            puVar4[5] = uVar11;
            puVar4[6] = uVar12;
            puVar4[7] = uVar13;
            uVar7 = puVar5[9];
            uVar8 = puVar5[10];
            uVar9 = puVar5[0xb];
            uVar10 = puVar5[0xc];
            puVar4[8] = puVar5[8];
            puVar4[9] = uVar7;
            puVar4[10] = uVar8;
            puVar4[0xb] = uVar9;
            puVar4[0xc] = uVar10;
          }
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar1);
  }
  return;
}


