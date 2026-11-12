#include "00482420_00482944.h"



int fn_00482944(uint *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  iVar1 = fn_006d3b44();
  if ((uVar3 & 0x80000000) == 0) {
    return 0;
  }
  if (iVar1 == 0x67) {
    iVar1 = 0xb;
    param_3 = uVar3 + 0x7f98ffff;
    iVar2 = 0xb;
  }
  else if (iVar1 < 0x68) {
    if (iVar1 == 4) {
      iVar1 = 4;
      param_3 = uVar3 + 0x7ffbffff;
      iVar2 = 4;
    }
    else if (iVar1 < 5) {
      if (iVar1 == 1) {
        iVar1 = 1;
        param_3 = uVar3 + 0x7ffeffff;
        iVar2 = 1;
      }
      else if (iVar1 == 2) {
        iVar1 = 2;
        param_3 = uVar3 + 0x7ffdffff;
        iVar2 = 2;
      }
      else {
        if (iVar1 != 3) {
          return DAT_008a6400;
        }
        iVar1 = 3;
        if ((int)uVar3 < -0x7ffcff9c) {
          param_3 = 0x7ffcffff;
        }
        iVar2 = 3;
        if (-0x7ffcff9d < (int)uVar3) {
          if (-0x7ffcff39 < (int)uVar3) {
            param_3 = uVar3 + 0x7ffcff4d;
            goto LAB_00482b20;
          }
          param_3 = 0x7ffcff9e;
        }
        param_3 = param_3 + uVar3;
      }
    }
    else if (iVar1 == 5) {
      iVar1 = 5;
      param_3 = uVar3 + 0x7ffaffff;
      iVar2 = 5;
    }
    else if (iVar1 == 6) {
      iVar1 = 6;
      param_3 = uVar3 + 0x7ff9ffff;
      iVar2 = 6;
    }
    else {
      if (iVar1 != 0x65) {
        return DAT_008a6400;
      }
      iVar1 = 7;
      iVar2 = 7;
      param_3 = uVar3 + 0x7f9b0000;
    }
  }
  else {
    switch(iVar1) {
    case 0x68:
      iVar1 = 8;
      param_3 = uVar3 + 0x7f97ffff;
      iVar2 = 8;
      break;
    case 0x69:
      iVar1 = 0xc;
      param_3 = uVar3 + 0x7f96ffff;
      iVar2 = 0xc;
      break;
    default:
      return DAT_008a6400;
    case 0x6c:
      iVar1 = 0xf;
      param_3 = uVar3 + 0x7f93ffff;
      iVar2 = 0xf;
      break;
    case 0x6f:
      iVar1 = 0x12;
      param_3 = uVar3 + 0x7f90ffff;
      iVar2 = 0x12;
      break;
    case 0x70:
      iVar1 = 0x13;
      param_3 = uVar3 + 0x7f8fffff;
      iVar2 = 0x13;
      break;
    case 0x71:
      iVar1 = 0x14;
      param_3 = uVar3 + 0x7f8effff;
      iVar2 = 0x14;
    }
  }
LAB_00482b20:
  return param_3 + iVar1 * 100 + DAT_008a6400 + (&DAT_008a6400)[iVar2];
}



