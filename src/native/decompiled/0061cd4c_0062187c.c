#include "0061cd4c_0062187c.h"



void fn_0062187c(undefined4 param_1,char *param_2,undefined4 param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int unaff_r4;
  int iVar8;
  
  switch(param_2[6]) {
  case '\x01':
    fn_001741ec(param_1);
    break;
  case '\x02':
    fn_0062171c(param_1);
    break;
  case '\x03':
  case '\n':
    fn_0062a454(param_1);
    break;
  case '\x04':
    fn_0017440c(param_1);
  }
  if (*param_2 != '\0') {
    unaff_r4 = (int)param_2[1];
  }
  if (*param_2 != '\0' && unaff_r4 != 0) {
    iVar3 = fn_0061be08();
    if (iVar3 == 0) {
      uVar4 = fn_0061be08(unaff_r4);
      uVar4 = uVar4 ^ 1;
    }
    else {
      uVar4 = fn_0061be08(unaff_r4);
    }
    if (uVar4 != 0) {
      bVar2 = true;
      goto LAB_0062195c;
    }
  }
  bVar2 = false;
LAB_0062195c:
  uVar4 = (uint)*(short *)(param_2 + 0x18);
  iVar3 = 0;
  if (0 < (int)(uVar4 - 1)) {
    piVar6 = (int *)(param_2 + 0x14);
    if ((uVar4 & 1) == 0) {
      piVar6 = (int *)(param_2 + 0x1c);
      iVar3 = *piVar6;
    }
    iVar5 = piVar6[2];
    iVar8 = 0;
    for (iVar7 = (int)(uVar4 - 1) >> 1; iVar7 != 0; iVar7 = iVar7 + -1) {
      iVar3 = iVar3 + iVar5;
      iVar5 = piVar6[6];
      iVar8 = iVar8 + piVar6[4];
      piVar6 = piVar6 + 4;
    }
    iVar3 = iVar3 + iVar8;
  }
  if (-1 < (int)(uVar4 - 1)) {
    iVar3 = iVar3 + *(int *)(param_2 + (uVar4 - 1) * 8 + 0x1c);
  }
  iVar7 = fn_00621250(param_3);
  if ((bVar2) || (iVar3 < 1)) {
    iVar3 = 0;
  }
  else {
    iVar3 = (iVar3 * iVar7) / 100;
  }
  cVar1 = param_2[2];
  if ((((cVar1 == '\x01') && (*(short *)(param_2 + 4) == 2)) ||
      ((cVar1 == '\x01' && (*(short *)(param_2 + 4) == 0x14e)))) ||
     ((cVar1 == '\x01' && (*(short *)(param_2 + 4) == 0x4e)))) {
    iVar3 = (int)((ulonglong)((longlong)(iVar7 * -1000) * 0x28f5c29) >> 0x20) -
            (iVar7 * -1000 >> 0x1f);
  }
  fn_00625c54(param_1,param_2,iVar3);
  fn_00624960(param_1,param_3);
  return;
}



bool fn_0061cd4c(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = fn_00654ee8();
  fn_002697b4(uVar1,*(undefined4 *)(param_2 + 0xf0),*(undefined4 *)(param_2 + 0xe8),
               *(undefined4 *)(param_2 + 0xec),*(undefined4 *)(param_2 + 0xf0),
               *(undefined4 *)(param_2 + 0xf4),*(undefined4 *)(param_2 + 0xf8),
               *(undefined4 *)(param_2 + 0xfc));
  iVar2 = fn_0025fe24();
  return iVar2 == 0x23e;
}


