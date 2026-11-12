#include "006487f8_00648d3c.h"



int fn_00648d3c(int param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  
  iVar2 = fn_006f44fc(*(undefined4 *)(param_1 + 0xc),0xd0);
  if (iVar2 == 0) {
    cVar1 = *(char *)(param_3 + 3);
  }
  else {
    cVar1 = *(char *)(param_3 + 2);
  }
  return (int)cVar1;
}



int fn_00648d18(int param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  
  iVar2 = fn_006f44fc(*(undefined4 *)(param_1 + 0xc),0xcf);
  if (iVar2 == 0) {
    cVar1 = *(char *)(param_3 + 3);
  }
  else {
    cVar1 = *(char *)(param_3 + 2);
  }
  return (int)cVar1;
}



int fn_00648cf4(int param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  
  iVar2 = fn_006f44fc(*(undefined4 *)(param_1 + 0xc),0xce);
  if (iVar2 == 0) {
    cVar1 = *(char *)(param_3 + 3);
  }
  else {
    cVar1 = *(char *)(param_3 + 2);
  }
  return (int)cVar1;
}



int fn_00648cd0(int param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  
  iVar2 = fn_006f44fc(*(undefined4 *)(param_1 + 0xc),0xcd);
  if (iVar2 == 0) {
    cVar1 = *(char *)(param_3 + 3);
  }
  else {
    cVar1 = *(char *)(param_3 + 2);
  }
  return (int)cVar1;
}



int fn_00648cac(int param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  
  iVar2 = fn_006f44fc(*(undefined4 *)(param_1 + 0xc),0xcc);
  if (iVar2 == 0) {
    cVar1 = *(char *)(param_3 + 3);
  }
  else {
    cVar1 = *(char *)(param_3 + 2);
  }
  return (int)cVar1;
}



