#include "00626ff8_00627194.h"



void fn_00627194(int param_1,int param_2,int param_3,char *param_4)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  
  if (param_4[0x5160] == '\0') {
    fn_006261c8(param_1);
    fn_0062b748(param_1,param_2,param_3,param_4);
    fn_00623ec0(param_1,param_2,param_3,param_4);
    fn_006299f8(param_1,param_2,param_3,param_4);
    iVar8 = param_3 + 0x180388;
    if ((int)*(char *)(param_2 + 5) - 0x10U < 8) {
      fn_0062a40c(param_1,param_2);
      iVar3 = fn_001639e4();
      if (iVar3 == 1) {
        fn_00624a5c(param_1,param_4 + 8,0,(int)*param_4,param_3,param_4);
      }
      fn_0062a40c(param_1,param_2);
      iVar3 = fn_001639e4();
      if (iVar3 == 0x12) {
        fn_00624c18(param_1,param_4 + 8,0,(int)*param_4,param_3,param_4);
      }
      fn_0062a40c(param_1,param_2);
      iVar3 = fn_001639e4();
      if (iVar3 == 0x13) {
        fn_00624d78(param_1,param_4 + 8,0,(int)*param_4,param_3,param_4);
      }
      iVar3 = fn_0062a40c(param_1,param_2);
      if (iVar3 == 0x1a4) {
        cVar2 = param_4[4];
        fn_00628618(param_1,0x195,param_3,param_4);
        fn_00624c18(param_1,param_4 + 0x2088,(int)cVar2,(int)param_4[4],param_3,param_4);
      }
      iVar3 = fn_0062a40c(param_1,param_2);
      if (iVar3 == 0x1a5) {
        cVar2 = param_4[4];
        fn_00628618(param_1,0x196,param_3,param_4);
        fn_00624d78(param_1,param_4 + 0x2088,(int)cVar2,(int)param_4[4],param_3,param_4);
      }
      iVar3 = fn_0062a40c(param_1,param_2);
      if (iVar3 == 0xeb) {
        iVar6 = *(int *)(param_4 + 0x24);
        iVar3 = iVar8 + *(char *)(param_2 + 5) * 0x418;
        iVar4 = *(int *)(param_4 + 4);
        (param_4 + iVar4 * 0x1a0 + 0x20a0)[0] = '\x01';
        (param_4 + iVar4 * 0x1a0 + 0x20a0)[1] = '\0';
        *(int *)(param_4 + iVar4 * 0x1a0 + 0x20a4) =
             (int)*(short *)(iVar3 + -0x4062) - (iVar6 + *(short *)(iVar3 + -0x4064));
        param_4[iVar4 * 0x1a0 + 0x208a] = '\x04';
        (param_4 + iVar4 * 0x1a0 + 0x208c)[0] = '\r';
        (param_4 + iVar4 * 0x1a0 + 0x208c)[1] = '\0';
        param_4[iVar4 * 0x1a0 + 0x2088] = *(char *)(param_2 + 5);
        param_4[iVar4 * 0x1a0 + 0x2089] = *(char *)(param_2 + 5);
        param_4[iVar4 * 0x1a0 + 0x208e] = '\x04';
        param_4[iVar4 * 0x1a0 + 0x208f] = '\b';
        *(int *)(param_4 + 4) = *(int *)(param_4 + 4) + 1;
        fn_0062187c(param_1,param_4 + iVar4 * 0x1a0 + 0x2088,iVar8);
        fn_00654bf4(iVar8,*(undefined4 *)(param_4 + iVar4 * 0x1a0 + 0x221c));
        fn_00654c30(iVar8,*(undefined4 *)(param_4 + iVar4 * 0x1a0 + 0x2220));
      }
      fn_00626c64(param_1,param_2,param_3,param_4);
      fn_00628328(param_1,param_2,param_3,param_4);
      iVar3 = fn_0062a40c(param_1,param_2);
      if ((iVar3 == 0x175) && (iVar3 = fn_00626398(param_1,param_3), iVar3 == 0)) {
        iVar3 = *(int *)(param_4 + 4);
        (param_4 + iVar3 * 0x1a0 + 0x20a0)[0] = '\x01';
        (param_4 + iVar3 * 0x1a0 + 0x20a0)[1] = '\0';
        param_4[iVar3 * 0x1a0 + 0x208a] = '\x04';
        (param_4 + iVar3 * 0x1a0 + 0x208c)[0] = '\x03';
        (param_4 + iVar3 * 0x1a0 + 0x208c)[1] = '\0';
        param_4[iVar3 * 0x1a0 + 0x2088] = *(char *)(param_2 + 5);
        param_4[iVar3 * 0x1a0 + 0x2089] = *(char *)(param_2 + 5);
        param_4[iVar3 * 0x1a0 + 0x208e] = '\0';
        param_4[iVar3 * 0x1a0 + 0x208f] = '\b';
        param_4[iVar3 * 0x1a0 + 0x20e1] = -8;
        param_4[iVar3 * 0x1a0 + 0x2142] = '\x01';
        param_4[iVar3 * 0x1a0 + 0x20e2] = -8;
        param_4[iVar3 * 0x1a0 + 0x2143] = '\x01';
        param_4[iVar3 * 0x1a0 + 0x20e3] = -8;
        param_4[iVar3 * 0x1a0 + 0x2144] = '\x01';
        param_4[iVar3 * 0x1a0 + 0x20e4] = -8;
        param_4[iVar3 * 0x1a0 + 0x2145] = '\x01';
        param_4[iVar3 * 0x1a0 + 0x20e5] = -8;
        param_4[iVar3 * 0x1a0 + 0x2146] = '\x01';
        *(int *)(param_4 + 4) = *(int *)(param_4 + 4) + 1;
        fn_0062454c(param_1,param_4 + iVar3 * 0x1a0 + 0x2088,iVar8,1,0);
      }
      fn_0062a40c(param_1,param_2);
      psVar5 = (short *)fn_00691d40();
      iVar3 = fn_006914c4((int)*psVar5);
      if (iVar3 != 0) {
        iVar3 = *(int *)(param_4 + 4);
        pcVar7 = param_4 + iVar3 * 0x1a0 + 0x2088;
        (param_4 + iVar3 * 0x1a0 + 0x20a0)[0] = '\x01';
        (param_4 + iVar3 * 0x1a0 + 0x20a0)[1] = '\0';
        param_4[iVar3 * 0x1a0 + 0x208a] = '\x04';
        (param_4 + iVar3 * 0x1a0 + 0x208c)[0] = '\x03';
        (param_4 + iVar3 * 0x1a0 + 0x208c)[1] = '\0';
        *pcVar7 = *(char *)(param_2 + 5);
        param_4[iVar3 * 0x1a0 + 0x2089] = *(char *)(param_2 + 5);
        param_4[iVar3 * 0x1a0 + 0x208e] = '\0';
        param_4[iVar3 * 0x1a0 + 0x208f] = '\b';
        param_4[(int)*psVar5 + iVar3 * 0x1a0 + 0x20e0] = (char)psVar5[1];
        cVar2 = fn_006207d0((int)*psVar5,(int)*(char *)(param_2 + 5),iVar8);
        param_4[(int)*psVar5 + iVar3 * 0x1a0 + 0x2141] = cVar2;
        *(int *)(param_4 + 4) = *(int *)(param_4 + 4) + 1;
        fn_0062454c(param_1,pcVar7,iVar8,0,0);
        fn_0062abdc(param_1,iVar8,pcVar7,param_3);
        fn_00654bf4(iVar8,*(undefined4 *)(param_4 + iVar3 * 0x1a0 + 0x221c));
        fn_00654c30(iVar8,*(undefined4 *)(param_4 + iVar3 * 0x1a0 + 0x2220));
      }
    }
    fn_00626660(param_1,param_4,param_3);
    iVar3 = fn_00626398(param_1,param_3);
    iVar4 = fn_006f4d64(param_1 + 4,1);
    if ((iVar4 != 0) || (iVar4 = fn_006f4d64(param_1 + 4,0), bVar1 = false, iVar4 != 0)) {
      bVar1 = true;
    }
    if ((!bVar1 && iVar3 == 0) && *(char *)(param_1 + 0x1b) == '\0') {
      fn_006267fc(param_1,iVar8,param_3,param_4);
      return;
    }
  }
  return;
}



