#include "002be8c0_002bf4f4.h"



void fn_002bf4f4(int param_1)

{
  int iVar1;
  
  iVar1 = fn_002bff84(param_1 + 8);
  iVar1 = fn_002bff84(iVar1 + 0x14);
  iVar1 = fn_002bff84(iVar1 + 0x14);
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined4 *)(iVar1 + 0x18) = 1;
  *(undefined4 *)(iVar1 + 0x1c) = 0;
  *(undefined1 *)(iVar1 + 0x20) = 1;
  *(undefined1 *)(iVar1 + 0x21) = 0;
  *(undefined1 *)(iVar1 + 0x22) = 0;
  return;
}



void fn_002bf2cc(int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  
  uVar5 = 0;
  iVar3 = param_1[0x27];
  if (iVar3 != 0) {
    fn_002be8c0(param_1,*(undefined4 *)(iVar3 + 0x10),iVar3,0,3);
  }
  uVar4 = 0;
  if (param_1[0x29] - param_1[0x28] >> 2 != 0) {
    do {
      uVar1 = param_1[0x29] - param_1[0x28] >> 2;
      if (uVar1 <= uVar4) {
        fn_002ff628(9,&DAT_008c7655,&DAT_008c7655,uVar4,uVar1);
      }
      iVar3 = *(int *)(param_1[0x28] + uVar4 * 4);
      if (uVar4 == 0) {
        uVar2 = 1;
      }
      else {
        uVar2 = 2;
      }
      fn_002be8c0(param_1,*(undefined4 *)(iVar3 + 0x10),iVar3,0,uVar2);
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uint)(param_1[0x29] - param_1[0x28] >> 2));
  }
  iVar3 = param_1[0x2b];
  if (iVar3 != 0) {
    fn_002be8c0(param_1,*(undefined4 *)(iVar3 + 0x10),iVar3,0,4);
  }
  iVar3 = param_1[0x2c];
  if (iVar3 != 0) {
    uVar5 = *(undefined4 *)(iVar3 + 0x28);
    fn_002be8c0(param_1,*(undefined4 *)(iVar3 + 0x10),iVar3,uVar5,4);
  }
  iVar3 = param_1[0x2d];
  if (iVar3 != 0) {
    uVar5 = *(undefined4 *)(iVar3 + 0x28);
    fn_002be8c0(param_1,*(undefined4 *)(iVar3 + 0x10),iVar3,uVar5,4);
  }
  iVar3 = param_1[0x2e];
  if (iVar3 != 0) {
    fn_002be8c0(param_1,*(undefined4 *)(iVar3 + 0x10),iVar3,uVar5,4);
  }
  iVar3 = param_1[0x2f];
  if (iVar3 != 0) {
    fn_002be8c0(param_1,*(undefined4 *)(iVar3 + 0x10),iVar3,0,5);
  }
  if ((char)param_1[0x1f] == '\x02') {
    iVar3 = fn_002c11d0(param_1,param_1[0x1a],0);
    iVar3 = (**(code **)(**(int **)(iVar3 + 0x10) + 0x88))();
    if (-1 < iVar3) {
      *(undefined1 *)(param_1 + 0x1f) = 0;
      (**(code **)(*param_1 + 0x128))(param_1);
      (**(code **)(*param_1 + 0x110))(param_1,param_1[0x1a],param_1[0x1c],1);
      fn_0068ab44(param_1,0x1000959);
      param_1[0x1a] = 0;
      param_1[0x1b] = 0;
      param_1[0x1c] = -1;
      param_1[0x1d] = 0;
      *(undefined1 *)(param_1 + 0x1e) = 0;
      if ((char)param_1[0x32] == '\x01') {
        fn_002c1a7c(param_1,0);
        return;
      }
    }
  }
  return;
}



