#include "0069db88_0069e464.h"



void fn_0069e464(int param_1,undefined4 param_2)

{
  if (*(char *)(param_1 + 0x4c) != '\0') {
    fn_0018d060(*(undefined4 *)(param_1 + 0x14));
    *(undefined4 *)(param_1 + 0x50) = param_2;
  }
  return;
}



void fn_0069e444(void)

{
                    /* WARNING: Subroutine does not return */
  fn_002b1598();
}



void fn_0069e370(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  if (*(char *)(param_1 + 0x18) != param_2) {
    if (*(int *)(param_1 + 0x14) == 0) {
      *(char *)(param_1 + 0xd5) = (char)param_2;
      *(undefined1 *)(param_1 + 0xd4) = 1;
    }
    else {
      cVar1 = *(char *)(param_1 + 0x4d);
      if (param_2 == 0) {
        if (cVar1 != '\0') {
          uVar2 = fn_0017fde4();
          fn_00162d54(*(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x10) + 0x24),uVar2);
          *(undefined1 *)(param_1 + 0x4d) = 0;
        }
      }
      else {
        uVar2 = fn_0017fde4();
        fn_001969a4(*(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x10) + 0x24),uVar2);
        *(undefined1 *)(param_1 + 0x4d) = 1;
      }
      if (*(char *)(param_1 + 0x54) != '\0') {
        uVar2 = fn_00156f24(DAT_008987bc,*(undefined4 *)(param_1 + 0x58));
        fn_00154a48(uVar2,(int)*(char *)(param_1 + 0x4d));
      }
      if (*(char *)(param_1 + 0x4d) != cVar1) {
        fn_00162d44(*(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x10) + 0x24));
      }
    }
    *(char *)(param_1 + 0x18) = (char)param_2;
  }
  return;
}



void fn_0069e328(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 local_10;
  
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x1c);
  local_10 = param_4;
  local_10 = fn_003b7854(uVar1,param_2,1,0);
  uVar1 = fn_003b7324(uVar1,local_10);
  *(undefined4 *)(*(int *)(param_1 + 8) + 4) = uVar1;
  fn_0079d450(param_1 + 0x40,&local_10);
  return;
}



void fn_0069e2d0(void)

{
                    /* WARNING: Subroutine does not return */
  fn_002b1598();
}



/* WARNING: Removing unreachable block (ram,0x0069e024) */
/* WARNING: Removing unreachable block (ram,0x0069dfbc) */
/* WARNING: Removing unreachable block (ram,0x0069dff0) */
/* WARNING: Removing unreachable block (ram,0x0069e058) */

