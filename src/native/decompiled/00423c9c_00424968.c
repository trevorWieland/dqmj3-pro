#include "00423c9c_00424968.h"



undefined4 fn_00424968(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = 0;
  iVar2 = (param_1[1] - *param_1) / 0x18;
  if (0 < iVar2) {
    do {
      iVar6 = *param_1 + iVar7 * 0x18;
      if (*(char *)(iVar6 + 0x14) != '\0') {
        iVar5 = 0;
        iVar1 = *(int *)(iVar6 + 0xc) - *(int *)(iVar6 + 8) >> 2;
        if (0 < iVar1) {
          do {
            piVar3 = *(int **)(*(int *)(iVar6 + 8) + iVar5 * 4);
            iVar4 = (**(code **)(*piVar3 + 0xbc))(piVar3,param_2);
            if (iVar4 != 0) {
              return 1;
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 < iVar1);
        }
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar2);
  }
  return 0;
}



void fn_00424790(void)

{
  int iVar1;
  
  fn_002fb670();
  fn_002fb664(1);
  iVar1 = fn_006f7a5c(DAT_008977e0);
  if (iVar1 == 0) {
    return;
  }
  fn_006f7a5c(DAT_008977e0);
  fn_001d8140();
  return;
}



undefined1 * fn_004246b8(undefined1 *param_1,undefined1 *param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  uint local_20 [3];
  
  piVar7 = (int *)(param_1 + 8);
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *piVar7 = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  local_20[0] = *(int *)(param_2 + 0xc) - *(int *)(param_2 + 8) >> 2;
  puVar1 = local_20;
  if (local_20[0] < 0x20) {
    puVar1 = local_20 + 1;
  }
  local_20[1] = 0x20;
  uVar8 = *puVar1;
  puVar2 = (undefined4 *)fn_00100fc6(uVar8 << 2,0);
  *piVar7 = (int)puVar2;
  puVar3 = *(undefined4 **)(param_2 + 0xc);
  for (puVar5 = *(undefined4 **)(param_2 + 8); puVar5 != puVar3; puVar5 = puVar5 + 1) {
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = *puVar5;
    }
    puVar2 = puVar2 + 1;
  }
  iVar4 = *(int *)(param_2 + 0xc);
  iVar6 = *(int *)(param_2 + 8);
  *(uint *)(param_1 + 0x10) = *piVar7 + uVar8 * 4;
  *(uint *)(param_1 + 0xc) = (iVar4 - iVar6 & 0xfffffffcU) + *piVar7;
  param_1[0x14] = param_2[0x14];
  return param_1;
}



void fn_004241cc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (*(int *)(DAT_00897810 + 0x14) == *(int *)(DAT_00897810 + 0xc)) {
    iVar1 = fn_006f7a84(DAT_008977e0);
    fn_001e5dc0();
    *(undefined4 *)(iVar1 + 0x228) = 0;
    *(uint *)(iVar1 + 0x138) = *(uint *)(iVar1 + 0x138) & 0xfffffffd;
    fn_001ea890(iVar1,0);
    uVar3 = 0;
    if (*(char *)(param_1 + 0x11) == '\x01') {
      uVar3 = fn_0016ba34(DAT_00897800,L"rom:/data/Message/FieldAthleticsMessage.mes",(char *)&DAT_004242e8,0,
                           param_4);
    }
    else if (*(char *)(param_1 + 0x11) == '\x02') {
      uVar3 = fn_0016ba34(DAT_00897800,L"rom:/data/Message/FieldAthleticsMessage.mes",(char *)&DAT_004242f8,0
                           ,param_4);
    }
    uVar2 = fn_006f7a48(DAT_008977e0);
    fn_00128744(uVar2,0);
    uVar2 = fn_006f75ac(DAT_008977e0);
    fn_0038ff40(uVar2,0,0,0,0);
    uVar2 = fn_006f75ac(DAT_008977e0);
    fn_0038fee8(uVar2,uVar3);
    *(undefined1 *)(param_1 + 0x11) = 0;
    *(undefined1 *)(param_1 + 0x10) = 2;
  }
  return;
}



