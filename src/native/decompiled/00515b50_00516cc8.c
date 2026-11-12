#include "00515b50_00516cc8.h"



void fn_00516cc8(undefined4 *param_1)

{
  param_1[1] = 0;
  fn_004ed714(param_1 + 3);
  *(undefined1 *)(param_1 + 7) = 0;
  *param_1 = 0;
  return;
}



void fn_0051656c(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,undefined4 param_5)

{
  uint uVar1;
  
  uVar1 = fn_006da08c(DAT_008bf4cc,0);
  fn_005157b0(param_1,param_2,uVar1 & param_3,param_4,param_5,*(undefined1 *)(param_1 + 0x13d),
               *(undefined4 *)(param_1 + 0x144),0);
  return;
}



void fn_005164d0(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 uVar1;
  
  if (param_3 != 0xff) {
    fn_00515b50();
    return;
  }
  if (*(char *)(param_1 + 0x100) == '\0') {
    uVar1 = fn_006da08c(DAT_008bf4cc,0);
    fn_005157b0(param_1,param_2,uVar1,param_4,param_5,*(undefined1 *)(param_1 + 0x13d),
                 *(undefined4 *)(param_1 + 0x144),0);
    return;
  }
  fn_005169fc(param_1,param_2,param_4,param_5);
  return;
}



undefined4 fn_005169fc(int param_1,undefined4 param_2,int param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint local_b0;
  uint local_ac;
  undefined1 local_a8 [4];
  uint local_a4 [23];
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c [2];
  int iStack_34;
  undefined4 local_30;
  int local_2c;
  uint uStack_28;
  
  if (((*(int *)(param_1 + 4) != 0) && (*(int *)(param_1 + 0x10c) == 0)) &&
     (local_48 = (param_3 + 0x13U & 0xfffffffc) + 4, local_48 <= *(uint *)(param_1 + 0x104))) {
    uVar7 = *(int *)(param_1 + 0x108) - local_48;
    iStack_34 = param_1;
    local_30 = param_2;
    local_2c = param_3;
    uStack_28 = param_4;
    fn_00515fe0(param_1);
    if ((*(char *)(param_1 + 0x13d) != -3) && (uVar1 = fn_006da08c(DAT_008bf4cc,0), uVar1 != 0)) {
      local_44 = 0;
      fn_00101a1c(local_a8,&LAB_006f9410,8,0xc);
      iVar6 = 0;
      if (*(int *)(param_1 + 0x148) - 0x100000U < 0x3ff00000) {
        iVar2 = fn_006da56c(*(int *)(param_1 + 0x148),*(undefined1 *)(param_1 + 0x13d),&local_40);
        if (iVar2 < 0) {
          return 0;
        }
        local_ac = local_40 & uVar1;
        uVar1 = uVar1 & ~local_ac;
        if (uVar1 != 0) {
          uVar5 = 0;
          do {
            if ((uVar1 & 1 << (uVar5 & 0xff)) != 0) {
              uVar4 = uVar5 & 0xff;
              iVar2 = fn_006da484(*(undefined4 *)(param_1 + 0x148),*(undefined1 *)(param_1 + 0x13d)
                                   ,uVar4,&local_b0);
              if (-1 < iVar2) {
                if (*(char *)(param_1 + 0x13d) != (char)local_b0) {
                  if ((char)local_b0 == -3) {
                    iVar2 = fn_006d6e30(param_1 + 0x14c);
                    if (iVar2 != 0) {
                      local_44 = local_44 | 1 << uVar4;
                    }
                    uVar1 = uVar1 & ~(1 << uVar4);
                  }
                  else {
                    fn_006da4e0(*(undefined4 *)(param_1 + 0x148),*(char *)(param_1 + 0x13d),
                                 (char)local_b0,local_3c);
                    uVar4 = local_3c[0] & uVar1;
                    local_a8[iVar6 * 8] = (char)local_b0;
                    uVar1 = uVar1 & ~uVar4;
                    local_a4[iVar6 * 2] = uVar4;
                    iVar6 = iVar6 + 1;
                  }
                  goto LAB_00516b98;
                }
              }
              uVar1 = uVar1 & ~(1 << uVar4);
            }
LAB_00516b98:
            uVar5 = uVar5 + 1;
          } while ((int)uVar5 < 0xc);
        }
      }
      else {
        local_44 = 0;
        local_ac = uVar1;
      }
      fn_00517020(param_1 + 0xc,*(undefined1 *)(param_1 + 0x13d),*(undefined4 *)(param_1 + 0x144));
      local_b0 = param_4;
      fn_00516e40(param_1 + 0xc,local_30,local_2c,0);
      local_b0 = param_4;
      fn_0051603c(param_1,local_ac,local_48,uVar7);
      iVar2 = 0;
      if (0 < iVar6) {
        do {
          local_b0 = uVar7;
          local_ac = param_4;
          fn_005167a4(param_1,local_a8[iVar2 * 8],local_a4[iVar2 * 2],local_48);
          iVar2 = iVar2 + 1;
        } while (iVar2 < iVar6);
      }
      local_b0 = param_4;
      fn_005165d8(param_1,local_44,local_48,uVar7);
      uVar3 = fn_0050a29c(param_1);
      return uVar3;
    }
  }
  return 0;
}



