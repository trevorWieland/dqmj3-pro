#include "0059afc8_0059b8dc.h"



void fn_0059b8dc(int param_1)

{
  int iVar1;
  uint in_fpscr;
  float in_s0;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x18) = 0x5a;
    iVar1 = fn_003b5e30(DAT_008913e4,param_1 + 0x30);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x18) = 0;
    }
    else {
      fn_005f65fc();
      fVar6 = 0.5;
      fVar5 = 1.0;
      fVar7 = 0.3;
      fVar2 = ((in_s0 - 0.5) * 0.3 + 1.0) * *(float *)(param_1 + 0x30);
      *(float *)(param_1 + 0x30) = fVar2;
      fn_005f65fc();
      fVar2 = (fVar5 + (fVar2 - fVar6) * fVar7) * *(float *)(param_1 + 0x34);
      *(float *)(param_1 + 0x34) = fVar2;
      fn_005f65fc();
      fVar2 = (fVar5 + (fVar2 - fVar6) * fVar7) * *(float *)(param_1 + 0x38);
      *(float *)(param_1 + 0x38) = fVar2;
      (**(code **)(**(int **)(param_1 + 0x14) + 0x94))();
      fVar4 = *(float *)(param_1 + 0x30);
      fVar6 = *(float *)(param_1 + 0x34);
      fVar7 = *(float *)(param_1 + 0x38);
      fVar5 = fVar5 / SQRT(fVar4 * fVar4 + fVar6 * fVar6 + fVar7 * fVar7);
      fVar7 = fVar7 * fVar5;
      fVar6 = fVar6 * fVar5;
      *(float *)(param_1 + 0x30) = fVar4 * fVar5;
      *(float *)(param_1 + 0x34) = fVar6;
      *(float *)(param_1 + 0x38) = fVar7;
      fn_006dc524(param_1 + 0x30);
      *(float *)(param_1 + 0x30) = fVar2 * 2.0;
      *(float *)(param_1 + 0x34) = fVar6 * 2.0;
      *(float *)(param_1 + 0x38) = fVar7 * 2.0;
    }
    *(undefined4 *)(param_1 + 0x10) = 1;
    return;
  }
  if (iVar1 == 1) {
    if (*(int *)(param_1 + 0x18) == 0) {
      iVar1 = fn_00163868(200);
      uVar3 = VectorSignedToFloat(iVar1 + -100,(byte)(in_fpscr >> 0x16) & 3);
      *(undefined4 *)(param_1 + 0x58) = uVar3;
      iVar1 = fn_00163868(0x32);
      uVar3 = VectorSignedToFloat(iVar1 + -0x19,(byte)(in_fpscr >> 0x16) & 3);
      *(undefined4 *)(param_1 + 0x5c) = uVar3;
      iVar1 = fn_00163868(200);
      uVar3 = VectorSignedToFloat(iVar1 + -100,(byte)(in_fpscr >> 0x16) & 3);
      *(undefined4 *)(param_1 + 0x60) = uVar3;
      iVar1 = *(int *)(param_1 + 0x14);
      *(float *)(param_1 + 0x58) = *(float *)(param_1 + 0x58) + *(float *)(iVar1 + 0x20);
      *(float *)(param_1 + 0x5c) = *(float *)(param_1 + 0x5c) + *(float *)(iVar1 + 0x24);
      *(float *)(param_1 + 0x60) = *(float *)(param_1 + 0x60) + *(float *)(iVar1 + 0x28);
      *(undefined4 *)(param_1 + 0x18) = 0x1e;
      *(undefined4 *)(param_1 + 0x10) = 2;
    }
    else {
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
    }
                    /* WARNING: Could not recover jumptable at 0x0059ba84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x14) + 0x38))(*(int **)(param_1 + 0x14),param_1 + 0x30,1);
    return;
  }
  if (iVar1 == 2) {
    if ((*(int *)(param_1 + 0x18) != 0) &&
       (iVar1 = (**(code **)(**(int **)(param_1 + 0x14) + 0x28))
                          (*(int **)(param_1 + 0x14),param_1 + 0x58), iVar1 == 0)) {
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
      return;
    }
    *(undefined1 *)(*(int *)(param_1 + 0x14) + 4) = 0;
    if (*(char *)(*(int *)(param_1 + 4) + 4) == '\0') {
      *(undefined4 *)(*(int *)(param_1 + 4) + 0xc) = 1;
    }
  }
  return;
}



undefined4 fn_0059b7cc(int *param_1,int param_2)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  
  if (param_2 == 0) {
    (**(code **)(*param_1 + 0xc))();
  }
  else {
    if (param_2 == 2) {
      pcVar2 = *(code **)(*param_1 + 0x14);
    }
    else {
      if (param_2 != 1) {
        if (param_2 != 0x15) {
          return 1;
        }
        if (param_1[3] != 1) {
          return 1;
        }
        iVar3 = (int)*(short *)(*(int *)(param_1[5] + 0x19c) + 10);
        if ((iVar3 != 0) &&
           (piVar1 = (int *)fn_002fdd54(param_1,iVar3,param_1 + 0x16,0), piVar1 != (int *)0x0)) {
          (**(code **)(*piVar1 + 0x1dc))(piVar1,2,0x2f,0);
          if ((char)piVar1[1] == '\0') {
            piVar1[3] = 2;
          }
          (**(code **)(*piVar1 + 0x1b0))(piVar1,1);
        }
        (**(code **)(*(int *)param_1[5] + 0x54))((int *)param_1[5],0);
        *(undefined1 *)(param_1[5] + 4) = 0;
        (**(code **)(*(int *)param_1[5] + 0x1c4))((int *)param_1[5],1);
        return 1;
      }
      pcVar2 = *(code **)(*param_1 + 0x10);
    }
    (*pcVar2)();
  }
  return 1;
}



void fn_0059b0b4(int param_1)

{
  bool bVar1;
  int iVar2;
  float *pfVar3;
  int *piVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_68;
  float fStack_64;
  float fStack_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float fStack_3c;
  undefined1 auStack_38 [36];
  
  iVar2 = param_1;
  if (DAT_008913e4 != 0) {
    iVar2 = *(int *)(DAT_008913e4 + 0x14);
  }
  if (DAT_008913e4 != 0 && iVar2 != 0) {
    iVar2 = fn_003b5ed4(DAT_008913e4,(int)**(short **)(*(int *)(param_1 + 0x14) + 0x19c));
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    else {
      iVar2 = fn_006a99b0(*(undefined4 *)(param_1 + 0x14));
      if ((iVar2 != 0) ||
         (iVar2 = fn_003b5f3c(DAT_008913e4,&local_50,&local_5c,auStack_38), iVar2 == 0))
      goto LAB_0059b1f4;
      iVar2 = *(int *)(param_1 + 0x14);
      fVar8 = *(float *)(iVar2 + 0x20) - local_50;
      fVar6 = *(float *)(iVar2 + 0x24) - local_4c;
      uVar13 = 0x40400000;
      fVar5 = *(float *)(iVar2 + 0x28) - local_48;
      iVar2 = *(int *)(param_1 + 0x14);
      fVar12 = 0.2;
      fVar11 = 1.0;
      fVar10 = local_5c * fVar8 + local_58 * fVar6 + local_54 * fVar5;
      local_88 = (local_5c * fVar10 + local_50) - *(float *)(iVar2 + 0x20);
      local_84 = (local_58 * fVar10 + local_4c) - *(float *)(iVar2 + 0x24);
      local_80 = (local_54 * fVar10 + local_48) - *(float *)(iVar2 + 0x28);
      if (*(int *)(param_1 + 0x10) == 0) {
        fVar5 = fVar10 / SQRT(fVar8 * fVar8 + fVar6 * fVar6 + fVar5 * fVar5);
        fn_006f9b80();
        fVar6 = 30.0;
        fn_0017fe34();
        if (fVar6 < fVar5) {
          fVar10 = *(float *)(param_1 + 0x30);
          fVar5 = *(float *)(param_1 + 0x34);
          fVar6 = *(float *)(param_1 + 0x38);
          fVar8 = SQRT(fVar10 * fVar10 + fVar5 * fVar5 + fVar6 * fVar6);
          pfVar3 = (float *)(param_1 + 0x30);
          if ((int)fVar8 < 0x40400001) {
            *pfVar3 = *pfVar3 + local_5c * 0.05;
            *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x34) + local_58 * 0.05;
            *(float *)(param_1 + 0x38) = *(float *)(param_1 + 0x38) + local_54 * 0.05;
          }
          else {
            fVar8 = fVar11 / fVar8;
            fVar6 = fVar6 * fVar8;
            *pfVar3 = fVar10 * fVar8;
            *(float *)(param_1 + 0x34) = fVar5 * fVar8;
            *(float *)(param_1 + 0x38) = fVar6;
            fn_006dc524();
            *(undefined4 *)(param_1 + 0x30) = uVar13;
            *(float *)(param_1 + 0x34) = fVar6;
            *(float *)(param_1 + 0x38) = fVar8;
          }
          *(float *)(param_1 + 0x78) = fVar11;
          *(float *)(param_1 + 0x74) =
               SQRT(*(float *)(param_1 + 0x30) * *(float *)(param_1 + 0x30) +
                    *(float *)(param_1 + 0x34) * *(float *)(param_1 + 0x34) +
                    *(float *)(param_1 + 0x38) * *(float *)(param_1 + 0x38));
          piVar4 = *(int **)(param_1 + 0x14);
          fVar6 = fVar11 / SQRT(local_88 * local_88 + local_84 * local_84 + local_80 * local_80);
          local_88 = local_88 * fVar6;
          fVar8 = local_84 * fVar6;
          local_80 = local_80 * fVar6;
          fVar5 = *(float *)(param_1 + 0x78);
          local_84 = fVar8;
          fn_006dc524(&local_88);
          local_68 = *(float *)(param_1 + 0x30) + fVar5;
          fStack_60 = *(float *)(param_1 + 0x38) + fVar8;
          fStack_64 = *(float *)(param_1 + 0x34) + fVar6;
          (**(code **)(*piVar4 + 0x38))(piVar4,&local_68,0);
          fVar11 = fVar11 / SQRT(local_88 * local_88 + local_84 * local_84 + local_80 * local_80);
          local_88 = local_88 * fVar11;
          fVar6 = local_80 * fVar11;
          local_84 = local_84 * fVar11;
          fVar5 = *(float *)(param_1 + 0x78);
          local_80 = fVar6;
          fn_006dc524(&local_88);
          iVar2 = *(int *)(param_1 + 0x14);
          local_7c = *(float *)(iVar2 + 0x20) - (*(float *)(param_1 + 0x30) + fVar5);
          local_78 = *(float *)(iVar2 + 0x24) - (*(float *)(param_1 + 0x34) + fVar6);
          local_74 = *(float *)(iVar2 + 0x28) - (*(float *)(param_1 + 0x38) + fVar11);
          fn_001c7764(*(undefined4 *)(param_1 + 0x14),&local_7c);
          return;
        }
        *(undefined4 *)(param_1 + 0x10) = 1;
        *(float *)(param_1 + 0x78) = fVar11;
      }
      else if (*(int *)(param_1 + 0x10) != 1) {
        return;
      }
      fVar5 = *(float *)(param_1 + 0x78);
      fVar6 = 0.0;
      if (fVar5 <= SQRT(local_88 * local_88 + local_84 * local_84 + local_80 * local_80)) {
        if ((int)fVar5 < 0x40400001) {
          *(float *)(param_1 + 0x78) = fVar5 + fVar12;
        }
        else {
          *(undefined4 *)(param_1 + 0x78) = uVar13;
        }
      }
      else {
        fVar8 = *(float *)(param_1 + 0x30);
        fVar9 = *(float *)(param_1 + 0x34);
        fVar12 = *(float *)(param_1 + 0x38);
        if (local_5c * fVar8 + local_58 * fVar9 + local_54 * fVar12 < 0.0) {
          fVar7 = fVar8 * fVar8 + fVar9 * fVar9;
          fVar5 = SQRT(fVar7 + fVar12 * fVar12) + fVar5;
          fVar7 = fVar11 / SQRT(fVar7 + fVar12 * fVar12);
          fVar12 = fVar12 * fVar7;
          *(float *)(param_1 + 0x30) = fVar8 * fVar7;
          *(float *)(param_1 + 0x34) = fVar9 * fVar7;
          *(float *)(param_1 + 0x38) = fVar12;
          fn_006dc524(param_1 + 0x30);
          *(float *)(param_1 + 0x30) = fVar5;
          *(float *)(param_1 + 0x34) = fVar12;
          *(float *)(param_1 + 0x38) = fVar7;
        }
        *(float *)(param_1 + 0x78) = fVar6;
      }
      fVar8 = *(float *)(param_1 + 0x30);
      fVar9 = *(float *)(param_1 + 0x34);
      fVar12 = *(float *)(param_1 + 0x38);
      fVar5 = fVar8 * fVar8 + fVar9 * fVar9;
      pfVar3 = (float *)(param_1 + 0x30);
      if ((int)SQRT(fVar5 + fVar12 * fVar12) < 0x40a00001) {
        *pfVar3 = *pfVar3 - local_5c * 0.1;
        *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x34) - local_58 * 0.1;
        *(float *)(param_1 + 0x38) = *(float *)(param_1 + 0x38) - local_54 * 0.1;
      }
      else {
        fVar5 = fVar11 / SQRT(fVar5 + fVar12 * fVar12);
        fVar8 = fVar8 * fVar5;
        *pfVar3 = fVar8;
        *(float *)(param_1 + 0x34) = fVar9 * fVar5;
        *(float *)(param_1 + 0x38) = fVar12 * fVar5;
        uVar13 = 0x40a00000;
        fn_006dc524();
        *(undefined4 *)(param_1 + 0x30) = uVar13;
        *(float *)(param_1 + 0x34) = fVar8;
        *(float *)(param_1 + 0x38) = fVar12;
      }
      piVar4 = *(int **)(param_1 + 0x14);
      fVar12 = fVar11 / SQRT(local_88 * local_88 + local_84 * local_84 + local_80 * local_80);
      local_88 = local_88 * fVar12;
      fVar8 = local_80 * fVar12;
      local_84 = local_84 * fVar12;
      fVar5 = *(float *)(param_1 + 0x78);
      local_80 = fVar8;
      fn_006dc524(&local_88);
      local_44 = *(float *)(param_1 + 0x30) + fVar5;
      local_40 = *(float *)(param_1 + 0x34) + fVar8;
      fStack_3c = *(float *)(param_1 + 0x38) + fVar12;
      (**(code **)(*piVar4 + 0x38))(piVar4,&local_44,0);
      fVar11 = fVar11 / SQRT(local_88 * local_88 + local_84 * local_84 + local_80 * local_80);
      local_88 = local_88 * fVar11;
      fVar8 = local_80 * fVar11;
      local_84 = local_84 * fVar11;
      fVar5 = *(float *)(param_1 + 0x78);
      local_80 = fVar8;
      fn_006dc524(&local_88);
      iVar2 = *(int *)(param_1 + 0x14);
      local_7c = *(float *)(iVar2 + 0x20) - (*(float *)(param_1 + 0x30) + fVar5);
      local_78 = *(float *)(iVar2 + 0x24) - (*(float *)(param_1 + 0x34) + fVar8);
      local_74 = *(float *)(iVar2 + 0x28) - (*(float *)(param_1 + 0x38) + fVar11);
      fn_001c7764(*(undefined4 *)(param_1 + 0x14),&local_7c);
      iVar2 = *(int *)(param_1 + 0x14);
      local_50 = *(float *)(iVar2 + 0x20) - local_50;
      local_4c = *(float *)(iVar2 + 0x24) - local_4c;
      local_48 = *(float *)(iVar2 + 0x28) - local_48;
      bVar1 = local_50 * local_50 + local_4c * local_4c + local_48 * local_48 <
              *(float *)(param_1 + 0x30) * *(float *)(param_1 + 0x30) +
              *(float *)(param_1 + 0x34) * *(float *)(param_1 + 0x34) +
              *(float *)(param_1 + 0x38) * *(float *)(param_1 + 0x38);
      if (bVar1 || (bVar1 || fVar10 < fVar6)) {
        piVar4 = (int *)fn_006f7508(DAT_008977e0);
        (**(code **)(*piVar4 + 100))
                  (piVar4,*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x14) + 0x170) + 0xfc),2,0);
        *(undefined1 *)(*(int *)(param_1 + 0x14) + 4) = 1;
        *(uint *)(*(int *)(param_1 + 0x14) + 0x138) =
             *(uint *)(*(int *)(param_1 + 0x14) + 0x138) | 0x40;
        fn_00215d9c(*(undefined4 *)(param_1 + 0x14),10,1);
        if (DAT_008913e4 != 0) {
          fn_003b5ee4(DAT_008913e4,*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x13c));
        }
        *(undefined4 *)(param_1 + 0xc) = 1;
        *(undefined4 *)(param_1 + 0x10) = 0;
        return;
      }
    }
    return;
  }
LAB_0059b1f4:
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}



undefined4 fn_0059afc8(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = 0;
  iVar4 = *(int *)(param_1 + 0x170);
  iVar5 = *(int *)(iVar4 + 0x100);
  if (0 < iVar5) {
    do {
      piVar1 = (int *)fn_006bb544(iVar4,iVar3);
      if ((param_1 == 0) ||
         ((piVar1[2] != 1 &&
          ((piVar1[2] != 2 ||
           (iVar2 = (**(code **)(*piVar1 + 0x70))(piVar1,2), iVar2 != 7 && iVar2 != 8)))))) {
        return 0;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar5);
  }
  return 1;
}