void fn_00423ef0(int *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = 0;
  iVar3 = (param_1[1] - *param_1) / 0x18;
  if (0 < iVar3) {
    do {
      iVar7 = *param_1 + iVar6 * 0x18;
      if (*(int *)(iVar7 + 4) != 0) {
        cVar2 = *(char *)(iVar7 + 0x14);
        iVar5 = 0;
        iVar1 = *(int *)(iVar7 + 0xc) - *(int *)(iVar7 + 8) >> 2;
        if (0 < iVar1) {
          do {
            piVar4 = *(int **)(*(int *)(iVar7 + 8) + iVar5 * 4);
            (**(code **)(*piVar4 + 0x54))(piVar4,(int)cVar2);
            iVar5 = iVar5 + 1;
          } while (iVar5 < iVar1);
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar3);
  }
  return;
}



void fn_00423e58(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  iVar2 = (param_1[1] - *param_1) / 0x18;
  if (0 < iVar2) {
    do {
      iVar4 = *param_1 + iVar5 * 0x18;
      if (*(char *)(iVar4 + 0x14) != '\0') {
        iVar3 = 0;
        iVar1 = *(int *)(iVar4 + 0xc) - *(int *)(iVar4 + 8) >> 2;
        if (0 < iVar1) {
          do {
            (**(code **)(**(int **)(*(int *)(iVar4 + 8) + iVar3 * 4) + 0xac))();
            iVar3 = iVar3 + 1;
          } while (iVar3 < iVar1);
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar2);
  }
  return;
}



void fn_00423d6c(int *param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined1 local_38 [4];
  undefined4 local_34;
  uint local_30;
  uint local_2c;
  int local_28;
  undefined1 local_24;
  int *piStack_1c;
  uint uStack_18;
  undefined4 uStack_14;
  
  iVar4 = *param_1;
  iVar1 = (param_1[1] - iVar4) / 0x18;
  iVar3 = 0;
  piStack_1c = param_1;
  uStack_18 = param_2;
  uStack_14 = param_3;
  if (0 < iVar1) {
    do {
      if (*(byte *)(iVar4 + iVar3 * 0x18) == param_2) {
        if (iVar3 != -1) {
          fn_00798084(iVar4 + iVar3 * 0x18 + 8,&uStack_14);
          return;
        }
        break;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  local_24 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_38[0] = (undefined1)param_2;
  fn_00798084(&local_30,&uStack_14);
  fn_00791cc8(param_1,local_38);
  uVar2 = local_30;
  if (local_2c < local_30) {
    do {
      uVar2 = uVar2 + 4;
    } while (uVar2 != local_2c);
  }
  fn_001008c4(local_30,(int)(local_28 - local_30) >> 2,0);
  return;
}



void fn_00423c9c(int *param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined1 local_30 [4];
  undefined4 local_2c;
  uint local_28;
  uint local_24;
  int local_20;
  undefined1 local_1c;
  
  iVar4 = *param_1;
  iVar1 = (param_1[1] - iVar4) / 0x18;
  iVar3 = 0;
  if (0 < iVar1) {
    do {
      if (*(byte *)(iVar4 + iVar3 * 0x18) == param_2) {
        if (iVar3 != -1) {
          *(undefined4 *)(iVar4 + iVar3 * 0x18 + 4) = param_3;
          return;
        }
        break;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  local_1c = 0;
  local_30[0] = (undefined1)param_2;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_2c = param_3;
  fn_00791cc8(param_1,local_30);
  uVar2 = local_28;
  if (local_24 < local_28) {
    do {
      uVar2 = uVar2 + 4;
    } while (uVar2 != local_24);
  }
  fn_001008c4(local_28,(int)(local_20 - local_28) >> 2,0);
  return;
}


