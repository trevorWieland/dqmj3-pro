#include "005857cc_00599270.h"



undefined4 fn_00599270(int *param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  
  param_1[0x1f] = 4;
  (**(code **)(*param_1 + 0x118))(param_1,DAT_00890e28,DAT_00890e2c,DAT_00890e30);
  fn_0031c790(param_1[0x25],0);
  iVar2 = fn_00178f9c(param_1[0x19],param_1[0x1b]);
  uVar9 = *(undefined4 *)(iVar2 + 0x10);
  iVar3 = fn_0068897c(uVar9,DAT_00890e34);
  param_1[0x33] = iVar3;
  iVar3 = fn_0068897c(uVar9,DAT_00890e38);
  param_1[0x34] = iVar3;
  iVar3 = fn_0068897c(uVar9,DAT_00890e3c);
  param_1[0x35] = iVar3;
  iVar3 = fn_0068897c(uVar9,DAT_00890e40);
  param_1[0x36] = iVar3;
  iVar3 = fn_0068897c(uVar9,DAT_00890e44);
  param_1[0x37] = iVar3;
  iVar3 = fn_0068897c(uVar9,DAT_00890e48);
  param_1[0x38] = iVar3;
  iVar3 = fn_0068897c(uVar9,DAT_00890e4c);
  iVar8 = 0;
  param_1[0x39] = iVar3;
  do {
    fn_0017d96c(&local_40,0x20,0x1f,DAT_00890e50,iVar8);
    iVar4 = param_1[0x3a];
    iVar3 = iVar8 * 4;
    uVar5 = fn_0068897c(uVar9,&local_40);
    iVar8 = iVar8 + 1;
    *(undefined4 *)(iVar4 + iVar3) = uVar5;
  } while (iVar8 < 9);
  uVar9 = fn_00689220(iVar2,(char *)&DAT_00599604);
  iVar2 = fn_00145b00(0xd4,&DAT_00812c8c);
  piVar6 = (int *)0x0;
  if (iVar2 != 0) {
    piVar6 = (int *)fn_002b44c0(iVar2,param_1[1],uVar9,1,param_1[0x12]);
  }
  piVar7 = (int *)param_1[0x3d];
  if (piVar7 != piVar6) {
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 4))(piVar7);
    }
    param_1[0x3d] = (int)piVar6;
  }
  (**(code **)(*(int *)param_1[0x3d] + 0x10))();
  fn_00599a6c(param_1);
  fn_00599614(param_1);
  *(undefined2 *)(param_1 + 0x2b) = *(undefined2 *)(param_1[0x26] + 0x2a);
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  fn_0018a618(&local_44,5,4,&LAB_0059973c,(int)(short)param_1[0x2b]);
  fn_00190d50(param_1[0x33],&local_44);
  *(undefined2 *)((int)param_1 + 0xae) = *(undefined2 *)(param_1[0x26] + 0x30);
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  fn_0018a618(&local_44,5,4,&LAB_0059973c,(int)*(short *)((int)param_1 + 0xae));
  fn_00190d50(param_1[0x34],&local_44);
  sVar1 = *(short *)(param_1[0x26] + 0x36);
  *(short *)(param_1 + 0x2c) = sVar1;
  fn_00688c04(param_1[0x35],(int)sVar1,0);
  sVar1 = *(short *)(param_1[0x26] + 0x3a);
  *(short *)((int)param_1 + 0xb2) = sVar1;
  fn_00688c04(param_1[0x36],(int)sVar1,0);
  sVar1 = *(short *)(param_1[0x26] + 0x3e);
  *(short *)(param_1 + 0x2d) = sVar1;
  fn_00688c04(param_1[0x37],(int)sVar1,0);
  sVar1 = *(short *)(param_1[0x26] + 0x42);
  *(short *)((int)param_1 + 0xb6) = sVar1;
  fn_00688c04(param_1[0x38],(int)sVar1,0);
  iVar2 = 0;
  if ((short)param_1[0x2a] != 0) {
    iVar2 = fn_006617a8();
  }
  *(short *)(param_1 + 0x2e) = (short)iVar2;
  if (iVar2 == 0) {
    *(byte *)(param_1[0x39] + 0x44) = *(byte *)(param_1[0x39] + 0x44) & 0xfe;
  }
  else {
    *(byte *)(param_1[0x39] + 0x44) = *(byte *)(param_1[0x39] + 0x44) & 0xfe | 1;
    uVar9 = fn_00231d50();
    fn_00190d50(param_1[0x39],uVar9);
  }
  iVar2 = 0;
  do {
    sVar1 = *(short *)(param_1[0x26] + 0x180 + iVar2 * 2);
    *(short *)((int)param_1 + iVar2 * 2 + 0xba) = sVar1;
    if (sVar1 == 0) {
      iVar3 = *(int *)(param_1[0x3a] + iVar2 * 4);
      *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xfe;
    }
    else {
      iVar3 = *(int *)(param_1[0x3a] + iVar2 * 4);
      *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xfe | 1;
      uVar9 = fn_0016a7c4();
      fn_00190d50(*(undefined4 *)(param_1[0x3a] + iVar2 * 4),uVar9);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 9);
  return 1;
}



