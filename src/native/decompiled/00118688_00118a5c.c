#include "00118688_00118a5c.h"



void fn_00118a5c(int *param_1)

{
  int iVar1;
  uint *puVar2;
  undefined4 extraout_r1;
  uint *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 *puVar12;
  uint *puVar13;
  undefined8 uVar14;
  
  iVar1 = *param_1;
  iVar5 = *(int *)(iVar1 + 0xec);
  if ((*(int *)(iVar5 + 0x18) != 0 || *(int *)(iVar5 + 0x1c) != 0) ||
     (*(int *)(iVar5 + 0x24) != 0 || *(int *)(iVar5 + 0x20) != 0)) {
    if (*(int *)(iVar5 + 0x18) == 0 && *(int *)(iVar5 + 0x1c) == 0) {
      uVar6 = 0;
      uVar7 = uVar6;
    }
    else {
      uVar14 = fn_0011a534(iVar5);
      uVar7 = *(uint *)(*(int *)(iVar1 + 0xec) + 0x18);
      uVar6 = (uint)uVar14 - uVar7;
      uVar7 = (int)((ulonglong)uVar14 >> 0x20) -
              (*(int *)(*(int *)(iVar1 + 0xec) + 0x1c) + (uint)((uint)uVar14 < uVar7));
    }
    iVar5 = *(int *)(iVar1 + 0xec);
    uVar8 = uVar6 + *(uint *)(iVar5 + 0x20);
    uVar9 = uVar7 + *(int *)(iVar5 + 0x24) + (uint)CARRY4(uVar6,*(uint *)(iVar5 + 0x20));
    puVar2 = (uint *)(*(int *)(iVar5 + 4) + *(int *)(iVar5 + 0x10) * 8);
    uVar10 = *puVar2;
    uVar11 = puVar2[1];
    *puVar2 = uVar8;
    puVar2[1] = uVar9;
    puVar12 = *(undefined4 **)(iVar1 + 0xec);
    fn_00169f1c(puVar12[4] + 1,*puVar12);
    puVar12[4] = extraout_r1;
    iVar5 = *(int *)(iVar1 + 0xec);
    uVar7 = *(uint *)(iVar5 + 0x30);
    uVar6 = *(uint *)(iVar5 + 0x34);
    if ((int)(uVar9 - (uVar6 + (uVar8 < uVar7))) < 0 ==
        (SBORROW4(uVar9,uVar6) != SBORROW4(uVar9 - uVar6,(uint)(uVar8 < uVar7)))) {
      if (uVar7 == uVar10 && uVar6 == uVar11) {
        puVar2 = *(uint **)(iVar5 + 4);
        puVar13 = *(uint **)(iVar5 + 8);
        if (puVar2 != puVar13) {
          puVar3 = puVar2 + 2;
          if (puVar3 < puVar13) {
            if (0 < (int)puVar13 - (int)puVar3) {
              iVar4 = (int)puVar13 - (int)puVar3 >> 3;
              do {
                uVar6 = puVar3[1];
                uVar7 = puVar2[1];
                if ((int)(uVar6 - (uVar7 + (*puVar3 < *puVar2))) < 0 !=
                    (SBORROW4(uVar6,uVar7) != SBORROW4(uVar6 - uVar7,(uint)(*puVar3 < *puVar2)))) {
                  puVar2 = puVar3;
                }
                iVar4 = iVar4 + -1;
                puVar3 = puVar3 + 2;
              } while (iVar4 != 0);
            }
          }
          else {
            for (; puVar3 != puVar13; puVar3 = puVar3 + 2) {
              uVar6 = puVar3[1];
              uVar7 = puVar2[1];
              if ((int)(uVar6 - (uVar7 + (*puVar3 < *puVar2))) < 0 !=
                  (SBORROW4(uVar6,uVar7) != SBORROW4(uVar6 - uVar7,(uint)(*puVar3 < *puVar2)))) {
                puVar2 = puVar3;
              }
            }
          }
        }
        uVar7 = puVar2[1];
        *(uint *)(iVar5 + 0x30) = *puVar2;
        *(uint *)(iVar5 + 0x34) = uVar7;
      }
    }
    else {
      *(uint *)(iVar5 + 0x30) = uVar8;
      *(uint *)(iVar5 + 0x34) = uVar9;
    }
    iVar5 = *(int *)(iVar1 + 0xec);
    uVar6 = *(uint *)(iVar5 + 0x28);
    uVar7 = *(uint *)(iVar5 + 0x2c);
    if ((int)(uVar7 - (uVar9 + (uVar6 < uVar8))) < 0 ==
        (SBORROW4(uVar7,uVar9) != SBORROW4(uVar7 - uVar9,(uint)(uVar6 < uVar8)))) {
      if (uVar7 == uVar11 && uVar6 == uVar10) {
        puVar2 = *(uint **)(iVar5 + 4);
        puVar13 = *(uint **)(iVar5 + 8);
        if (puVar2 != puVar13) {
          puVar3 = puVar2 + 2;
          if (puVar3 < puVar13) {
            if (0 < (int)puVar13 - (int)puVar3) {
              iVar4 = (int)puVar13 - (int)puVar3 >> 3;
              do {
                uVar6 = puVar2[1];
                uVar7 = puVar3[1];
                if ((int)(uVar6 - (uVar7 + (*puVar2 < *puVar3))) < 0 !=
                    (SBORROW4(uVar6,uVar7) != SBORROW4(uVar6 - uVar7,(uint)(*puVar2 < *puVar3)))) {
                  puVar2 = puVar3;
                }
                iVar4 = iVar4 + -1;
                puVar3 = puVar3 + 2;
              } while (iVar4 != 0);
            }
          }
          else {
            for (; puVar3 != puVar13; puVar3 = puVar3 + 2) {
              uVar6 = puVar3[1];
              uVar7 = puVar2[1];
              if ((int)(uVar7 - (uVar6 + (*puVar2 < *puVar3))) < 0 !=
                  (SBORROW4(uVar7,uVar6) != SBORROW4(uVar7 - uVar6,(uint)(*puVar2 < *puVar3)))) {
                puVar2 = puVar3;
              }
            }
          }
        }
        uVar7 = puVar2[1];
        *(uint *)(iVar5 + 0x28) = *puVar2;
        *(uint *)(iVar5 + 0x2c) = uVar7;
      }
    }
    else {
      *(uint *)(iVar5 + 0x28) = uVar8;
      *(uint *)(iVar5 + 0x2c) = uVar9;
    }
    iVar5 = *(int *)(iVar1 + 0xec);
    uVar7 = *(uint *)(iVar5 + 0x40);
    uVar6 = uVar7 + (uVar8 - uVar10);
    iVar4 = *(int *)(iVar5 + 0x44) + (uVar9 - (uVar11 + (uVar8 < uVar10))) +
            (uint)CARRY4(uVar7,uVar8 - uVar10);
    *(uint *)(iVar5 + 0x40) = uVar6;
    *(int *)(iVar5 + 0x44) = iVar4;
    puVar12 = *(undefined4 **)(iVar1 + 0xec);
    uVar14 = fn_0011c134(uVar6,iVar4,*puVar12,0);
    *(undefined8 *)(puVar12 + 0xe) = uVar14;
    iVar5 = *(int *)(iVar1 + 0xec);
    *(undefined4 *)(iVar5 + 0x20) = 0;
    *(undefined4 *)(iVar5 + 0x24) = 0;
    iVar1 = *(int *)(iVar1 + 0xec);
    *(undefined4 *)(iVar1 + 0x18) = 0;
    *(undefined4 *)(iVar1 + 0x1c) = 0;
  }
  return;
}



