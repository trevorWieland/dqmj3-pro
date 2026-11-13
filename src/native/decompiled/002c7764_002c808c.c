#include "002c7764_002c808c.h"



void fn_002c808c(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (*(int **)(param_1 + 0x70) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x70) + 4))();
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  (**(code **)(**(int **)(param_1 + 0x6c) + 0x14))();
  if (*(int **)(param_1 + 0x6c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x6c) + 4))();
    *(undefined4 *)(param_1 + 0x6c) = 0;
  }
  (**(code **)(**(int **)(param_1 + 0x80) + 0x18))();
  if (*(int **)(param_1 + 0x80) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x80) + 4))();
    *(undefined4 *)(param_1 + 0x80) = 0;
  }
  iVar2 = 0;
  do {
    piVar1 = *(int **)(*(int *)(param_1 + 0x74) + iVar2 * 4);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    *(undefined4 *)(*(int *)(param_1 + 0x74) + iVar2 * 4) = 0;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 2);
  if (*(int *)(param_1 + 0x8c) != -1) {
    fn_0016a43c(*(undefined4 *)(param_1 + 0x84));
    *(undefined4 *)(param_1 + 0x8c) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x88) != -1) {
                    /* WARNING: Subroutine does not return */
    fn_001482f4(*(undefined4 *)(param_1 + 0x84));
  }
  return;
}



undefined4 * fn_002c7f50(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar1 = (undefined4 *)fn_0043148c();
  puVar1[0x3c] = 0;
  *puVar1 = &DAT_0081f4b8;
  puVar1[0x3d] = 0;
  puVar1[0x3e] = 0;
  puVar1[0x3f] = 0;
  puVar1[0x40] = 0;
  puVar1[0x42] = 0;
  puVar1[0x44] = 0;
  puVar1[0x45] = 0;
  *(undefined1 *)(puVar1 + 0x46) = 0;
  puVar4 = (undefined4 *)0x0;
  puVar2 = (undefined4 *)fn_001f74d8(puVar1,0x36);
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar3 == &DAT_008951dc) {
        puVar4 = puVar2;
        break;
      }
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar1[0x41] = puVar4;
  return puVar1;
}



void fn_002c7ee0(int *param_1,int param_2,undefined4 param_3)

{
  fn_002c265c();
  if (param_2 == 3) {
    (**(code **)(*param_1 + 0x110))(param_1,4,param_3,0,1);
    return;
  }
  if (param_2 == 4) {
    (**(code **)(*param_1 + 0x110))(param_1,3,param_3,0,1);
  }
  return;
}



void fn_002c7e70(int *param_1,int param_2,undefined4 param_3)

{
  fn_002c2648();
  if (param_2 == 3) {
    (**(code **)(*param_1 + 0x110))(param_1,4,param_3,0,1);
    return;
  }
  if (param_2 == 4) {
    (**(code **)(*param_1 + 0x110))(param_1,3,param_3,0,1);
  }
  return;
}



void fn_002c7d5c(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  fn_002c263c();
  if (param_2 == 3) {
    if ((char)param_1[0x1f] == '\0') {
      (**(code **)(*param_1 + 0x110))(param_1,7,0,0,1);
    }
  }
  else if (param_2 == 4) {
    iVar1 = fn_00430f14(param_1,param_3,1);
    if (iVar1 == 0) {
      if ((char)param_1[0x1f] == '\0') {
        (**(code **)(*param_1 + 0x110))(param_1,7,1,0,1);
        return;
      }
      fn_0042fea4(param_1,param_3);
      fn_0068ab44(param_1,0x100094f);
      return;
    }
  }
  else if (param_2 == 7) {
    if (param_3 == 0) {
      (**(code **)(*param_1 + 0x110))(param_1,3,0,0);
      return;
    }
    (**(code **)(*param_1 + 0x110))(param_1,4);
    fn_0042fea4(param_1,param_3);
    return;
  }
  return;
}



void fn_002c7c08(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x114);
  if (iVar2 == 0) {
    fn_00430fb0(param_1);
    (**(code **)(**(int **)(param_1 + 0xf0) + 0x14))();
    (**(code **)(**(int **)(param_1 + 0xf4) + 0x14))();
    (**(code **)(**(int **)(param_1 + 0xf8) + 0x14))();
    (**(code **)(**(int **)(param_1 + 0xfc) + 0x14))();
    if ('\0' < *(char *)(*(int *)(param_1 + 0x108) + 0x78)) {
      fn_002c6674(param_1);
      return;
    }
  }
  else if (iVar2 == 1) {
    if (*(char *)(*(int *)(param_1 + 0x5c) + 0x31) == '\x01') {
      *(undefined4 *)(*(int *)(param_1 + 0x108) + 8) =
           **(undefined4 **)(*(int *)(param_1 + 0x9c) + 4);
      fn_006899f4(param_1,*(undefined4 *)(*(int *)(param_1 + 0x108) + 0xc),0);
      return;
    }
  }
  else if ((iVar2 == 2) && (cVar1 = *(char *)(*(int *)(param_1 + 0x5c) + 0x31), cVar1 != '\0')) {
    if (cVar1 == '\x03') {
      fn_006899f4(param_1,*(undefined4 *)(*(int *)(param_1 + 0x108) + 0xc),0);
    }
    else if (cVar1 == '\x02') {
      *(undefined4 *)(*(int *)(param_1 + 0x108) + 8) = 0;
      fn_006899f4(param_1,*(undefined4 *)(*(int *)(param_1 + 0x108) + 0x10),0);
    }
    *(undefined1 *)(*(int *)(param_1 + 0x5c) + 0x31) = 0;
    fn_00689d04(param_1,0,0);
    return;
  }
  return;
}



