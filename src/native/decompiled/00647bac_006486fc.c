#include "00647bac_006486fc.h"



int fn_006486fc(int param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  
  if (((*(char *)(*(int *)(param_1 + 0xc) + 0x3fa) == '\x03') &&
      (iVar2 = fn_006f25cc(param_1,(int)*(char *)(param_2 + 2)), iVar2 != 0)) &&
     (iVar2 = fn_00655488(*(undefined4 *)(&DAT_0080f124 + (uint)*(byte *)(param_2 + 2) * 4),0x100),
     iVar2 != 0)) {
    cVar1 = *(char *)(param_3 + 2);
  }
  else {
    cVar1 = *(char *)(param_3 + 3);
  }
  return (int)cVar1;
}



int fn_006486a4(int param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  
  if (((*(char *)(*(int *)(param_1 + 0xc) + 0x3fa) == '\x02') &&
      (iVar2 = fn_006f25cc(param_1,(int)*(char *)(param_2 + 2)), iVar2 != 0)) &&
     (iVar2 = fn_00655488(*(undefined4 *)(&DAT_0080f10c + (uint)*(byte *)(param_2 + 2) * 4),0x100),
     iVar2 != 0)) {
    cVar1 = *(char *)(param_3 + 2);
  }
  else {
    cVar1 = *(char *)(param_3 + 3);
  }
  return (int)cVar1;
}



int fn_0064865c(int param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  
  if (((*(char *)(*(int *)(param_1 + 0xc) + 0x3fa) == '\x01') &&
      (iVar2 = fn_006f25cc(param_1,(int)*(char *)(param_2 + 2)), iVar2 != 0)) &&
     (iVar2 = fn_00655488(1,6), iVar2 != 0)) {
    cVar1 = *(char *)(param_3 + 2);
  }
  else {
    cVar1 = *(char *)(param_3 + 3);
  }
  return (int)cVar1;
}



int fn_00648554(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  int local_1c [2];
  
  iVar1 = fn_006f0b40(param_1,(int)*(char *)(*(int *)(param_1 + 0xc) + 0x59));
  if ((iVar1 != 0) && (iVar1 = fn_006f0c84(param_1,*(undefined4 *)(param_1 + 0xc),1), iVar1 == 0))
  {
    iVar1 = fn_006f0ae4(param_1);
    iVar2 = fn_006f0a30(param_1);
    local_1c[0] = param_1;
    for (; iVar1 < iVar2; iVar1 = (int)(char)((char)iVar1 + '\x01')) {
      iVar3 = fn_006f14a4(param_1,iVar1);
      if ((iVar3 != 0) && (iVar3 = fn_006522b4(local_1c,iVar3,iVar1), iVar3 != 0)) {
        iVar1 = 0;
        pbVar4 = (byte *)(*(int *)(param_1 + 0xc) + 0x120);
        if (*pbVar4 != 0) {
          do {
            iVar2 = fn_00692048(local_1c,(int)*(short *)(pbVar4 + iVar1 * 2 + 4));
            if (iVar2 != 0) {
              return (int)*(char *)(param_3 + 2);
            }
            iVar1 = iVar1 + 1;
          } while (iVar1 < (int)(uint)*pbVar4);
        }
        break;
      }
    }
  }
  return (int)*(char *)(param_3 + 3);
}



int fn_006481dc(uint param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint unaff_r8;
  uint unaff_r9;
  uint local_20;
  uint local_1c;
  
  iVar1 = fn_006f0ae4();
  iVar2 = fn_006f0a30(param_1);
  local_1c = unaff_r9 & 0xffff0000 | 0x146;
  local_20 = param_1;
  do {
    if (iVar2 <= iVar1) {
LAB_006482e4:
      return (int)*(char *)(param_3 + 3);
    }
    iVar3 = fn_006f14a4(param_1,iVar1);
    if ((iVar3 != 0) && (iVar3 = fn_0064d500(&local_20,iVar3,iVar1), iVar3 != 0)) {
      uVar4 = fn_006f0ae4(param_1);
      uVar5 = fn_006f0a30(param_1);
      uVar6 = fn_006f2df8(param_1);
      uVar7 = fn_006f0aa4(param_1);
      local_20 = (uVar4 & 0xff) << 8 | unaff_r8 & 0xff000000 | 3 | (uVar5 & 0xff) << 0x10;
      iVar1 = fn_00781c64(param_1,uVar7,uVar6);
      if (iVar1 != 0) {
        return (int)*(char *)(param_3 + 2);
      }
      goto LAB_006482e4;
    }
    iVar1 = (int)(char)((char)iVar1 + '\x01');
  } while( true );
}



