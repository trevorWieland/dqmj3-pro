#include "006faec0_006ff1d4.h"



void fn_006ff1d4(void)

{
  DAT_0089613c = 0x42300000;
  DAT_00896140 = 0x42300000;
  DAT_008cc784 = 0xc1200000;
  DAT_008cc788 = 0x41200000;
  DAT_008cc78c = 0;
  DAT_008cc790 = 0xc1b00000;
  DAT_008cc794 = 0x41b00000;
  DAT_008cc798 = 0;
  DAT_00896138 = 0;
  return;
}



void fn_006fec98(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int *param_7)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  
  iVar2 = *param_7;
  bVar3 = iVar2 == 0;
  if (bVar3) {
    iVar2 = param_7[1];
  }
  bVar4 = bVar3 && iVar2 == 0;
  if (bVar3 && iVar2 == 0) {
    bVar4 = param_7[2] == 0;
  }
  if (!bVar4) {
                    /* WARNING: Subroutine does not return */
    fn_00146590();
  }
  param_7[0xf] = 0;
  iVar2 = param_3 + -0x675b;
  param_7[4] = param_2;
  param_7[0xd] = param_5;
  param_7[3] = param_1;
  param_7[5] = param_3;
  param_7[6] = param_4;
  if (param_3 == 0x675b) {
    param_7[9] = 8;
    param_7[10] = 8;
    param_7[0xe] = 0;
    param_7[0xc] = 4;
    param_7[0xb] = 8;
    param_7[7] = 0xd;
    param_7[8] = param_6;
  }
  else {
    if (param_3 < 0x675b) {
      if (param_3 == 0x190a) {
        if (param_4 == 0x1401) {
          param_7[7] = 5;
          param_7[9] = 8;
          param_7[10] = 8;
          param_7[0xb] = 8;
          param_7[0xc] = 8;
LAB_006fefcc:
          param_7[0xe] = 0x10;
        }
        else if (param_4 == 0x6760) {
          param_7[7] = 9;
          param_7[9] = 4;
          param_7[10] = 4;
          param_7[0xb] = 4;
          param_7[0xc] = 4;
          param_7[0xe] = 8;
        }
      }
      else {
        if (param_3 < 0x190a) {
          if (param_3 == 0x1906) {
            if (param_4 == 0x1401) {
              param_7[9] = 0;
              param_7[7] = 8;
              param_7[10] = 0;
              param_7[0xb] = 0;
              param_7[0xc] = 8;
LAB_006fef74:
              param_7[0xe] = 8;
              goto LAB_006ff134;
            }
            if (param_4 != 0x6761) goto LAB_006ff134;
            param_7[7] = 0xb;
            param_7[9] = 0;
            param_7[10] = 0;
            param_7[0xb] = 0;
            param_7[0xc] = 4;
          }
          else {
            if (param_3 == 0x1907) {
              if (param_4 == 0x1401) {
                param_7[7] = 1;
                param_7[9] = 8;
                param_7[10] = 8;
                param_7[0xe] = 0x18;
                param_7[0xc] = 0;
                param_7[0xb] = 8;
              }
              else if (param_4 == 0x8363) {
                param_7[7] = 3;
                param_7[0xc] = 0;
                param_7[9] = 5;
                param_7[0xe] = 0x10;
                param_7[10] = 6;
                param_7[0xb] = 5;
              }
              goto LAB_006ff134;
            }
            if (param_3 == 0x1908) {
              if (param_4 == 0x1401) {
                param_7[7] = 0;
                param_7[9] = 8;
                param_7[10] = 8;
                param_7[0xb] = 8;
                param_7[0xe] = 0x20;
                param_7[0xc] = 8;
              }
              else {
                if (param_4 == 0x8033) {
                  param_7[7] = 4;
                  param_7[9] = 4;
                  param_7[10] = 4;
                  param_7[0xb] = 4;
                  param_7[0xc] = 4;
                }
                else {
                  if (param_4 != 0x8034) goto LAB_006ff134;
                  param_7[7] = 2;
                  param_7[9] = 5;
                  param_7[10] = 5;
                  param_7[0xc] = 1;
                  param_7[0xb] = 5;
                }
                param_7[0xe] = 0x10;
              }
              goto LAB_006ff134;
            }
            if (param_3 != 0x1909) goto LAB_006ff11c;
            if (param_4 == 0x1401) {
              param_7[7] = 7;
              param_7[9] = 8;
              param_7[10] = 8;
              param_7[0xc] = 0;
              param_7[0xb] = 8;
              goto LAB_006fef74;
            }
            if (param_4 != 0x6761) goto LAB_006ff134;
            param_7[7] = 10;
            param_7[9] = 4;
            param_7[10] = 4;
            param_7[0xc] = 0;
            param_7[0xb] = 4;
          }
          param_7[0xe] = 4;
          goto LAB_006ff134;
        }
        if (param_3 == 0x6040 || param_3 == 0x6050) {
LAB_006fedd4:
          param_7[7] = 0;
          param_7[9] = 8;
          param_7[10] = 8;
          param_7[0xb] = 8;
          param_7[0xe] = 0x20;
          param_7[0xc] = 8;
        }
        else {
          if (param_3 == 0x6700) {
            param_7[7] = 6;
            param_7[9] = 8;
            param_7[0xb] = 0;
            param_7[10] = 8;
            param_7[0xc] = 0;
            goto LAB_006fefcc;
          }
          if (param_3 == 0x675a) {
            param_7[9] = 8;
            param_7[10] = 8;
            param_7[0xc] = 0;
            param_7[0xb] = 8;
            param_7[0xe] = 0;
            param_7[7] = 0xc;
            param_7[8] = param_6;
          }
        }
      }
    }
    else if (iVar2 == 0x1a4a) {
      param_7[7] = 0;
      param_7[9] = 0x10;
      param_7[10] = 0;
      param_7[0xb] = 0;
      param_7[0xc] = 0;
      param_7[0xe] = 0x10;
    }
    else if (iVar2 < 0x1a4a) {
      if (iVar2 == 0x18f6) {
        param_7[7] = 1;
        param_7[9] = 8;
        param_7[10] = 8;
        param_7[0xc] = 0;
        param_7[0xe] = 0x18;
        param_7[0xb] = 8;
      }
      else if (iVar2 == 0x18fb) {
        param_7[7] = 4;
        param_7[9] = 4;
        param_7[10] = 4;
        param_7[0xb] = 4;
        param_7[0xc] = 4;
        param_7[0xe] = 0x10;
        param_7[5] = 0x1908;
        param_7[6] = 0x8033;
      }
      else if (iVar2 == 0x18fc) {
        param_7[9] = 5;
        param_7[10] = 5;
        param_7[0xc] = 1;
        param_7[0xb] = 5;
        param_7[0xe] = 0x10;
        param_7[5] = 0x1908;
        param_7[6] = 0x8034;
        param_7[7] = 2;
      }
      else if (iVar2 == 0x18fd) goto LAB_006fedd4;
    }
    else if (iVar2 == 0x1a4b) {
      param_7[7] = 2;
      param_7[9] = 0x18;
      param_7[10] = 0;
      param_7[0xb] = 0;
      param_7[0xe] = 0x18;
      param_7[0xc] = 0;
    }
    else if (iVar2 == 0x2195) {
      param_7[7] = 3;
      param_7[0xb] = 0;
      param_7[0xc] = 0;
      param_7[0xe] = 0x20;
      param_7[9] = 0x18;
      param_7[10] = 8;
    }
    else if (iVar2 == 0x2607) {
      param_7[7] = 3;
      param_7[9] = 5;
      param_7[10] = 6;
      param_7[0xc] = 0;
      param_7[0xb] = 5;
      param_7[0xe] = 0x10;
      param_7[5] = 0x1907;
      param_7[6] = 0x8363;
    }
LAB_006ff11c:
    if (param_3 == 0x675a) {
      return;
    }
  }
  if (param_3 == 0x675b) {
    return;
  }