void fn_00627160(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  undefined1 auStack_18 [12];
  
  uVar1 = fn_0062a40c();
  fn_006211c8(uVar1,(int)*(char *)(param_4 + 1),param_3,auStack_18);
  fn_00655430(auStack_18);
  return;
}



int fn_006270b0(undefined4 param_1,int param_2,int param_3,undefined4 param_4,int param_5,
                int param_6)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  
  iVar4 = 0;
  do {
    if (param_3 <= param_2) {
      return iVar4;
    }
    iVar3 = param_5 + param_2 * 0x418;
    if (0 < *(short *)(iVar3 + -0x4080)) {
      iVar2 = fn_006925f4(param_4);
      if (iVar2 == 0) {
LAB_00627118:
        if (0 < *(short *)(iVar3 + -0x4080)) {
          cVar1 = *(char *)(iVar3 + -0x4019);
          bVar5 = cVar1 == '\0';
          if (bVar5) {
            cVar1 = *(char *)(iVar3 + -0x400a);
          }
          bVar6 = bVar5 && cVar1 == '\0';
          if (bVar5 && cVar1 == '\0') {
            bVar6 = *(char *)(iVar3 + -0x4018) == '\0';
          }
          if (bVar6) goto LAB_00627140;
        }
      }
      else {
        cVar1 = *(char *)(iVar3 + -0x400a);
        bVar5 = cVar1 == '\0';
        if (bVar5) {
          cVar1 = *(char *)(iVar3 + -0x4018);
        }
        if (!bVar5 || cVar1 != '\0') goto LAB_00627118;
LAB_00627140:
        *(char *)(param_6 + iVar4) = (char)param_2;
        iVar4 = iVar4 + 1;
      }
    }
    param_2 = (int)(char)((char)param_2 + '\x01');
  } while( true );
}