void fn_002be8c0(int *param_1,int *param_2,int *param_3,undefined4 param_4,int param_5)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  undefined4 local_34;
  undefined1 local_30;
  int local_2c;
  
  if (param_3 == (int *)0x0 || param_2 == (int *)0x0) {
    return;
  }
  local_40 = 0;
  local_3c = 0;
  local_38 = -1;
  local_34 = 0;
  local_30 = 0;
  if ((char)param_1[0x1f] == '\x02') {
    piVar2 = (int *)fn_002c11d0(param_1,param_1[0x1a],0);
    iVar4 = (**(code **)(*(int *)piVar2[4] + 0x88))();
    if ((-1 < iVar4) && (local_2c = (**(code **)(*param_2 + 0x4c))(param_2), -1 < local_2c)) {
      (**(code **)(*piVar2 + 0xc))(piVar2,param_1[0x1c]);
      uVar5 = (**(code **)(*param_3 + 0x18))(param_3);
      fn_002c075c(&local_40,param_3,param_4,local_2c,param_5,uVar5);
      if ((char)param_1[0x32] == '\0') {
        iVar4 = 0;
      }
      else {
        iVar4 = fn_002c18f8(param_1,&local_40,param_1[0x1d]);
      }
      iVar7 = (**(code **)(*param_1 + 0x17c))(param_1,param_1 + 0x1a,&local_40);
      if (iVar7 == 0) {
        if (((int)(char)param_1[0x32] & iVar4 - 1U) == 0) {
          *(undefined1 *)(param_1 + 0x1f) = 0;
          iVar4 = (**(code **)(*param_1 + 0x16c))(param_1,&local_40);
          if (iVar4 != 0) {
            (**(code **)(*param_1 + 0x194))(param_1,&local_40);
          }
          fn_0068ab44(param_1,0x1000959);
          (**(code **)(*param_1 + 0x15c))(param_1,param_1[0x1c],0,param_1[0x1a]);
          (**(code **)(*param_1 + 0x110))(param_1,local_40,local_38,1,0);
          param_1[0x31] = local_38;
          (**(code **)(*param_1 + 0x188))(param_1);
          param_1[0x1a] = 0;
          param_1[0x1b] = 0;
          param_1[0x1c] = -1;
          param_1[0x1d] = 0;
          *(undefined1 *)(param_1 + 0x1e) = 0;
          if ((char)param_1[0x32] == '\x01') {
            fn_002c1a7c(param_1,param_5 == 5);
          }
        }
      }
      else {
        (**(code **)(*param_1 + 0x180))(param_1);
      }
    }
    goto LAB_002bf280;
  }
  if (((char)param_1[0x1f] == '\0') && (iVar4 = (**(code **)(*param_2 + 0x80))(param_2), -1 < iVar4)
     ) {
    iVar4 = fn_006a833c(param_2,iVar4);
    iVar7 = fn_002e3e9c(param_3,param_4,iVar4);
    if ((char)param_1[0x32] == '\x01') {
      if (param_5 == 5 && iVar4 == 2) {
        return;
      }
      iVar3 = (**(code **)(*param_3 + 0xc))(param_3,iVar4);
      if (*(char *)(iVar3 + 0x33) == '\0') {
        return;
      }
    }
    if (iVar7 != 0) {
      uVar5 = (**(code **)(*param_3 + 0x18))(param_3);
      fn_002c075c(&local_40,param_3,param_4,iVar4,param_5,uVar5);
      *(undefined1 *)(param_1 + 0x1f) = 2;
      (**(code **)(*param_1 + 0x110))(param_1,local_40,local_38,1,0);
      (**(code **)(*param_1 + 0x124))(param_1,&local_40);
      param_1[0x31] = local_38;
      fn_0068ab44(param_1,0x100094b);
      return;
    }
  }
  iVar4 = (**(code **)(*param_2 + 0xa0))(param_2);
  if (-1 < iVar4) {
    if ((char)param_1[0x1f] == '\0') {
      iVar4 = fn_006a833c(param_2,iVar4);
    }
    uVar5 = (**(code **)(*param_3 + 0x18))(param_3);
    fn_002c075c(&local_40,param_3,param_4,iVar4,param_1[0x19],uVar5);
    (**(code **)(*param_1 + 0x130))(param_1,&local_40);
    goto LAB_002bf280;
  }
  iVar4 = (**(code **)(*param_2 + 0xa8))(param_2);
  if (-1 < iVar4) {
    uVar5 = fn_006a833c(param_2,iVar4);
    uVar6 = (**(code **)(*param_3 + 0x18))(param_3);
    fn_002c075c(&local_40,param_3,param_4,uVar5,param_1[0x19],uVar6);
    (**(code **)(*param_1 + 0x134))(param_1,&local_40);
    goto LAB_002bf280;
  }
  iVar4 = (**(code **)(*param_2 + 0xb8))(param_2);
  if (-1 < iVar4) {
    uVar5 = fn_006a833c(param_2,iVar4);
    uVar6 = (**(code **)(*param_3 + 0x18))(param_3);
    fn_002c075c(&local_40,param_3,param_4,uVar5,param_1[0x19],uVar6);
    (**(code **)(*param_1 + 0x13c))(param_1,&local_40);
    goto LAB_002bf280;
  }
  iVar4 = (**(code **)(*param_2 + 0xb0))(param_2);
  if (-1 < iVar4) {
    if ((char)param_1[0x1f] == '\0') {
      uVar5 = fn_006a833c(param_2,iVar4);
      uVar6 = (**(code **)(*param_3 + 0x18))(param_3);
      fn_002c075c(&local_40,param_3,param_4,uVar5,param_1[0x19],uVar6);
      (**(code **)(*param_1 + 0x138))(param_1,&local_40);
    }
    goto LAB_002bf280;
  }
  iVar4 = (**(code **)(*param_2 + 0xc0))(param_2);
  if (-1 < iVar4) {
    uVar5 = fn_006a833c(param_2,iVar4);
    uVar6 = (**(code **)(*param_3 + 0x18))(param_3);
    fn_002c075c(&local_40,param_3,param_4,uVar5,param_1[0x19],uVar6);
    (**(code **)(*param_1 + 0x140))(param_1,&local_40);
    goto LAB_002bf280;
  }
  iVar4 = (**(code **)(*param_2 + 0x44))(param_2);
  if (iVar4 == 0) {
    iVar4 = (**(code **)(*param_2 + 0x6c))(param_2);
    iVar7 = (**(code **)(*param_2 + 100))(param_2);
    bVar9 = iVar4 == 0;
    if (-1 < iVar4) {
      bVar9 = param_1[0x19] == param_5;
    }
    if (bVar9) {
      uVar5 = fn_006a833c(param_2);
      (**(code **)(*param_1 + 0x15c))(param_1,uVar5,0,param_1[0x19]);
    }
    if (-1 < iVar7) {
      if (param_1[0x19] == param_5) {
        if ((char)param_1[0x1f] == '\0') {
          iVar4 = fn_006a833c(param_2,iVar7);
          iVar7 = (**(code **)(*param_2 + 0x3c))(param_2);
          if ((((iVar7 == 0) && (iVar7 = (**(code **)(*param_2 + 0x40))(param_2), iVar7 == 0)) &&
              (iVar7 = (**(code **)(*param_2 + 0x38))(param_2), iVar7 == 0)) &&
             (iVar7 = (**(code **)(*param_2 + 0x34))(param_2), iVar7 == 0)) {
            cVar1 = *(char *)((int)param_2 + 0xe5);
            bVar9 = cVar1 == '\0';
            if (bVar9) {
              cVar1 = *(char *)((int)param_2 + 0xe6);
            }
            if (!bVar9 || cVar1 != '\0') {
              param_1[0x31] = iVar4;
            }
          }
          (**(code **)(*param_1 + 0x15c))(param_1,iVar4,1,param_5);
          iVar7 = (**(code **)(*param_2 + 0x54))(param_2);
          if (iVar7 != 0) {
            (**(code **)(*param_1 + 0x110))(param_1,param_5,iVar4,1,1);
          }
        }
        else {
          (**(code **)(*param_1 + 0x160))(param_1,iVar7,param_5);
        }
      }
      else {
        iVar4 = (**(code **)(*param_2 + 0x54))(param_2);
        if (iVar4 == iVar7) {
          param_1[0x31] = iVar7;
          uVar5 = fn_006a833c(param_2,iVar7);
          (**(code **)(*param_1 + 0x110))(param_1,param_5,uVar5,1,1);
        }
      }
    }
  }
  else if (param_1[0x19] != param_5) {
    uVar5 = (**(code **)(*param_2 + 0x5c))(param_2);
    (**(code **)(*param_1 + 0x110))(param_1,param_5,uVar5,1,1);
    iVar4 = (**(code **)(*param_2 + 0x5c))(param_2);
    param_1[0x31] = iVar4;
  }
  iVar4 = (**(code **)(*param_2 + 0x34))(param_2);
  if (iVar4 != 0) {
    uVar5 = (**(code **)(*param_2 + 0x5c))(param_2);
    (**(code **)(*param_1 + 0x144))(param_1,param_1[0x19],uVar5);
  }
  iVar4 = (**(code **)(*param_2 + 0x38))(param_2);
  if (iVar4 != 0) {
    uVar5 = (**(code **)(*param_2 + 0x5c))(param_2);
    (**(code **)(*param_1 + 0x148))(param_1,param_1[0x19],uVar5);
  }
  iVar4 = (**(code **)(*param_2 + 0x3c))(param_2);
  if (iVar4 != 0) {
    if (param_1[0x19] == 5) {
      iVar4 = (**(code **)(*param_2 + 0x5c))(param_2);
      if (iVar4 == 1) {
        (**(code **)(*param_1 + 0x15c))(param_1,0,1,param_5);
        (**(code **)(*param_1 + 0x110))(param_1,param_5,0,1,1);
        goto LAB_002bf1ac;
      }
      iVar4 = fn_001c9c24(param_2);
    }
    else {
      iVar4 = fn_001c9c24(param_2);
    }
    if (iVar4 < 1) {
      iVar4 = (**(code **)(*param_2 + 0x5c))(param_2);
    }
    else {
      iVar4 = param_1[0x31];
    }
    (**(code **)(*param_1 + 0x14c))(param_1,param_1[0x19],iVar4);
  }
LAB_002bf1ac:
  iVar4 = (**(code **)(*param_2 + 0x40))(param_2);
  if (iVar4 != 0) {
    if (param_1[0x19] == 5) {
      iVar4 = (**(code **)(*param_2 + 0x5c))(param_2);
      if (iVar4 == 0) {
        (**(code **)(*param_1 + 0x15c))(param_1,1,1,param_5);
        (**(code **)(*param_1 + 0x110))(param_1,param_5,1,1,1);
        goto LAB_002bf280;
      }
      iVar4 = fn_001c9c24(param_2);
    }
    else {
      iVar4 = fn_001c9c24(param_2);
    }
    if (iVar4 < 1) {
      iVar4 = (**(code **)(*param_2 + 0x5c))(param_2);
    }
    else {
      iVar4 = param_1[0x31];
    }
    (**(code **)(*param_1 + 0x150))(param_1,param_1[0x19],iVar4);
  }
LAB_002bf280:
  if ((param_1[0x19] == 5) && (uVar8 = (**(code **)(*param_2 + 0x5c))(param_2), uVar8 < 2)) {
    (**(code **)(*param_1 + 0x154))(param_1,5);
    return;
  }
  return;
}


