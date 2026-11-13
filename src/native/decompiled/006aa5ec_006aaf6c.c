#include "006aa5ec_006aaf6c.h"



undefined4 fn_006aaf6c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_20;
  float local_1c;
  float local_18;
  
  if (*(char *)(param_1 + 0x22d) == '\x04') {
    iVar2 = fn_006f7a5c(DAT_008977e0);
    iVar3 = fn_006f7a5c(DAT_008977e0);
    fVar6 = *(float *)(iVar2 + 0x28) - *(float *)(iVar3 + 0x1c);
    fVar4 = *(float *)(iVar2 + 0x2c) - *(float *)(iVar3 + 0x20);
    fVar5 = *(float *)(iVar2 + 0x30) - *(float *)(iVar3 + 0x24);
    fVar7 = 1.0 / SQRT(fVar6 * fVar6 + fVar4 * fVar4 + fVar5 * fVar5);
    local_20 = fVar6 * fVar7 * 1000.0 + *(float *)(param_1 + 0x20);
    local_1c = fVar4 * fVar7 * 1000.0 + *(float *)(param_1 + 0x24);
    local_18 = fVar5 * fVar7 * 1000.0 + *(float *)(param_1 + 0x28);
    uVar1 = fn_002fbb94(&local_20);
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



void fn_006aae24(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 local_1c [12];
  
  fn_00171634();
  if (*(char *)(param_1 + 0x208) != -1) {
    uVar1 = fn_0025988c(*(undefined4 *)(param_1 + *(char *)(param_1 + 0x208) * 4 + 0x1f8));
    uVar2 = fn_0017fde4(*(undefined4 *)(param_1 + *(char *)(param_1 + 0x208) * 4 + 0x17c));
    fn_0017ab7c(local_1c,uVar2,uVar1,param_1 + 0x2c,param_1 + 0x38);
  }
  return;
}



bool fn_006aae08(int param_1)

{
  bool bVar1;
  
  bVar1 = *(int *)(param_1 + 0x30c) == -1;
  if (bVar1) {
    param_1 = *(int *)(param_1 + 0x308);
  }
  return !bVar1 || param_1 != -1;
}



uint fn_006aad5c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  iVar1 = *(int *)(param_1 + 0x378);
  uVar4 = 1;
  iVar5 = iVar1;
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0x3ac) == '\0') {
      iVar5 = *(int *)(param_1 + 0x18c);
    }
    else {
      iVar5 = *(int *)(param_1 + 0x3b4);
    }
  }
  if (iVar5 != 0) {
    if (iVar1 == 0) {
      if (*(char *)(param_1 + 0x3ac) == '\0') {
        iVar1 = *(int *)(param_1 + 0x18c);
      }
      else {
        iVar1 = *(int *)(param_1 + 0x3b4);
      }
    }
    uVar2 = fn_0017fde4(iVar1);
    uVar4 = fn_006ebdf4(uVar2,1);
  }
  iVar5 = 0;
  do {
    if (*(int *)(param_1 + iVar5 * 4 + 0x17c) != 0) {
      uVar2 = fn_0017fde4();
      uVar3 = fn_006ebdf4(uVar2,1);
      uVar4 = uVar4 & uVar3;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 5);
  return uVar4;
}



undefined1 fn_006aab6c(int param_1)

{
  char cVar1;
  int iVar2;
  undefined1 uVar3;
  
  cVar1 = *(char *)(param_1 + 0x208);
  iVar2 = fn_00154ac8(0x3f);
  uVar3 = 1;
  if (((iVar2 != 0) &&
      (((iVar2 = fn_00154ac8(0x44), iVar2 != 0 ||
        (iVar2 = (int)*(char *)(param_1 + 0x208), iVar2 == -1 || iVar2 == 4)) ||
       (iVar2 = fn_0025988c(*(undefined4 *)(param_1 + iVar2 * 4 + 0x1f8)), iVar2 != 3 && iVar2 != 4
       )))) && (((iVar2 = fn_003415b0(), iVar2 == 0 && (uVar3 = 1, cVar1 != -1)) &&
                (iVar2 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),
                                      *(undefined4 *)(param_1 + cVar1 * 4 + 0x1f8)), iVar2 != 0))))
  {
    iVar2 = fn_00242910((int)*(short *)(iVar2 + 0x1c));
    uVar3 = *(undefined1 *)(iVar2 + 0xc);
  }
  return uVar3;
}



