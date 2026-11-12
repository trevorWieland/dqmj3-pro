#include "006b8b58_006b8e48.h"



void fn_006b8e48(int param_1,undefined1 *param_2,uint param_3,int param_4,int param_5)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  int *piVar11;
  uint uVar12;
  uint local_28 [3];
  
  *(undefined2 *)(param_2 + 2) = 0xffff;
  iVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
  uVar12 = 0;
  iVar10 = iVar2 >> 0x1f;
  iVar2 = iVar2 / 10 + iVar10;
  if (iVar2 == iVar10) {
    return;
  }
  while (*(byte *)(*(int *)(param_1 + 4) + uVar12 * 10) != param_3) {
    uVar12 = uVar12 + 1;
    if ((uint)(iVar2 - iVar10) <= uVar12) {
      return;
    }
  }
  if (uVar12 == 0xffffffff) {
    return;
  }
  iVar10 = *(int *)(param_1 + 4) + uVar12 * 10;
  iVar2 = fn_00163868(100);
  iVar2 = iVar2 - (uint)*(byte *)(iVar10 + 1);
  if (iVar2 < 0) {
    iVar2 = 0;
LAB_006b8f4c:
    switch(iVar2) {
    case 0:
      uVar1 = 0;
      break;
    case 1:
      uVar1 = 3;
      break;
    case 2:
      uVar1 = 2;
      break;
    case 3:
      uVar1 = 1;
      break;
    case 4:
      uVar1 = 4;
      break;
    case 5:
      uVar1 = 5;
      break;
    case 6:
      goto switchD_006b8f50_caseD_6;
    case 7:
switchD_006b8f50_caseD_7:
      uVar1 = 9;
      break;
    default:
      uVar1 = 0xff;
    }
  }
  else {
    iVar2 = iVar2 - (uint)*(byte *)(iVar10 + 2);
    if (iVar2 < 0) {
      iVar2 = 1;
      goto LAB_006b8f4c;
    }
    iVar2 = iVar2 - (uint)*(byte *)(iVar10 + 3);
    if (iVar2 < 0) {
      iVar2 = 2;
      goto LAB_006b8f4c;
    }
    iVar2 = iVar2 - (uint)*(byte *)(iVar10 + 4);
    if (iVar2 < 0) {
      iVar2 = 3;
      goto LAB_006b8f4c;
    }
    iVar2 = iVar2 - (uint)*(byte *)(iVar10 + 5);
    if (iVar2 < 0) {
      iVar2 = 4;
      goto LAB_006b8f4c;
    }
    iVar2 = iVar2 - (uint)*(byte *)(iVar10 + 6);
    if (iVar2 < 0) {
      iVar2 = 5;
      goto LAB_006b8f4c;
    }
    iVar2 = iVar2 - (uint)*(byte *)(iVar10 + 7);
    if (-1 < iVar2) {
      if (-1 < (int)(iVar2 - (uint)*(byte *)(iVar10 + 8))) {
        return;
      }
      iVar2 = 7;
      goto switchD_006b8f50_caseD_7;
    }
    iVar2 = 6;
    if (0 < param_5) {
      iVar2 = 8;
      uVar1 = 7;
      goto LAB_006b8fd8;
    }
switchD_006b8f50_caseD_6:
    uVar1 = 6;
  }
LAB_006b8fd8:
  *param_2 = uVar1;
  param_1 = param_1 + iVar2 * 0xc;
  piVar11 = (int *)(param_1 + 0x10);
  local_28[0] = (*(int *)(param_1 + 0x14) - *piVar11) / 0xc;
  local_28[1] = 0x20;
  puVar7 = local_28;
  if (local_28[0] < 0x20) {
    puVar7 = local_28 + 1;
  }
  uVar12 = *puVar7;
  puVar3 = (undefined4 *)fn_00100fc6(uVar12 * 0xc,0);
  puVar9 = *(undefined4 **)(param_1 + 0x14);
  puVar6 = puVar3;
  for (puVar8 = (undefined4 *)*piVar11; puVar8 != puVar9; puVar8 = puVar8 + 3) {
    if (puVar6 != (undefined4 *)0x0) {
      *puVar6 = *puVar8;
      puVar6[1] = puVar8[1];
      puVar6[2] = puVar8[2];
    }
    puVar6 = puVar6 + 3;
  }
  puVar8 = puVar3 + ((*(int *)(param_1 + 0x14) - *piVar11) / 0xc) * 3;
  iVar4 = fn_00163868(100);
  uVar5 = 0;
  iVar10 = (int)puVar8 - (int)puVar3 >> 0x1f;
  iVar2 = ((int)puVar8 - (int)puVar3) / 0xc + iVar10;
  if (iVar2 != iVar10) {
    do {
      iVar4 = iVar4 - *(char *)((int)puVar3 + param_4 + uVar5 * 0xc + 8);
      if (iVar4 < 0) {
        *(undefined2 *)(param_2 + 2) = *(undefined2 *)(puVar3 + uVar5 * 3);
        *(undefined2 *)(param_2 + 4) = *(undefined2 *)((int)puVar3 + param_4 * 2 + uVar5 * 0xc + 2);
        break;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < (uint)(iVar2 - iVar10));
  }
  puVar6 = puVar3;
  if (puVar8 < puVar3) {
    do {
      puVar6 = puVar6 + 3;
    } while (puVar6 != puVar8);
  }
  fn_002feef8(puVar3,(int)(uVar12 * 0xc) / 0xc,0);
  return;
}



