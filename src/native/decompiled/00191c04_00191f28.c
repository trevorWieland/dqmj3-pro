#include "00191c04_00191f28.h"



char * fn_00191f28(uint3 param_1)

{
  if (param_1 == 0x100) {
LAB_0019200c:
    return "function";
  }
  if (param_1 < 0x101) {
    if (param_1 == 0x10) {
      return "string";
    }
    if (param_1 < 0x11) {
      if (param_1 == 1) {
        return "null";
      }
      if (param_1 == 2) {
        return "integer";
      }
      if (param_1 == 4) {
        return "float";
      }
      if (param_1 == 8) {
        return "bool";
      }
    }
    else {
      if (param_1 == 0x20) {
        return "table";
      }
      if (param_1 == 0x40) {
        return "array";
      }
      if (param_1 == 0x80) {
LAB_00192004:
        return "userdata";
      }
    }
  }
  else {
    if (param_1 == 0x2000) goto LAB_0019200c;
    if (param_1 < 0x2001) {
      if (param_1 == 0x200) goto LAB_0019200c;
      if (param_1 == 0x400) {
        return "generator";
      }
      if (param_1 == 0x800) goto LAB_00192004;
      if (param_1 == 0x1000) {
        return "thread";
      }
    }
    else {
      if (param_1 == 0x4000) {
        return "class";
      }
      if (param_1 == 0x8000) {
        return "instance";
      }
      if (param_1 == 0x10000) {
        return "weakref";
      }
    }
  }
  return (char *)0x0;
}



char * fn_00191f20(uint *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1 & 0xffffff;
  if (uVar1 == 0x100) {
LAB_0019200c:
    return "function";
  }
  if (uVar1 < 0x101) {
    if (uVar1 == 0x10) {
      return "string";
    }
    if (uVar1 < 0x11) {
      if (uVar1 == 1) {
        return "null";
      }
      if (uVar1 == 2) {
        return "integer";
      }
      if (uVar1 == 4) {
        return "float";
      }
      if (uVar1 == 8) {
        return "bool";
      }
    }
    else {
      if (uVar1 == 0x20) {
        return "table";
      }
      if (uVar1 == 0x40) {
        return "array";
      }
      if (uVar1 == 0x80) {
LAB_00192004:
        return "userdata";
      }
    }
  }
  else {
    if (uVar1 == 0x2000) goto LAB_0019200c;
    if (uVar1 < 0x2001) {
      if (uVar1 == 0x200) goto LAB_0019200c;
      if (uVar1 == 0x400) {
        return "generator";
      }
      if (uVar1 == 0x800) goto LAB_00192004;
      if (uVar1 == 0x1000) {
        return "thread";
      }
    }
    else {
      if (uVar1 == 0x4000) {
        return "class";
      }
      if (uVar1 == 0x8000) {
        return "instance";
      }
      if (uVar1 == 0x10000) {
        return "weakref";
      }
    }
  }
  return (char *)0x0;
}



undefined8 fn_00191eb4(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  
  if (param_3 >> 0x10 == 0) {
    param_3 = param_3 << 0x10;
    iVar1 = 0x10;
  }
  else {
    iVar1 = 0;
  }
  if (param_3 >> 0x18 == 0) {
    param_3 = param_3 << 8;
    iVar1 = iVar1 + 8;
  }
  if (param_3 >> 0x1c == 0) {
    param_3 = param_3 << 4;
    iVar1 = iVar1 + 4;
  }
  if (param_3 >> 0x1e == 0) {
    param_3 = param_3 << 2;
    iVar1 = iVar1 + 2;
  }
  if (-1 < (int)param_3) {
    param_3 = param_3 << 1;
    iVar1 = iVar1 + 1;
  }
  return CONCAT44(param_3,(param_1 + -0x1f) - iVar1);
}



/* WARNING: Control flow encountered bad instruction data */

