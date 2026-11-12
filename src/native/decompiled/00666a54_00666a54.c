#include "00666a54_00666a54.h"



undefined4 fn_00666a54(int param_1)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  bool bVar8;
  undefined8 uVar9;
  int local_138;
  undefined4 local_134;
  undefined *local_130;
  uint local_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined1 auStack_118 [260];
  
  uVar7 = 0;
  if ((*(byte *)(param_1 + 0x4c) & 2) == 0) goto LAB_00667340;
  switch(*(undefined4 *)(param_1 + 0x44)) {
  default:
    goto switchD_00666a78_caseD_0;
  case 1:
    fn_00474864();
    fn_004746b0();
    DAT_008b6386 = 2;
    uVar9 = fn_001287d4(0x78,&DAT_00812c8c);
    uVar5 = (undefined4)((ulonglong)uVar9 >> 0x20);
    iVar6 = (int)uVar9;
    if (iVar6 != 0) {
      uVar5 = 0;
    }
    *(int *)(param_1 + 0x98) = iVar6;
    uVar3 = 0;
    if (iVar6 != 0) {
      uVar3 = fn_0048cc04(iVar6,uVar5);
    }
    *(undefined4 *)(param_1 + 0x9c) = uVar3;
    iVar6 = fn_001287d4(0x150,&DAT_00812c8c);
    *(int *)(param_1 + 0x80) = iVar6;
    uVar5 = 0;
    if (iVar6 != 0) {
      uVar5 = fn_004bbcb0();
    }
    *(undefined4 *)(param_1 + 0x84) = uVar5;
    *(undefined1 *)(param_1 + 0x5c8) = 0;
    *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) | 1;
    *(undefined4 *)(param_1 + 0x6c) = 0;
    goto switchD_00666a78_caseD_0;
  case 2:
    uVar5 = fn_0066c4ec(param_1);
    break;
  case 3:
    uVar5 = fn_0066c6cc(param_1);
    break;
  case 4:
    uVar5 = fn_0066b1e8(param_1);
    break;
  case 5:
    uVar5 = fn_0066bb2c(param_1);
    break;
  case 6:
    uVar5 = fn_0066b6b8(param_1);
    break;
  case 7:
    uVar5 = fn_006689ec(param_1);
    break;
  case 8:
    if (*(char *)(*(int *)(param_1 + 0x9c) + 0x10) != '\x01') {
      fn_00456400();
    }
    iVar6 = fn_004a0ae0(*(undefined4 *)(param_1 + 0x8c),*(undefined4 *)(param_1 + 0x9c),
                         DAT_00898848);
    if (iVar6 == 0) goto LAB_006670e4;
    fn_004562e0(*(undefined4 *)(param_1 + 0x9c),0xffffffff);
    iVar6 = *(int *)(param_1 + 0x9c);
    cVar1 = *(char *)(iVar6 + 0x10);
joined_r0x00666c90:
    uVar5 = 0;
    if (cVar1 != '\x02') {
      local_134 = *(undefined4 *)(iVar6 + 0x38);
      local_130 = *(undefined **)(iVar6 + 0x3c);
      local_12c = *(uint *)(iVar6 + 0x40);
      uVar5 = 0xffffffff;
      fn_006688a0(param_1,param_1 + 0x74,&local_134,0);
    }
    goto LAB_00666c3c;
  case 9:
    if (*(char *)(*(int *)(param_1 + 0x9c) + 0x10) != '\x01') {
      fn_00456400();
    }
    iVar6 = fn_004a0af8(*(undefined4 *)(param_1 + 0x8c),*(undefined4 *)(param_1 + 0x9c),
                         DAT_00898848);
    if (iVar6 != 0) {
      fn_004562e0(*(undefined4 *)(param_1 + 0x9c),0xffffffff);
      iVar6 = *(int *)(param_1 + 0x9c);
      cVar1 = *(char *)(iVar6 + 0x10);
      goto joined_r0x00666c90;
    }
    goto LAB_006670e4;
  case 0xb:
    if (*(char *)(*(int *)(param_1 + 0x9c) + 0x10) != '\x01') {
      fn_00456400();
    }
    uVar5 = fn_0013d3e8(&local_138,&DAT_006699e0);
    iVar6 = fn_004820cc(*(undefined4 *)(param_1 + 0x8c),*(undefined4 *)(param_1 + 0x9c),
                         DAT_00898848,uVar5);
    fn_00170f54(&local_138);
    if (iVar6 != 0) {
      fn_004562e0(*(undefined4 *)(param_1 + 0x9c),0xffffffff);
    }
    *(undefined4 *)(param_1 + 0x6c) = 0;
    goto switchD_00666a78_caseD_0;
  case 0xc:
    if (*(char *)(*(int *)(param_1 + 0x9c) + 0x10) != '\x01') {
      fn_00456400();
    }
    local_138 = 0;
    local_134 = 0;
    iVar6 = fn_004689dc(*(undefined4 *)(param_1 + 0x94),*(undefined4 *)(param_1 + 0x9c),
                         param_1 + 0x334,0xff);
    if (iVar6 == 0) goto LAB_006672e0;
