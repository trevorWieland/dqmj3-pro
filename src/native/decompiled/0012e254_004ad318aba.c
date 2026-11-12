#include "0012e254_004ad318aba.h"



void fn_00145c5c(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  code *in_r12;
  bool bVar7;
  
  if (DAT_008bf7a4 == 0) {
    return;
  }
  piVar6 = *(int **)(DAT_008bf7a4 + 0x1008);
joined_r0x00145c80:
  piVar1 = piVar6;
  if (piVar1 == (int *)0x0) {
    uVar4 = 0;
    do {
      iVar3 = *(int *)(DAT_008bf7a4 + uVar4 * 4 + 0x808);
      while (iVar3 != 0) {
        iVar3 = *(int *)(iVar3 + 0x18);
        in_r12 = DAT_0089a524;
        if (DAT_0089a524 != (code *)0x0) {
          (*DAT_0089a524)(0x10000,0x100,0);
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x200);
    uVar4 = 0;
    do {
      piVar6 = (int *)*(int *)(DAT_008bf7a4 + uVar4 * 4 + 8);
      while (piVar1 = piVar6, piVar1 != (int *)0x0) {
        piVar6 = (int *)*piVar1;
        if (piVar1[0xb] != 0) {
          in_r12 = DAT_0089a524;
        }
        if (piVar1[0xb] != 0 && in_r12 != (code *)0x0) {
          (*in_r12)(0x10000,0x100,0);
        }
        if (piVar1[0x70] != 0) {
          in_r12 = DAT_0089a524;
        }
        if (piVar1[0x70] != 0 && in_r12 != (code *)0x0) {
          (*in_r12)(0x10000,0x100,0);
        }
        if (piVar1[7] != 0) {
          in_r12 = DAT_0089a524;
        }
        if (piVar1[7] != 0 && in_r12 != (code *)0x0) {
          (*in_r12)(0x10000,0x100,0);
        }
        piVar5 = (int *)piVar1[6];
joined_r0x00145eb8:
        piVar2 = piVar5;
        if (piVar2 != (int *)0x0) {
          piVar5 = (int *)piVar2[2];
          if (*piVar2 != 0) goto code_r0x00145ecc;
          goto LAB_00145ee8;
        }
        in_r12 = DAT_0089a524;
        if (DAT_0089a524 != (code *)0x0) {
          (*DAT_0089a524)(0x10000,0x100,0,piVar1);
        }
      }
      uVar4 = uVar4 + 1;
      if (0x1ff < uVar4) {
        DAT_008bf7a4 = 0;
        return;
      }
    } while( true );
  }
  piVar6 = (int *)piVar1[8];
  if (*piVar1 != 0) {
    in_r12 = DAT_0089a524;
  }
  if (*piVar1 != 0 && in_r12 != (code *)0x0) {
    (*in_r12)(0x10000,0x100,0);
  }
  if (piVar1[2] != 0) {
    in_r12 = DAT_0089a524;
  }
  if (piVar1[2] != 0 && in_r12 != (code *)0x0) {
    (*in_r12)(0x10000,0x100,0);
  }
  uVar4 = 0;
  if (piVar1[5] != 0) {
    do {
      bVar7 = *(int *)(piVar1[4] + uVar4 * 0xe8 + 0x30) != 0;
      if (bVar7) {
        in_r12 = DAT_0089a524;
      }
      if (bVar7 && in_r12 != (code *)0x0) {
        (*in_r12)(0x10000,0x100,0);
      }
      bVar7 = *(int *)(piVar1[4] + uVar4 * 0xe8 + 0xe0) != 0;
      if (bVar7) {
        in_r12 = DAT_0089a524;
      }
      if (bVar7 && in_r12 != (code *)0x0) {
        (*in_r12)(0x10000,0x100,0);
      }
      bVar7 = *(int *)(piVar1[4] + uVar4 * 0xe8 + 0x58) != 0;
      if (bVar7) {
        in_r12 = DAT_0089a524;
      }
      if (bVar7 && in_r12 != (code *)0x0) {
        (*in_r12)(0x10000,0x100,0);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uint)piVar1[5]);
  }
  if (piVar1[4] != 0) goto code_r0x00145d94;
  goto LAB_00145db0;
code_r0x00145ecc:
  if (DAT_0089a524 != (code *)0x0) {
    (*DAT_0089a524)(0x10000,0x100,0);
LAB_00145ee8:
    if (DAT_0089a524 != (code *)0x0) {
      (*DAT_0089a524)(0x10000,0x100,0,piVar2);
    }
  }
  goto joined_r0x00145eb8;
code_r0x00145d94:
  in_r12 = (code *)0x0;
  if (DAT_0089a524 != (code *)0x0) {
    (*DAT_0089a524)(0x10000,0x100,0);
LAB_00145db0:
    in_r12 = DAT_0089a524;
    if (DAT_0089a524 != (code *)0x0) {
      (*DAT_0089a524)(0x10000,0x100,0,piVar1);
    }
  }
  goto joined_r0x00145c80;
}


