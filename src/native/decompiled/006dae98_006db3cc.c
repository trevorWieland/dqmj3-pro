#include "006dae98_006db3cc.h"



undefined8 fn_006db3cc(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = (uint)*(byte *)(param_1 + 0x14);
  if (uVar2 == 0) {
    if (DAT_008c0630 != 0) {
      uVar2 = 8;
    }
  }
  else if (*(char *)(param_1 + 0x2c) == '\x04' || *(char *)(param_1 + 0x2c) == '\x05') {
    uVar1 = 1;
    goto LAB_006db438;
  }
  uVar1 = 0;
LAB_006db438:
  return CONCAT44(uVar2,uVar1);
}



undefined4 fn_006db3a8(undefined4 param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  
  if (param_3 < 4) {
    return 0;
  }
  uVar1 = fn_004edb98(param_2 + param_3 + -4);
  return uVar1;
}



undefined4 fn_006db318(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int unaff_r4;
  uint in_r12;
  
  if (param_2 != 0) {
    in_r12 = *(uint *)(param_1 + 0x5c4);
  }
  if (param_2 != 0 && in_r12 != 0) {
    uVar1 = in_r12 & 1;
    if (uVar1 != 0) {
      unaff_r4 = *(int *)(param_1 + 0xc);
    }
    uVar2 = 0;
    if (uVar1 != 0) {
      do {
        if (*(int *)(unaff_r4 + uVar2 * 4) == param_2) {
          return 1;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar1);
    }
    if (uVar1 < in_r12) {
      do {
        if ((*(int *)(*(int *)(param_1 + 0xc) + uVar1 * 4) == param_2) ||
           (*(int *)(*(int *)(param_1 + 0xc) + uVar1 * 4 + 4) == param_2)) {
          return 1;
        }
        uVar1 = uVar1 + 2;
      } while (uVar1 < in_r12);
    }
  }
  return 0;
}



void fn_006db1e4(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  uint in_fpscr;
  float fVar4;
  double in_d0;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fn_0050ba68("[Analysis] ------ BEGIN(Pia Connection info, %d.%03d sec. passed) ------",
               *(int *)(param_1 + 0x108) / 1000,*(int *)(param_1 + 0x108) % 1000);
  fn_0050ba68((char *)&DAT_006db2b8);
  fVar7 = -1.0;
  fVar6 = 100.0;
  uVar3 = 0;
  do {
    puVar1 = (undefined4 *)(param_1 + uVar3 * 0x18);
    if (*(char *)(puVar1 + 5) != '\0') {
      iVar2 = puVar1[2] - puVar1[1];
      fVar5 = SUB84(in_d0,0);
      if (iVar2 == 0) {
        fVar5 = fVar7;
      }
      if (iVar2 != 0) {
        fVar4 = (float)VectorUnsignedToFloat(puVar1[4] - puVar1[3],(byte)(in_fpscr >> 0x16) & 3);
        fVar5 = (float)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x16) & 3);
        fVar5 = (fVar4 * fVar6) / fVar5;
      }
      in_d0 = (double)fVar5;
      fn_0050ba68((char *)&DAT_006db2ec,uVar3,*puVar1,puVar1[4],in_d0);
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0xb);
  fn_0050ba68("[Analysis] ---------------------------- END ----------------------------");
  return;
}



void fn_006db1b8(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  uint in_fpscr;
  float fVar4;
  double in_d0;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fn_006daa90();
  fn_006daa90(param_1 + 0x340,param_2);
  fn_0050ba68("[Analysis] ------ BEGIN(Pia Connection info, %d.%03d sec. passed) ------",
               *(int *)(param_1 + 0x788) / 1000,*(int *)(param_1 + 0x788) % 1000);
  fn_0050ba68("[Analysis] StationIndex,  RTT,  PacketLoss");
  fVar7 = -1.0;
  fVar6 = 100.0;
  uVar3 = 0;
  do {
    puVar1 = (undefined4 *)(param_1 + 0x680 + uVar3 * 0x18);
    if (*(char *)(puVar1 + 5) != '\0') {
      iVar2 = puVar1[2] - puVar1[1];
      fVar5 = SUB84(in_d0,0);
      if (iVar2 == 0) {
        fVar5 = fVar7;
      }
      if (iVar2 != 0) {
        fVar4 = (float)VectorUnsignedToFloat(puVar1[4] - puVar1[3],(byte)(in_fpscr >> 0x16) & 3);
        fVar5 = (float)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x16) & 3);
        fVar5 = (fVar4 * fVar6) / fVar5;
      }
      in_d0 = (double)fVar5;
      fn_0050ba68("[Analysis]      0x%02x, %4d,  %6.2f",uVar3,*puVar1,puVar1[4],in_d0);
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0xb);
  fn_0050ba68("[Analysis] ---------------------------- END ----------------------------");
  return;
}



