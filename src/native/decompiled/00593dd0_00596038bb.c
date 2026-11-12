#include "00593dd0_00596038bb.h"



void fn_00596038(int param_1)

{
  fn_005db474(*(undefined4 *)(param_1 + 0x110),1);
  fn_005db474(*(undefined4 *)(param_1 + 0x110),2,1);
  fn_005db474(*(undefined4 *)(param_1 + 0x110),3,1);
  fn_005db474(*(undefined4 *)(param_1 + 0x110),6,1);
  *(undefined4 *)(*(int *)(param_1 + 0x110) + 0x10) = DAT_00897830;
  *(undefined1 *)(*(int *)(param_1 + 0x110) + 0x8ed) = 1;
  return;
}



void fn_005954d0(int param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  
  fn_002a0778(*(undefined4 *)(param_1 + 4));
  uVar2 = fn_00182994(DAT_008977e4);
  iVar3 = fn_0016561c(uVar2,(int)*(char *)(param_1 + 4));
  iVar9 = 0;
  if (0 < iVar3) {
    do {
      uVar2 = fn_00182994(DAT_008977e4);
      iVar8 = (int)(char)iVar9;
      uVar1 = fn_001659c0(uVar2,(int)*(char *)(param_1 + 4),iVar8);
      uVar2 = fn_00182994(DAT_008977e4);
      iVar4 = fn_001754ac(uVar2,uVar1);
      if (iVar4 == *(char *)(param_1 + 0xd)) {
        uVar2 = fn_00182994(DAT_008977e4);
        uVar2 = fn_00175044(uVar2,(int)*(char *)(param_1 + 4),0);
        uVar5 = fn_00182994(DAT_008977e4);
        uVar5 = fn_001659c0(uVar5,(int)*(char *)(param_1 + 4),iVar8);
        fn_0016c1f4(uVar5,uVar2);
        uVar2 = fn_00182994(DAT_008977e4);
        uVar2 = fn_00175044(uVar2,(int)*(char *)(param_1 + 4),1);
        uVar5 = fn_00182994(DAT_008977e4);
        uVar5 = fn_001659c0(uVar5,(int)*(char *)(param_1 + 4),iVar8);
        fn_0016c1f4(uVar5,uVar2);
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < iVar3);
  }
  bVar10 = *(char *)(param_1 + 0xd) == '\0';
  uVar2 = fn_0016c0d0();
  uVar5 = fn_00182994(DAT_008977e4);
  iVar3 = fn_00174c80(uVar5,(int)*(char *)(param_1 + 4),0);
  if (iVar3 != 0) {
    uVar5 = fn_0029f004(bVar10,uVar2);
    uVar6 = fn_00182994(DAT_008977e4);
    uVar5 = fn_00149844(uVar6,iVar3,uVar5);
    piVar7 = (int *)fn_00182994(DAT_008977e4);
    fn_0029efb8(uVar2);
    (**(code **)(*piVar7 + 0x54))(piVar7,uVar5);
  }
  uVar5 = fn_00182994(DAT_008977e4);
  iVar3 = fn_00174c80(uVar5,(int)*(char *)(param_1 + 4),1);
  if (iVar3 != 0) {
    uVar5 = fn_0029f004(bVar10,uVar2);
    uVar6 = fn_00182994(DAT_008977e4);
    uVar5 = fn_00149844(uVar6,iVar3,uVar5);
    piVar7 = (int *)fn_00182994(DAT_008977e4);
    fn_0029efb8(uVar2);
    (**(code **)(*piVar7 + 0x54))(piVar7,uVar5);
  }
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x18);
  *(undefined1 *)(param_1 + 0xe) = 7;
  *(undefined1 *)(param_1 + 0xf) = 2;
  return;
}



undefined4 * fn_005952cc(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002c4694();
  *puVar1 = &DAT_0084520c;
  puVar1[0x2c] = &DAT_00859150;
  puVar1[0x2d] = 0;
  puVar1[0x2e] = 0;
  puVar1[0x2f] = 0;
  puVar1[0x30] = 0;
  puVar1[0x31] = 0;
  puVar1[0x32] = 0;
  puVar1[0x33] = 0;
  puVar1[0x34] = 0;
  return puVar1;
}



void fn_00595154(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  fn_0068ab44(param_1,0x100094b,param_3,param_4,param_4);
  if (param_2 == 0) {
    fn_002f8914();
    iVar1 = fn_002f7908();
    if (iVar1 == 0) {
      *(code **)(param_1 + 0xc4) = fn_00595090;
      *(undefined4 *)(param_1 + 200) = 0;
      return;
    }
    fn_002f64f4(param_1,0xd8,0,0,0);
    return;
  }
  if (param_2 == 1) {
    fn_002f64f4(param_1,0xd9,0,0,1);
    return;
  }
  if (param_2 == 2) {
    fn_002f64f4(param_1,0xda,0,0,2);
  }
  return;
}


