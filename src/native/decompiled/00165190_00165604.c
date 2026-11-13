#include "00165190_00165604.h"



int fn_00165604(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 4) == '\x0f') {
    iVar1 = *(int *)(param_1 + 8) + 4;
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}



int fn_0016533c(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  undefined8 uVar5;
  
  uVar3 = (uint)*(char *)(param_1 + 4);
  switch(*(char *)(param_1 + 4)) {
  case '\0':
    uVar5 = fn_00175c44();
    uVar3 = (uint)((ulonglong)uVar5 >> 0x20);
    iVar1 = (int)uVar5;
    if (iVar1 == 0) {
      return 0;
    }
    bVar4 = param_3 == 0;
    if ((int)param_3 >= 0) {
      uVar3 = (uint)*(char *)(iVar1 + 0x14);
      bVar4 = uVar3 == param_3;
    }
    if (bVar4 || ((int)param_3 < 0 || (int)uVar3 < (int)param_3)) {
      return 0;
    }
    goto LAB_00165408;
  case '\x01':
    bVar4 = param_2 == 0;
    if ((int)param_2 >= 0) {
      uVar3 = *(uint *)(param_1 + 0xc);
      bVar4 = uVar3 == param_2;
    }
    if (bVar4 || ((int)param_2 < 0 || (int)uVar3 < (int)param_2)) {
      return 0;
    }
    iVar1 = *(int *)(param_1 + param_2 * 4 + 0x10);
    if (iVar1 == 0) {
      return 0;
    }
    bVar4 = param_3 == 0;
    if ((int)param_3 >= 0) {
      param_2 = (uint)*(char *)(iVar1 + 0x14);
      bVar4 = param_2 == param_3;
    }
    if (bVar4 || ((int)param_3 < 0 || (int)param_2 < (int)param_3)) {
      return 0;
    }
    goto LAB_00165408;
  case '\x02':
    bVar4 = param_2 == 0;
    if ((int)param_2 >= 0) {
      uVar3 = *(uint *)(param_1 + 8);
      bVar4 = uVar3 == param_2;
    }
    if (bVar4 || ((int)param_2 < 0 || (int)uVar3 < (int)param_2)) {
      return 0;
    }
    iVar1 = *(int *)(param_1 + param_2 * 4 + 0xc);
    if (iVar1 == 0) {
      return 0;
    }
    bVar4 = param_3 == 0;
    if ((int)param_3 >= 0) {
      param_2 = (uint)*(char *)(iVar1 + 0x14);
      bVar4 = param_2 == param_3;
    }
    if (bVar4 || ((int)param_3 < 0 || (int)param_2 < (int)param_3)) {
      return 0;
    }
    goto LAB_00165408;
  case '\x03':
    if ((-1 < (int)param_3) && (param_3 < 4)) {
      if (*(int *)(param_1 + 8) < 2) {
        param_3 = 0;
      }
      return *(int *)(param_1 + param_3 * 4 + 0xc);
    }
    break;
  case '\x04':
  case '\x05':
  case '\x06':
  case '#':
    if (((uVar3 == 4 || uVar3 == 5) || (uVar3 == 6 || uVar3 == 0x23)) &&
       ((uint *)(param_1 + 8) != (uint *)0x0)) {
      bVar4 = param_3 == 0;
      if (-1 < (int)param_3) {
        param_2 = *(uint *)(param_1 + 8);
        bVar4 = param_2 == param_3;
      }
      if (!bVar4 && (-1 < (int)param_3 && (int)param_3 <= (int)param_2)) goto LAB_00165574;
    }
    break;
  case '\a':
    if (param_1 == -8) {
      return 0;
    }
    return *(int *)(param_1 + 0xc);
  case '\b':
  case '\t':
  case '\n':
    if (((uVar3 == 8 || uVar3 == 9) || uVar3 == 10) && (param_1 != -8)) {
      bVar4 = param_3 == 0;
      if (-1 < (int)param_3) {
        param_2 = *(uint *)(param_1 + 0xc);
        bVar4 = param_2 == param_3;
      }
      if (!bVar4 && (-1 < (int)param_3 && (int)param_3 <= (int)param_2)) goto LAB_00165518;
    }
    break;
  case '\v':
  case '\f':
    return *(int *)(param_1 + 8);
  case '\r':
    iVar2 = *(int *)(param_1 + 8) + 4;
    if (iVar2 != 0) {
      return iVar2 + param_3 * 0xc4 + 4;
    }
    break;
  case '\x0e':
    iVar2 = 0;
    if (param_1 != -8) {
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if (param_1 != -8 && iVar2 != 0) {
      return iVar2 + 8;
    }
    break;
  case '\x11':
    if (param_1 != -8) {
LAB_00165574:
      return *(int *)(param_1 + param_3 * 4 + 0xc);
    }
    break;
  case '\x15':
    bVar4 = param_2 == 0;
    if ((int)param_2 >= 0) {
      uVar3 = *(uint *)(param_1 + 0x10);
      bVar4 = uVar3 == param_2;
    }
    if (bVar4 || ((int)param_2 < 0 || (int)uVar3 < (int)param_2)) {
      return 0;
    }
    iVar1 = *(int *)(param_1 + param_2 * 4 + 0x14);
    bVar4 = iVar1 == 0;
    iVar2 = 0;
    if (!bVar4) {
      param_2 = (uint)*(char *)(iVar1 + 0x14);
      iVar2 = param_2 - param_3;
    }
    if ((bVar4 || param_2 == param_3) || iVar2 < 0 != (!bVar4 && SBORROW4(param_2,param_3))) {
      return 0;
    }
LAB_00165408:
    return iVar1 + param_3 * 0xc4 + 0x18;
  case '\x16':
    bVar4 = SCARRY4(param_1,8);
    iVar2 = param_1 + 8;
    if (param_1 != -8) {
      param_2 = *(uint *)(param_1 + 0xc);
      bVar4 = SBORROW4(param_2,param_3);
      iVar2 = param_2 - param_3;
    }
    if ((param_1 != -8 && param_2 != param_3) && iVar2 < 0 == bVar4) {
LAB_00165518:
      return *(int *)(param_1 + param_3 * 4 + 0x10);
    }
    break;
  case '\x17':
    bVar4 = SCARRY4(param_1,8);
    iVar2 = param_1 + 8;
    if (param_1 != -8) {
      param_2 = *(uint *)(param_1 + 0xc);
      bVar4 = SBORROW4(param_2,param_3);
      iVar2 = param_2 - param_3;
    }
    if ((param_1 != -8 && param_2 != param_3) && iVar2 < 0 == bVar4) goto LAB_00165518;
    break;
  case '\x18':
    iVar2 = *(int *)(param_1 + 8);
    goto joined_r0x001655ec;
  case '\x19':
    iVar2 = *(int *)(param_1 + 8);
joined_r0x001655ec:
    if (iVar2 != 0) {
      return iVar2 + param_2 * 0xc4 + 8;
    }
  }
  return 0;
}



int fn_00165328(int param_1)

{
  if (*(char *)(param_1 + 4) == '\x06') {
    param_1 = param_1 + 8;
  }
  else {
    param_1 = 0;
  }
  return param_1;
}



int fn_00165250(int param_1)

{
  char cVar1;
  
  switch(*(undefined1 *)(param_1 + 4)) {
  case 0:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xc:
  case 0xe:
  case 0xf:
  case 0x12:
  case 0x16:
  case 0x17:
  case 0x1c:
  case 0x1e:
  case 0x1f:
  case 0x21:
  case 0x23:
    return 1;
  case 1:
    return (int)*(char *)(param_1 + 0xc);
  case 2:
    cVar1 = *(char *)(param_1 + 8);
    break;
  default:
    return 0;
  case 0x15:
    cVar1 = *(char *)(param_1 + 0x10);
    break;
  case 0x18:
  case 0x19:
  case 0x1b:
  case 0x1d:
  case 0x20:
  case 0x22:
    return 2;
  }
  return (int)cVar1;
}



int fn_00165248(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x84);
  switch(*(undefined1 *)(iVar2 + 4)) {
  case 0:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xc:
  case 0xe:
  case 0xf:
  case 0x12:
  case 0x16:
  case 0x17:
  case 0x1c:
  case 0x1e:
  case 0x1f:
  case 0x21:
  case 0x23:
    return 1;
  case 1:
    return (int)*(char *)(iVar2 + 0xc);
  case 2:
    cVar1 = *(char *)(iVar2 + 8);
    break;
  default:
    return 0;
  case 0x15:
    cVar1 = *(char *)(iVar2 + 0x10);
    break;
  case 0x18:
  case 0x19:
  case 0x1b:
  case 0x1d:
  case 0x20:
  case 0x22:
    return 2;
  }
  return (int)cVar1;
}



undefined1 fn_00165238(int param_1)

{
  return *(undefined1 *)(*(int *)(param_1 + 0x84) + 5);
}



int fn_00165190(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((*(char *)(*(int *)(param_1 + 0x84) + 4) == '\0') && (iVar1 = fn_00175be4(), iVar1 != 0)) {
    iVar1 = (int)*(short *)(iVar1 + param_2 * 0xc4 + 0x1a);
    if (iVar1 - 1U < 699) {
      iVar3 = 0;
      iVar2 = fn_001746f4();
      if (0 < iVar2) {
        do {
          iVar2 = fn_00163940();
          if ((iVar2 != 0) && (iVar2 = fn_001746dc((int)(short)iVar3), iVar2 == iVar1)) {
            return (int)(short)iVar3;
          }
          iVar3 = iVar3 + 1;
          iVar2 = fn_001746f4();
        } while (iVar3 < iVar2);
      }
    }
  }
  return 0;
}


