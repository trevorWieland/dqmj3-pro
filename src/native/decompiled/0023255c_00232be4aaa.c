#include "0023255c_00232be4aaa.h"



void fn_0023255c(undefined4 *param_1,int param_2,int param_3,int param_4,undefined1 param_5)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  byte bVar5;
  undefined2 local_78 [32];
  undefined1 local_38;
  undefined1 local_37;
  undefined1 local_36;
  undefined1 local_35;
  undefined1 local_34;
  undefined1 local_33;
  undefined1 local_32;
  undefined1 local_31;
  undefined4 local_30;
  
  if (param_2 - 5U < 6) {
    *(char *)((int)param_1 + 9) = (char)param_2;
  }
  else {
    *(char *)(param_1 + 2) = (char)param_2;
  }
  if (param_3 != -1) {
    param_1[1] = param_3;
  }
  if (param_2 - 0xbU < 3) {
    if (*(char *)(param_1 + 2) != '\v') {
      local_78[0] = 1;
      cVar1 = *(char *)(param_4 + 0x104);
      if (cVar1 == '\0') {
        local_78[1] = 6;
      }
      else if (cVar1 == '\x01') {
        local_78[1] = 2;
      }
      else if (cVar1 == '\x02') {
        local_78[1] = 4;
      }
      else if (cVar1 == '\x03') {
        local_78[1] = 5;
      }
      uVar2 = fn_006f83f4(param_4);
      fn_001003e0(local_78 + 2,uVar2);
      iVar3 = fn_00100b58(local_78);
      local_78[iVar3] = 1;
      local_78[iVar3 + 1] = 1;
      local_78[iVar3 + 2] = 0;
      uVar2 = fn_0068eb18(DAT_008977e8);
      fn_0016ba84(uVar2,local_78);
    }
    uVar2 = fn_0068eb18(DAT_008977e8);
    uVar2 = fn_0025f988(uVar2,(&PTR_s_race_announce_last_60sec_00896d78)[param_2]);
    uVar4 = fn_001827b0(*param_1,(char *)&DAT_002328ac);
    fn_00190d50(uVar4,uVar2);
    iVar3 = fn_001828f0(*param_1,(char *)&DAT_00232a2c);
    *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xfe | 1;
    iVar3 = fn_001828f0(*param_1,(char *)&DAT_00232a44);
    *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xfe;
  }
  else {
    if ((int)*(char *)((int)param_1 + 9) - 5U < 6) {
      param_1[3] = param_4;
      *(undefined1 *)(param_1 + 4) = param_5;
      fn_002323e8(param_1);
      if ((int)*(char *)(param_1 + 2) - 0xbU < 3) goto code_r0x00232890;
      iVar3 = fn_001828f0(*param_1,(char *)&DAT_00232a44);
      *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xfe | 1;
      iVar3 = fn_001828f0(*param_1,(char *)&DAT_00232a2c);
      bVar5 = *(byte *)(iVar3 + 0x44) & 0xfe;
    }
    else {
      local_30 = fn_001827b0(*param_1,(char *)&DAT_002328ac);
      if (param_2 == 0) {
        local_38 = 0xfb;
        local_37 = 0x95;
        local_36 = 1;
        local_35 = 0xff;
        fn_00688d44(local_30,&local_38);
      }
      else if (param_2 == 1) {
        local_34 = 0xfe;
        local_33 = 1;
        local_32 = 0x84;
        local_31 = 0xff;
        fn_00688d44(local_30,&local_34);
      }
      else if (param_2 == 2) {
        uVar2 = fn_00144810(DAT_008977e8);
        uVar2 = fn_006a873c(uVar2,0);
        uVar4 = fn_0014481c(DAT_008977e8);
        iVar3 = fn_006b71a8(uVar4,uVar2);
        local_78[0] = 1;
        cVar1 = *(char *)(iVar3 + 0x104);
        if (cVar1 == '\0') {
          local_78[1] = 6;
        }
        else if (cVar1 == '\x01') {
          local_78[1] = 2;
        }
        else if (cVar1 == '\x02') {
          local_78[1] = 4;
        }
        else if (cVar1 == '\x03') {
          local_78[1] = 5;
        }
        uVar2 = fn_006f83f4();
        fn_001003e0(local_78 + 2,uVar2);
        iVar3 = fn_00100b58(local_78);
        local_78[iVar3] = 1;
        local_78[iVar3 + 1] = 1;
        local_78[iVar3 + 2] = 0;
        uVar2 = fn_0068eb18(DAT_008977e8);
        fn_0016ba84(uVar2,local_78);
      }
      uVar2 = fn_0068eb18(DAT_008977e8);
      uVar2 = fn_0025f988(uVar2,(&PTR_s_race_announce_last_60sec_00896d78)[param_2]);
      fn_00190d50(local_30,uVar2);
      iVar3 = fn_001828f0(*param_1,(char *)&DAT_00232a2c);
      bVar5 = *(byte *)(iVar3 + 0x44) & 0xfe | 1;
    }
    *(byte *)(iVar3 + 0x44) = bVar5;
  }
code_r0x00232890:
                    /* WARNING: Subroutine does not return */
  fn_001638a0();
}


