#include "002aa570_002aac5c.h"



undefined4 fn_002aac5c(void)

{
  undefined4 uVar1;
  
  uVar1 = fn_00242ab8();
  switch(uVar1) {
  default:
    return 0x7539;
  case 1:
    return 0x753a;
  case 2:
    return 0x753b;
  case 3:
    return 0x753c;
  case 4:
    return 0x753d;
  case 5:
    return 0x7547;
  }
}



void fn_002aac04(int param_1)

{
  int iVar1;
  
  iVar1 = fn_006b09bc();
  if (iVar1 < 0) {
    fn_006c9900(*(undefined4 *)(*(int *)(DAT_008977e0 + 0x40) + 4),(int)*(short *)(param_1 + 0x16a)
                 ,0);
    return;
  }
  fn_006b09bc(param_1);
  fn_002e9f9c();
  return;
}



uint fn_002aabac(char param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  
  uVar4 = 0;
  uVar1 = fn_00236b6c((int)param_1);
  if (0 < (int)uVar1) {
    bVar5 = (uVar1 & 1) != 0;
    uVar4 = (uint)bVar5;
    uVar3 = (uint)bVar5;
    for (iVar2 = (int)uVar1 >> 1; iVar2 != 0; iVar2 = iVar2 + -1) {
      uVar4 = (uint)(short)((ushort)uVar4 | (ushort)(1 << (uVar3 & 0xff)) |
                           (ushort)(1 << (uVar3 + 1 & 0xff)));
      uVar3 = uVar3 + 2;
    }
  }
  return uVar4;
}



uint fn_002aab5c(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  
  uVar3 = 1;
  uVar4 = *(undefined4 *)(DAT_00897804 + 8);
  iVar1 = fn_006b5190(*(undefined4 *)(DAT_00897804 + 0x1c));
  iVar2 = fn_006b6374(uVar4);
  if (iVar1 != 0) {
    uVar3 = (uint)(byte)(&DAT_007be52c)[iVar1];
  }
  if (iVar2 != 0) {
    uVar3 = uVar3 << 1;
  }
  return uVar3;
}



