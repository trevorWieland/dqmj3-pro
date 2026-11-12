#include "0050ffac_005107c4.h"



void fn_005106a8(int param_1)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    fn_006568c4(param_1 + 4);
    iVar5 = *(int *)(param_1 + 0x10);
    if (iVar5 != 0) {
      uVar2 = fn_00656b0c(iVar5);
      uVar3 = 0;
      if (uVar2 / 0x18 != 0) {
        do {
          *(undefined **)(iVar5 + uVar3 * 0x18) = &DAT_00856c94;
          uVar3 = uVar3 + 1;
        } while (uVar3 < uVar2 / 0x18);
      }
      fn_00656b7c(iVar5,uVar2 * -0x55555555);
    }
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    fn_006568c4(param_1 + 0x20);
    iVar5 = *(int *)(param_1 + 0x2c);
    if (iVar5 != 0) {
      uVar3 = fn_00656b0c(iVar5);
      uVar4 = 0;
      lVar1 = (ulonglong)uVar3 * 0x75075075 + 0x75075075;
      uVar2 = (uint)((ulonglong)lVar1 >> 0x27);
      if (uVar2 != 0) {
        do {
          *(undefined **)(iVar5 + uVar4 * 0x118) = &DAT_00856c94;
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar2);
      }
      fn_00656b7c(iVar5,uVar3,(int)lVar1);
    }
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  return;
}