void fn_00482420(int param_1,int param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  int *piVar13;
  uint uVar14;
  uint uVar15;
  undefined8 in_d0;
  undefined8 uVar16;
  undefined8 uVar17;
  int local_54;
  uint local_50;
  int local_4c;
  
  *(undefined1 *)(param_2 + 4) = 0;
  cVar2 = *(char *)(param_1 + 0x3b);
  local_54 = 0;
  if (((cVar2 != '\0') ||
      ((fn_0074a4c8(param_1,param_2 + 4), *(char *)(param_1 + 4) == '\0' &&
       (fn_0074a528(param_1,&local_54), *(char *)(param_1 + 4) == '\0')))) &&
     (local_4c = *(int *)(param_1 + 0xc), *(char *)(param_1 + 4) == '\0')) {
    piVar13 = (int *)(param_2 + 8);
    iVar10 = *piVar13;
    iVar6 = *(int *)(param_2 + 0xc);
    if (iVar10 != iVar6) {
      if (0 < iVar6 - iVar10 >> 3) {
        for (iVar3 = iVar6 - iVar10 >> 4; iVar3 != 0; iVar3 = iVar3 + -1) {
        }
      }
      *(uint *)(param_2 + 0xc) = iVar6 - (iVar6 - iVar10 & 0xfffffff8U);
    }
    iVar6 = fn_0074a528(param_1,&local_50);
    uVar14 = local_50;
    if (iVar6 != 0) {
      if (0x1fffffff < local_50) {
        fn_002ff628(8,&DAT_004828a8,&DAT_004828a8,local_50,0x1fffffff);
      }
      if ((uint)(*(int *)(param_2 + 0x10) - *piVar13 >> 3) < uVar14) {
        uVar1 = *(int *)(param_2 + 0xc) - *piVar13 >> 3;
        uVar7 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
        uVar15 = uVar1 + 0x20;
        if (uVar1 + 0x20 <= uVar7) {
          uVar15 = uVar7;
        }
        if (uVar14 < uVar15) {
          uVar14 = uVar15;
        }
        puVar4 = (undefined8 *)fn_0015ece0(uVar14 << 3);
        puVar11 = *(undefined8 **)(param_2 + 0xc);
        puVar9 = puVar4;
        for (puVar8 = (undefined8 *)*piVar13; puVar8 != puVar11; puVar8 = puVar8 + 1) {
          if (puVar9 != (undefined8 *)0x0) {
            in_d0 = *puVar8;
            *puVar9 = in_d0;
          }
          puVar9 = puVar9 + 1;
        }
        iVar6 = *(int *)(param_2 + 0xc) - *piVar13;
        if (0 < iVar6 >> 3) {
          for (iVar6 = iVar6 >> 4; iVar6 != 0; iVar6 = iVar6 + -1) {
          }
        }
        fn_0014f1bc(*piVar13);
        iVar6 = *piVar13;
        *piVar13 = (int)puVar4;
        *(undefined8 **)(param_2 + 0xc) = puVar4 + (*(int *)(param_2 + 0xc) - iVar6 >> 3);
        *(undefined8 **)(param_2 + 0x10) = puVar4 + uVar14;
      }
      uVar14 = 0;
      uVar17 = 0;
      while( true ) {
        if ((local_50 <= uVar14) || (*(char *)(param_1 + 4) != '\0')) goto LAB_004828d0;
        iVar6 = *(int *)(param_1 + 8);
        iVar10 = *(int *)(param_1 + 0xc);
        if ((uint)(*(int *)(iVar6 + 0x10) - iVar10) < 8) {
          *(undefined1 *)(param_1 + 4) = 1;
          uVar16 = uVar17;
        }
        else {
          pbVar5 = (byte *)(*(int *)(iVar6 + 0x18) + *(int *)(iVar6 + 0xc) + iVar10);
          in_d0 = CONCAT44((int)((ulonglong)in_d0 >> 0x20),(uint)*pbVar5);
          uVar16 = *(undefined8 *)pbVar5;
          *(int *)(param_1 + 0xc) = iVar10 + 8;
        }
        if (*(char *)(param_1 + 4) != '\0') break;
        puVar8 = *(undefined8 **)(param_2 + 0xc);
        if (puVar8 == *(undefined8 **)(param_2 + 0x10)) {
          uVar1 = (int)puVar8 - *piVar13 >> 3;
          if (uVar1 < (uint)((int)*(undefined8 **)(param_2 + 0x10) - *piVar13 >> 3)) {
            *(undefined8 **)(param_2 + 0xc) = puVar8 + 1;
            puVar9 = puVar8 + -1;
            if (puVar8 != (undefined8 *)0x0) {
              in_d0 = puVar8[-1];
            }
            iVar6 = (int)puVar9 - (int)puVar8;
            if (puVar8 != (undefined8 *)0x0) {
              *puVar8 = in_d0;
            }
            if (0 < iVar6 >> 3) {
              puVar4 = puVar8;
              if (iVar6 * 0x10000000 < 0) {
                puVar9 = puVar8 + -2;
                puVar4 = puVar8 + -1;
                in_d0 = *puVar9;
                *puVar4 = in_d0;
              }
              for (iVar6 = iVar6 >> 4; iVar6 != 0; iVar6 = iVar6 + -1) {
                puVar11 = puVar9 + -1;
                puVar9 = puVar9 + -2;
                puVar12 = puVar4 + -1;
                puVar4 = puVar4 + -2;
                *puVar12 = *puVar11;
                in_d0 = *puVar9;
                *puVar4 = in_d0;
              }
            }
            *puVar8 = uVar16;
          }
          else {
            uVar15 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
            if (uVar15 < uVar1 + 0x20) {
              uVar15 = uVar1 + 0x20;
            }
            puVar11 = (undefined8 *)fn_0015ece0(uVar15 << 3);
            puVar4 = puVar11;
            for (puVar9 = (undefined8 *)*piVar13; puVar9 != puVar8; puVar9 = puVar9 + 1) {
              if (puVar4 != (undefined8 *)0x0) {
                in_d0 = *puVar9;
                *puVar4 = in_d0;
              }
              puVar4 = puVar4 + 1;
            }
            puVar9 = (undefined8 *)(((int)puVar8 - *piVar13 & 0xfffffff8U) + (int)puVar11);
            if (puVar9 != (undefined8 *)0x0) {
              *puVar9 = uVar16;
            }
            puVar4 = *(undefined8 **)(param_2 + 0xc);
            puVar9 = (undefined8 *)(((int)puVar8 - *piVar13 & 0xfffffff8U) + (int)puVar11);
            for (; puVar8 != puVar4; puVar8 = puVar8 + 1) {
              puVar9 = puVar9 + 1;
              if (puVar9 != (undefined8 *)0x0) {
                in_d0 = *puVar8;
                *puVar9 = in_d0;
              }
            }
            iVar10 = *(int *)(param_2 + 0xc) - *piVar13;
            iVar6 = iVar10 >> 3;
            if (0 < iVar6) {
              for (iVar10 = iVar10 >> 4; iVar10 != 0; iVar10 = iVar10 + -1) {
              }
            }
            fn_0014f1bc(*piVar13);
            *(undefined8 **)(param_2 + 0x10) = puVar11 + uVar15;
            *(undefined8 **)(param_2 + 0xc) = puVar11 + iVar6 + 1;
            *piVar13 = (int)puVar11;
          }
        }
        else {
          *(undefined8 **)(param_2 + 0xc) = puVar8 + 1;
          if (puVar8 != (undefined8 *)0x0) {
            *puVar8 = uVar16;
          }
        }
        uVar14 = uVar14 + 1;
      }
      iVar6 = *(int *)(param_2 + 0xc);
      iVar10 = *piVar13;
      if (iVar10 != iVar6) {
        if (0 < iVar6 - iVar10 >> 3) {
          for (iVar3 = iVar6 - iVar10 >> 4; iVar3 != 0; iVar3 = iVar3 + -1) {
          }
        }
        *(uint *)(param_2 + 0xc) = iVar6 - (iVar6 - iVar10 & 0xfffffff8U);
      }
    }
LAB_004828d0:
    if (*(char *)(param_1 + 4) == '\0' && cVar2 == '\0') {
      uVar14 = local_4c + local_54;
      if ((uVar14 < *(uint *)(param_1 + 0xc)) || (*(uint *)(*(int *)(param_1 + 8) + 0x10) < uVar14))
      {
        *(undefined1 *)(param_1 + 4) = 1;
      }
      else {
        *(uint *)(param_1 + 0xc) = uVar14;
      }
    }
  }
  return;
}


