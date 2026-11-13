#include "004542f4_004547d4.h"

static void svc_0x32(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x32 }
#endif
}


undefined4 fn_004547d4(undefined4 *param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  
  cVar1 = *(char *)((int)param_1 + 7);
  cVar2 = *(char *)(param_1 + 2);
  cVar3 = *(char *)((int)param_1 + 9);
  sVar4 = *(short *)((int)param_1 + 10);
  iVar5 = fn_004546a0(*param_1,(int)*(char *)(param_1 + 1),(int)*(char *)((int)param_1 + 5));
  if ((((((iVar5 != 0) && (-1 < cVar1)) && (cVar1 < '\x18')) && ((-1 < cVar2 && (cVar2 < '<')))) &&
      ((-1 < cVar3 && ((cVar3 < '<' && (-1 < sVar4)))))) && (sVar4 < 1000)) {
    iVar5 = fn_00114150(*param_1,(int)*(char *)(param_1 + 1),(int)*(char *)((int)param_1 + 5));
    uVar6 = iVar5 + 6;
    iVar5 = (int)((longlong)(int)uVar6 * -0x6db6db6d + ((ulonglong)uVar6 << 0x20) >> 0x20);
    uVar6 = ((iVar5 >> 2) - (iVar5 >> 0x1f)) * -7 + uVar6 + 7;
    iVar5 = (int)((longlong)(int)uVar6 * -0x6db6db6d + ((ulonglong)uVar6 << 0x20) >> 0x20);
    if ((((iVar5 >> 2) - (iVar5 >> 0x1f)) * -7 + uVar6 & 0xff) == (uint)*(byte *)((int)param_1 + 6))
    {
      return 1;
    }
  }
  return 0;
}



undefined4 fn_004546a0(uint param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  int aiStack_5c [4];
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  uint local_28 [2];
  
  aiStack_5c[1] = 0x1f;
  aiStack_5c[2] = 0x1c;
  aiStack_5c[3] = 0x1f;
  uStack_4c = 0x1e;
  uStack_48 = 0x1f;
  uStack_44 = 0x1e;
  uStack_40 = 0x1f;
  uStack_3c = 0x1f;
  local_38 = 0x1e;
  uStack_34 = 0x1f;
  uStack_30 = 0x1e;
  local_2c = 0x1f;
  fn_0010b2b4(local_28,0,0,0xffff7154);
  uVar3 = local_28[0];
  iVar4 = (int)local_28[0] >> 0x1f;
  fn_0010b2b4(local_28,0,0,0x10f14);
  iVar1 = (int)param_1 >> 0x1f;
  iVar2 = (int)local_28[0] >> 0x1f;
  if ((int)(iVar1 - (iVar4 + (uint)(param_1 < uVar3))) < 0 !=
      (SBORROW4(iVar1,iVar4) != SBORROW4(iVar1 - iVar4,(uint)(param_1 < uVar3)))) {
    return 0;
  }
  if ((int)(iVar2 - (iVar1 + (uint)(local_28[0] < param_1))) < 0 !=
      (SBORROW4(iVar2,iVar1) != SBORROW4(iVar2 - iVar1,(uint)(local_28[0] < param_1)))) {
    return 0;
  }
  if (0xb < param_2 - 1U) {
    return 0;
  }
  if (param_2 != 2) {
    iVar4 = aiStack_5c[param_2];
    goto LAB_00454750;
  }
  if ((int)param_1 % 400 == 0) {
LAB_004547bc:
    iVar4 = 1;
  }
  else {
    iVar4 = 0;
    if ((int)param_1 % 100 != 0) {
      if ((param_1 & 3) == 0) goto LAB_004547bc;
      iVar4 = 0;
    }
  }
  iVar4 = iVar4 + aiStack_5c[2];
LAB_00454750:
  bVar5 = SBORROW4(param_3,1);
  iVar1 = param_3 + -1;
  if (0 < param_3) {
    bVar5 = SBORROW4(iVar4,param_3);
    iVar1 = iVar4 - param_3;
  }
  if (iVar1 < 0 == bVar5) {
    return 1;
  }
  return 0;
}



void fn_004545f0(void)

