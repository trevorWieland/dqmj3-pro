#include "003c3c74_003c4a5cab.h"



void fn_003c42b0(int param_1)

{
  if (*(int *)(param_1 + 0x6c) != 0) {
    fn_002e3bbc();
    fn_002feef8();
    *(undefined4 *)(param_1 + 0x6c) = 0;
  }
  return;
}



void fn_003c4280(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_003e734c();
  puVar1[0x40] = 0;
  *puVar1 = &DAT_00830124;
  return;
}



void fn_003c4044(int *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (param_2 == 0) {
    (**(code **)(*param_1 + 0x150))(param_1);
    fn_0015b0dc();
    uVar1 = fn_0022f584((char *)&DAT_003c41d0,0);
    puVar2 = (undefined4 *)fn_00145b00(8,&DAT_00812c8c);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = &DAT_008522ec;
      puVar2[1] = param_1;
    }
  }
  else {
    if (param_2 != 1) {
      if (param_2 == 2) {
        fn_0068ab44(param_1,0x100094b);
        puVar2 = (undefined4 *)fn_001f74ec(param_1,0xef);
        if (puVar2 != (undefined4 *)0x0) {
          puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
          do {
            if (puVar3 == &DAT_008968f8) goto LAB_003c41a0;
            puVar3 = (undefined4 *)*puVar3;
          } while (puVar3 != (undefined4 *)0x0);
        }
        puVar2 = (undefined4 *)0x0;
LAB_003c41a0:
        puVar2[5] = 0xd8;
        fn_006899f4(param_1,0xef,1);
        *(undefined1 *)(param_1[0x40] + 0x18) = 0;
      }
      else if (param_2 == 3) {
        (**(code **)(*param_1 + 0x150))(param_1);
        fn_0015b0dc();
        uVar1 = fn_0022f584((char *)&DAT_003c3ea8,0);
        fn_0068974c(param_1,uVar1,1);
        fn_003e6b34(param_1,6);
        return;
      }
      return;
    }
    (**(code **)(*param_1 + 0x150))(param_1);
    fn_0015b0dc();
    uVar1 = fn_0022f584((char *)&DAT_003c41f8,0);
    puVar2 = (undefined4 *)fn_00145b00(8,&DAT_00812c8c);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = &DAT_008522f8;
      puVar2[1] = param_1;
    }
  }
  fn_003e6db0(param_1,uVar1,1,puVar2);
  return;
}


