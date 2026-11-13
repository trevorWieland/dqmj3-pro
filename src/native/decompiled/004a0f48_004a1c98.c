#include "004a0f48_004a1c98.h"



void fn_004a1c98(int param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int local_18;
  
  *(undefined1 *)(param_2 + 4) = 0;
  cVar1 = *(char *)(param_1 + 0x3b);
  local_18 = 0;
  if (((cVar1 != '\0') ||
      ((fn_0074a4c8(param_1,param_2 + 4), *(char *)(param_1 + 4) == '\0' &&
       (fn_0074a528(param_1,&local_18), *(char *)(param_1 + 4) == '\0')))) &&
     ((iVar3 = *(int *)(param_1 + 0xc), *(char *)(param_1 + 4) == '\0' &&
      ((((fn_0045f7f0(param_1,param_2 + 8), *(char *)(param_1 + 4) == '\0' &&
         (fn_0074b7d8(param_1,param_2 + 0x10), *(char *)(param_1 + 4) == '\0')) &&
        (fn_0074a528(param_1,param_2 + 0x1c), *(char *)(param_1 + 4) == '\0')) &&
       ((fn_0074af34(param_1,param_2 + 0x20), *(char *)(param_1 + 4) == '\0' &&
        (fn_0074a5fc(param_1,param_2 + 0x30), *(char *)(param_1 + 4) == '\0' && cVar1 == '\0'))))))
     )) {
    uVar2 = local_18 + iVar3;
    if ((uVar2 < *(uint *)(param_1 + 0xc)) || (*(uint *)(*(int *)(param_1 + 8) + 0x10) < uVar2)) {
      *(undefined1 *)(param_1 + 4) = 1;
    }
    else {
      *(uint *)(param_1 + 0xc) = uVar2;
    }
  }
  return;
}



int fn_004a1a28(int param_1,int param_2)

{
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  fn_0079dd48(param_1 + 8,param_2 + 8);
  return param_1;
}



void fn_004a1a00(undefined4 *param_1)

{
  *param_1 = &DAT_00854b98;
  param_1[1] = 0;
  return;
}



void fn_004a18ac(undefined4 param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = DAT_008b63f8;
  if (DAT_008b63f8 == (int *)0x0) {
    DAT_008b63fc = 1;
    DAT_008b63f8 = param_2;
  }
  else {
    iVar1 = (**(code **)(*DAT_008b63f8 + 0x14))(DAT_008b63f8);
    while (iVar1 != 0) {
      piVar2 = (int *)(**(code **)(*piVar2 + 0x14))(piVar2);
      iVar1 = (**(code **)(*piVar2 + 0x14))(piVar2);
    }
    (**(code **)(*piVar2 + 0x18))(piVar2,param_2);
    DAT_008b63fc = DAT_008b63fc + 1;
  }
  return;
}



undefined4 * fn_004a1530(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  undefined1 *puVar5;
  int *piVar6;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [12];
  
  uVar1 = fn_0013d3e8(auStack_30,L"<unknown>");
  puVar2 = (undefined4 *)fn_0047a4a4(param_1,uVar1);
  fn_00170f54(auStack_30);
  *(undefined2 *)(puVar2 + 8) = 0;
  puVar2[10] = 0;
  puVar2[0xb] = 1;
  puVar2[0xc] = 0;
  puVar2[9] = 0;
  *(undefined1 *)(puVar2 + 0xd) = 0;
  puVar2[0xe] = 0;
  puVar2[0xf] = 0;
  piVar6 = puVar2 + 0x10;
  *puVar2 = &DAT_00854b1c;
  *piVar6 = 0;
  puVar2[0x14] = 0;
  puVar2[0x15] = 0;
  *(undefined1 *)(puVar2 + 0x16) = 0;
  *(undefined1 *)((int)puVar2 + 0x59) = 0x1c;
  puVar2[0x13] = 0;
  puVar2[0x12] = 0;
  puVar2[0x11] = 0;
  piVar3 = (int *)fn_0015ece0(0xc);
  iVar4 = fn_0015ece0(0x280);
  piVar3[2] = iVar4;
  *piVar3 = *piVar6;
  piVar3[1] = 0x20;
  *piVar6 = (int)piVar3;
  iVar4 = piVar3[2];
  puVar2[0x12] = iVar4;
  puVar2[0x13] = iVar4 + 0x280;
  puVar5 = (undefined1 *)puVar2[0x12];
  puVar2[0x12] = puVar5 + 0x14;
  *(undefined4 *)(puVar5 + 8) = 0;
  *(undefined4 *)(puVar5 + 0xc) = 0;
  *puVar5 = 0;
  puVar2[0x14] = puVar5;
  *(undefined4 *)(puVar5 + 4) = 0;
  *(undefined4 *)(puVar2[0x14] + 8) = puVar2[0x14];
  *(undefined4 *)(puVar2[0x14] + 0xc) = puVar2[0x14];
  puVar2[0x18] = 0;
  puVar2[0x17] = param_2;
  puVar2[0x19] = 0;
  puVar2[0x1a] = 0;
  puVar2[0x1b] = 0;
  puVar2[0x1c] = 0;
  puVar2[0x1d] = 0;
  piVar3 = (int *)fn_0015ece0(0xc);
  iVar4 = fn_0015ece0(0x2c);
  piVar3[2] = iVar4;
  *piVar3 = puVar2[0x18];
  piVar3[1] = 1;
  puVar2[0x18] = piVar3;
  iVar4 = piVar3[2];
  puVar2[0x1a] = iVar4;
  puVar2[0x1b] = iVar4 + 0x2c;
  iVar4 = puVar2[0x1a];
  puVar2[0x1c] = iVar4;
  puVar2[0x1a] = iVar4 + 0x2c;
  *(int *)iVar4 = iVar4;
  *(undefined4 *)(puVar2[0x1c] + 4) = puVar2[0x1c];
  puVar2[0x1e] = 0;
  puVar2[0x1f] = 0;
  puVar2[0xb] = puVar2[0xb] | 8;
  uVar1 = fn_0013d3e8(auStack_28,L"NotificationEventManager");
  fn_0047a2e4(puVar2,uVar1);
  fn_00170f54(auStack_28);
  return puVar2;
}