LAB_00666ea0:
    uVar5 = 0;
    fn_004562e0(*(undefined4 *)(param_1 + 0x9c),0xffffffff);
    goto LAB_00666c3c;
  case 0xd:
    uVar5 = fn_00668320(param_1);
    break;
  case 0xe:
    uVar5 = fn_00667678(param_1);
    break;
  case 0xf:
    uVar5 = fn_00667c48(param_1);
    break;
  case 0x10:
    if (*(char *)(*(int *)(param_1 + 0x9c) + 0x10) != '\x01') {
      fn_00456400();
    }
    local_138 = 0;
    local_134 = 0;
    iVar6 = fn_00492030(*(undefined4 *)(param_1 + 0x94),*(undefined4 *)(param_1 + 0x9c),
                         *(undefined4 *)(param_1 + 0x4a8));
    if (iVar6 != 0) goto LAB_00666ea0;
LAB_00667210:
    uVar5 = 0xffffffff;
    uVar3 = fn_0045a590();
    uVar4 = fn_00482b9c();
    *(undefined4 *)(param_1 + 0x74) = uVar4;
    *(undefined4 *)(param_1 + 0x78) = 1;
    *(undefined1 *)(param_1 + 0x7c) = 1;
    fn_0045a3b0(uVar3,&local_138,0x80);
    fn_0045a5b0();
    goto LAB_00666c3c;
  case 0x11:
    uVar5 = fn_0066a008(param_1);
    break;
  case 0x12:
    uVar5 = fn_0066abd4(param_1);
    break;
  case 0x13:
    uVar5 = fn_006699f4(param_1);
    break;
  case 0x14:
    uVar5 = fn_0066a574(param_1);
    break;
  case 0x15:
    if (*(char *)(*(int *)(param_1 + 0x9c) + 0x10) != '\x01') {
      fn_00456400();
    }
    local_12c = local_12c & 0xffffff00;
    local_130 = &DAT_00853c4c;
    local_120 = 0;
    uStack_11c = 0;
    local_128 = *(undefined4 *)(param_1 + 0x688);
    uStack_124 = *(undefined4 *)(param_1 + 0x68c);
    iVar6 = (**(code **)(**(int **)(param_1 + 0xa4) + 100))
                      (*(int **)(param_1 + 0xa4),*(undefined4 *)(param_1 + 0x9c),&local_130);
    if (iVar6 != 0) goto LAB_00666ea0;
    uVar5 = 0xffffffff;
    uVar3 = fn_0045a590();
    uVar4 = fn_00482b9c();
    *(undefined4 *)(param_1 + 0x74) = uVar4;
    *(undefined4 *)(param_1 + 0x78) = 1;
    *(undefined1 *)(param_1 + 0x7c) = 1;
    fn_0045a3b0(uVar3,auStack_118,0x80);
    fn_0045a5b0();
    goto LAB_00666c3c;
  case 0x16:
    if (*(char *)(*(int *)(param_1 + 0x9c) + 0x10) != '\x01') {
      fn_00456400();
    }
    iVar6 = *(int *)(param_1 + 0x4ac);
    local_138 = iVar6 + 0x74;
    iVar6 = fn_004a0bcc(*(undefined4 *)(param_1 + 0x8c),*(undefined4 *)(param_1 + 0x9c),iVar6,
                         *(undefined4 *)(iVar6 + 0x70));
    if (iVar6 == 0) goto LAB_006670e4;
    fn_004562e0(*(undefined4 *)(param_1 + 0x9c),0xffffffff);
    iVar6 = *(int *)(param_1 + 0x9c);
    cVar1 = *(char *)(iVar6 + 0x10);
