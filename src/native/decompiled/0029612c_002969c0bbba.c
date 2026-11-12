#include "0029612c_002969c0bbba.h"



undefined1
fn_00296688(undefined4 param_1,char param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  char cVar1;
  char cVar3;
  char cVar2;
  int iVar4;
  undefined4 uVar5;
  undefined4 local_28;
  
  local_28 = param_4;
  iVar4 = fn_001c2ef4(1);
  if (iVar4 == 0) {
    local_28 = CONCAT31(((unsigned int)(local_28) >> 8) & 0xffffff,0x20);
    uVar5 = fn_0017484c(DAT_008977e4);
    uVar5 = fn_00175dcc(uVar5,&local_28);
    iVar4 = fn_002969c0(uVar5,param_1,param_3);
    return iVar4 != 0;
  }
  cVar1 = (char)param_3;
  cVar2 = (char)param_4;
  cVar3 = (char)param_5;
  if ((((cVar1 == '\0') || ((char)param_1 != cVar1)) && (cVar3 != '\0')) && ((char)param_1 == cVar3)
     ) {
    iVar4 = fn_002965a8(param_1,param_3,param_5);
    if (iVar4 != 0) {
      return 9;
    }
    local_28 = (local_28 & ~((unsigned int)0xff << 0)) | ((unsigned int)(0x22) & 0xff);
    uVar5 = fn_0017484c(DAT_008977e4);
    uVar5 = fn_00175d88(uVar5,&local_28);
    iVar4 = fn_002969c0(uVar5,param_1,param_5);
    if (iVar4 != 0) {
      iVar4 = fn_00296a58(param_3);
joined_r0x002968e4:
      if (iVar4 == 0) {
        return 0xd;
      }
      return 4;
    }
    local_28 = CONCAT31(((unsigned int)(local_28) >> 8) & 0xffffff,0x20);
    uVar5 = fn_0017484c(DAT_008977e4);
    uVar5 = fn_00175dcc(uVar5,&local_28);
    iVar4 = fn_002969c0(uVar5,param_1,param_3);
    if (iVar4 == 0) {
      if ((((param_2 == cVar1) || (cVar1 == '\0' && param_2 == '\0')) || (cVar2 == cVar3)) ||
         (cVar3 == '\0' && cVar2 == '\0')) {
        if ((param_2 != cVar1) && (cVar1 != '\0' || param_2 != '\0')) {
          return 10;
        }
        if ((cVar2 != cVar3) && (cVar3 != '\0' || cVar2 != '\0')) {
          return 0xb;
        }
      }
      return 2;
    }
    iVar4 = fn_00296ae0(param_5);
  }
  else {
    iVar4 = fn_002965a8(param_1,param_3,param_5);
    if (iVar4 != 0) {
      return 9;
    }
    local_28 = (local_28 & ~((unsigned int)0xff << 0)) | ((unsigned int)(0x20) & 0xff);
    uVar5 = fn_0017484c(DAT_008977e4);
    uVar5 = fn_00175dcc(uVar5,&local_28);
    iVar4 = fn_002969c0(uVar5,param_1,param_3);
    if (iVar4 == 0) {
      local_28 = CONCAT31(((unsigned int)(local_28) >> 8) & 0xffffff,0x22);
      uVar5 = fn_0017484c(DAT_008977e4);
      uVar5 = fn_00175d88(uVar5,&local_28);
      iVar4 = fn_002969c0(uVar5,param_1,param_5);
      if (iVar4 == 0) {
        if (((param_2 != cVar1) && (cVar1 != '\0' || param_2 != '\0')) &&
           ((cVar2 != cVar3 && (cVar3 != '\0' || cVar2 != '\0')))) {
          return 2;
        }
        if ((param_2 != cVar1) && (cVar1 != '\0' || param_2 != '\0')) {
          return 10;
        }
        if (cVar2 == cVar3) {
          return 2;
        }
        if (cVar3 == '\0' && cVar2 == '\0') {
          return 2;
        }
        return 0xb;
      }
      iVar4 = fn_00296a58(param_3);
      goto joined_r0x002968e4;
    }
    iVar4 = fn_00296ae0(param_5);
  }
  if (iVar4 == 0) {
    return 0xc;
  }
  return 3;
}


