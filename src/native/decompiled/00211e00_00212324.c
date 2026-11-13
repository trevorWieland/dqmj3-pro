#include "00211e00_00212324.h"



void fn_00212324(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 unaff_r4;
  int iVar4;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  uVar3 = *(uint *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x10) = 0;
  uVar2 = *(uint *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x14) = 0;
  iVar4 = *(int *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x18) = 0;
  uVar1 = uVar3;
  if (uVar2 < uVar3) {
    do {
      uVar1 = uVar1 + 0xc;
    } while (uVar1 != uVar2);
  }
  fn_001008c4(uVar3,(int)(iVar4 - uVar3) / 0xc,0);
  uVar3 = *(uint *)(param_1 + 4);
  *(undefined4 *)(param_1 + 4) = 0;
  uVar2 = *(uint *)(param_1 + 8);
  *(undefined4 *)(param_1 + 8) = 0;
  iVar4 = *(int *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xc) = 0;
  uVar1 = uVar3;
  if (uVar2 < uVar3) {
    do {
      uVar1 = uVar1 + 0x74;
    } while (uVar1 != uVar2);
  }
  uVar1 = iVar4 - uVar3;
  iVar4 = (int)((longlong)(int)uVar1 * -0x72c234f7 + ((ulonglong)uVar1 << 0x20) >> 0x20);
  fn_002feef8(uVar3,(iVar4 >> 6) - (iVar4 >> 0x1f),0,uVar3,unaff_r4,in_lr);
  return;
}



int fn_002122f8(int param_1,int param_2)

{
  return (int)*(char *)(*(int *)(param_1 + 4) + param_2 * 0x74 + 0x6f);
}



bool fn_002122c4(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = fn_003035b0(*(int *)(param_1 + 4) + param_2 * 0x74,DAT_008912f0);
  return iVar1 == 0;
}



int fn_002122ac(int param_1,int param_2)

{
  return (int)*(char *)(*(int *)(param_1 + 4) + param_2 * 0x74 + 0x70);
}



