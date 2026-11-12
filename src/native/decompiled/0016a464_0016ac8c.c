#include "0016a464_0016ac8c.h"



void fn_0016ac8c(int param_1,undefined1 param_2,int param_3,undefined1 param_4)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  
  *(undefined1 *)(param_1 + 4) = param_2;
  *(char *)(param_1 + 0x84) = (char)param_3;
  if (param_3 != 0) {
    *(undefined4 *)(param_1 + 0x88) = 0x3c;
  }
  *(undefined1 *)(param_1 + 0x8c) = param_4;
  *(undefined1 *)(*(int *)(param_1 + 0x80) + 0x1f) = 0;
  iVar2 = fn_00178f9c(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x14));
  piVar7 = *(int **)(iVar2 + 0x10);
  uVar3 = (**(code **)(*piVar7 + 0x2c))(piVar7,(char *)&DAT_0016b070,1);
  *(undefined4 *)(param_1 + 0x2c) = uVar3;
  uVar3 = (**(code **)(*piVar7 + 0x2c))(piVar7,(char *)&DAT_0016b084,1);
  *(undefined4 *)(param_1 + 0x30) = uVar3;
  piVar4 = (int *)(**(code **)(*piVar7 + 0x2c))(piVar7,(char *)&DAT_0016b090,1);
  if (piVar4 != (int *)0x0) {
    puVar5 = (undefined4 *)(**(code **)(*piVar4 + 8))(piVar4);
    do {
      if (puVar5 == &DAT_0089a930) goto LAB_0016ad58;
      puVar5 = (undefined4 *)*puVar5;
    } while (puVar5 != (undefined4 *)0x0);
  }
  piVar4 = (int *)0x0;
LAB_0016ad58:
  *(int **)(param_1 + 0x34) = piVar4;
  uVar3 = (**(code **)(*piVar7 + 0x2c))(piVar7,(char *)&DAT_0016b0a8,1);
  *(undefined4 *)(param_1 + 0x38) = uVar3;
  uVar3 = (**(code **)(*piVar7 + 0x2c))(piVar7,(char *)&DAT_0016b0bc,1);
  *(undefined4 *)(param_1 + 0x3c) = uVar3;
  piVar4 = (int *)(**(code **)(*piVar7 + 0x2c))(piVar7,(char *)&DAT_0016b0cc,1);
  if (piVar4 != (int *)0x0) {
    puVar5 = (undefined4 *)(**(code **)(*piVar4 + 8))(piVar4);
    do {
      if (puVar5 == &DAT_0089a930) goto LAB_0016ade0;
      puVar5 = (undefined4 *)*puVar5;
    } while (puVar5 != (undefined4 *)0x0);
  }
  piVar4 = (int *)0x0;
LAB_0016ade0:
  *(int **)(param_1 + 0x40) = piVar4;
  uVar3 = (**(code **)(*piVar7 + 0x2c))(piVar7,(char *)&DAT_0016b0dc,1);
  *(undefined4 *)(param_1 + 0x58) = uVar3;
  uVar3 = (**(code **)(*piVar7 + 0x2c))(piVar7,DAT_0088fe74,1);
  *(undefined4 *)(param_1 + 0x98) = uVar3;
  iVar2 = (**(code **)(*piVar7 + 0x2c))(piVar7,(char *)&DAT_0016b0f4,1);
  *(int *)(param_1 + 0x94) = iVar2;
  *(undefined4 *)(param_1 + 200) = *(undefined4 *)(iVar2 + 0x3c);
  *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(iVar2 + 0x1c);
  piVar4 = (int *)(**(code **)(*piVar7 + 0x2c))(piVar7,(char *)&DAT_0016b108,1);
  if (piVar4 != (int *)0x0) {
    puVar5 = (undefined4 *)(**(code **)(*piVar4 + 8))(piVar4);
    do {
      if (puVar5 == &DAT_0089a930) goto LAB_0016ae98;
      puVar5 = (undefined4 *)*puVar5;
    } while (puVar5 != (undefined4 *)0x0);
  }
  piVar4 = (int *)0x0;
LAB_0016ae98:
  *(int **)(param_1 + 0x50) = piVar4;
  piVar4 = (int *)(**(code **)(*piVar7 + 0x2c))(piVar7,(char *)&DAT_0016b120,1);
  if (piVar4 != (int *)0x0) {
    puVar5 = (undefined4 *)(**(code **)(*piVar4 + 8))(piVar4);
    do {
      if (puVar5 == &DAT_0089a930) goto LAB_0016aee8;
      puVar5 = (undefined4 *)*puVar5;
    } while (puVar5 != (undefined4 *)0x0);
  }
  piVar4 = (int *)0x0;
