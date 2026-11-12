#include "006b7dc4_006b854c.h"



int fn_006b854c(int param_1,int param_2)

{
  int iVar1;
  
  if ((param_2 < 0) || (499 < param_2)) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 4) + 0x2c + param_2 * 0xf0;
  }
  return iVar1;
}



int fn_006b84b0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  
  iVar5 = 0;
  iVar1 = *(int *)(param_1 + 4);
  iVar4 = 0;
  do {
    iVar2 = *(int *)(iVar1 + 0x14 + iVar4 * 4);
    if (iVar2 == -0x1194d800) {
      piVar3 = (int *)fn_001c2350(DAT_008977e4);
LAB_006b84e8:
      iVar2 = 0;
      if (piVar3 != (int *)0x0) {
        iVar2 = *piVar3;
      }
      if (piVar3 != (int *)0x0 && iVar2 != 0) {
        iVar5 = iVar5 + 1;
      }
    }
    else {
      uVar6 = fn_0077f008(iVar2,*(int *)(param_1 + 4) + 0x2c,500);
      iVar2 = (int)((ulonglong)uVar6 >> 0x20);
      piVar3 = (int *)uVar6;
      if (piVar3 != (int *)0x0) {
        iVar2 = *piVar3;
      }
      if (piVar3 != (int *)0x0 && iVar2 != 0) goto LAB_006b84e8;
    }
    iVar4 = iVar4 + 1;
    if (3 < iVar4) {
      return iVar5;
    }
  } while( true );
}



int fn_006b8478(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = 0;
  do {
    if (*(int *)(*(int *)(param_1 + 4) + 0x2c + iVar2 * 0xf0) == 0) {
      return iVar1;
    }
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 1;
  } while (iVar2 < 500);
  return iVar1;
}



int fn_006b83e4(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  
  iVar5 = 0;
  iVar1 = *(int *)(param_1 + 4);
  iVar4 = 0;
  do {
    iVar2 = *(int *)(iVar1 + 4 + iVar4 * 4);
    if (iVar2 == -0x1194d800) {
      piVar3 = (int *)fn_001c2350(DAT_008977e4);
LAB_006b841c:
      iVar2 = 0;
      if (piVar3 != (int *)0x0) {
        iVar2 = *piVar3;
      }
      if (piVar3 != (int *)0x0 && iVar2 != 0) {
        iVar5 = iVar5 + 1;
      }
    }
    else {
      uVar6 = fn_0077f008(iVar2,*(int *)(param_1 + 4) + 0x2c,500);
      iVar2 = (int)((ulonglong)uVar6 >> 0x20);
      piVar3 = (int *)uVar6;
      if (piVar3 != (int *)0x0) {
        iVar2 = *piVar3;
      }
      if (piVar3 != (int *)0x0 && iVar2 != 0) goto LAB_006b841c;
    }
    iVar4 = iVar4 + 1;
    if (3 < iVar4) {
      return iVar5;
    }
  } while( true );
}



int * fn_006b8390(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (param_2 == -0x1194d800) {
    piVar1 = (int *)fn_001c2350(DAT_008977e4);
    return piVar1;
  }
  uVar3 = fn_0077f008(param_2,*(int *)(param_1 + 4) + 0x2c,500);
  iVar2 = (int)((ulonglong)uVar3 >> 0x20);
  piVar1 = (int *)uVar3;
  if (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
  }
  if (piVar1 == (int *)0x0 || iVar2 == 0) {
    piVar1 = (int *)0x0;
  }
  return piVar1;
}