void fn_00515ea8(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  
  fn_00515fe0();
  fn_00509fc4(param_1);
  uVar1 = DAT_008bf4cc;
  piVar7 = *(int **)(param_1 + 8);
  uVar8 = 0;
  uVar6 = piVar7[1];
  if (uVar6 != piVar7[2]) {
    do {
      if (uVar6 < *(uint *)*piVar7) {
        iVar5 = ((uint *)*piVar7)[1] + uVar6 * 0x5ec;
      }
      else {
        iVar5 = 0;
      }
      if (*(char *)(iVar5 + 0x5e8) != '\0') {
        if (((*(char *)(iVar5 + 5) != '\x01') &&
            (iVar2 = fn_0050b144(uVar1,iVar5 + 0x5d8), iVar2 - 0x100000U < 0x3ff00000)) &&
           (*(byte *)(iVar2 + 0x14) < 0xc)) {
          uVar8 = uVar8 | 1 << (uint)*(byte *)(iVar2 + 0x14);
        }
        for (uVar4 = 0; uVar4 < *(int *)(iVar5 + 0x5b8) - 0xcU;
            uVar4 = (*(int *)(param_1 + 0xdc) + 0x13U & 0xfffffffc) + uVar4 + 4) {
          fn_00516cec(param_1 + 0xdc,iVar5,uVar4);
          if (*(int *)(param_1 + 0xe0) == 0) break;
          uVar3 = (uint)*(byte *)(*(int *)(param_1 + 0xe0) + 1);
          if (uVar3 < 0xc) {
            uVar8 = uVar8 | 1 << uVar3;
          }
        }
      }
      uVar6 = uVar6 + 1;
      if (*(int *)*piVar7 <= (int)uVar6) {
        uVar6 = 0;
      }
    } while (uVar6 != piVar7[2]);
  }
  fn_0050fc24(param_1 + 0x164,uVar8,param_2);
  return;
}



void fn_00515de0(undefined4 param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  uint local_20 [2];
  
  uVar5 = DAT_008bf4cc;
  uVar2 = fn_006dafe4(param_2);
  uVar3 = fn_006da08c(uVar5,0);
  if ((uVar2 & uVar3) != 0) {
    uVar7 = *param_2;
    uVar4 = *(uint *)(param_2[1] + 0xc);
    local_20[0] = ((uVar4 >> 0x10) << 0x18 | (uVar4 >> 0x18) << 0x10) >> 0x10 |
                  ((uVar4 & 0xff) << 8 | uVar4 >> 8 & 0xff) << 0x10;
    uVar1 = *(undefined1 *)(param_2[1] + 1);
    uVar5 = fn_006db024(param_2);
    iVar6 = fn_005157b0(param_1,local_20,uVar2 & uVar3,uVar7,(*(byte *)param_2[1] & 8) >> 3,uVar1,
                         uVar5,1);
    if (iVar6 != 0) {
      fn_001694d4(iVar6,param_2[1] + 0x14);
      uVar5 = fn_006daff8(param_2);
      *(undefined4 *)(iVar6 + 0x10) = uVar5;
      fn_0050a490(param_1);
    }
  }
  return;
}



