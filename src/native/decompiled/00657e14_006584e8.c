#include "00657e14_006584e8.h"



int fn_006584e8(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    return *(int *)(param_1 + 0x1c);
  }
  iVar4 = 0;
  if ((*(uint *)(param_1 + 0x6c) & 1) != 0) {
    fn_00656bb8();
    iVar4 = param_1 + 0x50;
  }
  if (*(char *)(param_1 + 0x4c) == '\x01') {
    fn_00658d54(param_1 + 0x84,*(undefined4 *)(param_1 + 0x90));
    if ((*(int *)(param_1 + 0x7c) < 1) || (*(int *)(param_1 + 0x74) == 0)) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(int *)(param_1 + 0x74) - *(int *)(param_1 + 0x80);
    }
    if ((*(int *)(param_1 + 0x8c) < 1) || (*(int *)(param_1 + 0x84) == 0)) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(int *)(param_1 + 0x84) - *(int *)(param_1 + 0x90);
    }
    if ((uVar3 < uVar1) && (uVar1 != 0)) {
      iVar5 = uVar1 - *(int *)(param_1 + 0x18);
      fn_00658e3c(uVar1 + *(int *)(param_1 + 0x80));
      *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + -1;
      iVar2 = (**(code **)(**(int **)(param_1 + 0x20) + 0x24))
                        (*(int **)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x18),iVar5);
      if (iVar2 != 0) {
        *(int *)(param_1 + 0x1c) = iVar5;
        goto LAB_0065869c;
      }
    }
  }
  else {
    fn_00658d54(param_1 + 0x84,*(undefined4 *)(param_1 + 0x90));
    if ((*(int *)(param_1 + 0x7c) < 1) || (*(int *)(param_1 + 0x78) == 0)) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(int *)(param_1 + 0x78) - *(int *)(param_1 + 0x80);
    }
    if ((*(int *)(param_1 + 0x8c) < 1) || (*(int *)(param_1 + 0x88) == 0)) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(int *)(param_1 + 0x88) - *(int *)(param_1 + 0x90);
    }
    if ((uVar1 < uVar3) && (uVar1 != 0)) {
      iVar5 = (*(int *)(param_1 + 0x1c) - (*(int *)(uVar1 + 0xc) + *(int *)(uVar1 + 8))) + -0x10;
      fn_00658e3c(uVar1 + *(int *)(param_1 + 0x80));
      *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + -1;
      iVar2 = (**(code **)(**(int **)(param_1 + 0x20) + 0x20))
                        (*(int **)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x18),iVar5);
      if (iVar2 != 0) {
        *(int *)(param_1 + 0x18) = iVar2;
        *(int *)(param_1 + 0x1c) = iVar5;
        goto LAB_0065869c;
      }
    }
  }
  iVar5 = *(int *)(param_1 + 0x1c);
LAB_0065869c:
  if (iVar4 != 0) {
    fn_00656ca4(iVar4);
  }
  return iVar5;
}



void fn_00658454(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  if ((*(uint *)(param_1 + 0x6c) & 1) != 0) {
    fn_00656bb8();
    iVar2 = param_1 + 0x50;
  }
  if (*(char *)(param_1 + 0x4c) == '\x01') {
    puVar1 = (undefined4 *)(param_1 + 0x94);
  }
  else {
    puVar1 = *(undefined4 **)(param_1 + 0x18);
  }
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
  }
  puVar1[2] = *(int *)(param_1 + 0x1c) + -0xa4;
  fn_0065830c(param_1);
  if (iVar2 == 0) {
    return;
  }
  fn_00656ca4(iVar2);
  return;
}