LAB_0016aee8:
  *(int **)(param_1 + 0x54) = piVar4;
  piVar4 = (int *)(**(code **)(*piVar7 + 0x2c))(piVar7,(char *)&DAT_0016b138,1);
  if (piVar4 != (int *)0x0) {
    puVar5 = (undefined4 *)(**(code **)(*piVar4 + 8))(piVar4);
    do {
      if (puVar5 == &DAT_0089a930) goto LAB_0016af38;
      puVar5 = (undefined4 *)*puVar5;
    } while (puVar5 != (undefined4 *)0x0);
  }
  piVar4 = (int *)0x0;
LAB_0016af38:
  *(int **)(param_1 + 0x6c) = piVar4;
  piVar4 = (int *)(**(code **)(*piVar7 + 0x2c))(piVar7,(char *)&DAT_0016b150,1);
  if (piVar4 != (int *)0x0) {
    puVar5 = (undefined4 *)(**(code **)(*piVar4 + 8))(piVar4);
    do {
      if (puVar5 == &DAT_0089a930) goto LAB_0016af88;
      puVar5 = (undefined4 *)*puVar5;
    } while (puVar5 != (undefined4 *)0x0);
  }
  piVar4 = (int *)0x0;
LAB_0016af88:
  *(int **)(param_1 + 0x70) = piVar4;
  piVar4 = (int *)(**(code **)(*piVar7 + 0x2c))(piVar7,(char *)&DAT_0016b168,1);
  if (piVar4 != (int *)0x0) {
    puVar5 = (undefined4 *)(**(code **)(*piVar4 + 8))(piVar4);
    do {
      if (puVar5 == &DAT_0089a930) goto LAB_0016afd8;
      puVar5 = (undefined4 *)*puVar5;
    } while (puVar5 != (undefined4 *)0x0);
  }
  piVar4 = (int *)0x0;
LAB_0016afd8:
  *(int **)(param_1 + 0x74) = piVar4;
  uVar3 = (**(code **)(*piVar7 + 0x2c))(piVar7,(char *)&DAT_0016b180,1);
  *(undefined4 *)(param_1 + 0x78) = uVar3;
  piVar4 = (int *)(**(code **)(*piVar7 + 0x2c))(piVar7,(char *)&DAT_0016b198,1);
  if (piVar4 != (int *)0x0) {
    puVar5 = (undefined4 *)(**(code **)(*piVar4 + 8))(piVar4);
    do {
      if (puVar5 == &DAT_0089a930) goto LAB_0016b040;
      puVar5 = (undefined4 *)*puVar5;
    } while (puVar5 != (undefined4 *)0x0);
  }
  piVar4 = (int *)0x0;
