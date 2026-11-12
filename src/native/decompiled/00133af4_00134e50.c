#include "00133af4_00134e50.h"



undefined4 fn_00134e50(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_10 [4];
  uint local_c;
  
  iVar1 = fn_00157f58(param_1,0xfffffffe,&local_c);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00134f30,(char *)&DAT_00134f18,(char *)&DAT_007bcc72,0x9b9);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157f00(param_1,0xffffffff,local_10);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00134f4c,(char *)&DAT_00134f18,(char *)&DAT_007bcc72,0x9bc);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  uVar2 = fn_0015ad60(DAT_00898898,local_c & 0xff);
  fn_001580cc(param_1,uVar2);
  return 1;
}



undefined4 fn_00134cf0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_18;
  undefined1 local_14 [4];
  uint local_10 [2];
  
  iVar1 = fn_00157f58(param_1,0xfffffffd,local_10);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00134e18,(char *)&DAT_00134e00,(char *)&DAT_007bcc85,0x9c7);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157f58(param_1,0xfffffffe,&local_18);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00134e18,(char *)&DAT_00134e00,(char *)&DAT_007bcc85,0x9ca);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157f00(param_1,0xffffffff,local_14);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00134e38,(char *)&DAT_00134e00,(char *)&DAT_007bcc85,0x9cd);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  uVar2 = fn_0016a6d0(DAT_00898898,local_10[0] & 0xff,local_18);
  fn_001580cc(param_1,uVar2);
  return 1;
}



undefined4 fn_00134bcc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_10;
  
  local_10 = param_4;
  iVar1 = fn_00157fb0(param_1,0xffffffff,&local_10);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00134c40,(char *)&DAT_00134c28,(char *)&DAT_007bc43e,0x8d);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  fn_00149820(DAT_00898898,local_10);
  return 0;
}



undefined4 fn_00134ba0(undefined4 param_1)

{
  fn_0015cef4(DAT_00898898);
  fn_00158004(param_1,1);
  return 1;
}



undefined4 fn_001348cc(undefined4 param_1)

{
  fn_00149628(DAT_00898898);
  fn_00158004(param_1,1);
  return 1;
}



undefined4 fn_001346d8(undefined4 param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint local_18;
  uint local_14;
  int local_10;
  undefined1 local_c [4];
  
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  fn_0014ce94(param_1,local_c,&local_18);
  uVar1 = fn_001498e8(DAT_00898898,&local_18);
  fn_001580cc(param_1,uVar1);
  uVar2 = local_18;
  if (local_14 < local_18) {
    do {
      uVar2 = uVar2 + 0xc;
    } while (uVar2 != local_14);
  }
  fn_001008c4(local_18,(int)(local_10 - local_18) / 0xc,0);
  return 1;
}



undefined4 fn_0013463c(undefined4 param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint local_18;
  uint local_14;
  int local_10;
  undefined1 local_c [4];
  
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  fn_0014ce94(param_1,local_c,&local_18);
  uVar1 = fn_00149640(DAT_00898898,&local_18);
  fn_001580cc(param_1,uVar1);
  uVar2 = local_18;
  if (local_14 < local_18) {
    do {
      uVar2 = uVar2 + 0xc;
    } while (uVar2 != local_14);
  }
  fn_001008c4(local_18,(int)(local_10 - local_18) / 0xc,0);
  return 1;
}



undefined4 fn_00134480(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_1c;
  undefined4 uStack_18;
  int local_14;
  int local_10 [2];
  
  iVar1 = fn_00157f58(param_1,0xfffffffc,&local_1c);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00134600,(char *)&DAT_001345e8,(char *)&DAT_007bce0e,0xa96);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157f58(param_1,0xfffffffd,&uStack_18);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00134600,(char *)&DAT_001345e8,(char *)&DAT_007bce0e,0xa99);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157eb4(param_1,0xfffffffe,&local_14);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00134620,(char *)&DAT_001345e8,(char *)&DAT_007bce0e,0xa9c);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157eb4(param_1,0xffffffff,local_10);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00134620,(char *)&DAT_001345e8,(char *)&DAT_007bce0e,0xa9f);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  uVar2 = fn_001495c4(DAT_00898898,local_1c,uStack_18);
  fn_001580cc(param_1,uVar2);
  return 1;
}



