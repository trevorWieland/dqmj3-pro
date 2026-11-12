#include "0056b8fc_0056d0fc.h"



void fn_0056d0fc(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  undefined1 local_30 [4];
  undefined1 auStack_2c [12];
  
  if ((*(int **)(param_1 + 0xf4) != (int *)0x0) &&
     (uVar1 = (**(code **)(**(int **)(param_1 + 0xf4) + 100))(), -1 < (int)uVar1)) {
    uVar6 = uVar1 & 0xff;
    uVar2 = (**(code **)(**(int **)(param_1 + 200) + 0x2c))();
    if (uVar2 != uVar6) {
      (**(code **)(**(int **)(param_1 + 200) + 0x28))(*(int **)(param_1 + 200),uVar6);
      fn_0056e6ac(param_1,uVar6);
    }
    iVar3 = fn_002b4fbc(*(undefined4 *)(param_1 + 200),uVar1);
    fn_00688ff8();
    fn_0025e7cc(*(undefined4 *)(param_1 + 0xd0),local_30);
    fn_0025e378(*(undefined4 *)(param_1 + 0xd0),iVar3 + 0x3c);
    fn_0056e984(param_1);
  }
  iVar3 = (**(code **)(**(int **)(param_1 + 0xd4) + 0x34))();
  iVar4 = (**(code **)(**(int **)(param_1 + 0xd4) + 0x38))();
  if (iVar3 == 0) {
    if (iVar4 != 0) {
      fn_0056e470(param_1,0);
    }
  }
  else {
    fn_0056e470(param_1,1,0);
  }
  iVar3 = (**(code **)(**(int **)(param_1 + 0xec) + 0x6c))();
  if (-1 < iVar3) {
    iVar3 = fn_0056b8b0(param_1,iVar3 % 4,(int)(iVar3 + ((uint)(iVar3 >> 0x1f) >> 0x1e)) >> 2);
    *(undefined1 *)(iVar3 + 0x2f) = 0;
  }
  iVar3 = (**(code **)(**(int **)(param_1 + 0xec) + 100))();
  if (-1 < iVar3) {
    fn_0025e314(*(undefined4 *)(param_1 + 200),1);
    iVar7 = iVar3 % 4;
    iVar4 = (int)(iVar3 + ((uint)(iVar3 >> 0x1f) >> 0x1e)) >> 2;
    if (*(char *)(param_1 + 0xdc) != '\0') {
      fn_0056e838(param_1,iVar7,iVar4);
    }
    bVar8 = false;
    if ((iVar7 - 1U < 3) &&
       (iVar7 = fn_0056d53c(param_1,*(undefined4 *)(param_1 + 0xa8),iVar7,iVar4), iVar7 != 0)) {
      uVar5 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc));
      fn_0020bbc4(local_30,uVar5);
      iVar7 = fn_006bfe90(auStack_2c);
      bVar8 = 2 < iVar7;
    }
    if (*(char *)(param_1 + 0x125) != '\0') {
      iVar7 = *(int *)(param_1 + 0xb8);
      *(undefined1 *)(iVar7 + 0x7f) = 0;
      fn_0031ef00(iVar7,1,bVar8 ^ 1);
    }
    iVar4 = fn_0056b8b0(param_1,iVar3 % 4,iVar4);
    *(undefined1 *)(iVar4 + 0x2f) = 1;
    fn_00688ff8(*(undefined4 *)(iVar4 + 0x4c));
    fn_0025e7cc(*(undefined4 *)(param_1 + 0xd0),local_30);
    fn_0025e3d4(*(undefined4 *)(param_1 + 0xd0),0);
    fn_0056d5f4(param_1,iVar3);
  }
  iVar3 = (**(code **)(**(int **)(param_1 + 0xf0) + 0x90))();
  if (-1 < iVar3) {
    fn_0056f7d8(param_1);
  }
  uVar1 = (**(code **)(**(int **)(param_1 + 0xf0) + 0x6c))();
  if (-1 < (int)uVar1) {
    if (uVar1 == (uVar1 - ((int)uVar1 >> 0x1f) & 0xfffffffe)) {
      fn_002b20a4(*(undefined4 *)(param_1 + 0xbc),0);
    }
    else {
      fn_002b20a4(*(undefined4 *)(param_1 + 0xc0),0);
    }
  }
  uVar1 = (**(code **)(**(int **)(param_1 + 0xf0) + 100))();
  if (-1 < (int)uVar1) {
    if (uVar1 == (uVar1 - ((int)uVar1 >> 0x1f) & 0xfffffffe)) {
      iVar3 = *(int *)(param_1 + 0xbc);
    }
    else {
      iVar3 = *(int *)(param_1 + 0xc0);
    }
    fn_002b20a4(iVar3,1);
    iVar3 = *(int *)(iVar3 + 0x1c);
    fn_00688ff8(iVar3);
    fn_0025e7cc(*(undefined4 *)(param_1 + 0xd0),local_30);
    fn_0025e378(*(undefined4 *)(param_1 + 0xd0),iVar3 + 0x3c);
  }
  return;
}



