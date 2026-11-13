#include "006d3d30_006d43a8.h"



undefined4 fn_006d43a8(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint local_10;
  
  local_10 = param_4;
  iVar2 = fn_006dbecc(DAT_008bf4d4,&local_10,param_2,param_3);
  if ((((-1 < iVar2) && (*(char *)(param_1 + 0x18) != -3)) &&
      ((local_10 & 0xff) < (*(uint *)(param_1 + 0x14) & 0xff))) &&
     (cVar1 = *(char *)(param_1 + 0x19), (cVar1 == '\x01' || cVar1 == '\x02') || cVar1 == '\x03')) {
    pcVar3 = (char *)(*(int *)(param_1 + 0x5b4) + (local_10 & 0xff) * 0x20);
    cVar1 = *pcVar3;
    if (cVar1 != '\0') {
      pcVar3 = (char *)(uint)(byte)pcVar3[1];
    }
    if (cVar1 != '\0' && pcVar3 != (char *)0x0) {
      return 1;
    }
  }
  return 0;
}



undefined4 fn_006d4384(int param_1)

{
  undefined4 uVar1;
  
  if ((*(char *)(param_1 + 0x18) == -3) || (*(char *)(param_1 + 0x19) != '\x03')) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



undefined4 fn_006d4328(int param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  if (*(int *)(param_1 + 0x44) == -1) {
    if (*(uint *)(param_1 + 0x4c) < *(uint *)(param_1 + 0x50)) {
      return 1;
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0x5c);
    iVar2 = param_2[1] - (*(int *)(param_1 + 0x34) + (uint)(*param_2 < *(uint *)(param_1 + 0x30)));
    bVar3 = *(uint *)(param_1 + 0x58) < *param_2 - *(uint *)(param_1 + 0x30);
    if ((int)(iVar1 - (iVar2 + (uint)bVar3)) < 0 !=
        (SBORROW4(iVar1,iVar2) != SBORROW4(iVar1 - iVar2,(uint)bVar3))) {
      return 1;
    }
  }
  return 0;
}



undefined4 fn_006d4258(int param_1,int param_2,undefined4 *param_3,uint param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 *in_r12;
  bool bVar3;
  
  bVar3 = param_2 - 0x100000U < 0x3ff00000;
  uVar2 = 0xe0e14826;
  if (bVar3) {
    in_r12 = param_3 + -0x40000;
  }
  if ((bVar3 && in_r12 < (undefined4 *)0x3ff00000) && (0xf < param_4)) {
    fn_004ed514(param_2,*(undefined4 *)(param_1 + 4));
    *(undefined1 *)(param_2 + 4) = *(undefined1 *)(param_1 + 8);
    *(undefined1 *)(param_2 + 5) = *(undefined1 *)(param_1 + 9);
    *(undefined1 *)(param_2 + 6) = *(undefined1 *)(param_1 + 10);
    uVar1 = *(undefined1 *)(param_1 + 0xb);
    *(undefined1 *)(param_2 + 7) = uVar1;
    fn_004ed534(param_2 + 8,uVar1,*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
    *param_3 = 0x10;
    uVar2 = 0;
  }
  return uVar2;
}



char * fn_006d41a8(int *param_1,int param_2,uint param_3)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  bool bVar7;
  
  pcVar6 = (char *)0x0;
  pcVar1 = (char *)(**(code **)(*param_1 + 8))(param_1);
  if (param_2 != 0 && pcVar1 != (char *)0x0) {
    iVar2 = (**(code **)(*param_1 + 0xc))(param_1);
    pcVar5 = pcVar1 + iVar2;
    pcVar3 = pcVar1 + (byte)pcVar1[1] + 2;
    while (pcVar3 <= pcVar5) {
      if (*pcVar1 == -0x23) {
        uVar4 = fn_001010c8(pcVar1 + 2,param_2,3);
        bVar7 = uVar4 == 0;
        if (bVar7) {
          uVar4 = (uint)(byte)pcVar1[5];
        }
        if (bVar7 && uVar4 == param_3) {
          pcVar6 = pcVar1;
        }
      }
      pcVar1 = pcVar1 + (byte)pcVar1[1] + 2;
      pcVar3 = pcVar1 + (byte)pcVar1[1] + 2;
    }
  }
  return pcVar6;
}



void fn_006d4140(undefined4 param_1,int param_2)

{
  undefined4 local_10;
  undefined4 local_c;
  
  if (*(int *)(param_2 + 4) == 0) {
    local_10 = 0;
    local_c = 0;
    fn_0019bc50(param_1,&local_10);
    return;
  }
  fn_00166824(param_1,*(int *)(param_2 + 4) + 8);
  return;
}



undefined1 fn_006d4130(int param_1)

{
  undefined1 uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    uVar1 = *(undefined1 *)(*(int *)(param_1 + 4) + 5);
  }
  return uVar1;
}



