#include "006010cc_0060165c.h"



void fn_0060165c(int param_1,undefined4 param_2)

{
  *(undefined1 *)(param_1 + 8) = 0;
  fn_0017821c(param_1 + 0xc,param_2,0x104);
  return;
}



void fn_00601644(int param_1,undefined4 param_2)

{
  fn_007954e8(param_2,param_1 + 0x110);
  return;
}



undefined4 fn_006015f0(short *param_1,short *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*param_1 == 0) {
    uVar3 = 0;
    if (*param_2 != 0) {
      return 0;
    }
  }
  else {
    if (*param_2 != 0) {
      iVar1 = fn_00661308();
      iVar2 = fn_00661308((int)*param_1);
      if (iVar1 <= iVar2) {
        return 0;
      }
    }
    uVar3 = 1;
  }
  return uVar3;
}



undefined4 fn_006015a0(short *param_1,short *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*param_1 == 0) {
    uVar3 = 0;
    if (*param_2 != 0) {
      return 0;
    }
  }
  else {
    if (*param_2 != 0) {
      iVar1 = fn_00661308();
      iVar2 = fn_00661308((int)*param_1);
      if (iVar2 <= iVar1) {
        return 0;
      }
    }
    uVar3 = 1;
  }
  return uVar3;
}



undefined4 fn_0060154c(short *param_1,short *param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  
  sVar1 = *param_2;
  if (*param_1 == 0 || sVar1 == 0) {
    if (*param_1 == 0 && sVar1 == 0) {
      return 0;
    }
    if (sVar1 != 0) {
      return 0;
    }
  }
  else {
    iVar2 = fn_0028be30();
    iVar3 = fn_0028be30((int)*param_2);
    if (iVar3 <= iVar2) {
      return 0;
    }
  }
  return 1;
}



undefined2 fn_006014b8(short *param_1,short *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  if (*param_1 == 0) {
    return 0;
  }
  if (*param_2 != 0) {
    uVar1 = fn_00661094();
    uVar2 = fn_00661094((int)*param_2);
    if (uVar1 == uVar2) {
      if (*param_1 == 0) {
        if (*param_2 == 0) {
          return 0;
        }
        return 0;
      }
      if (*param_2 != 0) {
        iVar3 = fn_00661308();
        iVar4 = fn_00661308((int)*param_1);
        if (iVar4 <= iVar3) {
          return 0;
        }
      }
    }
    else if (uVar2 <= uVar1) {
      return 0;
    }
  }
  return 1;
}



undefined4 fn_00601470(short *param_1,short *param_2)

{
  int iVar1;
  int iVar2;
  
  if (*param_1 == 0) {
    return 0;
  }
  if (*param_2 != 0) {
    iVar1 = fn_00660ccc();
    iVar2 = fn_00660ccc((int)*param_2);
    if (iVar2 <= iVar1) {
      return 0;
    }
  }
  return 1;
}



undefined4 fn_0060141c(short *param_1,short *param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  
  sVar1 = *param_2;
  if (*param_1 == 0 || sVar1 == 0) {
    if (*param_1 == 0 && sVar1 == 0) {
      return 0;
    }
    if (sVar1 != 0) {
      return 0;
    }
  }
  else {
    iVar2 = fn_0028be14();
    iVar3 = fn_0028be14((int)*param_2);
    if (iVar3 <= iVar2) {
      return 0;
    }
  }
  return 1;
}



undefined4 fn_006013d4(short *param_1,short *param_2)

{
  int iVar1;
  int iVar2;
  
  if (*param_1 == 0) {
    return 0;
  }
  if (*param_2 != 0) {
    iVar1 = fn_00660d04();
    iVar2 = fn_00660d04((int)*param_2);
    if (iVar2 <= iVar1) {
      return 0;
    }
  }
  return 1;
}



undefined4 fn_00601330(short *param_1,ushort *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = (uint)(short)*param_2;
  if (*param_1 != 0) {
    if (uVar1 == 0) {
      return 1;
    }
    uVar1 = fn_00661714((int)*param_1);
    uVar2 = fn_00661714((int)(short)*param_2);
    if (uVar2 != uVar1) {
      if (uVar2 < uVar1) {
        return 1;
      }
      return 0;
    }
    if (*param_1 != 0) {
      if (*param_2 == 0) {
        return 1;
      }
      iVar3 = fn_00661308();
      iVar4 = fn_00661308((int)*param_1);
      if (iVar3 < iVar4) {
        return 1;
      }
      return 0;
    }
    uVar1 = (uint)*param_2;
  }
  if (uVar1 == 0) {
    return 0;
  }
  return 0;
}



undefined4 fn_006011f8(short *param_1,short *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  if (*param_1 == 0) {
    if (*param_2 == 0) {
      return 0;
    }
    return 0;
  }
  if (*param_2 == 0) {
    return 1;
  }
  uVar1 = fn_006b7b34(*(undefined4 *)(DAT_00897804 + 0x24));
  uVar2 = fn_006b7b34(*(undefined4 *)(DAT_00897804 + 0x24),(int)*param_2);
  uVar3 = fn_006b7b54(*(undefined4 *)(DAT_00897804 + 0x24),(int)*param_1);
  uVar4 = fn_006b7b54(*(undefined4 *)(DAT_00897804 + 0x24),(int)*param_2);
  iVar5 = fn_006b8370(*(undefined4 *)(DAT_00897804 + 0x24),(int)*param_1);
  if ((iVar5 == 0) || (iVar5 = fn_002e322c((int)*param_1), iVar5 != 0)) {
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  uVar6 = uVar6 | uVar1 | uVar3;
  iVar5 = fn_006b8370(*(undefined4 *)(DAT_00897804 + 0x24),(int)*param_2);
  if ((iVar5 == 0) || (iVar5 = fn_002e322c((int)*param_2), iVar5 != 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  uVar1 = uVar1 | uVar4 | uVar2;
  if ((uVar6 & uVar1) == 0) {
    if ((uVar6 != 0 || uVar1 != 0) && (uVar1 == 0)) {
      return 1;
    }
  }
  else {
    iVar5 = fn_006614b4((int)*param_1);
    iVar7 = fn_006614b4((int)*param_2);
    if (iVar5 < iVar7) {
      return 1;
    }
  }
  return 0;
}



undefined4 fn_0060114c(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  
  if (*param_1 == 0) {
    if (*param_2 == 0) {
      return 0;
    }
    return 0;
  }
  if (*param_2 != 0) {
    uVar5 = *(undefined4 *)(DAT_00897804 + 0xc);
    iVar1 = fn_006b8390(uVar5);
    iVar2 = fn_006b8390(uVar5,*param_2);
    uVar3 = fn_00661094((int)*(short *)(iVar1 + 0x1c));
    uVar4 = fn_00661094((int)*(short *)(iVar2 + 0x1c));
    if (uVar3 == uVar4) {
      iVar1 = fn_00661308((int)*(short *)(iVar1 + 0x1c));
      iVar2 = fn_00661308((int)*(short *)(iVar2 + 0x1c));
      if (iVar1 <= iVar2) {
        return 0;
      }
    }
    else if (uVar4 <= uVar3) {
      return 0;
    }
  }
  return 1;
}



undefined4 fn_006010cc(short *param_1,short *param_2)

{
  int iVar1;
  int iVar2;
  
  if (*param_1 == 0) {
    return 0;
  }
  if (*param_2 != 0) {
    iVar1 = fn_00661414();
    iVar2 = fn_00661414((int)*param_2);
    if (iVar2 <= iVar1) {
      return 0;
    }
  }
  return 1;
}


