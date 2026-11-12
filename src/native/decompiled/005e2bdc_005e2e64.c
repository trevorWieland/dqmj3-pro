#include "005e2bdc_005e2e64.h"



void fn_005e2e64(uint *param_1,undefined4 param_2,uint param_3)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  uint uVar12;
  int *piVar13;
  undefined1 local_98 [4];
  uint local_94;
  uint local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  uint uStack_7c;
  uint local_6c;
  uint local_68;
  uint uStack_64;
  uint local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  uint local_48;
  uint local_44;
  uint local_40;
  int *local_3c;
  int *local_38;
  int *local_34;
  uint local_30;
  
  uVar10 = *param_1;
  piVar13 = *(int **)(uVar10 + 0x30);
  piVar7 = *(int **)(uVar10 + 0x34);
  piVar8 = *(int **)(uVar10 + 0x38);
  piVar11 = *(int **)(uVar10 + 0x3c);
  local_84 = uVar10 + 0x24;
  puVar1 = (uint *)fn_005e4668(param_2);
  puVar2 = (uint *)fn_005e4650(param_2);
  local_3c = piVar7;
  local_38 = piVar8;
  local_34 = piVar11;
  local_48 = uVar10 + 0xc;
  local_44 = uVar10 + 0x18;
  local_30 = param_3;
  local_40 = local_84;
  do {
    if (puVar1 == puVar2) {
      return;
    }
    uVar12 = local_30 & 1;
    uVar6 = *puVar1;
    if ((((uVar12 == 0) || (iVar3 = fn_006ebe40(uVar6,1), iVar3 != 0)) && (uVar6 != 0)) &&
       (iVar3 = fn_005ea4fc(uVar6), *(char *)(iVar3 + 8) != '\0')) {
      iVar3 = fn_006ebe58(uVar6);
      uVar9 = *(uint *)(iVar3 + 0x48);
      if (uVar9 < *(uint *)(iVar3 + 0x4c)) {
        do {
          if (((uVar12 == 0) || ((*(byte *)(uVar9 + 2) & 3) != 1)) &&
             (piVar7 = (int *)fn_005ea4fc(uVar6),
             ((uint)*(byte *)(*piVar7 + (uint)(*(ushort *)(uVar9 + 4) >> 3)) &
             1 << (*(ushort *)(uVar9 + 4) & 7)) != 0)) {
            (**(code **)(*piVar13 + 4))(&local_68,piVar13,uVar9,uVar6,0);
            local_6c = uVar9;
            local_84 = fn_006ebe08(uVar6);
            local_98[0] = 0;
            local_94 = local_68;
            local_90 = uStack_64;
            local_8c = local_6c;
            local_80 = 0;
            local_88 = uVar6;
            fn_00795e80(uVar10,local_98);
          }
          uVar9 = uVar9 + 0x38;
        } while (uVar9 < *(uint *)(iVar3 + 0x4c));
      }
      iVar3 = fn_006ebe58(uVar6);
      uVar9 = *(uint *)(iVar3 + 0x50);
      if (uVar9 < *(uint *)(iVar3 + 0x54)) {
        do {
          piVar7 = local_3c;
          if ((uVar12 == 0) || ((*(byte *)(uVar9 + 2) & 3) != 1)) {
            local_8c = local_48;
            piVar8 = (int *)fn_005ea4fc(uVar6);
            if (((uint)*(byte *)(*piVar8 + (uint)(*(ushort *)(uVar9 + 4) >> 3)) &
                1 << (*(ushort *)(uVar9 + 4) & 7)) != 0) {
              (**(code **)(*piVar7 + 4))(&local_80,piVar7,uVar9,uVar6,1);
              local_90 = uVar9;
              local_58 = fn_006ebe08(uVar6);
              local_6c = local_6c & 0xffffff00;
              local_68 = local_80;
              uStack_64 = uStack_7c;
              local_54 = 0;
              local_60 = local_90;
              local_5c = uVar6;
              fn_00795e80(local_8c,&local_6c);
            }
          }
          uVar9 = uVar9 + 0x38;
        } while (uVar9 < *(uint *)(iVar3 + 0x54));
      }
      iVar3 = fn_006ebe58(uVar6);
      uVar9 = *(uint *)(iVar3 + 0x58);
      if (uVar9 < *(uint *)(iVar3 + 0x5c)) {
        do {
          piVar7 = local_38;
          if ((uVar12 == 0) || ((*(byte *)(uVar9 + 2) & 3) != 1)) {
            local_90 = local_44;
            piVar8 = (int *)fn_005ea4fc(uVar6);
            if (((uint)*(byte *)(*piVar8 + (uint)(*(ushort *)(uVar9 + 4) >> 3)) &
                1 << (*(ushort *)(uVar9 + 4) & 7)) != 0) {
              (**(code **)(*piVar7 + 4))(&local_88,piVar7,uVar9,uVar6,2);
              local_94 = uVar9;
              local_58 = fn_006ebe08(uVar6);
              local_68 = local_88;
              uStack_64 = local_84;
              local_6c = local_6c & 0xffffff00;
              local_54 = 0;
              local_60 = local_94;
              local_5c = uVar6;
              fn_00795e80(local_90,&local_6c);
            }
          }
          uVar9 = uVar9 + 0x38;
        } while (uVar9 < *(uint *)(iVar3 + 0x5c));
      }
      iVar3 = fn_006ebe58(uVar6);
      uVar9 = *(uint *)(iVar3 + 0x60);
      if (uVar9 < *(uint *)(iVar3 + 100)) {
        do {
          piVar7 = local_34;
          if ((*(byte *)(uVar9 + 2) & 3) == 1) {
            if ((uVar12 == 0) &&
               (piVar7 = (int *)fn_005ea4fc(uVar6),
               ((uint)*(byte *)(*piVar7 + (uint)(*(ushort *)(uVar9 + 4) >> 3)) &
               1 << (*(ushort *)(uVar9 + 4) & 7)) != 0)) {
              (**(code **)(*piVar13 + 4))(&local_68,piVar13,uVar9,uVar6,0);
              puVar5 = &local_94;
              local_6c = uVar9;
              local_80 = fn_006ebe08(uVar6);
              local_94 = local_94 & 0xffffff00;
              local_90 = local_68;
              local_8c = uStack_64;
              local_88 = local_6c;
              uStack_7c = 0;
              uVar4 = uVar10;
              local_84 = uVar6;
              goto LAB_005e3288;
            }
          }
          else {
            local_90 = local_40;
            piVar8 = (int *)fn_005ea4fc(uVar6);
            if (((uint)*(byte *)(*piVar8 + (uint)(*(ushort *)(uVar9 + 4) >> 3)) &
                1 << (*(ushort *)(uVar9 + 4) & 7)) != 0) {
              (**(code **)(*piVar7 + 4))(&local_88,piVar7,uVar9,uVar6,3);
              puVar5 = &local_6c;
              local_58 = fn_006ebe08(uVar6);
              local_6c = local_6c & 0xffffff00;
              local_68 = local_88;
              uStack_64 = local_84;
              local_54 = 0;
              uVar4 = local_90;
              local_60 = uVar9;
              local_5c = uVar6;
LAB_005e3288:
              fn_00795e80(uVar4,puVar5);
            }
          }
          uVar9 = uVar9 + 0x38;
        } while (uVar9 < *(uint *)(iVar3 + 100));
      }
    }
    puVar1 = puVar1 + 1;
  } while( true );
}



