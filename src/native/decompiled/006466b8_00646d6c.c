#include "006466b8_00646d6c.h"



int fn_00646d6c(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint unaff_r4;
  int iVar7;
  undefined4 local_28;
  uint local_24;
  
  iVar1 = fn_006f0ae4();
  iVar2 = fn_006f0a30(param_1);
  uVar3 = fn_006f0aa4(param_1);
  uVar4 = fn_006f2df8(param_1);
  local_24 = unaff_r4 & 0xffff0000 | uVar3 & 0xff | (uVar4 & 0xff) << 8;
  local_28 = param_1;
  do {
    if (iVar2 <= iVar1) {
      return (int)*(char *)(param_3 + 3);
    }
    iVar5 = fn_006f14a4(param_1,iVar1);
    if (iVar5 != 0) {
      iVar7 = 0;
      if (*(char *)(iVar5 + 0x120) != '\0') {
        do {
          iVar6 = fn_00653ab4(&local_28,(int)*(short *)((byte *)(iVar5 + 0x120) + iVar7 * 2 + 4),
                               iVar1);
          if (iVar6 != 0) {
            return (int)*(char *)(param_3 + 2);
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < (int)(uint)*(byte *)(iVar5 + 0x120));
      }
    }
    iVar1 = (int)(char)((char)iVar1 + '\x01');
  } while( true );
}



int fn_00646c54(undefined4 param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint unaff_r4;
  byte *pbVar5;
  undefined4 local_28;
  uint local_24;
  
  uVar1 = fn_006f0ae4();
  iVar2 = fn_006f0a30(param_1);
  if ((int)uVar1 < iVar2) {
    do {
      iVar2 = fn_006f0aa4(param_1);
      iVar3 = fn_006f2df8(param_1);
      local_24 = uVar1 & 0xff | unaff_r4 & 0xffffff00;
      local_28 = param_1;
      iVar4 = fn_006f14a4(param_1,uVar1);
      if (iVar4 != 0) {
        pbVar5 = (byte *)(iVar4 + 0x120);
        for (; iVar2 < iVar3; iVar2 = (int)(char)((char)iVar2 + '\x01')) {
          iVar4 = fn_006f14a4(param_1,iVar2);
          if ((iVar4 != 0) && (unaff_r4 = 0, *pbVar5 != 0)) {
            do {
              iVar4 = fn_00652e3c(&local_28,(int)*(short *)(pbVar5 + unaff_r4 * 2 + 4),iVar2);
              if (iVar4 != 0) {
                return (int)*(char *)(param_3 + 3);
              }
              unaff_r4 = unaff_r4 + 1;
            } while ((int)unaff_r4 < (int)(uint)*pbVar5);
          }
        }
      }
      uVar1 = (uint)(char)((char)uVar1 + '\x01');
      iVar2 = fn_006f0a30(param_1);
    } while ((int)uVar1 < iVar2);
  }
  return (int)*(char *)(param_3 + 2);
}



int fn_00646ba0(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined1 auStack_20 [8];
  
  iVar1 = fn_006f0ae4();
  iVar2 = fn_006f0a30(param_1);
  uVar3 = fn_006f2df8(param_1);
  uVar4 = fn_006f0aa4(param_1);
  puVar5 = (undefined4 *)fn_0065287c(auStack_20,param_1,uVar4,uVar3);
  local_28 = *puVar5;
  uStack_24 = puVar5[1];
  while( true ) {
    if (iVar2 <= iVar1) {
      return (int)*(char *)(param_3 + 2);
    }
    iVar6 = fn_006f14a4(param_1,iVar1);
    if ((iVar6 != 0) && (iVar6 = fn_00652908(&local_28,iVar6,iVar1), iVar6 != 0)) break;
    iVar1 = (int)(char)((char)iVar1 + '\x01');
  }
  return (int)*(char *)(param_3 + 3);
}



int fn_00646ad4(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_1c [4];
  
  iVar1 = fn_006f0ae4();
  iVar2 = fn_006f0a30(param_1);
  if (iVar1 < iVar2) {
    do {
      iVar2 = fn_006f14a4(param_1,iVar1);
      if (iVar2 != 0) {
        iVar4 = 0;
        if (*(char *)(iVar2 + 0x120) != '\0') {
          do {
            iVar3 = fn_00692124(auStack_1c,(int)*(short *)((byte *)(iVar2 + 0x120) + iVar4 * 2 + 4)
                                );
            if (iVar3 != 0) {
              return (int)*(char *)(param_3 + 3);
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < (int)(uint)*(byte *)(iVar2 + 0x120));
        }
      }
      iVar1 = (int)(char)((char)iVar1 + '\x01');
      iVar2 = fn_006f0a30(param_1);
    } while (iVar1 < iVar2);
  }
  return (int)*(char *)(param_3 + 2);
}



int fn_00646a28(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 local_20;
  
  local_20 = param_4;
  iVar1 = fn_006f0ae4();
  iVar2 = fn_006f0a30(param_1);
  local_20 = CONCAT31(((unsigned int)(local_20) >> 8) & 0xffffff,0xd);
  do {
    if (iVar2 <= iVar1) {
      return (int)*(char *)(param_3 + 2);
    }
    iVar3 = fn_006f14a4(param_1,iVar1);
    if (iVar3 != 0) {
      iVar5 = 0;
      if (*(char *)(iVar3 + 0x120) != '\0') {
        do {
          iVar4 = fn_0064df1c(&local_20,(int)*(short *)((byte *)(iVar3 + 0x120) + iVar5 * 2 + 4),
                               iVar1);
          if (iVar4 != 0) {
            return (int)*(char *)(param_3 + 3);
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < (int)(uint)*(byte *)(iVar3 + 0x120));
      }
    }
    iVar1 = (int)(char)((char)iVar1 + '\x01');
  } while( true );
}



int fn_00646978(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 local_20;
  
  local_20 = param_4;
  iVar1 = fn_006f0ae4();
  iVar2 = fn_006f0a30(param_1);
  if (iVar1 < iVar2) {
    do {
      iVar2 = fn_006f14a4(param_1,iVar1);
      if (iVar2 != 0) {
        local_20 = CONCAT31(((unsigned int)(local_20) >> 8) & 0xffffff,5);
        iVar4 = 0;
        if (*(char *)(iVar2 + 0x120) != '\0') {
          do {
            iVar3 = fn_0064f50c(&local_20,(int)*(short *)((byte *)(iVar2 + 0x120) + iVar4 * 2 + 4))
            ;
            if (iVar3 != 0) {
              return (int)*(char *)(param_3 + 3);
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < (int)(uint)*(byte *)(iVar2 + 0x120));
        }
      }
      iVar1 = (int)(char)((char)iVar1 + '\x01');
      iVar2 = fn_006f0a30(param_1);
    } while (iVar1 < iVar2);
  }
  return (int)*(char *)(param_3 + 2);
}



int fn_006468c8(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 local_20;
  
  local_20 = param_4;
  iVar1 = fn_006f0ae4();
  iVar2 = fn_006f0a30(param_1);
  if (iVar1 < iVar2) {
    do {
      iVar2 = fn_006f14a4(param_1,iVar1);
      if (iVar2 != 0) {
        local_20 = CONCAT31(((unsigned int)(local_20) >> 8) & 0xffffff,4);
        iVar4 = 0;
        if (*(char *)(iVar2 + 0x120) != '\0') {
          do {
            iVar3 = fn_0064f50c(&local_20,(int)*(short *)((byte *)(iVar2 + 0x120) + iVar4 * 2 + 4))
            ;
            if (iVar3 != 0) {
              return (int)*(char *)(param_3 + 3);
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < (int)(uint)*(byte *)(iVar2 + 0x120));
        }
      }
      iVar1 = (int)(char)((char)iVar1 + '\x01');
      iVar2 = fn_006f0a30(param_1);
    } while (iVar1 < iVar2);
  }
  return (int)*(char *)(param_3 + 2);
}



int fn_00646818(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 local_20;
  
  local_20 = param_4;
  iVar1 = fn_006f0ae4();
  iVar2 = fn_006f0a30(param_1);
  if (iVar1 < iVar2) {
    do {
      iVar2 = fn_006f14a4(param_1,iVar1);
      if (iVar2 != 0) {
        local_20 = CONCAT31(((unsigned int)(local_20) >> 8) & 0xffffff,3);
        iVar4 = 0;
        if (*(char *)(iVar2 + 0x120) != '\0') {
          do {
            iVar3 = fn_0064f50c(&local_20,(int)*(short *)((byte *)(iVar2 + 0x120) + iVar4 * 2 + 4))
            ;
            if (iVar3 != 0) {
              return (int)*(char *)(param_3 + 3);
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < (int)(uint)*(byte *)(iVar2 + 0x120));
        }
      }
      iVar1 = (int)(char)((char)iVar1 + '\x01');
      iVar2 = fn_006f0a30(param_1);
    } while (iVar1 < iVar2);
  }
  return (int)*(char *)(param_3 + 2);
}



int fn_00646768(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 local_20;
  
  local_20 = param_4;
  iVar1 = fn_006f0ae4();
  iVar2 = fn_006f0a30(param_1);
  if (iVar1 < iVar2) {
    do {
      iVar2 = fn_006f14a4(param_1,iVar1);
      if (iVar2 != 0) {
        local_20 = CONCAT31(((unsigned int)(local_20) >> 8) & 0xffffff,2);
        iVar4 = 0;
        if (*(char *)(iVar2 + 0x120) != '\0') {
          do {
            iVar3 = fn_0064f50c(&local_20,(int)*(short *)((byte *)(iVar2 + 0x120) + iVar4 * 2 + 4))
            ;
            if (iVar3 != 0) {
              return (int)*(char *)(param_3 + 3);
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < (int)(uint)*(byte *)(iVar2 + 0x120));
        }
      }
      iVar1 = (int)(char)((char)iVar1 + '\x01');
      iVar2 = fn_006f0a30(param_1);
    } while (iVar1 < iVar2);
  }
  return (int)*(char *)(param_3 + 2);
}



int fn_006466b8(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 local_20;
  
  local_20 = param_4;
  iVar1 = fn_006f0ae4();
  iVar2 = fn_006f0a30(param_1);
  if (iVar1 < iVar2) {
    do {
      iVar2 = fn_006f14a4(param_1,iVar1);
      if (iVar2 != 0) {
        local_20 = CONCAT31(((unsigned int)(local_20) >> 8) & 0xffffff,1);
        iVar4 = 0;
        if (*(char *)(iVar2 + 0x120) != '\0') {
          do {
            iVar3 = fn_0064f50c(&local_20,(int)*(short *)((byte *)(iVar2 + 0x120) + iVar4 * 2 + 4))
            ;
            if (iVar3 != 0) {
              return (int)*(char *)(param_3 + 3);
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < (int)(uint)*(byte *)(iVar2 + 0x120));
        }
      }
      iVar1 = (int)(char)((char)iVar1 + '\x01');
      iVar2 = fn_006f0a30(param_1);
    } while (iVar1 < iVar2);
  }
  return (int)*(char *)(param_3 + 2);
}


