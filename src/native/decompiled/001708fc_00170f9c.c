#include "001708fc_00170f9c.h"

static void svc_0x32(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x32 }
#endif
}


int fn_00170f9c(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 != *(int *)(param_2 + 4)) {
    bVar2 = iVar1 == 0;
    if (!bVar2) {
      iVar1 = iVar1 + -4;
      bVar2 = iVar1 == 0;
    }
    if (!bVar2) {
      if (*(code **)(iVar1 + -8) == (code *)0x0) {
        fn_0030233c();
      }
      else {
        (**(code **)(iVar1 + -8))();
      }
    }
    fn_0015e6f0(param_1 + 0x14,*(undefined4 *)(param_2 + 4));
  }
  return param_1 + 0x10;
}



undefined4 * fn_00170f54(undefined4 *param_1)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = param_1[1];
  bVar2 = iVar1 == 0;
  if (!bVar2) {
    iVar1 = iVar1 + -4;
    bVar2 = iVar1 == 0;
  }
  *param_1 = &DAT_00855a94;
  if (!bVar2) {
    if (*(code **)(iVar1 + -8) == (code *)0x0) {
      fn_0030233c();
    }
    else {
      (**(code **)(iVar1 + -8))();
    }
  }
  return param_1;
}



undefined4 fn_00170de0(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  
  if (param_3 == 0) {
    param_1 = param_1 + 4;
  }
  else {
    iVar1 = **(int **)(param_1 + 0x48);
    if ((uint)((*(int **)(param_1 + 0x48))[1] - iVar1 >> 2) <= param_3) {
      fn_0015ebe4(L"D:\\home\\jenkins\\workspace\\Manual-Pack\\5129d543\\.\\OnlineCore/src/Core/InstanceTable.h"
                   ,0x48,0xe0000003,0);
      return 0xffffffff;
    }
    param_1 = *(int *)(iVar1 + param_3 * 4);
  }
  if (param_2 < 0xf) {
    return *(undefined4 *)(param_1 + param_2 * 4 + 4);
  }
  fn_0015ebe4(L"D:\\home\\jenkins\\workspace\\Manual-Pack\\5129d543\\.\\OnlineCore/src/Core/InstantiationContext.h"
               ,0x53,0xe0000003,0);
  return 0xffffffff;
}



undefined4 fn_00170c9c(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_168 [256];
  int local_68 [16];
  undefined1 auStack_28 [24];
  
  iVar1 = fn_00101d80(param_2,L"255.255.255.255");
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    return 1;
  }
  iVar1 = fn_00101d80(param_2,L"localhost");
  if (iVar1 == 0) {
    uVar2 = fn_00170c9c(param_1,L"127.0.0.1");
    return uVar2;
  }
  fn_00173bf4(param_2,auStack_168,0x100);
  iVar1 = fn_0017d8a4(2,auStack_168,local_68);
  if (iVar1 < 1) {
    local_68[0] = 0;
  }
  *(int *)(param_1 + 8) = local_68[0];
  if ((DAT_008b638a != '\0') && (local_68[0] == 0)) {
    iVar1 = fn_0017d80c(auStack_168);
    if (iVar1 == 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)**(undefined4 **)(iVar1 + 0xc);
    fn_0017d82c(2,param_1 + 8,auStack_28,0x14);
    fn_0017fe44(auStack_28,local_68,0x40);
  }
  return 1;
}



undefined4 * fn_00170c3c(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  *param_1 = &PTR_LAB_0010414a_1_008526fc;
  if (param_1[3] != 0) {
    fn_00146594();
  }
  if (param_1[4] != 0) {
    fn_00146594();
  }
  puVar1 = (undefined4 *)param_1[4];
  if (puVar1 != (undefined4 *)0x0) {
    do {
      puVar2 = (undefined4 *)puVar1[1];
      puVar1[1] = 0;
      *puVar1 = 0;
      puVar1 = puVar2;
    } while (puVar2 != (undefined4 *)0x0);
    param_1[4] = 0;
  }
  return param_1;
}



int fn_00170c2c(int param_1,undefined1 param_2)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x38);
  *(undefined1 *)(param_1 + 0x38) = param_2;
  return (int)cVar1;
}



