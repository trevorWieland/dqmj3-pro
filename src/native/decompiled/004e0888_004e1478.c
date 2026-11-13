#include "004e0888_004e1478.h"

static void svc_0x28(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x28 }
#endif
}


undefined4 fn_004e1478(int *param_1,undefined4 param_2,uint param_3,uint param_4)

{
  undefined4 uVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  undefined1 auStack_30 [4];
  undefined4 local_2c;
  short local_22;
  short local_20;
  
  if (param_3 < 0x5bb) {
    if ((short)param_1[0x10] != *(short *)((int)param_1 + 0x42)) {
      bVar5 = 0;
      iVar4 = 0xc;
      piVar2 = param_1 + 4;
      do {
        if ((short)*piVar2 != *(short *)((int)param_1 + 0x42)) {
          bVar5 = bVar5 + 1;
        }
        iVar4 = iVar4 + -1;
        piVar2 = (int *)((int)piVar2 + 2);
      } while (iVar4 != 0);
      if (1 < bVar5) {
        fn_004edc34();
        fn_004dbe24(auStack_30,param_1 + 0x192,0x5dc);
        fn_004dbd70(auStack_30,param_2,0,param_3 & 0xffff);
        if (param_4 == 0xfe) {
          uVar3 = (uint)*(ushort *)(param_1 + 0x11);
        }
        else if ((param_4 == 0) || (0xc < param_4)) {
          uVar3 = (uint)*(ushort *)((int)param_1 + 0x42);
        }
        else {
          iVar4 = fn_006d58dc(DAT_008bf504);
          if (iVar4 == 0) {
            uVar3 = (uint)*(ushort *)((int)param_1 + param_4 * 2 + 0xe);
          }
          else {
            uVar3 = fn_006d6aa8(*(undefined4 *)(DAT_008bf504 + 0x18),param_4);
          }
        }
        if (*(ushort *)((int)param_1 + 0x42) == uVar3) {
          fn_004edc70(param_1 + 0x15);
          return 0xd8814865;
        }
        uVar1 = (**(code **)(*param_1 + 0x1c))(param_1,local_2c,local_22 + local_20,uVar3);
        fn_004edc70(param_1 + 0x15);
        return uVar1;
      }
    }
    uVar1 = 0xd8a14868;
  }
  else {
    uVar1 = 0xe0e14826;
  }
  return uVar1;
}



undefined4 fn_004e137c(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,uint param_5)

{
  ushort *puVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  
  if (0x5c6 < param_4) {
    return 0xe0e14826;
  }
  uVar3 = (uint)*(ushort *)(param_1 + 0x42);
  if (*(ushort *)(param_1 + 0x40) != uVar3) {
    bVar5 = 0;
    iVar4 = 0xc;
    puVar1 = (ushort *)(param_1 + 0x10);
    do {
      if (*puVar1 != uVar3) {
        bVar5 = bVar5 + 1;
      }
      iVar4 = iVar4 + -1;
      puVar1 = puVar1 + 1;
    } while (iVar4 != 0);
    if (1 < bVar5) {
      if (param_5 == 0xfe) {
        uVar3 = (uint)*(ushort *)(param_1 + 0x44);
      }
      if ((param_5 != 0xfe && param_5 != 0) && (param_5 < 0xd)) {
        iVar4 = fn_006d58dc(DAT_008bf504);
        if (iVar4 == 0) {
          uVar3 = (uint)*(ushort *)(param_1 + param_5 * 2 + 0xe);
        }
        else {
          uVar3 = fn_006d6aa8(*(undefined4 *)(DAT_008bf504 + 0x18),param_5);
        }
      }
      if (*(ushort *)(param_1 + 0x42) == uVar3) {
        return 0xe0e14826;
      }
      uVar2 = fn_004e15f8(param_1,param_2,param_3,param_4,uVar3);
      return uVar2;
    }
  }
  return 0xd8a14868;
}



void fn_004e134c(int param_1,int param_2)

{
  *(uint *)(param_1 + 0x1238) = *(uint *)(param_1 + 0x123c);
  svc_0x28();
  *(int *)(param_1 + 0x123c) =
       (int)((ulonglong)*(uint *)(param_1 + 0x123c) * 0xf46f6f >> 0x20) + param_2 * 0xf46f6f;
  return;
}