int fn_006480c4(uint param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint unaff_r8;
  uint unaff_r9;
  uint local_20;
  uint local_1c;
  
  iVar1 = fn_006f0ae4();
  iVar2 = fn_006f0a30(param_1);
  local_1c = unaff_r9 & 0xffff0000 | 0x145;
  local_20 = param_1;
  do {
    if (iVar2 <= iVar1) {
LAB_006481cc:
      return (int)*(char *)(param_3 + 3);
    }
    iVar3 = fn_006f14a4(param_1,iVar1);
    if ((iVar3 != 0) && (iVar3 = fn_0064d500(&local_20,iVar3,iVar1), iVar3 != 0)) {
      uVar4 = fn_006f0ae4(param_1);
      uVar5 = fn_006f0a30(param_1);
      uVar6 = fn_006f2df8(param_1);
      uVar7 = fn_006f0aa4(param_1);
      local_20 = (uVar4 & 0xff) << 8 | unaff_r8 & 0xff000000 | 2 | (uVar5 & 0xff) << 0x10;
      iVar1 = fn_00781c64(param_1,uVar7,uVar6);
      if (iVar1 != 0) {
        return (int)*(char *)(param_3 + 2);
      }
      goto LAB_006481cc;
    }
    iVar1 = (int)(char)((char)iVar1 + '\x01');
  } while( true );
}



int fn_00647e50(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint unaff_r8;
  undefined4 local_20;
  uint local_1c;
  
  iVar2 = fn_006f0ae4();
  iVar3 = fn_006f0a30(param_1);
  local_1c = unaff_r8 & 0xffff0000 | 0x142;
  local_20 = param_1;
  do {
    if (iVar3 <= iVar2) {
LAB_00647ef0:
      cVar1 = *(char *)(param_3 + 3);
LAB_00647ef4:
      return (int)cVar1;
    }
    iVar4 = fn_006f14a4(param_1,iVar2);
    if ((iVar4 != 0) && (iVar4 = fn_0064d500(&local_20,iVar4,iVar2), iVar4 != 0)) {
      iVar2 = fn_006f1d3c(param_1);
      if (iVar2 == 0) {
        cVar1 = *(char *)(param_3 + 2);
        goto LAB_00647ef4;
      }
      goto LAB_00647ef0;
    }
    iVar2 = (int)(char)((char)iVar2 + '\x01');
  } while( true );
}



int fn_00647da0(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint unaff_r8;
  undefined4 local_20;
  uint local_1c;
  
  iVar2 = fn_006f0ae4();
  iVar3 = fn_006f0a30(param_1);
  local_1c = unaff_r8 & 0xffff0000 | 0x141;
  local_20 = param_1;
  do {
    if (iVar3 <= iVar2) {
LAB_00647e40:
      cVar1 = *(char *)(param_3 + 3);
LAB_00647e44:
      return (int)cVar1;
    }
    iVar4 = fn_006f14a4(param_1,iVar2);
    if ((iVar4 != 0) && (iVar4 = fn_0064d500(&local_20,iVar4,iVar2), iVar4 != 0)) {
      iVar2 = fn_006f1d3c(param_1);
      if (iVar2 == 0) {
        cVar1 = *(char *)(param_3 + 2);
        goto LAB_00647e44;
      }
      goto LAB_00647e40;
    }
    iVar2 = (int)(char)((char)iVar2 + '\x01');
  } while( true );
}



int fn_00647d24(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = fn_006f0ae4();
  iVar2 = fn_006f0a30(param_1);
  if (iVar1 < iVar2) {
    do {
      iVar2 = fn_006f14a4(param_1,iVar1);
      if (iVar2 != 0) {
        iVar2 = fn_006f37a0();
        iVar3 = iVar3 + iVar2;
        if (3 < iVar3) {
          return (int)*(char *)(param_3 + 2);
        }
      }
      iVar1 = (int)(char)((char)iVar1 + '\x01');
      iVar2 = fn_006f0a30(param_1);
    } while (iVar1 < iVar2);
  }
  return (int)*(char *)(param_3 + 3);
}



int fn_00647cac(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_006f0ae4();
  iVar2 = fn_006f0a30(param_1);
  if (iVar1 < iVar2) {
    do {
      iVar2 = fn_006f14a4(param_1,iVar1);
      if ((iVar2 != 0) && (iVar2 = fn_006f37a0(), 0 < iVar2)) {
        return (int)*(char *)(param_3 + 3);
      }
      iVar1 = (int)(char)((char)iVar1 + '\x01');
      iVar2 = fn_006f0a30(param_1);
    } while (iVar1 < iVar2);
  }
  return (int)*(char *)(param_3 + 2);
}



int fn_00647c2c(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_18;
  
  local_18 = param_4;
  iVar1 = fn_006f0ae4();
  iVar2 = fn_006f0a30(param_1);
  local_18 = param_1;
  while( true ) {
    if (iVar2 <= iVar1) {
      return 0;
    }
    iVar3 = fn_006f14a4(param_1,iVar1);
    if ((iVar3 != 0) && (iVar3 = fn_00650334(&local_18,iVar3,iVar1), iVar3 != 0)) break;
    iVar1 = (int)(char)((char)iVar1 + '\x01');
  }
  return (int)*(char *)(param_3 + 2);
}



int fn_00647bac(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_18;
  
  local_18 = param_4;
  iVar1 = fn_006f0ae4();
  iVar2 = fn_006f0a30(param_1);
  local_18 = param_1;
  while( true ) {
    if (iVar2 <= iVar1) {
      return 0;
    }
    iVar3 = fn_006f14a4(param_1,iVar1);
    if ((iVar3 != 0) && (iVar3 = fn_00650268(&local_18,iVar3,iVar1), iVar3 != 0)) break;
    iVar1 = (int)(char)((char)iVar1 + '\x01');
  }
  return (int)*(char *)(param_3 + 2);
}