undefined4 fn_004a1464(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int local_18;
  undefined1 auStack_14 [4];
  
  iVar1 = fn_001249d0();
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0xc);
  }
  piVar3 = (int *)(iVar2 + 0x50);
  (**(code **)(*piVar3 + 8))();
  iVar1 = *(int *)(param_1 + 0x50);
  local_18 = iVar1;
  iVar2 = *(int *)(iVar1 + 4);
  while (iVar2 != 0) {
    if (*(uint *)(iVar2 + 0x10) < param_2) {
      iVar2 = *(int *)(iVar2 + 0xc);
    }
    else {
      local_18 = iVar2;
      iVar2 = *(int *)(iVar2 + 8);
    }
  }
  if ((local_18 == iVar1) || (param_2 < *(uint *)(local_18 + 0x10))) {
    local_18 = iVar1;
  }
  if (local_18 == iVar1) {
    (**(code **)(*piVar3 + 0xc))(piVar3);
    return 0;
  }
  fn_0076cd44(auStack_14,param_1 + 0x40,&local_18);
  (**(code **)(*piVar3 + 0xc))(piVar3);
  return 1;
}



void fn_004a1194(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  
  iVar1 = *(int *)(param_1 + 0x78);
  bVar4 = iVar1 == param_2;
  if (bVar4) {
    iVar1 = *(int *)(param_1 + 0x7c);
  }
  if (((bVar4 && iVar1 == param_3) && (iVar1 = fn_004a0f48(param_1,param_4), iVar1 != 0)) &&
     (iVar1 = *(int *)(*(int *)(param_1 + 0x50) + 8), iVar1 != *(int *)(param_1 + 0x50))) {
    do {
      uVar2 = *(uint *)(param_4 + 0xc) / 1000;
      bVar4 = uVar2 == 0x73;
      if (bVar4) {
        uVar2 = (uint)*(byte *)(param_1 + 0x80);
      }
      if (!bVar4 || uVar2 != 0) {
        (**(code **)(**(int **)(iVar1 + 0x10) + 8))(*(int **)(iVar1 + 0x10),param_4);
      }
      iVar3 = *(int *)(iVar1 + 0xc);
      if (*(int *)(iVar1 + 0xc) == 0) {
        iVar3 = *(int *)(iVar1 + 4);
        if (iVar1 == *(int *)(iVar3 + 0xc)) {
          do {
            iVar1 = iVar3;
            iVar3 = *(int *)(iVar1 + 4);
          } while (iVar1 == *(int *)(iVar3 + 0xc));
        }
        if (*(int *)(iVar1 + 0xc) != iVar3) {
          iVar1 = iVar3;
        }
      }
      else {
        do {
          iVar1 = iVar3;
          iVar3 = *(int *)(iVar1 + 8);
        } while (*(int *)(iVar1 + 8) != 0);
      }
    } while (iVar1 != *(int *)(param_1 + 0x50));
  }
  return;
}