void fn_0051015c(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  uint uVar9;
  uint *puVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint local_30;
  int iStack_2c;
  
  iVar13 = param_2 + 0x5d8;
  iVar1 = fn_006d6e30(iVar13);
  if (iVar1 != 0) {
    local_30 = 0;
    iStack_2c = 0;
    fn_004f01f4(&local_30);
    iVar11 = local_30 - *(uint *)(param_1 + 0x40);
    iVar1 = iStack_2c - (*(int *)(param_1 + 0x44) + (uint)(local_30 < *(uint *)(param_1 + 0x40)));
    puVar2 = (undefined4 *)fn_004f0ce8();
    iVar1 = fn_0011c134(iVar11,iVar1,*puVar2,puVar2[1]);
    if ((*(ushort *)(param_2 + 8) & 0xff) != 0 || *(ushort *)(param_2 + 8) >> 8 != 0) {
      fn_004edc34();
      puVar10 = (uint *)(param_1 + 4);
      if (*(int *)(param_1 + 0xc) != 0) {
        uVar3 = fn_006f4e34(puVar10,iVar13,&LAB_0050fddc);
        if ((int)uVar3 < 0) {
          uVar3 = *puVar10;
          if ((int)uVar3 < *(int *)(param_1 + 8)) {
            iVar11 = *(int *)(param_1 + 0x10) + uVar3 * 0x18;
          }
          else {
            piVar8 = *(int **)(param_1 + 0xc);
            uVar4 = 0;
            uVar14 = 1;
            uVar9 = iVar1 - *(int *)(*piVar8 + 0x10);
            if (1 < (int)uVar3) {
              do {
                if (uVar14 < uVar3) {
                  iVar11 = piVar8[uVar14];
                }
                else {
                  iVar11 = 0;
                }
                uVar5 = iVar1 - *(int *)(iVar11 + 0x10);
                if (uVar9 < uVar5) {
                  uVar9 = uVar5;
                  uVar4 = uVar14;
                }
                uVar14 = uVar14 + 1;
              } while ((int)uVar14 < (int)uVar3);
            }
            if (uVar4 < uVar3) {
              iVar11 = piVar8[uVar4];
            }
            else {
              iVar11 = 0;
            }
            fn_00656a30(puVar10,uVar4,1);
          }
          fn_004ed810(iVar11,iVar13);
          *(int *)(iVar11 + 0x10) = iVar1;
          *(undefined2 *)(iVar11 + 0x14) = 0;
          uVar3 = *puVar10;
          uVar4 = 0;
          if (0 < (int)uVar3) {
            do {
              if (uVar4 < uVar3) {
                uVar7 = *(undefined4 *)(*(int *)(param_1 + 0xc) + uVar4 * 4);
              }
              else {
                uVar7 = 0;
              }
              iVar6 = fn_006d7100(iVar13,uVar7);
              if (iVar6 != 0) {
                fn_00656a88(puVar10,uVar4,iVar11);
                goto LAB_00510354;
              }
              uVar3 = *puVar10;
              uVar4 = uVar4 + 1;
            } while ((int)uVar4 < (int)uVar3);
          }
          if ((int)uVar3 < *(int *)(param_1 + 8)) {
            *(int *)(*(int *)(param_1 + 0xc) + uVar3 * 4) = iVar11;
            *puVar10 = *puVar10 + 1;
          }
        }
        else {
          if (uVar3 < *puVar10) {
            iVar11 = *(int *)(*(int *)(param_1 + 0xc) + uVar3 * 4);
          }
          else {
            iVar11 = 0;
          }
          *(int *)(iVar11 + 0x10) = iVar1;
        }
LAB_00510354:
        if (iVar11 != 0) {
          *(ushort *)(iVar11 + 0x14) = *(ushort *)(param_2 + 8) << 8 | *(ushort *)(param_2 + 8) >> 8
          ;
        }
      }
      fn_004edc70(param_1 + 0x14);
    }
    uVar3 = (uint)*(ushort *)(param_2 + 10) << 8;
    uVar4 = (uint)(*(ushort *)(param_2 + 10) >> 8);
    if ((uVar3 & 0xffff) != 0 || uVar4 != 0) {
      uVar3 = iVar1 - (uVar3 | uVar4) & 0xffff;
      fn_004edc34();
      puVar10 = (uint *)(param_1 + 0x20);
      if (*(int *)(param_1 + 0x28) != 0) {
        uVar4 = fn_006f4e34(puVar10,iVar13,&LAB_0050fde0);
        if ((int)uVar4 < 0) {
          uVar4 = *puVar10;
          if ((int)uVar4 < *(int *)(param_1 + 0x24)) {
            iVar11 = *(int *)(param_1 + 0x2c) + uVar4 * 0x118;
          }
          else {
            piVar8 = *(int **)(param_1 + 0x28);
            uVar9 = 0;
            uVar5 = 1;
            uVar14 = iVar1 - *(int *)(*piVar8 + 0x10);
            if (1 < (int)uVar4) {
              do {
                if (uVar5 < uVar4) {
                  iVar11 = piVar8[uVar5];
                }
                else {
                  iVar11 = 0;
                }
                uVar12 = iVar1 - *(int *)(iVar11 + 0x10);
                if (uVar14 < uVar12) {
                  uVar14 = uVar12;
                  uVar9 = uVar5;
                }
                uVar5 = uVar5 + 1;
              } while ((int)uVar5 < (int)uVar4);
            }
            if (uVar9 < uVar4) {
              iVar11 = piVar8[uVar9];
            }
            else {
              iVar11 = 0;
            }
            fn_00656a30(puVar10,uVar9,1);
          }
          fn_004ed810(iVar11,iVar13);
          uVar4 = 0;
          *(int *)(iVar11 + 0x10) = iVar1;
          do {
            iVar6 = iVar11 + uVar4 * 0x10;
            uVar4 = uVar4 + 1;
            *(undefined4 *)(iVar6 + 0x14) = 0;
            *(undefined4 *)(iVar6 + 0x18) = 0;
            *(undefined4 *)(iVar6 + 0x1c) = 0;
            *(undefined4 *)(iVar6 + 0x20) = 0;
          } while (uVar4 < 0x10);
          *(undefined4 *)(iVar11 + 0x114) = 0;
          uVar4 = *puVar10;
          uVar9 = 0;
          if (0 < (int)uVar4) {
            do {
              if (uVar9 < uVar4) {
                uVar7 = *(undefined4 *)(*(int *)(param_1 + 0x28) + uVar9 * 4);
              }
              else {
                uVar7 = 0;
              }
              iVar6 = fn_006d7100(iVar13,uVar7);
              if (iVar6 != 0) {
                fn_00656a88(puVar10,uVar9,iVar11);
                goto LAB_00510544;
              }
              uVar4 = *puVar10;
              uVar9 = uVar9 + 1;
            } while ((int)uVar9 < (int)uVar4);
          }
          if ((int)uVar4 < *(int *)(param_1 + 0x24)) {
            *(int *)(*(int *)(param_1 + 0x28) + uVar4 * 4) = iVar11;
            *puVar10 = *puVar10 + 1;
          }
        }
        else {
          if (uVar4 < *puVar10) {
            iVar11 = *(int *)(*(int *)(param_1 + 0x28) + uVar4 * 4);
          }
          else {
            iVar11 = 0;
          }
          fn_005105b4(iVar11,iVar1);
        }
LAB_00510544:
        if (iVar11 != 0) {
          uVar4 = fn_005105b4(iVar11,iVar1);
          iVar11 = iVar11 + (uVar4 & 0xf) * 0x10;
          uVar4 = *(uint *)(iVar11 + 0x1c);
          if (uVar4 <= uVar4 + uVar3 * uVar3) {
            *(uint *)(iVar11 + 0x14) = uVar3;
            *(uint *)(iVar11 + 0x18) = *(int *)(iVar11 + 0x18) + uVar3;
            *(uint *)(iVar11 + 0x1c) = uVar3 * uVar3 + uVar4;
            *(int *)(iVar11 + 0x20) = *(int *)(iVar11 + 0x20) + 1;
          }
        }
      }
      fn_004edc70(param_1 + 0x30);
    }
  }
  return;
}