void fn_005e2d94(undefined4 *param_1)

{
  *param_1 = &DAT_00858998;
  if ((int *)param_1[1] != (int *)0x0) {
    (**(code **)(*(int *)param_1[1] + 4))();
    param_1[1] = 0;
  }
  fn_002feef8(param_1);
  return;
}



undefined4 *
fn_005e2c7c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined1 param_5)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  
  *param_1 = &DAT_00858998;
  param_1[1] = 0;
  iVar2 = fn_00145b00(0x14,&DAT_00812c8c);
  if (iVar2 == 0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = (int *)fn_005e9568(iVar2,param_2);
    *(undefined1 *)(piVar5 + 4) = param_5;
    *piVar5 = (int)&DAT_00858988;
    local_30 = 0;
    local_2c = 0;
    local_28 = 0;
    uStack_24 = 0x3f800000;
    if (param_4 != (undefined4 *)0x0) {
      local_30 = *param_4;
      local_2c = param_4[1];
      local_28 = param_4[2];
      uStack_24 = param_4[3];
    }
    cVar1 = (char)piVar5[4];
    uVar3 = fn_006eb490(piVar5[2]);
    if (cVar1 == '\0') {
      fn_005ea160(uVar3,&local_30);
    }
    else if (cVar1 == '\x01') {
      fn_005e9fb0(uVar3,&local_30);
    }
    else if (cVar1 == '\x02') {
      fn_005ea088(uVar3,&local_30);
    }
  }
  piVar4 = (int *)param_1[1];
  if (piVar4 != piVar5) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))();
    }
    param_1[1] = piVar5;
  }
  return param_1;
}