undefined4 fn_00134100(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  char local_10 [4];
  undefined4 uStack_c;
  
  iVar1 = fn_00157f58(param_1,0xfffffffe,local_10);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_001341d8,(char *)&DAT_001341c0,(char *)&DAT_007bc64a,0x2e0);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157f58(param_1,0xffffffff,&uStack_c);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_001341d8,(char *)&DAT_001341c0,(char *)&DAT_007bc64a,0x2e3);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  uVar2 = fn_00174c80(DAT_00898898,(int)local_10[0],uStack_c);
  fn_00158128(param_1,uVar2,0xffffffff);
  return 1;
}



undefined4 fn_00133af4(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint local_18;
  uint uStack_14;
  undefined1 local_10 [4];
  
  iVar1 = fn_00157f58(param_1,0xffffffee,&local_54);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00133e08,(char *)&DAT_00133df0,(char *)&DAT_007bcc4d,0x957);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157f58(param_1,0xffffffef,&local_18);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00133e08,(char *)&DAT_00133df0,(char *)&DAT_007bcc4d,0x95a);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157f58(param_1,0xfffffff0,&uStack_14);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00133e08,(char *)&DAT_00133df0,(char *)&DAT_007bcc4d,0x95d);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157f58(param_1,0xfffffff1,local_10);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00133e08,(char *)&DAT_00133df0,(char *)&DAT_007bcc4d,0x960);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157f00(param_1,0xfffffff2,&local_50);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00133e2c,(char *)&DAT_00133df0,(char *)&DAT_007bcc4d,0x963);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157f00(param_1,0xfffffff3,&uStack_4c);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00133e2c,(char *)&DAT_00133df0,(char *)&DAT_007bcc4d,0x964);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157f00(param_1,0xfffffff4,&uStack_48);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00133e2c,(char *)&DAT_00133df0,(char *)&DAT_007bcc4d,0x965);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157f00(param_1,0xfffffff5,&uStack_44);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00133e2c,(char *)&DAT_00133df0,(char *)&DAT_007bcc4d,0x966);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157f00(param_1,0xfffffff6,&uStack_40);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00133e2c,(char *)&DAT_00133df0,(char *)&DAT_007bcc4d,0x967);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157f00(param_1,0xfffffff7,&uStack_3c);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00133e2c,(char *)&DAT_00133df0,(char *)&DAT_007bcc4d,0x968);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157f00(param_1,0xfffffff8,&uStack_38);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00133e2c,(char *)&DAT_00133df0,(char *)&DAT_007bcc4d,0x969);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157f00(param_1,0xfffffff9,&uStack_34);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00133e2c,(char *)&DAT_00133df0,(char *)&DAT_007bcc4d,0x96a);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157f00(param_1,0xfffffffa,&local_30);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00133e2c,(char *)&DAT_00133df0,(char *)&DAT_007bcc4d,0x96b);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157f00(param_1,0xfffffffb,&uStack_2c);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00133e2c,(char *)&DAT_00133df0,(char *)&DAT_007bcc4d,0x96c);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157f00(param_1,0xfffffffc,&uStack_28);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00133e2c,(char *)&DAT_00133df0,(char *)&DAT_007bcc4d,0x96d);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157f00(param_1,0xfffffffd,&uStack_24);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00133e2c,(char *)&DAT_00133df0,(char *)&DAT_007bcc4d,0x96e);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157f00(param_1,0xfffffffe,&uStack_20);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00133e2c,(char *)&DAT_00133df0,(char *)&DAT_007bcc4d,0x96f);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157f00(param_1,0xffffffff,&uStack_1c);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00133e2c,(char *)&DAT_00133df0,(char *)&DAT_007bcc4d,0x970);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  uVar2 = fn_00148f38(DAT_00898898,local_54 & 0xff,local_18 & 0xff,uStack_14 & 0xff,local_10[0],
                       local_50,uStack_4c,uStack_48,uStack_44,uStack_40,uStack_3c,uStack_38,
                       uStack_34,local_30,uStack_2c,uStack_28,uStack_24,uStack_20,uStack_1c);
  fn_001580cc(param_1,uVar2);
  return 1;
}