int fn_00648bcc(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint unaff_r4;
  int iVar6;
  undefined4 local_28;
  uint local_24;
  
  iVar1 = fn_006f1b70();
  if (iVar1 - 0x10U < 8) {
    iVar1 = fn_006f0ae4(param_1);
    iVar2 = fn_006f0a30(param_1);
    uVar3 = fn_006f1b70(param_1);
    local_24 = uVar3 & 0xff | unaff_r4 & 0xffffff00;
    local_28 = param_1;
    for (; iVar1 < iVar2; iVar1 = (int)(char)((char)iVar1 + '\x01')) {
      iVar4 = fn_006f14a4(param_1,iVar1);
      if (iVar4 != 0) {
        iVar6 = 0;
        if (*(char *)(iVar4 + 0x120) != '\0') {
          do {
            iVar5 = fn_0064ff60(&local_28,(int)*(short *)((byte *)(iVar4 + 0x120) + iVar6 * 2 + 4),
                                 iVar1);
            if (iVar5 != 0) {
              return (int)*(char *)(param_3 + 2);
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < (int)(uint)*(byte *)(iVar4 + 0x120));
        }
      }
    }
  }
  return (int)*(char *)(param_3 + 3);
}



int fn_00648b6c(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  short sVar2;
  int iVar3;
  
  iVar3 = fn_006f1b70();
  if ((iVar3 - 0x10U < 8) && (iVar3 = fn_006f14a4(param_1,iVar3), iVar3 != 0)) {
    sVar2 = fn_00176dc0();
    if ((int)*(short *)(iVar3 + 0x1c) <= (int)sVar2 / 10) {
      cVar1 = *(char *)(param_3 + 2);
      goto LAB_00648bc4;
    }
  }
  cVar1 = *(char *)(param_3 + 3);
LAB_00648bc4:
  return (int)cVar1;
}



int fn_00648b18(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = fn_006f1b70();
  if (((iVar2 - 0x10U < 8) && (iVar2 = fn_006f14a4(param_1,iVar2), iVar2 != 0)) &&
     (iVar3 = fn_00176dc0(),
     (int)*(short *)(iVar2 + 0x1c) <= (int)(iVar3 + ((uint)(iVar3 >> 0x1f) >> 0x1e)) >> 2)) {
    cVar1 = *(char *)(param_3 + 2);
  }
  else {
    cVar1 = *(char *)(param_3 + 3);
  }
  return (int)cVar1;
}



int fn_00648ac8(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = fn_006f1b70();
  if (((iVar2 - 0x10U < 8) && (iVar2 = fn_006f14a4(param_1,iVar2), iVar2 != 0)) &&
     (iVar3 = fn_00176dc0(), (int)*(short *)(iVar2 + 0x1c) <= iVar3 / 2)) {
    cVar1 = *(char *)(param_3 + 2);
  }
  else {
    cVar1 = *(char *)(param_3 + 3);
  }
  return (int)cVar1;
}



int fn_00648a70(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = fn_006f1b70();
  if (((iVar2 - 0x10U < 8) && (iVar2 = fn_006f14a4(param_1,iVar2), iVar2 != 0)) &&
     (iVar3 = fn_00176dc0(),
     (int)(iVar3 * 3 + ((uint)(iVar3 * 3 >> 0x1f) >> 0x1e)) >> 2 <= (int)*(short *)(iVar2 + 0x1c)))
  {
    cVar1 = *(char *)(param_3 + 2);
  }
  else {
    cVar1 = *(char *)(param_3 + 3);
  }
  return (int)cVar1;
}



int fn_00648a24(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = fn_006f1b70();
  if (((iVar2 - 0x10U < 8) && (iVar2 = fn_006f14a4(param_1,iVar2), iVar2 != 0)) &&
     (iVar3 = fn_00176dc0(), iVar3 == *(short *)(iVar2 + 0x1c))) {
    cVar1 = *(char *)(param_3 + 2);
  }
  else {
    cVar1 = *(char *)(param_3 + 3);
  }
  return (int)cVar1;
}



int fn_006489dc(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  
  iVar2 = fn_006f1b70();
  if (((iVar2 - 0x10U < 8) && (iVar2 = fn_006f14a4(param_1,iVar2), iVar2 != 0)) &&
     (*(char *)(iVar2 + 0x59) == '\x04')) {
    cVar1 = *(char *)(param_3 + 2);
  }
  else {
    cVar1 = *(char *)(param_3 + 3);
  }
  return (int)cVar1;
}



int fn_0064898c(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  
  iVar2 = fn_006f1b70();
  if (((iVar2 - 0x10U < 8) && (iVar2 = fn_006f14a4(param_1,iVar2), iVar2 != 0)) &&
     (iVar2 = fn_006f0b40(param_1,(int)*(char *)(iVar2 + 0x59)), iVar2 != 0)) {
    cVar1 = *(char *)(param_3 + 2);
  }
  else {
    cVar1 = *(char *)(param_3 + 3);
  }
  return (int)cVar1;
}



int fn_006488dc(int param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  
  if (*(char *)(*(int *)(param_1 + 0xc) + 0x3fa) == '\b') {
    iVar2 = fn_006f25cc(param_1,(int)*(char *)(param_2 + 2));
    if (iVar2 != 0) {
      cVar1 = *(char *)(*(int *)(param_1 + 0xc) + 0x3fc);
      if (cVar1 == '\0') {
        if (*(byte *)(param_2 + 2) < 2) goto LAB_00648984;
      }
      else if (cVar1 == '\x01') {
        if (*(char *)(param_2 + 2) == '\x02' || *(char *)(param_2 + 2) == '\x03') goto LAB_00648984;
      }
      else if (cVar1 == '\x02') {
        if (*(char *)(param_2 + 2) == '\x04') goto LAB_00648984;
      }
      else {
        bVar3 = cVar1 == '\x03';
        if (bVar3) {
          cVar1 = *(char *)(param_2 + 2);
        }
        if (bVar3 && cVar1 == '\x05') {
LAB_00648984:
          return (int)*(char *)(param_3 + 2);
        }
      }
    }
    iVar2 = (int)*(char *)(param_3 + 3);
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}



int fn_00648870(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (*(char *)(*(int *)(param_1 + 0xc) + 0x3fa) == '\a') {
    iVar1 = fn_006f25cc(param_1,(int)*(char *)(param_2 + 2));
    if (iVar1 == 0) {
LAB_006488d4:
      return (int)*(char *)(param_3 + 3);
    }
    if (*(char *)(*(int *)(param_1 + 0xc) + 0x3fc) == '\0') {
      if (*(char *)(param_2 + 2) != '\0') goto LAB_006488d4;
    }
    else if (*(char *)(param_2 + 2) == '\0') goto LAB_006488d4;
    iVar1 = (int)*(char *)(param_3 + 2);
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}



int fn_006487f8(int param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  
  if (*(char *)(*(int *)(param_1 + 0xc) + 0x3fa) != '\x06') {
    return 0;
  }
  iVar2 = fn_006f25cc(param_1,(int)*(char *)(param_2 + 2));
  if (iVar2 != 0) {
    cVar1 = *(char *)(*(int *)(param_1 + 0xc) + 0x3fc);
    if ((*(char *)(param_2 + 2) == (char)(cVar1 * '\x02')) ||
       (*(char *)(param_2 + 2) == (char)(cVar1 * '\x02' + '\x01'))) {
      return (int)*(char *)(param_3 + 2);
    }
  }
  return (int)*(char *)(param_3 + 3);
}