void fn_004e12fc(int param_1,uint param_2)

{
  uint uVar1;
  
  if (*(ushort *)(param_1 + 0x42) != param_2) {
    uVar1 = 0;
    while (*(ushort *)(param_1 + uVar1 * 2 + 0x10) != param_2) {
      uVar1 = uVar1 + 1;
      if (0xb < uVar1) {
        return;
      }
    }
    *(ushort *)(param_1 + uVar1 * 2 + 0x10) = *(ushort *)(param_1 + 0x42);
  }
  return;
}



int fn_004e105c(int *param_1,undefined4 param_2,undefined4 param_3,uint *param_4,
                undefined1 *param_5,int param_6)

{
  uint uVar1;
  undefined2 uVar2;
  int *piVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  uint *puVar7;
  uint local_54;
  undefined2 local_50 [4];
  undefined1 auStack_48 [4];
  undefined4 local_44;
  uint local_40;
  char local_3c;
  ushort local_38;
  
  if ((short)param_1[0x10] != *(short *)((int)param_1 + 0x42)) {
    bVar5 = 0;
    iVar6 = 0xc;
    piVar3 = param_1 + 4;
    do {
      if ((short)*piVar3 != *(short *)((int)param_1 + 0x42)) {
        bVar5 = bVar5 + 1;
      }
      iVar6 = iVar6 + -1;
      piVar3 = (int *)((int)piVar3 + 2);
    } while (iVar6 != 0);
    if (1 < bVar5) {
      fn_004edc34();
      fn_004dbe24(auStack_48,param_1 + 0x309,0x5dc);
      local_54 = 0;
      local_50[0] = 0;
      iVar6 = (**(code **)(*param_1 + 0x20))(param_1,local_44,local_40 & 0xffff,&local_54,local_50);
      if (iVar6 < 0) {
LAB_004e1128:
        fn_004edc70(param_1 + 0x18);
        return iVar6;
      }
      if ((0xb < local_54) &&
         (iVar6 = fn_004dbcf0(auStack_48), uVar2 = local_50[0], uVar1 = local_54, iVar6 != 0)) {
        if (local_3c == '\x01') {
          if ((param_6 == 0) && (iVar6 = fn_006d6700(param_1,local_50[0]), iVar6 != 0xff)) {
            *param_4 = (uint)local_38;
            *param_5 = (char)iVar6;
            fn_006d53ac(auStack_48,param_2,0);
            iVar6 = 0;
            goto LAB_004e1128;
          }
        }
        else {
          piVar3 = param_1 + 0x6b5;
          fn_004edc34(piVar3);
          if ((local_3c == '\x14' || local_3c == '\x15') ||
             ((local_3c == '\x16' || local_3c == '$') || local_3c == '&')) {
            iVar6 = fn_006d5980(DAT_008bf504);
            if (iVar6 != 0) {
              fn_004ea91c(*(undefined4 *)(DAT_008bf504 + 0x1c),local_44,local_3c,uVar1,uVar2);
              fn_004edc70(piVar3);
              goto LAB_004e12cc;
            }
          }
          else {
            puVar7 = (uint *)(param_1 + 0x7c0);
            uVar4 = *puVar7;
            if (uVar4 < 0xc) {
              fn_00301a9c(param_1 + uVar4 * 0x16 + 0x6b8,local_44,uVar1);
              param_1[uVar4 * 0x16 + 0x6cc] = uVar1;
              *(char *)(param_1 + uVar4 * 0x16 + 0x6cd) = local_3c;
              *(undefined2 *)((int)param_1 + uVar4 * 0x58 + 0x1b36) = uVar2;
              if ((char)param_1[0x7c1] == '\0') {
                *(undefined1 *)(param_1 + 0x7c1) = 1;
              }
              *puVar7 = *puVar7 + 1;
              fn_004edc70(piVar3);
              goto LAB_004e12cc;
            }
          }
          fn_004edc70(piVar3);
        }
      }
LAB_004e12cc:
      fn_004edc70(param_1 + 0x18);
      return -0x2e9eb7d8;
    }
  }
  return -0x275eb798;
}



