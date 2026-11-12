#include "002fa7b4_002fab9c.h"



undefined4 fn_002fab9c(uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 4) {
    uVar1 = 0x32;
  }
  else if (param_1 < 10) {
    uVar1 = 0x4b;
  }
  else {
    uVar1 = 100;
  }
  return uVar1;
}



undefined4 fn_002fab74(uint param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 < 0x65) {
    uVar1 = fn_0035a17c((int)(char)((char)param_1 + -1));
  }
  return uVar1;
}



int fn_002faa38(int param_1,int param_2)

{
  int iVar1;
  
  if ((param_2 < 0) || (99 < param_2)) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 4) + 0x648 + param_2 * 0x10;
  }
  return iVar1;
}



void fn_002faa10(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002b13a0();
  *puVar1 = &DAT_00821614;
  return;
}



undefined4 fn_002fa7e0(undefined4 param_1,short *param_2,short param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  undefined8 uVar11;
  
  uVar7 = 1;
  if (*param_2 < 1) {
LAB_002fa820:
    bVar10 = false;
  }
  else {
    cVar1 = *(char *)((int)param_2 + 0x67);
    bVar10 = cVar1 != '\0';
    if (!bVar10) {
      cVar1 = (char)param_2[0x3b];
    }
    if ((bVar10 || cVar1 != '\0') || ((char)param_2[0x34] != '\0')) goto LAB_002fa820;
    bVar10 = true;
  }
  iVar2 = fn_00176dc0(param_2);
  iVar8 = (int)param_2[0xe];
  iVar3 = fn_00176e70(param_2);
  iVar9 = (int)param_2[0xf];
  iVar4 = fn_00660ec0();
  uVar11 = fn_00660ea8((int)param_3);
  uVar6 = (uint)((ulonglong)uVar11 >> 0x20);
  uVar5 = (uint)uVar11;
  if ((iVar4 == 1 || iVar4 == 2) && (iVar8 == 0)) {
    uVar7 = 0;
  }
  switch(iVar4) {
  case 1:
    if (iVar8 != iVar2) {
      return uVar7;
    }
    break;
  case 2:
    if (iVar9 != iVar3) {
      return uVar7;
    }
    break;
  case 3:
    if (param_2 != (short *)0x0) {
      uVar6 = (uint)*(byte *)(param_2 + 0x34);
    }
    if (param_2 != (short *)0x0 && uVar6 != 0) {
      uVar7 = 0;
    }
    if (uVar5 == 1) {
      bVar10 = SBORROW4(iVar8,iVar2);
      iVar4 = iVar8 - iVar2;
      if (iVar2 <= iVar8) {
        bVar10 = SBORROW4(iVar9,iVar3);
        iVar4 = iVar9 - iVar3;
      }
      if (iVar4 < 0 != bVar10) {
        return uVar7;
      }
    }
    else if (iVar8 < 1) {
      return uVar7;
    }
    break;
  case 4:
    if (bVar10) {
      uVar5 = (uint)*(byte *)((int)param_2 + 0x65);
    }
    goto joined_r0x002fa968;
  case 5:
    if (bVar10) {
      uVar5 = (uint)*(byte *)((int)param_2 + 99);
    }
joined_r0x002fa968:
    if (bVar10 && uVar5 != 0) {
      return uVar7;
    }
    break;
  case 6:
    if (bVar10) {
      bVar10 = false;
      iVar2 = 1;
      do {
        iVar3 = fn_0068fce0((int)(short)iVar2);
        if ((iVar3 != 0) && (*(char *)((int)param_2 + iVar2 + 0x5b) != '\0')) {
          bVar10 = true;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < 0x61);
      if (bVar10) {
        return uVar7;
      }
    }
    break;
  case 7:
    if (bVar10) {
      cVar1 = (char)param_2[0x31];
      bVar10 = cVar1 == '\0';
      if (bVar10) {
        cVar1 = *(char *)((int)param_2 + 0x61);
      }
      if (!bVar10 || cVar1 != '\0') {
        return uVar7;
      }
    }
    break;
  case 8:
  case 9:
  case 10:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
    if (bVar10) {
      return uVar7;
    }
    break;
  case 0x16:
    if (bVar10) {
      if ((char)param_2[0x1fc] != '\0') {
        return uVar7;
      }
      if (uVar5 == 2) {
        return uVar7;
      }
    }
  }
  return 0;
}



undefined4 fn_002fa7b4(int param_1,short *param_2)

{
  char cVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  undefined8 uVar12;
  
  sVar2 = *(short *)(param_1 + (char)(*(char *)(param_1 + 0x22) * '\n' + -10 +
                                     *(char *)(param_1 + 0x14)) * 2 + 0x44);
  uVar8 = 1;
  if (*param_2 < 1) {
LAB_002fa820:
    bVar11 = false;
  }
  else {
    cVar1 = *(char *)((int)param_2 + 0x67);
    bVar11 = cVar1 != '\0';
    if (!bVar11) {
      cVar1 = (char)param_2[0x3b];
    }
    if ((bVar11 || cVar1 != '\0') || ((char)param_2[0x34] != '\0')) goto LAB_002fa820;
    bVar11 = true;
  }
  iVar3 = fn_00176dc0(param_2);
  iVar9 = (int)param_2[0xe];
  iVar4 = fn_00176e70(param_2);
  iVar10 = (int)param_2[0xf];
  iVar5 = fn_00660ec0();
  uVar12 = fn_00660ea8((int)sVar2);
  uVar7 = (uint)((ulonglong)uVar12 >> 0x20);
  uVar6 = (uint)uVar12;
  if ((iVar5 == 1 || iVar5 == 2) && (iVar9 == 0)) {
    uVar8 = 0;
  }
  switch(iVar5) {
  case 1:
    if (iVar9 != iVar3) {
      return uVar8;
    }
    break;
  case 2:
    if (iVar10 != iVar4) {
      return uVar8;
    }
    break;
  case 3:
    if (param_2 != (short *)0x0) {
      uVar7 = (uint)*(byte *)(param_2 + 0x34);
    }
    if (param_2 != (short *)0x0 && uVar7 != 0) {
      uVar8 = 0;
    }
    if (uVar6 == 1) {
      bVar11 = SBORROW4(iVar9,iVar3);
      iVar5 = iVar9 - iVar3;
      if (iVar3 <= iVar9) {
        bVar11 = SBORROW4(iVar10,iVar4);
        iVar5 = iVar10 - iVar4;
      }
      if (iVar5 < 0 != bVar11) {
        return uVar8;
      }
    }
    else if (iVar9 < 1) {
      return uVar8;
    }
    break;
  case 4:
    if (bVar11) {
      uVar6 = (uint)*(byte *)((int)param_2 + 0x65);
    }
    goto joined_r0x002fa968;
  case 5:
    if (bVar11) {
      uVar6 = (uint)*(byte *)((int)param_2 + 99);
    }
joined_r0x002fa968:
    if (bVar11 && uVar6 != 0) {
      return uVar8;
    }
    break;
  case 6:
    if (bVar11) {
      bVar11 = false;
      iVar3 = 1;
      do {
        iVar4 = fn_0068fce0((int)(short)iVar3);
        if ((iVar4 != 0) && (*(char *)((int)param_2 + iVar3 + 0x5b) != '\0')) {
          bVar11 = true;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 0x61);
      if (bVar11) {
        return uVar8;
      }
    }
    break;
  case 7:
    if (bVar11) {
      cVar1 = (char)param_2[0x31];
      bVar11 = cVar1 == '\0';
      if (bVar11) {
        cVar1 = *(char *)((int)param_2 + 0x61);
      }
      if (!bVar11 || cVar1 != '\0') {
        return uVar8;
      }
    }
    break;
  case 8:
  case 9:
  case 10:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
    if (bVar11) {
      return uVar8;
    }
    break;
  case 0x16:
    if (bVar11) {
      if ((char)param_2[0x1fc] != '\0') {
        return uVar8;
      }
      if (uVar6 == 2) {
        return uVar8;
      }
    }
  }
  return 0;
}


