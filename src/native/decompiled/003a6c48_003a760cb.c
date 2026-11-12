#include "003a6c48_003a760cb.h"



void fn_003a760c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar1 = 0;
  uVar3 = fn_00174828(DAT_008977e4);
  iVar2 = (int)uVar3 + 0xe8;
  uVar3 = fn_006f4868(iVar2,(int)((ulonglong)uVar3 >> 0x20),4,0,param_4);
  if (((int)uVar3 != 0) ||
     (iVar2 = fn_006f4868(iVar2,(int)((ulonglong)uVar3 >> 0x20),0x2000,0,param_4), iVar2 != 0)) {
    uVar1 = 1;
  }
  fn_003a704c(param_1,7,0,1,uVar1);
  return;
}



void fn_003a755c(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if (param_2 == 0xff) {
    *(byte *)(*(int *)(param_1 + 0x94) + 0x44) = *(byte *)(*(int *)(param_1 + 0x94) + 0x44) & 0xfe;
    fn_0025e31c(*(undefined4 *)(param_1 + 200),0,param_3,param_4);
    return;
  }
  uVar1 = *(int *)(param_1 + 0x9c) - *(int *)(param_1 + 0x98) >> 2;
  if (uVar1 <= param_2) {
    fn_002ff628(9,&DAT_008c7660,&DAT_008c7660,param_2,uVar1);
  }
  iVar3 = *(int *)(param_1 + 0x94);
  iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x98) + param_2 * 4) + 4);
  uVar4 = *(undefined4 *)(iVar2 + 0x20);
  uVar5 = *(undefined4 *)(iVar2 + 0x24);
  *(undefined4 *)(iVar3 + 0x1c) = *(undefined4 *)(iVar2 + 0x1c);
  *(undefined4 *)(iVar3 + 0x20) = uVar4;
  *(undefined4 *)(iVar3 + 0x24) = uVar5;
  *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xef | 0x10;
  *(byte *)(*(int *)(param_1 + 0x94) + 0x44) = *(byte *)(*(int *)(param_1 + 0x94) + 0x44) & 0xfe | 1
  ;
  return;
}



void fn_003a7548(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  *(char *)(param_1 + 0x81) = (char)param_2;
  if (param_2 == 0) {
    uVar3 = 0xff;
  }
  else {
    uVar3 = (uint)*(byte *)(param_1 + 0x7c);
  }
  if (uVar3 == 0xff) {
    *(byte *)(*(int *)(param_1 + 0x94) + 0x44) = *(byte *)(*(int *)(param_1 + 0x94) + 0x44) & 0xfe;
    fn_0025e31c(*(undefined4 *)(param_1 + 200),0,param_3,param_4);
    return;
  }
  uVar1 = *(int *)(param_1 + 0x9c) - *(int *)(param_1 + 0x98) >> 2;
  if (uVar1 <= uVar3) {
    fn_002ff628(9,&DAT_008c7660,&DAT_008c7660,uVar3,uVar1);
  }
  iVar4 = *(int *)(param_1 + 0x94);
  iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x98) + uVar3 * 4) + 4);
  uVar5 = *(undefined4 *)(iVar2 + 0x20);
  uVar6 = *(undefined4 *)(iVar2 + 0x24);
  *(undefined4 *)(iVar4 + 0x1c) = *(undefined4 *)(iVar2 + 0x1c);
  *(undefined4 *)(iVar4 + 0x20) = uVar5;
  *(undefined4 *)(iVar4 + 0x24) = uVar6;
  *(byte *)(iVar4 + 0x44) = *(byte *)(iVar4 + 0x44) & 0xef | 0x10;
  *(byte *)(*(int *)(param_1 + 0x94) + 0x44) = *(byte *)(*(int *)(param_1 + 0x94) + 0x44) & 0xfe | 1
  ;
  return;
}



void fn_003a7520(int param_1)