undefined4 fn_006db1a0(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x58) == '\x01' || *(char *)(param_1 + 0x58) == '\x03') {
    uVar1 = *(undefined4 *)(param_1 + 0x60);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



undefined4 fn_006db160(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_006da264(param_1 + 4,param_2 + 4);
  if ((iVar1 == 0) || (iVar1 = fn_006da264(param_1 + 0x2c,param_2 + 0x2c), iVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



int fn_006db080(int *param_1,int param_2,int *param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  bool bVar7;
  uint uStack_20;
  
  bVar7 = param_2 - 0x100000U < 0x3ff00000;
  iVar1 = -0x1f1eb7da;
  piVar6 = param_3;
  if (bVar7) {
    piVar6 = param_3 + -0x40000;
  }
  if (bVar7 && piVar6 < (int *)0x3ff00000) {
    uStack_20 = param_4;
    uVar2 = (**(code **)(*param_1 + 8))(param_1);
    if (param_4 < uVar2) {
      iVar1 = -0x279eb7d4;
    }
    else {
      uVar3 = fn_006da104(param_1 + 1);
      iVar1 = fn_006da11c(param_1 + 1,param_2,&uStack_20,uVar3);
      iVar4 = fn_006da104(param_1 + 1);
      if (-1 < iVar1) {
        uVar3 = fn_006da104(param_1 + 0xb);
        iVar1 = fn_006da11c(param_1 + 0xb,iVar4 + param_2,&uStack_20,uVar3);
        iVar5 = fn_006da104(param_1 + 0xb);
        if (-1 < iVar1) {
          *param_3 = (iVar5 + iVar4 + param_2) - param_2;
          iVar1 = 0;
        }
      }
    }
  }
  return iVar1;
}



int fn_006db058(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_006da104(param_1 + 4);
  iVar2 = fn_006da104(param_1 + 0x2c);
  return iVar2 + iVar1;
}



bool fn_006db038(int param_1)

{
  return *(int *)(param_1 + 4) != DAT_008c067c;
}



uint fn_006db024(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*(int *)(param_1 + 4) + 8);
  return ((uVar1 >> 0x10) << 0x18 | (uVar1 >> 0x18) << 0x10) >> 0x10 |
         ((uVar1 & 0xff) << 8 | uVar1 >> 8 & 0xff) << 0x10;
}



uint fn_006db00c(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*(int *)(param_1 + 4) + 0xc);
  return ((uVar1 >> 0x10) << 0x18 | (uVar1 >> 0x18) << 0x10) >> 0x10;
}



uint fn_006daff8(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*(int *)(param_1 + 4) + 0x10);
  return ((uVar1 >> 0x10) << 0x18 | (uVar1 >> 0x18) << 0x10) >> 0x10 |
         ((uVar1 & 0xff) << 8 | uVar1 >> 8 & 0xff) << 0x10;
}



uint fn_006dafe4(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*(int *)(param_1 + 4) + 4);
  return ((uVar1 >> 0x10) << 0x18 | (uVar1 >> 0x18) << 0x10) >> 0x10 |
         ((uVar1 & 0xff) << 8 | uVar1 >> 8 & 0xff) << 0x10;
}



uint fn_006dae98(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(param_1 + 0x300);
  if (uVar4 != 0) {
    uVar2 = uVar4 & 1;
    uVar1 = 0;
    if (uVar2 != 0) {
      do {
        if (*(int *)(param_1 + uVar1 * 0x18) == param_2) {
          return uVar1;
        }
        uVar1 = uVar1 + 1;
      } while (uVar1 < uVar2);
    }
    for (; uVar2 < uVar4; uVar2 = uVar2 + 2) {
      piVar3 = (int *)(param_1 + uVar2 * 0x18);
      if (*piVar3 == param_2) {
        return uVar2;
      }
      if (piVar3[6] == param_2) {
        return uVar2 + 1;
      }
    }
  }
  return 0xffffffff;
}


