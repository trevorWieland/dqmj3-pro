#include "single_00629d34_r.h"


extern undefined4 SupervisorCall;

void fn_00629d34(int param_1,short *param_2,int param_3)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  short *extraout_r1;
  int iVar5;
  bool bVar6;
  bool bVar7;
  undefined8 uVar8;
  undefined1 auStack_20 [12];
  
  iVar5 = 0x10;
  do {
    cVar1 = (char)iVar5;
    if (*(char *)(param_3 + 0xfb) != '\0') {
      uVar3 = iVar5 - 0x10;
      if (uVar3 >= 8) {
        param_2 = (short *)(iVar5 + -0x18);
      }
      if (uVar3 < 8 || param_2 < &SupervisorCall) {
        bVar6 = uVar3 < 4;
        if (!bVar6) {
          uVar3 = iVar5 - 0x18;
        }
        if ((bVar6 || uVar3 < 4) || (iVar5 == 0x20 || iVar5 == 0x22)) {
          cVar2 = cVar1 + '\x04';
        }
        else {
          cVar2 = cVar1 + -4;
        }
        iVar5 = (int)cVar2;
      }
      else if (iVar5 - 0x20U < 2) {
        if (iVar5 == 0x20 || iVar5 == 0x22) {
          iVar5 = 0x21;
        }
        else {
          iVar5 = 0x20;
        }
      }
      else if (iVar5 - 0x22U < 2) {
        if (iVar5 == 0x20 || iVar5 == 0x22) {
          iVar5 = 0x23;
        }
        else {
          iVar5 = 0x22;
        }
      }
      else {
        iVar5 = 0;
      }
    }
    iVar4 = param_3 + iVar5 * 0x418;
    param_2 = (short *)(iVar4 + -0x4080);
    if ((*(char *)(iVar4 + -0x407e) == '\x06') && (0 < *param_2)) {
      cVar2 = *(char *)(iVar4 + -0x4019);
      bVar6 = cVar2 == '\0';
      if (bVar6) {
        cVar2 = *(char *)(iVar4 + -0x400a);
      }
      bVar7 = bVar6 && cVar2 == '\0';
      if (bVar6 && cVar2 == '\0') {
        bVar7 = *(char *)(iVar4 + -0x4018) == '\0';
      }
      if (bVar7) {
        fn_00621304(iVar5,param_3,auStack_20);
        uVar8 = fn_00655430(auStack_20);
        param_2 = (short *)((ulonglong)uVar8 >> 0x20);
        if ((int)uVar8 != 0) {
          fn_00655e10(param_1 + 4,iVar5);
          param_2 = extraout_r1;
        }
      }
    }
    iVar5 = (int)(char)(cVar1 + '\x01');
  } while (iVar5 < 0x18);
  return;
}


