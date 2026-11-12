#include "00106ba0_00107254ab.h"

static void svc_0x32(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x32 }
#endif
}


int fn_00106f3c(undefined1 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x550040;
  *(undefined1 *)(iVar2 + 0x84) = param_1;
  svc_0x32();
  iVar1 = DAT_008bfb30;
  if (-1 < DAT_008bfb30) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_00106c04(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_20;
  uint local_1c;
  undefined4 uStack_18;
  
  if (DAT_0089a542 == '\0') {
    DAT_0089a542 = '\x01';
    if (DAT_0089a548 == 0) {
      DAT_0089a548 = fn_0010b240(&DAT_0089a550);
      fn_00123690();
    }
    fn_0010c208();
    local_20 = 0;
    iVar1 = fn_0010c0e4(&local_20,param_2,&uStack_18,&local_1c);
    if (-1 < iVar1) {
      fn_0010be5c(local_20);
      fn_00115bc0(local_1c & 1);
      fn_00115bd0((local_1c & 2) >> 1);
      fn_0010be10();
      fn_0010be00(param_1);
      fn_0010ba64(uStack_18);
      iVar1 = fn_0010ba44();
      if (iVar1 == 0) {
        fn_00125694();
        fn_00115fd8();
        local_20 = 0;
        local_1c = 0;
        uVar2 = fn_001147a8();
        uVar3 = fn_001252e8();
        iVar1 = fn_0010c094(uVar3,uVar2,&local_1c,&local_20);
        if (iVar1 < 0) {
          fn_00123b08(iVar1,0x106d48);
        }
        fn_0010baf8();
        fn_0010becc(param_3,local_20,local_1c);
        fn_001257a8();
        iVar1 = fn_001147cc();
        if (iVar1 == 0) {
          fn_0010ba30();
        }
      }
      return 0;
    }
    fn_0010be10();
  }
  else {
    iVar1 = -0x1f5f3007;
  }
  return iVar1;
}



void fn_00106be0(undefined4 param_1,undefined4 param_2)

{
  DAT_0089a5a4 = param_1;
  DAT_0089a5e4 = param_2;
  return;
}


