#include "0016561c_0016595c.h"



int fn_0016595c(int param_1)

{
  if (*(char *)(param_1 + 4) == '\x11') {
    param_1 = param_1 + 8;
  }
  else {
    param_1 = 0;
  }
  return param_1;
}



int fn_001657d0(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  cVar1 = *(char *)(param_1 + 4);
  switch(cVar1) {
  case '\0':
    pcVar3 = *(char **)(param_1 + 8);
    if (((pcVar3 != (char *)0x0) && (*pcVar3 == '\v')) && (pcVar3 + 4 != (char *)0x0)) {
      if (param_2 == 0) {
        return (int)pcVar3[4];
      }
      return (int)pcVar3[6];
    }
switchD_001657dc_caseD_1:
    iVar2 = fn_0016533c(param_1,param_2,0);
    if (iVar2 == 0) {
      return 0;
    }
    return (int)*(char *)(iVar2 + 4);
  case '\x01':
  case '\x02':
  case '\x03':
  case '\x04':
  case '\x05':
  case '\x06':
  case '\a':
  case '\b':
  case '\t':
  case '\n':
  case '\f':
  case '\x0e':
  case '\x10':
  case '\x11':
  case '\x15':
  case '\x16':
  case '\x17':
  case '\x18':
  case '\x19':
  case '#':
    goto switchD_001657dc_caseD_1;
  default:
    return 0;
  case '\r':
    return 0x10;
  case '\x0f':
    return (int)*(char *)(*(int *)(param_1 + 8) + 4);
  case '\x12':
    return (int)*(char *)(param_1 + 9);
  case '\x1b':
  case '\x1d':
  case ' ':
  case '\"':
    if (((cVar1 == '\x1b' || cVar1 == '\x1c') || (cVar1 == '\x1d' || cVar1 == '\x1e')) ||
       ((cVar1 == '\x1f' || cVar1 == ' ' || (cVar1 == '!' || cVar1 == '\"')))) {
      param_1 = param_1 + 8;
    }
    else {
      param_1 = 0;
    }
    return (int)*(char *)(param_1 + param_2);
  case '\x1c':
  case '\x1e':
  case '\x1f':
  case '!':
    if ((((cVar1 == '\x1b' || cVar1 == '\x1c') || (cVar1 == '\x1d' || cVar1 == '\x1e')) ||
        (cVar1 == '\x1f' || cVar1 == ' ')) || (cVar1 == '!' || cVar1 == '\"')) {
      pcVar3 = (char *)(param_1 + 8);
    }
    else {
      pcVar3 = (char *)0x0;
    }
    return (int)*pcVar3;
  }
}



int fn_001657c8(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  iVar2 = *(int *)(param_1 + 0x84);
  cVar1 = *(char *)(iVar2 + 4);
  switch(cVar1) {
  case '\0':
    pcVar3 = *(char **)(iVar2 + 8);
    if (((pcVar3 != (char *)0x0) && (*pcVar3 == '\v')) && (pcVar3 + 4 != (char *)0x0)) {
      if (param_2 == 0) {
        return (int)pcVar3[4];
      }
      return (int)pcVar3[6];
    }
switchD_001657dc_caseD_1:
    iVar2 = fn_0016533c(iVar2,param_2,0);
    if (iVar2 == 0) {
      return 0;
    }
    return (int)*(char *)(iVar2 + 4);
  case '\x01':
  case '\x02':
  case '\x03':
  case '\x04':
  case '\x05':
  case '\x06':
  case '\a':
  case '\b':
  case '\t':
  case '\n':
  case '\f':
  case '\x0e':
  case '\x10':
  case '\x11':
  case '\x15':
  case '\x16':
  case '\x17':
  case '\x18':
  case '\x19':
  case '#':
    goto switchD_001657dc_caseD_1;
  default:
    return 0;
  case '\r':
    return 0x10;
  case '\x0f':
    return (int)*(char *)(*(int *)(iVar2 + 8) + 4);
  case '\x12':
    return (int)*(char *)(iVar2 + 9);
  case '\x1b':
  case '\x1d':
  case ' ':
  case '\"':
    if (((cVar1 == '\x1b' || cVar1 == '\x1c') || (cVar1 == '\x1d' || cVar1 == '\x1e')) ||
       ((cVar1 == '\x1f' || cVar1 == ' ' || (cVar1 == '!' || cVar1 == '\"')))) {
      iVar2 = iVar2 + 8;
    }
    else {
      iVar2 = 0;
    }
    return (int)*(char *)(iVar2 + param_2);
  case '\x1c':
  case '\x1e':
  case '\x1f':
  case '!':
    if ((((cVar1 == '\x1b' || cVar1 == '\x1c') || (cVar1 == '\x1d' || cVar1 == '\x1e')) ||
        (cVar1 == '\x1f' || cVar1 == ' ')) || (cVar1 == '!' || cVar1 == '\"')) {
      pcVar3 = (char *)(iVar2 + 8);
    }
    else {
      pcVar3 = (char *)0x0;
    }
    return (int)*pcVar3;
  }
}



