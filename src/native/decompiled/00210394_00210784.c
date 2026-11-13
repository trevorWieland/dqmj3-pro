#include "00210394_00210784.h"



void fn_00210784(int param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  bool bVar10;
  undefined8 uVar11;
  undefined *local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  
  local_34 = 0;
  local_38 = &DAT_0085238c;
  local_28 = 0;
  local_24 = 0;
  local_30 = 0;
  local_2c = 0;
  uVar1 = fn_0014d6cc(&local_34,param_3,1);
  if (((uVar1 & 0x80000000) == 0) &&
     (uVar1 = fn_001560d8(&local_34,param_1 + 0x10), (uVar1 & 0x80000000) == 0)) {
    uVar1 = *(uint *)(param_1 + 0x10);
    iVar5 = *(int *)(param_1 + 0x14);
    if ((int)-(iVar5 + (uint)(uVar1 != 0)) < 0 ==
        (SBORROW4(0,iVar5) != SBORROW4(-iVar5,(uint)(uVar1 != 0)))) goto LAB_00210a2c;
    uVar8 = *(uint *)(param_1 + 0x18);
    iVar9 = *(int *)(param_1 + 0x1c);
    if ((int)(iVar9 - (iVar5 + (uint)(uVar8 < uVar1))) < 0 ==
        (SBORROW4(iVar9,iVar5) != SBORROW4(iVar9 - iVar5,(uint)(uVar8 < uVar1)))) {
LAB_00210878:
      *(undefined1 *)(*(int *)(param_2 + 4) + 1) = 0x9c;
      goto LAB_00210a2c;
    }
    uVar2 = *(uint *)(param_1 + 0x20);
    iVar6 = *(int *)(param_1 + 0x24);
    if (uVar2 == 0 && iVar6 == 0) {
      uVar7 = uVar1 - uVar8;
      uVar2 = *(uint *)(param_1 + 8);
      iVar6 = *(int *)(param_1 + 0xc);
      iVar5 = iVar5 - (iVar9 + (uint)(uVar1 < uVar8));
      *(uint *)(param_1 + 0x20) = uVar7;
      *(int *)(param_1 + 0x24) = iVar5;
      if (uVar2 != 0 || iVar6 != 0) {
        if ((int)(iVar6 - (iVar5 + (uint)(uVar2 < uVar7))) < 0 ==
            (SBORROW4(iVar6,iVar5) != SBORROW4(iVar6 - iVar5,(uint)(uVar2 < uVar7)))) {
          iVar6 = iVar5;
          uVar2 = uVar7;
        }
        *(uint *)(param_1 + 0x20) = uVar2;
        *(int *)(param_1 + 0x24) = iVar6;
      }
    }
    else {
      iVar3 = *(int *)(param_1 + 0xc);
      uVar7 = *(uint *)(param_1 + 8);
      if (uVar7 != 0 || iVar3 != 0) {
        if ((int)(iVar3 - (iVar6 + (uint)(uVar7 < uVar2))) < 0 !=
            (SBORROW4(iVar3,iVar6) != SBORROW4(iVar3 - iVar6,(uint)(uVar7 < uVar2)))) {
          iVar6 = iVar3;
          uVar2 = uVar7;
        }
        *(uint *)(param_1 + 0x20) = uVar2;
        *(int *)(param_1 + 0x24) = iVar6;
      }
      iVar9 = *(int *)(param_1 + 0x24) + iVar9 + (uint)CARRY4(uVar2,uVar8);
      bVar10 = uVar1 < uVar2 + uVar8;
      if ((int)(iVar5 - (iVar9 + (uint)bVar10)) < 0 !=
          (SBORROW4(iVar5,iVar9) != SBORROW4(iVar5 - iVar9,(uint)bVar10))) goto LAB_00210878;
    }
    uVar4 = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x24);
    *(undefined4 *)(param_1 + 8) = uVar4;
    if (*(int *)(param_1 + 4) == 0) {
      uVar11 = fn_001287d4(uVar4,&DAT_00812c8c);
      uVar4 = (undefined4)((ulonglong)uVar11 >> 0x20);
      *(int *)(param_1 + 4) = (int)uVar11;
      *(undefined1 *)(param_1 + 0x28) = 1;
    }
    uVar1 = fn_0015cfa4(&local_34,uVar4,*(undefined4 *)(param_1 + 0x18),
                         *(undefined4 *)(param_1 + 0x1c));
    if ((uVar1 & 0x80000000) == 0) {
      local_20 = 0;
      uVar1 = fn_0014d9ec(&local_34,&local_20,*(undefined4 *)(param_1 + 4),
                           *(undefined4 *)(param_1 + 0x20));
      if ((uVar1 & 0x80000000) == 0) {
        if (local_20 == *(int *)(param_1 + 0x20) && *(int *)(param_1 + 0x24) == local_20 >> 0x1f) {
          **(undefined1 **)(param_2 + 4) = 2;
          fn_00193004(&local_38,0);
          return;
        }
        *(undefined1 *)(*(int *)(param_2 + 4) + 1) = 0xf5;
        fn_002feca8(*(undefined4 *)(param_1 + 4));
        goto LAB_00210a2c;
      }
      uVar8 = (uVar1 & 0x3fc00) >> 10;
      if (((uVar8 == 0x11) && (0x185 < (uVar1 & 0x3ff))) && ((uVar1 & 0x3ff) < 400)) {
LAB_00210960:
        *(undefined1 *)(*(int *)(param_2 + 4) + 1) = 0xf5;
      }
      else if (((uVar8 == 0x11) && (0xdb < (uVar1 & 0x3ff))) && ((uVar1 & 0x3ff) < 0xe6)) {
        *(undefined1 *)(*(int *)(param_2 + 4) + 1) = 0xf6;
      }
      else if (((uVar8 == 0x11) && (uVar1 = uVar1 & 0x3ff, 0xe5 < uVar1)) && (uVar1 < 0x154)) {
        bVar10 = SBORROW4(uVar1,0x118);
        iVar5 = uVar1 - 0x118;
        if (0x117 < uVar1) {
          bVar10 = SBORROW4(0x14e,uVar1);
          iVar5 = 0x14e - uVar1;
        }
        if (iVar5 < 0 != bVar10) goto LAB_00210960;
        *(undefined1 *)(*(int *)(param_2 + 4) + 1) = 0xfc;
      }
      fn_002feca8(*(undefined4 *)(param_1 + 4));
      goto LAB_00210a2c;
    }
  }
  *(undefined1 *)(*(int *)(param_2 + 4) + 1) = 0xf8;
