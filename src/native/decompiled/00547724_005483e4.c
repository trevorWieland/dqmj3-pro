#include "00547724_005483e4.h"



void fn_005483e4(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1 + *(int *)(param_1 + 0x48) * 0x20;
  iVar2 = (*(int *)(iVar1 + 0x18) + *(int *)(iVar1 + 0x1c) & 0xfffffffcU) + *(int *)(iVar1 + 0x10);
  *(int *)(param_1 + 0x54) = iVar2;
  iVar1 = *(int *)(iVar1 + 0x14) + (*(int *)(iVar1 + 0x18) + *(int *)(iVar1 + 0x1c) & 0xfffffffcU);
  *(int *)(param_1 + 0x58) = iVar1;
  *(int *)(param_1 + 0x5c) = iVar2;
  *(int *)(param_1 + 0x60) = iVar1;
  return;
}



void fn_005483b0(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  uVar1 = 0;
  do {
    uVar2 = uVar1 + 1;
    *(undefined4 *)(*param_1 + uVar1 * 4) = 0;
    uVar1 = uVar2;
  } while (uVar2 <= param_3 - 1U);
  return;
}



void fn_00548320(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_50 [48];
  
  iVar3 = *(int *)(param_1 + 8);
  iVar1 = 0;
  if (0 < iVar3) {
    do {
      puVar2 = (uint *)(*(int *)(param_1 + 0xc) + iVar1 * 0x40);
      if ((*puVar2 & 0x70000) != 0) {
        iVar4 = *(int *)(param_1 + 0x14) + iVar1 * 0x30;
        fn_005493fc(*puVar2,auStack_50,param_2,iVar4,puVar2 + 4);
        fn_001ad06c(iVar4,param_3,auStack_50);
        *puVar2 = *puVar2 | 2;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < iVar3);
  }
  return;
}



void fn_005482ec(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined2 in_r12;
  
  if (param_3 != 0) {
    in_r12 = 0xffff;
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  if (param_3 != 0) {
    iVar2 = 0;
    do {
      param_3 = param_3 + -1;
      iVar1 = iVar2 * 2;
      iVar2 = iVar2 + 1;
      *(undefined2 *)(*param_1 + iVar1) = in_r12;
    } while (param_3 != 0);
  }
  return;
}



int fn_00547b8c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *piVar6;
  undefined4 *puVar7;
  int iVar8;
  
  *param_1 = &DAT_00857920;
  iVar8 = param_1[3];
  if (iVar8 != 0) {
    puVar1 = *(undefined4 **)(iVar8 + 0x18);
    puVar2 = *(undefined4 **)(iVar8 + 0x1c);
    while( true ) {
      if (puVar1 != puVar2) {
        param_4 = (undefined4 *)*puVar1;
      }
      if (puVar1 == puVar2 || param_4 == param_1) break;
      puVar1 = puVar1 + 1;
    }
    if (puVar1 != puVar2) {
      puVar7 = puVar1 + 1;
      if (puVar7 < puVar2) {
        iVar3 = (int)puVar2 - (int)puVar7;
        if (0 < iVar3) {
          puVar2 = puVar1;
          if (iVar3 * 0x20000000 < 0) {
            puVar4 = (undefined4 *)*puVar7;
            puVar7 = puVar1 + 2;
            if (puVar4 != param_1) {
              puVar2 = puVar1 + 1;
              *puVar1 = puVar4;
            }
          }
          puVar1 = puVar2;
          for (iVar3 = iVar3 >> 3; iVar3 != 0; iVar3 = iVar3 + -1) {
            puVar2 = puVar1;
            if ((undefined4 *)*puVar7 != param_1) {
              puVar2 = puVar1 + 1;
              *puVar1 = (undefined4 *)*puVar7;
            }
            puVar4 = puVar7 + 1;
            puVar7 = puVar7 + 2;
            puVar1 = puVar2;
            if ((undefined4 *)*puVar4 != param_1) {
              puVar1 = puVar2 + 1;
              *puVar2 = (undefined4 *)*puVar4;
            }
          }
        }
      }
      else {
        while (puVar7 != puVar2) {
          puVar4 = (undefined4 *)*puVar7;
          puVar7 = puVar7 + 1;
          if (puVar4 != param_1) {
            *puVar1 = puVar4;
            puVar1 = puVar1 + 1;
          }
        }
      }
    }
    puVar2 = *(undefined4 **)(iVar8 + 0x1c);
    *(undefined4 **)(iVar8 + 0x1c) = puVar1;
    if (puVar2 != puVar1) {
      param_1[3] = 0;
    }
  }
  puVar1 = (undefined4 *)param_1[0xd];
  if (puVar1 != (undefined4 *)0x0) {
    puVar7 = (undefined4 *)puVar1[3];
    for (puVar2 = (undefined4 *)puVar1[2]; puVar2 != puVar7; puVar2 = puVar2 + 1) {
      piVar5 = (int *)*puVar2;
      piVar6 = (int *)piVar5[1];
      if (piVar6 != (int *)0x0) {
        (**(code **)(*piVar5 + 4))(piVar5);
        (**(code **)(*piVar6 + 0xc))(piVar6,piVar5);
      }
    }
    puVar1[3] = puVar1[2];
    if ((int *)puVar1[1] != (int *)0x0 && puVar1[2] != 0) {
      (**(code **)(*(int *)puVar1[1] + 0xc))();
    }
    (**(code **)(*(int *)*puVar1 + 0xc))((int *)*puVar1,puVar1);
    param_1[0xd] = 0;
  }
  puVar1 = (undefined4 *)param_1[10];
  if ((puVar1 != (undefined4 *)0x0) && (*(char *)(param_1 + 0xb) != '\0')) {
    (**(code **)*puVar1)(puVar1);
    (**(code **)(*(int *)puVar1[1] + 0xc))((int *)puVar1[1],puVar1);
  }
  iVar8 = fn_0075644c(param_1 + 4);
  return iVar8 + -0x10;
}



void fn_00547b3c(int param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  (**(code **)(*param_2 + 0xc))(param_2,param_1);
  puVar2 = *(undefined4 **)(param_1 + 0x1c);
  for (puVar1 = *(undefined4 **)(param_1 + 0x18); puVar1 != puVar2; puVar1 = puVar1 + 1) {
    (**(code **)(*(int *)*puVar1 + 0x10))((int *)*puVar1,param_2);
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x00547abc) */
/* WARNING: Removing unreachable block (ram,0x00547ac8) */

int fn_00547724(int param_1,int *param_2,int param_3)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  bool bVar11;
  int *local_38;
  uint local_34;
  int local_30;
  uint local_2c;
  
  iVar10 = 0;
  bVar11 = *(char *)(param_1 + 0x3d) != '\0';
  piVar5 = param_2;
  if (bVar11) {
    piVar5 = *(int **)(param_1 + 8);
  }
  if (bVar11 && piVar5 != (int *)0x0) {
    uVar8 = piVar5[10];
    if (uVar8 != 0) {
      param_3 = 0;
    }
    if (0 < (int)uVar8) {
      piVar7 = (int *)0x0;
      do {
        iVar6 = piVar5[0xb];
        if (iVar6 == 0) {
          piVar2 = piVar7;
        }
        else {
          piVar2 = (int *)((int)(piVar5 + 0xb) + iVar6);
        }
        piVar3 = (int *)0x0;
        if (piVar2 != (int *)0x0) {
          iVar6 = piVar2[param_3 * 4 + 10];
          piVar3 = piVar7;
          if (iVar6 != 0) {
            piVar3 = (int *)((int)(piVar2 + param_3 * 4 + 10) + iVar6);
          }
        }
        if (0 < piVar3[4]) {
          iVar6 = *(int *)(param_1 + 0x48);
          piVar5 = (int *)(**(code **)(*param_2 + 8))(param_2,0x2c,4);
          if (piVar5 == (int *)0x0) goto LAB_00547a1c;
          *piVar5 = (int)&DAT_008576e8;
          piVar5[1] = (int)param_2;
          uVar9 = uVar8 * iVar6;
          piVar5[2] = 0;
          piVar5[3] = 0;
          piVar5[4] = 0;
          piVar5[5] = 0;
          piVar5[6] = 0;
          piVar5[7] = 0;
          piVar5[8] = 0;
          piVar5[9] = 0;
          piVar5[10] = iVar6;
          iVar6 = (**(code **)(*(int *)piVar5[1] + 8))((int *)piVar5[1],uVar8 << 2,4);
          if (iVar6 == 0) {
            bVar11 = true;
          }
          else {
            piVar2 = piVar5 + 2;
            local_38 = (int *)piVar5[1];
            local_34 = iVar6;
            local_2c = uVar8 & 0x3fffffff;
            if ((int **)piVar2 != &local_38) {
              local_34 = piVar5[3];
              local_2c = piVar5[5];
              local_38 = (int *)*piVar2;
              *piVar2 = piVar5[1];
              piVar5[3] = iVar6;
              piVar5[4] = iVar6;
              piVar5[5] = uVar8 & 0x3fffffff;
            }
            local_30 = local_34;
            uVar1 = 0;
            if (local_38 != (int *)0x0) {
              uVar1 = local_34;
            }
            if (local_38 != (int *)0x0 && uVar1 != 0) {
              (**(code **)(*local_38 + 0xc))(local_38,local_34);
            }
            iVar6 = (**(code **)(*(int *)piVar5[1] + 8))((int *)piVar5[1],uVar9 * 4,4);
            bVar11 = iVar6 == 0;
            if (!bVar11) {
              piVar2 = piVar5 + 6;
              local_38 = (int *)piVar5[1];
              local_34 = iVar6;
              local_2c = uVar9 & 0x3fffffff;
              if ((int **)piVar2 != &local_38) {
                local_34 = piVar5[7];
                local_2c = piVar5[9];
                local_38 = (int *)*piVar2;
                piVar5[8] = iVar6;
                piVar5[9] = uVar9 & 0x3fffffff;
                *piVar2 = piVar5[1];
                piVar5[7] = iVar6;
              }
              local_30 = local_34;
              uVar1 = 0;
              if (local_38 != (int *)0x0) {
                uVar1 = local_34;
              }
              if (local_38 != (int *)0x0 && uVar1 != 0) {
                (**(code **)(*local_38 + 0xc))(local_38,local_34);
              }
              iVar6 = 0;
              if (0 < (int)uVar8) {
                do {
                  puVar4 = (undefined4 *)piVar5[4];
                  iVar6 = iVar6 + 1;
                  piVar5[4] = (int)(puVar4 + 1);
                  if (puVar4 != (undefined4 *)0x0) {
                    *puVar4 = 0;
                  }
                } while (iVar6 < (int)uVar8);
              }
              iVar6 = 0;
              if (0 < (int)uVar9) {
                do {
                  puVar4 = (undefined4 *)piVar5[8];
                  iVar6 = iVar6 + 1;
                  piVar5[8] = (int)(puVar4 + 1);
                  if (puVar4 != (undefined4 *)0x0) {
                    *puVar4 = 0;
                  }
                } while (iVar6 < (int)uVar9);
              }
            }
          }
          if (bVar11) {
            if (piVar5 != (int *)0x0) {
              (**(code **)*piVar5)(piVar5);
              (**(code **)(*(int *)piVar5[1] + 0xc))((int *)piVar5[1],piVar5);
            }
LAB_00547a1c:
            piVar5 = piVar7;
          }
          else if (piVar5 != (int *)0x0) goto LAB_00547a24;
          iVar10 = -0x80000000;
LAB_00547a24:
          if (iVar10 != 0) {
            return iVar10;
          }
          puVar4 = (undefined4 *)(param_1 + 0x28);
          local_34 = CONCAT31(((unsigned int)(local_34) >> 8) & 0xffffff,1);
          local_38 = piVar5;
          if ((int **)puVar4 != &local_38) {
            local_38 = (int *)*puVar4;
            local_34 = CONCAT31(((unsigned int)(local_34) >> 8) & 0xffffff,*(undefined1 *)(param_1 + 0x2c));
            *puVar4 = piVar5;
            *(undefined1 *)(param_1 + 0x2c) = 1;
          }
          piVar5 = local_38;
          if (local_38 == (int *)0x0) {
            return 0;
          }
          if ((local_34 & 0xff) == 0) {
            return 0;
          }
          (**(code **)*local_38)(local_38);
          piVar7 = (int *)piVar5[1];
          (**(code **)(*piVar7 + 0xc))(piVar7,piVar5);
          return 0;
        }
        param_3 = param_3 + 1;
      } while (param_3 < (int)uVar8);
    }
  }
  return 0;
}


