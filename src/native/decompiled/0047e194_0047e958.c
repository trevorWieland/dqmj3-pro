#include "0047e194_0047e958.h"

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

static void svc_0xc(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0xc }
#endif
}


void fn_0047e958(int param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  
  for (piVar2 = (int *)**(int **)(param_1 + 0x14); piVar2 != (int *)*(int *)(param_1 + 0x14);
      piVar2 = (int *)*piVar2) {
    piVar1 = (int *)piVar2[2];
    if (0 < piVar1[1]) {
      if (0x400 < piVar1[1]) break;
      (**(code **)(*piVar1 + 8))(piVar1,param_2);
    }
  }
  piVar2 = (int *)(*(int **)(param_1 + 0x2c))[1];
  if (piVar2 != *(int **)(param_1 + 0x2c)) {
    *(int *)piVar2[1] = *piVar2;
    *(int *)(*piVar2 + 4) = piVar2[1];
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
    *piVar2 = *(int *)(param_1 + 0x20);
    *(int **)(param_1 + 0x20) = piVar2;
  }
  return;
}



int fn_0047e7fc(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 local_20;
  
  *param_1 = &DAT_008536ec;
  local_20 = param_4;
  if (*(char *)(param_1 + 7) != '\0') {
    fn_00488564(DAT_008b64a4,param_1[4]);
  }
  piVar3 = (int *)param_1[3];
  if (piVar3 != (int *)0x0) {
    if ((undefined4 *)*piVar3 != (undefined4 *)0x0) {
      if ((char)piVar3[3] == '\0') {
        iVar2 = fn_00169c08(&local_20,*(undefined4 *)*piVar3);
        if (iVar2 < 0) {
          fn_0015e294();
        }
        uVar1 = local_20;
        piVar4 = (int *)*piVar3;
        svc_0x24();
        if (*piVar4 < 0) {
          fn_0015e294();
        }
        *(undefined1 *)(piVar4 + 1) = 1;
        fn_0045a44c(uVar1);
      }
      piVar4 = (int *)*piVar3;
      fn_0015e304(piVar4);
      if (*piVar4 != 0) {
        svc_0x23();
        *piVar4 = 0;
      }
      if (piVar4 != (int *)0x0) {
        if ((code *)piVar4[-2] == (code *)0x0) {
          fn_0030233c(piVar4 + -2);
        }
        else {
          (*(code *)piVar4[-2])();
        }
      }
      *piVar3 = 0;
    }
    iVar2 = piVar3[1];
    if (iVar2 != 0) {
      if (iVar2 != 4) {
        if (*(code **)(iVar2 + -0xc) == (code *)0x0) {
          fn_0030233c();
        }
        else {
          (**(code **)(iVar2 + -0xc))();
        }
      }
      piVar3[1] = 0;
    }
    if ((code *)piVar3[-2] == (code *)0x0) {
      fn_0030233c(piVar3 + -2);
    }
    else {
      (*(code *)piVar3[-2])();
    }
  }
  param_1[3] = 0;
  iVar2 = fn_00170f54(param_1 + 1);
  return iVar2 + -4;
}



undefined4 fn_0047e764(int param_1,int param_2)

{
  char cVar1;
  
  if (param_2 == 0) {
    param_2 = DAT_008b63d0;
  }
  *(int *)(param_1 + 0x18) = param_2;
  if (**(int **)(param_1 + 0xc) != 0) {
    fn_0015ebe4(L"D:/home/jenkins/workspace/Manual-Pack/5129d543/OnlineCore/src/Platform/Core/ObjectThreadRoot.cpp"
                 ,0x16c,0xe000000e,0);
    return 0;
  }
  *(undefined1 *)(param_1 + 0x1d) = 0;
  *(undefined1 *)(param_1 + 0x1c) = 1;
  fn_0047e194(param_1);
  cVar1 = *(char *)(param_1 + 0x1d);
  while (cVar1 == '\0') {
    fn_00735640(1000000,0);
    cVar1 = *(char *)(param_1 + 0x1d);
  }
  return 1;
}



