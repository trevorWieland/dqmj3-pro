#include "0059352c_00593c70aa.h"



undefined4 fn_0059352c(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  undefined4 local_44;
  float local_40;
  float local_3c;
  float local_38;
  undefined4 local_34;
  float local_30;
  float local_2c;
  float local_28;
  undefined4 local_24;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    fVar4 = *(float *)(param_1 + 0x14);
    fn_0017fe34();
    fVar5 = *(float *)(param_1 + 0x18);
    fn_0017fe34();
    fVar6 = *(float *)(param_1 + 0x1c);
    fn_0017fe34();
    fVar17 = 0.0;
    in_fpscr = in_fpscr & 0xfffffff;
    fVar8 = ABS(fVar5 * 40.743664);
    fVar7 = ABS(fVar6 * 40.743664);
    for (fVar9 = ABS(fVar4 * 40.743664); 0x477fffff < (int)fVar9; fVar9 = fVar9 - 65536.0) {
    }
    for (; 0x477fffff < (int)fVar8; fVar8 = fVar8 - 65536.0) {
    }
    for (; 0x477fffff < (int)fVar7; fVar7 = fVar7 - 65536.0) {
    }
    uVar10 = VectorFloatToUnsigned(fVar9,3);
    uVar11 = VectorFloatToUnsigned(fVar8,3);
    uVar12 = VectorFloatToUnsigned(fVar7,3);
    uVar3 = uVar11 & 0xff;
    uVar2 = uVar10 & 0xff;
    fVar14 = (float)VectorUnsignedToFloat(uVar10 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
    fVar16 = (float)VectorUnsignedToFloat(uVar11 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
    uVar10 = uVar12 & 0xff;
    fVar15 = (float)VectorUnsignedToFloat(uVar12 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
    fVar13 = (float)(&DAT_007d6f20)[uVar2 * 4] +
             (fVar9 - fVar14) * (float)(&DAT_007d6f28)[uVar2 * 4];
    fVar14 = (float)(&DAT_007d6f24)[uVar2 * 4] +
             (fVar9 - fVar14) * (float)(&DAT_007d6f2c)[uVar2 * 4];
    fVar9 = (float)(&DAT_007d6f20)[uVar3 * 4] + (fVar8 - fVar16) * (float)(&DAT_007d6f28)[uVar3 * 4]
    ;
    local_28 = (float)(&DAT_007d6f24)[uVar3 * 4] +
               (fVar8 - fVar16) * (float)(&DAT_007d6f2c)[uVar3 * 4];
    if (fVar4 * 40.743664 < 0.0) {
      fVar13 = -fVar13;
    }
    fVar4 = (float)(&DAT_007d6f20)[uVar10 * 4] +
            (fVar7 - fVar15) * (float)(&DAT_007d6f28)[uVar10 * 4];
    fVar8 = (float)(&DAT_007d6f24)[uVar10 * 4] +
            (fVar7 - fVar15) * (float)(&DAT_007d6f2c)[uVar10 * 4];
    if (fVar5 * 40.743664 < 0.0) {
      fVar9 = -fVar9;
    }
    if (fVar6 * 40.743664 < 0.0) {
      fVar4 = -fVar4;
    }
    local_50 = fVar8 * local_28;
    local_40 = fVar4 * local_28;
    local_2c = fVar13 * local_28;
    local_28 = fVar14 * local_28;
    local_30 = -fVar9;
    local_4c = fVar13 * fVar8 * fVar9 - fVar14 * fVar4;
    local_38 = fVar14 * fVar4 * fVar9 - fVar13 * fVar8;
    local_48 = fVar13 * fVar4 + fVar14 * fVar8 * fVar9;
    local_3c = fVar14 * fVar8 + fVar13 * fVar4 * fVar9;
    local_44 = 0;
    local_34 = 0;
    local_24 = 0;
    fn_001781f0(&local_80,*(int *)(param_2 + 0x14) + param_3 * 0x30);
    fn_001ad06c(&local_80,&local_80,&local_50);
    uVar10 = 0;
    fVar9 = 1.0 / SQRT(local_80 * local_80 + local_70 * local_70 + local_60 * local_60);
    local_80 = local_80 * fVar9;
    local_70 = local_70 * fVar9;
    local_60 = local_60 * fVar9;
    fVar9 = 1.0 / SQRT(local_7c * local_7c + local_6c * local_6c + local_5c * local_5c);
    local_7c = local_7c * fVar9;
    local_6c = local_6c * fVar9;
    local_5c = local_5c * fVar9;
    fVar9 = 1.0 / SQRT(local_78 * local_78 + local_68 * local_68 + local_58 * local_58);
    local_78 = local_78 * fVar9;
    local_68 = local_68 * fVar9;
    local_58 = local_58 * fVar9;
    fVar9 = *(float *)(param_1 + 0x24);
    local_74 = local_74 - local_78 * fVar9;
    local_54 = local_54 - local_58 * fVar9;
    local_64 = (local_64 - fVar17 * fVar9) + *(float *)(param_1 + 0x28);
    if (*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) >> 3 != 0) {
      do {
        iVar1 = *(int *)(*(int *)(param_1 + 8) + uVar10 * 8);
        *(float *)(iVar1 + 0x94) = local_78;
        *(float *)(iVar1 + 0x98) = local_74;
        *(float *)(iVar1 + 0x9c) = local_70;
        *(float *)(iVar1 + 0x8c) = local_80;
        *(float *)(iVar1 + 0x90) = local_7c;
        *(float *)(iVar1 + 0xa0) = local_6c;
        *(float *)(iVar1 + 0xa4) = local_68;
        *(float *)(iVar1 + 0xa8) = local_64;
        *(float *)(iVar1 + 0xac) = local_60;
        *(float *)(iVar1 + 0xb0) = local_5c;
        *(float *)(iVar1 + 0xb4) = local_58;
        *(float *)(iVar1 + 0xb8) = local_54;
        fn_005434c8(*(undefined4 *)(*(int *)(param_1 + 8) + uVar10 * 8));
        uVar10 = uVar10 + 1;
      } while (uVar10 < (uint)(*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) >> 3));
    }
  }
  return 0;
}


