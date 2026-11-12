#include "004247cc_004b1bc8.h"



void fn_004b1bc8(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int local_28;
  int *local_24;
  undefined4 auStack_20 [4];
  
  iVar1 = fn_0048cbf8(param_2,0);
  if (iVar1 == 0) {
    fn_00101a1c(&local_28,&LAB_001ad990,8,1);
    (**(code **)(*DAT_008c3dd0 + 0xc))(DAT_008c3dd0,param_1,auStack_20);
    if (local_24 != (int *)0x0) {
      (**(code **)(*local_24 + 4))();
    }
    local_24 = (int *)auStack_20[0];
    fn_00100414(&local_28,fn_0074cd38,8,1);
    return;
  }
  (**(code **)(*DAT_008c3dd0 + 0xc))(DAT_008c3dd0,param_1,&local_28);
  piVar2 = *(int **)(iVar1 + 4);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))();
  }
  *(int *)(iVar1 + 4) = local_28;
  return;
}



void fn_004acd70(int param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int local_28;
  int local_24 [4];
  
  *(undefined1 *)(param_2 + 4) = 0;
  cVar1 = *(char *)(param_1 + 0x3b);
  local_28 = 0;
  if ((((cVar1 != '\0') ||
       ((fn_0074a4c8(param_1,param_2 + 4), *(char *)(param_1 + 4) == '\0' &&
        (fn_0074a528(param_1,&local_28), *(char *)(param_1 + 4) == '\0')))) &&
      (iVar4 = *(int *)(param_1 + 0xc), *(char *)(param_1 + 4) == '\0')) &&
     ((fn_0074a528(param_1,param_2 + 8), *(char *)(param_1 + 4) == '\0' &&
      (fn_0074a528(param_1,param_2 + 0xc), *(char *)(param_1 + 4) == '\0')))) {
    (**(code **)(*DAT_008c3dcc + 0xc))(DAT_008c3dcc,param_1,local_24);
    piVar2 = *(int **)(param_2 + 0x14);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    *(int *)(param_2 + 0x14) = local_24[0];
    if (*(char *)(param_1 + 4) == '\0' && cVar1 == '\0') {
      uVar3 = local_28 + iVar4;
      if ((uVar3 < *(uint *)(param_1 + 0xc)) || (*(uint *)(*(int *)(param_1 + 8) + 0x10) < uVar3)) {
        *(undefined1 *)(param_1 + 4) = 1;
      }
      else {
        *(uint *)(param_1 + 0xc) = uVar3;
      }
    }
  }
  return;
}



void fn_004844dc(int param_1)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 local_30;
  undefined4 uStack_2c;
  
  iVar1 = fn_004b7748();
  if (iVar1 == 0) {
    pcVar4 = fn_004834e8;
    uVar5 = 0;
    fn_0013d0fc(&local_30);
    *(undefined4 *)(param_1 + 0x40) = local_30;
    *(undefined4 *)(param_1 + 0x44) = uStack_2c;
    *(code **)(param_1 + 0x50) = pcVar4;
    *(undefined4 *)(param_1 + 0x54) = uVar5;
    *(undefined1 **)(param_1 + 0x58) = &LAB_004845d4;
    return;
  }
  iVar1 = fn_004b7748();
  piVar2 = (int *)(iVar1 + 0x50);
  (**(code **)(*piVar2 + 8))();
  (**(code **)(*DAT_008b6404 + 0x14))(DAT_008b6404,iVar1 + 0x4c,param_1 + 400);
  (**(code **)(*piVar2 + 0xc))(piVar2);
  bVar3 = *(int *)(param_1 + 0x1a4) != 0;
  iVar1 = 0;
  if (bVar3) {
    iVar1 = *(int *)(param_1 + 0xb0);
  }
  if (!bVar3 || iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x98) = 0;
  }
  pcVar4 = fn_004843e4;
  uVar5 = 0;
  fn_0013d0fc(&local_30);
  *(undefined4 *)(param_1 + 0x40) = local_30;
  *(undefined4 *)(param_1 + 0x44) = uStack_2c;
  *(code **)(param_1 + 0x50) = pcVar4;
  *(undefined4 *)(param_1 + 0x54) = uVar5;
  *(undefined1 **)(param_1 + 0x58) = &LAB_004845d4;
  return;
}