undefined4 fn_006aab48(int param_1)

{
  undefined4 uVar1;
  
  if ((*(char *)(param_1 + 0x22d) == '\v') && (*(int *)(param_1 + 0x438) != 5)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



void fn_006aab00(int param_1)

{
  if (*(char *)(*(int *)(param_1 + 400) + 0x3c) == '\0') {
    fn_006a99b0(param_1);
  }
  return;
}



void fn_006aaa40(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  if (*(char *)(param_1 + 0x208) == -1) {
    uVar1 = 0;
  }
  else {
    uVar1 = fn_0025988c(*(undefined4 *)(param_1 + *(char *)(param_1 + 0x208) * 4 + 0x1f8));
  }
  if (*(char *)(param_1 + 0x208) != -1) {
    uVar2 = fn_006aa538(param_1,(int)*(char *)(param_1 + 0x208));
    iVar3 = fn_00242b6c();
    iVar4 = fn_00242b0c(uVar2);
    if ((iVar3 != 1 && (iVar4 != 0 || iVar3 != 0)) && (*(char *)(param_1 + 0x2fd) != '\0')) {
      fn_00154ac8(0x3e);
    }
    fn_002cd59c(uVar1);
  }
  return;
}



undefined4 fn_006aaa00(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = (int)*(char *)(param_1 + 0x208);
  if ((iVar2 == -1 || iVar2 == 4) ||
     (iVar2 = fn_0025988c(*(undefined4 *)(param_1 + iVar2 * 4 + 0x1f8)), iVar2 != 3 && iVar2 != 4))
  {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



undefined4 fn_006aa980(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(char *)(*(int *)(param_1 + 400) + 0x3c) == '\0') &&
     ((iVar1 = fn_006a9938(param_1), iVar1 != 0 || (iVar1 = fn_006a99b0(param_1), iVar1 != 0)))) {
    uVar2 = fn_006f7388(DAT_008977e0);
    iVar1 = fn_006b4240(uVar2,*(undefined4 *)(param_1 + 0x2b0));
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = fn_006bab38(iVar1,(int)(short)*(undefined4 *)(param_1 + 0x270));
    if (iVar1 == 0xb) {
      return 1;
    }
  }
  return 0;
}



void fn_006aa87c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar1 = fn_006a99b0();
  if (iVar1 != 0) {
    if (*(char *)(param_1 + 0x208) == -1) {
      uVar2 = 0;
    }
    else {
      uVar2 = fn_0025988c(*(undefined4 *)(param_1 + *(char *)(param_1 + 0x208) * 4 + 0x1f8));
    }
    if (*(char *)(param_1 + 0x208) != -1) {
      uVar3 = fn_006aa538(param_1,(int)*(char *)(param_1 + 0x208));
      iVar1 = fn_00242b6c();
      iVar4 = fn_00242b0c(uVar3);
      if ((iVar1 != 1 && (iVar4 != 0 || iVar1 != 0)) && (*(char *)(param_1 + 0x2fd) != '\0')) {
        fn_00154ac8(0x3e);
      }
      fn_002cd59c(uVar2);
    }
  }
  return;
}



undefined4 fn_006aa6ec(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar2 = fn_00154ac8(0x3d);
  uVar4 = 0;
  if (iVar2 != 0) {
    if ((((*(char *)(param_1 + 0x1b1) != '\0') || (*(char *)(param_1 + 0x3f4) != '\0')) ||
        (*(char *)(param_1 + 0x260) != '\0')) ||
       ((iVar2 = fn_006a9960(param_1), iVar2 != 0 ||
        (iVar2 = fn_006f7358(DAT_008977e0), iVar2 != 0)))) {
      return 0;
    }
    cVar1 = *(char *)(*(int *)(param_1 + 400) + 0x3c);
    if (param_2 == -1) {
      if (cVar1 != '\0') {
        return 0;
      }
    }
    else {
      iVar2 = param_1 + param_2 * 4;
      if ((cVar1 != '\0' && param_2 != 4) &&
         (iVar3 = fn_0025988c(*(undefined4 *)(iVar2 + 0x1f8)), iVar3 == 3 || iVar3 == 4)) {
        return 0;
      }
      if (*(int *)(iVar2 + 0x1f8) == 0) {
        return 0;
      }
      if ((param_2 != 4) && (iVar3 = fn_0025988c(), iVar3 == 3 || iVar3 == 4)) {
        iVar3 = fn_00211f5c(*(undefined4 *)(DAT_008977e0 + 0x1c),
                             *(undefined4 *)(DAT_008977e0 + 0xa8));
        if (iVar3 == 0) {
          return 0;
        }
        iVar3 = fn_002fb61c();
        if (iVar3 != 0) {
          return 0;
        }
      }
      if ((((*(char *)(*(int *)(param_1 + 400) + 0x3c) != '\0') ||
           ((iVar3 = fn_006a9938(param_1), iVar3 == 0 &&
            (iVar3 = fn_006a99b0(param_1), iVar3 == 0)))) &&
          (iVar3 = fn_00154ac8(0x3f), iVar3 == 0)) &&
         ((param_2 != 4 &&
          (iVar2 = fn_0025988c(*(undefined4 *)(iVar2 + 0x1f8)), iVar2 == 3 || iVar2 == 4)))) {
        return 0;
      }
    }
    uVar4 = 1;
  }
  return uVar4;
}



undefined4 fn_006aa5ec(int param_1,uint param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  
  if (1 < *(byte *)(DAT_008977e0 + 0x170)) {
    piVar2 = (int *)fn_006f72e0();
    iVar3 = (**(code **)(*piVar2 + 0x3c))();
    if (iVar3 == 0) {
      iVar3 = fn_006f7a48(DAT_008977e0);
      uVar4 = (uint)*(byte *)(iVar3 + 4);
      bVar5 = uVar4 == 0;
      if (bVar5) {
        uVar4 = *(uint *)(param_1 + 0x30c);
      }
      bVar6 = bVar5 && uVar4 == 0xffffffff;
      if (bVar5 && uVar4 == 0xffffffff) {
        bVar6 = *(int *)(param_1 + 0x308) == -1;
      }
      if ((bVar6) && (*(char *)(*(int *)(param_1 + 400) + 0x3c) == '\0')) {
        iVar3 = fn_006a9938(param_1);
        if ((iVar3 == 0) &&
           ((iVar3 = fn_006a99b0(param_1), iVar3 == 0 &&
            (iVar3 = fn_006f7358(DAT_008977e0), iVar3 == 0)))) {
          return 0;
        }
        cVar1 = *(char *)(param_1 + 0x22d);
        bVar5 = cVar1 == '\0' || cVar1 == '\x04';
        if (cVar1 == '\0' || cVar1 == '\x04') {
          bVar5 = *(char *)(param_1 + 0x1b1) == '\0';
        }
        if (((bVar5) && (uVar4 = fn_006aba20(param_1), (uVar4 & ~param_2) == 0)) &&
           (iVar3 = fn_001cf540(*(undefined4 *)(DAT_008977e0 + 0x30)), iVar3 == 0)) {
          return 1;
        }
      }
    }
  }
  return 0;
}


