#include "0027aae4_0027e870.h"



undefined4 fn_0027e870(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_18 [4];
  undefined1 auStack_14 [4];
  undefined1 auStack_10 [4];
  undefined4 local_c;
  
  iVar1 = fn_00157f00(param_1,0xfffffffc,local_18);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_0027e9c0,(char *)&DAT_0027e9ac,(char *)&DAT_007c3049,0xe39);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157f00(param_1,0xfffffffd,auStack_14);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_0027e9c0,(char *)&DAT_0027e9ac,(char *)&DAT_007c3049,0xe3c);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157f00(param_1,0xfffffffe,auStack_10);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_0027e9c0,(char *)&DAT_0027e9ac,(char *)&DAT_007c3049,0xe3f);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157f58(param_1,0xffffffff,&local_c);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_0027e9e0,(char *)&DAT_0027e9ac,(char *)&DAT_007c3049,0xe42);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  fn_001f1178(DAT_00898898,local_c);
  return 0;
}



undefined4 fn_0027d9b0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int local_30 [7];
  
  local_30[0] = -1;
  local_30[1] = 0xffffffff;
  local_30[2] = 0;
  local_30[3] = 0;
  local_30[4] = 0;
  iVar1 = fn_00157f58(param_1,0xfffffffe,local_30);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_0027dccc,(char *)&DAT_0027dcb8,(char *)&DAT_007c3093,0xe7d);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  if (local_30[0] == -1) {
    return 0;
  }
  fn_00158128(param_1,(char *)&DAT_0027dce4,0xffffffff);
  iVar1 = fn_00157df4(param_1,0xfffffffe);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_0027dcf0,(char *)&DAT_0027dcb8,(char *)&DAT_007c3093,0xe86);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157f58(param_1,0xffffffff,local_30 + 5);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_0027dccc,(char *)&DAT_0027dcb8,(char *)&DAT_007c3093,0xe87);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  fn_00173cb8(param_1,1);
  fn_00158128(param_1,(char *)&DAT_0027dd04,0xffffffff);
  iVar1 = fn_00157df4(param_1,0xfffffffe);
  uVar2 = 0xe91;
  if (-1 < iVar1) {
    iVar1 = fn_00157f58(param_1,0xffffffff,local_30 + 1);
    if (iVar1 < 0) {
LAB_0027db60:
      uVar2 = fn_00148918((char *)&DAT_0027dccc,(char *)&DAT_0027dcb8,(char *)&DAT_007c3093,uVar2);
      uVar2 = fn_001581d0(param_1,uVar2);
      return uVar2;
    }
    fn_00173cb8(param_1,1);
    fn_00158128(param_1,(char *)&DAT_0027dd04,0xffffffff);
    iVar1 = fn_00157df4(param_1,0xfffffffe);
    uVar2 = 0xe92;
    if (-1 < iVar1) {
      iVar1 = fn_00157f58(param_1,0xffffffff,local_30 + 1);
      if (iVar1 < 0) goto LAB_0027db60;
      fn_00173cb8(param_1,1);
      fn_00158128(param_1,(char *)&DAT_0027dd10,0xffffffff);
      iVar1 = fn_00157df4(param_1,0xfffffffe);
      uVar2 = 0xe93;
      if (-1 < iVar1) {
        iVar1 = fn_00157f00(param_1,0xffffffff,local_30 + 2);
        if (iVar1 < 0) {
          uVar2 = fn_00148918((char *)&DAT_0027dd20,(char *)&DAT_0027dcb8,(char *)&DAT_007c3093,0xe93);
          uVar2 = fn_001581d0(param_1,uVar2);
          return uVar2;
        }
        fn_00173cb8(param_1,1);
        fn_00158128(param_1,(char *)&DAT_0027dd34,0xffffffff);
        iVar1 = fn_00157df4(param_1,0xfffffffe);
        uVar2 = 0xe94;
        if (-1 < iVar1) {
          iVar1 = fn_00157fb0(param_1,0xffffffff,local_30 + 3);
          if (-1 < iVar1) {
            fn_00173cb8(param_1,1);
            fn_00158128(param_1,(char *)&DAT_0027dd40,0xffffffff);
            iVar1 = fn_00157df4(param_1,0xfffffffe);
            uVar2 = 0xe95;
            if (iVar1 < 0) goto LAB_0027dc84;
            iVar1 = fn_00157fb0(param_1,0xffffffff,local_30 + 4);
            if (-1 < iVar1) {
              fn_00173cb8(param_1,1);
              if (local_30[5] == 1) {
                local_30[4] = 0;
              }
              piVar3 = (int *)fn_006ac638(DAT_00898898,local_30[0]);
              if (piVar3 == (int *)0x0) {
                return 0;
              }
              if ((char)piVar3[0x37] == '\x02') {
                (**(code **)(*piVar3 + 0x124))(piVar3,local_30);
                return 0;
              }
              return 0;
            }
          }
          uVar2 = fn_00148918((char *)&DAT_0027ddec,(char *)&DAT_0027dcb8,(char *)&DAT_007c3093,uVar2)
          ;
          uVar2 = fn_001581d0(param_1,uVar2);
          return uVar2;
        }
      }
    }
  }