void fn_0069df10(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  uint uVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  if (*(char *)(param_1 + 0x4c) == '\0') {
    uVar4 = 0;
    uVar6 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x1c);
    if (*(int *)(param_1 + 0x44) - *(int *)(param_1 + 0x40) >> 2 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
      do {
        uVar1 = fn_006c77c8(uVar6,*(undefined4 *)(*(int *)(param_1 + 0x40) + uVar4 * 4));
        uVar5 = uVar5 & uVar1;
        uVar4 = uVar4 + 1;
      } while (uVar4 < (uint)(*(int *)(param_1 + 0x44) - *(int *)(param_1 + 0x40) >> 2));
    }
    if (uVar5 != 0) {
      fn_0069d538(param_1);
      if (*(char *)(param_1 + 0xd4) != '\0') {
        *(undefined1 *)(param_1 + 0xd4) = 0;
        fn_0069d474(param_1,(int)*(char *)(param_1 + 0xd5));
      }
      if (*(char *)(param_1 + 0xbc) != '\0') {
        *(undefined1 *)(param_1 + 0xbc) = 0;
        fn_0069e2e4();
      }
      if (*(char *)(param_1 + 0xc4) != '\0') {
        *(undefined1 *)(param_1 + 0xc4) = 0;
        fn_0069d880();
      }
      if (*(char *)(param_1 + 0xcc) != '\0') {
        *(undefined1 *)(param_1 + 0xcc) = 0;
        fn_0069da24();
      }
    }
  }
  if (*(int *)(param_1 + 0x14) == 0) {
    return;
  }
  iVar2 = fn_0017fde4();
  fVar11 = *(float *)(param_1 + 0x28) * 40.743664;
  fVar9 = *(float *)(param_1 + 0x2c) * 40.743664;
  fVar7 = *(float *)(param_1 + 0x30) * 40.743664;
  in_fpscr = in_fpscr & 0xfffffff;
  fVar10 = ABS(fVar9);
  fVar8 = ABS(fVar7);
  for (fVar12 = ABS(fVar11); 0x477fffff < (int)fVar12; fVar12 = fVar12 - 65536.0) {
  }
  for (; 0x477fffff < (int)fVar10; fVar10 = fVar10 - 65536.0) {
  }
  for (; 0x477fffff < (int)fVar8; fVar8 = fVar8 - 65536.0) {
  }
  uVar4 = VectorFloatToUnsigned(fVar12,3);
  uVar13 = VectorFloatToUnsigned(fVar10,3);
  uVar1 = uVar4 & 0xff;
  uVar14 = VectorFloatToUnsigned(fVar8,3);
  fVar17 = (float)VectorUnsignedToFloat(uVar4 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
  uVar5 = uVar13 & 0xff;
  fVar18 = (float)VectorUnsignedToFloat(uVar13 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
  uVar4 = uVar14 & 0xff;
  fVar19 = (float)VectorUnsignedToFloat(uVar14 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
  fVar15 = (float)(&DAT_007d6f20)[uVar1 * 4] + (fVar12 - fVar17) * (float)(&DAT_007d6f28)[uVar1 * 4]
  ;
  fVar16 = (float)(&DAT_007d6f24)[uVar1 * 4] + (fVar12 - fVar17) * (float)(&DAT_007d6f2c)[uVar1 * 4]
  ;
  fVar17 = (float)(&DAT_007d6f24)[uVar5 * 4] + (fVar10 - fVar18) * (float)(&DAT_007d6f2c)[uVar5 * 4]
  ;
  fVar12 = (float)(&DAT_007d6f20)[uVar5 * 4] + (fVar10 - fVar18) * (float)(&DAT_007d6f28)[uVar5 * 4]
  ;
  if (fVar11 < 0.0) {
    fVar15 = -fVar15;
  }
  fVar11 = (float)(&DAT_007d6f20)[uVar4 * 4] + (fVar8 - fVar19) * (float)(&DAT_007d6f28)[uVar4 * 4];
  fVar10 = (float)(&DAT_007d6f24)[uVar4 * 4] + (fVar8 - fVar19) * (float)(&DAT_007d6f2c)[uVar4 * 4];
  if (fVar9 < 0.0) {
    fVar12 = -fVar12;
  }
  if (fVar7 < 0.0) {
    fVar11 = -fVar11;
  }
  *(float *)(iVar2 + 0x4c) = fVar10 * fVar17;
  *(float *)(iVar2 + 0x5c) = fVar11 * fVar17;
  *(float *)(iVar2 + 0x70) = fVar15 * fVar17;
  *(float *)(iVar2 + 0x74) = fVar16 * fVar17;
  *(float *)(iVar2 + 0x50) = fVar15 * fVar10 * fVar12 - fVar16 * fVar11;
  *(float *)(iVar2 + 100) = fVar16 * fVar11 * fVar12 - fVar15 * fVar10;
  *(float *)(iVar2 + 0x54) = fVar15 * fVar11 + fVar16 * fVar10 * fVar12;
  *(float *)(iVar2 + 0x60) = fVar16 * fVar10 + fVar15 * fVar11 * fVar12;
  *(float *)(iVar2 + 0x6c) = -fVar12;
  *(undefined4 *)(iVar2 + 0x58) = 0;
  *(undefined4 *)(iVar2 + 0x68) = 0;
  *(undefined4 *)(iVar2 + 0x78) = 0;
  uVar6 = *(undefined4 *)(param_1 + 0x20);
  uVar3 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(iVar2 + 0x58) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(iVar2 + 0x68) = uVar6;
  *(undefined4 *)(iVar2 + 0x78) = uVar3;
  *(uint *)(iVar2 + 0x88) = *(uint *)(iVar2 + 0x88) | 0x800;
  uVar6 = *(undefined4 *)(param_1 + 0x38);
  uVar3 = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(iVar2 + 0x7c) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(iVar2 + 0x80) = uVar6;
  *(undefined4 *)(iVar2 + 0x84) = uVar3;
  *(uint *)(iVar2 + 0x88) = *(uint *)(iVar2 + 0x88) | 0x800;
                    /* WARNING: Could not recover jumptable at 0x0069e2b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x14) + 0x10))();
  return;
}



void fn_0069e2e4(int param_1)

{
  undefined4 in_s0;
  
  if (*(char *)(param_1 + 0x4c) == '\0') {
    *(undefined4 *)(param_1 + 0xc0) = in_s0;
    *(undefined1 *)(param_1 + 0xbc) = 1;
    return;
  }
  fn_0017fde4(*(undefined4 *)(param_1 + 0x14));
  fn_0017fc3c();
  return;
}



void fn_0069decc(int param_1,int param_2)

{
  undefined4 uVar1;
  
  *(char *)(param_1 + 0xd6) = (char)param_2;
  if (*(char *)(param_1 + 0x54) == '\0') {
    return;
  }
  uVar1 = fn_00156f24(DAT_008987bc,*(undefined4 *)(param_1 + 0x58));
  fn_002028d0(uVar1,*(undefined4 *)(&DAT_007c68c0 + param_2 * 4));
  return;
}



void fn_0069dd00(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  
  (**(code **)(*param_1 + 0x1c))(param_1,0,*(code **)(*param_1 + 0x1c),param_4,param_4);
  uVar4 = DAT_008987bc;
  if (param_1[5] != 0) {
    if ((char)param_1[0x15] != '\0') {
      fn_00661f24(DAT_008987bc,param_1[0x16]);
      fn_006617c4(uVar4,param_1[0x16]);
      param_1[0x16] = -1;
    }
    if ((int *)param_1[5] != (int *)0x0) {
      (**(code **)(*(int *)param_1[5] + 4))();
      param_1[5] = 0;
    }
  }
  *(undefined1 *)(param_1 + 0x13) = 0;
  uVar3 = 0;
  uVar4 = *(undefined4 *)(param_1[1] + 0x1c);
  if (param_1[0x11] - param_1[0x10] >> 2 != 0) {
    do {
      uVar5 = param_1[0x11] - param_1[0x10] >> 2;
      if (uVar5 <= uVar3) {
        fn_002ff628(9,&DAT_008c7670,&DAT_008c7670,uVar3,uVar5);
      }
      if (*(int *)(param_1[0x10] + uVar3 * 4) != -1) {
        fn_0015cba8(uVar4);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)(param_1[0x11] - param_1[0x10] >> 2));
  }
  uVar3 = param_1[0x11];
  uVar5 = param_1[0x10];
  if (uVar5 != uVar3) {
    uVar1 = uVar5;
    if (uVar3 <= uVar5) {
      do {
        uVar1 = uVar1 + 4;
      } while (uVar1 != uVar3);
    }
    param_1[0x11] = uVar3 - (uVar3 - uVar5 & 0xfffffffc);
  }
  uVar1 = param_1[0x10];
  param_1[0x10] = 0;
  uVar5 = param_1[0x11];
  param_1[0x11] = 0;
  iVar2 = param_1[0x12];
  param_1[0x12] = 0;
  uVar3 = uVar1;
  if (uVar5 < uVar1) {
    do {
      uVar3 = uVar3 + 4;
    } while (uVar3 != uVar5);
  }
  fn_001008c4(uVar1,(int)(iVar2 - uVar1) >> 2,0);
  if ((char)param_1[0x15] != '\0') {
    fn_0011ddb8();
    *(undefined1 *)(param_1 + 0x15) = 0;
  }
  return;
}



void fn_0069dc38(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int local_20;
  undefined4 local_1c;
  
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x1c);
  local_20 = 0;
  local_1c = fn_003b73e0(uVar2,0x18b,1,param_2);
  uVar2 = fn_003b7324(uVar2,local_1c);
  uVar3 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x1c);
  local_20 = fn_003b7c54(uVar3,0x18b,param_2,0);
  uVar1 = 0;
  if (local_20 != -1) {
    uVar1 = fn_003b7324(uVar3,local_20);
    fn_0079d450(param_1 + 0x40,&local_20);
  }
  fn_0069d674(param_1,uVar2,uVar1);
  fn_0079d450(param_1 + 0x40,&local_1c);
  return;
}



void fn_0069db88(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_20;
  int local_1c;
  
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x1c);
  local_20 = fn_003b7ae4(uVar2);
  uVar2 = fn_003b7324(uVar2,local_20);
  uVar3 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x1c);
  local_1c = fn_003b7c54(uVar3,param_2,param_4,0);
  uVar1 = 0;
  if (local_1c != -1) {
    uVar1 = fn_003b7324(uVar3,local_1c);
    fn_0079d450(param_1 + 0x40,&local_1c);
  }
  fn_0069d674(param_1,uVar2,uVar1);
  fn_0079d450(param_1 + 0x40,&local_20);
  return;
}