undefined4 fn_0047e514(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined *local_58;
  undefined2 local_54;
  
  if (**(int **)(param_1 + 0xc) != 0) {
    if (param_2 == -1) {
      cVar1 = *(char *)(param_1 + 0x1e);
      while (cVar1 == '\0') {
        fn_004bac20(&local_58,100);
        local_54 = 2;
        do {
          if (*(char *)(param_1 + 0x1e) != '\0') break;
          iVar2 = fn_004bab94(&local_58,
                               L"D:/home/jenkins/workspace/Manual-Pack/5129d543/OnlineCore/src/Platform/Core/ObjectThreadRoot.cpp"
                               ,0x34f,L"!m_bFinished");
        } while (iVar2 != 0);
        local_58 = &DAT_00855cd4;
        cVar1 = *(char *)(param_1 + 0x1e);
      }
      piVar3 = (int *)**(undefined4 **)(param_1 + 0xc);
      svc_0x24();
      if (*piVar3 < 0) {
        fn_0015e294();
      }
      *(undefined1 *)(piVar3 + 1) = 1;
      *(undefined1 *)(*(int *)(param_1 + 0xc) + 0xc) = 1;
      piVar3 = (int *)**(undefined4 **)(param_1 + 0xc);
      fn_0015e304(piVar3);
      if (*piVar3 != 0) {
        svc_0x23();
        *piVar3 = 0;
      }
      if (piVar3 != (int *)0x0) {
        if ((code *)piVar3[-2] == (code *)0x0) {
          fn_0030233c(piVar3 + -2);
        }
        else {
          (*(code *)piVar3[-2])();
        }
      }
      **(undefined4 **)(param_1 + 0xc) = 0;
    }
    else {
      fn_004bac20(&local_58,100,param_2);
      local_54 = 2;
      do {
        if (*(char *)(param_1 + 0x1e) != '\0') break;
        iVar2 = fn_004bab94(&local_58,
                             L"D:/home/jenkins/workspace/Manual-Pack/5129d543/OnlineCore/src/Platform/Core/ObjectThreadRoot.cpp"
                             ,0x323,L"!m_bFinished");
      } while (iVar2 != 0);
      if (*(char *)(param_1 + 0x1e) == '\0') {
        fn_0015ebe4(L"D:/home/jenkins/workspace/Manual-Pack/5129d543/OnlineCore/src/Platform/Core/ObjectThreadRoot.cpp"
                     ,0x326,0xe000000c,0);
        return 0;
      }
      piVar3 = (int *)**(undefined4 **)(param_1 + 0xc);
      svc_0x24();
      if (*piVar3 < 0) {
        fn_0015e294();
      }
      *(undefined1 *)(piVar3 + 1) = 1;
      *(undefined1 *)(*(int *)(param_1 + 0xc) + 0xc) = 1;
      piVar3 = (int *)**(undefined4 **)(param_1 + 0xc);
      fn_0015e304(piVar3);
      if (*piVar3 != 0) {
        svc_0x23();
        *piVar3 = 0;
      }
      if (piVar3 != (int *)0x0) {
        if ((code *)piVar3[-2] == (code *)0x0) {
          fn_0030233c(piVar3 + -2);
        }
        else {
          (*(code *)piVar3[-2])();
        }
      }
      **(undefined4 **)(param_1 + 0xc) = 0;
    }
  }
  return 1;
}



