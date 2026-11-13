#include "0073acbc_00740638a.h"



undefined4 fn_0074040c(void)

{
  return DAT_00899eb0;
}



void fn_007402d4(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if ((param_1 == 0 || param_3 == 0) || param_2 == 0) {
    fn_001b8438(1,0xfffffe6d,(char *)&DAT_007d5ecc,param_4);
    return;
  }
  iVar1 = fn_00740a4c();
  piVar2 = (int *)fn_00741220(0x10);
  if (iVar1 == 0 || piVar2 == (int *)0x0) {
    fn_007407d4();
    fn_00740adc(iVar1);
    fn_001b8438(1,0xfffffe6f,(char *)&DAT_007d5ecc,param_4);
    return;
  }
  piVar2[2] = param_1;
  *piVar2 = param_3;
  piVar2[1] = param_4;
  fn_001ba680(0);
  fn_001b4928(0);
  iVar3 = fn_00740840(iVar1,(char *)&DAT_007403d8,param_2,0x100);
  if ((iVar3 != 0) || (iVar3 = fn_00740ee8(iVar1,(char *)&DAT_007403fc,fn_001ba490,piVar2), iVar3 != 0)
     ) {
    fn_007407d4(piVar2);
    fn_00740adc(iVar1);
  }
  fn_001b8438(1,iVar3,(char *)&DAT_007d5ecc,1);
  return;
}



void fn_0073acbc(int param_1,int param_2,int param_3)