undefined8 fn_00191e2c(uint param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = (int)param_1 >> 0x17;
  uVar4 = param_1 << 8;
  if (uVar2 != 0) {
    uVar4 = uVar4 | 0x80000000;
  }
  if ((int)uVar2 < 0) {
    if (param_1 < 0xdf000001) {
      iVar1 = -(uVar2 & 0xff);
      uVar3 = iVar1 + 0xbe;
      if ((uVar2 & 0xff) == 0) {
        uVar4 = uVar4 & 0x7fffffff;
      }
      if (uVar3 < 0x20) {
        uVar2 = uVar4 << (0x20 - uVar3 & 0xff);
      }
      else {
        uVar2 = uVar4 >> (iVar1 + 0x9eU & 0xff);
      }
      return CONCAT44(-((uVar4 >> (uVar3 & 0xff)) + (uint)(uVar2 != 0)),-uVar2);
    }
  }
  else {
    uVar3 = -uVar2 + 0xbe;
    if (uVar2 < 0xbf && uVar3 != 0) {
      if (uVar3 < 0x20) {
        uVar2 = uVar4 << (0x20 - uVar3 & 0xff);
      }
      else {
        uVar2 = uVar4 >> (-uVar2 + 0x9e & 0xff);
      }
      return CONCAT44(uVar4 >> (uVar3 & 0xff),uVar2);
    }
  }
  fn_0019d5b0();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



uint fn_00191dd4(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  
  uVar2 = param_2 & 0x80000000;
  if ((int)uVar2 < 0) {
    bVar5 = param_1 != 0;
    param_1 = -param_1;
    param_2 = -(param_2 + bVar5);
  }
  if (param_2 != 0) {
    iVar3 = 0x20;
    uVar1 = param_2;
  }
  else {
    iVar3 = 0;
    uVar1 = param_1;
  }
  if (param_2 != 0 || param_1 != 0) {
    uVar4 = iVar3 - LZCOUNT(uVar1);
    uVar1 = uVar1 << LZCOUNT(uVar1) | param_1 >> (uVar4 & 0xff);
    bVar5 = (bool)((byte)(uVar1 >> 7) & 1);
    uVar2 = (uVar2 | 0x3f800000) + 0xf000000 + uVar4 * 0x800000 + (uVar1 >> 8) + (uint)bVar5;
    if (param_1 << (0x20 - uVar4 & 0xff) != 0 || (uVar1 & 0x7f) != 0) {
      bVar5 = false;
    }
    if (bVar5) {
      uVar2 = uVar2 & 0xfffffffe;
    }
    return uVar2;
  }
  return param_1;
}



uint fn_00191dcc(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  
  if (param_2 != 0) {
    iVar3 = 0x20;
    uVar1 = param_2;
  }
  else {
    iVar3 = 0;
    uVar1 = param_1;
  }
  if (param_2 != 0 || param_1 != 0) {
    uVar4 = iVar3 - LZCOUNT(uVar1);
    uVar2 = uVar1 << LZCOUNT(uVar1) | param_1 >> (uVar4 & 0xff);
    bVar5 = (bool)((byte)(uVar2 >> 7) & 1);
    uVar1 = uVar4 * 0x800000 + 0x4e800000 + (uVar2 >> 8) + (uint)bVar5;
    if (param_1 << (0x20 - uVar4 & 0xff) != 0 || (uVar2 & 0x7f) != 0) {
      bVar5 = false;
    }
    if (bVar5) {
      uVar1 = uVar1 & 0xfffffffe;
    }
    return uVar1;
  }
  return param_1;
}



void fn_00191c04(uint *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  
  puVar8 = (undefined4 *)param_1[1];
  if (puVar8 != (undefined4 *)param_1[2]) {
    param_1[1] = (uint)(puVar8 + 1);
    if (puVar8 != (undefined4 *)0x0) {
      *puVar8 = *param_2;
    }
    return;
  }
  uVar3 = (int)((int)puVar8 - *param_1) >> 2;
  if (uVar3 < (uint)((int)((int)param_1[2] - *param_1) >> 2)) {
    param_1[1] = (uint)(puVar8 + 1);
    if (puVar8 != (undefined4 *)0x0) {
      *puVar8 = puVar8[-1];
    }
    puVar5 = puVar8 + -1;
    puVar6 = puVar8;
    if (puVar8 < puVar5) {
      iVar4 = (int)puVar5 - (int)puVar8;
      if (0 < iVar4) {
        if (iVar4 * 0x20000000 < 0) {
          puVar5 = puVar8 + -2;
          puVar6 = puVar8 + -1;
          *puVar6 = *puVar5;
        }
        for (iVar4 = iVar4 >> 3; iVar4 != 0; iVar4 = iVar4 + -1) {
          puVar6[-1] = puVar5[-1];
          puVar5 = puVar5 + -2;
          puVar6 = puVar6 + -2;
          *puVar6 = *puVar5;
        }
      }
    }
    else {
      while (puVar8 != puVar5) {
        puVar5 = puVar5 + -1;
        puVar6[-1] = *puVar5;
        puVar6 = puVar6 + -1;
      }
    }
    *puVar8 = *param_2;
    return;
  }
  uVar9 = uVar3 + (uVar3 >> 1) + (uVar3 >> 3);
  if (uVar9 < uVar3 + 0x20) {
    uVar9 = uVar3 + 0x20;
  }
  puVar1 = (undefined4 *)fn_00100fc6(uVar9 << 2,0);
  puVar6 = puVar1;
  for (puVar5 = (undefined4 *)*param_1; puVar5 != puVar8; puVar5 = puVar5 + 1) {
    if (puVar6 != (undefined4 *)0x0) {
      *puVar6 = *puVar5;
    }
    puVar6 = puVar6 + 1;
  }
  puVar5 = (undefined4 *)(((int)puVar8 - *param_1 & 0xfffffffc) + (int)puVar1);
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = *param_2;
  }
  puVar6 = (undefined4 *)param_1[1];
  puVar5 = (undefined4 *)(((int)puVar8 - *param_1 & 0xfffffffc) + (int)puVar1);
  for (; puVar8 != puVar6; puVar8 = puVar8 + 1) {
    puVar5 = puVar5 + 1;
    if (puVar5 != (undefined4 *)0x0) {
      *puVar5 = *puVar8;
    }
  }
  uVar2 = *param_1;
  uVar7 = param_1[1];
  uVar3 = uVar2;
  if (uVar7 < uVar2) {
    do {
      uVar3 = uVar3 + 4;
    } while (uVar3 != uVar7);
  }
  fn_001008c4(uVar2,(int)(param_1[2] - uVar2) >> 2,0);
  param_1[2] = (uint)(puVar1 + uVar9);
  param_1[1] = (uint)(puVar1 + ((int)(uVar7 - uVar2) >> 2) + 1);
  *param_1 = (uint)puVar1;
  return;
}