{
  fn_005a8a58(*(undefined4 *)(param_1 + 0x74),param_1 + 0x7d,param_1 + 0x7e,0,0);
  return;
}



void fn_003a750c(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  iVar1 = *(int *)(param_1 + 0x74);
  if (iVar1 == 0) {
    return;
  }
  uVar6 = 0;
  do {
    piVar4 = *(int **)(iVar1 + uVar6 * 4 + 0x10);
    if (piVar4 != (int *)0x0) {
      piVar2 = (int *)piVar4[0x10];
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0x2c))
                  (piVar2,param_2,(int)(char)piVar2[0x38],*(code **)(*piVar2 + 0x2c),param_4);
        iVar3 = *piVar4;
        uVar5 = 0;
        if (piVar4[1] - iVar3 >> 2 != 0) {
          do {
            uVar7 = piVar4[1] - iVar3 >> 2;
            if (uVar7 <= uVar5) {
              fn_002ff628(9,&DAT_008c7669,&DAT_008c7669,uVar5);
              param_4 = uVar7;
            }
            if (*(int *)(*piVar4 + uVar5 * 4) != 0) {
              uVar7 = piVar4[1] - *piVar4 >> 2;
              if (uVar7 <= uVar5) {
                fn_002ff628(9,&DAT_008c7669,&DAT_008c7669,uVar5);
                param_4 = uVar7;
              }
              piVar2 = *(int **)(*(int *)(*piVar4 + uVar5 * 4) + 0x28);
              (**(code **)(*piVar2 + 0x2c))(piVar2,param_2,(int)*(char *)(piVar4[0x10] + 0xe0));
            }
            iVar3 = *piVar4;
            uVar5 = uVar5 + 1;
          } while (uVar5 < (uint)(piVar4[1] - iVar3 >> 2));
        }
      }
      iVar3 = 0;
      do {
        iVar3 = iVar3 + 1;
      } while (iVar3 < 2);
      uVar5 = 0;
      if (piVar4[0x14] - piVar4[0x13] >> 2 != 0) {
        do {
          uVar7 = piVar4[0x14] - piVar4[0x13] >> 2;
          if (uVar7 <= uVar5) {
            fn_002ff628(9,&DAT_008c765a,&DAT_008c765a,uVar5);
            param_4 = uVar7;
          }
          iVar3 = piVar4[0x13];
          if (*(int *)(iVar3 + uVar5 * 4) != 0) {
            uVar7 = piVar4[0x14] - iVar3 >> 2;
            if (uVar7 <= uVar5) {
              fn_002ff628(9,&DAT_008c765a,&DAT_008c765a,uVar5);
              param_4 = uVar7;
            }
            fn_005f7244(*(undefined4 *)(piVar4[0x13] + uVar5 * 4),param_2);
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < (uint)(piVar4[0x14] - piVar4[0x13] >> 2));
      }
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 < 4);
  return;
}



void fn_003a74ac(int param_1,byte param_2)

{
  *(byte *)(*(int *)(param_1 + 0xb4) + 0x44) =
       param_2 ^ 1 | *(byte *)(*(int *)(param_1 + 0xb4) + 0x44) & 0xfe;
  *(byte *)(*(int *)(param_1 + 0xb0) + 0x44) =
       param_2 | *(byte *)(*(int *)(param_1 + 0xb0) + 0x44) & 0xfe;
  *(byte *)(*(int *)(param_1 + 0xa8) + 0x44) = *(byte *)(*(int *)(param_1 + 0xa8) + 0x44) & 0xfe;
  *(byte *)(*(int *)(param_1 + 0xac) + 0x44) = *(byte *)(*(int *)(param_1 + 0xac) + 0x44) & 0xfe;
  *(byte *)(*(int *)(param_1 + 0xa4) + 0x44) = *(byte *)(*(int *)(param_1 + 0xa4) + 0x44) & 0xfe;
  return;
}