int fn_006b8328(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  uVar2 = 1;
  do {
    iVar1 = fn_0028bcb0((int)(short)uVar2);
    if ((iVar1 != 0) && (iVar1 = fn_006a7ae8(uVar2 & 0xff), iVar1 == param_2)) {
      iVar3 = iVar3 + 1;
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 0xf8);
  return iVar3;
}



int fn_006b8190(undefined4 param_1,int param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = 0;
  uVar4 = 1;
  iVar3 = fn_006616e0();
  if (1 < iVar3) {
    do {
      iVar3 = fn_002e31e4(uVar4);
      if (iVar3 == 0) {
        bVar2 = 0;
        if ((param_2 != 0) || (((uint)(&DAT_008c97a8)[uVar4 >> 5] >> (uVar4 & 0x1f) & 1) == 0)) {
          bVar2 = 1;
        }
        bVar1 = 0;
        if ((param_3 != 0) || (iVar3 = fn_002e3204(), iVar3 == 0)) {
          bVar1 = 1;
        }
        if ((bool)(bVar2 & bVar1)) {
          iVar5 = iVar5 + 1;
        }
      }
      uVar4 = (uint)(short)((short)uVar4 + 1);
      iVar3 = fn_006616e0();
    } while ((int)uVar4 < iVar3);
  }
  return iVar5;
}



int fn_006b8068(undefined4 param_1,int param_2,int param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = 1;
  iVar5 = 0;
  iVar3 = fn_006616e0();
  if (1 < iVar3) {
    do {
      iVar3 = fn_002e31e4(uVar4);
      if ((iVar3 == 0) && (iVar3 = fn_00661094(uVar4), iVar3 == param_2)) {
        bVar2 = 0;
        if ((param_3 != 0) || (((uint)(&DAT_008c97a8)[uVar4 >> 5] >> (uVar4 & 0x1f) & 1) == 0)) {
          bVar2 = 1;
        }
        bVar1 = 0;
        if ((param_4 != 0) || (iVar3 = fn_002e3204(), iVar3 == 0)) {
          bVar1 = 1;
        }
        if ((bool)(bVar2 & bVar1)) {
          iVar5 = iVar5 + 1;
        }
      }
      uVar4 = (uint)(short)((short)uVar4 + 1);
      iVar3 = fn_006616e0();
    } while ((int)uVar4 < iVar3);
  }
  return iVar5;
}



int fn_006b7f9c(int param_1,int param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = 1;
  iVar5 = 0;
  iVar3 = fn_006616e0();
  if (1 < iVar3) {
    do {
      iVar3 = fn_002e31e4(uVar4);
      if ((iVar3 == 0) &&
         ((*(uint *)(*(int *)(param_1 + 4) + ((int)uVar4 >> 5) * 4) & 1 << (uVar4 & 0x1f)) != 0)) {
        bVar2 = 0;
        if ((param_2 != 0) || (((uint)(&DAT_008c97a8)[uVar4 >> 5] >> (uVar4 & 0x1f) & 1) == 0)) {
          bVar2 = 1;
        }
        bVar1 = 0;
        if ((param_3 != 0) || (iVar3 = fn_002e3204(uVar4), iVar3 == 0)) {
          bVar1 = 1;
        }
        if ((bool)(bVar2 & bVar1)) {
          iVar5 = iVar5 + 1;
        }
      }
      uVar4 = (uint)(short)((short)uVar4 + 1);
      iVar3 = fn_006616e0();
    } while ((int)uVar4 < iVar3);
  }
  return iVar5;
}



int fn_006b7eb4(int param_1,int param_2,int param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = 1;
  iVar5 = 0;
  iVar3 = fn_006616e0();
  if (1 < iVar3) {
    do {
      iVar3 = fn_002e31e4(uVar4);
      if (((iVar3 == 0) && (iVar3 = fn_00661094(uVar4), iVar3 == param_2)) &&
         ((*(uint *)(*(int *)(param_1 + 4) + ((int)uVar4 >> 5) * 4) & 1 << (uVar4 & 0x1f)) != 0)) {
        bVar2 = 0;
        if ((param_3 != 0) || (((uint)(&DAT_008c97a8)[uVar4 >> 5] >> (uVar4 & 0x1f) & 1) == 0)) {
          bVar2 = 1;
        }
        bVar1 = 0;
        if ((param_4 != 0) || (iVar3 = fn_002e3204(), iVar3 == 0)) {
          bVar1 = 1;
        }
        if ((bool)(bVar2 & bVar1)) {
          iVar5 = iVar5 + 1;
        }
      }
      uVar4 = (uint)(short)((short)uVar4 + 1);
      iVar3 = fn_006616e0();
    } while ((int)uVar4 < iVar3);
  }
  return iVar5;
}



uint fn_006b7e90(int param_1,uint param_2)

{
  return *(uint *)(*(int *)(param_1 + 4) + 0x804 + (param_2 >> 5) * 4) >> (param_2 & 0x1f) & 1;
}



uint fn_006b7e5c(int param_1,uint param_2)

{
  return *(uint *)(*(int *)(param_1 + 4) + 0x298 + (param_2 >> 5) * 4) >> (param_2 & 0x1f) & 1;
}



int fn_006b7dc4(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  uVar2 = 1;
  iVar1 = fn_006924e0();
  if (1 < iVar1) {
    do {
      iVar1 = fn_0028bc94(uVar2);
      if (iVar1 != 0) {
        if (((*(uint *)(*(int *)(param_1 + 4) + 0x804 + (uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) !=
             0) && ((param_2 == 0 || (iVar1 = fn_00163c9c(uVar2), iVar1 != 0)))) {
          iVar3 = iVar3 + 1;
        }
      }
      uVar2 = (uint)(short)((short)uVar2 + 1);
      iVar1 = fn_006924e0();
    } while ((int)uVar2 < iVar1);
  }
  return iVar3;
}