void fn_00211fd4(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  uint *puVar11;
  uint uVar12;
  int *piVar13;
  int iVar14;
  
  uVar12 = 0;
  iVar1 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10);
  iVar10 = iVar1 >> 0x1f;
  if (iVar1 / 0xc + iVar10 != iVar10) {
    do {
      piVar13 = (int *)(*(int *)(param_1 + 0x10) + uVar12 * 0xc);
      if (*piVar13 == param_2) {
        piVar2 = *(int **)(param_1 + 0x20);
        puVar11 = (uint *)(param_1 + 0x1c);
        if (piVar2 == *(int **)(param_1 + 0x24)) {
          uVar7 = (int)((int)piVar2 - *puVar11) / 0xc;
          if (uVar7 < (uint)((int)((int)*(int **)(param_1 + 0x24) - *puVar11) / 0xc)) {
            *(int **)(param_1 + 0x20) = piVar2 + 3;
            if (piVar2 != (int *)0x0) {
              *piVar2 = piVar2[-3];
              piVar2[1] = piVar2[-2];
              piVar2[2] = piVar2[-1];
            }
            piVar8 = piVar2 + -3;
            piVar3 = piVar2;
            if (piVar2 < piVar8) {
              if (0 < (int)piVar8 - (int)piVar2) {
                uVar7 = ((int)piVar8 - (int)piVar2) / 0xc;
                if ((uVar7 & 1) != 0) {
                  piVar8 = piVar2 + -6;
                  piVar3 = piVar2 + -3;
                  *piVar3 = *piVar8;
                  piVar2[-2] = piVar2[-5];
                  piVar2[-1] = piVar2[-4];
                }
                for (iVar10 = (int)uVar7 >> 1; iVar10 != 0; iVar10 = iVar10 + -1) {
                  iVar1 = piVar8[-2];
                  iVar14 = piVar8[-1];
                  piVar3[-3] = piVar8[-3];
                  piVar3[-2] = iVar1;
                  piVar3[-1] = iVar14;
                  iVar1 = piVar8[-5];
                  iVar14 = piVar8[-4];
                  piVar3[-6] = piVar8[-6];
                  piVar3[-5] = iVar1;
                  piVar3[-4] = iVar14;
                  piVar3 = piVar3 + -6;
                  piVar8 = piVar8 + -6;
                }
              }
            }
            else {
              while (piVar2 != piVar8) {
                iVar10 = piVar8[-2];
                iVar1 = piVar8[-1];
                piVar3[-3] = piVar8[-3];
                piVar3[-2] = iVar10;
                piVar3[-1] = iVar1;
                piVar3 = piVar3 + -3;
                piVar8 = piVar8 + -3;
              }
            }
            iVar10 = piVar13[1];
            iVar1 = piVar13[2];
            *piVar2 = *piVar13;
            piVar2[1] = iVar10;
            piVar2[2] = iVar1;
          }
          else {
            uVar4 = uVar7 + (uVar7 >> 1) + (uVar7 >> 3);
            if (uVar4 < uVar7 + 0x20) {
              uVar4 = uVar7 + 0x20;
            }
            piVar5 = (int *)fn_00100fc6(uVar4 * 0xc,0);
            piVar3 = piVar5;
            for (piVar8 = (int *)*puVar11; piVar8 != piVar2; piVar8 = piVar8 + 3) {
              if (piVar3 != (int *)0x0) {
                iVar10 = piVar8[1];
                iVar1 = piVar8[2];
                *piVar3 = *piVar8;
                piVar3[1] = iVar10;
                piVar3[2] = iVar1;
              }
              piVar3 = piVar3 + 3;
            }
            piVar8 = piVar5 + ((int)((int)piVar2 - *puVar11) / 0xc) * 3;
            if (piVar8 != (int *)0x0) {
              iVar10 = piVar13[1];
              iVar1 = piVar13[2];
              *piVar8 = *piVar13;
              piVar8[1] = iVar10;
              piVar8[2] = iVar1;
            }
            piVar8 = *(int **)(param_1 + 0x20);
            piVar13 = piVar5 + ((int)((int)piVar2 - *puVar11) / 0xc) * 3;
            for (; piVar2 != piVar8; piVar2 = piVar2 + 3) {
              piVar3 = piVar13 + 3;
              if (piVar3 != (int *)0x0) {
                iVar10 = piVar2[1];
                iVar1 = piVar2[2];
                *piVar3 = *piVar2;
                piVar13[4] = iVar10;
                piVar13[5] = iVar1;
              }
              piVar13 = piVar3;
            }
            uVar6 = *puVar11;
            uVar9 = *(uint *)(param_1 + 0x20);
            uVar7 = uVar6;
            if (uVar9 < uVar6) {
              do {
                uVar7 = uVar7 + 0xc;
              } while (uVar7 != uVar9);
            }
            fn_001008c4(uVar6,(int)(*(int *)(param_1 + 0x24) - uVar6) / 0xc,0);
            *puVar11 = (uint)piVar5;
            *(int **)(param_1 + 0x20) = piVar5 + ((int)(uVar9 - uVar6) / 0xc) * 3 + 3;
            *(int **)(param_1 + 0x24) = piVar5 + uVar4 * 3;
          }
        }
        else {
          *(int **)(param_1 + 0x20) = piVar2 + 3;
          if (piVar2 != (int *)0x0) {
            iVar10 = piVar13[1];
            iVar1 = piVar13[2];
            *piVar2 = *piVar13;
            piVar2[1] = iVar10;
            piVar2[2] = iVar1;
          }
        }
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < (uint)((*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10)) / 0xc));
  }
  return;
}



void fn_00211f74(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  uVar2 = *(uint *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x20) = 0;
  iVar3 = *(int *)(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x24) = 0;
  uVar1 = uVar4;
  if (uVar2 < uVar4) {
    do {
      uVar1 = uVar1 + 0xc;
    } while (uVar1 != uVar2);
  }
  fn_002feef8(uVar4,(int)(iVar3 - uVar4) / 0xc,0);
  return;
}



int fn_00211f5c(int param_1,int param_2)

{
  return (int)*(char *)(*(int *)(param_1 + 4) + param_2 * 0x74 + 0x6e);
}



bool fn_00211f24(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = fn_00147e6c(*(int *)(param_1 + 4) + param_2 * 0x74,DAT_008912f4,3);
  return iVar1 == 0;
}



undefined4 fn_00211ea0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = *(int *)(param_1 + 4) + param_2 * 0x74;
  while ((iVar1 = fn_003035b0(iVar3,(&DAT_00891310)[iVar2]), iVar1 != 0 &&
         (iVar1 = fn_003035b0(iVar3,(&DAT_00891314)[iVar2]), iVar1 != 0))) {
    iVar2 = iVar2 + 2;
    if (0x23 < iVar2) {
      return 0;
    }
  }
  return 1;
}



undefined4 fn_00211e00(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 4) + param_2 * 0x74;
  iVar1 = fn_003035b0(iVar3,DAT_008912f8);
  if ((((iVar1 == 0) || (iVar1 = fn_003035b0(iVar3,DAT_008912fc), iVar1 == 0)) ||
      (iVar1 = fn_003035b0(iVar3,DAT_00891300), iVar1 == 0)) ||
     (((iVar1 = fn_003035b0(iVar3,DAT_00891304), iVar1 == 0 ||
       (iVar1 = fn_003035b0(iVar3,DAT_00891308), iVar1 == 0)) ||
      (iVar1 = fn_003035b0(iVar3,DAT_0089130c), iVar1 == 0)))) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


