#include "005e4a60_005e4dc8.h"



void fn_005e4dc8(undefined4 param_1,int *param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != (int *)0x0) {
    puVar1 = (undefined4 *)(**(code **)(*param_2 + 8))(param_2);
    do {
      if (puVar1 == &DAT_008bf788) {
        if (param_2 != (int *)0x0) {
          fn_005e4488(param_2,param_1);
        }
        break;
      }
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  fn_005434d4(param_1,param_2);
  return;
}



void fn_005e4d9c(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  undefined4 uStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  undefined4 uStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  undefined4 uStack_a4;
  undefined1 auStack_a0 [48];
  undefined1 auStack_70 [48];
  undefined1 auStack_40 [52];
  
  fn_00543198();
  iVar1 = *(int *)(*(int *)(param_1 + 0x148) + 8);
  if (iVar1 == 0) {
    return;
  }
  puVar2 = *(undefined4 **)(iVar1 + 4);
  in_fpscr = in_fpscr & 0xfffffff;
  fVar5 = ABS((float)puVar2[6] * 40.743664);
  fVar4 = ABS((float)puVar2[7] * 40.743664);
  for (fVar6 = ABS((float)puVar2[5] * 40.743664); 0x477fffff < (int)fVar6; fVar6 = fVar6 - 65536.0)
  {
  }
  for (; 0x477fffff < (int)fVar5; fVar5 = fVar5 - 65536.0) {
  }
  for (; 0x477fffff < (int)fVar4; fVar4 = fVar4 - 65536.0) {
  }
  uVar7 = VectorFloatToUnsigned(fVar6,3);
  uVar8 = VectorFloatToUnsigned(fVar5,3);
  uVar9 = VectorFloatToUnsigned(fVar4,3);
  uVar3 = uVar7 & 0xff;
  fVar13 = (float)VectorUnsignedToFloat(uVar7 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
  uVar7 = uVar8 & 0xff;
  fVar11 = (float)VectorUnsignedToFloat(uVar8 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
  uVar8 = uVar9 & 0xff;
  fVar12 = (float)VectorUnsignedToFloat(uVar9 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
  fVar10 = (float)(&DAT_007d6f20)[uVar3 * 4] + (fVar6 - fVar13) * (float)(&DAT_007d6f28)[uVar3 * 4];
  fVar13 = (float)(&DAT_007d6f24)[uVar3 * 4] + (fVar6 - fVar13) * (float)(&DAT_007d6f2c)[uVar3 * 4];
  fStack_a8 = (float)(&DAT_007d6f24)[uVar7 * 4] +
              (fVar5 - fVar11) * (float)(&DAT_007d6f2c)[uVar7 * 4];
  fVar6 = (float)(&DAT_007d6f20)[uVar7 * 4] + (fVar5 - fVar11) * (float)(&DAT_007d6f28)[uVar7 * 4];
  if ((float)puVar2[5] * 40.743664 < 0.0) {
    fVar10 = -fVar10;
  }
  fVar11 = (float)(&DAT_007d6f20)[uVar8 * 4] + (fVar4 - fVar12) * (float)(&DAT_007d6f28)[uVar8 * 4];
  fVar5 = (float)(&DAT_007d6f24)[uVar8 * 4] + (fVar4 - fVar12) * (float)(&DAT_007d6f2c)[uVar8 * 4];
  if ((float)puVar2[6] * 40.743664 < 0.0) {
    fVar6 = -fVar6;
  }
  if ((float)puVar2[7] * 40.743664 < 0.0) {
    fVar11 = -fVar11;
  }
  fStack_d0 = fVar5 * fStack_a8;
  fStack_c0 = fVar11 * fStack_a8;
  fStack_ac = fVar10 * fStack_a8;
  fStack_a8 = fVar13 * fStack_a8;
  fStack_b0 = -fVar6;
  fStack_c8 = fVar10 * fVar11 + fVar13 * fVar5 * fVar6;
  fStack_bc = fVar13 * fVar5 + fVar10 * fVar11 * fVar6;
  fStack_cc = fVar10 * fVar5 * fVar6 - fVar13 * fVar11;
  fStack_b8 = fVar13 * fVar11 * fVar6 - fVar10 * fVar5;
  uStack_c4 = 0;
  uStack_b4 = 0;
  uStack_a4 = 0;
  fn_001ad150(auStack_a0,&fStack_d0,puVar2 + 8);
  fn_001ad39c(auStack_70,puVar2 + 2,auStack_a0);
  fn_001ad06c(auStack_40,param_1 + 0x8c,auStack_70);
  fn_0052dd0c(*puVar2,auStack_40);
  return;
}



int * fn_005e4c58(undefined4 param_1,int *param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  
  iVar1 = (**(code **)(*param_2 + 8))(param_2,0x14c,4);
  if (iVar1 != 0) {
    piVar2 = (int *)fn_00543524(iVar1,param_2,0,param_1);
    piVar2[0x52] = 0;
    *piVar2 = (int)&DAT_00858a94;
    piVar3 = (int *)fn_00145b00(0xc,&DAT_00812c8c);
    if (piVar3 == (int *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      *piVar3 = 0;
      *(undefined1 *)(piVar3 + 1) = 0;
      *(undefined1 *)((int)piVar3 + 5) = 1;
      piVar3[2] = 0;
    }
    piVar5 = (int *)piVar2[0x52];
    if (piVar5 != piVar3) {
      if (piVar5 != (int *)0x0) {
        if ((int *)*piVar5 != (int *)0x0) {
          (**(code **)(*(int *)*piVar5 + 8))();
        }
        fn_002feef8(piVar5);
      }
      piVar2[0x52] = (int)piVar3;
    }
    uVar4 = (**(code **)(*piVar2 + 0x24))(piVar2,param_2);
    if ((uVar4 & 0x80000000) == 0) {
      piVar5 = (int *)piVar2[0x52];
      piVar3 = (int *)*piVar5;
      if (piVar3 != param_3) {
        if (piVar3 != (int *)0x0) {
          (**(code **)(*piVar3 + 8))();
        }
        *piVar5 = (int)param_3;
      }
      return piVar2;
    }
    (**(code **)*piVar2)(piVar2);
    (**(code **)(*(int *)piVar2[1] + 0xc))((int *)piVar2[1],piVar2);
  }
  return (int *)0x0;
}



void fn_005e4c18(undefined4 *param_1)

{
  *param_1 = &DAT_00858a84;
  if (param_1[1] != 0) {
    fn_005e499c();
    fn_002feef8();
  }
  fn_002feef8(param_1);
  return;
}



undefined4 * fn_005e4b74(undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  puVar1 = (undefined4 *)(**(code **)(*param_2 + 8))(param_2,8,4);
  if (puVar1 != (undefined4 *)0x0) {
    uVar5 = *param_1;
    uVar4 = param_1[1];
    *puVar1 = &DAT_00858a84;
    puVar1[1] = 0;
    iVar2 = fn_00145b00(0x20,&DAT_00812c8c);
    iVar3 = 0;
    if (iVar2 != 0) {
      iVar3 = fn_005e4680(iVar2,param_2,uVar5,uVar4);
    }
    iVar2 = puVar1[1];
    if (iVar2 != iVar3) {
      if (iVar2 != 0) {
        fn_005e499c(iVar2);
        fn_002feef8();
      }
      puVar1[1] = iVar3;
    }
  }
  return puVar1;
}



void fn_005e4a60(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  *(int *)(param_1 + 8) = param_2;
  iVar1 = **(int **)(param_2 + 4);
  *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(iVar1 + 0xc);
  *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(iVar1 + 0x1c);
  *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(iVar1 + 0x2c);
  *(undefined4 *)(iVar1 + 0x40) = *(undefined4 *)(iVar1 + 0x3c);
  *(undefined4 *)(iVar1 + 0x70) = *(undefined4 *)(iVar1 + 0x6c);
  *(undefined4 *)(iVar1 + 0x80) = *(undefined4 *)(iVar1 + 0x7c);
  *(undefined4 *)(iVar1 + 0x90) = *(undefined4 *)(iVar1 + 0x8c);
  *(undefined4 *)(iVar1 + 0xa0) = *(undefined4 *)(iVar1 + 0x9c);
  *(undefined4 *)(iVar1 + 0xb0) = *(undefined4 *)(iVar1 + 0xac);
  *(undefined4 *)(iVar1 + 0x50) = *(undefined4 *)(iVar1 + 0x4c);
  *(undefined4 *)(iVar1 + 0x60) = *(undefined4 *)(iVar1 + 0x5c);
  *(undefined4 *)(iVar1 + 0xc0) = *(undefined4 *)(iVar1 + 0xbc);
  *(undefined4 *)(iVar1 + 0xd0) = *(undefined4 *)(iVar1 + 0xcc);
  *(undefined4 *)(iVar1 + 0xe0) = *(undefined4 *)(iVar1 + 0xdc);
  *(undefined4 *)(iVar1 + 0xf0) = *(undefined4 *)(iVar1 + 0xec);
  iVar1 = *(int *)(param_2 + 4);
  uVar3 = *(uint *)(iVar1 + 8);
  uVar4 = *(uint *)(iVar1 + 0xc);
  if (uVar3 != uVar4) {
    uVar2 = uVar3;
    if (uVar4 <= uVar3) {
      do {
        uVar2 = uVar2 + 4;
      } while (uVar2 != uVar4);
    }
    *(uint *)(iVar1 + 0xc) = uVar4 - (uVar4 - uVar3 & 0xfffffffc);
  }
  iVar1 = *(int *)(param_2 + 4);
  uVar3 = *(uint *)(iVar1 + 0x14);
  uVar4 = *(uint *)(iVar1 + 0x18);
  if (uVar3 != uVar4) {
    uVar2 = uVar3;
    if (uVar4 <= uVar3) {
      do {
        uVar2 = uVar2 + 4;
      } while (uVar2 != uVar4);
    }
    *(uint *)(iVar1 + 0x18) = uVar4 - (uVar4 - uVar3 & 0xfffffffc);
  }
  return;
}


