#include "006008d0_00600fe4.h"



undefined4 fn_00600fe4(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*param_1 == 0) {
    if (*param_2 == 0) {
      return 0;
    }
    return 0;
  }
  if (*param_2 != 0) {
    uVar3 = *(undefined4 *)(DAT_00897804 + 0xc);
    iVar1 = fn_006b8390(uVar3);
    iVar2 = fn_006b8390(uVar3,*param_2);
    if (*(byte *)(iVar2 + 0x2e) == *(byte *)(iVar1 + 0x2e)) {
      iVar1 = fn_00661308((int)*(short *)(iVar1 + 0x1c));
      iVar2 = fn_00661308((int)*(short *)(iVar2 + 0x1c));
      if (iVar1 <= iVar2) {
        return 0;
      }
    }
    else if (*(byte *)(iVar1 + 0x2e) <= *(byte *)(iVar2 + 0x2e)) {
      return 0;
    }
  }
  return 1;
}



undefined4 fn_00600ed8(int *param_1,int *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [4];
  undefined1 auStack_18 [4];
  undefined1 auStack_14 [4];
  
  if (*param_1 == 0) {
    return 0;
  }
  if (*param_2 == 0) {
    return 1;
  }
  uVar6 = *(undefined4 *)(DAT_00897804 + 0xc);
  uVar1 = fn_0028aad0(uVar6);
  uVar6 = fn_0028aad0(uVar6,*param_2);
  fn_0020bbc4(auStack_20,uVar1);
  fn_0020bbc4(auStack_18,uVar6);
  uVar2 = fn_006bfdec(auStack_1c);
  uVar3 = fn_006bfdec(auStack_14);
  if (uVar3 == uVar2) {
    fn_006bfda8(auStack_1c);
    iVar4 = fn_00661308();
    fn_006bfda8(auStack_14);
    iVar5 = fn_00661308();
    if (iVar4 <= iVar5) {
      return 0;
    }
  }
  else if (uVar2 <= uVar3) {
    return 0;
  }
  return 1;
}



undefined4 fn_00600dc8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (*(short *)(param_1 + 10) == 0) {
    return 0;
  }
  if (*(short *)(param_2 + 10) != 0) {
    iVar1 = fn_00661058();
    iVar2 = fn_00661058((int)*(short *)(param_2 + 10));
    if (iVar2 <= iVar1) {
      return 0;
    }
  }
  return 1;
}



undefined4 fn_00600d1c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (*(byte *)(param_1 + 6) == *(byte *)(param_2 + 6)) {
    if (*(short *)(param_1 + 4) != 0) {
      if (*(short *)(param_2 + 4) != 0) {
        iVar1 = fn_00660ff8();
        iVar2 = fn_00660ff8((int)*(short *)(param_2 + 4));
        if (iVar2 <= iVar1) {
          return 0;
        }
      }
      return 1;
    }
    if (*(short *)(param_2 + 4) == 0) {
      return 0;
    }
  }
  else if (*(byte *)(param_2 + 6) < *(byte *)(param_1 + 6)) {
    return 1;
  }
  return 0;
}



undefined4 fn_00600c78(short *param_1,short *param_2)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  sVar1 = *param_2;
  if (*param_1 == 0 || sVar1 == 0) {
    if ((*param_1 != 0 || sVar1 != 0) && (sVar1 == 0)) {
      return 1;
    }
  }
  else {
    uVar2 = fn_006b7e90(*(undefined4 *)(DAT_00897804 + 0x24));
    uVar3 = fn_006b7e90(*(undefined4 *)(DAT_00897804 + 0x24),(int)*param_2);
    if ((uVar2 & uVar3) == 0) {
      if ((uVar2 != 0 || uVar3 != 0) && (uVar3 == 0)) {
        return 1;
      }
    }
    else {
      iVar4 = fn_00692568((int)*param_1);
      iVar5 = fn_00692568((int)*param_2);
      if (iVar4 < iVar5) {
        return 1;
      }
    }
  }
  return 0;
}



