#include "006ac8b4_006acfd8.h"



void fn_006acfd8(void)

{
  if (*(int *)(DAT_00897804 + 0x68) == 0) {
    return;
  }
  fn_006c5058();
  return;
}



undefined4 fn_006acf10(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  
  if (-1 < param_4) {
    if (param_2 == 0) {
      iVar1 = fn_006b83e4();
    }
    else if (param_2 == 1) {
      iVar1 = fn_006b84b0();
    }
    else {
      iVar1 = 0;
    }
    if (param_4 < iVar1) {
      iVar1 = 0;
      if (param_2 == 0) {
        iVar1 = fn_0028b0a0(*(undefined4 *)(DAT_00897804 + 0xc),param_4);
      }
      else if (param_2 == 1) {
        iVar1 = fn_0028b348();
      }
      uVar2 = 0;
      do {
        if (*(short *)(iVar1 + uVar2 * 4 + 0x56) == param_3) {
          return 1;
        }
        uVar2 = uVar2 + 1 & 0xff;
      } while (uVar2 < 7);
    }
  }
  return 0;
}



undefined4 fn_006acefc(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *(int *)(param_1 + 0xe4c);
  if (iVar2 == 0) {
    return 0;
  }
  uVar3 = fn_006c2870();
  if (uVar3 < 0x40) {
    iVar2 = *(int *)(iVar2 + uVar3 * 4 + 4);
    cVar1 = '\0';
    if (iVar2 != 0) {
      cVar1 = *(char *)(iVar2 + 8);
    }
    if (iVar2 != 0 && cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



undefined4 fn_006ace90(void)

{
  undefined4 in_r3;
  int iVar1;
  undefined4 uStack_10;
  
  iVar1 = *(int *)(DAT_00897804 + 8);
  uStack_10 = in_r3;
  fn_00246e68(&uStack_10);
  fn_00246e00(&uStack_10);
  iVar1 = fn_006b5424(&uStack_10,*(undefined4 *)(iVar1 + 4));
  if ((iVar1 == 0) && (iVar1 = fn_001f82ac(), iVar1 == 0)) {
    fn_00246e74(&uStack_10);
    return 0;
  }
  fn_00246e74(&uStack_10);
  return 1;
}



undefined4 fn_006acd18(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [24];
  
  uVar4 = *(undefined4 *)(param_1 + 0x80);
  iVar1 = fn_006f7a20(DAT_008977e0);
  if ((iVar1 == 0) &&
     (iVar1 = fn_0025fa84(DAT_00897800,*(undefined4 *)(param_1 + 0x84),param_4), iVar1 != 0)) {
    uVar4 = *(undefined4 *)(param_1 + 0x84);
  }
  uVar4 = fn_0025f9d8(DAT_00897800,uVar4,param_4);
  if (param_2 == 0) {
    iVar1 = fn_006b83e4(*(undefined4 *)(DAT_00897804 + 0xc));
  }
  else {
    if (param_2 != 1) {
      return 0;
    }
    iVar1 = fn_006b84b0();
  }
  iVar3 = 0;
  if (0 < iVar1) {
    do {
      if (param_2 == 0) {
        iVar2 = fn_0028b0a0(*(undefined4 *)(DAT_00897804 + 0xc),iVar3);
LAB_006ace00:
        if (iVar2 != 0) {
          fn_0020bbc4(auStack_40);
          fn_006bfdb4(auStack_3c,auStack_38,0xc);
          iVar2 = fn_006bfda8(auStack_3c);
          if ((iVar2 == param_3) && (iVar2 = fn_00101d80(auStack_38,uVar4), iVar2 == 0)) {
            return 1;
          }
        }
      }
      else if (param_2 == 1) {
        iVar2 = fn_0028b348();
        goto LAB_006ace00;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  return 0;
}



undefined4 fn_006accd4(undefined4 param_1,int param_2)

{
  int iVar1;
  
  fn_006f7a84(DAT_008977e0);
  iVar1 = fn_006aba74();
  if (iVar1 != 0) {
    fn_006f7a84(DAT_008977e0);
    iVar1 = fn_006aa52c();
    if (iVar1 == param_2) {
      return 1;
    }
  }
  return 0;
}



void fn_006acc94(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = fn_006f7a5c(DAT_008977e0);
  fn_001d6b00(uVar1,param_2,param_3,1);
  return;
}



int fn_006acc74(void)

{
  int iVar1;
  
  iVar1 = fn_006b4f84(*(undefined4 *)(DAT_00897804 + 0x18));
  return 100 - iVar1;
}



void fn_006acbd8(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (((int)param_2 < 0) || (0x4f < param_2)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + param_2 * 0x2c + 0x8c);
  }
  fn_006ad62c();
  fn_006a8048(uVar1);
  return;
}



undefined4 fn_006acb24(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar1 = fn_006b83e4(*(undefined4 *)(DAT_00897804 + 0xc));
  }
  else {
    if (param_2 != 1) {
      return 1;
    }
    iVar1 = fn_006b84b0();
  }
  iVar3 = 0;
  if (0 < iVar1) {
    do {
      iVar2 = 0;
      if (param_2 == 0) {
        iVar2 = fn_0028b0a0(*(undefined4 *)(DAT_00897804 + 0xc),iVar3);
      }
      else if (param_2 == 1) {
        iVar2 = fn_0028b348();
      }
      if (*(short *)(iVar2 + 0x20) != *(short *)(iVar2 + 0x24)) {
        return 0;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  return 1;
}



undefined4 fn_006aca70(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar1 = fn_006b83e4(*(undefined4 *)(DAT_00897804 + 0xc));
  }
  else {
    if (param_2 != 1) {
      return 1;
    }
    iVar1 = fn_006b84b0();
  }
  iVar3 = 0;
  if (0 < iVar1) {
    do {
      iVar2 = 0;
      if (param_2 == 0) {
        iVar2 = fn_0028b0a0(*(undefined4 *)(DAT_00897804 + 0xc),iVar3);
      }
      else if (param_2 == 1) {
        iVar2 = fn_0028b348();
      }
      if (*(short *)(iVar2 + 0x1e) != *(short *)(iVar2 + 0x22)) {
        return 0;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  return 1;
}



bool fn_006aca48(void)

{
  int iVar1;
  
  iVar1 = fn_006b51d8(*(undefined4 *)(DAT_00897804 + 0x1c),3);
  return iVar1 != 0;
}



undefined4 fn_006ac978(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_18 [4];
  undefined1 auStack_14 [4];
  
  iVar1 = 0;
  if (-1 < param_3) {
    if (param_2 == 0) {
      iVar1 = fn_006b83e4(*(undefined4 *)(DAT_00897804 + 0xc));
    }
    else if (param_2 == 1) {
      iVar1 = fn_006b84b0();
    }
    if (param_3 < iVar1) {
      if (param_2 == 0) {
        iVar1 = fn_0028b0a0(*(undefined4 *)(DAT_00897804 + 0xc),param_3);
      }
      else {
        if (param_2 != 1) {
          return 0;
        }
        iVar1 = fn_0028b348();
      }
      if (iVar1 != 0) {
        fn_0020bbc4(auStack_18);
        uVar2 = fn_006bfe90(auStack_14);
        return uVar2;
      }
    }
  }
  return 0;
}



undefined4 fn_006ac8b4(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_18 [4];
  undefined1 auStack_14 [4];
  
  iVar1 = 0;
  if (-1 < param_3) {
    if (param_2 == 0) {
      iVar1 = fn_006b83e4(*(undefined4 *)(DAT_00897804 + 0xc));
    }
    else if (param_2 == 1) {
      iVar1 = fn_006b84b0();
    }
    if (param_3 < iVar1) {
      if (param_2 == 0) {
        iVar1 = fn_0028b0a0(*(undefined4 *)(DAT_00897804 + 0xc),param_3);
      }
      else {
        if (param_2 != 1) {
          return 0;
        }
        iVar1 = fn_0028b348();
      }
      if (iVar1 != 0) {
        fn_0020bbc4(auStack_18);
        uVar2 = fn_006bfdec(auStack_14);
        return uVar2;
      }
    }
  }
  return 0;
}


