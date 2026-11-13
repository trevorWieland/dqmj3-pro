#include "001db994_001dbf48.h"



undefined4 * fn_001dbf48(undefined4 param_1,undefined1 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  puVar1 = (undefined4 *)fn_001c7c68();
  *puVar1 = &DAT_0081be7c;
  *(undefined1 *)(puVar1 + 0x37) = param_2;
  puVar1[0x38] = 0xffffffff;
  uVar4 = 0;
  puVar1[0x39] = 0;
  puVar1[0x3a] = 0xffffffff;
  puVar1[0x3b] = 0;
  puVar1[0x3c] = 0;
  uVar5 = 0x3f800000;
  puVar1[0x3d] = 0;
  puVar1[0x3e] = 0x3f800000;
  uVar2 = fn_00118290();
  puVar1[0x3f] = uVar2;
  puVar1[0x40] = 0;
  puVar1[0x41] = 0;
  puVar1[0x42] = 0x40000000;
  puVar1[0x43] = uVar4;
  *(undefined1 *)(puVar1 + 0x44) = 0;
  puVar1[0x45] = 0;
  puVar1[0x46] = 0x41700000;
  puVar1[0x47] = 0x41d80000;
  puVar1[0x48] = 0x3e99999a;
  puVar1[0x49] = 0;
  puVar1[0x4a] = 0;
  puVar1[0x4b] = 0;
  puVar1[0x4c] = 0;
  puVar1[0x4d] = 0;
  puVar1[0x4e] = 0;
  puVar1[0x4f] = 0xffffffff;
  puVar1[0x50] = 0;
  puVar1[0x51] = uVar5;
  uVar2 = fn_00118290();
  puVar1[0x52] = uVar2;
  puVar1[0x53] = 0;
  puVar1[0x54] = 0;
  puVar1[0x55] = 0x40000000;
  puVar1[0x56] = 0;
  *(undefined1 *)(puVar1 + 0x57) = 1;
  *(undefined1 *)((int)puVar1 + 0x15d) = 0;
  puVar1[0x58] = 0x43b40000;
  iVar3 = fn_00145b00(0xfc,&DAT_00812c8c);
  uVar2 = 0;
  if (iVar3 != 0) {
    uVar2 = fn_0065fdf0();
  }
  puVar1[0x59] = uVar2;
  fn_007566dc(puVar1 + 0x3f,1);
  puVar1[0x4e] = puVar1[0x4e] | 0x90;
  return puVar1;
}



void fn_001dbe2c(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  if ((*(int **)(param_1 + 0xe4) != (int *)0x0) &&
     ((param_4 != 0 || (*(char *)(param_1 + 0x110) != (char)param_2)))) {
    if (*(int *)(*(int *)(param_1 + 0x14c) + param_2 * 0xc) == -1) {
      iVar1 = fn_0018367c();
      if (iVar1 != 0) {
        fn_001a0b78();
      }
    }
    else if ((*(byte *)(param_1 + 0x138) & 1) == 0) {
      (**(code **)(**(int **)(param_1 + 0xe4) + 0x18))();
    }
    else {
      fn_0018d060();
    }
    if (*(int *)(param_1 + 0xe4) != 0) {
      if (*(int *)(*(int *)(param_1 + 0x14c) + param_2 * 0xc + 4) == -1) {
        iVar1 = fn_006ec21c(*(int *)(param_1 + 0xe4),0);
        if (iVar1 != 0) {
          fn_001a0b78();
        }
      }
      else {
        fn_0017fd38();
      }
    }
    if (*(int *)(*(int *)(param_1 + 0x14c) + param_2 * 0xc + 8) == -1) {
      if ((*(int *)(param_1 + 0xe4) != 0) && (iVar1 = fn_006ec284(), iVar1 != 0)) {
        fn_001a0b78();
      }
    }
    else {
      fn_005ef0b8();
    }
    *(char *)(param_1 + 0x110) = (char)param_2;
  }
  return;
}



