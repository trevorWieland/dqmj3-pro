#include "006d8a94_006d9464.h"



undefined4 fn_006d9464(int param_1)

{
  if ((*(int *)(param_1 + 100) == 0) || (*(char *)(param_1 + 0x71) != '\x04')) {
    return 0;
  }
  return *(undefined4 *)(param_1 + (uint)(*(char *)(param_1 + 0xb5) == '\0') * 4 + 0xc4);
}



undefined4 fn_006d93cc(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  
  while (param_2 == 0) {
    if (*(char *)(param_1 + 0x71) == '\x03') {
      return 1;
    }
    uVar1 = (uint)*(byte *)(param_1 + 0xb5);
    if (*(int *)(param_1 + (uint)(uVar1 == 0) * 4 + 0xc4) == 0) {
      param_2 = *(int *)(param_1 + uVar1 * 4 + 0xc4);
      if (param_2 == 0) {
        return 1;
      }
    }
    else {
      param_2 = *(int *)(param_1 + (uint)(uVar1 == 0) * 4 + 0xc4);
    }
  }
  iVar2 = *(int *)(param_1 + 0x124);
  bVar3 = iVar2 != param_2;
  if (bVar3) {
    iVar2 = *(int *)(param_1 + 0x128);
  }
  if (bVar3 && iVar2 != param_2) {
    bVar3 = *(int *)(param_1 + 300) != param_2;
    if (bVar3) {
      param_1 = *(int *)(param_1 + 0x130);
    }
    if (bVar3 && param_1 != param_2) {
      return 1;
    }
  }
  return 0;
}



undefined4 fn_006d9384(void)

{
  if (((DAT_008bf4e0 - 0x100000U < 0x3ff00000) && (*(byte *)(DAT_008bf4e0 + 99) < 0xc)) &&
     (*(byte *)(DAT_008bf4e0 + 99) == *(byte *)(DAT_008bf4e0 + 0x62))) {
    return 1;
  }
  return 0;
}



undefined4 fn_006d92e4(int param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  if (param_2 < 0xc) {
    uVar2 = 1;
    if (param_2 != 0) {
      if ((param_2 & 1) != 0) {
        uVar2 = 2;
      }
      for (param_2 = param_2 >> 1; param_2 != 0; param_2 = param_2 - 1) {
        uVar2 = uVar2 << 2;
      }
    }
    uVar1 = 0;
    if ((*(uint *)(param_1 + 0x6c) & uVar2) != 0) {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



uint fn_006d9268(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    uVar2 = fn_006d897c();
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    uVar1 = fn_006d897c();
    uVar2 = uVar2 | uVar1;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar1 = fn_006d897c();
    uVar2 = uVar2 | uVar1;
  }
  return uVar2;
}



undefined4 fn_006d9250(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 100) == '\x01') {
    uVar1 = 0;
  }
  else {
    uVar1 = 0xd8a148f8;
  }
  return uVar1;
}



char fn_006d920c(int param_1)

{
  char cVar1;
  
  if (*(char *)(param_1 + 100) == '\x01') {
    cVar1 = '\0';
  }
  else {
    if ((*(char *)(param_1 + 0x65) == '\x01') ||
       (cVar1 = *(char *)(*(int *)(param_1 + 0x30) + 0x58), cVar1 == '\0')) {
      return *(char *)(param_1 + 0x65);
    }
    if (cVar1 == '\x02') {
      cVar1 = '\x04';
    }
    else {
      cVar1 = '\x05';
    }
  }
  return cVar1;
}



void fn_006d91b8(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 local_10;
  undefined4 local_c;
  
  local_10 = 0;
  local_c = 0;
  iVar1 = fn_006dbbc0(DAT_008bf4d4,&local_10,*(undefined1 *)(param_2 + 99));
  if (iVar1 < 0) {
    puVar2 = (undefined4 *)fn_0013d4ec();
    uVar3 = puVar2[1];
    *param_1 = *puVar2;
    param_1[1] = uVar3;
  }
  else {
    *param_1 = local_10;
    param_1[1] = local_c;
  }
  return;
}