LAB_0027dc84:
  uVar2 = fn_00148918((char *)&DAT_0027dcf0,(char *)&DAT_0027dcb8,(char *)&DAT_007c3093,uVar2);
  uVar2 = fn_001581d0(param_1,uVar2);
  return uVar2;
}



undefined4 fn_0027d5f4(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined1 auStack_18 [16];
  
  iVar1 = fn_00157fb0(param_1,0xfffffffd,&local_20);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_0027d6d8,(char *)&DAT_0027d6c4,(char *)&DAT_007c20c5,0x131);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157f58(param_1,0xfffffffe,&uStack_1c);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_0027d6f0,(char *)&DAT_0027d6c4,(char *)&DAT_007c20c5,0x134);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  fn_00148924(auStack_18,param_1,0xffffffff);
  uVar2 = fn_001eb5bc(DAT_00898898,local_20,uStack_1c,auStack_18);
  fn_001580cc(param_1,uVar2);
  return 1;
}



undefined4 fn_0027cba8(undefined4 param_1)

{
  undefined1 auStack_10 [16];
  
  fn_00148924(auStack_10,param_1,0xffffffff);
  fn_001f060c(DAT_00898898,auStack_10);
  return 0;
}



undefined4 fn_0027c930(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10 [2];
  
  iVar1 = fn_00157f58(param_1,0xfffffffc,&local_1c);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_0027ca9c,(char *)&DAT_0027ca88,(char *)&DAT_007c30a3,0xea8);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157f58(param_1,0xfffffffd,&local_18);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_0027ca9c,(char *)&DAT_0027ca88,(char *)&DAT_007c30a3,0xeab);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157f58(param_1,0xfffffffe,&local_14);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_0027ca9c,(char *)&DAT_0027ca88,(char *)&DAT_007c30a3,0xeae);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157f58(param_1,0xffffffff,local_10);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_0027ca9c,(char *)&DAT_0027ca88,(char *)&DAT_007c30a3,0xeb1);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  fn_001f0558(DAT_00898898,local_1c & 0xff,local_18 & 0xff,local_14 & 0xff,local_10[0] & 0xff);
  return 0;
}



undefined4 fn_0027c654(undefined4 param_1)

{
  undefined1 auStack_10 [16];
  
  fn_00148924(auStack_10,param_1,0xffffffff);
  fn_001f0474(DAT_00898898,auStack_10);
  return 0;
}



undefined4 fn_0027c3c0(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  puVar1 = (undefined4 *)fn_006abd08(DAT_00898898);
  local_18 = *puVar1;
  uStack_14 = puVar1[1];
  uStack_10 = puVar1[2];
  fn_00148a34(param_1,&local_18);
  return 1;
}



undefined4 fn_0027bc84(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_18;
  undefined1 local_14 [4];
  undefined1 auStack_10 [4];
  undefined1 auStack_c [4];
  
  iVar1 = fn_00157f58(param_1,0xfffffffc,&local_18);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_0027bdd8,(char *)&DAT_0027bdc4,(char *)&DAT_007c232e,0x365);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157f00(param_1,0xfffffffd,local_14);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_0027bdf0,(char *)&DAT_0027bdc4,(char *)&DAT_007c232e,0x368);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157f00(param_1,0xfffffffe,auStack_10);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_0027bdf0,(char *)&DAT_0027bdc4,(char *)&DAT_007c232e,0x369);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157f00(param_1,0xffffffff,auStack_c);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_0027bdf0,(char *)&DAT_0027bdc4,(char *)&DAT_007c232e,0x36a);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  fn_001f5a68(DAT_00898898,local_18);
  return 0;
}



undefined4 fn_0027bbd4(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_18;
  undefined1 auStack_14 [12];
  
  iVar1 = fn_00157f58(param_1,0xfffffffe,&local_18);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_0027bc68,(char *)&DAT_0027bc54,(char *)&DAT_007c2181,0x1db);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  fn_00148924(auStack_14,param_1,0xffffffff);
  fn_001ec30c(DAT_00898898,local_18,auStack_14);
  return 0;
}



undefined4 fn_0027b890(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_18;
  undefined1 auStack_14 [12];
  
  iVar1 = fn_00157f58(param_1,0xfffffffe,&local_18);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_0027b924,(char *)&DAT_0027b910,(char *)&DAT_007c2222,0x276);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  fn_00148924(auStack_14,param_1,0xffffffff);
  fn_001ec238(DAT_00898898,local_18,auStack_14);
  return 0;
}



undefined4 fn_0027aae4(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_18;
  undefined1 auStack_14 [12];
  
  iVar1 = fn_00157f58(param_1,0xfffffffe,&local_18);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_0027ab80,(char *)&DAT_0027ab6c,(char *)&DAT_007c2031,0xbc);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  fn_00148924(auStack_14,param_1,0xffffffff);
  uVar2 = fn_001eb83c(DAT_00898898,local_18,auStack_14);
  fn_001580cc(param_1,uVar2);
  return 1;
}