int * fn_001188b0(int *param_1)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  
  if ((*(byte *)((int)param_1 + 0x23) & 0xf) == 0) {
    if ((*(byte *)((int)param_1 + 0x23) & 0xf0) == 0) {
      fn_00300904(param_1[9],&DAT_00129000);
    }
    else {
      piVar3 = (int *)param_1[2];
      while (piVar1 = piVar3, piVar1 != (int *)0x0) {
        piVar3 = (int *)piVar1[1];
        if (piVar3 != (int *)0x0) {
          piVar3[2] = piVar1[2];
        }
        if (piVar1[2] != 0) {
          *(int *)(piVar1[2] + 4) = piVar1[1];
        }
        if ((int *)param_1[2] == piVar1) {
          param_1[2] = piVar1[1];
        }
        if ((int *)param_1[3] == piVar1) {
          param_1[3] = piVar1[2];
        }
        piVar1[2] = 0;
        piVar1[1] = 0;
        if ((*(byte *)((int)param_1 + 0x23) & 0xf) == 0) {
          if (piVar1 != (int *)0x0) {
            (**(code **)(*piVar1 + 4))();
          }
        }
        else {
          fn_00143b98(param_1,piVar1);
        }
      }
      piVar3 = (int *)*param_1;
      while (piVar1 = piVar3, piVar1 != (int *)0x0) {
        piVar3 = (int *)piVar1[1];
        if (piVar3 != (int *)0x0) {
          piVar3[2] = piVar1[2];
        }
        if (piVar1[2] != 0) {
          *(int *)(piVar1[2] + 4) = piVar1[1];
        }
        if ((int *)*param_1 == piVar1) {
          *param_1 = piVar1[1];
        }
        if ((int *)param_1[1] == piVar1) {
          param_1[1] = piVar1[2];
        }
        piVar1[2] = 0;
        piVar1[1] = 0;
        if ((*(byte *)((int)param_1 + 0x23) & 0xf) == 0) {
          if (piVar1 != (int *)0x0) {
            (**(code **)(*piVar1 + 4))();
          }
        }
        else {
          fn_00143b98(param_1,piVar1);
        }
      }
    }
  }
  else {
    uVar2 = 0;
    if (param_1[0xb] != 0) {
      do {
        (*(code *)**(undefined4 **)(param_1[10] + uVar2 * 0x44))(param_1[10] + uVar2 * 0x44);
        uVar2 = uVar2 + 1;
      } while (uVar2 < (uint)param_1[0xb]);
    }
  }
  return param_1;
}



