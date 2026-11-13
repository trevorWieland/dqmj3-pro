#include "0063c8fc_0063cf54.h"



int fn_0063cf54(undefined4 param_1,short *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  
  iVar2 = fn_006522e8(param_1,(int)*param_2);
  if (iVar2 == 0) {
    cVar1 = *(char *)(param_3 + 3);
  }
  else {
    cVar1 = *(char *)(param_3 + 2);
  }
  return (int)cVar1;
}



int fn_0063cf34(undefined4 param_1,short *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  
  iVar2 = fn_006522e8(param_1,(int)*param_2);
  if (iVar2 == 0) {
    cVar1 = *(char *)(param_3 + 3);
  }
  else {
    cVar1 = *(char *)(param_3 + 2);
  }
  return (int)cVar1;
}



int fn_0063cf14(undefined4 param_1,short *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  
  iVar2 = fn_006522e8(param_1,(int)*param_2);
  if (iVar2 == 0) {
    cVar1 = *(char *)(param_3 + 3);
  }
  else {
    cVar1 = *(char *)(param_3 + 2);
  }
  return (int)cVar1;
}



int fn_0063cef4(undefined4 param_1,short *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  
  iVar2 = fn_006522e8(param_1,(int)*param_2);
  if (iVar2 == 0) {
    cVar1 = *(char *)(param_3 + 3);
  }
  else {
    cVar1 = *(char *)(param_3 + 2);
  }
  return (int)cVar1;
}



int fn_0063ce30(int param_1,undefined4 param_2,int param_3)

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
  local_24 = (uint)*(byte *)(param_1 + 4) | unaff_r4 & 0xffffff00;
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
          iVar4 = fn_00652830(&local_28,(int)*(short *)((byte *)(iVar3 + 0x120) + iVar5 * 2 + 4),
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



int fn_0063cd6c(int param_1,undefined4 param_2,int param_3)

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
  local_24 = (uint)*(byte *)(param_1 + 4) | unaff_r4 & 0xffffff00;
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
          iVar4 = fn_006536a8(&local_28,(int)*(short *)((byte *)(iVar3 + 0x120) + iVar5 * 2 + 4),
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



int fn_0063cc48(int param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_48 [2];
  undefined1 auStack_40 [5];
  char local_3b;
  int iStack_30;
  undefined4 uStack_2c;
  int local_28;
  
  iVar8 = *(int *)(param_1 + 0xc);
  local_28 = param_3;
  if (*(char *)(iVar8 + 0x9d) < '\x01') {
    iStack_30 = param_1;
    uStack_2c = param_2;
    fn_00655a88(auStack_40);
    uVar2 = *(undefined4 *)(param_1 + 8);
    uVar3 = fn_006f09a0(uVar2,(int)*(char *)(param_1 + 4));
    local_3b = fn_006f3278(iVar8,0xaa,uVar3,uVar2);
    iVar4 = fn_00163cd8(0xaa,(int)*(char *)(iVar8 + 0x59));
    iVar7 = 0;
    iVar5 = fn_006f0ae4(param_1);
    iVar6 = fn_006f0a30(param_1);
    if (iVar5 < iVar6) {
      do {
        local_48[0] = 0;
        local_48[1] = 0;
        fn_00616c50(0xaa,1,0,(int)*(char *)(param_1 + 4),iVar5,*(undefined4 *)(param_1 + 8),
                     auStack_40,local_48,2);
        iVar6 = local_48[0] * local_3b;
        if (iVar4 == 8) {
          iVar7 = iVar7 + iVar6;
        }
        else if (iVar7 < iVar6) {
          iVar7 = iVar6;
        }
        iVar5 = (int)(char)((char)iVar5 + '\x01');
        iVar6 = fn_006f0a30(param_1);
      } while (iVar5 < iVar6);
    }
    if (*(short *)(iVar8 + 0x1c) <= iVar7) {
      cVar1 = *(char *)(local_28 + 2);
      goto LAB_0063cd64;
    }
  }
  cVar1 = *(char *)(local_28 + 3);
LAB_0063cd64:
  return (int)cVar1;
}



int fn_0063cb84(int param_1,undefined4 param_2,int param_3)

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
  local_24 = (uint)*(byte *)(param_1 + 4) | unaff_r4 & 0xffffff00;
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
          iVar4 = fn_0064ff60(&local_28,(int)*(short *)((byte *)(iVar3 + 0x120) + iVar5 * 2 + 4),
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



int fn_0063caac(int param_1,undefined4 param_2,int param_3)

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
  local_24 = (uint)*(byte *)(param_1 + 4) | unaff_r4 & 0xffff0000 | 0x500;
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



int fn_0063c9d4(int param_1,undefined4 param_2,int param_3)

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
  local_24 = (uint)*(byte *)(param_1 + 4) | unaff_r4 & 0xffff0000 | 0x400;
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



int fn_0063c8fc(int param_1,undefined4 param_2,int param_3)

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
  local_24 = (uint)*(byte *)(param_1 + 4) | unaff_r4 & 0xffff0000 | 0x300;
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