void fn_005e2c44(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_r4;
  int *piVar4;
  uint uVar5;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  uint uVar6;
  undefined4 in_lr;
  
  uVar1 = fn_00117984();
  fn_005efee0(uVar1,param_3);
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 4);
  iVar3 = fn_006eb610(*(undefined4 *)(iVar2 + 0xc));
  uVar1 = fn_006eb278(param_2);
  fn_005e2a6c(uVar1,0,iVar3);
  fn_005e5e5c(param_2,0);
  fn_005e5f50(param_2,iVar3 + 0x1a8,iVar3 + 0x148,param_3);
  fn_005e1b70(uVar1,param_3);
  fn_005ea270(*(undefined4 *)(iVar2 + 8),*(undefined4 *)(iVar2 + 0xc));
  piVar4 = *(int **)(*(int *)(iVar2 + 8) + 4);
  iVar2 = *piVar4;
  *(undefined4 *)(iVar2 + 0x90) = 0;
  *(undefined4 *)(iVar2 + 0x8c) = 0x3f800000;
  *(undefined4 *)(iVar2 + 0x94) = 0;
  *(undefined4 *)(iVar2 + 0x98) = 0;
  *(undefined4 *)(iVar2 + 0x9c) = 0;
  *(undefined4 *)(iVar2 + 0xa0) = 0x3f800000;
  *(undefined4 *)(iVar2 + 0xa4) = 0;
  *(undefined4 *)(iVar2 + 0xa8) = 0;
  *(undefined4 *)(iVar2 + 0xac) = 0;
  *(undefined4 *)(iVar2 + 0xb0) = 0;
  *(undefined4 *)(iVar2 + 0xb4) = 0x3f800000;
  *(undefined4 *)(iVar2 + 0xb8) = 0;
  fn_005ec694(*piVar4,param_2,param_3,(undefined4 *)(iVar2 + 0xb0),unaff_r4,unaff_r5,unaff_r6,in_lr
              );
  fn_005ec718(*piVar4,param_2,param_3);
  fn_005ec610(*piVar4,param_2,param_3);
  iVar2 = *piVar4;
  piVar4 = *(int **)(iVar2 + 0x148);
  uVar5 = *(uint *)(*piVar4 + 0x60);
  uVar6 = *(uint *)(*piVar4 + 100);
  if ((char)piVar4[0xe] != '\0' && uVar5 < uVar6) {
    do {
      if (((uint)*(byte *)(piVar4[0xc] + (uint)(*(ushort *)(uVar5 + 4) >> 3)) &
          1 << (*(ushort *)(uVar5 + 4) & 7)) != 0) {
        fn_005eb2f8(piVar4,param_2,param_3,iVar2,iVar2 + 0x8c,uVar5);
      }
      uVar5 = uVar5 + 0x38;
    } while (uVar5 < uVar6);
  }
  return;
}



void fn_005e2c34(void)

{
  fn_005e96b4();
  fn_002feef8();
  return;
}



void fn_005e2bdc(int param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = *(char *)(*(int *)(param_1 + 4) + 0x10);
  uVar2 = fn_006eb490(*(undefined4 *)(*(int *)(param_1 + 4) + 8));
  if (cVar1 == '\0') {
    fn_005ea160(uVar2,param_2);
    return;
  }
  if (cVar1 == '\x01') {
    fn_005e9fb0(uVar2,param_2);
    return;
  }
  if (cVar1 == '\x02') {
    fn_005ea088(uVar2,param_2);
    return;
  }
  return;
}