int fn_00165624(int param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  
  iVar3 = (int)*(char *)(param_1 + 4);
  switch(*(char *)(param_1 + 4)) {
  case '\0':
    param_1 = fn_00175c44();
    break;
  case '\x01':
    bVar5 = param_2 == 0;
    if (-1 < param_2) {
      iVar3 = *(int *)(param_1 + 0xc);
      bVar5 = iVar3 == param_2;
    }
    if (bVar5 || (-1 >= param_2 || iVar3 < param_2)) {
      return 0;
    }
    param_1 = *(int *)(param_1 + param_2 * 4 + 0x10);
    break;
  case '\x02':
    bVar5 = param_2 == 0;
    if (-1 < param_2) {
      iVar3 = *(int *)(param_1 + 8);
      bVar5 = iVar3 == param_2;
    }
    if (bVar5 || (-1 >= param_2 || iVar3 < param_2)) {
      return 0;
    }
    param_1 = *(int *)(param_1 + param_2 * 4 + 0xc);
    break;
  case '\x03':
    pcVar2 = (char *)(param_1 + 8);
    if (pcVar2 == (char *)0x0) {
      return 0;
    }
    goto LAB_00165754;
  case '\x04':
  case '\x05':
  case '\x06':
  case '#':
    if ((iVar3 == 4 || iVar3 == 5) || (iVar3 == 6 || iVar3 == 0x23)) {
      pcVar2 = (char *)(param_1 + 8);
    }
    else {
      pcVar2 = (char *)0x0;
    }
LAB_00165754:
    return (int)*pcVar2;
  case '\a':
  case '\f':
  case '\r':
  case '\x0e':
  case '\x0f':
  case '\x10':
  case '\x11':
  case '\x19':
    return 1;
  case '\b':
  case '\t':
  case '\n':
    if ((iVar3 == 8 || iVar3 == 9) || (iVar3 == 10)) {
      param_1 = param_1 + 8;
    }
    else {
      param_1 = 0;
    }
    cVar1 = *(char *)(param_1 + 4);
    goto LAB_00165784;
  default:
    goto switchD_00165630_caseD_b;
  case '\x15':
    bVar4 = param_2 < 0;
    bVar5 = param_2 == 0;
    if (!bVar4) {
      iVar3 = *(int *)(param_1 + 0x10);
      bVar5 = iVar3 == param_2;
    }
    if (!bVar5 && (!bVar4 && param_2 <= iVar3)) {
      param_1 = param_1 + param_2 * 4;
    }
    if (bVar5 || (bVar4 || iVar3 < param_2)) {
      param_1 = 0;
    }
    if (!bVar5 && (!bVar4 && param_2 <= iVar3)) {
      param_1 = *(int *)(param_1 + 0x14);
    }
    goto LAB_00165724;
  case '\x16':
  case '\x17':
    cVar1 = *(char *)(param_1 + 0xc);
LAB_00165784:
    return (int)cVar1;
  }
  if (param_1 != 0) {
LAB_00165724:
    return (int)*(char *)(param_1 + 0x14);
  }
switchD_00165630_caseD_b:
  return 0;
}



int fn_0016561c(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  
  iVar2 = *(int *)(param_1 + 0x84);
  iVar4 = (int)*(char *)(iVar2 + 4);
  switch(*(char *)(iVar2 + 4)) {
  case '\0':
    iVar2 = fn_00175c44();
    break;
  case '\x01':
    bVar6 = param_2 == 0;
    if (-1 < param_2) {
      iVar4 = *(int *)(iVar2 + 0xc);
      bVar6 = iVar4 == param_2;
    }
    if (bVar6 || (-1 >= param_2 || iVar4 < param_2)) {
      return 0;
    }
    iVar2 = *(int *)(iVar2 + param_2 * 4 + 0x10);
    break;
  case '\x02':
    bVar6 = param_2 == 0;
    if (-1 < param_2) {
      iVar4 = *(int *)(iVar2 + 8);
      bVar6 = iVar4 == param_2;
    }
    if (bVar6 || (-1 >= param_2 || iVar4 < param_2)) {
      return 0;
    }
    iVar2 = *(int *)(iVar2 + param_2 * 4 + 0xc);
    break;
  case '\x03':
    pcVar3 = (char *)(iVar2 + 8);
    if (pcVar3 == (char *)0x0) {
      return 0;
    }
    goto LAB_00165754;
  case '\x04':
  case '\x05':
  case '\x06':
  case '#':
    if ((iVar4 == 4 || iVar4 == 5) || (iVar4 == 6 || iVar4 == 0x23)) {
      pcVar3 = (char *)(iVar2 + 8);
    }
    else {
      pcVar3 = (char *)0x0;
    }
LAB_00165754:
    return (int)*pcVar3;
  case '\a':
  case '\f':
  case '\r':
  case '\x0e':
  case '\x0f':
  case '\x10':
  case '\x11':
  case '\x19':
    return 1;
  case '\b':
  case '\t':
  case '\n':
    if ((iVar4 == 8 || iVar4 == 9) || (iVar4 == 10)) {
      iVar2 = iVar2 + 8;
    }
    else {
      iVar2 = 0;
    }
    cVar1 = *(char *)(iVar2 + 4);
    goto LAB_00165784;
  default:
    goto switchD_00165630_caseD_b;
  case '\x15':
    bVar5 = param_2 < 0;
    bVar6 = param_2 == 0;
    if (!bVar5) {
      iVar4 = *(int *)(iVar2 + 0x10);
      bVar6 = iVar4 == param_2;
    }
    if (!bVar6 && (!bVar5 && param_2 <= iVar4)) {
      iVar2 = iVar2 + param_2 * 4;
    }
    if (bVar6 || (bVar5 || iVar4 < param_2)) {
      iVar2 = 0;
    }
    if (!bVar6 && (!bVar5 && param_2 <= iVar4)) {
      iVar2 = *(int *)(iVar2 + 0x14);
    }
    goto LAB_00165724;
  case '\x16':
  case '\x17':
    cVar1 = *(char *)(iVar2 + 0xc);
LAB_00165784:
    return (int)cVar1;
  }
  if (iVar2 != 0) {
LAB_00165724:
    return (int)*(char *)(iVar2 + 0x14);
  }
switchD_00165630_caseD_b:
  return 0;
}