{
  ushort uVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  
  iVar10 = 7;
  iVar6 = 4;
  uVar9 = 0xffffffff;
  iVar5 = 0;
  if (*(ushort *)(param_2 + 2) == 0) {
    iVar10 = 0x8a;
    iVar6 = 3;
  }
  if (0 < param_3 + 1) {
    puVar2 = (uint *)(param_1 + 0x16bc);
    iVar4 = 0;
    uVar7 = (uint)*(ushort *)(param_2 + 2);
    do {
      iVar3 = iVar4 + 1;
      uVar8 = (uint)*(ushort *)(param_2 + iVar5 * 4 + 6);
      if ((iVar10 <= iVar3) || (uVar7 != uVar8)) {
        if (iVar3 < iVar6) {
          if (iVar3 < 2) {
            iVar3 = 1;
          }
          iVar3 = iVar3 + 1;
          if (1 < iVar3) {
            iVar10 = param_1 + uVar7 * 4;
          }
          iVar6 = 1;
          if (1 < iVar3) {
            do {
              uVar11 = (uint)*(ushort *)(iVar10 + 0xa7e);
              uVar9 = *puVar2;
              if ((int)(0x10 - uVar11) < (int)uVar9) {
                uVar1 = *(ushort *)(iVar10 + 0xa7c);
                uVar9 = (uint)*(ushort *)(param_1 + 0x16b8) | (uint)uVar1 << (uVar9 & 0xff);
                *(short *)(param_1 + 0x16b8) = (short)uVar9;
                *(char *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) = (char)uVar9;
                iVar4 = *(int *)(param_1 + 0x14) + 1;
                *(int *)(param_1 + 0x14) = iVar4;
                *(char *)(*(int *)(param_1 + 8) + iVar4) =
                     (char)((ushort)*(undefined2 *)(param_1 + 0x16b8) >> 8);
                *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
                *(ushort *)(param_1 + 0x16b8) = uVar1 >> (0x10 - *puVar2 & 0xff);
                *puVar2 = (uVar11 - 0x10) + *puVar2;
              }
              else {
                *(ushort *)(param_1 + 0x16b8) =
                     *(ushort *)(param_1 + 0x16b8) | *(short *)(iVar10 + 0xa7c) << (uVar9 & 0xff);
                *puVar2 = uVar9 + uVar11;
              }
              iVar6 = iVar6 + 1;
            } while (iVar6 < iVar3);
          }
        }
        else if (uVar7 == 0) {
          if (iVar3 < 0xb) {
            uVar9 = (uint)*(ushort *)(param_1 + 0xac2);
            uVar11 = *puVar2;
            uVar1 = *(ushort *)(param_1 + 0xac0);
            if ((int)(0x10 - uVar9) < (int)uVar11) {
              uVar11 = (uint)*(ushort *)(param_1 + 0x16b8) | (uint)uVar1 << (uVar11 & 0xff);
              *(short *)(param_1 + 0x16b8) = (short)uVar11;
              *(char *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) = (char)uVar11;
              iVar10 = *(int *)(param_1 + 0x14) + 1;
              *(int *)(param_1 + 0x14) = iVar10;
              *(char *)(*(int *)(param_1 + 8) + iVar10) =
                   (char)((ushort)*(undefined2 *)(param_1 + 0x16b8) >> 8);
              *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
              uVar9 = *puVar2 + (uVar9 - 0x10);
              *(ushort *)(param_1 + 0x16b8) = uVar1 >> (0x10 - *puVar2 & 0xff);
              *puVar2 = uVar9;
            }
            else {
              uVar9 = uVar9 + uVar11;
              *(ushort *)(param_1 + 0x16b8) =
                   *(ushort *)(param_1 + 0x16b8) | uVar1 << (uVar11 & 0xff);
              *puVar2 = uVar9;
            }
            uVar11 = iVar4 - 2;
            if ((int)uVar9 < 0xe) {
              *(ushort *)(param_1 + 0x16b8) =
                   *(ushort *)(param_1 + 0x16b8) | (ushort)(uVar11 << (uVar9 & 0xff));
              *puVar2 = uVar9 + 3;
            }
            else {
              uVar9 = (uint)*(ushort *)(param_1 + 0x16b8) | uVar11 << (uVar9 & 0xff);
              *(short *)(param_1 + 0x16b8) = (short)uVar9;
              *(char *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) = (char)uVar9;
              iVar10 = *(int *)(param_1 + 0x14) + 1;
              *(int *)(param_1 + 0x14) = iVar10;
              *(char *)(*(int *)(param_1 + 8) + iVar10) =
                   (char)((ushort)*(undefined2 *)(param_1 + 0x16b8) >> 8);
              *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
              *(short *)(param_1 + 0x16b8) = (short)((uVar11 & 0xffff) >> (0x10 - *puVar2 & 0xff));
              *puVar2 = *puVar2 - 0xd;
            }
          }
          else {
            uVar9 = (uint)*(ushort *)(param_1 + 0xac6);
            uVar11 = *puVar2;
            uVar1 = *(ushort *)(param_1 + 0xac4);
            if ((int)(0x10 - uVar9) < (int)uVar11) {
              uVar11 = (uint)*(ushort *)(param_1 + 0x16b8) | (uint)uVar1 << (uVar11 & 0xff);
              *(short *)(param_1 + 0x16b8) = (short)uVar11;
              *(char *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) = (char)uVar11;
              iVar10 = *(int *)(param_1 + 0x14) + 1;
              *(int *)(param_1 + 0x14) = iVar10;
              *(char *)(*(int *)(param_1 + 8) + iVar10) =
                   (char)((ushort)*(undefined2 *)(param_1 + 0x16b8) >> 8);
              *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
              uVar9 = *puVar2 + (uVar9 - 0x10);
              *(ushort *)(param_1 + 0x16b8) = uVar1 >> (0x10 - *puVar2 & 0xff);
              *puVar2 = uVar9;
            }
            else {
              uVar9 = uVar9 + uVar11;
              *(ushort *)(param_1 + 0x16b8) =
                   *(ushort *)(param_1 + 0x16b8) | uVar1 << (uVar11 & 0xff);
              *puVar2 = uVar9;
            }
            uVar11 = iVar4 - 10;
            if ((int)uVar9 < 10) {
              *(ushort *)(param_1 + 0x16b8) =
                   *(ushort *)(param_1 + 0x16b8) | (ushort)(uVar11 << (uVar9 & 0xff));
              *puVar2 = uVar9 + 7;
            }
            else {
              uVar9 = (uint)*(ushort *)(param_1 + 0x16b8) | uVar11 << (uVar9 & 0xff);
              *(short *)(param_1 + 0x16b8) = (short)uVar9;
              *(char *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) = (char)uVar9;
              iVar10 = *(int *)(param_1 + 0x14) + 1;
              *(int *)(param_1 + 0x14) = iVar10;
              *(char *)(*(int *)(param_1 + 8) + iVar10) =
                   (char)((ushort)*(undefined2 *)(param_1 + 0x16b8) >> 8);
              *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
              *(short *)(param_1 + 0x16b8) = (short)((uVar11 & 0xffff) >> (0x10 - *puVar2 & 0xff));
              *puVar2 = *puVar2 - 9;
            }
          }
        }
        else {
          if (uVar7 != uVar9) {
            iVar10 = param_1 + uVar7 * 4;
            uVar9 = *puVar2;
            uVar11 = (uint)*(ushort *)(iVar10 + 0xa7e);
            uVar1 = *(ushort *)(iVar10 + 0xa7c);
            if ((int)(0x10 - uVar11) < (int)uVar9) {
              uVar9 = (uint)*(ushort *)(param_1 + 0x16b8) | (uint)uVar1 << (uVar9 & 0xff);
              *(short *)(param_1 + 0x16b8) = (short)uVar9;
              *(char *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) = (char)uVar9;
              iVar10 = *(int *)(param_1 + 0x14) + 1;
              *(int *)(param_1 + 0x14) = iVar10;
              *(char *)(*(int *)(param_1 + 8) + iVar10) =
                   (char)((ushort)*(undefined2 *)(param_1 + 0x16b8) >> 8);
              *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
              *(ushort *)(param_1 + 0x16b8) = uVar1 >> (0x10 - *puVar2 & 0xff);
              *puVar2 = *puVar2 + (uVar11 - 0x10);
            }
            else {
              *(ushort *)(param_1 + 0x16b8) =
                   *(ushort *)(param_1 + 0x16b8) | uVar1 << (uVar9 & 0xff);
              *puVar2 = uVar9 + uVar11;
            }
            iVar3 = iVar4;
          }
          uVar9 = (uint)*(ushort *)(param_1 + 0xabe);
          uVar11 = *puVar2;
          uVar1 = *(ushort *)(param_1 + 0xabc);
          if ((int)(0x10 - uVar9) < (int)uVar11) {
            uVar11 = (uint)*(ushort *)(param_1 + 0x16b8) | (uint)uVar1 << (uVar11 & 0xff);
            *(short *)(param_1 + 0x16b8) = (short)uVar11;
            *(char *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) = (char)uVar11;
            iVar10 = *(int *)(param_1 + 0x14) + 1;
            *(int *)(param_1 + 0x14) = iVar10;
            *(char *)(*(int *)(param_1 + 8) + iVar10) =
                 (char)((ushort)*(undefined2 *)(param_1 + 0x16b8) >> 8);
            *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
            uVar9 = *puVar2 + (uVar9 - 0x10);
            *(ushort *)(param_1 + 0x16b8) = uVar1 >> (0x10 - *puVar2 & 0xff);
            *puVar2 = uVar9;
          }
          else {
            uVar9 = uVar9 + uVar11;
            *(ushort *)(param_1 + 0x16b8) = *(ushort *)(param_1 + 0x16b8) | uVar1 << (uVar11 & 0xff)
            ;
            *puVar2 = uVar9;
          }
          if ((int)uVar9 < 0xf) {
            *(ushort *)(param_1 + 0x16b8) =
                 *(ushort *)(param_1 + 0x16b8) | (ushort)(iVar3 + -3 << (uVar9 & 0xff));
            *puVar2 = uVar9 + 2;
          }
          else {
            uVar9 = (uint)*(ushort *)(param_1 + 0x16b8) | iVar3 - 3U << (uVar9 & 0xff);
            *(short *)(param_1 + 0x16b8) = (short)uVar9;
            *(char *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) = (char)uVar9;
            iVar10 = *(int *)(param_1 + 0x14) + 1;
            *(int *)(param_1 + 0x14) = iVar10;
            *(char *)(*(int *)(param_1 + 8) + iVar10) =
                 (char)((ushort)*(undefined2 *)(param_1 + 0x16b8) >> 8);
            *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
            *(short *)(param_1 + 0x16b8) = (short)((iVar3 - 3U & 0xffff) >> (0x10 - *puVar2 & 0xff))
            ;
            *puVar2 = *puVar2 - 0xe;
          }
        }
        iVar3 = 0;
        uVar9 = uVar7;
        if (uVar8 == 0) {
          iVar10 = 0x8a;
        }
        else {
          if (uVar7 != uVar8) {
            iVar10 = 7;
            iVar6 = 4;
            goto LAB_0073b224;
          }
          iVar10 = 6;
        }
        iVar6 = 3;
      }
LAB_0073b224:
      iVar5 = iVar5 + 1;
      iVar4 = iVar3;
      uVar7 = uVar8;
    } while (iVar5 < param_3 + 1);
  }
  return;
}