LAB_00210a2c:
  **(undefined1 **)(param_2 + 4) = 2;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  fn_00193004(&local_38);
  return;
}



void fn_00210734(undefined4 *param_1)

{
  *param_1 = &DAT_0081c51c;
  if (param_1[1] != 0) {
    fn_005f0cb8();
    if ((int *)param_1[1] != (int *)0x0) {
      (**(code **)(*(int *)param_1[1] + 4))();
      param_1[1] = 0;
    }
  }
  fn_002feef8(param_1);
  return;
}



void fn_00210704(undefined4 *param_1)

{
  *param_1 = &DAT_0081c4a8;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)((int)param_1 + 0xd) = 1;
  *(undefined1 *)((int)param_1 + 0xe) = 0;
  return;
}



void fn_002106ec(int *param_1)

{
  if (param_1 == (int *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x002106fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x68))();
  return;
}



void fn_002106cc(void)

{
  return;
}



void fn_00210654(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 auStack_1f8 [240];
  undefined1 auStack_108 [244];
  
  uVar2 = *(undefined4 *)(DAT_00897804 + 0xc);
  uVar1 = fn_0028aad0(uVar2,param_3);
  fn_0017821c(auStack_1f8,uVar1,0xf0);
  uVar1 = fn_0028aad0(uVar2,param_4);
  fn_0017821c(auStack_108,uVar1,0xf0);
  fn_00210524(param_1,param_2,auStack_1f8,auStack_108);
  return;
}



void fn_00210524(int param_1,undefined4 param_2,int param_3,int param_4)

