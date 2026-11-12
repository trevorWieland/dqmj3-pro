#include "00371d10_0037261c.h"



undefined4 fn_0037261c(undefined4 param_1,undefined1 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = fn_0014481c(DAT_008977e8);
  iVar2 = fn_006b71a8(uVar1,param_2);
  uVar4 = 0;
  fn_0014481c(DAT_008977e8);
  iVar3 = fn_006b6bc4();
  if (0 < iVar3) {
    do {
      uVar1 = fn_0014481c(DAT_008977e8);
      uVar1 = fn_006b71a8(uVar1,uVar4 & 0xff);
      iVar3 = fn_00156f30(uVar1,0);
      if ((iVar3 != *(char *)(iVar2 + 0x219)) && (iVar3 = fn_006f7de8(uVar1), 0 < iVar3)) {
        return 1;
      }
      uVar4 = uVar4 + 1;
      fn_0014481c(DAT_008977e8);
      iVar3 = fn_006b6bc4();
    } while ((int)uVar4 < iVar3);
  }
  return 0;
}



undefined4 fn_00372568(undefined4 param_1,undefined1 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = fn_0014481c(DAT_008977e8);
  iVar2 = fn_006b71a8(uVar1,param_2);
  uVar4 = 0;
  fn_0014481c(DAT_008977e8);
  iVar3 = fn_006b6bc4();
  if (0 < iVar3) {
    do {
      uVar1 = fn_0014481c(DAT_008977e8);
      uVar1 = fn_006b71a8(uVar1,uVar4 & 0xff);
      iVar3 = fn_00156f30(uVar1,0);
      if ((iVar3 != *(char *)(iVar2 + 0x219)) && (iVar3 = fn_006f7de8(uVar1), 0 < iVar3)) {
        return 0;
      }
      uVar4 = uVar4 + 1;
      fn_0014481c(DAT_008977e8);
      iVar3 = fn_006b6bc4();
    } while ((int)uVar4 < iVar3);
  }
  return 1;
}



undefined4 fn_00372200(int param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = fn_0014481c(DAT_008977e8);
  iVar2 = fn_006b71a8(uVar1,param_2 & 0xff);
  iVar3 = fn_006bd10c(param_1,param_2);
  if (1 < iVar3) {
    uVar4 = 0;
    fn_0014481c(DAT_008977e8);
    iVar3 = fn_006b6bc4();
    if (0 < iVar3) {
      do {
        uVar1 = fn_0014481c(DAT_008977e8);
        uVar1 = fn_006b71a8(uVar1,uVar4 & 0xff);
        iVar3 = fn_00156f30(uVar1,0);
        if (((iVar3 != *(char *)(iVar2 + 0x219)) &&
            (iVar3 = fn_006bd10c(param_1,uVar4), iVar3 == 1)) &&
           (0xe < (int)((uint)*(byte *)(param_1 + uVar4 + 0x10) -
                       (uint)*(byte *)(param_2 + param_1 + 0x10)))) {
          return 1;
        }
        uVar4 = uVar4 + 1;
        fn_0014481c(DAT_008977e8);
        iVar3 = fn_006b6bc4();
      } while ((int)uVar4 < iVar3);
    }
  }
  return 0;
}



undefined4 fn_00372114(int param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = fn_0014481c(DAT_008977e8);
  iVar2 = fn_006b71a8(uVar1,param_2 & 0xff);
  iVar3 = fn_006bd10c(param_1,param_2);
  if (1 < iVar3) {
    uVar4 = 0;
    fn_0014481c(DAT_008977e8);
    iVar3 = fn_006b6bc4();
    if (0 < iVar3) {
      do {
        uVar1 = fn_0014481c(DAT_008977e8);
        uVar1 = fn_006b71a8(uVar1,uVar4 & 0xff);
        iVar3 = fn_00156f30(uVar1,0);
        if (((iVar3 != *(char *)(iVar2 + 0x219)) &&
            (iVar3 = fn_006bd10c(param_1,uVar4), iVar3 == 1)) &&
           (9 < (int)((uint)*(byte *)(param_1 + uVar4 + 0x10) -
                     (uint)*(byte *)(param_2 + param_1 + 0x10)))) {
          return 1;
        }
        uVar4 = uVar4 + 1;
        fn_0014481c(DAT_008977e8);
        iVar3 = fn_006b6bc4();
      } while ((int)uVar4 < iVar3);
    }
  }
  return 0;
}