undefined4 fn_004a0f48(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  longlong lVar9;
  undefined8 uVar10;
  
  if ((*(int *)(param_2 + 0xc) - 4000U < 1000) &&
     (iVar1 = fn_004b626c(*(undefined4 *)(param_2 + 0x1c),&DAT_004a1184), iVar1 == 0)) {
    lVar9 = fn_006d3910(param_2 + 0x18);
    uVar8 = (uint)((ulonglong)lVar9 >> 0x20);
    if (lVar9 != 0) {
      piVar2 = *(int **)(param_1 + 0x70);
      piVar7 = (int *)*piVar2;
      if (piVar7 != piVar2) {
        do {
          if (*(int *)(param_2 + 0x10) == piVar7[6]) {
            uVar10 = fn_006d3910(piVar7 + 8);
            uVar3 = (uint)((ulonglong)uVar10 >> 0x20);
            if (uVar8 < uVar3 || uVar3 - uVar8 < (uint)((uint)lVar9 <= (uint)uVar10)) {
              return 0;
            }
            if (piVar7 != *(int **)(param_1 + 0x70)) {
              *(int *)piVar7[1] = *piVar7;
              *(int *)(*piVar7 + 4) = piVar7[1];
              *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + -1;
              (**(code **)piVar7[2])(piVar7 + 2);
              *piVar7 = *(int *)(param_1 + 100);
              *(int **)(param_1 + 100) = piVar7;
            }
            break;
          }
          piVar7 = (int *)*piVar7;
        } while (piVar7 != piVar2);
      }
      piVar2 = *(int **)(param_1 + 100);
      iVar1 = **(int **)(param_1 + 0x70);
      if (piVar2 == (int *)0x0) {
        piVar2 = *(int **)(param_1 + 0x68);
        if (piVar2 == *(int **)(param_1 + 0x6c)) {
          if (*(int *)(param_1 + 0x60) == 0) {
            uVar8 = 0x20;
          }
          else {
            uVar3 = *(uint *)(*(int *)(param_1 + 0x60) + 4);
            uVar8 = uVar3 + (uVar3 >> 1) + (uVar3 >> 3);
            if (uVar8 < uVar3 + 0x20) {
              uVar8 = uVar3 + 0x20;
            }
          }
          puVar4 = (undefined4 *)fn_0015ece0(0xc);
          uVar5 = fn_0015ece0(uVar8 * 0x2c);
          puVar4[2] = uVar5;
          *puVar4 = *(undefined4 *)(param_1 + 0x60);
          puVar4[1] = uVar8;
          *(undefined4 **)(param_1 + 0x60) = puVar4;
          piVar2 = (int *)puVar4[2];
          *(int **)(param_1 + 0x68) = piVar2;
          *(int **)(param_1 + 0x6c) = piVar2 + uVar8 * 0xb;
        }
        *(int **)(param_1 + 0x68) = piVar2 + 0xb;
      }
      else {
        *(int *)(param_1 + 100) = *piVar2;
      }
      if (piVar2 + 2 != (int *)0x0) {
        piVar2[2] = (int)&DAT_00854554;
        *(undefined1 *)(piVar2 + 3) = *(undefined1 *)(param_2 + 4);
        piVar2[4] = *(int *)(param_2 + 8);
        piVar2[5] = *(int *)(param_2 + 0xc);
        piVar2[6] = *(int *)(param_2 + 0x10);
        piVar2[7] = *(int *)(param_2 + 0x14);
        iVar6 = fn_004b637c(piVar2 + 8,param_2 + 0x18);
        *(undefined4 *)(iVar6 + 8) = *(undefined4 *)(param_2 + 0x20);
        *(undefined **)(iVar6 + -0x18) = &DAT_00853900;
      }
      *piVar2 = iVar1;
      piVar2[1] = *(int *)(iVar1 + 4);
      **(undefined4 **)(iVar1 + 4) = piVar2;
      *(int **)(iVar1 + 4) = piVar2;
      uVar8 = *(int *)(param_1 + 0x74) + 1;
      *(uint *)(param_1 + 0x74) = uVar8;
      if ((5 < uVar8) &&
         (piVar2 = (int *)(*(int **)(param_1 + 0x70))[1], piVar2 != *(int **)(param_1 + 0x70))) {
        *(int *)piVar2[1] = *piVar2;
        *(int *)(*piVar2 + 4) = piVar2[1];
        *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + -1;
        (**(code **)piVar2[2])(piVar2 + 2);
        *piVar2 = *(int *)(param_1 + 100);
        *(int **)(param_1 + 100) = piVar2;
      }
    }
  }
  return 1;
}


