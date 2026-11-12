#include "002bf534_002bfbb4.h"



void fn_002bfbb4(int param_1,int *param_2,int *param_3,int *param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_r1;
  int *piVar4;
  int iVar5;
  bool bVar6;
  undefined8 uVar7;
  int local_30 [2];
  int local_28 [2];
  
  iVar5 = param_3[8];
  uVar7 = fn_00300f74(*param_2,param_4[8]);
  iVar2 = (**(code **)(*param_4 + 0x14))(param_4);
  uVar3 = (**(code **)(*param_3 + 0x14))(param_3);
  fn_00300f74((int)((ulonglong)uVar7 >> 0x20) * iVar2 + (int)uVar7,uVar3);
  if (*(char *)(param_1 + 0xc0) == '\x03') {
    *param_2 = extraout_r1 * iVar5;
    if (*(int *)(param_1 + 100) == 5) {
      *param_2 = 0;
    }
  }
  else if ((*(char *)(param_1 + 0xc0) == '\x04') &&
          (*param_2 = (extraout_r1 + 1) * iVar5 + -1, *(int *)(param_1 + 100) == 5)) {
    *param_2 = 1;
  }
  cVar1 = *(char *)(param_1 + 0x7c);
  bVar6 = cVar1 == '\x01';
  if (bVar6) {
    cVar1 = (char)param_3[9];
  }
  if (bVar6 && cVar1 == '\0') {
    cVar1 = *(char *)(param_1 + 0x78);
    iVar2 = (**(code **)(*param_3 + 0x14))(param_3);
    if (iVar2 * param_3[8] <= *param_2 + (int)cVar1) {
      local_28[0] = *param_2 - (int)cVar1;
      local_30[0] = iVar2 * param_3[8] + -1;
      *param_2 = local_28[0];
      local_28[1] = 0;
      if (local_30[0] < 0) {
                    /* WARNING: Subroutine does not return */
        fn_00146590();
      }
      if (local_28[0] < 0) {
        piVar4 = local_28 + 1;
      }
      else {
        piVar4 = local_28;
      }
      if (local_30[0] < *piVar4) {
        piVar4 = local_30;
      }
      *param_2 = *piVar4;
    }
  }
  return;
}



int fn_002bfb90(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = fn_00300f74(param_2 + 0xb,0xc);
  iVar1 = iVar1 + 1;
  if (iVar1 < 1) {
    iVar1 = 1;
  }
  return iVar1;
}



void fn_002bf8f4(int param_1,int *param_2)