int fn_004e0c40(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)fn_004e2740();
  *puVar1 = &DAT_00856564;
  *(undefined2 *)((int)puVar1 + 0x1f16) = 0;
  iVar2 = fn_004ec4a0(puVar1 + 0x7c6);
  iVar2 = fn_004edc74(iVar2 + 0x10,0xffffffff);
  *(undefined4 *)(iVar2 + 0xc) = 0;
  *(undefined2 *)(iVar2 + -0x1ee6) = 0;
  *(undefined2 *)(iVar2 + -0x1ee4) = 0xffff;
  *(undefined4 *)(iVar2 + -0xd04) = 200;
  fn_004e1338(iVar2 + -0x1f28);
  *(undefined2 *)(iVar2 + -0x1ee8) = *(undefined2 *)(iVar2 + -0x1ee6);
  return iVar2 + -0x1f28;
}



void fn_004e1338(int param_1)

{
  fn_00158f40(param_1 + 0x10,0x18,*(ushort *)(param_1 + 0x42) & 0xff);
  return;
}



void fn_004e0b18(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1 + 0x1f28;
  fn_004edc34(iVar2);
  if ((*(char *)(param_1 + 0x1f26) == '\0') || (iVar1 = fn_004ec454(param_1 + 0x1f18), -1 < iVar1))
  {
    fn_004edc70(iVar2);
  }
  else {
    fn_004edc70(iVar2);
  }
  if (*(int *)(param_1 + 0x1234) - 0x100000U < 0x3ff00000) {
    if (*(int *)(param_1 + 0x1234) != 0) {
      fn_00656b7c();
    }
    *(undefined4 *)(param_1 + 0x1234) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x1f34);
  if (iVar2 - 0x100000U < 0x3ff00000) {
    if (iVar2 != 0) {
      fn_00656b7c();
    }
    *(int *)(param_1 + 0x1f34) = 0;
  }
  if (*(int *)(param_1 + 0x1210) - 0x100000U < 0x3ff00000) {
    if (*(int *)(param_1 + 0x1210) != 0) {
      fn_00656b7c();
    }
    *(undefined4 *)(param_1 + 0x1210) = 0;
  }
  fn_004e2594(param_1);
  return;
}



undefined4 fn_004e0920(int *param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int local_20;
  
  if (param_2 - 0x100000U < 0x3ff00000) {
    uVar1 = (**(code **)(*param_1 + 0x54))(param_1);
    if (param_3 <= uVar1) {
      piVar4 = param_1 + 0x485;
      fn_004edc34(piVar4);
      (**(code **)(*param_1 + 0x90))(param_1,param_1[0x488]);
      iVar2 = (**(code **)(*param_1 + 0x50))(param_1);
      fn_001694e4(iVar2 + param_1[0x488],param_2,param_3);
      iVar2 = (**(code **)(*param_1 + 0x50))(param_1);
      local_20 = fn_0051f998(param_1[0x488],iVar2 + param_3);
      if (-1 < local_20) {
        fn_004edc70(piVar4);
        return 0;
      }
      if (local_20 == -0x375eec16) {
        fn_004edc70(piVar4);
        return 0xd8a14868;
      }
      uVar3 = fn_006d5dec(param_1,&local_20);
      fn_004edc70(piVar4);
      return uVar3;
    }
    if (DAT_008c0630 != 0) {
      (**(code **)(*param_1 + 0x54))
                (param_1,*(code **)(*param_1 + 0x54),0,(char *)&DAT_004e0ae4,
                 "local_UdsNetworkManager.cpp","SetApplicationDataToBeacon");
    }
  }
  return 0xe0e14826;
}



undefined4 fn_004e0888(int *param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = (**(code **)(*param_1 + 0x54))(param_1);
  if (uVar1 < *(uint *)(param_2 + 0x1d8)) {
    uVar2 = 0xe0e14826;
  }
  else {
    iVar3 = (**(code **)(*param_1 + 0x50))(param_1);
    fn_0016986c(iVar3 + param_2 + 0x10d,param_2 + 0x10d,*(undefined4 *)(param_2 + 0x1d8));
    (**(code **)(*param_1 + 0x90))(param_1,param_2 + 0x10d);
    iVar3 = (**(code **)(*param_1 + 0x50))(param_1);
    *(int *)(param_2 + 0x1d8) = iVar3 + *(int *)(param_2 + 0x1d8);
    uVar2 = 0;
  }
  return uVar2;
}