void fn_002c7a14(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  fn_002c2070();
  if (param_2 == 3) {
    if ((char)param_1[0x1f] == '\0') {
      (**(code **)(*param_1 + 0x110))(param_1,7,0,0,1);
    }
  }
  else if (param_2 == 4) {
    iVar1 = fn_0043100c(param_1,param_3);
    if (iVar1 == 0) {
      if ((char)param_1[0x1f] == '\0') {
        (**(code **)(*param_1 + 0x110))(param_1,7,1,0,1);
        return;
      }
      fn_0042fdf8(param_1,param_3);
      fn_0068ab44(param_1,0x100094f);
      return;
    }
  }
  else if (param_2 == 7) {
    if (param_3 == 0) {
      (**(code **)(*param_1 + 0x110))(param_1,3,0,0);
      return;
    }
    (**(code **)(*param_1 + 0x110))(param_1,4);
    fn_0042fdf8(param_1,param_3);
    return;
  }
  return;
}



void fn_002c7764(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  if (param_3 == 0) {
    *(undefined1 *)(*(int *)(param_1 + 0x108) + 0x7b) = 0;
    iVar1 = fn_002e3d18(param_1,3);
    if (iVar1 == 0) {
      uVar3 = **(undefined4 **)(*(int *)(param_1 + 0x9c) + 4);
      if (*(char *)(*(int *)(param_1 + 0x108) + 0x79) != '\0') {
        fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),uVar3);
        iVar1 = fn_0024e350();
        if (iVar1 != 0) {
          *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x38) = 0;
          uVar3 = fn_0022f584((char *)&DAT_002c79ec);
          fn_0036c648(*(undefined4 *)(param_1 + 0x5c),3);
          fn_0068974c(param_1,uVar3,0,1);
          fn_0068ab44(param_1,0x100094d);
          return;
        }
      }
      iVar1 = *(int *)(param_1 + 0x108);
      iVar2 = (int)*(char *)(iVar1 + 0x78);
      if (0 < iVar2) {
        iVar4 = 0;
        while( true ) {
          if (iVar4 < iVar2) {
            uVar5 = (uint)*(ushort *)(iVar1 + iVar4 * 2 + 0x14);
          }
          else {
            uVar5 = 0;
          }
          if ((int)*(short *)(*(int *)(*(int *)(param_1 + 0x9c) + 0x28) + 0x16) == uVar5) break;
          iVar4 = iVar4 + 1;
          if (iVar2 <= iVar4) {
            uVar3 = *(undefined4 *)(iVar1 + 0x7c);
            fn_0036c648(*(undefined4 *)(param_1 + 0x5c),3);
            fn_0068974c(param_1,uVar3,0,1);
            *(undefined4 *)(param_1 + 0x114) = 1;
            return;
          }
        }
      }
      *(undefined4 *)(iVar1 + 8) = uVar3;
      iVar1 = *(int *)(*(int *)(param_1 + 0x108) + 0x84);
      iVar2 = *(int *)(iVar1 + -4);
    }
    else {
      if (*(char *)(*(int *)(param_1 + 0x108) + 0x7a) == '\0') {
        *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x38) = 0;
        uVar3 = fn_0022f584((char *)&DAT_002c79cc,0);
        fn_0036c648(*(undefined4 *)(param_1 + 0x5c),3);
        fn_0068974c(param_1,uVar3,0,1);
        fn_0068ab44(param_1,0x100094d);
        return;
      }
      *(undefined1 *)(*(int *)(param_1 + 0x108) + 0x7b) = 1;
      *(undefined4 *)(*(int *)(param_1 + 0x108) + 8) = 0;
      iVar1 = *(int *)(*(int *)(param_1 + 0x108) + 0x84);
      iVar2 = *(int *)(iVar1 + -4);
    }
    if (iVar2 != 0) {
      fn_0068974c(param_1,iVar1,1);
      *(undefined4 *)(param_1 + 0x114) = 2;
      return;
    }
    fn_0068ab44(param_1,0x100094b);
    fn_006899f4(param_1,*(undefined4 *)(*(int *)(param_1 + 0x108) + 0xc),0);
  }
  else {
    fn_0068ab44(param_1,0x100094c);
    fn_006899f4(param_1,*(undefined4 *)(*(int *)(param_1 + 0x108) + 0x10),0);
  }
  fn_00689d04(param_1,0);
  return;
}


