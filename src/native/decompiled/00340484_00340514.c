#include "00340484_00340514.h"



void fn_00340514(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  float fVar4;
  float *pfVar5;
  float *pfVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  float *pfVar10;
  float *pfVar11;
  uint uVar12;
  float *pfVar13;
  uint *puVar14;
  int iVar15;
  uint uVar16;
  uint in_fpscr;
  float in_s0;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar26;
  undefined8 uVar25;
  float fVar27;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [32];
  float local_48;
  float local_44;
  float local_40;
  float local_38;
  
  fn_00128f40(auStack_70);
  uVar1 = fn_00118290();
  iVar2 = fn_0011c184(L"rom:/data/Field/Table/holy_rail_param.nut",uVar1,4,5);
  if (iVar2 != 0) {
    fn_00145ac0();
  }
  uVar1 = fn_0012a26c(iVar2);
  uVar3 = fn_00145ac0(iVar2);
  fn_00128ee0(auStack_70,uVar3,uVar1);
  fn_0012d73c(iVar2);
  fn_0078e4e8(param_1 + 4);
  fn_001028d4(auStack_68,(char *)&DAT_00340970,param_2);
  iVar2 = fn_00128e54(auStack_70,auStack_68);
  iVar15 = 0;
  if (0 < iVar2 / 6) {
    uVar25 = 0x41a0000000000000;
    fVar17 = 0.0;
    do {
      fVar18 = (float)((ulonglong)uVar25 >> 0x20);
      fVar4 = (float)fn_00128e7c(auStack_70,auStack_68,iVar15 * 6);
      local_48 = (float)fn_00128e7c(auStack_70,auStack_68,iVar15 * 6 + 1);
      local_40 = (float)fn_00128e7c(auStack_70,auStack_68,iVar15 * 6 + 2);
      local_44 = (float)fn_00128e7c(auStack_70,auStack_68,iVar15 * 6 + 3);
      local_38 = (float)fn_00128e7c(auStack_70,auStack_68,iVar15 * 6 + 4);
      in_s0 = (float)fn_00128e7c(auStack_70,auStack_68,iVar15 * 6 + 5);
      pfVar13 = *(float **)(param_1 + 8);
      puVar14 = (uint *)(param_1 + 4);
      fVar26 = (float)VectorSignedToFloat(in_s0,(byte)(in_fpscr >> 0x16) & 3);
      fVar27 = fVar26 + fVar18;
      uVar25 = CONCAT44(fVar18,fVar27);
      if (pfVar13 == *(float **)(param_1 + 0xc)) {
        uVar8 = (int)((int)pfVar13 - *puVar14) >> 5;
        if (uVar8 < (uint)((int)((int)*(float **)(param_1 + 0xc) - *puVar14) >> 5)) {
          *(float **)(param_1 + 8) = pfVar13 + 8;
          if (pfVar13 != (float *)0x0) {
            *pfVar13 = pfVar13[-8];
            pfVar13[1] = pfVar13[-7];
            pfVar13[2] = pfVar13[-6];
            pfVar13[3] = pfVar13[-5];
            pfVar13[4] = pfVar13[-4];
            pfVar13[5] = pfVar13[-3];
            pfVar13[6] = pfVar13[-2];
            pfVar13[7] = pfVar13[-1];
          }
          pfVar10 = pfVar13 + -8;
          pfVar11 = pfVar13;
          if (pfVar13 < pfVar10) {
            iVar9 = (int)pfVar10 - (int)pfVar13;
            if (0 < iVar9) {
              if (iVar9 * 0x4000000 < 0) {
                pfVar10 = pfVar13 + -0x10;
                pfVar11 = pfVar13 + -8;
                *pfVar11 = *pfVar10;
                pfVar13[-7] = pfVar13[-0xf];
                pfVar13[-6] = pfVar13[-0xe];
                pfVar13[-5] = pfVar13[-0xd];
                pfVar13[-4] = pfVar13[-0xc];
                pfVar13[-3] = pfVar13[-0xb];
                pfVar13[-2] = pfVar13[-10];
                pfVar13[-1] = pfVar13[-9];
              }
              for (iVar9 = iVar9 >> 6; iVar9 != 0; iVar9 = iVar9 + -1) {
                fVar18 = pfVar10[-7];
                fVar19 = pfVar10[-6];
                fVar20 = pfVar10[-5];
                fVar21 = pfVar10[-4];
                fVar22 = pfVar10[-3];
                fVar23 = pfVar10[-2];
                fVar24 = pfVar10[-1];
                pfVar11[-8] = pfVar10[-8];
                pfVar11[-7] = fVar18;
                pfVar11[-6] = fVar19;
                pfVar11[-5] = fVar20;
                pfVar11[-4] = fVar21;
                pfVar11[-3] = fVar22;
                pfVar11[-2] = fVar23;
                pfVar11[-1] = fVar24;
                fVar18 = pfVar10[-0xf];
                fVar19 = pfVar10[-0xe];
                fVar20 = pfVar10[-0xd];
                fVar21 = pfVar10[-0xc];
                fVar22 = pfVar10[-0xb];
                fVar23 = pfVar10[-10];
                fVar24 = pfVar10[-9];
                pfVar11[-0x10] = pfVar10[-0x10];
                pfVar11[-0xf] = fVar18;
                pfVar11[-0xe] = fVar19;
                pfVar11[-0xd] = fVar20;
                pfVar11[-0xc] = fVar21;
                pfVar11[-0xb] = fVar22;
                pfVar11[-10] = fVar23;
                pfVar11[-9] = fVar24;
                pfVar10 = pfVar10 + -0x10;
                pfVar11 = pfVar11 + -0x10;
              }
            }
          }
          else {
            while (pfVar13 != pfVar10) {
              fVar18 = pfVar10[-7];
              fVar19 = pfVar10[-6];
              fVar20 = pfVar10[-5];
              fVar21 = pfVar10[-4];
              fVar22 = pfVar10[-3];
              fVar23 = pfVar10[-2];
              fVar24 = pfVar10[-1];
              pfVar11[-8] = pfVar10[-8];
              pfVar11[-7] = fVar18;
              pfVar11[-6] = fVar19;
              pfVar11[-5] = fVar20;
              pfVar11[-4] = fVar21;
              pfVar11[-3] = fVar22;
              pfVar11[-2] = fVar23;
              pfVar11[-1] = fVar24;
              pfVar11 = pfVar11 + -8;
              pfVar10 = pfVar10 + -8;
            }
          }
          *pfVar13 = fVar4;
          pfVar13[1] = local_48;
          pfVar13[2] = local_40;
          pfVar13[3] = local_44;
          pfVar13[4] = local_38;
          pfVar13[7] = fVar17;
          pfVar13[5] = fVar26;
          pfVar13[6] = fVar27;
          in_s0 = fVar17;
        }
        else {
          uVar16 = uVar8 + (uVar8 >> 1) + (uVar8 >> 3);
          if (uVar16 < uVar8 + 0x20) {
            uVar16 = uVar8 + 0x20;
          }
          pfVar5 = (float *)fn_00100fc6(uVar16 << 5,0);
          pfVar11 = pfVar5;
          for (pfVar10 = (float *)*puVar14; pfVar10 != pfVar13; pfVar10 = pfVar10 + 8) {
            if (pfVar11 != (float *)0x0) {
              in_s0 = *pfVar10;
              fVar27 = pfVar10[1];
              fVar18 = pfVar10[2];
              fVar19 = pfVar10[3];
              fVar20 = pfVar10[4];
              fVar21 = pfVar10[5];
              fVar22 = pfVar10[6];
              fVar23 = pfVar10[7];
              *pfVar11 = in_s0;
              pfVar11[1] = fVar27;
              pfVar11[2] = fVar18;
              pfVar11[3] = fVar19;
              pfVar11[4] = fVar20;
              pfVar11[5] = fVar21;
              pfVar11[6] = fVar22;
              pfVar11[7] = fVar23;
            }
            pfVar11 = pfVar11 + 8;
          }
          pfVar10 = (float *)(((int)pfVar13 - *puVar14 & 0xffffffe0) + (int)pfVar5);
          if (pfVar10 != (float *)0x0) {
            *pfVar10 = fVar4;
            pfVar10[1] = local_48;
            pfVar10[2] = local_40;
            pfVar10[3] = local_44;
            pfVar10[4] = local_38;
            pfVar10[7] = fVar17;
            pfVar10[5] = fVar26;
            pfVar10[6] = (float)uVar25;
            in_s0 = fVar17;
          }
          pfVar11 = *(float **)(param_1 + 8);
          pfVar10 = (float *)(((int)pfVar13 - *puVar14 & 0xffffffe0) + (int)pfVar5);
          for (; pfVar13 != pfVar11; pfVar13 = pfVar13 + 8) {
            pfVar6 = pfVar10 + 8;
            if (pfVar6 != (float *)0x0) {
              in_s0 = *pfVar13;
              fVar4 = pfVar13[1];
              fVar26 = pfVar13[2];
              fVar27 = pfVar13[3];
              fVar18 = pfVar13[4];
              fVar19 = pfVar13[5];
              fVar20 = pfVar13[6];
              fVar21 = pfVar13[7];
              *pfVar6 = in_s0;
              pfVar10[9] = fVar4;
              pfVar10[10] = fVar26;
              pfVar10[0xb] = fVar27;
              pfVar10[0xc] = fVar18;
              pfVar10[0xd] = fVar19;
              pfVar10[0xe] = fVar20;
              pfVar10[0xf] = fVar21;
            }
            pfVar10 = pfVar6;
          }
          uVar7 = *puVar14;
          uVar12 = *(uint *)(param_1 + 8);
          uVar8 = uVar7;
          if (uVar12 < uVar7) {
            do {
              uVar8 = uVar8 + 0x20;
            } while (uVar8 != uVar12);
          }
          fn_001008c4(uVar7,(int)(*(int *)(param_1 + 0xc) - uVar7) >> 5,0);
          *(float **)(param_1 + 0xc) = pfVar5 + uVar16 * 8;
          *(float **)(param_1 + 8) = pfVar5 + ((int)(uVar12 - uVar7) >> 5) * 8 + 8;
          *puVar14 = (uint)pfVar5;
        }
      }
      else {
        *(float **)(param_1 + 8) = pfVar13 + 8;
        if (pfVar13 != (float *)0x0) {
          *pfVar13 = fVar4;
          pfVar13[1] = local_48;
          pfVar13[2] = local_40;
          pfVar13[3] = local_44;
          pfVar13[4] = local_38;
          pfVar13[7] = fVar17;
          pfVar13[5] = fVar26;
          pfVar13[6] = fVar27;
          in_s0 = fVar17;
        }
      }
      iVar15 = iVar15 + 1;
    } while (iVar15 < iVar2 / 6);
  }
  uVar25 = 0x3c23d70a;
  iVar2 = 0;
  do {
    fn_005f6dac(auStack_70,(char *)&DAT_00340994,iVar2 << 1);
    (&DAT_00892044)[iVar2 * 3] = in_s0;
    fn_005f6dac(auStack_70,(char *)&DAT_00340994,iVar2 * 2 + 1);
    (&DAT_00892048)[iVar2 * 3] = in_s0;
    iVar15 = iVar2 + 1;
    (&DAT_0089204c)[iVar2 * 3] = (int)uVar25;
    iVar2 = iVar15;
  } while (iVar15 < 5);
  fn_005f6dac(auStack_70,(char *)&DAT_003409b0,0);
  DAT_00891fc0 = in_s0;
  fn_005f6dac(auStack_70,(char *)&DAT_003409b0,1);
  DAT_00891fc4 = in_s0;
  fn_005f6dac(auStack_70,(char *)&DAT_003409b0,2);
  DAT_00891fc8 = in_s0;
  fn_005f6dac(auStack_70,(char *)&DAT_003409b0,3);
  DAT_00891fcc = in_s0;
  fn_005f6dac(auStack_70,(char *)&DAT_003409b0,4);
  fVar17 = (float)(int)in_s0;
  DAT_00891fd0 = fVar17;
  fn_005f6dac(auStack_70,(char *)&DAT_003409b0,5);
  DAT_00891fd4 = fVar17;
  fn_005f6dac(auStack_70,(char *)&DAT_003409b0,6);
  DAT_00891fd8 = fVar17;
  fn_005f6dac(auStack_70,(char *)&DAT_003409b0,7);
  DAT_00891fdc = fVar17;
  fn_005f6dac(auStack_70,(char *)&DAT_003409b0,8);
  DAT_00891fe0 = fVar17;
  fn_005f6dac(auStack_70,(char *)&DAT_003409b0,9);
  DAT_00891fe4 = fVar17;
  fn_005f6dac(auStack_70,(char *)&DAT_003409b0,10);
  DAT_00891fe8 = fVar17;
  fn_005f6dac(auStack_70,(char *)&DAT_003409b0,0xb);
  DAT_00891fec = fVar17;
  fn_005f6dac(auStack_70,(char *)&DAT_003409b0,0xc);
  DAT_00891ff0 = fVar17;
  fn_005f6dac(auStack_70,(char *)&DAT_003409b0,0xd);
  DAT_00891ff4 = fVar17;
  fn_005f6dac(auStack_70,(char *)&DAT_003409b0,0xe);
  DAT_00891ff8 = fVar17;
  fn_005f6dac(auStack_70,(char *)&DAT_003409b0,0xf);
  DAT_00891ffc = fVar17;
  fn_005f6dac(auStack_70,(char *)&DAT_003409b0,0x10);
  DAT_00892000 = fVar17;
  fn_005f6dac(auStack_70,(char *)&DAT_003409b0,0x11);
  fVar17 = (float)(int)fVar17;
  DAT_00892004 = fVar17;
  fn_005f6dac(auStack_70,(char *)&DAT_003409b0,0x12);
  fVar17 = (float)(int)fVar17;
  DAT_00892008 = fVar17;
  fn_005f6dac(auStack_70,(char *)&DAT_003409b0,0x13);
  fVar17 = (float)(int)fVar17;
  DAT_0089200c = fVar17;
  fn_005f6dac(auStack_70,(char *)&DAT_003409b0,0x14);
  fVar17 = (float)(int)fVar17;
  DAT_00892010 = fVar17;
  fn_005f6dac(auStack_70,(char *)&DAT_003409b0,0x15);
  DAT_00892014 = fVar17;
  fn_005f6dac(auStack_70,(char *)&DAT_003409b0,0x16);
  DAT_00892018 = fVar17;
  fn_005f6dac(auStack_70,(char *)&DAT_003409b0,0x17);
  fVar17 = (float)(int)fVar17;
  DAT_0089201c = fVar17;
  fn_005f6dac(auStack_70,(char *)&DAT_003409b0,0x18);
  fVar17 = (float)(int)fVar17;
  DAT_00892020 = fVar17;
  fn_005f6dac(auStack_70,(char *)&DAT_003409b0,0x19);
  DAT_00892024 = fVar17;
  fn_005f6dac(auStack_70,(char *)&DAT_003409b0,0x1a);
  fVar17 = (float)(int)fVar17;
  DAT_00892028 = fVar17;
  fn_005f6dac(auStack_70,(char *)&DAT_003409b0,0x1b);
  DAT_0089202c = fVar17;
  fn_005f6dac(auStack_70,(char *)&DAT_003409b0,0x1c);
  DAT_00892030 = fVar17;
  fn_005f6dac(auStack_70,(char *)&DAT_003409b0,0x1d);
  fVar17 = (float)(int)fVar17;
  DAT_00892034 = fVar17;
  fn_005f6dac(auStack_70,(char *)&DAT_003409b0,0x1e);
  fVar17 = (float)(int)fVar17;
  DAT_00892038 = fVar17;
  fn_005f6dac(auStack_70,(char *)&DAT_003409b0,0x1f);
  fVar17 = (float)(int)fVar17;
  DAT_0089203c = fVar17;
  fn_005f6dac(auStack_70,(char *)&DAT_003409b0,0x20);
  DAT_00892040 = (int)fVar17;
  fn_00128fc4(auStack_70);
  return;
}



char * fn_00340484(undefined4 param_1)

{
  switch(param_1) {
  default:
    return (char *)0x0;
  case 1:
  case 2:
  case 3:
    return "Obj/o_com_43";
  case 4:
    return "Item/o_item01B";
  case 5:
    return "Obj/o_com_50";
  case 6:
    return "Obj/o_com_51";
  }
}