{
  short sVar1;
  undefined2 uVar2;
  uint uVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  int local_20;
  
  local_20 = param_4;
  fn_0017821c(param_1,param_2,0xf0);
  uVar6 = 0;
  do {
    uVar3 = uVar6 & 0xff;
    switch(uVar3) {
    case 0:
      sVar4 = *(short *)(param_3 + 0x1e);
switchD_002105a4_caseD_0:
      sVar1 = sVar4;
      sVar4 = *(short *)(param_4 + 0x1e);
      break;
    case 1:
      sVar4 = *(short *)(param_3 + 0x20);
switchD_002105a4_caseD_1:
      sVar1 = sVar4;
      sVar4 = *(short *)(param_4 + 0x20);
      break;
    case 2:
      sVar4 = *(short *)(param_3 + 0x26);
switchD_002105a4_caseD_2:
      sVar1 = sVar4;
      sVar4 = *(short *)(param_4 + 0x26);
      break;
    case 3:
      sVar4 = *(short *)(param_3 + 0x28);
switchD_002105a4_caseD_3:
      sVar1 = sVar4;
      sVar4 = *(short *)(param_4 + 0x28);
      break;
    case 4:
      sVar4 = *(short *)(param_3 + 0x2a);
switchD_002105a4_caseD_4:
      sVar1 = sVar4;
      sVar4 = *(short *)(param_4 + 0x2a);
      break;
    case 5:
      sVar4 = *(short *)(param_3 + 0x2c);
switchD_002105a4_caseD_5:
      sVar1 = sVar4;
      sVar4 = *(short *)(param_4 + 0x2c);
      break;
    default:
      sVar1 = 0;
      sVar4 = 0;
      switch(uVar3) {
      case 0:
        goto switchD_002105a4_caseD_0;
      case 1:
        goto switchD_002105a4_caseD_1;
      case 2:
        goto switchD_002105a4_caseD_2;
      case 3:
        goto switchD_002105a4_caseD_3;
      case 4:
        goto switchD_002105a4_caseD_4;
      case 5:
        goto switchD_002105a4_caseD_5;
      default:
        sVar4 = 0;
      }
    }
    iVar5 = (int)((int)(short)(sVar1 + sVar4) +
                 ((uint)((int)(short)(sVar1 + sVar4) >> 0x1f) >> 0x1e)) >> 2;
    if (iVar5 < 10) {
      iVar5 = 10;
    }
    fn_005fdb24(param_1,uVar3,iVar5);
    uVar6 = uVar6 + 1;
    if (5 < (int)uVar6) {
      local_20 = param_1;
      uVar2 = fn_006c0028(&local_20);
      *(undefined2 *)(param_1 + 0x22) = uVar2;
      uVar2 = fn_006c0114(&local_20);
      *(undefined2 *)(param_1 + 0x24) = uVar2;
      return;
    }
  } while( true );
}



void fn_00210394(undefined1 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  char cVar5;
  int local_20;
  int local_1c;
  
  fn_00301f50(param_1,0x104);
  local_20 = 0;
  local_1c = 0;
  local_20 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),param_2);
  local_1c = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),param_3);
  param_1[0x100] = 0;
  if ((*(byte *)(local_20 + 0x2e) < 10) || (*(byte *)(local_1c + 0x2e) < 10)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  param_1[0x101] = uVar1;
  iVar3 = fn_00154ac8(0x19);
  if (iVar3 != 0) {
    bVar2 = *(char *)(local_1c + 0x2e) + *(char *)(local_20 + 0x2e);
    cVar5 = *(char *)(local_1c + 0x3c) + *(char *)(local_20 + 0x3c);
    if (bVar2 < 0x1f) {
      bVar2 = cVar5 + 1;
    }
    else if (bVar2 < 0x4c) {
      bVar2 = cVar5 + 6;
    }
    else {
      bVar2 = cVar5 + 0xb;
    }
    if (99 < bVar2) {
      uVar4 = 5;
      goto LAB_002104b4;
    }
  }
  uVar4 = 0;
LAB_002104b4:
  fn_005fdf34(param_1,param_2,param_3,&local_20,(int)*(short *)(local_20 + 0x1c),uVar4);
  *(undefined4 *)(param_1 + 0x82) = *(undefined4 *)(local_20 + 0x72);
  *(undefined4 *)(param_1 + 0x86) = *(undefined4 *)(local_20 + 0x76);
  *(undefined4 *)(param_1 + 0x8a) = *(undefined4 *)(local_20 + 0x7a);
  *(undefined4 *)(param_1 + 0x8e) = *(undefined4 *)(local_20 + 0x7e);
  *(undefined2 *)(param_1 + 0x92) = *(undefined2 *)(local_20 + 0x82);
  fn_005fccf4(param_1 + 0x10,&local_20,*param_1,1);
  return;
}


