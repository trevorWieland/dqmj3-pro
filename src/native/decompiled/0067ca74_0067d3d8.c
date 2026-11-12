#include "0067ca74_0067d3d8.h"

static void svc_0x19(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x19 }
#endif
}

static void svc_0x23(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x23 }
#endif
}

static void svc_0x24(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x24 }
#endif
}


int fn_0067d3d8(int *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = *param_1;
  uVar2 = param_1[1] - iVar1;
  iVar3 = (int)((longlong)(int)uVar2 * -0x22983759 + ((ulonglong)uVar2 << 0x20) >> 0x20);
  if (((uint)((iVar3 >> 7) - (iVar3 >> 0x1f)) <= param_2) || (iVar1 == param_1[1])) {
                    /* WARNING: Subroutine does not return */
    fn_00146590();
  }
  return iVar1 + param_2 * 0x94;
}



void fn_0067d3a0(void)

{
  return;
}



void fn_0067d1a8(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = &DAT_00859e58;
  uVar1 = param_1[0x18];
  uVar2 = uVar1;
  if ((uint)param_1[0x19] < uVar1) {
    do {
      uVar2 = uVar2 + 4;
    } while (uVar2 != param_1[0x19]);
  }
  fn_001008c4(uVar1,(int)(param_1[0x1a] - uVar1) >> 2,0);
  *param_1 = &DAT_00859b90;
  fn_002feef8(param_1);
  return;
}



bool fn_0067d168(int *param_1)

{
  bool bVar1;
  
  bVar1 = (*(byte *)(param_1 + 0x13) & 1) != 0;
  if (bVar1) {
    (**(code **)(*param_1 + 0x30))(param_1,3);
  }
  return bVar1;
}



undefined4 fn_0067d07c(int *param_1)

{
  int iVar1;
  
  fn_00673cb8();
  iVar1 = param_1[0x11];
  if (iVar1 == 1) {
    fn_0067cedc(param_1);
    return 1;
  }
  if (iVar1 == 2) {
    if (param_1[0x12] != 0) {
      return 1;
    }
    iVar1 = fn_00673be8(param_1);
  }
  else {
    if (iVar1 != 3) {
      return 1;
    }
    if (param_1[0x12] == 0) {
      if ((*(byte *)(param_1 + 0x13) & 1) != 0) {
        fn_0052c34c();
        fn_002feca8(param_1[0x1b]);
        param_1[0x1b] = 0;
      }
      param_1[0x13] = 0;
      (**(code **)(*param_1 + 0x34))(param_1,1);
      return 1;
    }
    if (param_1[0x12] != 1) {
      return 1;
    }
    iVar1 = fn_00673be8(param_1);
  }
  if (iVar1 == 0) {
    (**(code **)(*param_1 + 0x30))(param_1,0);
  }
  return 1;
}



undefined4 fn_0067d038(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x18))(param_1);
  if (iVar1 != 0) {
    fn_00673b84(param_1);
    (**(code **)(*param_1 + 0x30))(param_1,2);
  }
  return 1;
}



undefined4 fn_0067cedc(int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = param_1[0x12];
  if (iVar4 == 0) {
    fn_0066eb80(DAT_00898840,0);
    fn_0067cd30();
    (**(code **)(*param_1 + 0x34))(param_1,1);
  }
  else if (iVar4 == 1) {
    iVar4 = fn_0066eb80(DAT_00898840,0);
    if ((*(byte *)(iVar4 + 0x4c) & 8) != 0) {
      uVar1 = *(uint *)(iVar4 + 0x74);
      svc_0x24();
      if ((int)uVar1 < 0) {
        fn_0015e294(uVar1,*(byte *)(iVar4 + 0x4c),0,0);
      }
      if ((uVar1 & 0x3ff) == 0x3fe) {
        iVar2 = fn_00528018(0x10000,4);
        iVar3 = fn_001287d4(0x41000,&DAT_00812c8c);
        param_1[0x1b] = iVar3;
        iVar4 = ((iVar3 + 0xfff) / 0x1000) * 0x1000;
        uVar1 = fn_00527db0(iVar4,(iVar2 + 0x1000) - (iVar4 - iVar3),0x10000,4);
        if ((uVar1 & 0x80000000) == 0) {
          param_1[0x13] = param_1[0x13] | 1;
        }
        (**(code **)(*param_1 + 0x34))(param_1,2);
      }
    }
  }
  else if ((iVar4 == 2) && (iVar4 = fn_00673be8(param_1), iVar4 == 0)) {
    (**(code **)(*param_1 + 0x30))(param_1,0);
  }
  return 0;
}



undefined4 fn_0067ceb0(int *param_1)

{
  if (param_1[0x11] == 0) {
    (**(code **)(*param_1 + 0x30))(param_1,1);
    return 1;
  }
  return 1;
}