undefined4 * fn_00658204(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)fn_006f529c();
  puVar3 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (int)puVar1 + (puVar1[2] - param_2) + puVar1[3] + 0x10;
    param_2 = (uVar2 - (uVar2 & ~(param_3 - 1U))) + param_2;
    uVar2 = puVar1[2] - param_2;
    if (uVar2 < 0x11) {
      puVar1[3] = uVar2;
      if (uVar2 != 0) {
        *(int *)((int)puVar1 + uVar2 + 0xc) = (int)puVar1 + 1;
      }
      puVar1[2] = param_2;
      fn_00658e3c(*(int *)(param_1 + 0x80) + (int)puVar1);
      *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + -1;
      fn_00658e20(param_1 + 0x84,*(int *)(param_1 + 0x90) + (int)puVar1);
      *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + 1;
      return puVar1;
    }
    puVar1[2] = uVar2 - 0x10;
    puVar3 = (undefined4 *)((int)puVar1 + (uVar2 - 0x10) + puVar1[3] + 0x10);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
    }
    puVar3[2] = param_2;
    fn_00658e20(param_1 + 0x84,*(int *)(param_1 + 0x90) + (int)puVar3);
    *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + 1;
  }
  return puVar3;
}



undefined4 * fn_0065809c(int param_1,uint param_2)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  bool bVar6;
  
  cVar1 = *(char *)(param_1 + 0x70);
  puVar5 = (undefined4 *)0x0;
  if (*(int *)(param_1 + 0x7c) < 1) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    if (*(int *)(param_1 + 0x74) == 0) goto LAB_0065814c;
    puVar2 = (undefined4 *)(*(int *)(param_1 + 0x74) - *(int *)(param_1 + 0x80));
  }
  if (puVar2 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  do {
    uVar4 = puVar2[2];
    if (uVar4 < param_2) goto LAB_00658134;
    if (cVar1 == '\0') {
      puVar5 = puVar2;
      break;
    }
    if (puVar5 == (undefined4 *)0x0) {
LAB_00658130:
      puVar5 = puVar2;
    }
    else if (cVar1 == '\x01') {
      if (uVar4 < (uint)puVar5[2]) goto LAB_00658130;
    }
    else if ((cVar1 == '\x02') && ((uint)puVar5[2] < uVar4)) goto LAB_00658130;
LAB_00658134:
    puVar2 = *(undefined4 **)(*(int *)(param_1 + 0x80) + (int)puVar2);
    bVar6 = puVar2 == (undefined4 *)(param_1 + 0x74);
    if (!bVar6) {
      puVar2 = (undefined4 *)((int)puVar2 - *(int *)(param_1 + 0x80));
      bVar6 = puVar2 == (undefined4 *)0x0;
    }
  } while (!bVar6);
LAB_0065814c:
  if (puVar5 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  if (puVar5[2] - param_2 < 0x11) {
    fn_00658e3c(*(int *)(param_1 + 0x80) + (int)puVar5);
    *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + -1;
    fn_00658e20(param_1 + 0x84,*(int *)(param_1 + 0x90) + (int)puVar5);
    *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + 1;
    return puVar5;
  }
  iVar3 = (puVar5[2] - param_2) - 0x10;
  puVar5[2] = iVar3;
  puVar5 = (undefined4 *)((int)puVar5 + iVar3 + puVar5[3] + 0x10);
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
  }
  puVar5[2] = param_2;
  fn_00658e20(param_1 + 0x84,*(int *)(param_1 + 0x90) + (int)puVar5);
  *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + 1;
  return puVar5;
}



int fn_00657f9c(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  iVar1 = fn_006f51d0();
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0xc) + 0x10 + iVar1;
    iVar2 = ((iVar2 + param_3) - 1U & ~(param_3 - 1U)) - iVar2;
    uVar4 = *(int *)(iVar1 + 8) - (param_2 + iVar2);
    *(int *)(iVar1 + 0xc) = iVar2;
    if (iVar2 != 0) {
      *(int *)(iVar1 + iVar2 + 0xc) = iVar1 + 1;
    }
    *(int *)(iVar1 + 8) = param_2;
    fn_00658e3c(*(int *)(param_1 + 0x80) + iVar1);
    *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + -1;
    fn_00658e20(param_1 + 0x84,*(int *)(param_1 + 0x90) + iVar1);
    *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + 1;
    if (uVar4 < 0x11) {
      if (uVar4 != 0) {
        *(uint *)(iVar1 + 8) = param_2 + uVar4;
      }
    }
    else {
      puVar3 = (undefined4 *)(*(int *)(iVar1 + 0xc) + 0x10 + iVar1 + param_2);
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
        puVar3[3] = 0;
      }
      puVar3[2] = uVar4 - 0x10;
      fn_0065830c(param_1);
    }
  }
  return iVar1;
}



