#include "007a4f44_007a52d8.h"



void fn_007a52d8(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  piVar2 = param_1;
  if (param_1 == param_2) {
    return;
  }
  while (piVar1 = piVar2 + 1, piVar1 != param_2) {
    iVar6 = *piVar1;
    piVar5 = piVar1;
    if (iVar6 >> 0x10 < (int)*(short *)((int)param_1 + 2)) {
      piVar5 = piVar2 + 2;
      piVar3 = piVar1;
      if (param_1 < piVar1) {
        iVar4 = (int)piVar1 - (int)param_1;
        if (0 < iVar4) {
          if (iVar4 * 0x20000000 < 0) {
            *piVar1 = *piVar2;
            piVar3 = piVar2;
            piVar5 = piVar1;
          }
          for (iVar4 = iVar4 >> 3; iVar4 != 0; iVar4 = iVar4 + -1) {
            piVar5[-1] = piVar3[-1];
            piVar3 = piVar3 + -2;
            piVar5 = piVar5 + -2;
            *piVar5 = *piVar3;
          }
        }
      }
      else {
        while (param_1 != piVar3) {
          piVar5 = piVar5 + -1;
          *piVar5 = piVar3[-1];
          piVar3 = piVar3 + -1;
        }
      }
      *param_1 = iVar6;
      piVar2 = piVar1;
    }
    else {
      while (iVar6 >> 0x10 < (int)*(short *)((int)piVar5 - 2)) {
        *piVar5 = piVar5[-1];
        piVar5 = piVar5 + -1;
      }
      *piVar5 = iVar6;
      piVar2 = piVar1;
    }
  }
  return;
}



void fn_007a516c(uint param_1,uint param_2,code *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  
  if (param_1 == param_2) {
    return;
  }
  uVar6 = param_1 + 6;
  if (uVar6 != param_2) {
    do {
      fn_0019bc50(&local_30,uVar6);
      iVar1 = (*param_3)(&local_30,param_1);
      if (iVar1 == 0) {
        local_38 = local_30;
        uStack_34 = uStack_2c;
        iVar1 = (*param_3)(&local_38);
        uVar5 = uVar6;
        while (iVar1 != 0) {
          fn_0019bc50(uVar5,uVar5 - 6);
          iVar1 = (*param_3)(&local_38);
          uVar5 = uVar5 - 6;
        }
        puVar4 = &local_38;
      }
      else {
        uVar5 = uVar6 + 6;
        uVar3 = uVar6;
        if (param_1 < uVar6) {
          iVar1 = uVar6 - param_1;
          if (0 < iVar1) {
            iVar2 = iVar1 / 6 + (iVar1 >> 0x1f);
            if ((iVar2 - (iVar1 >> 0x1f) & 1U) != 0) {
              uVar3 = uVar6 - 6;
              fn_0019bc50(uVar6,uVar3);
              uVar5 = uVar6;
            }
            for (iVar2 = iVar2 / 2; iVar2 != 0; iVar2 = iVar2 + -1) {
              fn_0019bc50(uVar5 - 6,uVar3 - 6);
              uVar5 = uVar5 - 0xc;
              uVar3 = uVar3 - 0xc;
              fn_0019bc50();
            }
          }
        }
        else {
          while (param_1 != uVar3) {
            uVar5 = uVar5 - 6;
            fn_0019bc50(uVar5,uVar3 - 6);
            uVar3 = uVar3 - 6;
          }
        }
        uVar5 = param_1;
        puVar4 = &local_30;
      }
      fn_0019bc50(uVar5,puVar4);
      uVar6 = uVar6 + 6;
    } while (uVar6 != param_2);
  }
  return;
}