joined_r0x00666fa4:
    uVar5 = 0;
    if (cVar1 != '\x02') goto LAB_006670b0;
    goto LAB_00666c3c;
  case 0x17:
    if (*(char *)(*(int *)(param_1 + 0x9c) + 0x10) != '\x01') {
      fn_00456400();
    }
    iVar6 = fn_004aee88(*(undefined4 *)(param_1 + 0x8c),*(undefined4 *)(param_1 + 0x9c),
                         param_1 + 0x4b0);
    if (iVar6 != 0) {
      fn_004562e0(*(undefined4 *)(param_1 + 0x9c),0xffffffff);
      iVar6 = *(int *)(param_1 + 0x9c);
      cVar1 = *(char *)(iVar6 + 0x10);
      goto joined_r0x00666fa4;
    }
    goto LAB_006670e4;
  case 0x18:
    if (*(char *)(*(int *)(param_1 + 0x9c) + 0x10) != '\x01') {
      fn_00456400();
    }
    local_138 = param_1 + 0x52c;
    iVar6 = fn_004a0ba8(*(undefined4 *)(param_1 + 0x8c),*(undefined4 *)(param_1 + 0x9c),
                         *(undefined4 *)(param_1 + 0x520),param_1 + 0x524);
    if (iVar6 == 0) goto LAB_006670e4;
    fn_004562e0(*(undefined4 *)(param_1 + 0x9c),0xffffffff);
    iVar6 = *(int *)(param_1 + 0x9c);
    cVar1 = *(char *)(iVar6 + 0x10);
joined_r0x006670ac:
    uVar5 = 0;
    if (cVar1 == '\x02') goto LAB_00666c3c;
LAB_006670b0:
    local_130 = *(undefined **)(iVar6 + 0x38);
    local_12c = *(uint *)(iVar6 + 0x3c);
    local_128 = *(undefined4 *)(iVar6 + 0x40);
    uVar5 = 0xffffffff;
    fn_006688a0(param_1,param_1 + 0x74,&local_130,0);
    goto LAB_00666c3c;
  case 0x19:
    if (*(char *)(*(int *)(param_1 + 0x9c) + 0x10) != '\x01') {
      fn_00456400();
    }
    iVar6 = fn_00482128(*(undefined4 *)(param_1 + 0x8c),*(undefined4 *)(param_1 + 0x9c),
                         *(undefined4 *)(param_1 + 0x540));
    if (iVar6 != 0) {
      fn_004562e0(*(undefined4 *)(param_1 + 0x9c),0xffffffff);
      iVar6 = *(int *)(param_1 + 0x9c);
      cVar1 = *(char *)(iVar6 + 0x10);
      goto joined_r0x006670ac;
    }
LAB_006670e4:
    uVar5 = 0xffffffff;
    uVar3 = fn_0045a590();
    uVar4 = fn_00482b9c();
    *(undefined4 *)(param_1 + 0x74) = uVar4;
    *(undefined4 *)(param_1 + 0x78) = 1;
    *(undefined1 *)(param_1 + 0x7c) = 1;
    fn_0045a3b0(uVar3,&local_130,0x80);
    fn_0045a5b0();
    goto LAB_00666c3c;
  case 0x1a:
    if (*(char *)(*(int *)(param_1 + 0x9c) + 0x10) != '\x01') {
      fn_00456400();
    }
    iVar6 = fn_004820cc(*(undefined4 *)(param_1 + 0x8c),*(undefined4 *)(param_1 + 0x9c),
                         *(undefined4 *)(param_1 + 0x534),param_1 + 0x538);
    if (iVar6 == 0) goto LAB_006672e0;
    fn_004562e0(*(undefined4 *)(param_1 + 0x9c),0xffffffff);
    iVar6 = *(int *)(param_1 + 0x9c);
    cVar1 = *(char *)(iVar6 + 0x10);
