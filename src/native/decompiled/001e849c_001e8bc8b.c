#include "001e849c_001e8bc8b.h"



void fn_001e8bc8(int param_1,int param_2,undefined4 param_3,uint param_4,undefined4 param_5,
                 int param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar11 = 0.0;
  uVar1 = (param_4 & 7) >> 2;
  uVar2 = (param_4 & 0xf) >> 3;
  uVar3 = (param_4 & 0x1f) >> 4;
  fVar9 = *(float *)(param_6 + 4);
  if ((0.0 < fVar9) && (uVar3 != 0)) {
    *(undefined1 *)(param_1 + 0x325) = 1;
    fn_001ea9c0(param_1);
    return;
  }
  fn_006f7a48(DAT_008977e0);
  fn_006a7cb0();
  fVar10 = fVar9;
  fn_006f7a48(DAT_008977e0);
  fn_006a7cbc();
  if (fVar11 < ABS(fVar10) + ABS(fVar9)) {
    uVar4 = *(undefined4 *)(param_2 + 0x44);
    uVar5 = *(undefined4 *)(param_2 + 4);
    iVar6 = fn_006a9938(param_1);
    if (((iVar6 != 0) && (iVar6 = (int)*(char *)(param_1 + 0x208), iVar6 != -1 && iVar6 != 4)) &&
       (iVar6 = fn_0025988c(*(undefined4 *)(param_1 + iVar6 * 4 + 0x1f8)), iVar6 == 3 || iVar6 == 4
       )) {
      fn_006aa538(param_1,(int)*(char *)(param_1 + 0x208));
      iVar6 = fn_00242b0c();
      if (iVar6 == 0) {
        fn_006aa538(param_1,(int)*(char *)(param_1 + 0x208));
        iVar6 = fn_00242a90();
        if (iVar6 == 0) {
          iVar6 = *(int *)(param_1 + 0x3fc) + 1;
          *(int *)(param_1 + 0x3fc) = iVar6;
          if (0x10 < iVar6) {
            fn_001dcf20(param_1,uVar4,uVar5,0);
            *(undefined4 *)(param_1 + 0x3fc) = 0;
          }
          goto LAB_001e8d30;
        }
      }
    }
    *(undefined4 *)(param_1 + 0x3fc) = 0;
  }
LAB_001e8d30:
  if ((((uVar1 != 0) && ((*(byte *)(param_1 + 0x130) & 4) == 0)) ||
      ((uVar2 != 0 && ((*(byte *)(param_1 + 0x130) & 8) == 0)))) ||
     ((uVar3 != 0 && ((*(byte *)(param_1 + 0x130) & 0x10) == 0)))) {
    fn_001de2b0(param_1,*(undefined4 *)(param_2 + 0x44),*(undefined4 *)(param_2 + 4),param_2 + 8,
                 uVar2);
  }
  if (((((uVar1 == 0) && ((*(byte *)(param_1 + 0x130) & 4) != 0)) ||
       ((uVar2 == 0 && ((*(byte *)(param_1 + 0x130) & 8) != 0)))) ||
      ((uVar3 == 0 && ((*(byte *)(param_1 + 0x130) & 0x10) != 0)))) &&
     (*(char *)(*(int *)(param_1 + 400) + 0x3c) == '\0')) {
    fn_006f7984(DAT_008977e0);
    uVar7 = fn_006ccbd8();
    bVar8 = uVar7 == 0;
    if (bVar8) {
      uVar7 = (uint)*(byte *)(param_1 + 0x1b1);
    }
    if ((bVar8 && uVar7 == 0) && (iVar6 = fn_006a99b0(param_1), iVar6 != 0)) {
      iVar6 = fn_006f7370(DAT_008977e0);
      if (iVar6 == 0) {
        uVar4 = 0x7534;
      }
      else {
        uVar4 = 0x7564;
      }
      fn_001eab44(param_1,uVar4,param_1 + 0x274);
                    /* WARNING: Subroutine does not return */
      fn_001638a0();
    }
  }
  fn_001e2d40(param_1,param_2,param_4,param_5);
  if ((uVar1 != 0 || uVar2 != 0) || uVar3 != 0) {
    fn_0017821c(param_1 + 0x26c,param_2,0x48);
  }
  if ((param_4 & 3) >> 1 != 0 || uVar3 != 0) {
    fn_0017821c(param_1 + 0x2b4,param_3,0x48);
  }
  return;
}



void fn_001e8b44(int param_1)

{
  if (*(int *)(param_1 + 0xe4) != 0) {
    fn_001747e8();
    if (*(char *)(param_1 + 0x208) != -1) {
      fn_001747e8(*(undefined4 *)(param_1 + 0x18c));
    }
    if ((*(char *)(param_1 + 0x1b0) != -1) &&
       (*(int *)(param_1 + *(char *)(param_1 + 0x1b0) * 4 + 0x17c) != 0)) {
      fn_001747e8();
      return;
    }
  }
  return;
}


