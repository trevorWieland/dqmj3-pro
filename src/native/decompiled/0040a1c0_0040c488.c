#include "0040a1c0_0040c488.h"



void fn_0040c488(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_003d8360(param_1,param_2,0x20);
  *puVar1 = &DAT_00838028;
  return;
}



void fn_0040c45c(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002fdf94(param_1,param_2,0x1c);
  *puVar1 = &DAT_00838000;
  return;
}



void fn_0040c1fc(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002fdf94(param_1,param_2,0x23);
  *puVar1 = &DAT_00837fd8;
  return;
}



void fn_0040ba04(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002fdf94(param_1,param_2,4);
  *puVar1 = &DAT_00837f80;
  return;
}



undefined1 * fn_0040ae30(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [8];
  
  fn_0020bbc4(auStack_30,param_3);
  iVar1 = fn_00660ec0((int)*(short *)(param_1 + 0xf8));
  if (iVar1 == 0xe) {
    uVar4 = fn_006c09b4(auStack_2c);
    fn_002c3df8(param_1,param_2,4,uVar4);
LAB_0040b184:
    iVar3 = fn_002dd168(*(undefined4 *)(param_1 + 0xf4),(int)*(short *)(param_1 + 0xf8),param_3);
    if (iVar3 != 0) goto LAB_0040b1f8;
    if (iVar1 == 0x23) goto LAB_0040b1ac;
  }
  else {
    if (iVar1 < 0xf) {
      if (iVar1 == 0xb) {
        uVar4 = fn_006bf240(auStack_2c);
        fn_002c3df8(param_1,param_2,4,uVar4);
      }
      else if (iVar1 < 0xc) {
        if (iVar1 == 1) {
          uVar4 = fn_006bf5bc(auStack_2c);
          local_74 = fn_006c0028(auStack_2c);
          local_60 = 0;
          local_70 = 0;
          local_64 = 0;
          local_4c = 0;
          local_6c = 0;
          local_68 = 0;
          local_5c = 0;
          local_50 = 0;
          local_38 = 0;
          local_58 = 0;
          local_54 = 0;
          local_48 = 0;
          local_3c = 0;
          local_44 = 0;
          local_40 = 0;
          local_34 = 0;
          local_78 = uVar4;
          fn_0018a618(&local_70,0x20,0x1f,L"%4d/%4d");
          fn_0031b78c(param_1,param_2,4,&local_70);
        }
        else if (iVar1 == 2) {
          uVar4 = fn_006bf5c8(auStack_2c);
          local_74 = fn_006c0114(auStack_2c);
          local_60 = 0;
          local_70 = 0;
          local_64 = 0;
          local_4c = 0;
          local_6c = 0;
          local_68 = 0;
          local_5c = 0;
          local_50 = 0;
          local_38 = 0;
          local_58 = 0;
          local_54 = 0;
          local_48 = 0;
          local_3c = 0;
          local_44 = 0;
          local_40 = 0;
          local_34 = 0;
          local_78 = uVar4;
          fn_0018a618(&local_70,0x20,0x1f,L"%4d/%4d");
          fn_0031b78c(param_1,param_2,4,&local_70);
        }
      }
      else if (iVar1 == 0xc) {
        uVar4 = fn_006c0028(auStack_2c);
        fn_002c3df8(param_1,param_2,4,uVar4);
      }
      else if (iVar1 == 0xd) {
        uVar4 = fn_006c0114(auStack_2c);
        fn_002c3df8(param_1,param_2,4,uVar4);
      }
    }
    else if (iVar1 == 0x11) {
      uVar4 = fn_006bff0c(auStack_2c);
      fn_002c3df8(param_1,param_2,4,uVar4);
    }
    else if (iVar1 < 0x12) {
      if (iVar1 == 0xf) {
        uVar4 = fn_006bed98(auStack_2c);
        fn_002c3df8(param_1,param_2,4,uVar4);
      }
      else if (iVar1 == 0x10) {
        uVar4 = fn_006c01f4(auStack_2c);
        fn_002c3df8(param_1,param_2,4,uVar4);
      }
    }
    else if (iVar1 == 0x12) {
      uVar4 = fn_006c0108(auStack_2c);
      fn_002c3df8(param_1,param_2,4,uVar4);
    }
    else if (iVar1 == 0x23) {
      uVar4 = fn_00660d60((int)*(short *)(param_1 + 0xf8));
      iVar3 = fn_006aed48(auStack_30,uVar4);
      if (iVar3 == 0) {
        pcVar2 = (char *)&DAT_0040b230;
      }
      else {
        pcVar2 = (char *)&DAT_0040b224;
      }
      uVar4 = fn_0022f750(pcVar2);
      fn_0031b78c(param_1,param_2,4,uVar4);
    }
    if (iVar1 != 0x23) goto LAB_0040b184;
LAB_0040b1ac:
    uVar4 = fn_00660d60((int)*(short *)(param_1 + 0xf8));
    iVar1 = fn_006aed48(auStack_30,uVar4);
    if (iVar1 == 0) {
LAB_0040b1f8:
      local_78 = DAT_00891dcc;
      fn_002c37e0(param_1,param_2,&local_78);
      goto LAB_0040b1e8;
    }
  }
  local_78 = DAT_00891dd4;
  fn_002c37e0(param_1,param_2,&local_78);
LAB_0040b1e8:
  return auStack_30;
}