uint fn_005105b4(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = param_2 >> 8;
  uVar4 = *(uint *)(param_1 + 0x114) >> 8;
  if (uVar1 != uVar4) {
    if (uVar1 - uVar4 < 0x10) {
      uVar3 = uVar1 & 0xf;
      uVar4 = uVar4 & 0xf;
      if (uVar3 < uVar4) {
        uVar5 = 0;
        do {
          iVar2 = param_1 + uVar5 * 0x10;
          uVar5 = uVar5 + 1;
          *(undefined4 *)(iVar2 + 0x14) = 0;
          *(undefined4 *)(iVar2 + 0x18) = 0;
          *(undefined4 *)(iVar2 + 0x1c) = 0;
          *(undefined4 *)(iVar2 + 0x20) = 0;
        } while (uVar5 <= uVar3);
        while (uVar4 = uVar4 + 1, uVar4 < 0x10) {
          iVar2 = param_1 + uVar4 * 0x10;
          *(undefined4 *)(iVar2 + 0x14) = 0;
          *(undefined4 *)(iVar2 + 0x18) = 0;
          *(undefined4 *)(iVar2 + 0x1c) = 0;
          *(undefined4 *)(iVar2 + 0x20) = 0;
        }
      }
      else {
        while (uVar4 = uVar4 + 1, uVar4 <= uVar3) {
          iVar2 = param_1 + uVar4 * 0x10;
          *(undefined4 *)(iVar2 + 0x14) = 0;
          *(undefined4 *)(iVar2 + 0x18) = 0;
          *(undefined4 *)(iVar2 + 0x1c) = 0;
          *(undefined4 *)(iVar2 + 0x20) = 0;
        }
      }
    }
    else {
      uVar4 = 0;
      do {
        iVar2 = param_1 + uVar4 * 0x10;
        uVar4 = uVar4 + 1;
        *(undefined4 *)(iVar2 + 0x14) = 0;
        *(undefined4 *)(iVar2 + 0x18) = 0;
        *(undefined4 *)(iVar2 + 0x1c) = 0;
        *(undefined4 *)(iVar2 + 0x20) = 0;
      } while (uVar4 < 0x10);
      *(undefined4 *)(param_1 + 0x114) = 0;
    }
  }
  *(uint *)(param_1 + 0x114) = param_2;
  return uVar1;
}



void fn_0050ffac(void)

{
  if (DAT_008c0678 != 0) {
    fn_005107c4();
    fn_004ecfd0();
    DAT_008c0678 = 0;
  }
  return;
}



undefined4 * fn_005107c4(undefined4 *param_1)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  *param_1 = &DAT_00857124;
  if (param_1[4] != 0) {
    fn_006568c4(param_1 + 1);
    iVar5 = param_1[4];
    if (iVar5 != 0) {
      uVar2 = fn_00656b0c(iVar5);
      uVar3 = 0;
      if (uVar2 / 0x18 != 0) {
        do {
          *(undefined **)(iVar5 + uVar3 * 0x18) = &DAT_00856c94;
          uVar3 = uVar3 + 1;
        } while (uVar3 < uVar2 / 0x18);
      }
      fn_00656b7c(iVar5,uVar2 * -0x55555555);
    }
    param_1[4] = 0;
  }
  if (param_1[0xb] != 0) {
    fn_006568c4(param_1 + 8);
    iVar5 = param_1[0xb];
    if (iVar5 != 0) {
      uVar3 = fn_00656b0c(iVar5);
      uVar4 = 0;
      lVar1 = (ulonglong)uVar3 * 0x75075075 + 0x75075075;
      uVar2 = (uint)((ulonglong)lVar1 >> 0x27);
      if (uVar2 != 0) {
        do {
          *(undefined **)(iVar5 + uVar4 * 0x118) = &DAT_00856c94;
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar2);
      }
      fn_00656b7c(iVar5,uVar3,(int)lVar1);
    }
    param_1[0xb] = 0;
  }
  return param_1;
}