undefined4 fn_0047e194(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int local_48;
  undefined4 local_44;
  int local_40;
  undefined4 uStack_3c;
  int local_34;
  int iStack_30;
  undefined1 *puStack_2c;
  undefined *puStack_28;
  undefined1 *puStack_24;
  undefined *puStack_20;
  undefined1 *puStack_1c;
  
  if ((((unsigned int)(DAT_008b6378) >> 8) & 0xff == '\0') && (*(int *)(*(int *)(param_1 + 0xc) + 4) == 0)) {
    iVar1 = *(int *)(param_1 + 0x18);
    *(int *)(*(int *)(param_1 + 0xc) + 8) = iVar1;
    piVar2 = (int *)fn_0015ece0(iVar1 + 0x1003);
    *piVar2 = iVar1 + 0xfff;
    *(int **)(*(int *)(param_1 + 0xc) + 4) = piVar2 + 1;
    *(undefined4 *)((int)piVar2 + 0x1003U & 0xfffff000) = 0xcc;
  }
  if (**(int **)(param_1 + 0xc) == 0) {
    puVar3 = (undefined4 *)fn_0015ece0(8);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = 0;
      *(undefined1 *)(puVar3 + 1) = 1;
    }
    **(undefined4 **)(param_1 + 0xc) = puVar3;
  }
  *(undefined1 *)(*(int *)(param_1 + 0xc) + 0xc) = 0;
  local_40 = *(int *)(param_1 + 0x20);
  if (local_40 == -0x80000000) {
    local_40 = -2;
  }
  local_34 = param_1;
  if (((unsigned int)(DAT_008b6378) >> 8) & 0xff == '\0') {
    local_44 = *(undefined4 *)(param_1 + 0x14);
    puStack_28 = (undefined *)0x4;
    puStack_24 = &LAB_0074a1c0;
    puStack_20 = &DAT_0074a290;
    puStack_1c = &LAB_0074a270;
    local_48 = *(int *)(*(int *)(param_1 + 0xc) + 8) +
               (*(int *)(*(int *)(param_1 + 0xc) + 4) + 0xfffU & 0xfffff000);
    uStack_3c = 0;
    uVar4 = fn_0014e2f4(**(undefined4 **)(param_1 + 0xc),&puStack_28,fn_0047e41c,&local_34);
  }
  else {
    local_44 = *(undefined4 *)(param_1 + 0x14);
    local_48 = *(int *)(param_1 + 0x18);
    iStack_30 = 4;
    puStack_2c = &LAB_0074a1c0;
    puStack_28 = &DAT_0074a290;
    puStack_24 = &LAB_0074a270;
    uVar4 = fn_0044fb14(**(undefined4 **)(param_1 + 0xc),&iStack_30,fn_0047e41c,&local_34);
  }
  if (((uVar4 & 0x7e00000) != 0x600000) && ((int)uVar4 < 0)) {
    fn_0015e294(uVar4);
  }
  if (-1 < (int)uVar4) {
    iVar1 = fn_00169c08(&local_48,*(undefined4 *)**(undefined4 **)(param_1 + 0xc));
    if (iVar1 < 0) {
      fn_0015e294();
    }
    *(int *)(param_1 + 0x10) = local_48;
    piVar2 = (int *)**(undefined4 **)(param_1 + 0xc);
    fn_0044fbfc(*(undefined4 *)(param_1 + 0x14));
    svc_0xc();
    if (*piVar2 < 0) {
      fn_0015e294();
    }
    return 1;
  }
  piVar2 = (int *)**(undefined4 **)(param_1 + 0xc);
  fn_0015e304(piVar2);
  if (*piVar2 != 0) {
    svc_0x23();
    *piVar2 = 0;
  }
  if (piVar2 != (int *)0x0) {
    if ((code *)piVar2[-2] == (code *)0x0) {
      fn_0030233c(piVar2 + -2);
    }
    else {
      (*(code *)piVar2[-2])();
    }
  }
  **(undefined4 **)(param_1 + 0xc) = 0;
  return 0;
}



void fn_0047e41c(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int local_20;
  int local_1c [2];
  
  iVar5 = DAT_008b63dc;
  piVar2 = (int *)(DAT_008b63dc + 0xcc);
  (**(code **)(*piVar2 + 8))();
  iVar3 = fn_00169c08(local_1c,0xffff8000);
  if (iVar3 < 0) {
    fn_0015e294();
  }
  local_20 = local_1c[0];
  piVar4 = (int *)fn_00785e14(iVar5 + 0xf4,&local_20);
  *piVar4 = (int)param_1;
  (**(code **)(*piVar2 + 0xc))(piVar2);
  iVar5 = fn_00169c08(&local_20,0xffff8000);
  if (iVar5 < 0) {
    fn_0015e294();
  }
  *(undefined1 *)((int)param_1 + 0x1e) = 0;
  param_1[4] = local_20;
  do {
    bVar1 = (bool)hasExclusiveAccess(0x8b6500);
  } while (!bVar1);
  DAT_008b6500 = DAT_008b6500 + 1;
  (**(code **)(*param_1 + 8))(param_1);
  *(undefined1 *)((int)param_1 + 0x1e) = 1;
  do {
    bVar1 = (bool)hasExclusiveAccess(0x8b6500);
  } while (!bVar1);
  DAT_008b6500 = DAT_008b6500 + -1;
  return;
}