joined_r0x00667178:
    uVar5 = 0;
    if (cVar1 != '\x02') {
      local_128 = *(undefined4 *)(iVar6 + 0x38);
      uStack_124 = *(undefined4 *)(iVar6 + 0x3c);
      local_120 = *(undefined4 *)(iVar6 + 0x40);
      uVar5 = 0xffffffff;
      fn_006688a0(param_1,param_1 + 0x74,&local_128,0);
    }
    goto LAB_00666c3c;
  case 0x1b:
    if (*(char *)(*(int *)(param_1 + 0x9c) + 0x10) != '\x01') {
      fn_00456400();
    }
    iVar6 = fn_004afb08(*(undefined4 *)(param_1 + 0x8c),*(undefined4 *)(param_1 + 0x9c),
                         *(int *)(param_1 + 0x544),*(undefined4 *)(*(int *)(param_1 + 0x544) + 0x18)
                        );
    if (iVar6 != 0) {
      fn_004562e0(*(undefined4 *)(param_1 + 0x9c),0xffffffff);
      iVar6 = *(int *)(param_1 + 0x9c);
      cVar1 = *(char *)(iVar6 + 0x10);
      goto joined_r0x00667178;
    }
    goto LAB_006672e0;
  case 0x1c:
    if (*(char *)(*(int *)(param_1 + 0x9c) + 0x10) != '\x01') {
      fn_00456400();
    }
    local_138 = *(int *)(param_1 + 0x55c);
    iVar6 = fn_004a0c78(*(undefined4 *)(param_1 + 0x8c),*(undefined4 *)(param_1 + 0x9c),
                         (int)*(char *)(param_1 + 0x548),param_1 + 0x54c);
    if (iVar6 == 0) goto LAB_00667210;
    fn_004562e0(*(undefined4 *)(param_1 + 0x9c),0xffffffff);
    iVar6 = *(int *)(param_1 + 0x9c);
    cVar1 = *(char *)(iVar6 + 0x10);
joined_r0x006672ac:
    uVar5 = 0;
    if (cVar1 != '\x02') {
      uVar5 = 0xffffffff;
      local_138 = *(int *)(iVar6 + 0x38);
      local_134 = *(undefined4 *)(iVar6 + 0x3c);
      local_130 = *(undefined **)(iVar6 + 0x40);
      fn_006688a0(param_1,param_1 + 0x74,&local_138,0);
    }
    goto LAB_00666c3c;
  case 0x1d:
    if (*(char *)(*(int *)(param_1 + 0x9c) + 0x10) != '\x01') {
      fn_00456400();
    }
    local_138 = *(int *)(param_1 + 0x574);
    iVar6 = fn_004a0c9c(*(undefined4 *)(param_1 + 0x8c),*(undefined4 *)(param_1 + 0x9c),
                         *(undefined4 *)(param_1 + 0x560),param_1 + 0x564);
    if (iVar6 != 0) {
      fn_004562e0(*(undefined4 *)(param_1 + 0x9c),0xffffffff);
      iVar6 = *(int *)(param_1 + 0x9c);
      cVar1 = *(char *)(iVar6 + 0x10);
      goto joined_r0x006672ac;
    }
LAB_006672e0:
    uVar5 = 0xffffffff;
    uVar3 = fn_0045a590();
    uVar4 = fn_00482b9c();
    *(undefined4 *)(param_1 + 0x74) = uVar4;
    *(undefined4 *)(param_1 + 0x78) = 1;
    *(undefined1 *)(param_1 + 0x7c) = 1;
    fn_0045a3b0(uVar3,&local_128,0x80);
    fn_0045a5b0();
LAB_00666c3c:
    *(undefined4 *)(param_1 + 0x6c) = uVar5;
    goto switchD_00666a78_caseD_0;
  case 0x1f:
    uVar5 = fn_00666848(param_1);
  }
  *(undefined4 *)(param_1 + 0x6c) = uVar5;
switchD_00666a78_caseD_0:
  *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) & 0xfffffffd;
LAB_00667340:
  bVar8 = *(int *)(param_1 + 0x84) != 0;
  bVar2 = 0;
  if (bVar8) {
    bVar2 = *(byte *)(param_1 + 0x4c);
  }
  if (bVar8 && (bVar2 & 1) != 0) {
    iVar6 = fn_001249d0();
    if (iVar6 != 0) {
      uVar7 = *(undefined4 *)(iVar6 + 0xc);
    }
    fn_004bde04(uVar7,0xffffffff,0);
  }
  return 1;
}