LAB_0016b040:
  *(int **)(param_1 + 0x7c) = piVar4;
  fn_00190d50(*(undefined4 *)(param_1 + 0x34),"");
  fn_00190d50(*(undefined4 *)(param_1 + 0x7c),"");
  if (*(int *)(param_1 + 0x18) != -1) {
    fn_00159f34(*(undefined4 *)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x28) != -1) {
    fn_00159f34(*(undefined4 *)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  }
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 < 2) {
    if (*(char *)(param_1 + 5) == '\0') {
      fn_00178eec(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x14),1);
      fn_0017a11c(param_1,param_1 + 0x24,DAT_0088fe94,1);
    }
    *(byte *)(*(int *)(param_1 + 0x2c) + 0x44) =
         *(byte *)(*(int *)(param_1 + 0x2c) + 0x44) & 0xfe | 1;
    *(byte *)(*(int *)(param_1 + 0x94) + 0x44) = *(byte *)(*(int *)(param_1 + 0x94) + 0x44) & 0xfe;
    uVar3 = fn_00178f9c(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x14));
    iVar2 = 0;
    do {
      iVar6 = fn_001828f0(uVar3,(&DAT_0088fea0)[iVar2]);
      *(byte *)(iVar6 + 0x44) = *(byte *)(iVar6 + 0x44) & 0xfe;
      iVar6 = fn_001827b0(uVar3,(&PTR_s_tb_message_win_sub_04_0088feb4)[iVar2]);
      iVar2 = iVar2 + 1;
      *(byte *)(iVar6 + 0x44) = *(byte *)(iVar6 + 0x44) & 0xfe;
    } while (iVar2 < 5);
    *(byte *)(*(int *)(param_1 + 0x58) + 0x44) = *(byte *)(*(int *)(param_1 + 0x58) + 0x44) & 0xfe;
    *(byte *)(*(int *)(param_1 + 0x38) + 0x44) = *(byte *)(*(int *)(param_1 + 0x38) + 0x44) & 0xfe;
    *(byte *)(*(int *)(param_1 + 0x40) + 0x44) = *(byte *)(*(int *)(param_1 + 0x40) + 0x44) & 0xfe;
    *(byte *)(*(int *)(param_1 + 0x3c) + 0x44) = *(byte *)(*(int *)(param_1 + 0x3c) + 0x44) & 0xfe;
    fn_0017a11c(param_1,param_1 + 0x18,DAT_0088fe7c,0);
    *(undefined1 *)(param_1 + 5) = 1;
  }
  else if (bVar1 == 2 || bVar1 == 3) {
    if (*(char *)(param_1 + 8) == '\0') {
      fn_00178eec(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x14),1);
    }
    *(byte *)(*(int *)(param_1 + 0x2c) + 0x44) = *(byte *)(*(int *)(param_1 + 0x2c) + 0x44) & 0xfe;
    *(byte *)(*(int *)(param_1 + 0x30) + 0x44) = *(byte *)(*(int *)(param_1 + 0x30) + 0x44) & 0xfe;
    *(byte *)(*(int *)(param_1 + 0x94) + 0x44) = *(byte *)(*(int *)(param_1 + 0x94) + 0x44) & 0xfe;
    uVar3 = fn_00178f9c(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x14));
    iVar2 = 0;
    do {
      iVar6 = fn_001828f0(uVar3,(&DAT_0088fea0)[iVar2]);
      *(byte *)(iVar6 + 0x44) = *(byte *)(iVar6 + 0x44) & 0xfe;
      iVar6 = fn_001827b0(uVar3,(&PTR_s_tb_message_win_sub_04_0088feb4)[iVar2]);
      iVar2 = iVar2 + 1;
      *(byte *)(iVar6 + 0x44) = *(byte *)(iVar6 + 0x44) & 0xfe;
    } while (iVar2 < 5);
    *(byte *)(*(int *)(param_1 + 0x58) + 0x44) = *(byte *)(*(int *)(param_1 + 0x58) + 0x44) & 0xfe;
    *(byte *)(*(int *)(param_1 + 0x38) + 0x44) = *(byte *)(*(int *)(param_1 + 0x38) + 0x44) & 0xfe;
    *(byte *)(*(int *)(param_1 + 0x40) + 0x44) = *(byte *)(*(int *)(param_1 + 0x40) + 0x44) & 0xfe;
    *(byte *)(*(int *)(param_1 + 0x3c) + 0x44) = *(byte *)(*(int *)(param_1 + 0x3c) + 0x44) & 0xfe;
    *(byte *)(*(int *)(param_1 + 0x78) + 0x44) =
         *(byte *)(*(int *)(param_1 + 0x78) + 0x44) & 0xfe | 1;
    fn_0017a11c(param_1,param_1 + 0x28,DAT_0088fe98,0);
    *(undefined1 *)(param_1 + 8) = 1;
    return;
  }
  return;
}



void fn_0016ac54(int param_1)

{
  int iVar1;
  
  fn_0016b4f4(*(undefined4 *)(param_1 + 100));
  iVar1 = *(int *)(*(int *)(param_1 + 100) + 0x3c);
  *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe | 1;
  return;
}



void fn_0016ac04(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 100);
  *(undefined1 *)(iVar1 + 0x8f) = 0;
  *(undefined1 *)(iVar1 + 0x8d) = 0;
  fn_0017a1d4(*(undefined4 *)(iVar1 + 0x80));
  fn_0017a18c(*(undefined4 *)(iVar1 + 0x80),param_2);
  return;
}