int fn_00657e14(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  iVar1 = (**(code **)(*param_1 + 0x40))(param_1);
  if (iVar1 != 0) {
    piVar2 = (int *)0x0;
    if ((param_1[0x1b] & 1U) != 0) {
      fn_00656bb8();
      piVar2 = param_1 + 0x14;
    }
    iVar1 = param_1[0x22];
    while( true ) {
      iVar1 = iVar1 - param_1[0x24];
      if (iVar1 == (int)(param_1 + 0x21) - param_1[0x24]) break;
      if (*(int *)(iVar1 + 0xc) + 0x10 + iVar1 == param_2) {
        uVar4 = (*(int *)(iVar1 + 0xc) + *(int *)(iVar1 + 8)) - param_3;
        if (uVar4 < 0x10) {
          *(uint *)(iVar1 + 0xc) = uVar4;
          if (uVar4 != 0) {
            *(int *)(iVar1 + uVar4 + 0xc) = iVar1 + 1;
          }
          iVar1 = iVar1 + *(int *)(iVar1 + 0xc) + 0x10;
        }
        else {
          puVar3 = (undefined4 *)(iVar1 + uVar4);
          if (puVar3 != (undefined4 *)0x0) {
            *puVar3 = 0;
            puVar3[1] = 0;
            puVar3[2] = 0;
            puVar3[3] = 0;
          }
          puVar3[2] = param_3;
          fn_00658e20(param_1 + 0x21,param_1[0x24] + (int)puVar3);
          param_1[0x23] = param_1[0x23] + 1;
          fn_00658e3c(param_1[0x24] + iVar1);
          param_1[0x23] = param_1[0x23] + -1;
          *(uint *)(iVar1 + 8) = uVar4 - 0x10;
          *(undefined4 *)(iVar1 + 0xc) = 0;
          fn_0065830c(param_1,iVar1);
          iVar1 = (int)puVar3 + puVar3[3] + 0x10;
        }
        if (piVar2 != (int *)0x0) {
          fn_00656ca4(piVar2);
        }
        return iVar1;
      }
      iVar1 = *(int *)(iVar1 + param_1[0x24] + 4);
    }
    if (piVar2 != (int *)0x0) {
      fn_00656ca4(piVar2);
    }
  }
  return 0;
}



void fn_0065830c(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0x78);
  do {
    uVar2 = iVar1 - *(int *)(param_1 + 0x80);
    if (uVar2 == (param_1 + 0x74) - *(int *)(param_1 + 0x80)) {
      fn_00658e20(param_1 + 0x74,param_2 + *(int *)(param_1 + 0x80));
      *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + 1;
LAB_00658388:
      iVar4 = *(int *)(param_1 + 0x80);
      iVar1 = *(int *)(param_1 + 0x78) - iVar4;
      while( true ) {
        iVar3 = iVar1;
        if (iVar3 == (param_1 + 0x74) - *(int *)(param_1 + 0x80)) {
          return;
        }
        iVar1 = *(int *)(iVar3 + iVar4 + 4) - iVar4;
        if (iVar1 == (param_1 + 0x74) - *(int *)(param_1 + 0x80)) break;
        if (*(int *)(iVar3 + 8) + *(int *)(iVar3 + 0xc) + 0x10 + iVar3 == iVar1) {
          *(int *)(iVar3 + 8) =
               *(int *)(iVar3 + 8) + *(int *)(iVar1 + 0xc) + *(int *)(iVar1 + 8) + 0x10;
          fn_00658e3c(*(int *)(param_1 + 0x80) + iVar1);
          *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + -1;
          iVar1 = iVar3;
        }
      }
      return;
    }
    if (param_2 < uVar2) {
      fn_00658e20(uVar2 + *(int *)(param_1 + 0x80),param_2 + *(int *)(param_1 + 0x80));
      *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + 1;
      goto LAB_00658388;
    }
    iVar1 = *(int *)(uVar2 + *(int *)(param_1 + 0x80) + 4);
  } while( true );
}


