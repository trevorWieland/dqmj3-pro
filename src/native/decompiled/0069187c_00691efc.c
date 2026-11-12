#include "0069187c_00691efc.h"



uint fn_00691efc(int param_1)

{
  return (*(byte *)(DAT_008994a4 + param_1 * 0x60 + 0x40) & 3) >> 1;
}



uint fn_00691ed8(int param_1)

{
  return (*(ushort *)(DAT_008994a4 + param_1 * 0x60 + 0x40) & 0x3fff) >> 0xd;
}



uint fn_00691e94(int param_1)

{
  return (*(uint *)(DAT_008994a4 + param_1 * 0x60 + 0x40) & 0x7ffffff) >> 0x1a;
}



int fn_00691e30(int param_1)

{
  return (int)*(short *)(DAT_008994a4 + param_1 * 0x60 + 0x10);
}



int fn_00691e14(int param_1)

{
  return (int)*(short *)(DAT_008994a4 + param_1 * 0x60 + 0x12);
}



ushort fn_00691df0(int param_1)

{
  return *(ushort *)(DAT_008994a4 + param_1 * 0x60 + 0x40) >> 0xf;
}



uint fn_00691dcc(int param_1)

{
  return (*(uint *)(DAT_008994a4 + param_1 * 0x60 + 0x40) & 0x3ffffff) >> 0x19;
}



undefined1 fn_00691d94(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = DAT_008994a4 + param_1 * 0x60;
  if (((*(ushort *)(iVar2 + 0x40) & 0xfff) >> 0xb == 0) ||
     (uVar1 = 1, *(char *)(iVar2 + 2) != '\x01')) {
    uVar1 = 0;
  }
  return uVar1;
}



int fn_00691d78(int param_1)

{
  return (int)*(short *)(DAT_008994a4 + param_1 * 0x60 + 6);
}



undefined1 fn_00691d5c(int param_1)

{
  return *(undefined1 *)(DAT_008994a4 + param_1 * 0x60 + 5);
}



int fn_00691d40(int param_1)

{
  return DAT_008994a4 + param_1 * 0x60 + 0x3a;
}



void fn_00691b10(uint *param_1)

{
  uint uVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  short *psVar5;
  short *psVar6;
  uint uVar7;
  uint uVar8;
  short *psVar9;
  uint uVar10;
  
  sVar2 = 0;
  if (0 < (short)DAT_008994a8) {
    do {
      if (((int)sVar2 - 1U < 699) &&
         ((*(uint *)(DAT_008994a4 + sVar2 * 0x60 + 0x40) & 0x3ffffff) >> 0x19 != 0)) {
        psVar9 = (short *)param_1[1];
        if (psVar9 == (short *)param_1[2]) {
          uVar1 = (int)((int)psVar9 - *param_1) >> 1;
          if (uVar1 < (uint)((int)((int)param_1[2] - *param_1) >> 1)) {
            param_1[1] = (uint)(psVar9 + 1);
            if (psVar9 != (short *)0x0) {
              *psVar9 = psVar9[-1];
            }
            psVar5 = psVar9 + -1;
            psVar6 = psVar9;
            if (psVar9 < psVar5) {
              iVar3 = (int)psVar5 - (int)psVar9;
              if (0 < iVar3) {
                if (iVar3 * 0x40000000 < 0) {
                  psVar5 = psVar9 + -2;
                  psVar6 = psVar9 + -1;
                  *psVar6 = *psVar5;
                }
                for (iVar3 = iVar3 >> 2; iVar3 != 0; iVar3 = iVar3 + -1) {
                  psVar6[-1] = psVar5[-1];
                  psVar5 = psVar5 + -2;
                  psVar6 = psVar6 + -2;
                  *psVar6 = *psVar5;
                }
              }
            }
            else {
              while (psVar9 != psVar5) {
                psVar5 = psVar5 + -1;
                psVar6[-1] = *psVar5;
                psVar6 = psVar6 + -1;
              }
            }
            *psVar9 = sVar2;
          }
          else {
            uVar10 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
            if (uVar10 < uVar1 + 0x20) {
              uVar10 = uVar1 + 0x20;
            }
            psVar4 = (short *)fn_00100fc6(uVar10 << 1,0);
            psVar6 = psVar4;
            for (psVar5 = (short *)*param_1; psVar5 != psVar9; psVar5 = psVar5 + 1) {
              if (psVar6 != (short *)0x0) {
                *psVar6 = *psVar5;
              }
              psVar6 = psVar6 + 1;
            }
            psVar5 = (short *)(((int)psVar9 - *param_1 & 0xfffffffe) + (int)psVar4);
            if (psVar5 != (short *)0x0) {
              *psVar5 = sVar2;
            }
            psVar6 = (short *)param_1[1];
            psVar5 = (short *)(((int)psVar9 - *param_1 & 0xfffffffe) + (int)psVar4);
            for (; psVar9 != psVar6; psVar9 = psVar9 + 1) {
              psVar5 = psVar5 + 1;
              if (psVar5 != (short *)0x0) {
                *psVar5 = *psVar9;
              }
            }
            uVar7 = param_1[1];
            uVar8 = *param_1;
            uVar1 = uVar8;
            if (uVar7 <= uVar8) {
              for (; uVar1 != uVar7; uVar1 = uVar1 + 2) {
              }
            }
            fn_001008c4(uVar8,(int)(param_1[2] - uVar8) >> 1,0);
            param_1[2] = (uint)(psVar4 + uVar10);
            param_1[1] = (uint)(psVar4 + ((int)(uVar7 - uVar8) >> 1) + 1);
            *param_1 = (uint)psVar4;
          }
        }
        else {
          param_1[1] = (uint)(psVar9 + 1);
          if (psVar9 != (short *)0x0) {
            *psVar9 = sVar2;
          }
        }
      }
      sVar2 = sVar2 + 1;
    } while (sVar2 < (short)DAT_008994a8);
  }
  return;
}



