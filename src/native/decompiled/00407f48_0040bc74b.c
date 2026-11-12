#include "00407f48_0040bc74b.h"



void fn_0040bc74(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint in_fpscr;
  float in_s0;
  float fVar5;
  uint local_18;
  
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar2 == 4) {
    local_18 = param_4 & 0xffffff00;
    iVar2 = fn_00215cb4(*(undefined4 *)(param_1 + 0x14),&local_18,*(undefined4 *)(param_1 + 0x5c));
    if (iVar2 != 0) {
      uVar3 = *(undefined4 *)(DAT_008977e0 + 0x2c);
      fVar5 = *(float *)(param_1 + 0x70);
      uVar4 = fn_0023ddec(uVar3,*(undefined4 *)(param_1 + 0x60));
      *(undefined4 *)(param_1 + 0x68) = uVar4;
      fn_006bd4a4(param_1,*(undefined4 *)(param_1 + 0x58));
      fn_0023dd30(uVar3,*(undefined4 *)(param_1 + 0x68));
      iVar2 = fn_006b4cf4(uVar3,*(undefined4 *)(param_1 + 0x60));
      if (iVar2 == 0) {
        uVar4 = fn_006b4d18(uVar3,*(undefined4 *)(param_1 + 0x68),0,1);
        fVar5 = (float)VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x16) & 3);
      }
      else {
        fn_0023e52c(uVar3);
        fVar5 = fVar5 * 0.5;
      }
      *(float *)(param_1 + 0x6c) = fVar5;
      *(undefined4 *)(param_1 + 0xc) = 5;
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
  }
  else {
    local_18 = param_4;
    if (iVar2 == 5) {
      uVar4 = *(undefined4 *)(DAT_008977e0 + 0x2c);
      iVar2 = fn_006b4cd0(uVar4,*(undefined4 *)(param_1 + 0x68));
      if ((iVar2 == 0) &&
         (fn_0023da78(uVar4,*(undefined4 *)(param_1 + 0x68)), in_s0 <= *(float *)(param_1 + 0x6c)))
      {
        return;
      }
      piVar1 = (int *)fn_002fdd54(param_1,*(undefined4 *)(param_1 + 0x58),param_1 + 0x70,0);
      if (piVar1 != (int *)0x0) {
        fn_00683320(piVar1,3,0);
        (**(code **)(*piVar1 + 0x1dc))(piVar1,0,1);
        (**(code **)(*piVar1 + 0x1dc))(piVar1,1,1,0);
        piVar1[0x71] = (int)*(char *)(param_1 + 100);
      }
      *(undefined4 *)(param_1 + 0xc) = 6;
      *(undefined4 *)(param_1 + 0x10) = 0;
      return;
    }
    if (iVar2 == 6) {
                    /* WARNING: Could not recover jumptable at 0x0040bcbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(int **)(param_1 + 0x14) + 0x1dc))(*(int **)(param_1 + 0x14),2,3,0);
      return;
    }
  }
  return;
}



void fn_004086e4(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  
  iVar5 = param_1[0x29];
  cVar1 = *(char *)((int)param_1 + 0xa6);
  param_1[0x2a] = param_1[0x2a] + 1;
  *(char *)((int)param_1 + 0xa5) = (char)iVar5;
  *(char *)(param_1 + 0x29) = cVar1;
  if ((char)iVar5 == cVar1) {
    param_1[0x2b] = param_1[0x2b] + 1;
  }
  else {
    param_1[0x2b] = 0;
  }
  switch(cVar1) {
  case '\x01':
    fn_00407598(param_1,param_1[0x2b] == 0);
    break;
  case '\x03':
    fn_0040796c(param_1,param_1[0x2b] == 0);
    break;
  case '\x04':
    fn_004071e8(param_1,param_1[0x2b] == 0);
    break;
  case '\x05':
    fn_00407b5c(param_1,param_1[0x2b] == 0);
    break;
  case '\x06':
    fn_00407cc0(param_1,param_1[0x2b] == 0);
    break;
  case '\b':
    fn_00407f48(param_1,param_1[0x2b] == 0);
  }
  iVar5 = 3;
  switch((char)param_1[0x26]) {
  case '\x01':
    if (*(char *)(param_1[0x17] + 0x31) != '\0') {
      fn_00689828(param_1,1);
      *(undefined1 *)(param_1 + 0x26) = 0;
      (**(code **)(*param_1 + 0x124))(param_1,*(char *)(param_1[0x17] + 0x31) == '\x03');
    }
    break;
  case '\x02':
    if (*(char *)(param_1[0x17] + 0x31) == '\0') break;
    fn_00689828(param_1,1);
    *(undefined1 *)(param_1 + 0x26) = 0;
    if (*(char *)(param_1[0x17] + 0x31) != '\x03') break;
    iVar5 = fn_006be54c(param_1[0x20]);
    iVar2 = fn_006b51c0(*(undefined4 *)(DAT_00897804 + 0x1c));
    bVar6 = iVar2 == iVar5;
    iVar2 = fn_006b8600(*(undefined4 *)(DAT_00897804 + 0xc));
    bVar7 = iVar2 == iVar5;
    if (((bool)(bVar6 & ~bVar7) || (bool)(bVar7 & ~bVar6)) || bVar6 && bVar7) {
      param_1[0x2f] = 0;
      fn_00689828(param_1,0);
      *(undefined1 *)(param_1 + 0x26) = 3;
      break;
    }
    fn_0040678c(param_1,iVar5,1);
    fn_0031e0f4(param_1[0x1f],1);
    (**(code **)(*(int *)param_1[0x1f] + 8))();
    iVar5 = fn_006b5dc8(param_1[0x2d]);
    if (iVar5 == 0) break;
    goto LAB_00408bd4;
  case '\x03':
    iVar2 = fn_001f7424(param_1,0x48);
    if ((iVar2 == 0) && (iVar2 = param_1[0x2f], param_1[0x2f] = iVar2 + 1, 8 < iVar2 + 1)) {
      iVar2 = fn_006be54c(param_1[0x20]);
      iVar3 = fn_006b51c0(*(undefined4 *)(DAT_00897804 + 0x1c));
      bVar6 = iVar3 == iVar2;
      iVar3 = fn_006b8600(*(undefined4 *)(DAT_00897804 + 0xc));
      bVar7 = iVar3 == iVar2;
      if ((bool)(bVar6 & ~bVar7)) {
        iVar5 = 1;
      }
      else if ((bool)(bVar7 & ~bVar6)) {
        iVar5 = 2;
      }
      else if (!bVar6 || !bVar7) {
        iVar5 = 0;
      }
      uVar4 = 0;
      if (iVar5 == 1) {
        uVar4 = fn_0022f584((char *)&DAT_00407ebc,0);
      }
      else if (iVar5 == 2) {
        uVar4 = fn_0022f584((char *)&DAT_00407ee8,0);
      }
      else if (iVar5 == 3) {
        uVar4 = fn_0022f584((char *)&DAT_00407f14,0);
      }
      fn_0036c5f4(param_1[0x17],uVar4,1,1,1,1,0,0,1);
      fn_00689bd0(param_1,0x48,0);
      fn_00689828(param_1,0);
      *(undefined1 *)(param_1 + 0x26) = 4;
      fn_0068ab44(param_1,0x100094b);
    }
    break;
  case '\x04':
    if (*(char *)(param_1[0x17] + 0x31) == '\0') break;
    fn_00689828(param_1,1);
    *(undefined1 *)(param_1 + 0x26) = 0;
    if (*(char *)(param_1[0x17] + 0x31) != '\x03') break;
    uVar4 = fn_006be54c(param_1[0x20]);
    fn_0040678c(param_1,uVar4,1);
    fn_0031e0f4(param_1[0x1f],1);
    (**(code **)(*(int *)param_1[0x1f] + 8))();
    iVar5 = fn_006b5dc8(param_1[0x2d]);
    goto joined_r0x00408bd0;
  case '\x05':
    if (*(char *)(param_1[0x17] + 0x31) == '\0') break;
    fn_00689828(param_1,1);
    *(undefined1 *)(param_1 + 0x26) = 0;
    uVar4 = fn_006be54c(param_1[0x20]);
    fn_0040678c(param_1,uVar4,1);
    fn_0031e0f4(param_1[0x1f],1);
    (**(code **)(*(int *)param_1[0x1f] + 8))();
    iVar5 = fn_006b5dc8(param_1[0x2d]);
joined_r0x00408bd0:
    if (iVar5 != 0) {
LAB_00408bd4:
      fn_0031de9c(param_1[0x1f],0);
    }
    break;
  case '\x06':
    if (*(char *)(param_1[0x17] + 0x31) == '\x01') {
      fn_004068fc(param_1);
      fn_00689828(param_1,0);
      *(undefined1 *)(param_1 + 0x26) = 9;
    }
    break;
  case '\a':
    if (*(char *)(param_1[0x17] + 0x31) == '\x01') {
      fn_00407024(param_1);
      fn_00689828(param_1,0);
      *(undefined1 *)(param_1 + 0x26) = 9;
    }
    break;
  case '\b':
    if (*(char *)(param_1[0x17] + 0x31) == '\x01') {
      fn_00407378(param_1);
      fn_00689828(param_1,0);
      *(undefined1 *)(param_1 + 0x26) = 9;
    }
  }
  if ((int *)param_1[0x23] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x23] + 0x14))();
  }
  if (param_1[0x1f] != 0) {
    fn_002cae8c();
  }
  if (param_1[0x20] != 0) {
    fn_002cae8c();
  }
  if (param_1[0x21] != 0) {
    fn_002cae8c();
  }
  if (param_1[0x22] != 0) {
    fn_002cae8c();
  }
  if ((int *)param_1[0x24] == (int *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00408ce4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)param_1[0x24] + 0x14))();
  return;
}