void fn_0056c080(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  uint uVar4;
  bool bVar5;
  
  iVar1 = fn_00154ac8(0x85);
  bVar5 = iVar1 == 0;
  if (bVar5) {
    fn_00144834(0x85,1);
  }
  bVar3 = false;
  iVar1 = fn_00154ac8(0x3f);
  if ((iVar1 != 0) && (iVar1 = fn_00154ac8(0x9c), iVar1 == 0)) {
    fn_00144834(0x9c,1);
    bVar3 = true;
  }
  if (bVar5 || bVar3) {
    if (bVar5) {
      uVar4 = 0;
      do {
        uVar2 = fn_0022f584((&DAT_008945d8)[uVar4],0);
        fn_0036c5f4(*(undefined4 *)(param_1 + 0x5c),uVar2,1,0,1,1,0,0,1);
        uVar4 = uVar4 + 1;
      } while (uVar4 < 3);
    }
    else {
      uVar2 = fn_0022f584(DAT_008945bc,0);
      fn_0036c5f4(*(undefined4 *)(param_1 + 0x5c),uVar2,1,0,1,1,0,0,1);
    }
    fn_00689bd0(param_1,0x48,0);
    return;
  }
  return;
}



void fn_0056c02c(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0xec) + 0x14))();
  if (*(int **)(param_1 + 0xf4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xf4) + 0x14))();
  }
  (**(code **)(**(int **)(param_1 + 0xd4) + 0x14))();
                    /* WARNING: Could not recover jumptable at 0x0056c07c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0xf0) + 0x14))();
  return;
}



undefined4 fn_0056bdac(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  int local_2c [3];
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [4];
  
  iVar1 = (**(code **)(*param_2 + 0xb0))(param_2);
  if (iVar1 < 0) {
    return 0;
  }
  if (*(char *)(param_1 + 0x125) == '\0') {
    return 0;
  }
  local_2c[0] = 0;
  local_2c[1] = 0;
  (**(code **)(**(int **)(param_1 + 0xec) + 0x30))(*(int **)(param_1 + 0xec),local_2c,local_2c + 1);
  if (2 < local_2c[0] - 1U) {
    return 0;
  }
  iVar1 = fn_0056d53c(param_1,*(undefined4 *)(param_1 + 0xa8),iVar1 % 4,
                       (int)(iVar1 + ((uint)(iVar1 >> 0x1f) >> 0x1e)) >> 2);
  if (iVar1 == 0) {
LAB_0056bf54:
    fn_0068ab44(param_1,0x100094b);
  }
  else {
    uVar2 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),iVar1);
    fn_0020bbc4(auStack_20,uVar2);
    uVar2 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),iVar1);
    fn_0020bbc4(&local_40,uVar2);
    iVar3 = fn_00154ac8(0x19);
    if (((iVar3 == 0) && (iVar3 = fn_006bf34c(&local_3c), iVar3 != 0)) ||
       ((iVar3 = fn_00154ac8(0x463), iVar3 == 0 && (iVar3 = fn_006bf184(&local_3c), iVar3 != 0))))
    {
      uVar2 = fn_0022f584((char *)&DAT_0056bfd8,0);
      local_38 = 0;
      local_3c = 1;
      local_34 = 0;
      uStack_30 = 1;
      local_40 = 1;
      fn_0036c5f4(*(undefined4 *)(param_1 + 0x5c),uVar2,1,0);
    }
    else {
      iVar3 = fn_006bfe90(auStack_1c);
      if (2 < iVar3) {
        if (*(int *)(param_1 + 0x11c) == iVar1) {
          iVar1 = 0;
        }
        *(int *)(param_1 + 0x11c) = iVar1;
        fn_0056e984(param_1);
        goto LAB_0056bf54;
      }
      uVar2 = fn_0022f584((char *)&DAT_0056c004,0);
      local_38 = 0;
      local_3c = 1;
      local_34 = 0;
      uStack_30 = 1;
      local_40 = 1;
      fn_0036c5f4(*(undefined4 *)(param_1 + 0x5c),uVar2,1,0);
    }
    fn_00689bd0(param_1,0x48,0);
  }
  return 0;
}



undefined1 * fn_0056bb7c(int param_1,int param_2)

{
  int iVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  char cVar8;
  int iVar9;
  undefined4 local_30;
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  
  iVar7 = param_2 % 4;
  *(int *)(param_1 + 0x100) = param_2;
  iVar1 = (int)(param_2 + ((uint)(param_2 >> 0x1f) >> 0x1e)) >> 2;
  *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(param_1 + 0xa8);
  uVar3 = fn_0056d53c(param_1,*(undefined4 *)(param_1 + 0xa8),iVar7,iVar1);
  local_30 = 0;
  fn_0056d598(param_1,*(undefined4 *)(param_1 + 0xa8),iVar7,iVar1);
  *(undefined4 *)(param_1 + 0x108) = uVar3;
  uVar4 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),uVar3);
  fn_0020bbc4(&local_30,uVar4);
  uVar4 = fn_006bfe90(auStack_2c);
  cVar8 = '\x03';
  switch(uVar4) {
  case 0:
  case 1:
    cVar8 = '\x01';
    break;
  case 2:
    cVar8 = '\x02';
  }
  *(char *)(param_1 + 0x10c) = cVar8;
  if (cVar8 == '\x03') {
    *(byte *)(*(int *)(param_1 + 0x7c) + 0x44) =
         *(byte *)(param_1 + 0x124) | *(byte *)(*(int *)(param_1 + 0x7c) + 0x44) & 0xfe;
  }
  iVar5 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),uVar3);
  fn_0020bbc4(auStack_28,iVar5);
  uVar3 = fn_006bfda8(auStack_24);
  fn_002b427c(*(undefined4 *)(param_1 + 0xc4),uVar3);
  uVar3 = fn_006bfe90(auStack_24);
  fn_002b4348(*(undefined4 *)(param_1 + 0xc4),uVar3);
  iVar9 = *(int *)(param_1 + 0xc4);
  uVar2 = fn_006bf34c(auStack_24);
  *(undefined1 *)(iVar9 + 0x3d) = uVar2;
  iVar9 = *(int *)(param_1 + 0xc4);
  uVar2 = fn_006bf184(auStack_24);
  *(undefined1 *)(iVar9 + 0x43) = uVar2;
  iVar9 = *(int *)(param_1 + 0xc4);
  uVar2 = fn_001f84ac(iVar5 + 0x72);
  *(undefined1 *)(iVar9 + 0x3f) = uVar2;
  (**(code **)(**(int **)(param_1 + 0xc4) + 0x20))(*(int **)(param_1 + 0xc4),1);
  *(undefined1 *)(*(int *)(param_1 + 0xc4) + 0x1d) = 1;
  fn_002b325c(*(undefined4 *)(param_1 + 0xc4),3);
  fn_0025e3d4(*(undefined4 *)(param_1 + 0xd0),0);
  piVar6 = (int *)fn_0056b8b0(param_1,iVar7,iVar1);
  (**(code **)(*piVar6 + 0x20))(piVar6,0);
  *(undefined1 *)(*(int *)(param_1 + 0xec) + 0xd4) = 0;
  fn_00660114(*(undefined4 *)(param_1 + 0xec));
  fn_0068b14c(*(undefined4 *)(param_1 + 0xbc),0);
  fn_0068b14c(*(undefined4 *)(param_1 + 0xc0),0);
  fn_0068ab44(param_1,0x100094b);
  return auStack_28;
}



void fn_0056b8fc(int param_1)

{
  if (*(int **)(param_1 + 0xf4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xf4) + 4))();
    *(undefined4 *)(param_1 + 0xf4) = 0;
  }
  if (*(int **)(param_1 + 0xf0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xf0) + 4))();
    *(undefined4 *)(param_1 + 0xf0) = 0;
  }
  if (*(int **)(param_1 + 0xec) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xec) + 4))();
    *(undefined4 *)(param_1 + 0xec) = 0;
  }
  (**(code **)(**(int **)(param_1 + 0xd0) + 0x14))();
  if (*(int **)(param_1 + 0xd0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xd0) + 4))();
    *(undefined4 *)(param_1 + 0xd0) = 0;
  }
  (**(code **)(**(int **)(param_1 + 200) + 0x18))();
  if (*(int **)(param_1 + 200) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 200) + 4))();
    *(undefined4 *)(param_1 + 200) = 0;
  }
  (**(code **)(**(int **)(param_1 + 0xc4) + 0x18))();
  if (*(int **)(param_1 + 0xc4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xc4) + 4))();
    *(undefined4 *)(param_1 + 0xc4) = 0;
  }
  (**(code **)(**(int **)(param_1 + 0xc0) + 0x18))();
  if (*(int **)(param_1 + 0xc0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xc0) + 4))();
    *(undefined4 *)(param_1 + 0xc0) = 0;
  }
  (**(code **)(**(int **)(param_1 + 0xbc) + 0x18))();
  if (*(int **)(param_1 + 0xbc) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xbc) + 4))();
    *(undefined4 *)(param_1 + 0xbc) = 0;
  }
  (**(code **)(**(int **)(param_1 + 0xb8) + 0x18))();
  if (*(int **)(param_1 + 0xb8) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xb8) + 4))();
    *(undefined4 *)(param_1 + 0xb8) = 0;
  }
  if (*(int **)(param_1 + 0xd4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xd4) + 4))();
    *(undefined4 *)(param_1 + 0xd4) = 0;
  }
  (**(code **)(**(int **)(param_1 + 0xb4) + 0x18))();
  if (*(int **)(param_1 + 0xb4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xb4) + 4))();
    *(undefined4 *)(param_1 + 0xb4) = 0;
  }
  (**(code **)(**(int **)(param_1 + 0xcc) + 0x18))();
  if (*(int **)(param_1 + 0xcc) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xcc) + 4))();
    *(undefined4 *)(param_1 + 0xcc) = 0;
  }
  (**(code **)(**(int **)(param_1 + 0xb0) + 0x18))();
  if (*(int **)(param_1 + 0xb0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xb0) + 4))();
    *(undefined4 *)(param_1 + 0xb0) = 0;
  }
  (**(code **)(**(int **)(param_1 + 0xac) + 0x18))();
  if (*(int **)(param_1 + 0xac) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xac) + 4))();
    *(undefined4 *)(param_1 + 0xac) = 0;
  }
  fn_0016a43c(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x70));
                    /* WARNING: Subroutine does not return */
  fn_001482f4(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x6c));
}


