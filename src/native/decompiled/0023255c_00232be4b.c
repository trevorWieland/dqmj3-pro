#include "0023255c_00232be4b.h"



void fn_00232be4(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  if ((char)param_1[0x17] == '\0') {
    fn_0069f184(param_2);
    uVar1 = (**(code **)(*param_1 + 0x44))(param_1,0x9c4e,1);
    uVar2 = fn_0068c7e8(DAT_008977e8);
    fn_0023dd30(uVar2,uVar1);
    fn_0014481c(DAT_008977e8);
    iVar3 = fn_00263814();
    fn_00660790(0,iVar3 + 8,param_1 + 2);
    fn_00144810(DAT_008977e8);
    iVar3 = fn_006a8708();
    param_1[0x18] = iVar3;
    *(undefined1 *)(param_1 + 0x17) = 1;
  }
  return;
}



void fn_00232b38(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined1 local_20 [12];
  
  if (*(char *)(param_1 + 0x5c) == '\0') {
    *(undefined4 *)(param_1 + 100) = param_2;
    *(undefined1 *)(param_1 + 0x74) = 2;
    *(undefined4 *)(param_1 + 0x6c) = 0;
    iVar1 = fn_00145b00(4,&DAT_00812c8c);
    if (iVar1 == 0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      fn_006f6ad8(param_2);
      puVar3 = (undefined4 *)fn_0068f3f4(iVar1,local_20,param_1 + 8);
    }
    puVar2 = *(undefined4 **)(param_1 + 0x70);
    if (puVar2 != puVar3) {
      if (puVar2 != (undefined4 *)0x0) {
        fn_002feef8(*puVar2);
        fn_002feef8(puVar2);
      }
      *(undefined4 **)(param_1 + 0x70) = puVar3;
    }
  }
  return;
}



void fn_00232a60(int param_1,int param_2)

{
  int *piVar1;
  int *piVar3;
  int *piVar2;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  
  piVar5 = *(int **)(param_1 + 0xac);
  if (*(int **)(param_1 + 0xb0) != piVar5) {
    do {
      if (*piVar5 == param_2) {
        piVar7 = *(int **)(param_1 + 0xb0);
        if (*(int **)(param_1 + 0xac) != piVar7) {
          piVar2 = piVar5 + 1;
          if (piVar2 != piVar7) {
            piVar1 = piVar5;
            if (piVar2 < piVar7) {
              uVar6 = (int)piVar7 - (int)piVar2;
              if (0 < (int)uVar6) {
                uVar8 = (uVar6 & 7) >> 2;
                if (uVar8 != 0) {
                  *piVar5 = *piVar2;
                }
                uVar4 = (uint)(uVar8 != 0);
                for (; (int)uVar8 < (int)uVar6 >> 2; uVar8 = uVar8 + 2) {
                  piVar5[uVar4] = piVar2[uVar4];
                  piVar5[uVar4 + 1] = piVar2[uVar4 + 1];
                  uVar4 = uVar4 + 2;
                }
              }
            }
            else {
              do {
                piVar3 = piVar2 + 1;
                *piVar1 = *piVar2;
                piVar1 = piVar1 + 1;
                piVar2 = piVar3;
              } while (piVar3 != piVar7);
            }
          }
          *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + -4;
        }
      }
      else {
        piVar5 = piVar5 + 1;
      }
    } while (*(int **)(param_1 + 0xb0) != piVar5);
  }
  return;
}



int * fn_002329a4(int *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)fn_00145b00(0x14,&DAT_00812c8c);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    *puVar1 = param_2;
    *(undefined1 *)(puVar1 + 2) = 0xff;
    *(undefined1 *)((int)puVar1 + 9) = 0xff;
    puVar1[3] = 0;
    *(undefined1 *)(puVar1 + 4) = 0;
    iVar2 = fn_001828f0(param_2,(char *)&DAT_00232a2c);
    *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe;
    iVar2 = fn_001828f0(*puVar1,(char *)&DAT_00232a44);
    *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe;
  }
  *param_1 = (int)puVar1;
  return param_1;
}



void fn_00232918(undefined4 *param_1)

{
  int iVar1;
  
  param_1 = (undefined4 *)*param_1;
  if ((0 < (int)param_1[1]) && (iVar1 = param_1[1] + -1, param_1[1] = iVar1, iVar1 == 0)) {
    *(undefined1 *)(param_1 + 2) = 0xff;
    iVar1 = fn_001828f0(*param_1,(char *)&DAT_00232a2c);
    *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe;
    if (5 < (int)*(char *)((int)param_1 + 9) - 5U) {
      return;
    }
    iVar1 = fn_001828f0(*param_1,(char *)&DAT_00232a44);
    *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe | 1;
  }
  if ((int)*(char *)((int)param_1 + 9) - 5U < 6) {
    fn_002323e8(param_1);
  }
  return;
}