{
  undefined1 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  uint uVar12;
  bool bVar13;
  undefined1 auStack_50 [4];
  undefined1 auStack_4c [4];
  int local_48 [2];
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  undefined4 local_28;
  undefined1 auStack_24 [8];
  
  piVar2 = (int *)fn_002c11d0(param_1,*param_2,0);
  iVar3 = (**(code **)(*piVar2 + 0x18))(piVar2);
  *(int *)(param_1 + 0x68) = *param_2;
  *(int *)(param_1 + 0x6c) = param_2[1];
  *(int *)(param_1 + 0x70) = param_2[2];
  iVar4 = param_2[3];
  *(int *)(param_1 + 0x74) = iVar4;
  if ((iVar3 == 0) && (iVar4 != 0)) {
    uVar1 = fn_0068b2a8();
    *(undefined1 *)(param_1 + 0x78) = uVar1;
  }
  fn_002e3ef4(piVar2,*(undefined4 *)(param_1 + 0x6c),*(undefined4 *)(param_1 + 0x70),0);
  iVar3 = (**(code **)(*piVar2 + 0x18))(piVar2);
  if (iVar3 == 0) {
    iVar3 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),param_2[3]);
    fn_0020bbc4(&local_28,iVar3);
    uVar5 = fn_006bfda8(auStack_24);
    fn_002b427c(*(undefined4 *)(param_1 + 0x94),uVar5);
    uVar5 = fn_006bfe90(auStack_24);
    fn_002b4348(*(undefined4 *)(param_1 + 0x94),uVar5);
    iVar4 = *(int *)(param_1 + 0x94);
    uVar1 = fn_006bf34c(auStack_24);
    *(undefined1 *)(iVar4 + 0x3d) = uVar1;
    iVar4 = *(int *)(param_1 + 0x94);
    uVar1 = fn_001f84ac(iVar3 + 0x72);
    *(undefined1 *)(iVar4 + 0x3f) = uVar1;
    iVar3 = *(int *)(param_1 + 0x94);
    uVar1 = fn_006bf184(auStack_24);
    *(undefined1 *)(iVar3 + 0x43) = uVar1;
    if (*(char *)(param_1 + 200) == '\x01') {
      *(undefined1 *)(*(int *)(param_1 + 0x94) + 0x1d) = 1;
      fn_002b325c(*(undefined4 *)(param_1 + 0x94),3);
      uVar11 = *(undefined4 *)(param_1 + 0x98);
      uVar5 = 0;
    }
    else {
      uVar5 = fn_006bfe90(auStack_24);
      uVar11 = *(undefined4 *)(param_1 + 0x98);
    }
    fn_0025e868(uVar11,uVar5);
  }
  else {
    uVar5 = fn_00259f5c(param_2[3]);
    fn_002b427c(*(undefined4 *)(param_1 + 0x94),uVar5);
    fn_002b4348(*(undefined4 *)(param_1 + 0x94),0);
    *(undefined1 *)(*(int *)(param_1 + 0x94) + 0x3d) = 0;
    *(undefined1 *)(*(int *)(param_1 + 0x94) + 0x3f) = 0;
    *(undefined1 *)(*(int *)(param_1 + 0x94) + 0x43) = 0;
    fn_0025e868(*(undefined4 *)(param_1 + 0x98));
  }
  (**(code **)(**(int **)(param_1 + 0x94) + 0x20))(*(int **)(param_1 + 0x94),1);
  piVar6 = (int *)(**(code **)(*piVar2 + 0xc))(piVar2,param_2[2]);
  (**(code **)(*piVar6 + 0x20))(piVar6,0);
  iVar3 = 0;
  do {
    iVar4 = fn_002c11d0(param_1,iVar3,0);
    if (iVar4 != 0) {
      fn_002e40bc(iVar4,0);
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 6);
  iVar3 = param_2[4];
  iVar4 = 0;
  do {
    iVar7 = fn_002c11d0(param_1,iVar4,0);
    if (iVar7 != 0) {
      fn_002e3f94(iVar7,(int)(char)iVar3);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 6);
  fn_002e3e74(piVar2,0xffffffff);
  if (*(char *)(param_1 + 200) != '\x01') {
    return;
  }
  local_28 = 0;
  uVar5 = fn_002c11d0(param_1,5,&local_28);
  local_48[0] = fn_002e3e9c(uVar5,0);
  local_48[1] = fn_002e3e9c(uVar5,0,1);
  if (*param_2 == 4) {
    uVar12 = 0xf;
    iVar3 = 0;
    if (local_48[0] != 0) {
      iVar3 = local_48[1];
    }
    if (local_48[0] != 0 && iVar3 != 0) {
      uVar5 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),param_2[3]);
      fn_0020bbc4(auStack_40,uVar5);
      uVar5 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),local_48[0]);
      fn_0020bbc4(auStack_38,uVar5);
      uVar5 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),local_48[1]);
      fn_0020bbc4(auStack_30,uVar5);
      iVar3 = fn_006bfe90(auStack_2c);
      iVar4 = *(int *)(&DAT_007c6aec + iVar3 * 4);
      iVar3 = fn_006bfe90(auStack_3c);
      if (4 < *(int *)(&DAT_007c6aec + iVar3 * 4) + iVar4) {
        uVar12 = fn_006bfe90(auStack_34);
        uVar12 = ~(1 << (uVar12 & 0xff)) & 0xf;
      }
      iVar3 = fn_006bfe90(auStack_34);
      iVar4 = *(int *)(&DAT_007c6aec + iVar3 * 4);
      iVar3 = fn_006bfe90(auStack_3c);
      if (4 < *(int *)(&DAT_007c6aec + iVar3 * 4) + iVar4) {
        uVar8 = fn_006bfe90(auStack_2c);
        uVar12 = uVar12 & ~(1 << (uVar8 & 0xff));
      }
      iVar3 = fn_006bfe90(auStack_3c);
      if (iVar3 == 4) {
        uVar8 = fn_006bfe90(auStack_34);
        uVar9 = fn_006bfe90(auStack_2c);
        uVar12 = uVar12 & ~(1 << (uVar8 & 0xff)) & ~(1 << (uVar9 & 0xff));
      }
    }
    *(uint *)(*(int *)(param_1 + 0xbc) + 0x34) = uVar12;
    puVar10 = (undefined4 *)fn_002c11d0(param_1,5,0);
    (**(code **)*puVar10)(puVar10,0);
  }
  if (*param_2 == 5) {
    iVar4 = param_2[2];
    uVar12 = 0xf;
    local_48[iVar4] = param_2[3];
    iVar3 = 0;
    if (local_48[0] != 0) {
      iVar3 = local_48[1];
    }
    if (local_48[0] != 0 && iVar3 != 0) {
      if (iVar4 == 0) {
        uVar5 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc));
        fn_0020bbc4(auStack_50,uVar5);
        iVar3 = fn_006bfe90(auStack_4c);
        iVar3 = *(int *)(&DAT_007c6aec + iVar3 * 4);
      }
      else {
        uVar5 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),local_48[0]);
        fn_0020bbc4(auStack_50,uVar5);
        iVar3 = fn_006bfe90(auStack_4c);
        iVar3 = *(int *)(&DAT_007c6aec + iVar3 * 4);
      }
      iVar4 = -iVar3 + 4;
      uVar8 = 3 - iVar4;
      if (0 < (int)uVar8) {
        bVar13 = (uVar8 & 1) != 0;
        if (bVar13) {
          uVar12 = ~(1 << (-iVar3 + 5U & 0xff)) & 0xf;
        }
        uVar9 = (uint)bVar13;
        for (iVar3 = (int)uVar8 >> 1; iVar3 != 0; iVar3 = iVar3 + -1) {
          iVar7 = iVar4 + uVar9;
          uVar12 = uVar12 & ~(1 << (iVar7 + 1U & 0xff)) & ~(1 << (iVar7 + 2U & 0xff));
          uVar9 = uVar9 + 2;
        }
      }
    }
    *(uint *)(*(int *)(param_1 + 0xb0) + 0x34) = uVar12;
    puVar10 = (undefined4 *)fn_002c11d0(param_1,4,0);
    (**(code **)*puVar10)(puVar10,0);
  }
  return;
}