{
  undefined1 uVar1;
  int iVar2;
  
  uVar1 = 0;
  if ((DAT_008bfbad & ~DAT_008bfbae) != 0) {
    iVar2 = 0;
    do {
      if ((code *)(&DAT_008ebd1c)[iVar2] != (code *)0x0) {
        (*(code *)(&DAT_008ebd1c)[iVar2])();
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 8);
    if (DAT_008bfbad != 0) {
      while (iVar2 = fn_0013c568(&DAT_008bfbbc), iVar2 == 0) {
        fn_0012d6a4(1000000,0);
      }
      fn_0013c808(DAT_008bfbb4);
      DAT_008bfbad = 0;
      fn_0013c51c(&DAT_008bfbbc);
    }
    uVar1 = 1;
    DAT_008bfbae = 1;
  }
  DAT_008bfbac = uVar1;
  return;
}



undefined1 * fn_004544e4(int *param_1,int *param_2,ushort *param_3)

{
  ushort uVar1;
  ushort *puVar2;
  uint uVar3;
  ushort *puVar4;
  int iVar5;
  ushort *puVar6;
  ushort *puVar7;
  int iVar8;
  bool bVar9;
  
  iVar5 = *param_2;
  puVar6 = (ushort *)param_2[1];
  iVar8 = 1;
  uVar3 = iVar5 * 2 - 2;
  puVar7 = puVar6 + iVar5 + -1;
  if (iVar5 == 2) {
    uVar3 = (uint)*puVar6;
  }
  if ((iVar5 == 2 && uVar3 == 0x2e) && (puVar6[1] == 0x2e)) {
    iVar8 = 2;
  }
  if (param_3 < puVar6) {
    iVar5 = 0;
    puVar2 = puVar6;
    while (puVar4 = puVar2 + -1, param_3 <= puVar4) {
      if (*puVar4 == 0x2f) {
        if (iVar5 == 1) {
          if (*puVar2 == 0x2e) {
            iVar8 = iVar8 + 1;
          }
        }
        else if (iVar5 == 2) {
          uVar1 = *puVar2;
          bVar9 = uVar1 == 0x2e;
          if (bVar9) {
            uVar1 = puVar2[1];
          }
          if (bVar9 && uVar1 == 0x2e) {
            iVar8 = iVar8 + 2;
          }
        }
        if (iVar8 == 0) {
          puVar6 = puVar2;
          goto LAB_004545b8;
        }
        do {
          puVar4 = puVar4 + -1;
        } while (*puVar4 == 0x2f);
        iVar5 = 0;
        iVar8 = iVar8 + -1;
        puVar7 = puVar4;
      }
      iVar5 = iVar5 + 1;
      puVar2 = puVar4;
    }
    if (iVar8 != 0) {
      return &DAT_e0e046c9;
    }
LAB_004545b8:
    if (puVar4 == param_3) {
      puVar6 = param_3 + 1;
    }
  }
  if (param_3 < puVar7) {
    *param_1 = ((int)puVar7 - (int)puVar6 >> 1) + 1;
    param_1[1] = (int)puVar6;
  }
  else {
    *param_1 = 0;
    param_1[1] = (int)param_3;
  }
  return (undefined1 *)0x0;
}



undefined4 fn_00454414(int *param_1,int *param_2)

{
  short sVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
  *param_2 = param_1[1] - *param_1 >> 1;
  param_2[1] = *param_1;
  iVar4 = param_1[2];
  uVar3 = 0;
  *param_1 = iVar4;
  do {
    sVar1 = *(short *)(iVar4 + uVar3 * 2);
    if (sVar1 == 0x2f) {
      if (uVar3 < 0x100) {
        iVar4 = iVar4 + uVar3 * 2;
        param_1[1] = iVar4;
        param_1[2] = iVar4 + 2;
        sVar1 = *(short *)(iVar4 + 2);
        while (sVar1 == 0x2f) {
          iVar4 = param_1[2];
          param_1[2] = iVar4 + 2;
          sVar1 = *(short *)(iVar4 + 2);
        }
        if (*(short *)param_1[2] == 0) {
          *(undefined1 *)(param_1 + 3) = 1;
        }
LAB_0045446c:
        uVar2 = 0;
      }
      else {
        uVar2 = 0xe0e046c8;
      }
      return uVar2;
    }
    if (sVar1 == 0) {
      iVar4 = iVar4 + uVar3 * 2;
      param_1[1] = iVar4;
      *(undefined1 *)(param_1 + 3) = 1;
      param_1[2] = iVar4;
      goto LAB_0045446c;
    }
    uVar3 = uVar3 + 1;
  } while( true );
}



undefined1 * fn_004543a8(undefined4 *param_1,short *param_2)

{
  short sVar1;
  undefined1 *puVar2;
  int iVar3;
  
  if (*param_2 == 0x2f) {
    sVar1 = param_2[1];
    while (sVar1 == 0x2f) {
      sVar1 = param_2[2];
      param_2 = param_2 + 1;
    }
    *param_1 = param_2;
    param_1[1] = param_2;
    param_1[2] = param_2 + 1;
    sVar1 = param_2[1];
    while (sVar1 == 0x2f) {
      iVar3 = param_1[2];
      param_1[2] = (short *)(iVar3 + 2);
      sVar1 = *(short *)(iVar3 + 2);
    }
    puVar2 = (undefined1 *)0x0;
  }
  else {
    puVar2 = &DAT_e0e046c9;
  }
  return puVar2;
}



uint fn_0045438c(void)

{
  uint in_r3;
  uint local_8 [2];
  
  local_8[0] = in_r3 & 0xffffff00;
  fn_0045434c(local_8);
  return local_8[0] & 0xff;
}



uint fn_00454388(void)

{
  uint in_r3;
  uint auStack_8 [2];
  
  auStack_8[0] = in_r3 & 0xffffff00;
  fn_0045434c(auStack_8);
  return auStack_8[0] & 0xff;
}



int fn_0045434c(undefined1 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x20000;
  svc_0x32();
  iVar1 = DAT_008bfb54;
  if (-1 < DAT_008bfb54) {
    *param_1 = *(undefined1 *)(iVar2 + 0x88);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_004542f4(undefined4 param_1,undefined2 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x90040;
  *(undefined2 *)(iVar2 + 0x84) = param_2;
  svc_0x32();
  iVar1 = DAT_008bfb54;
  if (-1 < DAT_008bfb54) {
    fn_00301a9c(param_1,iVar2 + 0x88,3,param_4,param_1);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}