undefined4 fn_006d4120(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 4) + 8);
  }
  return uVar1;
}



int fn_006d3fc4(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  piVar1 = (int *)(param_1 + 0x78);
  (**(code **)(*piVar1 + 8))();
  (**(code **)(*(int *)(param_1 + 0x78) + 8))();
  iVar2 = *(int *)(param_1 + 0xd8);
  iVar4 = *(int *)(param_1 + 0x104);
  iVar3 = *(int *)(param_1 + 0xec);
  (**(code **)(*(int *)(param_1 + 0x78) + 0xc))((int *)(param_1 + 0x78));
  bVar5 = (int)*(char *)(param_1 + 8) + iVar4 + iVar2 + iVar3 != 0;
  if (bVar5) {
    param_1 = 1;
  }
  if (!bVar5) {
    param_1 = 0;
  }
  (**(code **)(*piVar1 + 0xc))(piVar1);
  return param_1;
}



int fn_006d3f80(undefined4 param_1,uint *param_2)

{
  int iVar1;
  uint local_10;
  uint uStack_c;
  
  if (*param_2 == 0 && param_2[1] == 0) {
    iVar1 = -1;
  }
  else {
    fn_0013d0fc(&local_10);
    if (param_2[1] < uStack_c || uStack_c - param_2[1] < (uint)(*param_2 <= local_10)) {
      iVar1 = 0;
    }
    else {
      iVar1 = *param_2 - local_10;
    }
  }
  return iVar1;
}



int fn_006d3f08(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_18 [12];
  undefined4 local_c;
  
  local_c = 0x80680001;
  piVar1 = (int *)fn_004b8d4c(auStack_18,&local_c);
  if (*(int *)(param_1 + 0x130) != *piVar1) {
    iVar2 = fn_00482944(param_1 + 0x130);
    return iVar2;
  }
  iVar2 = *(int *)(param_1 + 0x13c);
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 300);
    if (iVar2 == 200) {
      iVar2 = *(int *)(param_1 + 0x128);
      iVar3 = DAT_008a645c;
    }
    else {
      iVar3 = DAT_008a6460;
    }
    iVar2 = iVar2 + iVar3;
  }
  return iVar2;
}



bool fn_006d3ef4(int param_1,uint param_2)

{
  return (param_2 & ~*(uint *)(param_1 + 0x2c)) == 0;
}



bool fn_006d3ecc(int *param_1,int *param_2)

{
  return param_1[1] != param_2[1] || *param_1 != *param_2;
}



undefined8 fn_006d3e90(undefined4 param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = fn_006d3b9c();
  uVar3 = fn_006d3b9c(param_2);
  lVar1 = (ulonglong)((uint)uVar2 - (uint)uVar3) * 1000;
  return CONCAT44(((int)((ulonglong)uVar2 >> 0x20) -
                  ((int)((ulonglong)uVar3 >> 0x20) + (uint)((uint)uVar2 < (uint)uVar3))) * 1000 +
                  (int)((ulonglong)lVar1 >> 0x20),(int)lVar1);
}



bool fn_006d3e6c(uint *param_1,uint *param_2)

{
  return param_1[1] <= param_2[1] && (uint)(*param_2 <= *param_1) <= param_1[1] - param_2[1];
}



undefined8 fn_006d3e5c(undefined8 *param_1)

{
  return *param_1;
}



void fn_006d3d30(undefined4 *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auStack_28 [16];
  
  uVar1 = *param_2;
  uVar4 = DAT_0089a638;
  uVar5 = DAT_0089a63c;
  iVar2 = fn_004548bc(*param_2 >> 0x1a | (param_2[1] & 0xff) << 6,(uVar1 & 0x3c00000) >> 0x16,
                       (uVar1 & 0x3e0000) >> 0x11,(uVar1 & 0x1f000) >> 0xc,(uVar1 & 0xfc0) >> 6,
                       uVar1 & 0x3f,0);
  if (iVar2 != 0) {
    uVar1 = *param_2;
    puVar3 = (undefined4 *)
             fn_001142a8(auStack_28,*param_2 >> 0x1a | (param_2[1] & 0xff) << 6,
                          (uVar1 & 0x3c00000) >> 0x16,(uVar1 & 0x3e0000) >> 0x11,
                          (uVar1 & 0x1f000) >> 0xc,(uVar1 & 0xfc0) >> 6,uVar1 & 0x3f,0);
    uVar4 = *puVar3;
    uVar5 = puVar3[1];
  }
  *param_1 = uVar4;
  param_1[1] = uVar5;
  return;
}