int fn_00691af0(int param_1,int param_2)

{
  return (int)*(short *)(DAT_008994a4 + param_1 * 0x60 + param_2 * 2 + 0x18);
}



undefined4 fn_00691ab4(int param_1)

{
  undefined4 uVar1;
  bool bVar2;
  
  uVar1 = 1;
  bVar2 = *(char *)(DAT_008994a4 + param_1 * 0x60 + 10) == 'D';
  if (!bVar2) {
    param_1 = param_1 + -0x19b;
    bVar2 = param_1 == 0;
  }
  if ((!bVar2) && (param_1 != 8)) {
    uVar1 = 0;
  }
  return uVar1;
}



bool fn_00691a0c(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = DAT_008994a4 + param_1 * 0x60;
  return *(byte *)(iVar1 + 0x22) == param_2 || *(byte *)(iVar1 + 0x23) == param_2;
}



undefined4 fn_006919b0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_008994a4 + param_1 * 0x60;
  if (*(short *)(iVar2 + 0x3a) != param_2) {
    iVar1 = 0;
    while (*(short *)(iVar2 + iVar1 * 4 + 0x2a) != param_2) {
      iVar1 = (int)(char)((char)iVar1 + '\x01');
      if (3 < iVar1) {
        return 0;
      }
    }
  }
  return 1;
}



int fn_00691994(int param_1)

{
  return (int)*(char *)(DAT_008994a4 + param_1 * 0x60 + 0x48);
}



undefined4 fn_006918d0(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  int iVar1;
  short *psVar2;
  int iVar3;
  int iVar4;
  
  if (((param_1 == 0) || (param_4 < (int)(uint)(param_3 == 0))) ||
     (iVar1 = fn_00147e6c(param_1,&DAT_00691988,4), iVar1 != 0)) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + 4;
  }
  iVar3 = 0x60;
  iVar4 = 0;
  iVar1 = fn_0011c134(param_3 - 4,param_4 - (uint)(param_3 < 4));
  if (iVar3 != 0 || iVar4 != 0) {
    param_1 = 0;
  }
  psVar2 = (short *)-(param_4 + (uint)(4 < param_3));
  if ((int)psVar2 < 0 == (SBORROW4(0,param_4) != SBORROW4(-param_4,(uint)(4 < param_3)))) {
    iVar1 = 0;
  }
  DAT_008994a4 = param_1;
  DAT_008994a8 = iVar1;
  if (0 < iVar1) {
    psVar2 = (short *)(param_1 + 0x4a);
  }
  DAT_008994a2 = 0;
  if (0 < iVar1) {
    do {
      if (*psVar2 != 0) {
        DAT_008994a2 = DAT_008994a2 + 1;
      }
      iVar1 = iVar1 + -1;
      psVar2 = psVar2 + 0x30;
    } while (iVar1 != 0);
  }
  return 1;
}



int fn_006918b4(int param_1)

{
  return (int)*(short *)(DAT_008994a4 + param_1 * 0x60 + 0xc);
}



int fn_00691898(int param_1)

{
  return (int)*(short *)(DAT_008994a4 + param_1 * 0x60 + 0xe);
}



undefined1 fn_0069187c(int param_1)

{
  return *(undefined1 *)(DAT_008994a4 + param_1 * 0x60 + 0x23);
}


