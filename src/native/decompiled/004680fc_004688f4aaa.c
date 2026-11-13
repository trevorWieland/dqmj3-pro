#include "004680fc_004688f4aaa.h"



void fn_004680fc(int *param_1,int param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  uint *puVar3;
  int *piVar4;
  int *piVar5;
  bool bVar6;
  int *local_54;
  int *local_50;
  int *local_4c [3];
  uint local_40;
  uint uStack_3c;
  int *local_34;
  int *local_30;
  int iStack_2c;
  uint uStack_28;
  
  local_30 = param_1;
  iStack_2c = param_2;
  uStack_28 = param_3;
  fn_0013d0fc(&local_40);
  piVar4 = *(int **)(param_2 + 4);
  if (piVar4 != *(int **)(param_2 + 0xc)) {
    do {
      if (*(char *)((int)piVar4 + 0x131) != '\0') {
        local_54 = piVar4;
        fn_004a34f4(local_4c,param_2,&local_54);
        piVar5 = local_4c[0];
        goto LAB_00468260;
      }
      if (*(ushort *)((int)piVar4 + 0x86) == param_3) {
        cVar1 = (char)piVar4[0x4e];
        if (cVar1 == '\0') {
          if (uStack_3c <= (uint)piVar4[0x51] &&
              (uint)((uint)piVar4[0x50] <= local_40) <= uStack_3c - piVar4[0x51]) goto LAB_0046824c;
          *(undefined1 *)(piVar4 + 0x4e) = 2;
          *(undefined1 *)(piVar4 + 0x4c) = 1;
          *(short *)((int)piVar4 + 0x122) = *(short *)((int)piVar4 + 0x122) + 1;
          piVar5 = piVar4 + 1;
          do {
            bVar6 = (bool)hasExclusiveAccess(piVar5);
          } while (!bVar6);
          *piVar5 = *piVar5 + 1;
          local_50 = piVar4;
          fn_004a34f4(&local_34,param_2,&local_50);
          piVar5 = local_34;
          (**(code **)(*local_30 + 0x10))(local_30,piVar4,0);
          puVar3 = (uint *)(piVar4 + 1);
          do {
            uVar2 = *puVar3 - 1;
            bVar6 = (bool)hasExclusiveAccess(puVar3);
          } while (!bVar6);
          *puVar3 = uVar2;
          bVar6 = uVar2 == 0;
          if (bVar6) {
            uVar2 = (uint)*(byte *)(piVar4 + 2);
          }
          if (bVar6 && uVar2 == 0) {
            *(undefined1 *)(piVar4 + 2) = 1;
            (**(code **)(*piVar4 + 4))();
          }
        }
        else {
          if (cVar1 == '\x01' || cVar1 == '\x02') {
            if ((uint)piVar4[0x51] < uStack_3c ||
                uStack_3c - piVar4[0x51] < (uint)((uint)piVar4[0x50] <= local_40)) {
              *(undefined1 *)(piVar4 + 0x4e) = 3;
            }
            goto LAB_0046824c;
          }
          piVar5 = piVar4;
          if (cVar1 == '\x03') {
            piVar5 = *(int **)(param_2 + 0xc);
          }
        }
      }
      else {
LAB_0046824c:
        piVar5 = (int *)piVar4[7];
      }
LAB_00468260:
      piVar4 = piVar5;
    } while (piVar5 != *(int **)(param_2 + 0xc));
  }
  return;
}