void fn_0058dde4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  uVar4 = 0;
LAB_0058de0c:
  do {
    uVar1 = fn_0022f584((&DAT_00893ff0)[uVar4],0);
    fn_0031b78c(param_1,uVar4,0,uVar1);
    if ((int)uVar4 < 3) {
      iVar2 = fn_006e9d4c(*(undefined4 *)(param_1 + 0xd0),uVar4 & 0xff);
      if (iVar2 == 0) {
        fn_0031b78c(param_1,uVar4,4,&DAT_0058e014);
      }
      else {
        uVar1 = fn_00230374();
        fn_0031b78c(param_1,uVar4,4,uVar1);
      }
    }
    else {
      if (uVar4 == 3) {
        if (*(char *)(*(int *)(param_1 + 0xd0) + 0xb) != '\0') {
          local_48 = 0;
          local_44 = 0;
          local_40 = 0;
          local_3c = 0;
          local_38 = 0;
          local_34 = 0;
          local_30 = 0;
          local_2c = 0;
          fn_00101a50(&local_48,0x10,&LAB_0058d5f0);
          fn_0031b78c(param_1,3,4,&local_48);
        }
        uVar4 = 4;
        goto LAB_0058de0c;
      }
      fn_0031ba5c(*(undefined4 *)(*(int *)(param_1 + 0x78) + 0x10),1);
      (**(code **)(**(int **)(*(int *)(param_1 + 0x78) + 0x10) + 0x1c))();
      fn_0031b5b0(*(undefined4 *)(*(int *)(param_1 + 0x78) + 0x10));
      uVar5 = 0;
      do {
        iVar2 = fn_006e9d4c(*(undefined4 *)(param_1 + 0xd0),uVar5 & 0xff);
        if (iVar2 == 0) goto LAB_0058dfd0;
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < 3);
      if (*(char *)(*(int *)(param_1 + 0xd0) + 0xb) != '\0') {
        uVar5 = fn_0034514c();
        uVar3 = fn_006b64b0(*(undefined4 *)(DAT_00897804 + 8));
        if ((uVar5 <= uVar3) &&
           (iVar2 = fn_006b2a40(*(undefined4 *)(DAT_00897804 + 0x28)), iVar2 < 100)) {
          local_48 = DAT_00893fc0;
          fn_002c37e0(param_1,uVar4,&local_48);
          goto LAB_0058dfe8;
        }
      }
LAB_0058dfd0:
      local_48 = DAT_00893fc8;
      fn_002c37e0(param_1,uVar4,&local_48);
    }
LAB_0058dfe8:
    uVar4 = uVar4 + 1;
    if (4 < (int)uVar4) {
      fn_002c3e78(param_1);
      return;
    }
  } while( true );
}