undefined4 *
fn_00118688(undefined4 *param_1,undefined4 param_2,int param_3,uint param_4,byte param_5,
            byte param_6,uint param_7)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = param_2;
  param_1[7] = param_3;
  param_1[8] = param_1[8] & 0xff000000 | param_4 & 0xffffff;
  *(byte *)((int)param_1 + 0x23) = param_5 & 0xf | param_6 << 4;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  if ((param_6 & 0xf) == 0) {
    if ((param_5 & 0xf) == 0) {
      puVar3 = (undefined4 *)fn_001287d4(param_7 * 0x44 + 8,&DAT_00812c8c);
      iVar1 = 0;
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = 0x44;
        puVar3[1] = param_7;
        iVar1 = fn_00101a1c(puVar3 + 2,fn_0014426c,0x44,param_7);
      }
      param_1[9] = iVar1;
    }
    else {
      iVar1 = param_1[6] + param_3 + param_7 * -0x44 + -0x10;
      if (iVar1 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = fn_00101a1c(iVar1,fn_0014426c,0x44,param_7);
      }
      param_1[10] = iVar1;
      param_1[0xb] = param_7;
    }
    uVar4 = 0;
    if (param_7 != 0) {
      do {
        iVar2 = iVar1 + uVar4 * 0x44;
        if (param_1[5] == 0) {
          param_1[5] = iVar2;
          param_1[4] = iVar2;
          *(undefined4 *)(iVar2 + 4) = 0;
          *(undefined4 *)(iVar2 + 8) = 0;
        }
        else {
          *(int *)(param_1[5] + 4) = iVar2;
          *(undefined4 *)(iVar2 + 8) = param_1[5];
          param_1[5] = iVar2;
          *(undefined4 *)(iVar2 + 4) = 0;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < param_7);
    }
    if ((*(byte *)((int)param_1 + 0x23) & 0xf0) != 0) goto LAB_00118800;
    iVar1 = fn_00153ff0(param_1);
    if ((*(byte *)((int)param_1 + 0x23) & 0xf) == 0) goto LAB_00118880;
    iVar2 = param_1[6];
    param_3 = param_3 + param_7 * -0x44 + -0x10;
  }
  else {
LAB_00118800:
    if ((*(byte *)((int)param_1 + 0x23) & 0xf) == 0) {
      iVar2 = fn_00145b00(0x44,&DAT_00812c8c);
      iVar1 = 0;
      if (iVar2 != 0) {
        iVar1 = fn_0014426c();
      }
LAB_00118880:
      *(undefined4 *)(iVar1 + 0x10) = param_1[6];
      *(int *)(iVar1 + 0x14) = param_3;
      goto LAB_00118820;
    }
    iVar1 = param_1[6];
    param_3 = param_3 + -0x44;
    iVar2 = iVar1 + 0x44;
  }
  *(int *)(iVar1 + 0x10) = iVar2;
  *(int *)(iVar1 + 0x14) = param_3;
LAB_00118820:
  if (param_1[2] == 0) {
    param_1[3] = iVar1;
    param_1[2] = iVar1;
    *(undefined4 *)(iVar1 + 4) = 0;
  }
  else {
    *(int *)(param_1[2] + 8) = iVar1;
    *(undefined4 *)(iVar1 + 4) = param_1[2];
    param_1[2] = iVar1;
  }
  *(undefined4 *)(iVar1 + 8) = 0;
  return param_1;
}