void fn_002bf860(int param_1,int param_2,int param_3)

{
  int extraout_r1;
  int iVar1;
  undefined1 local_20 [16];
  
  *(undefined1 *)(param_2 + 0x2f) = 1;
  fn_00688ff8(*(undefined4 *)(param_2 + 0x48));
  fn_0025e7cc(*(undefined4 *)(param_1 + 0x98),local_20);
  iVar1 = extraout_r1;
  if (param_3 == 0) {
    iVar1 = (int)*(char *)(param_2 + 0x1b);
  }
  if (param_3 != 0) {
    iVar1 = 0;
  }
  fn_0025e3d4(*(undefined4 *)(param_1 + 0x98),iVar1);
  return;
}



undefined4 fn_002bf534(int *param_1,int *param_2)

{
  char cVar1;
  bool bVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  
  puVar3 = (undefined4 *)fn_002c11d0(param_1,param_1[0x1a],0);
  puVar4 = (undefined4 *)fn_002c11d0(param_1,*param_2,0);
  iVar5 = fn_002e3d2c(puVar3);
  if (((iVar5 == 0) || (param_1[0x1a] == *param_2)) ||
     (iVar5 = (**(code **)(*param_1 + 0x18c))(param_1), iVar5 == 0)) {
    bVar2 = false;
    (**(code **)(*param_1 + 0x128))(param_1);
    iVar5 = param_1[0x1b];
    if (param_1[0x1c] != param_2[2] || (param_1[0x1a] != *param_2 || iVar5 != param_2[1])) {
      cVar1 = '\0';
      if (*(char *)(puVar3 + 9) != '\0') {
        cVar1 = *(char *)(puVar4 + 9);
      }
      if (*(char *)(puVar3 + 9) == '\0' || cVar1 == '\0') {
        iVar6 = puVar3[8];
        if (iVar6 == 1) {
          iVar5 = puVar4[8];
        }
        if (iVar6 == 1 && iVar5 == 1) {
          fn_0036ef48(param_1[0x23]);
          fn_002bfea4(param_1,1,puVar3);
          if (param_1[0x1a] == *param_2) {
            fn_0036fbf0(param_1[0x23],param_1[0x1c],param_2[2]);
            bVar2 = true;
            iVar5 = 0;
            do {
              fn_0036fb68(param_1[0x23],iVar5);
              fn_002e3ef4(puVar3,0,iVar5);
              iVar5 = iVar5 + 1;
            } while (iVar5 < 4);
          }
          else {
            fn_002bfea4(param_1,0,puVar4);
            fn_0036ef10(param_1[0x23],param_1[0x1c],param_2[2]);
            iVar5 = 0;
            do {
              fn_0036fb68(param_1[0x23],iVar5);
              fn_002e3ef4(puVar3,0,iVar5);
              fn_0036ee88(param_1[0x23],iVar5);
              fn_002e3ef4(puVar4,0,iVar5);
              iVar5 = iVar5 + 1;
            } while (iVar5 < 4);
          }
        }
        else if ((((iVar6 == 1) || (puVar4[8] != 1)) ||
                 (iVar5 = fn_002c1604(param_1,puVar4,puVar3,param_2,param_1 + 0x1a), iVar5 == 0))
                && (((puVar3[8] != 1 || (puVar4[8] == 1)) ||
                    (iVar5 = fn_002c1604(param_1,puVar3,puVar4,param_1 + 0x1a,param_2), iVar5 == 0)
                    ))) {
          fn_002c12b4(param_1,puVar3,puVar4,param_1 + 0x1a,param_2);
        }
      }
      else {
        fn_002e3ef4(puVar3,iVar5,param_1[0x1c],param_2[3]);
        fn_002e3ef4(puVar4,param_2[1],param_2[2],param_1[0x1d]);
      }
      (**(code **)*puVar3)(puVar3,0);
      if (!bVar2) {
        (**(code **)*puVar4)(puVar4,0);
      }
      return 1;
    }
  }
  else {
    (**(code **)(*param_1 + 0x128))(param_1);
    fn_0068ab44(param_1,0x100094c);
  }
  return 0;
}


