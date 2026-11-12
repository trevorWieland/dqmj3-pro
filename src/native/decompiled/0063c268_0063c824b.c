#include "0063c268_0063c824b.h"



int fn_0063c824(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint unaff_r4;
  int iVar5;
  int local_28;
  uint local_24;
  
  iVar1 = fn_006f0ae4();
  iVar2 = fn_006f0a30(param_1);
  local_24 = (uint)*(byte *)(param_1 + 4) | unaff_r4 & 0xffff0000 | 0x200;
  local_28 = param_1;
  do {
    if (iVar2 <= iVar1) {
      return (int)*(char *)(param_3 + 3);
    }
    iVar3 = fn_006f14a4(param_1,iVar1);
    if (iVar3 != 0) {
      iVar5 = 0;
      if (*(char *)(iVar3 + 0x120) != '\0') {
        do {
          iVar4 = fn_006523e4(&local_28,(int)*(short *)((byte *)(iVar3 + 0x120) + iVar5 * 2 + 4),
                               iVar1);
          if (iVar4 != 0) {
            return (int)*(char *)(param_3 + 2);
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < (int)(uint)*(byte *)(iVar3 + 0x120));
      }
    }
    iVar1 = (int)(char)((char)iVar1 + '\x01');
  } while( true );
}



int fn_0063c74c(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint unaff_r4;
  int iVar5;
  int local_28;
  uint local_24;
  
  iVar1 = fn_006f0ae4();
  iVar2 = fn_006f0a30(param_1);
  local_24 = (uint)*(byte *)(param_1 + 4) | unaff_r4 & 0xffff0000 | 0x100;
  local_28 = param_1;
  do {
    if (iVar2 <= iVar1) {
      return (int)*(char *)(param_3 + 3);
    }
    iVar3 = fn_006f14a4(param_1,iVar1);
    if (iVar3 != 0) {
      iVar5 = 0;
      if (*(char *)(iVar3 + 0x120) != '\0') {
        do {
          iVar4 = fn_006523e4(&local_28,(int)*(short *)((byte *)(iVar3 + 0x120) + iVar5 * 2 + 4),
                               iVar1);
          if (iVar4 != 0) {
            return (int)*(char *)(param_3 + 2);
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < (int)(uint)*(byte *)(iVar3 + 0x120));
      }
    }
    iVar1 = (int)(char)((char)iVar1 + '\x01');
  } while( true );
}



int fn_0063c6f8(int param_1,short *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = fn_006f20b8(param_1,1,(int)*(char *)(param_1 + 4),1,0);
  iVar3 = fn_006f20b8(param_1,(int)*param_2,(int)*(char *)(param_1 + 4),1,0);
  if (iVar2 < iVar3) {
    cVar1 = *(char *)(param_3 + 2);
  }
  else {
    cVar1 = *(char *)(param_3 + 3);
  }
  return (int)cVar1;
}



int fn_0063c5f0(int param_1,undefined4 param_2,int param_3)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  
  sVar1 = fn_006f4114(*(undefined4 *)(param_1 + 0xc),0x112);
  uVar7 = 0;
  pbVar5 = (byte *)(*(int *)(param_1 + 0xc) + 0x120);
  if (*pbVar5 != 0) {
    do {
      pbVar6 = pbVar5 + uVar7 * 2 + 4;
      iVar3 = fn_00163a00((int)*(short *)pbVar6);
      if (iVar3 == 4) {
        iVar3 = fn_006f0ae4(param_1);
        iVar4 = fn_006f0a30(param_1);
        if (iVar3 < iVar4) {
          do {
            iVar4 = fn_006f14a4(param_1,iVar3);
            if ((iVar4 != 0) &&
               (iVar4 = fn_0064fed4(param_1,(int)*(short *)pbVar6,(int)*(char *)(param_1 + 4),iVar3
                                    ), iVar4 != 0)) {
              sVar2 = fn_006f4114(*(undefined4 *)(param_1 + 0xc),(int)*(short *)pbVar6);
              if ((short)(sVar2 + sVar1) <= *(short *)(*(int *)(param_1 + 0xc) + 0x1e)) {
                return (int)*(char *)(param_3 + 2);
              }
            }
            iVar3 = (int)(char)((char)iVar3 + '\x01');
            iVar4 = fn_006f0a30(param_1);
          } while (iVar3 < iVar4);
        }
      }
      uVar7 = uVar7 + 1 & 0xff;
    } while (uVar7 < *pbVar5);
  }
  return (int)*(char *)(param_3 + 3);
}



int fn_0063c4f8(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  int local_30;
  uint local_2c;
  undefined1 local_28 [8];
  
  uVar1 = fn_006f0ae4();
  iVar2 = fn_006f0a30(param_1);
  if ((int)uVar1 < iVar2) {
    do {
      uVar3 = fn_006f14a4(param_1,uVar1);
      if (uVar3 != 0) {
        local_2c = uVar3 & 0xffff0000 | (uint)*(byte *)(param_1 + 4) | (uVar1 & 0xff) << 8;
        pbVar5 = (byte *)(*(int *)(param_1 + 0xc) + 0x120);
        iVar2 = 0;
        local_30 = param_1;
        local_28[0] = 4;
        if (*pbVar5 != 0) {
          do {
            iVar4 = fn_0064f50c(local_28,(int)*(short *)(pbVar5 + iVar2 * 2 + 4));
            if ((iVar4 != 0) &&
               (iVar4 = fn_0064fec4(&local_30,(int)*(short *)(pbVar5 + iVar2 * 2 + 4)), iVar4 != 0)
               ) {
              return (int)*(char *)(param_3 + 3);
            }
            iVar2 = iVar2 + 1;
          } while (iVar2 < (int)(uint)*pbVar5);
        }
      }
      uVar1 = (uint)(char)((char)uVar1 + '\x01');
      iVar2 = fn_006f0a30(param_1);
    } while ((int)uVar1 < iVar2);
  }
  return (int)*(char *)(param_3 + 2);
}



int fn_0063c41c(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  int local_20;
  uint local_1c;
  
  uVar1 = fn_006f0ae4();
  iVar2 = fn_006f0a30(param_1);
  if ((int)uVar1 < iVar2) {
    do {
      uVar5 = fn_006f14a4(param_1,uVar1);
      iVar2 = (int)uVar5;
      if (iVar2 != 0) {
        local_1c = (uint)*(byte *)(param_1 + 4) << 8 |
                   (uint)((ulonglong)uVar5 >> 0x20) & 0xffff0000 | uVar1 & 0xff;
        iVar4 = 0;
        local_20 = param_1;
        if (*(char *)(iVar2 + 0x120) != '\0') {
          do {
            iVar3 = fn_0064fec4(&local_20,(int)*(short *)((byte *)(iVar2 + 0x120) + iVar4 * 2 + 4))
            ;
            if (iVar3 != 0) {
              return (int)*(char *)(param_3 + 3);
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < (int)(uint)*(byte *)(iVar2 + 0x120));
        }
      }
      uVar1 = (uint)(char)((char)uVar1 + '\x01');
      iVar2 = fn_006f0a30(param_1);
    } while ((int)uVar1 < iVar2);
  }
  return (int)*(char *)(param_3 + 2);
}