undefined4 fn_00515d64(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((**(byte **)(param_2 + 4) & 1) == 0) {
    uVar2 = fn_006dafe4(param_2);
    if (uVar2 == 0) {
      if ((**(byte **)(param_2 + 4) & 2) != 0) {
        return 0;
      }
    }
    else if ((uVar2 & *(uint *)(param_1 + 0x140)) == 0) {
      return 0;
    }
  }
  else if (((**(byte **)(param_2 + 4) & 2) != 0) ||
          (iVar1 = fn_006dafe4(param_2), iVar1 != *(int *)(param_1 + 0x144))) {
    return 0;
  }
  return 1;
}



undefined4 fn_00515cf4(int param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  bVar1 = **(byte **)(param_2 + 4);
  if ((bVar1 & 2) == 0) {
    if (((bVar1 & 1) == 0) || (iVar3 = fn_006dafe4(param_2), iVar3 == *(int *)(param_1 + 0x144))) {
      return 1;
    }
  }
  else if ((bVar1 & 1) == 0) {
    uVar2 = fn_006dafe4(param_2);
    if (*(uint *)(param_1 + 0x140) == 0) {
      return 1;
    }
    if ((uVar2 & ~*(uint *)(param_1 + 0x140)) != 0) {
      return 1;
    }
  }
  return 0;
}



undefined4 fn_00515b50(int param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  byte local_28 [8];
  
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x10c) != 0) {
    return 0;
  }
  uVar5 = (param_4 + 0x13U & 0xfffffffc) + 4;
  if (*(uint *)(param_1 + 0x104) < uVar5) {
    return 0;
  }
  iVar6 = *(int *)(param_1 + 0x108) - uVar5;
  fn_00515fe0(param_1);
  fn_00517020(param_1 + 0xc,*(undefined1 *)(param_1 + 0x13d),*(undefined4 *)(param_1 + 0x144));
  fn_00516e40(param_1 + 0xc,param_2,param_4,0,param_5);
  if (param_3 == 0xfe) {
    fn_00516180(param_1,uVar5,iVar6,param_5);
    goto LAB_00515cd4;
  }
  if (0xb < param_3) {
    return 0;
  }
  if (*(char *)(param_1 + 0x13d) == -3) {
    return 0;
  }
  iVar1 = 1 << (param_3 & 0xff);
  if (*(int *)(param_1 + 0x148) - 0x100000U < 0x3ff00000) {
    iVar2 = fn_006da484(*(int *)(param_1 + 0x148),*(char *)(param_1 + 0x13d),param_3,local_28);
    if ((iVar2 < 0) || (uVar4 = (uint)local_28[0], *(byte *)(param_1 + 0x13d) == uVar4)) {
      return 0;
    }
    if (uVar4 == 0xfd) {
      iVar2 = fn_006d6e30(param_1 + 0x14c);
      if (iVar2 == 0) {
        return 0;
      }
      fn_005165d8(param_1,iVar1,uVar5,iVar6,param_5);
      goto LAB_00515cd4;
    }
    if (param_3 != uVar4) {
      fn_005167a4(param_1,uVar4,iVar1,uVar5,iVar6,param_5);
      goto LAB_00515cd4;
    }
  }
  fn_005162c8(param_1,iVar1,uVar5,iVar6,param_5);
LAB_00515cd4:
  uVar3 = fn_0050a29c(param_1);
  return uVar3;
}



void fn_00515fe0(int param_1)

{
  byte bVar1;
  uint uVar2;
  
  if (0xb < *(byte *)(param_1 + 0x13d)) {
    if (*(int *)(DAT_008bf4cc + 0xa4) - 0x100000U < 0x3ff00000) {
      bVar1 = *(byte *)(*(int *)(DAT_008bf4cc + 0xa4) + 0x14);
      uVar2 = (uint)bVar1;
      *(byte *)(param_1 + 0x13d) = bVar1;
      if (uVar2 < 0xc) {
        *(int *)(param_1 + 0x140) = 1 << uVar2;
        fn_00517020(param_1 + 0xc,uVar2,*(undefined4 *)(param_1 + 0x144));
        return;
      }
    }
  }
  return;
}