void fn_004247cc(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int local_30;
  undefined4 local_2c;
  undefined4 auStack_28 [4];
  undefined4 local_18;
  
  if (*param_1 == param_1[1]) {
    return;
  }
  cVar1 = (char)param_1[4];
  if (cVar1 == '\0') {
    iVar11 = param_1[1] - *param_1 >> 0x1f;
    iVar6 = (param_1[1] - *param_1) / 0x18 + iVar11;
    iVar13 = iVar6 - iVar11;
    if (iVar6 == iVar11) {
      return;
    }
    local_30 = fn_006f7a84(DAT_008977e0);
    bVar4 = false;
    bVar3 = false;
    iVar6 = 0;
    if (0 < iVar13) {
      do {
        iVar11 = *param_1 + iVar6 * 0x18;
        if (*(int *)(iVar11 + 4) != 0) {
          iVar5 = fn_006c85d4(*(int *)(iVar11 + 4),local_30);
          *(char *)(iVar11 + 0x14) = (char)iVar5;
          if (iVar5 != 0) {
            iVar12 = 0;
            iVar5 = *(int *)(iVar11 + 0xc) - *(int *)(iVar11 + 8) >> 2;
            if (0 < iVar5) {
              do {
                (**(code **)(**(int **)(*(int *)(iVar11 + 8) + iVar12 * 4) + 0xa8))();
                iVar12 = iVar12 + 1;
              } while (iVar12 < iVar5);
            }
            iVar11 = fn_006c83f0(*(undefined4 *)(iVar11 + 4),local_30);
            if (iVar11 == 2) {
              bVar3 = true;
              bVar4 = bVar3;
            }
            else if (iVar11 == 1) {
              bVar3 = true;
            }
          }
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar13);
    }
    if (*(char *)(local_30 + 0x22d) == '\0' && !bVar3) {
      *(undefined1 *)((int)param_1 + 0x11) = 2;
    }
    else {
      if ((*(char *)(local_30 + 0x22d) != '\a') || (0 < *(int *)(local_30 + 0x334))) {
        iVar6 = fn_006f7a5c(DAT_008977e0);
        if ((0 < param_1[3]) && (iVar11 = param_1[3] + -1, param_1[3] = iVar11, iVar11 == 0)) {
          fn_001d8140(iVar6);
        }
        if (*(char *)(iVar6 + 0xd) == '\x04') {
          if (bVar4) {
            return;
          }
          fn_001d68cc(iVar6,0);
          iVar6 = 0x1e;
        }
        else {
          if (*(char *)(iVar6 + 0xd) != '\0') {
            return;
          }
          if (!bVar4) {
            return;
          }
          fn_001d68cc(iVar6,4);
          local_30 = 0x3f333333;
          local_2c = 0x41a00000;
          auStack_28[0] = 0x3b83126f;
          fn_001d7084(iVar6,&local_30);
          iVar6 = 0;
        }
        param_1[3] = iVar6;
        return;
      }
      *(undefined1 *)((int)param_1 + 0x11) = 1;
    }
    *(undefined1 *)(param_1 + 4) = 1;
    fn_00698fb8(DAT_008977e0);
    uVar7 = fn_006f7a48(DAT_008977e0);
    fn_00128744(uVar7,0xffffffff);
    fn_00163988(DAT_00897810,auStack_28 + 6,0x14);
    return;
  }
  local_18 = param_4;
  if (cVar1 == '\x01') {
    if (*(int *)(DAT_00897810 + 0x14) != *(int *)(DAT_00897810 + 0xc)) {
      return;
    }
    iVar6 = fn_006f7a84(DAT_008977e0);
    fn_001e5dc0();
    *(undefined4 *)(iVar6 + 0x228) = 0;
    *(uint *)(iVar6 + 0x138) = *(uint *)(iVar6 + 0x138) & 0xfffffffd;
    fn_001ea890(iVar6,0);
    uVar7 = 0;
    if (*(char *)((int)param_1 + 0x11) == '\x01') {
      uVar7 = fn_0016ba34(DAT_00897800,L"rom:/data/Message/FieldAthleticsMessage.mes",(char *)&DAT_004242e8,0)
      ;
    }
    else if (*(char *)((int)param_1 + 0x11) == '\x02') {
      uVar7 = fn_0016ba34(DAT_00897800,L"rom:/data/Message/FieldAthleticsMessage.mes",(char *)&DAT_004242f8,0
                          );
    }
    uVar8 = fn_006f7a48(DAT_008977e0);
    fn_00128744(uVar8,0);
    uVar8 = fn_006f75ac(DAT_008977e0);
    local_18 = 0;
    fn_0038ff40(uVar8,0,0);
    uVar8 = fn_006f75ac(DAT_008977e0);
    fn_0038fee8(uVar8,uVar7);
    *(undefined1 *)((int)param_1 + 0x11) = 0;
    *(undefined1 *)(param_1 + 4) = 2;
    return;
  }
  if (cVar1 != '\x02') {
    if (cVar1 != '\x03') {
      return;
    }
    if (*(int *)(DAT_00897810 + 0x14) == *(int *)(DAT_00897810 + 0xc)) {
      fn_00698fb8(DAT_008977e0,0xffffffff);
      *(undefined1 *)(param_1 + 4) = 0;
      return;
    }
    return;
  }
  iVar6 = fn_006f75ac(DAT_008977e0,2,DAT_008977e0,param_4);
  cVar1 = *(char *)(*(int *)(iVar6 + 8) + 0x8f);
  if (cVar1 == '\0') {
    return;
  }
  fn_0016b40c();
  if (cVar1 == '\x01') {
    *(undefined1 *)(param_1 + 4) = 3;
    piVar9 = (int *)fn_006f7a84(DAT_008977e0);
    iVar6 = *param_1;
    uVar10 = 0;
    uVar2 = (param_1[1] - iVar6) / 0x18;
    if (0 < (int)uVar2) {
      do {
        if (*(char *)(iVar6 + uVar10 * 0x18) == '\0') goto LAB_004244a0;
        uVar10 = uVar10 + 1;
      } while ((int)uVar10 < (int)uVar2);
    }
    uVar10 = 0xffffffff;
LAB_004244a0:
    if (((-1 < (int)uVar10) && (uVar10 < uVar2)) &&
       (iVar6 = *(int *)(iVar6 + uVar10 * 0x18 + 4), iVar6 != 0)) {
      local_3c = *(undefined4 *)(iVar6 + 0x1c);
      uStack_38 = *(undefined4 *)(iVar6 + 0x20);
      uStack_34 = *(undefined4 *)(iVar6 + 0x24);
      local_30 = *(int *)(iVar6 + 0x28);
      if ((char)*(undefined4 *)(iVar6 + 0x18) != '\0') {
        uVar7 = fn_006f7a70(DAT_008977e0);
        fn_00300398(uVar7,&local_3c);
        (**(code **)(*piVar9 + 0xd0))(piVar9,&local_3c);
        piVar9[0xc] = local_30;
        goto LAB_0042451c;
      }
    }
    fn_001def30(piVar9);
LAB_0042451c:
    fn_001dd0a0(piVar9);
    fn_001ea890(piVar9,0);
    uVar7 = fn_006f7a5c(DAT_008977e0);
    fn_006f7a84(DAT_008977e0);
    fn_001d92ac(uVar7);
    fn_006f7a84(DAT_008977e0);
    fn_001d91ec(uVar7);
    fn_001d6988(uVar7,1);
    local_2c = 0;
    fn_00163988(DAT_00897810,&local_2c,0x14);
    piVar9 = (int *)fn_006f7508(DAT_008977e0);
    iVar6 = (**(code **)(*piVar9 + 0x70))();
    iVar11 = 0;
    if (iVar6 < 1) {
      return;
    }
    do {
      piVar9 = (int *)fn_006f7508(DAT_008977e0);
      piVar9 = (int *)(**(code **)(*piVar9 + 0x74))(piVar9,iVar11);
      (**(code **)(*piVar9 + 0x54))(piVar9,0);
      iVar11 = iVar11 + 1;
    } while (iVar11 < iVar6);
    return;
  }
  iVar6 = *param_1;
  uVar10 = 0;
  uVar2 = (param_1[1] - iVar6) / 0x18;
  if (0 < (int)uVar2) {
    do {
      if (*(char *)(iVar6 + uVar10 * 0x18) == '\0') goto LAB_00424388;
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < (int)uVar2);
  }
  uVar10 = 0xffffffff;
LAB_00424388:
  if (((-1 < (int)uVar10) && (uVar10 < uVar2)) &&
     (iVar6 = *(int *)(iVar6 + uVar10 * 0x18 + 4), iVar6 != 0)) {
    local_3c = *(undefined4 *)(iVar6 + 0x18);
    uStack_38 = *(undefined4 *)(iVar6 + 0x1c);
    uStack_34 = *(undefined4 *)(iVar6 + 0x20);
    local_30 = *(int *)(iVar6 + 0x24);
    local_2c = *(undefined4 *)(iVar6 + 0x28);
    if ((char)local_3c != '\0') {
      uVar7 = fn_006f7a70(DAT_008977e0);
      fn_00300398(uVar7,&uStack_38);
      fn_006f7a84(DAT_008977e0);
      uVar7 = fn_006aaa00();
      uVar8 = fn_006f7388(DAT_008977e0);
      fn_0023b858(uVar8,uVar7,&uStack_38,auStack_28,0);
      fn_00697004(DAT_008977e0,*(undefined4 *)(DAT_008977e0 + 0xa8),0);
      goto code_r0x00424614;
    }
  }
  fn_00697004(DAT_008977e0,*(undefined4 *)(DAT_008977e0 + 0xa8),0,DAT_008977e0 + 0xb0);
code_r0x00424614:
  fn_002fb670();
  fn_002fb664(1);
  iVar6 = fn_006f7a5c(DAT_008977e0);
  if (iVar6 == 0) {
    return;
  }
  fn_006f7a5c(DAT_008977e0);
  fn_001d8140();
  return;
}