int fn_0016a8e4(undefined4 *param_1,int *param_2,undefined1 param_3,undefined1 param_4,
                undefined4 *param_5)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 in_s0;
  
  *param_1 = &PTR_LAB_0081d0a4;
  iVar1 = fn_00183dcc(param_1 + 1,param_2);
  *(undefined4 *)(iVar1 + 0xc) = in_s0;
  *(undefined4 *)(iVar1 + 0x10) = in_s0;
  *(undefined4 *)(iVar1 + 0x14) = 1;
  *(undefined4 *)(iVar1 + 0x18) = 0;
  if ((param_2[1] - *param_2) / 0xc == 0) {
    fn_002ff628(9,&DAT_008c7604,&DAT_008c7604,0,0);
  }
  puVar2 = (undefined4 *)*param_2;
  uVar3 = puVar2[1];
  uVar4 = puVar2[2];
  *(undefined4 *)(iVar1 + 0x1c) = *puVar2;
  *(undefined4 *)(iVar1 + 0x20) = uVar3;
  *(undefined4 *)(iVar1 + 0x24) = uVar4;
  *(undefined1 *)(iVar1 + 0x28) = param_3;
  *(undefined1 *)(iVar1 + 0x29) = param_4;
  *(undefined4 *)(iVar1 + 0x2c) = 0;
  uVar3 = param_5[1];
  uVar4 = param_5[2];
  *(undefined4 *)(iVar1 + 0x30) = *param_5;
  *(undefined4 *)(iVar1 + 0x34) = uVar3;
  *(undefined4 *)(iVar1 + 0x38) = uVar4;
  return iVar1 + -4;
}



void fn_0016a798(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = fn_00164a34(param_1,param_2,param_2,param_1);
  if (iVar1 == 0) {
    return;
  }
  fn_0015aabc(param_1,param_2);
  return;
}



undefined4 fn_0016a5e4(undefined4 param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  iVar1 = fn_00164a34();
  if (iVar1 != 0 && param_3 != (int *)0x0) {
    local_2c = 0;
    local_28 = 0;
    local_24 = 0;
    iVar1 = fn_00145b00(0x44,&DAT_00812c8c);
    if ((iVar1 != 0) && (iVar1 = fn_0015ce70(iVar1,param_2,param_3,&local_2c), iVar1 != 0)) {
      if ((param_3[1] - *param_3) / 0xc == 0) {
        fn_002ff628(9,&DAT_008c7604,&DAT_008c7604,0,0);
      }
      fn_0015aabc(param_1,param_2);
      uVar2 = fn_0015a130(param_1,iVar1);
      return uVar2;
    }
  }
  return 0xffffffff;
}



void fn_0016a51c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  undefined4 local_14;
  
  local_14 = param_2;
  iVar2 = fn_00164a34(param_1,param_2,param_3,param_4,param_1);
  if (iVar2 != 0) {
    uVar3 = (uint)(char)local_14;
    bVar5 = 1 < uVar3 - 0x20;
    if (bVar5) {
      uVar3 = uVar3 - 0x22;
    }
    if ((!bVar5 || uVar3 < 2) && (iVar2 = fn_0017484c(DAT_008977e4), iVar2 != 0)) {
      if ((int)(char)local_14 - 0x20U < 2) {
        iVar2 = fn_00175dcc();
      }
      else {
        iVar2 = fn_00175d88(iVar2,&local_14);
      }
      if ((iVar2 != 0) && (iVar4 = fn_001748ec(), iVar4 != 0)) {
        if ((int)(char)local_14 - 0x20U < 2) {
          uVar1 = fn_001748ec(iVar2);
          *(undefined1 *)(param_1 + 0xc0) = uVar1;
        }
        else {
          uVar1 = fn_001748ec(iVar2);
          *(undefined1 *)(param_1 + 0xc1) = uVar1;
        }
        fn_001794f4(iVar2);
      }
    }
  }
  return;
}



void fn_0016a50c(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_0081be00;
  return;
}



undefined4 fn_0016a464(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_2 + 0x18) != 0) {
    if (*(int *)(param_2 + 0xc) == 0) {
      uVar1 = fn_0017a088(*(undefined4 *)(param_1 + 0x78));
      *(undefined4 *)(param_2 + 0x18) = uVar1;
    }
    else {
      uVar1 = fn_0017a088(*(undefined4 *)(param_1 + 0x7c));
      *(undefined4 *)(param_2 + 0x18) = uVar1;
    }
  }
  fn_0017d90c(param_1 + 0x34,param_2 + 0x1c);
  if (*(char *)(param_2 + 4) == '\x01') {
    if (*(int **)(param_2 + 0x10) != (int *)0x0) {
      (**(code **)(**(int **)(param_2 + 0x10) + 8))();
    }
    *(undefined4 *)(param_2 + 0x10) = 0;
  }
  if (param_2 != 0) {
    iVar2 = fn_002fedf4(param_2 + 0x14);
    fn_002feef8(iVar2 + -0x14);
  }
  return 1;
}