int fn_002aaac8(short param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = 0;
  uVar1 = fn_002ea524();
  iVar2 = fn_002e9c90((int)param_1);
  if (iVar2 == -1) {
    fn_0066173c(uVar1);
  }
  iVar2 = fn_00236b6c();
  uVar4 = 0;
  if (0 < iVar2) {
    do {
      if (((param_2 != 0) || (iVar3 = fn_00236b10(uVar4 & 0xff), iVar3 != 0)) &&
         (iVar3 = fn_002ea3e8((int)param_1,uVar4 & 0xff), iVar3 != 0)) {
        iVar5 = (int)(short)((ushort)iVar5 | (ushort)(1 << (uVar4 & 0xff)));
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < iVar2);
  }
  return iVar5;
}



uint fn_002aaa20(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = 0;
  uVar6 = *(uint *)(param_1 + 0x1d0);
  iVar1 = fn_00236b6c((int)*(char *)(param_1 + 0x1be));
  uVar5 = 0;
  if (0 < iVar1) {
    do {
      if ((uVar6 & 1 << (uVar5 & 0xff)) != 0) {
        iVar2 = fn_006b09bc(param_1);
        if (iVar2 < 0) {
          iVar2 = fn_006c879c(*(undefined4 *)(*(int *)(DAT_008977e0 + 0x40) + 4),
                               (int)*(short *)(param_1 + 0x16a),uVar4);
        }
        else {
          uVar3 = fn_006b09bc(param_1);
          iVar2 = fn_002ea3e8(uVar3,uVar4 & 0xff);
        }
        if (iVar2 != 0) {
          uVar4 = uVar4 + 1;
        }
      }
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < iVar1);
  }
  return uVar4;
}



undefined4 fn_002aa920(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_438 [44];
  short local_40c;
  short local_40a;
  short local_408;
  short local_406;
  short local_404;
  short local_402;
  
  if ((**(int **)(DAT_008977e0 + 0x40) == 0) || (iVar1 = fn_006f6fc4(), iVar1 == 0)) {
    uVar3 = fn_006b09bc(param_1);
    iVar1 = fn_0013add0();
    if (iVar1 == 0) {
      return 0xffffffff;
    }
    iVar4 = fn_002e9b88(uVar3);
    iVar1 = fn_002e9df4(uVar3);
    iVar7 = fn_002ea124(uVar3);
    iVar6 = fn_002ea074(uVar3);
    iVar5 = fn_002e9d9c(uVar3);
    iVar2 = fn_002e9d44(uVar3);
  }
  else {
    fn_006ca25c(*(undefined4 *)(*(int *)(DAT_008977e0 + 0x40) + 4),auStack_438,
                 (int)*(short *)(param_1 + 0x16a));
    iVar4 = (int)local_402;
    iVar1 = (int)local_404;
    iVar7 = (int)local_406;
    iVar6 = (int)local_408;
    iVar5 = (int)local_40a;
    iVar2 = (int)local_40c;
  }
  uVar3 = fn_001f88e8(iVar2,iVar5,iVar6,iVar7,iVar1,iVar4);
  return uVar3;
}



undefined4 fn_002aa814(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = *(uint *)(param_1 + 0x1d0);
  iVar1 = fn_00236b6c((int)*(char *)(param_1 + 0x1be));
  if ((param_2 < iVar1) && (uVar4 = 0, 0 < iVar1)) {
    do {
      if ((uVar5 & 1 << (uVar4 & 0xff)) != 0) {
        iVar2 = fn_006b09bc(param_1);
        if (iVar2 < 0) {
          iVar2 = fn_006c879c(*(undefined4 *)(*(int *)(DAT_008977e0 + 0x40) + 4),
                               (int)*(short *)(param_1 + 0x16a),uVar4);
        }
        else {
          uVar3 = fn_006b09bc(param_1);
          iVar2 = fn_002ea3e8(uVar3,uVar4 & 0xff);
        }
        if (iVar2 != 0) {
          if (param_2 == 0) {
            iVar1 = fn_006b09bc(param_1);
            if (iVar1 < 0) {
              uVar3 = fn_006c879c(*(undefined4 *)(*(int *)(DAT_008977e0 + 0x40) + 4),
                                   (int)*(short *)(param_1 + 0x16a),uVar4);
              return uVar3;
            }
            uVar3 = fn_006b09bc(param_1);
            uVar3 = fn_002ea3e8(uVar3,uVar4 & 0xff);
            return uVar3;
          }
          param_2 = param_2 + -1;
        }
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < iVar1);
  }
  return 0;
}



void fn_002aa7c0(int param_1)

{
  int iVar1;
  
  iVar1 = fn_006b09bc();
  if (iVar1 < 0) {
    fn_006c8ac0(*(undefined4 *)(*(int *)(DAT_008977e0 + 0x40) + 4),(int)*(short *)(param_1 + 0x16a)
                );
    return;
  }
  fn_006b09bc(param_1);
  fn_002ea4e0();
  return;
}



void fn_002aa76c(int param_1)

{
  int iVar1;
  
  iVar1 = fn_006b09bc();
  if (iVar1 < 0) {
    fn_006c887c(*(undefined4 *)(*(int *)(DAT_008977e0 + 0x40) + 4),(int)*(short *)(param_1 + 0x16a)
                );
    return;
  }
  fn_006b09bc(param_1);
  fn_002ea244();
  return;
}



undefined4 * fn_002aa570(undefined4 param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int *piVar6;
  
  puVar2 = (undefined4 *)fn_002c27a8();
  *puVar2 = &DAT_0081e9d0;
  if (param_2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*param_2)(param_2);
    do {
      if (puVar3 == &DAT_00891a10) {
        puVar3 = param_2;
        goto LAB_002aa5c8;
      }
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar3 = (undefined4 *)0x0;
LAB_002aa5c8:
  puVar2[0x34] = puVar3;
  piVar6 = (int *)param_2[6];
  if (piVar6 != (int *)0x0) {
    puVar3 = (undefined4 *)(**(code **)(*piVar6 + 0xc))(piVar6);
    do {
      if (puVar3 == &DAT_00891a14) goto LAB_002aa604;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  piVar6 = (int *)0x0;
LAB_002aa604:
  puVar2[0x36] = 0;
  puVar2[0x35] = piVar6;
  puVar2[0x37] = 0;
  puVar2[0x38] = 0;
  puVar3 = (undefined4 *)0x0;
  puVar2[0x39] = 0;
  puVar2[0x3a] = 0xffffffff;
  puVar2[0x3b] = 0;
  puVar2[0x3c] = 0;
  puVar2[0x3d] = 0;
  puVar2[0x3e] = 0;
  puVar2[0x3f] = 0;
  puVar2[0x40] = 0;
  puVar2[0x41] = 0;
  uVar1 = fn_00154ac8(0x3c);
  *(undefined1 *)(puVar2 + 0x42) = uVar1;
  uVar1 = fn_00154ac8(0x33f);
  *(undefined1 *)((int)puVar2 + 0x109) = uVar1;
  uVar1 = fn_00154ac8(0x96);
  *(undefined1 *)((int)puVar2 + 0x10a) = uVar1;
  *(undefined1 *)((int)puVar2 + 0x10b) = 0;
  puVar4 = (undefined4 *)fn_001f74d8(puVar2,0x2d);
  if (puVar4 != (undefined4 *)0x0) {
    puVar5 = (undefined4 *)(**(code **)*puVar4)(puVar4);
    do {
      if (puVar5 == &DAT_008951dc) goto LAB_002aa6a8;
      puVar5 = (undefined4 *)*puVar5;
    } while (puVar5 != (undefined4 *)0x0);
  }
  puVar4 = (undefined4 *)0x0;
LAB_002aa6a8:
  puVar2[0x37] = puVar4;
  puVar4 = (undefined4 *)fn_001f74d8(puVar2,0x2c);
  if (puVar4 != (undefined4 *)0x0) {
    puVar5 = (undefined4 *)(**(code **)*puVar4)(puVar4);
    do {
      if (puVar5 == &DAT_008951d8) goto LAB_002aa6ec;
      puVar5 = (undefined4 *)*puVar5;
    } while (puVar5 != (undefined4 *)0x0);
  }
  puVar4 = (undefined4 *)0x0;
LAB_002aa6ec:
  puVar2[0x38] = puVar4;
  puVar4 = (undefined4 *)fn_001f7510(puVar2,0xd5);
  if (puVar4 != (undefined4 *)0x0) {
    puVar5 = (undefined4 *)(**(code **)*puVar4)(puVar4);
    do {
      if (puVar5 == &DAT_00891df8) {
        puVar3 = puVar4;
        break;
      }
      puVar5 = (undefined4 *)*puVar5;
    } while (puVar5 != (undefined4 *)0x0);
  }
  puVar2[0x39] = puVar3;
  return puVar2;
}


