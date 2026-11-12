#include "0061fd6c_0062031c.h"



undefined4 fn_0062031c(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if (*(char *)(param_2 + 1) != '\x03') {
    uVar3 = 0;
    do {
      iVar1 = fn_006f44fc(param_2 + param_1 * 0x418 + -0x4080,
                           (int)(short)(&DAT_007f08d0)[uVar3 * 2]);
      if (iVar1 != 0) {
        uVar2 = fn_0063a54c((int)(char)(&DAT_007f08d2)[uVar3 * 4],
                             (int)(char)(&DAT_007f08d3)[uVar3 * 4]);
        return uVar2;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0xb);
  }
  return 1;
}



int fn_00620290(int param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  
  if (param_2 == 0) {
    return param_1;
  }
  uVar2 = param_1 - 0x10;
  bVar4 = 7 < uVar2;
  if (bVar4) {
    uVar2 = param_1 - 0x18;
  }
  if (!bVar4 || uVar2 < 8) {
    iVar3 = fn_0061be08(param_1);
    if (iVar3 == 0) {
      cVar1 = (char)param_1 + -4;
    }
    else {
      cVar1 = (char)param_1 + '\x04';
    }
    return (int)cVar1;
  }
  if (param_1 - 0x20U < 2) {
    iVar3 = fn_0061be08(param_1);
    if (iVar3 == 1) {
      iVar3 = 0x21;
    }
    else {
      iVar3 = 0x20;
    }
  }
  else {
    if (param_1 - 0x22U < 2) {
      iVar3 = fn_0061be08(param_1);
      if (iVar3 == 1) {
        iVar3 = 0x23;
      }
      else {
        iVar3 = 0x22;
      }
      return iVar3;
    }
    iVar3 = 0;
  }
  return iVar3;
}



void fn_0061fd6c(int param_1,int param_2,int param_3,int param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8,uint *param_9)

{
  short sVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  uint uVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  uint **ppuVar9;
  uint *puVar10;
  uint *puVar11;
  uint uVar12;
  bool bVar13;
  undefined8 uVar14;
  uint *apuStack_258 [128];
  uint *local_54 [5];
  byte local_3f;
  
  uVar14 = fn_0061be08(param_2);
  if ((((int)uVar14 != 0) &&
      (iVar2 = fn_006f4868(param_4 + 0xe8,(int)((ulonglong)uVar14 >> 0x20),0x100,0), iVar2 != 0))
     && (iVar2 = fn_0069235c(param_1), iVar2 != 0)) {
    *param_9 = 0;
    goto LAB_00620040;
  }
  iVar2 = fn_001639e4(param_1);
  iVar7 = param_4 + param_2 * 0x418;
  iVar3 = param_4 + param_3 * 0x418;
  psVar4 = (short *)(iVar3 + -0x4080);
  if (param_1 == 0x126) {
    *param_9 = (uint)(((int)*(short *)(iVar7 + -0x4064) + (int)*(short *)(iVar3 + -0x4064)) / 2 <=
                     (int)*(short *)(iVar3 + -0x4064));
    param_9[1] = 1;
    return;
  }
  if (param_1 < 0x126) {
    if (param_1 == 0x75) {
LAB_0061fe7c:
      local_54[0] = (uint *)0x32;
      ppuVar9 = local_54;
      if ((int)(short)((uint)param_6 >> 0x10) / 0x19 + 10 < 0x33) {
        ppuVar9 = apuStack_258 + 0x80;
      }
      puVar10 = *ppuVar9;
      cVar6 = *(char *)(iVar3 + -0x4027);
      if (cVar6 == '\x02') {
        puVar11 = (uint *)((int)puVar10 * 3);
      }
      else {
        puVar11 = puVar10;
        if (cVar6 == '\x03') {
          puVar11 = (uint *)((int)puVar10 << 1);
        }
        if (cVar6 != '\x03' && cVar6 != '\x04') goto LAB_0061fee8;
      }
      puVar10 = (uint *)((int)((int)puVar11 + ((uint)((int)puVar11 >> 0x1f) >> 0x1e)) >> 2);
LAB_0061fee8:
      iVar2 = fn_006f44fc(psVar4,0x1ea);
      if (iVar2 != 0) {
        puVar10 = (uint *)0x0;
      }
      *param_9 = (uint)puVar10;
      param_9[1] = 100;
      return;
    }
    if (param_1 == 0xa5) {
      uVar8 = (int)*(short *)(iVar7 + -0x4064) / 0x1e + 0x19;
      if (*(byte *)(iVar3 + -0x4027) < 5) {
        switch(*(byte *)(iVar3 + -0x4027)) {
        case 2:
          uVar8 = (int)uVar8 / 2;
          break;
        case 3:
          uVar8 = (int)(uVar8 + ((uint)((int)uVar8 >> 0x1f) >> 0x1e)) >> 2;
          break;
        case 4:
          uVar8 = (int)(uVar8 + ((uint)((int)uVar8 >> 0x1f) >> 0x1d)) >> 3;
        }
      }
      *param_9 = uVar8;
      param_9[1] = 100;
      return;
    }
    if (param_1 == 0x111) goto LAB_00620004;
    if (param_1 == 0x11b) {
      sVar1 = fn_00176dc0();
      iVar2 = (int)(short)(sVar1 + 7U & 0xfff8);
      *param_9 = (uint)((int)*(short *)(iVar3 + -0x4064) <
                       (int)(iVar2 + ((uint)(iVar2 >> 0x1f) >> 0x1d)) >> 3);
      param_9[1] = 1;
      return;
    }
  }
  else {
    if (param_1 == 0x220) {
      fn_006f3bdc(psVar4,apuStack_258 + 0x80);
      *param_9 = (uint)(local_3f < 2);
      param_9[1] = 1;
      return;
    }
    if (param_1 == 0x276) {
LAB_00620004:
      uVar8 = (uint)*(char *)(iVar3 + -0x4027);
      uVar5 = 0;
      if ((-1 < (int)uVar8) && (uVar8 < 5)) {
        uVar5 = *(uint *)(&DAT_007f03c0 + uVar8 * 4);
      }
      *param_9 = uVar5;
      param_9[1] = 100;
      return;
    }
    if (param_1 == 0x28e) goto LAB_0061fe7c;
  }
  uVar8 = param_3 - 0x10;
  if (iVar2 == 0x17) {
    if ((0 < *psVar4) && (*(char *)(iVar3 + -0x4019) != '\0')) {
      cVar6 = *(char *)(iVar3 + -0x400a);
      bVar13 = cVar6 == '\0';
      if (bVar13) {
        cVar6 = *(char *)(iVar3 + -0x4018);
      }
      if (((bVar13 && cVar6 == '\0') && (*(char *)(param_4 + 1) != '\a')) &&
         ((7 < uVar8 || (*(char *)(iVar3 + -0x3fd3) < '\x01')))) {
        uVar8 = fn_00691af0(param_1,0);
        uVar5 = fn_00691af0(param_1,1);
        if ((int)uVar5 <= (int)uVar8) goto LAB_006200e0;
        cVar6 = *(char *)(iVar7 + -0x3fe6);
        if (cVar6 < '\x01') {
          cVar6 = *(char *)(iVar7 + -0x3fe5);
        }
        if (cVar6 < '\x01') {
          cVar6 = *(char *)(iVar7 + -0x3fe4);
joined_r0x00620180:
          if ('\0' < cVar6) {
            uVar8 = 0;
          }
          goto LAB_006200e0;
        }
LAB_0062023c:
        uVar8 = uVar5;
        goto LAB_006200e0;
      }
    }
LAB_00620188:
    uVar8 = 0;
    uVar5 = 1;
LAB_006200e0:
    param_9[1] = uVar5;
    *param_9 = uVar8;
    return;
  }
  if (iVar2 < 0x18) {
    if (iVar2 == 7) {
      uVar8 = fn_00691af0(param_1,0);
      uVar5 = fn_00691af0(param_1,1);
      if ((int)uVar5 <= (int)uVar8) goto LAB_006200e0;
      cVar6 = *(char *)(iVar7 + -0x3fe6);
      if (cVar6 < '\x01') {
        cVar6 = *(char *)(iVar7 + -0x3fe5);
      }
      if (cVar6 < '\x01') {
        cVar6 = *(char *)(iVar7 + -0x3fe4);
        goto joined_r0x00620180;
      }
      goto LAB_0062023c;
    }
    if (iVar2 == 0x12) {
      local_54[0] = param_9;
      fn_0061f150(param_1,param_2,param_3,param_4);
      return;
    }
  }
  else {
    if (iVar2 == 0x19) {
      uVar12 = 100;
      uVar5 = 100;
      if ((0 < *psVar4) && (*(char *)(iVar3 + -0x4019) != '\0')) {
        cVar6 = *(char *)(iVar3 + -0x400a);
        bVar13 = cVar6 == '\0';
        if (bVar13) {
          cVar6 = *(char *)(iVar3 + -0x4018);
        }
        if ((bVar13 && cVar6 == '\0') &&
           ((*(char *)(param_4 + 1) == '\a' || ((uVar8 < 8 && ('\0' < *(char *)(iVar3 + -0x3fd3)))))
           )) {
          uVar12 = 0;
          uVar5 = 1;
        }
      }
      param_9[1] = uVar5;
      *param_9 = uVar12;
      return;
    }
    if (iVar2 == 0x43) {
      if ((0 < *psVar4) && (*(char *)(iVar3 + -0x4019) != '\0')) {
        cVar6 = *(char *)(iVar3 + -0x400a);
        bVar13 = cVar6 == '\0';
        if (bVar13) {
          cVar6 = *(char *)(iVar3 + -0x4018);
        }
        if (((bVar13 && cVar6 == '\0') && (*(char *)(param_4 + 1) != '\a')) &&
           ((7 < uVar8 || (*(char *)(iVar3 + -0x3fd3) < '\x01')))) {
          uVar8 = fn_00691af0(param_1,2);
          uVar5 = fn_00691af0(param_1,3);
          if ((int)uVar5 <= (int)uVar8) goto LAB_006200e0;
          cVar6 = *(char *)(iVar7 + -0x3fe6);
          if (cVar6 < '\x01') {
            cVar6 = *(char *)(iVar7 + -0x3fe5);
          }
          if (cVar6 < '\x01') {
            cVar6 = *(char *)(iVar7 + -0x3fe4);
            goto joined_r0x00620180;
          }
          goto LAB_0062023c;
        }
      }
      goto LAB_00620188;
    }
  }
  *param_9 = 1;
LAB_00620040:
  param_9[1] = 1;
  return;
}