undefined4 fn_00600bd4(short *param_1,short *param_2)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  sVar1 = *param_2;
  if (*param_1 == 0 || sVar1 == 0) {
    if ((*param_1 != 0 || sVar1 != 0) && (sVar1 == 0)) {
      return 1;
    }
  }
  else {
    uVar2 = fn_006b7e5c(*(undefined4 *)(DAT_00897804 + 0x24));
    uVar3 = fn_006b7e5c(*(undefined4 *)(DAT_00897804 + 0x24),(int)*param_2);
    if ((uVar2 & uVar3) == 0) {
      if ((uVar2 != 0 || uVar3 != 0) && (uVar3 == 0)) {
        return 1;
      }
    }
    else {
      iVar4 = fn_0028be30((int)*param_1);
      iVar5 = fn_0028be30((int)*param_2);
      if (iVar4 < iVar5) {
        return 1;
      }
    }
  }
  return 0;
}



undefined4 fn_00600b50(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = fn_00660e2c((int)*(short *)(param_1 + 4));
  uVar2 = fn_00660e2c((int)*(short *)(param_2 + 4));
  if (uVar1 == uVar2) {
    if (*(short *)(param_1 + 4) != 0) {
      if (*(short *)(param_2 + 4) != 0) {
        iVar3 = fn_00660ff8();
        iVar4 = fn_00660ff8((int)*(short *)(param_2 + 4));
        if (iVar4 <= iVar3) {
          return 0;
        }
      }
      return 1;
    }
    if (*(short *)(param_2 + 4) == 0) {
      return 0;
    }
  }
  else if (uVar2 < uVar1) {
    return 1;
  }
  return 0;
}



undefined4 fn_00600b08(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (*(short *)(param_1 + 4) == 0) {
    return 0;
  }
  if (*(short *)(param_2 + 4) != 0) {
    iVar1 = fn_00660ff8();
    iVar2 = fn_00660ff8((int)*(short *)(param_2 + 4));
    if (iVar2 <= iVar1) {
      return 0;
    }
  }
  return 1;
}



undefined4 fn_00600a60(uint *param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = *(undefined4 *)(DAT_00897804 + 0x28);
  iVar1 = fn_006b2a74(uVar3,*param_1);
  iVar2 = fn_006b2a74(uVar3,*param_2);
  if (*(char *)(iVar1 + 4) == '\x03') {
    if (*(char *)(iVar2 + 4) == '\x03') {
      if (*(byte *)(iVar1 + 0xb) == *(byte *)(iVar2 + 0xb)) {
        if (*param_2 <= *param_1) {
          return 0;
        }
      }
      else if (*(byte *)(iVar1 + 0xb) <= *(byte *)(iVar2 + 0xb)) {
        return 0;
      }
    }
  }
  else {
    if (*(char *)(iVar2 + 4) == '\x03') {
      return 0;
    }
    if (*param_2 <= *param_1) {
      return 0;
    }
  }
  return 1;
}



undefined4 fn_00600a18(short *param_1,short *param_2)

{
  int iVar1;
  int iVar2;
  
  if (*param_1 == 0) {
    return 0;
  }
  if (*param_2 != 0) {
    iVar1 = fn_00660ff8();
    iVar2 = fn_00660ff8((int)*param_2);
    if (iVar2 <= iVar1) {
      return 0;
    }
  }
  return 1;
}



undefined4 fn_006009c4(ushort *param_1,short *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  if (*param_1 == 0) {
    uVar3 = 0;
    if (*param_2 != 0) {
      return 0;
    }
  }
  else {
    if (*param_2 != 0) {
      uVar1 = fn_006a7a78(*param_1 & 0xff);
      uVar2 = fn_006a7a78((char)*param_2);
      if (uVar2 <= uVar1) {
        return 0;
      }
    }
    uVar3 = 1;
  }
  return uVar3;
}



undefined4 fn_006008d0(short *param_1,short *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  if (*param_1 == 0) {
    if (*param_2 == 0) {
      return 0;
    }
    return 0;
  }
  if (*param_2 == 0) {
    return 1;
  }
  uVar1 = fn_006b7d34(*(undefined4 *)(DAT_00897804 + 0x24));
  uVar2 = fn_006b7d34(*(undefined4 *)(DAT_00897804 + 0x24),(int)*param_2);
  if ((uVar1 & uVar2) == 0) {
    if ((uVar1 != 0 || uVar2 != 0) && (uVar2 == 0)) {
      return 1;
    }
  }
  else {
    iVar3 = fn_00660ff8((int)*param_1);
    iVar4 = fn_00660ff8((int)*param_2);
    if (iVar3 < iVar4) {
      return 1;
    }
  }
  return 0;
}


