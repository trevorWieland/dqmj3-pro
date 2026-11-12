#include "00350a34_00352200.h"



void fn_00352200(int param_1)

{
  if (*(char *)(param_1 + 0x88) == '\0') {
    fn_00159f34(*(undefined4 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x78));
  }
  if (*(char *)(param_1 + 0xa0) == '\0') {
    fn_00159f34(*(undefined4 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x90));
  }
  fn_0016a43c(*(undefined4 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x74));
  fn_0016a43c(*(undefined4 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x8c));
  return;
}



void fn_00351d94(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x78,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00352104(iVar1,param_1);
  return;
}



undefined4 * fn_00352104(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  puVar1 = (undefined4 *)fn_0068ab5c();
  *puVar1 = &DAT_00826528;
  if (param_2 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*param_2)(param_2);
    do {
      if (puVar2 == &DAT_00898c24) {
        puVar2 = param_2;
        goto LAB_0035215c;
      }
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_0035215c:
  puVar1[0x19] = puVar2;
  piVar3 = (int *)param_2[6];
  if (piVar3 != (int *)0x0) {
    puVar2 = (undefined4 *)(**(code **)(*piVar3 + 0xc))(piVar3);
    do {
      if (puVar2 == &DAT_00898c30) goto LAB_00352198;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  piVar3 = (int *)0x0;
LAB_00352198:
  puVar1[0x1a] = piVar3;
  puVar1[0x1b] = param_2[2];
  *(undefined1 *)(puVar1 + 0x1c) = 0;
  *(undefined1 *)((int)puVar1 + 0x71) = 0;
  puVar1[0x1d] = 0;
  return puVar1;
}



undefined4 fn_00351d64(void)

{
  undefined4 uVar1;
  undefined4 in_r3;
  undefined4 auStack_8 [2];
  
  auStack_8[0] = in_r3;
  uVar1 = fn_001603f8(auStack_8,0);
  fn_00163988(DAT_0089780c,uVar1,1);
  return 1;
}



void fn_003517d8(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  uVar1 = fn_00182994(DAT_008977e4);
  uVar2 = fn_001659c0(uVar1,(int)*(char *)(param_1 + 4),(int)*(char *)(param_1 + 0x1c));
  uVar1 = fn_00182994(DAT_008977e4);
  iVar3 = fn_001754ac(uVar1,uVar2 & 0xff);
  if (iVar3 == 0) {
    iVar3 = uVar2 - 0x14;
  }
  else {
    iVar3 = uVar2 - 0x10;
  }
  *(int *)(param_1 + 0x30) = iVar3;
  uVar1 = fn_00182994(DAT_008977e4);
  iVar3 = fn_001659c0(uVar1,(int)*(char *)(param_1 + 4),(int)*(char *)(param_1 + 0x1c));
  if (iVar3 != 0) {
    if (-1 < *(int *)(param_1 + *(int *)(param_1 + 0x30) * 4 + 0x34)) {
      uVar1 = fn_00182994(DAT_008977e4);
      fn_001483c0(uVar1,*(undefined4 *)(param_1 + *(int *)(param_1 + 0x30) * 4 + 0x34));
      *(undefined4 *)(param_1 + *(int *)(param_1 + 0x30) * 4 + 0x34) = 0xffffffff;
    }
    uVar1 = fn_00182994(DAT_008977e4);
    iVar3 = fn_00174aec(uVar1,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x1c));
    if (iVar3 != 3) {
      uVar1 = fn_00182994(DAT_008977e4);
      iVar3 = fn_00174aec(uVar1,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x1c));
      if (iVar3 != 4) goto LAB_0035197c;
    }
    uVar1 = fn_00182994(DAT_008977e4);
    iVar3 = fn_001550fc(uVar1,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x1c),
                         (int)*(short *)(param_1 + 0x58));
    uVar1 = fn_00182994(DAT_008977e4);
    iVar4 = fn_00163a1c(uVar1,*(undefined4 *)(param_1 + 4));
    if ((iVar4 == 4) && (iVar3 < 1)) {
      iVar3 = -1;
    }
    else {
      iVar3 = fn_002a1070(*(undefined4 *)(param_1 + 0x1c),1,1,*(undefined4 *)(param_1 + 4),
                           *(undefined4 *)(param_1 + 0x18),0);
    }
    fn_0029fcf4(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 4),
                 *(undefined4 *)(param_1 + 0x18),
                 *(undefined4 *)(param_1 + *(int *)(param_1 + 0x30) * 4 + 0x44));
    iVar4 = param_1 + *(int *)(param_1 + 0x30) * 4;
    *(int *)(iVar4 + 0x44) = *(int *)(iVar4 + 0x44) + 1;
    if (iVar3 == -1) {
      uVar1 = fn_00182994(DAT_008977e4);
      fn_0016a6d0(uVar1,uVar2 & 0xff,0);
    }
    else {
      *(int *)(param_1 + *(int *)(param_1 + 0x30) * 4 + 0x34) = iVar3;
    }
  }