void fn_001dbc64(int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined1 auStack_68 [68];
  
  *(char *)(param_1 + 0x57) = (char)param_2;
  if (param_1[0x56] != 0) {
    if ((char)param_1[0x57] == '\0' || param_2 == 0) {
      uVar4 = 2;
      do {
        iVar5 = uVar4 * 8 + 4;
        if (-1 < *(int *)(param_1[0x56] + iVar5)) {
          uVar1 = fn_006f7388(DAT_008977e0);
          fn_00257ef4(uVar1,uVar4 & 0xff,*(undefined4 *)(param_1[0x56] + iVar5));
          *(undefined4 *)(param_1[0x56] + iVar5) = 0xffffffff;
        }
        uVar4 = uVar4 - 1;
      } while (-1 < (int)uVar4);
      return;
    }
    uVar4 = 0;
    do {
      iVar5 = uVar4 * 8 + 4;
      if (0x7fffffff < *(uint *)(param_1[0x56] + iVar5)) {
        uVar1 = fn_006f7a9c(DAT_008977e0);
        iVar2 = fn_00279bbc(uVar1,*(undefined4 *)(param_1[0x56] + uVar4 * 8));
        if (iVar2 != 0) {
          uVar1 = fn_006f7a9c(DAT_008977e0);
          iVar2 = fn_006b7664(uVar1,*(undefined4 *)(param_1[0x56] + uVar4 * 8));
          if (iVar2 != 0) {
            uVar3 = uVar4 & 0xff;
            uVar1 = fn_006f7388(DAT_008977e0);
            iVar2 = fn_00257ebc(uVar1,uVar3,iVar2);
            if (iVar2 != -1) {
              (**(code **)(*param_1 + 0x118))(param_1,auStack_68);
              (**(code **)(*param_1 + 0x11c))(param_1);
              uVar1 = fn_006f7388(DAT_008977e0);
              fn_00239fc4(uVar1,uVar3,iVar2,auStack_68);
              (**(code **)(*param_1 + 0x120))(param_1);
              uVar1 = fn_006f7388(DAT_008977e0);
              fn_00239ffc(uVar1,uVar3,iVar2,param_1 + 8);
              uVar1 = fn_006f7388(DAT_008977e0);
              fn_0023a030(uVar1,uVar3,iVar2,(int)*(char *)((int)param_1 + 0x15d));
              *(int *)(param_1[0x56] + iVar5) = iVar2;
            }
          }
        }
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < 3);
  }
  return;
}



void fn_001dbb48(int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((char)param_1[0x16] != param_2) {
    *(char *)(param_1 + 0x16) = (char)param_2;
    if (param_1[0x39] != 0) {
      if (param_2 == 0) {
        uVar1 = fn_0017fde4();
        iVar2 = fn_006ebf84(*(undefined4 *)(*(int *)(DAT_008977e0 + 8) + 0x24),uVar1);
        if (iVar2 != 0) {
          uVar1 = fn_0017fde4(param_1[0x39]);
          fn_00162d54(*(undefined4 *)(*(int *)(DAT_008977e0 + 8) + 0x24),uVar1);
        }
      }
      else {
        uVar1 = fn_0017fde4();
        fn_001969a4(*(undefined4 *)(*(int *)(DAT_008977e0 + 8) + 0x24),uVar1);
      }
      fn_00162d44(*(undefined4 *)(*(int *)(DAT_008977e0 + 8) + 0x24));
    }
    if (param_1[0x3a] != -1) {
      fn_0023e508(*(undefined4 *)(DAT_008977e0 + 0x2c),param_1[0x3a],param_2);
    }
    (**(code **)(*param_1 + 0xf4))(param_1);
  }
  if (param_1[0x56] == 0) {
    return;
  }
  if (param_2 == 0) {
    fn_001dbc6c(param_1,0);
    return;
  }
  fn_001dbc6c(param_1,(int)(char)param_1[0x57]);
  return;
}



void fn_001dbc6c(int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined1 auStack_68 [68];
  
  if (param_1[0x56] != 0) {
    if ((char)param_1[0x57] == '\0' || param_2 == 0) {
      uVar4 = 2;
      do {
        iVar5 = uVar4 * 8 + 4;
        if (-1 < *(int *)(param_1[0x56] + iVar5)) {
          uVar1 = fn_006f7388(DAT_008977e0);
          fn_00257ef4(uVar1,uVar4 & 0xff,*(undefined4 *)(param_1[0x56] + iVar5));
          *(undefined4 *)(param_1[0x56] + iVar5) = 0xffffffff;
        }
        uVar4 = uVar4 - 1;
      } while (-1 < (int)uVar4);
      return;
    }
    uVar4 = 0;
    do {
      iVar5 = uVar4 * 8 + 4;
      if (0x7fffffff < *(uint *)(param_1[0x56] + iVar5)) {
        uVar1 = fn_006f7a9c(DAT_008977e0);
        iVar2 = fn_00279bbc(uVar1,*(undefined4 *)(param_1[0x56] + uVar4 * 8));
        if (iVar2 != 0) {
          uVar1 = fn_006f7a9c(DAT_008977e0);
          iVar2 = fn_006b7664(uVar1,*(undefined4 *)(param_1[0x56] + uVar4 * 8));
          if (iVar2 != 0) {
            uVar3 = uVar4 & 0xff;
            uVar1 = fn_006f7388(DAT_008977e0);
            iVar2 = fn_00257ebc(uVar1,uVar3,iVar2);
            if (iVar2 != -1) {
              (**(code **)(*param_1 + 0x118))(param_1,auStack_68);
              (**(code **)(*param_1 + 0x11c))(param_1);
              uVar1 = fn_006f7388(DAT_008977e0);
              fn_00239fc4(uVar1,uVar3,iVar2,auStack_68);
              (**(code **)(*param_1 + 0x120))(param_1);
              uVar1 = fn_006f7388(DAT_008977e0);
              fn_00239ffc(uVar1,uVar3,iVar2,param_1 + 8);
              uVar1 = fn_006f7388(DAT_008977e0);
              fn_0023a030(uVar1,uVar3,iVar2,(int)*(char *)((int)param_1 + 0x15d));
              *(int *)(param_1[0x56] + iVar5) = iVar2;
            }
          }
        }
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < 3);
  }
  return;
}



int fn_001db994(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = fn_006f7a9c(DAT_008977e0);
  if (((int)param_2 < 0) || ((uint)((*(int *)(iVar1 + 8) - *(int *)(iVar1 + 4)) / 0x34) <= param_2))
  {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(iVar1 + 4) + param_2 * 0x34;
  }
  iVar6 = param_1[0x39];
  fn_0069eb10(iVar6,iVar1,0);
  iVar2 = fn_006eb378(iVar1);
  iVar3 = fn_006eb368(iVar1);
  iVar1 = fn_006eb388(iVar1);
  iVar5 = -1;
  if (iVar2 != 0) {
    iVar5 = fn_005ef148(iVar6);
    iVar5 = iVar5 + -1;
  }
  iVar2 = -1;
  if (iVar3 != 0) {
    iVar2 = fn_005ef124(iVar6);
    iVar2 = iVar2 + -1;
  }
  iVar3 = -1;
  if (iVar1 != 0) {
    iVar3 = fn_005ef2d0(iVar6);
    iVar3 = iVar3 + -1;
  }
  iVar1 = (**(code **)(*param_1 + 0x110))(param_1);
  if ((iVar1 != -1) && (iVar6 = (**(code **)(*param_1 + 0x114))(param_1), iVar1 <= iVar6)) {
    iVar4 = param_1[0x53];
    do {
      if (((*(int *)(iVar4 + iVar1 * 0xc) < 0) && (*(int *)(iVar4 + iVar1 * 0xc + 4) < 0)) &&
         (*(int *)(iVar4 + iVar1 * 0xc + 8) < 0)) {
        if (-1 < iVar5) {
          *(int *)(iVar4 + iVar1 * 0xc) = iVar5;
        }
        if (-1 < iVar2) {
          *(int *)(param_1[0x53] + iVar1 * 0xc + 4) = iVar2;
        }
        if (-1 < iVar3) {
          *(int *)(param_1[0x53] + iVar1 * 0xc + 8) = iVar3;
        }
        return iVar1;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 <= iVar6);
  }
  return -1;
}