void fn_0040a1c0(int *param_1,undefined4 param_2,short param_3,undefined4 param_4)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  undefined4 local_14;
  
  uVar2 = fn_00660ec0((int)param_3);
  switch(uVar2) {
  default:
    fn_0036302c(param_1);
    return;
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
    break;
  }
  fn_00231074(&local_14,param_4,0);
  fn_0018a618(&DAT_008c9214,0x20,0x1f,&DAT_0040a4b0,param_2);
  fn_0015b0dc(local_14);
  uVar2 = fn_00660ec0((int)(short)param_1[0x3e]);
  fn_0040a918(param_1,uVar2);
  fn_0015b0dc();
  fn_0015b0dc(&DAT_008c9214);
  iVar3 = fn_00660ec0((int)(short)param_1[0x3e]);
  if (iVar3 == 0x12) {
    uVar2 = fn_0022f584((char *)&DAT_0040a4e4,0);
    *(undefined1 *)(param_1[0x17] + 0x30) = 0;
  }
  else {
    iVar3 = fn_00660ec0((int)(short)param_1[0x3e]);
    if (iVar3 == 0xb) {
      uVar2 = fn_0022f584((char *)&DAT_0040a4fc,0);
    }
    else {
      uVar2 = fn_0022f584((char *)&DAT_0040a4bc,0);
      fn_0040a55c(param_1,param_4);
    }
  }
  (**(code **)(*param_1 + 0x140))(param_1,uVar2,3);
  iVar3 = param_1[0x17];
  uVar5 = 0;
  *(undefined4 *)(iVar3 + 0x38) = 0;
  *(undefined1 *)(iVar3 + 0x5f) = 1;
  if (param_1[0x86] - param_1[0x85] >> 3 != 0) {
    do {
      fn_0018a618(&DAT_008c9214,0x20,0x1f,&DAT_0040a4b0,*(undefined4 *)(param_1[0x85] + uVar5 * 8))
      ;
      bVar1 = *(byte *)(param_1[0x85] + uVar5 * 8 + 4);
      if (bVar1 == 0xe) {
        pcVar4 = (char *)&DAT_0040aa20;
LAB_0040a448:
        fn_0022f750(pcVar4);
      }
      else {
        if (0xe < bVar1) {
          if (bVar1 == 0x11) {
            pcVar4 = (char *)&DAT_0040aa3c;
          }
          else if (bVar1 < 0x12) {
            if (bVar1 == 0xf) {
              pcVar4 = (char *)&DAT_0040aa30;
            }
            else {
              if (bVar1 != 0x10) goto code_r0x0040a450;
              pcVar4 = (char *)&DAT_0040a9ec;
            }
          }
          else if (bVar1 == 0x12) {
            pcVar4 = (char *)&DAT_0040aa48;
          }
          else {
            if (bVar1 != 0x23) goto code_r0x0040a450;
            pcVar4 = (char *)&DAT_0040a9f8;
          }
          goto LAB_0040a448;
        }
        if (bVar1 == 0xb) {
          pcVar4 = (char *)&DAT_0040aa04;
          goto LAB_0040a448;
        }
        if (0xb < bVar1) {
          if (bVar1 == 0xc) {
            pcVar4 = (char *)&DAT_0040aa14;
          }
          else {
            if (bVar1 != 0xd) goto code_r0x0040a450;
            pcVar4 = (char *)&DAT_0040a9e0;
          }
          goto LAB_0040a448;
        }
        if (bVar1 == 1) {
          fn_0022f750(&DAT_0040aa00);
        }
        else if (bVar1 == 2) {
          pcVar4 = "mp";
          goto LAB_0040a448;
        }
      }
code_r0x0040a450:
      fn_0015b0dc();
      fn_0015b0dc(&DAT_008c9214);
      uVar2 = fn_0022f584((char *)&DAT_0040a53c,0);
      fn_0036c140(param_1[0x17],uVar2);
      uVar5 = uVar5 + 1;
    } while (uVar5 < (uint)(param_1[0x86] - param_1[0x85] >> 3));
  }
  *(undefined1 *)(param_1 + 0x3f) = 3;
  fn_001588d4(&local_14);
  return;
}



undefined4 fn_0040a918(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0xe) {
    uVar1 = fn_0022f750((char *)&DAT_0040aa20);
    return uVar1;
  }
  if (param_2 < 0xf) {
    if (param_2 == 0xb) {
      uVar1 = fn_0022f750((char *)&DAT_0040aa04);
      return uVar1;
    }
    if (param_2 < 0xc) {
      if (param_2 == 1) {
        uVar1 = fn_0022f750(&DAT_0040aa00);
        return uVar1;
      }
      if (param_2 == 2) {
        uVar1 = fn_0022f750(&DAT_0040a9dc);
        return uVar1;
      }
    }
    else {
      if (param_2 == 0xc) {
        uVar1 = fn_0022f750((char *)&DAT_0040aa14);
        return uVar1;
      }
      if (param_2 == 0xd) {
        uVar1 = fn_0022f750((char *)&DAT_0040a9e0);
        return uVar1;
      }
    }
  }
  else {
    if (param_2 == 0x11) {
      uVar1 = fn_0022f750((char *)&DAT_0040aa3c);
      return uVar1;
    }
    if (param_2 < 0x12) {
      if (param_2 == 0xf) {
        uVar1 = fn_0022f750((char *)&DAT_0040aa30);
        return uVar1;
      }
      if (param_2 == 0x10) {
        uVar1 = fn_0022f750((char *)&DAT_0040a9ec);
        return uVar1;
      }
    }
    else {
      if (param_2 == 0x12) {
        uVar1 = fn_0022f750((char *)&DAT_0040aa48);
        return uVar1;
      }
      if (param_2 == 0x23) {
        uVar1 = fn_0022f750((char *)&DAT_0040a9f8);
        return uVar1;
      }
    }
  }
  return 0;
}