undefined4 fn_006b8e04(char *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  cVar1 = '\0';
  if (*param_1 != '\0') {
    cVar1 = *(char *)(*(int *)(*(int *)(DAT_008977e0 + 0x40) + 4) + 0x20);
  }
  if ((*param_1 == '\0' || cVar1 == '\x01') || (iVar2 = fn_006c89fc(), uVar3 = 1, iVar2 != 1)) {
    uVar3 = 0;
  }
  return uVar3;
}



void fn_006b8d58(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar4 = DAT_00897800;
  uVar1 = *(undefined4 *)(*(int *)(DAT_008977e0 + 0x40) + 4);
  uVar2 = fn_006f75ac(DAT_008977e0);
  uVar3 = fn_006c958c(uVar1);
  fn_006c9504(uVar1,uVar3);
  fn_0015b064();
  fn_0015b0dc();
  uVar4 = fn_0016ba34(uVar4,L"rom:/data/Message/DiscMessage.mes",(char *)&DAT_006b8df0,0);
  fn_0038ff40(uVar2,0,0,1);
  fn_0038fee8(uVar2,uVar4);
  return;
}



undefined1 fn_006b8c88(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = *(int *)(DAT_008977e0 + 0x40);
  iVar2 = fn_006f6e40(iVar4);
  if (iVar2 == 1) {
    if (*(char *)(param_1 + 0x20) == '\0') {
      return 0;
    }
    return 1;
  }
  if (iVar2 == 2) {
    cVar1 = *(char *)(param_1 + 0x20);
joined_r0x006b8d34:
    if (cVar1 == '\x01') {
      return 1;
    }
  }
  else {
    if (iVar2 != 3) {
      return 0;
    }
    uVar3 = fn_006c89fc(*(undefined4 *)(iVar4 + 4));
    switch(uVar3) {
    case 0:
    case 2:
    case 5:
      cVar1 = *(char *)(param_1 + 0x20);
      goto joined_r0x006b8d34;
    case 1:
    case 3:
    case 4:
    case 6:
      iVar5 = *(int *)(*(int *)(iVar4 + 8) + 8);
      iVar2 = fn_006c8a2c(*(undefined4 *)(iVar4 + 4));
      if (iVar2 <= iVar5) {
        return 1;
      }
    }
  }
  return 0;
}



int fn_006b8c0c(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  param_1 = param_1 + 0x264c;
  do {
    if (*(int *)(param_1 + iVar1 * 0x24) == param_2) {
      param_1 = param_1 + iVar1 * 0x24;
LAB_006b8c60:
      if (param_1 == 0) {
        return 0;
      }
      return param_1 + 4;
    }
    if (*(int *)(param_1 + iVar1 * 0x24 + 0x24) == param_2) {
      param_1 = param_1 + iVar1 * 0x24 + 0x24;
      goto LAB_006b8c60;
    }
    iVar1 = iVar1 + 2;
    if (9 < iVar1) {
      return 0;
    }
  } while( true );
}



int fn_006b8bf4(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_0023c2a8();
  iVar2 = 0;
  iVar1 = iVar1 + 0x264c;
  do {
    if (*(int *)(iVar1 + iVar2 * 0x24) == param_2) {
      iVar1 = iVar1 + iVar2 * 0x24;
LAB_006b8c60:
      if (iVar1 == 0) {
        return 0;
      }
      return iVar1 + 4;
    }
    if (*(int *)(iVar1 + iVar2 * 0x24 + 0x24) == param_2) {
      iVar1 = iVar1 + iVar2 * 0x24 + 0x24;
      goto LAB_006b8c60;
    }
    iVar2 = iVar2 + 2;
    if (9 < iVar2) {
      return 0;
    }
  } while( true );
}



int fn_006b8b70(int param_1,int param_2)

{
  int iVar1;
  
  param_1 = param_1 + 0xa0;
  iVar1 = 0;
  do {
    if (*(int *)(param_1 + iVar1 * 0x3c4) == param_2) {
      param_1 = param_1 + iVar1 * 0x3c4;
LAB_006b8bcc:
      if (param_1 == 0) {
        return 0;
      }
      return param_1 + 4;
    }
    if (*(int *)(param_1 + iVar1 * 0x3c4 + 0x3c4) == param_2) {
      param_1 = param_1 + iVar1 * 0x3c4 + 0x3c4;
      goto LAB_006b8bcc;
    }
    iVar1 = iVar1 + 2;
    if (9 < iVar1) {
      return 0;
    }
  } while( true );
}



int fn_006b8b58(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_0023c2a8();
  iVar1 = iVar1 + 0xa0;
  iVar2 = 0;
  do {
    if (*(int *)(iVar1 + iVar2 * 0x3c4) == param_2) {
      iVar1 = iVar1 + iVar2 * 0x3c4;
LAB_006b8bcc:
      if (iVar1 == 0) {
        return 0;
      }
      return iVar1 + 4;
    }
    if (*(int *)(iVar1 + iVar2 * 0x3c4 + 0x3c4) == param_2) {
      iVar1 = iVar1 + iVar2 * 0x3c4 + 0x3c4;
      goto LAB_006b8bcc;
    }
    iVar2 = iVar2 + 2;
    if (9 < iVar2) {
      return 0;
    }
  } while( true );
}