LAB_0035197c:
  iVar3 = fn_00145b00(0x18,&DAT_00812c8c);
  uVar1 = 0;
  if (iVar3 != 0) {
    uVar1 = fn_0015c90c(iVar3,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x1c),1);
  }
  uVar5 = fn_00182994(DAT_008977e4);
  uVar1 = fn_0015a130(uVar5,uVar1);
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  return;
}



void fn_00351590(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  iVar1 = fn_0029e4e0(*(undefined4 *)(param_1 + 4));
  uVar2 = fn_00182994(DAT_008977e4);
  iVar3 = fn_0016561c(uVar2,(int)*(char *)(param_1 + 4));
  iVar7 = *(int *)(param_1 + 8);
  if (iVar7 < iVar1) {
    do {
      iVar6 = 0;
      if (0 < iVar3) {
        do {
          uVar2 = fn_00182994(DAT_008977e4);
          iVar4 = fn_001659c0(uVar2,(int)*(char *)(param_1 + 4),(int)(char)iVar6);
          if (iVar4 - 0x10U < 8) {
            fn_0029eca0(iVar6,1,1,*(undefined4 *)(param_1 + 4),iVar7,0,param_1 + 0x24,
                         param_1 + 0x25);
            fn_0015b414(*(undefined4 *)(param_1 + 4),iVar6);
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < iVar3);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar1);
  }
  iVar1 = fn_00145b00(0x18,&DAT_00812c8c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = fn_0015c90c(iVar1,*(undefined4 *)(param_1 + 4),0);
  }
  uVar5 = fn_00182994(DAT_008977e4);
  uVar2 = fn_0015a130(uVar5,uVar2);
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  *(undefined1 *)(param_1 + 0xe) = 4;
  *(undefined1 *)(param_1 + 0xf) = 2;
  return;
}



undefined4 fn_00351428(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  int iVar1;
  
  if (((param_1 == 0) || (param_4 < (int)(uint)(param_3 == 0))) ||
     (iVar1 = fn_00147e6c(param_1,&DAT_003514b0), iVar1 != 0)) {
    DAT_008928e4 = 0;
  }
  else {
    DAT_008928e4 = param_1 + 4;
  }
  if ((param_3 - 4 & 3) != 0) {
    DAT_008928e4 = 0;
  }
  if ((int)-(param_4 + (uint)(4 < param_3)) < 0 ==
      (SBORROW4(0,param_4) != SBORROW4(-param_4,(uint)(4 < param_3)))) {
    DAT_008928e8 = 0;
  }
  else {
    DAT_008928e8 = fn_0011c134(param_3 - 4,param_4 - (uint)(param_3 < 4),4,0);
  }
  return 1;
}



int fn_0035136c(int param_1)

{
  uint uVar1;
  uint uVar2;
  short *psVar3;
  
  if ((int)(DAT_008928e8 + 1) < 1) {
    uVar1 = 0;
  }
  else {
    uVar1 = ~DAT_008928e8 & 1;
    uVar2 = 0;
    if (uVar1 != 0) {
      do {
        if (*(short *)(DAT_008928e4 + uVar2 * 4) == param_1) goto LAB_003513e4;
        uVar2 = uVar2 + 1;
      } while ((int)uVar2 < (int)uVar1);
    }
  }
  while( true ) {
    uVar2 = uVar1;
    if ((int)(DAT_008928e8 + 1) <= (int)uVar2) {
      return 0;
    }
    psVar3 = (short *)(DAT_008928e4 + uVar2 * 4);
    if (*psVar3 == param_1) break;
    if (psVar3[2] == param_1) {
      return (int)*(short *)(DAT_008928e4 + uVar2 * 4 + 6);
    }
    uVar1 = uVar2 + 2;
  }
LAB_003513e4:
  return (int)*(short *)(DAT_008928e4 + uVar2 * 4 + 2);
}



undefined1 * fn_00350a34(int *param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [12];
  
  puVar1 = (undefined1 *)param_1[0x2d];
  if (puVar1 == (undefined1 *)0x0) {
    switch(param_2) {
    case 0:
      puVar6 = *(undefined4 **)(DAT_00897804 + 0x44);
      uVar2 = fn_006bebf8(*(undefined4 *)(DAT_00897804 + 0x40));
      iVar3 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),uVar2);
      fn_0020bbc4(auStack_28,iVar3);
      fn_00246e68(auStack_2c);
      fn_00246e00(auStack_2c);
      iVar4 = fn_00100b58(*puVar6);
      if (iVar4 == 0) {
        param_1[0x2f] = 3;
      }
      else {
        iVar4 = fn_006b5424(auStack_2c,*puVar6);
        if (iVar4 == 0) {
          if (iVar3 == 0) {
            iVar3 = 5;
          }
          else {
            iVar3 = fn_0024e350(iVar3);
            if (iVar3 == 0) {
              iVar3 = fn_006bf2b4(auStack_24);
              if (iVar3 == 0) {
                iVar3 = fn_001f82ac();
                if (iVar3 == 0) {
                  iVar3 = fn_006c3b68(puVar6);
                  if (iVar3 == 0xf1) {
                    iVar3 = 9;
                  }
                  else {
                    iVar3 = fn_002962d0(DAT_0089783c + 0x3c);
                    if (iVar3 == 0) {
LAB_00350bdc:
                      uVar2 = fn_00689b18(param_1);
                      fn_0026a494(DAT_00897818,uVar2,1);
                      iVar3 = 1;
                    }
                    else {
                      iVar3 = 0;
                      do {
                        iVar4 = DAT_0089783c;
                        uVar5 = fn_006bfda8(auStack_24);
                        if (uVar5 == *(ushort *)(iVar4 + iVar3 * 2 + 0x46)) goto LAB_00350bdc;
                        iVar3 = iVar3 + 1;
                      } while (iVar3 < 0x32);
                      iVar3 = 10;
                    }
                  }
                }
                else {
                  iVar3 = 8;
                }
              }
              else {
                iVar3 = 7;
              }
            }
            else {
              iVar3 = 6;
            }
          }
        }
        else {
          iVar3 = 4;
        }
        param_1[0x2f] = iVar3;
      }
      fn_00246e74(auStack_2c);
      puVar1 = auStack_28;
      break;
    case 1:
      fn_006899f4(param_1,0xbe,0);
      puVar1 = (undefined1 *)fn_0068ab44(param_1,0x100094b);
      return puVar1;
    case 2:
      fn_006899f4(param_1,0xb9,0);
      puVar1 = (undefined1 *)fn_0068ab44(param_1,0x100094b);
      return puVar1;
    case 3:
      fn_006899f4(param_1,0xbc,0,1);
      puVar1 = (undefined1 *)fn_0068ab44(param_1,0x100094b);
      return puVar1;
    case 4:
                    /* WARNING: Could not recover jumptable at 0x00350c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar1 = (undefined1 *)(**(code **)(*param_1 + 0x110))(param_1);
      return puVar1;
    }
  }
  return puVar1;
}