void fn_00170bb4(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  
  iVar5 = 0;
  puVar6 = (undefined4 *)&DAT_008f3140;
  do {
    iVar5 = fn_0015e6d8(&DAT_008f3140,iVar5);
    if (iVar5 == 0) goto LAB_00170c18;
  } while ((param_1 < *(uint *)(iVar5 + 0x18)) || (*(uint *)(iVar5 + 0x1c) <= param_1));
  iVar1 = fn_0015e680(iVar5 + 0xc,param_1);
  if (iVar1 == 0) {
    iVar1 = iVar5;
  }
  puVar6 = (undefined4 *)(iVar1 + 0xc);
LAB_00170c18:
  uVar4 = (uint)*(ushort *)((int)puVar6 + 10);
  piVar3 = (int *)(uVar4 + param_1);
  uVar2 = *(undefined4 *)(param_1 + uVar4 + 4);
  if (*piVar3 == 0) {
    *puVar6 = uVar2;
  }
  else {
    *(undefined4 *)(uVar4 + *piVar3 + 4) = uVar2;
  }
  if (piVar3[1] == 0) {
    puVar6[1] = *piVar3;
  }
  else {
    *(int *)(piVar3[1] + (uint)*(ushort *)((int)puVar6 + 10)) = *piVar3;
  }
  *piVar3 = 0;
  piVar3[1] = 0;
  *(short *)(puVar6 + 2) = *(short *)(puVar6 + 2) + -1;
  return;
}



undefined2 fn_00170b84(int param_1,undefined2 param_2)

{
  undefined2 uVar1;
  
  uVar1 = *(undefined2 *)(param_1 + 0x34);
  *(undefined2 *)(param_1 + 0x34) = param_2;
  return uVar1;
}



undefined4 fn_00170a3c(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ushort uVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  
  if (param_2 == 0) {
    param_2 = 1;
  }
  uVar8 = 0;
  uVar3 = param_2 + 3U & 0xfffffffc;
  uVar7 = ~*(ushort *)(param_1 + 0x36) & 1;
  if (param_3 < 0) {
    iVar9 = *(int *)(param_1 + 0x28);
    iVar1 = 0;
    uVar6 = 0xffffffff;
    if (iVar9 != 0) {
      uVar2 = 0;
      do {
        uVar4 = *(uint *)(iVar9 + 4);
        uVar10 = (uVar4 + iVar9 + 0x10) - uVar3 & ~(0xffffffffU - param_3);
        if (((-1 < (int)(uVar10 - (iVar9 + 0x10))) && (uVar4 < uVar6)) &&
           ((iVar1 = iVar9, uVar7 != 0 || (uVar2 = uVar10, uVar6 = uVar4, uVar4 == uVar3)))) break;
        uVar10 = uVar2;
        iVar9 = *(int *)(iVar9 + 8);
        uVar2 = uVar10;
      } while (iVar9 != 0);
      if (iVar1 != 0) {
        uVar8 = fn_0017cbdc(param_1 + 0x24,iVar1,uVar10,uVar3,1);
      }
    }
  }
  else {
    iVar9 = *(int *)(param_1 + 0x24);
    iVar1 = 0;
    uVar6 = 0xffffffff;
    if (iVar9 != 0) {
      uVar2 = 0;
      do {
        uVar11 = *(uint *)(iVar9 + 4);
        uVar4 = (iVar9 + 0x10 + param_3) - 1U & ~(param_3 - 1U);
        uVar5 = (uVar4 - (iVar9 + 0x10)) + uVar3;
        uVar10 = uVar5;
        if (uVar11 >= uVar5) {
          uVar10 = uVar6;
        }
      } while ((((uVar11 < uVar5 || uVar6 < uVar11) || uVar11 == uVar10) ||
               ((iVar1 = iVar9, uVar7 == 0 && (uVar6 = uVar11, uVar2 = uVar4, uVar11 != uVar3)))) &&
              (uVar4 = uVar2, iVar9 = *(int *)(iVar9 + 0xc), uVar2 = uVar4, iVar9 != 0));
      if (iVar1 != 0) {
        uVar8 = fn_0017cbdc((int *)(param_1 + 0x24),iVar1,uVar4,uVar3,0);
      }
    }
  }
  return uVar8;
}



int fn_0017099c(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0xc0040;
  *(undefined4 *)(iVar2 + 0x84) = param_2;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    *param_3 = *(undefined4 *)(iVar2 + 0x88);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_00170934(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                ushort param_5,undefined2 *param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  undefined4 uVar6;
  
  iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined **)(iVar3 + 0x80) = &DAT_001000c0;
  *(undefined4 *)(iVar3 + 0x84) = param_2;
  *(undefined4 *)(iVar3 + 0x88) = param_3;
  *(ushort *)(iVar3 + 0x8c) = param_5;
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  puVar4 = (uint *)(iVar2 + 0x180);
  uVar5 = *puVar4;
  uVar6 = *(undefined4 *)(iVar2 + 0x184);
  *puVar4 = (uint)param_5 << 0xe | 2;
  *(undefined4 *)(iVar2 + 0x184) = param_4;
  iVar1 = *param_1;
  svc_0x32();
  *puVar4 = uVar5;
  *(undefined4 *)(iVar2 + 0x184) = uVar6;
  if (-1 < iVar1) {
    *param_6 = *(undefined2 *)(iVar3 + 0x88);
    iVar1 = *(int *)(iVar3 + 0x84);
  }
  return iVar1;
}



int fn_001708fc(int *param_1,undefined2 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x70040;
  *(undefined2 *)(iVar2 + 0x84) = param_2;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}