LAB_006ff134:
  iVar2 = 0;
  param_7[8] = 0;
  for (; ((iVar2 < param_5 && (7 < param_1)) && (7 < param_2)); param_2 = param_2 >> 1) {
    iVar1 = param_1 * param_2;
    iVar2 = iVar2 + 1;
    param_1 = param_1 >> 1;
    iVar1 = param_7[0xe] * iVar1;
    param_7[8] = param_7[8] + ((int)(iVar1 + ((uint)(iVar1 >> 0x1f) >> 0x1d)) >> 3);
  }
  return;
}



/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_006faec0(void)

{
  int iVar1;
  code *in_lr;
  float in_s0;
  float fVar2;
  uint local_10 [3];
  code *local_4;
  
  local_4 = in_lr;
  if ((uint)((int)in_s0 * 2) < 0x7e921fb6) {
    if ((uint)((int)in_s0 * 2) < 0x73000001 && (int)in_s0 * -2 != -0x73000000) {
      local_10[0] = 0xffffffff;
    }
    else {
      local_10[0] = 0;
    }
  }
  else if ((uint)ABS(in_s0) < 0x46490e49) {
    if (((uint)in_s0 & 0x80000000) == 0) {
      fVar2 = (in_s0 * 0.63661975 + 8388608.0) - 8388608.0;
    }
    else {
      fVar2 = (in_s0 * 0.63661975 - 8388608.0) + 8388608.0;
    }
    local_10[0] = (int)fVar2 & 3;
    in_s0 = (((in_s0 - fVar2 * 1.5703125) - fVar2 * 0.0004837513) - fVar2 * 7.5495336e-08) -
            fVar2 * 2.563344e-12;
  }
  else {
    fn_006fb118(local_10);
  }
  if (-1 < (int)local_10[0]) {
    if ((local_10[0] & 1) == 0) {
      if ((local_10[0] & 2) == 0) {
        return;
      }
    }
    else if ((local_10[0] & 2) == 0) {
                    /* WARNING: Could not recover jumptable at 0x006faf38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*local_4)();
      return;
    }
    return;
  }
  if ((uint)((int)in_s0 * 2) < 0xff000000) {
    iVar1 = fn_001a8760(in_s0);
    if (iVar1 == 4) {
      fn_001a878c();
    }
    return;
  }
  if ((int)in_s0 * 2 == 0xff000000) {
    fn_00102ca2(1);
                    /* WARNING: Could not recover jumptable at 0x006fb044. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*local_4)();
    return;
  }
  return;
}



void fn_006fb118(uint *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint in_fpscr;
  
  if (0xff000000 < param_2 * 2 || param_2 * -2 == 0x1000000) {
    *param_1 = 0xffffffff;
    return;
  }
  uVar6 = ((param_2 & 0x7fffffff) >> 0x17) - 0x78;
  iVar1 = (int)uVar6 >> 5;
  uVar6 = uVar6 & 0x1f;
  uVar5 = param_2 << 8 | 0x80000000;
  uVar8 = 0x20 - uVar6;
  iVar10 = iVar1 * 4;
  lVar2 = (ulonglong)uVar5 *
          (ulonglong)
          (*(int *)(&DAT_0081b708 + iVar1 * 4) << uVar6 |
          *(uint *)(&DAT_0081b70c + iVar10) >> (uVar8 & 0xff));
  uVar7 = (uint)lVar2;
  lVar3 = (ulonglong)uVar5 *
          (ulonglong)
          (*(uint *)(&DAT_0081b70c + iVar10) << uVar6 |
          *(uint *)(&UNK_0081b710 + iVar10) >> (uVar8 & 0xff));
  uVar9 = (uint)((ulonglong)lVar3 >> 0x20);
  uVar5 = (uint)((ulonglong)uVar5 *
                 (ulonglong)
                 (*(uint *)(&UNK_0081b710 + iVar10) << uVar6 |
                 *(uint *)(&UNK_0081b714 + iVar10) >> (uVar8 & 0xff)) >> 0x20);
  lVar4 = lVar3 + CONCAT44(uVar7,uVar5);
  uVar6 = (uint)((ulonglong)lVar4 >> 0x20);
  iVar10 = (int)((ulonglong)lVar2 >> 0x20) +
           (uint)(CARRY4(uVar9,uVar7) || CARRY4(uVar9 + uVar7,(uint)CARRY4(uVar5,(uint)lVar3)));
  uVar5 = iVar10 + 0x20U >> 6;
  *param_1 = uVar5;
  VectorSignedToFloat(iVar10 * 0x4000000 | (uVar6 >> 0x13) << 0xd,(byte)(in_fpscr >> 0x16) & 3);
  VectorUnsignedToFloat(uVar6 * 0x2000,(byte)(in_fpscr >> 0x16) & 3);
  VectorUnsignedToFloat((int)lVar4,(byte)(in_fpscr >> 0x16) & 3);
  if ((param_2 & 0x80000000) == 0) {
    return;
  }
  *param_1 = 0x10000000 - uVar5;
  return;
}