void fn_0067ce00(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = &DAT_0085a938;
  if (param_1[0x1d] != 0) {
    svc_0x23();
    param_1[0x1d] = 0;
  }
  if (param_1[0x1c] != 0) {
    svc_0x23();
    param_1[0x1c] = 0;
  }
  *param_1 = &DAT_00859e58;
  uVar1 = param_1[0x18];
  uVar2 = uVar1;
  if ((uint)param_1[0x19] < uVar1) {
    do {
      uVar2 = uVar2 + 4;
    } while (uVar2 != param_1[0x19]);
  }
  fn_001008c4(uVar1,(int)(param_1[0x1a] - uVar1) >> 2,0);
  *param_1 = &DAT_00859b90;
  fn_002feef8(param_1);
  return;
}



bool fn_0067cdb8(int *param_1)

{
  bool bVar1;
  
  bVar1 = (param_1[0x13] & 1U) != 0;
  param_1[0x13] = param_1[0x13] & 0xfffffffd;
  if (bVar1) {
    (**(code **)(*param_1 + 0x30))(param_1,5);
  }
  return bVar1;
}



bool fn_0067cd30(int *param_1)

{
  bool bVar1;
  
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  if ((*(byte *)(param_1 + 0x13) & 1) != 0) {
    (**(code **)(*param_1 + 0x30))(param_1,2);
    return true;
  }
  fn_00673ce8(param_1,2);
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  bVar1 = (*(byte *)(param_1 + 0x13) & 1) == 0;
  if (bVar1) {
    (**(code **)(*param_1 + 0x30))(param_1,1);
  }
  return bVar1;
}



undefined4 fn_0067ca74(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int local_28 [6];
  
  fn_00673cb8();
  uVar3 = param_1[0x13];
  if ((uVar3 & 0x20) != 0) {
    param_1[0x13] = uVar3 & 0xffffffdf;
    goto LAB_0067cbb0;
  }
  switch(param_1[0x11]) {
  default:
    goto switchD_0067caa4_caseD_0;
  case 1:
    iVar1 = param_1[0x12];
    iVar2 = 0;
    if (iVar1 == 0) {
      (**(code **)(*param_1 + 0x34))(param_1,1);
    }
    else if (iVar1 == 1) {
      uVar3 = fn_0044bb24();
      if ((uVar3 & 0x80000000) == 0) {
        param_1[0x13] = param_1[0x13] | 1;
        (**(code **)(*param_1 + 0x34))(param_1,2);
      }
      else {
        iVar2 = -1;
        local_28[0] = 0;
        fn_0044bd50(local_28);
        param_1[0x1f] = 0;
        *(undefined1 *)(param_1 + 0x20) = 0;
        param_1[0x1e] = local_28[0];
        param_1[0x1f] = (uint)(local_28[0] != 0);
        *(undefined1 *)(param_1 + 0x20) = 1;
      }
    }
    else if ((iVar1 == 2) && (iVar1 = fn_00673be8(param_1), iVar1 == 0)) {
      (**(code **)(*param_1 + 0x30))(param_1,0);
    }
    break;
  case 2:
    iVar2 = fn_0067c87c(param_1);
    break;
  case 3:
    if (param_1[0x12] != 0 || (uVar3 & 2) != 0) {
      return 1;
    }
    iVar2 = fn_00673be8(param_1);
    if (iVar2 != 0) {
      return 1;
    }
    goto LAB_0067cccc;
  case 4:
    if (param_1[0x12] == 0) {
      svc_0x19();
      if (param_1[0x1d] < 0) {
        fn_0015e294();
      }
      svc_0x19();
      if (param_1[0x1c] < 0) {
        fn_0015e294();
      }
      fn_0044bf48();
      param_1[0x13] = param_1[0x13] & 0xfffffff7;
      (**(code **)(*param_1 + 0x34))(param_1,1);
      return 1;
    }
    if (param_1[0x12] != 1) {
      return 1;
    }
    iVar2 = fn_00673be8(param_1);
    goto joined_r0x0067ccc8;
  case 5:
    if (param_1[0x12] == 0) {
      if ((uVar3 & 1) != 0) {
        param_1[0x13] = uVar3 & 0xfffffff7;
        fn_0044c4a4();
        param_1[0x13] = param_1[0x13] & 0xfffffffe;
      }
      param_1[0x13] = 0;
      param_1[0x1e] = 0;
      param_1[0x1f] = 0;
      *(undefined1 *)(param_1 + 0x20) = 0;
      (**(code **)(*param_1 + 0x34))(param_1,1);
      return 1;
    }
    if (param_1[0x12] != 1) {
      return 1;
    }
    iVar2 = fn_00673be8(param_1);
joined_r0x0067ccc8:
    if (iVar2 == 0) {
LAB_0067cccc:
      (**(code **)(*param_1 + 0x30))(param_1,0);
    }
    goto switchD_0067caa4_caseD_0;
  }
  if (iVar2 != 0) {
LAB_0067cbb0:
    fn_00119b40(local_28);
    (**(code **)(*param_1 + 0x24))(param_1,local_28);
    fn_0066e870(DAT_00898840,local_28);
  }
switchD_0067caa4_caseD_0:
  return 1;
}