void fn_007a4f44(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint unaff_r6;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  float fVar17;
  uint local_48;
  byte bStack_43;
  
  if (param_1 != param_2) {
    param_3 = param_1 + 7;
  }
  if (param_1 == param_2 || param_3 == param_2) {
    return;
  }
  do {
    uVar1 = param_3[4];
    unaff_r6 = (uint)(byte)*param_3 | unaff_r6 & 0xffffff00;
    uVar7 = param_3[3];
    fVar17 = (float)param_3[2];
    uVar8 = param_3[5];
    uVar10 = param_3[6];
    uVar2 = param_3[1];
    if ((uVar1 == param_1[4]) &&
       (uVar11 = (uVar2 & 0xffff) >> 8, uVar11 != *(byte *)((int)param_1 + 5))) {
      if (uVar11 < *(byte *)((int)param_1 + 5)) goto LAB_007a4fcc;
LAB_007a5098:
      local_48 = CONCAT31(((unsigned int)(local_48) >> 8) & 0xffffff,(byte)*param_3);
      puVar3 = param_3 + -7;
      bStack_43 = (byte)(uVar2 >> 8);
      puVar5 = param_3;
      if ((uVar1 != param_3[-3]) || (bStack_43 == *(byte *)((int)param_3 + -0x17))) {
        fVar9 = (float)param_3[-5];
        goto joined_r0x007a50f8;
      }
      puVar6 = param_3;
      if (bStack_43 < *(byte *)((int)param_3 + -0x17)) {
        do {
          while( true ) {
            puVar5 = puVar3;
            uVar11 = puVar5[1];
            uVar12 = puVar5[2];
            uVar13 = puVar5[3];
            uVar14 = puVar5[4];
            uVar15 = puVar5[5];
            uVar16 = puVar5[6];
            *puVar6 = *puVar5;
            puVar6[1] = uVar11;
            puVar6[2] = uVar12;
            puVar6[3] = uVar13;
            puVar6[4] = uVar14;
            puVar6[5] = uVar15;
            puVar6[6] = uVar16;
            puVar3 = puVar5 + -7;
            if ((uVar1 != puVar5[-3]) || (bStack_43 == *(byte *)((int)puVar5 + -0x17))) break;
            puVar6 = puVar5;
            if (*(byte *)((int)puVar5 + -0x17) <= bStack_43) goto LAB_007a514c;
          }
          fVar9 = (float)puVar5[-5];
joined_r0x007a50f8:
          puVar6 = puVar5;
        } while (fVar9 < fVar17);
      }
LAB_007a514c:
      *puVar5 = local_48;
      puVar5[1] = uVar2;
      puVar5[2] = (uint)fVar17;
      puVar5[3] = uVar7;
      puVar5[4] = uVar1;
      puVar5[5] = uVar8;
      puVar5[6] = uVar10;
    }
    else {
      if (fVar17 <= (float)param_1[2]) goto LAB_007a5098;
LAB_007a4fcc:
      puVar3 = param_3 + 7;
      puVar5 = param_3;
      if (param_1 < param_3) {
        uVar11 = (int)param_3 - (int)param_1;
        if (0 < (int)uVar11) {
          iVar4 = (int)((longlong)(int)uVar11 * -0x6db6db6d + ((ulonglong)uVar11 << 0x20) >> 0x20);
          if (((iVar4 >> 4) - (iVar4 >> 0x1f) & 1U) != 0) {
            puVar5 = param_3 + -7;
            *param_3 = *puVar5;
            param_3[1] = param_3[-6];
            param_3[2] = param_3[-5];
            param_3[3] = param_3[-4];
            param_3[4] = param_3[-3];
            param_3[5] = param_3[-2];
            param_3[6] = param_3[-1];
            puVar3 = param_3;
          }
          iVar4 = (int)((longlong)(int)uVar11 * -0x6db6db6d + ((ulonglong)uVar11 << 0x20) >> 0x20);
          for (iVar4 = (iVar4 >> 4) - (iVar4 >> 0x1f) >> 1; iVar4 != 0; iVar4 = iVar4 + -1) {
            uVar11 = puVar5[-6];
            uVar12 = puVar5[-5];
            uVar13 = puVar5[-4];
            uVar14 = puVar5[-3];
            uVar15 = puVar5[-2];
            uVar16 = puVar5[-1];
            puVar3[-7] = puVar5[-7];
            puVar3[-6] = uVar11;
            puVar3[-5] = uVar12;
            puVar3[-4] = uVar13;
            puVar3[-3] = uVar14;
            puVar3[-2] = uVar15;
            puVar3[-1] = uVar16;
            uVar11 = puVar5[-0xd];
            uVar12 = puVar5[-0xc];
            uVar13 = puVar5[-0xb];
            uVar14 = puVar5[-10];
            uVar15 = puVar5[-9];
            uVar16 = puVar5[-8];
            puVar3[-0xe] = puVar5[-0xe];
            puVar3[-0xd] = uVar11;
            puVar3[-0xc] = uVar12;
            puVar3[-0xb] = uVar13;
            puVar3[-10] = uVar14;
            puVar3[-9] = uVar15;
            puVar3[-8] = uVar16;
            puVar3 = puVar3 + -0xe;
            puVar5 = puVar5 + -0xe;
          }
        }
      }
      else {
        while (param_1 != puVar5) {
          uVar11 = puVar5[-6];
          uVar12 = puVar5[-5];
          uVar13 = puVar5[-4];
          uVar14 = puVar5[-3];
          uVar15 = puVar5[-2];
          uVar16 = puVar5[-1];
          puVar3[-7] = puVar5[-7];
          puVar3[-6] = uVar11;
          puVar3[-5] = uVar12;
          puVar3[-4] = uVar13;
          puVar3[-3] = uVar14;
          puVar3[-2] = uVar15;
          puVar3[-1] = uVar16;
          puVar3 = puVar3 + -7;
          puVar5 = puVar5 + -7;
        }
      }
      param_1[1] = uVar2;
      *param_1 = unaff_r6;
      param_1[2] = (uint)fVar17;
      param_1[3] = uVar7;
      param_1[4] = uVar1;
      param_1[5] = uVar8;
      param_1[6] = uVar10;
    }
    param_3 = param_3 + 7;
    if (param_3 == param_2) {
      return;
    }
  } while( true );
}