longlong fn_006d8f00(int param_1,uint param_2,uint param_3,int param_4,undefined4 *param_5,
                     uint *param_6)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  bool bVar9;
  bool bVar10;
  
  iVar3 = *(int *)(param_1 + 0x94);
  if (iVar3 == 0) {
    uVar4 = 0;
    if (DAT_008c0630 != 0) {
      uVar4 = 8;
    }
    return CONCAT44(uVar4,&DAT_e0a14827);
  }
  bVar10 = param_2 != 0xfd;
  uVar6 = param_2;
  if (bVar10) {
    uVar6 = param_3;
  }
  bVar9 = 0xfc < uVar6;
  if (bVar10 && param_3 != 0xfd) {
    bVar9 = param_4 - 0x100000U < 0x3ff00001;
  }
  if (bVar9 && ((bVar10 && param_3 != 0xfd) && param_4 - 0x100000U != 0x3ff00000)) {
    uVar6 = 0xc;
    uVar7 = 0xc;
    uVar5 = (uint)*(ushort *)(DAT_008bf4e0 + 0x5e);
    if (uVar5 != 0) {
      uVar2 = 0;
      pbVar8 = (byte *)(param_1 + 0x85);
      do {
        bVar1 = *pbVar8;
        pbVar8 = pbVar8 + 1;
        if (bVar1 == param_2) {
          uVar6 = uVar2;
        }
        if (bVar1 == param_3) {
          uVar7 = uVar2;
        }
        uVar5 = uVar5 - 1;
        uVar2 = uVar2 + 1;
      } while (uVar5 != 0);
      if (uVar6 != 0xc || uVar7 != 0xc) {
        *(bool *)param_4 = uVar6 < uVar7;
        *param_5 = *(undefined4 *)(param_1 + 0x94);
        uVar6 = *(uint *)(param_1 + 0x98);
        *param_6 = uVar6;
        return (ulonglong)uVar6 << 0x20;
      }
    }
    iVar3 = 0;
    if (DAT_008c0630 != 0) {
      iVar3 = 8;
    }
  }
  else if (DAT_008c0630 != 0) {
    iVar3 = 8;
  }
  return CONCAT44(iVar3,0xe0e14826);
}



int fn_006d8ea0(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 != param_1 + 8) {
    do {
      if ((*(int *)(iVar1 + 0xc) == *param_2) && (*(int *)(iVar1 + 0x10) == param_2[1])) {
        return (int)*(char *)(iVar1 + 0xb);
      }
      iVar1 = *(int *)(iVar1 + 4);
    } while (iVar1 != param_1 + 8);
  }
  return 0;
}



undefined4 fn_006d8e38(int param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 != param_1 + 8) {
    do {
      if ((*(int *)(iVar1 + 0xc) == *param_2) && (*(int *)(iVar1 + 0x10) == param_2[1])) {
        *param_3 = *(undefined4 *)(iVar1 + 0x14);
        return 1;
      }
      iVar1 = *(int *)(iVar1 + 4);
    } while (iVar1 != param_1 + 8);
  }
  return 0;
}



undefined4 fn_006d8d80(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if (*(uint *)(param_1 + 0x88) != 0) {
    do {
      if (*(byte *)(*(int *)(param_1 + 0x74) + uVar1) == param_2) {
        if (*(char *)(*(int *)(param_1 + 0x70) + uVar1 * 0x54 + 0x27) == '\x02') {
          return 1;
        }
        return 0;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 0x88));
  }
  return 0;
}



undefined4 fn_006d8d50(void)

{
  return 0xc;
}



void fn_006d8a94(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = *(uint *)(DAT_008bf49c + 0x30);
  iVar5 = *(int *)(DAT_008bf49c + 0x34);
  uVar1 = *(uint *)(param_1 + 0x80);
  iVar3 = *(int *)(param_1 + 0x84);
  puVar2 = (undefined4 *)fn_004f0ce8();
  iVar3 = fn_0011c134(uVar4 - uVar1,iVar5 - (iVar3 + (uint)(uVar4 < uVar1)),*puVar2,puVar2[1]);
  if (-1 < iVar3) {
    DAT_008edb24 = *(undefined1 *)(param_1 + 0x70);
    DAT_008ed970 = iVar3;
  }
  return;
}