undefined4 fn_00372028(int param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = fn_0014481c(DAT_008977e8);
  iVar2 = fn_006b71a8(uVar1,param_2 & 0xff);
  iVar3 = fn_006bd10c(param_1,param_2);
  if (1 < iVar3) {
    uVar4 = 0;
    fn_0014481c(DAT_008977e8);
    iVar3 = fn_006b6bc4();
    if (0 < iVar3) {
      do {
        uVar1 = fn_0014481c(DAT_008977e8);
        uVar1 = fn_006b71a8(uVar1,uVar4 & 0xff);
        iVar3 = fn_00156f30(uVar1,0);
        if (((iVar3 != *(char *)(iVar2 + 0x219)) &&
            (iVar3 = fn_006bd10c(param_1,uVar4), iVar3 == 1)) &&
           (4 < (int)((uint)*(byte *)(param_1 + uVar4 + 0x10) -
                     (uint)*(byte *)(param_2 + param_1 + 0x10)))) {
          return 1;
        }
        uVar4 = uVar4 + 1;
        fn_0014481c(DAT_008977e8);
        iVar3 = fn_006b6bc4();
      } while ((int)uVar4 < iVar3);
    }
  }
  return 0;
}



undefined4 fn_00371f3c(int param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = fn_0014481c(DAT_008977e8);
  iVar2 = fn_006b71a8(uVar1,param_2 & 0xff);
  iVar3 = fn_006bd10c(param_1,param_2);
  if (1 < iVar3) {
    uVar4 = 0;
    fn_0014481c(DAT_008977e8);
    iVar3 = fn_006b6bc4();
    if (0 < iVar3) {
      do {
        uVar1 = fn_0014481c(DAT_008977e8);
        uVar1 = fn_006b71a8(uVar1,uVar4 & 0xff);
        iVar3 = fn_00156f30(uVar1,0);
        if (((iVar3 != *(char *)(iVar2 + 0x219)) &&
            (iVar3 = fn_006bd10c(param_1,uVar4), iVar3 == 1)) &&
           (2 < (int)((uint)*(byte *)(param_1 + uVar4 + 0x10) -
                     (uint)*(byte *)(param_2 + param_1 + 0x10)))) {
          return 1;
        }
        uVar4 = uVar4 + 1;
        fn_0014481c(DAT_008977e8);
        iVar3 = fn_006b6bc4();
      } while ((int)uVar4 < iVar3);
    }
  }
  return 0;
}



undefined4 fn_00371e50(int param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = fn_0014481c(DAT_008977e8);
  iVar2 = fn_006b71a8(uVar1,param_2 & 0xff);
  iVar3 = fn_006bd10c(param_1,param_2);
  if (1 < iVar3) {
    uVar4 = 0;
    fn_0014481c(DAT_008977e8);
    iVar3 = fn_006b6bc4();
    if (0 < iVar3) {
      do {
        uVar1 = fn_0014481c(DAT_008977e8);
        uVar1 = fn_006b71a8(uVar1,uVar4 & 0xff);
        iVar3 = fn_00156f30(uVar1,0);
        if (((iVar3 != *(char *)(iVar2 + 0x219)) &&
            (iVar3 = fn_006bd10c(param_1,uVar4), iVar3 == 1)) &&
           ((int)((uint)*(byte *)(param_1 + uVar4 + 0x10) -
                 (uint)*(byte *)(param_2 + param_1 + 0x10)) < 2)) {
          return 1;
        }
        uVar4 = uVar4 + 1;
        fn_0014481c(DAT_008977e8);
        iVar3 = fn_006b6bc4();
      } while ((int)uVar4 < iVar3);
    }
  }
  return 0;
}



bool fn_00371e38(void)

{
  int iVar1;
  
  iVar1 = fn_006bd10c();
  return iVar1 == 4;
}



bool fn_00371e20(void)

{
  int iVar1;
  
  iVar1 = fn_006bd10c();
  return iVar1 == 3;
}



bool fn_00371e08(void)

{
  int iVar1;
  
  iVar1 = fn_006bd10c();
  return iVar1 == 2;
}



bool fn_00371df4(void)

{
  int iVar1;
  
  iVar1 = fn_006bd10c();
  return iVar1 == 1;
}



undefined4 fn_00371d94(void)

{
  int iVar1;
  undefined4 uVar2;
  
  fn_0014481c(DAT_008977e8);
  iVar1 = fn_006b6c88();
  if (0 < iVar1) {
    uVar2 = fn_0014481c(DAT_008977e8);
    iVar1 = fn_006b6b3c(uVar2,0);
    if (*(char *)(iVar1 + 0x74) == '\0') {
      return 1;
    }
  }
  return 0;
}



bool fn_00371d40(void)

{
  int iVar1;
  
  iVar1 = fn_00371be0();
  return 2 < iVar1;
}



bool fn_00371d28(void)

{
  int iVar1;
  
  iVar1 = fn_00371be0();
  return 1 < iVar1;
}



bool fn_00371d10(void)

{
  int iVar1;
  
  iVar1 = fn_00371be0();
  return 0 < iVar1;
}