int fn_00626ff8(undefined4 param_1,int param_2,int param_3,undefined4 param_4,int param_5,
                int param_6)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  
  uVar2 = fn_0062a40c(param_1,param_4);
  iVar5 = 0;
  do {
    if (param_3 <= param_2) {
      return iVar5;
    }
    iVar4 = param_5 + param_2 * 0x418;
    if (0 < *(short *)(iVar4 + -0x4080)) {
      iVar3 = fn_006925f4(uVar2);
      if (iVar3 == 0) {
LAB_00627068:
        if (0 < *(short *)(iVar4 + -0x4080)) {
          cVar1 = *(char *)(iVar4 + -0x4019);
          bVar6 = cVar1 == '\0';
          if (bVar6) {
            cVar1 = *(char *)(iVar4 + -0x400a);
          }
          bVar7 = bVar6 && cVar1 == '\0';
          if (bVar6 && cVar1 == '\0') {
            bVar7 = *(char *)(iVar4 + -0x4018) == '\0';
          }
          if (bVar7) goto LAB_00627090;
        }
      }
      else {
        cVar1 = *(char *)(iVar4 + -0x400a);
        bVar6 = cVar1 == '\0';
        if (bVar6) {
          cVar1 = *(char *)(iVar4 + -0x4018);
        }
        if (!bVar6 || cVar1 != '\0') goto LAB_00627068;
LAB_00627090:
        *(char *)(param_6 + iVar5) = (char)param_2;
        iVar5 = iVar5 + 1;
      }
    }
    param_2 = (int)(char)((char)param_2 + '\x01');
  } while( true );
}


