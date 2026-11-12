#include "002f3298_002f38c0.h"



void fn_002f38c0(void)

{
  fn_002f1c5c();
  fn_002feef8();
  return;
}



undefined4 fn_002f3824(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x60) != 0) {
    iVar1 = fn_006f7de8();
    if ((*(int *)(param_1 + 100) <= iVar1) && (*(int *)(param_1 + 100) != 0)) {
      return 0;
    }
  }
  return 1;
}



bool fn_002f347c(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = fn_006bd170();
  if (iVar1 != 0) {
    iVar5 = 1;
    fn_0014481c(DAT_008977e8);
    iVar1 = fn_006b6bc4();
    if (0 < iVar1) {
      do {
        uVar4 = 0;
        fn_0014481c(DAT_008977e8);
        iVar1 = fn_006b6bc4();
        if (0 < iVar1) {
          do {
            uVar2 = fn_0014481c(DAT_008977e8);
            piVar3 = (int *)fn_006b71a8(uVar2,uVar4 & 0xff);
            iVar1 = (**(code **)(*piVar3 + 0x98))(piVar3);
            if ((iVar1 != 0) || (iVar1 = (**(code **)(*piVar3 + 0x9c))(piVar3), iVar1 != 0)) {
              iVar1 = 1;
              if (uVar4 == 0) {
LAB_002f3544:
                if (*(byte *)(param_2 + uVar4 + 0x10) < *(byte *)(param_2 + 0x11)) {
                  iVar1 = iVar1 + 1;
                }
                if (uVar4 != 2) goto LAB_002f3560;
LAB_002f357c:
                if (*(byte *)(param_2 + uVar4 + 0x10) < *(byte *)(param_2 + 0x13)) {
                  iVar1 = iVar1 + 1;
                }
              }
              else {
                if (*(byte *)(param_2 + uVar4 + 0x10) < *(byte *)(param_2 + 0x10)) {
                  iVar1 = 2;
                }
                if (uVar4 != 1) goto LAB_002f3544;
LAB_002f3560:
                if (*(byte *)(param_2 + uVar4 + 0x10) < *(byte *)(param_2 + 0x12)) {
                  iVar1 = iVar1 + 1;
                }
                if (uVar4 != 3) goto LAB_002f357c;
              }
              if (((iVar1 == iVar5) &&
                  (iVar6 = *(int *)(*(int *)(param_1 + 0x5c) + 4), iVar1 = fn_00156f30(piVar3,0),
                  iVar1 != *(char *)(iVar6 + 0x219))) && (*(char *)(param_2 + uVar4 + 0x18) != '\0')
                 ) {
                uVar2 = fn_0014481c(DAT_008977e8);
                uVar2 = fn_006b71a8(uVar2,uVar4 & 0xff);
                *(undefined4 *)(param_1 + 0x60) = uVar2;
                uVar2 = fn_006f7de8();
                *(undefined4 *)(param_1 + 100) = uVar2;
                fn_0014481c(DAT_008977e8);
                iVar5 = fn_006b6bc4();
                iVar5 = iVar5 + 1;
                break;
              }
            }
            uVar4 = uVar4 + 1;
            fn_0014481c(DAT_008977e8);
            iVar1 = fn_006b6bc4();
          } while ((int)uVar4 < iVar1);
        }
        iVar5 = iVar5 + 1;
        fn_0014481c(DAT_008977e8);
        iVar1 = fn_006b6bc4();
      } while (iVar5 <= iVar1);
    }
    if (*(int *)(param_1 + 0x60) != 0) {
      return true;
    }
  }
  iVar5 = 1;
  fn_0014481c(DAT_008977e8);
  iVar1 = fn_006b6bc4();
  if (0 < iVar1) {
    do {
      uVar4 = 0;
      fn_0014481c(DAT_008977e8);
      iVar1 = fn_006b6bc4();
      if (0 < iVar1) {
        iVar1 = 1;
        do {
          if (*(byte *)(param_2 + uVar4 + 0x10) < *(byte *)(param_2 + 0x11)) {
            iVar1 = iVar1 + 1;
          }
          if (uVar4 == 2) goto LAB_002f3714;
          do {
            if (*(byte *)(param_2 + uVar4 + 0x10) < *(byte *)(param_2 + 0x12)) {
              iVar1 = iVar1 + 1;
            }
            if (uVar4 != 3) {
LAB_002f3714:
              if (*(byte *)(param_2 + uVar4 + 0x10) < *(byte *)(param_2 + 0x13)) {
                iVar1 = iVar1 + 1;
              }
            }
            if (iVar1 == iVar5) {
              iVar6 = *(int *)(*(int *)(param_1 + 0x5c) + 4);
              uVar2 = fn_0014481c(DAT_008977e8);
              uVar2 = fn_006b71a8(uVar2,uVar4 & 0xff);
              iVar1 = fn_00156f30(uVar2,0);
              if ((iVar1 != *(char *)(iVar6 + 0x219)) && (*(char *)(param_2 + uVar4 + 0x18) != '\0')
                 ) {
                uVar2 = fn_0014481c(DAT_008977e8);
                uVar2 = fn_006b71a8(uVar2,uVar4 & 0xff);
                *(undefined4 *)(param_1 + 0x60) = uVar2;
                fn_0014481c(DAT_008977e8);
                iVar5 = fn_006b6bc4();
                iVar5 = iVar5 + 1;
                goto LAB_002f37d4;
              }
            }
            uVar4 = uVar4 + 1;
            fn_0014481c(DAT_008977e8);
            iVar1 = fn_006b6bc4();
            if (iVar1 <= (int)uVar4) goto LAB_002f37d4;
            iVar1 = 1;
            if (uVar4 == 0) break;
            if (*(byte *)(param_2 + uVar4 + 0x10) < *(byte *)(param_2 + 0x10)) {
              iVar1 = 2;
            }
          } while (uVar4 == 1);
        } while( true );
      }
LAB_002f37d4:
      iVar5 = iVar5 + 1;
      fn_0014481c(DAT_008977e8);
      iVar1 = fn_006b6bc4();
    } while (iVar5 <= iVar1);
  }
  iVar1 = *(int *)(param_1 + 0x60);
  if (iVar1 != 0) {
    *(uint *)(param_1 + 100) = (uint)*(byte *)((uint)*(byte *)(iVar1 + 0x104) + param_2 + 0x18);
  }
  return iVar1 != 0;
}



bool fn_002f33f0(int param_1)

{
  int iVar1;
  
  iVar1 = fn_0068c570(*(undefined4 *)(param_1 + 0x60));
  return iVar1 == 0;
}



bool fn_002f33d0(int param_1)

{
  int iVar1;
  
  iVar1 = fn_002f1ae4(param_1,3);
  *(int *)(param_1 + 0x60) = iVar1;
  return iVar1 != 0;
}



bool fn_002f3344(int param_1)

{
  int iVar1;
  
  iVar1 = fn_0068c570(*(undefined4 *)(param_1 + 0x60));
  return iVar1 == 0;
}



bool fn_002f3324(int param_1)

{
  int iVar1;
  
  iVar1 = fn_002f1ae4(param_1,2);
  *(int *)(param_1 + 0x60) = iVar1;
  return iVar1 != 0;
}



bool fn_002f3298(int param_1)

{
  int iVar1;
  
  iVar1 = fn_0068c570(*(undefined4 *)(param_1 + 0x60));
  return iVar1 == 0;
}