undefined4 fn_005857cc(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined8 uVar9;
  
  puVar7 = (undefined4 *)param_1[6];
  if (puVar7 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar7)(puVar7);
    do {
      if (puVar1 == &DAT_008971c0) goto LAB_00585818;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar7 = (undefined4 *)0x0;
LAB_00585818:
  iVar2 = (**(code **)(*param_1 + 8))(param_1);
  uVar6 = *(undefined4 *)(iVar2 + 8);
  iVar2 = fn_001481c8(uVar6,L"rom:/data/Layout/menu/wifi_ranking_battle/upper/gp_result_total.arc",
                       &DAT_00585b10,1,1);
  param_1[0x19] = iVar2;
  iVar2 = fn_001480d0(uVar6,iVar2,(char *)&DAT_00585b1c,&DAT_00585b18,0,1,0);
  param_1[0x1a] = iVar2;
  iVar2 = fn_00145b00(0x10,&DAT_00812c8c);
  piVar3 = (int *)0x0;
  if (iVar2 != 0) {
    piVar3 = (int *)fn_0028bf74(iVar2,uVar6);
  }
  piVar5 = (int *)param_1[0x1b];
  if (piVar5 != piVar3) {
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 4))(piVar5);
    }
    param_1[0x1b] = (int)piVar3;
  }
  fn_0028bed4(param_1[0x1b]);
  fn_0028bf3c(param_1[0x1b]);
  uVar6 = fn_00178f9c(uVar6,param_1[0x1a]);
  iVar2 = fn_00172c98(uVar6,(char *)&DAT_00585b38);
  uVar4 = fn_002f6534(param_1);
  fn_00688cc4(*(undefined4 *)(iVar2 + 0xac),(char *)&DAT_00585b44,uVar4);
  fn_006889d8(*(undefined4 *)(iVar2 + 0xac),&DAT_00585b50,0);
  if ((int)puVar7[6] < 1) {
    uVar4 = fn_0022f750((char *)&DAT_00585b5c);
    fn_00688cc4(uVar6,(char *)&DAT_007cb063,uVar4);
    fn_006889d8(uVar6,(char *)&DAT_007cb05c,0);
    uVar4 = fn_0022f750((char *)&DAT_00585b5c);
    fn_00688cc4(uVar6,(char *)&DAT_007cb072,uVar4);
    uVar4 = fn_0022f750((char *)&DAT_00585b5c);
    fn_00688cc4(uVar6,(char *)&DAT_007cb080,uVar4);
    uVar4 = fn_0022f750((char *)&DAT_00585b5c);
    fn_00688cc4(uVar6,(char *)&DAT_007cb08d,uVar4);
    uVar4 = fn_0022f750((char *)&DAT_00585b5c);
    fn_00688cc4(uVar6,(char *)&DAT_007cb09c,uVar4);
    uVar4 = fn_0022f750((char *)&DAT_00585b5c);
    fn_00688cc4(uVar6,(char *)&DAT_007cb0ab,uVar4);
    uVar4 = fn_0022f750((char *)&DAT_00585b5c);
    fn_00688cc4(uVar6,(char *)&DAT_007cb0b8,uVar4);
    uVar4 = fn_0022f750((char *)&DAT_00585b5c);
    fn_00688cc4(uVar6,(char *)&DAT_007cb0c8,uVar4);
    uVar4 = fn_0022f750((char *)&DAT_00585b5c);
    fn_00688cc4(uVar6,(char *)&DAT_007cb0db,uVar4);
    uVar4 = fn_0022f750((char *)&DAT_00585b5c);
  }
  else {
    if (puVar7[4] == 0) {
      uVar4 = fn_0022f750((char *)&DAT_00585b5c);
      fn_00688cc4(uVar6,(char *)&DAT_007cb063,uVar4);
    }
    else {
      fn_00688cc4(uVar6,(char *)&DAT_007cb063);
    }
    uVar8 = puVar7[5];
    iVar2 = param_1[0x1b];
    if ((int)uVar8 < 0) {
      fn_006889d8(uVar6,(char *)&DAT_007cb05c,0);
      uVar4 = fn_0022f750((char *)&DAT_00585b5c);
      fn_00688cc4(uVar6,(char *)&DAT_007cb072,uVar4);
    }
    else {
      fn_006889d8(uVar6,(char *)&DAT_007cb05c,1);
      fn_0028be4c(iVar2,uVar6,uVar8 & 0xffff,(char *)&DAT_007cb072,(char *)&DAT_007cb05c);
    }
    uVar9 = fn_002f6100(param_1);
    iVar2 = (int)uVar9;
    if (iVar2 == 0) {
      iVar2 = fn_0022f750((char *)&DAT_00585b5c,(int)((ulonglong)uVar9 >> 0x20));
    }
    fn_00688cc4(uVar6,(char *)&DAT_007cb080,iVar2);
    if ((int)puVar7[6] < 1) {
      uVar4 = fn_0022f750((char *)&DAT_00585b5c);
      fn_00688cc4(uVar6,(char *)&DAT_007cb08d,uVar4);
    }
    else {
      fn_00688ad4(uVar6,(char *)&DAT_007cb08d,puVar7[6],0);
    }
    if ((int)puVar7[7] < 1) {
      uVar4 = fn_0022f750((char *)&DAT_00585b5c);
      fn_00688cc4(uVar6,(char *)&DAT_007cb09c,uVar4);
    }
    else {
      fn_00688ad4(uVar6,(char *)&DAT_007cb09c,puVar7[7],0);
    }
    iVar2 = puVar7[9];
    if ((int)puVar7[8] < 0 || iVar2 < 0) {
      uVar4 = fn_0022f750((char *)&DAT_00585b5c);
    }
    else {
      fn_0015b0f8();
      fn_0015b0f8(iVar2);
      uVar4 = fn_0022f750((char *)&DAT_00585b7c);
    }
    fn_00688cc4(uVar6,(char *)&DAT_007cb0ab,uVar4);
    if ((int)puVar7[10] < 0) {
      uVar4 = fn_0022f750((char *)&DAT_00585b5c);
      fn_00688cc4(uVar6,(char *)&DAT_007cb0b8,uVar4);
    }
    else {
      fn_00688ad4(uVar6,(char *)&DAT_007cb0b8,puVar7[10],0);
    }
    if ((int)puVar7[0xb] < 0) {
      uVar4 = fn_0022f750((char *)&DAT_00585b5c);
      fn_00688cc4(uVar6,(char *)&DAT_007cb0c8,uVar4);
    }
    else {
      fn_00688ad4(uVar6,(char *)&DAT_007cb0c8,puVar7[0xb],0);
    }
    if ((int)puVar7[0xc] < 0) {
      uVar4 = fn_0022f750((char *)&DAT_00585b5c);
      fn_00688cc4(uVar6,(char *)&DAT_007cb0db,uVar4);
    }
    else {
      fn_00688ad4(uVar6,(char *)&DAT_007cb0db,puVar7[0xc],0);
    }
    if (-1 < (int)puVar7[0xd]) {
      fn_00688ad4(uVar6,(char *)&DAT_007cb0ef,puVar7[0xd],0);
      return 1;
    }
    uVar4 = fn_0022f750((char *)&DAT_00585b5c);
  }
  fn_00688cc4(uVar6,(char *)&DAT_007cb0ef,uVar4);
  return 1;
}


