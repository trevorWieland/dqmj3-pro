#include "002d40b4_002d46cc.h"



void fn_002d46cc(int param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  char cVar8;
  int iVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  char local_44 [4];
  undefined1 local_40 [8];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  iVar7 = fn_00182988(DAT_008977e4);
  if (*(char *)(iVar7 + 0x39f) == '\0') {
    fn_002d4480(param_1,param_1 + 0x58,1);
    return;
  }
  iVar7 = fn_006a7b78(DAT_008977e4);
  iVar5 = fn_00182988(DAT_008977e4);
  if (**(int **)(iVar5 + 0x398) == (*(int **)(iVar5 + 0x398))[1]) {
    *(undefined1 *)(iVar7 + 0x79) = 1;
  }
  else {
    uVar6 = fn_00182988(DAT_008977e4);
    fn_006b4c38(&local_2c,uVar6,*(undefined4 *)(param_1 + 0x9c));
    local_38 = local_2c;
    local_34 = uStack_28;
    uVar6 = local_34;
    local_30 = uStack_24;
    uVar4 = local_30;
    *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + 1;
    local_30 = (local_30 & ~((unsigned int)0xff << 0)) | ((unsigned int)((char)uStack_24) & 0xff);
    if ((char)local_30 != '\0') {
      *(undefined1 *)(iVar7 + 0x36) = 1;
    }
    local_34 = (local_34 & ~((unsigned int)0xff << 0)) | ((unsigned int)((char)uStack_28) & 0xff);
    bVar12 = (char)local_34 != '\0';
    local_34 = uVar6;
    local_30 = uVar4;
    if (bVar12) {
      local_40[0] = 0x20;
      uVar6 = fn_0017484c(DAT_008977e4);
      iVar5 = fn_00175dcc(uVar6,local_40);
      if (iVar5 != 0) {
        iVar5 = fn_001748ec();
        *(undefined1 *)(iVar7 + 0x37) = 1;
        cVar8 = ((unsigned int)(local_34) >> 16) & 0xff;
        if (((unsigned int)(local_34) >> 16) & 0xff == iVar5 || ((unsigned int)(local_34) >> 16) & 0xff == 0) {
          cVar8 = '\0';
        }
        *(undefined1 *)(iVar7 + 0x38) = 0x20;
        *(char *)(iVar7 + 0x39) = cVar8;
      }
    }
    if (((unsigned int)(local_34) >> 8) & 0xff != '\0') {
      local_40[0] = 0x22;
      uVar6 = fn_0017484c(DAT_008977e4);
      iVar5 = fn_00175d88(uVar6,local_40);
      if (iVar5 != 0) {
        iVar5 = fn_001748ec();
        *(undefined1 *)(iVar7 + 0x4b) = 1;
        cVar8 = ((unsigned int)(local_34) >> 24) & 0xff;
        if (((unsigned int)(local_34) >> 24) & 0xff == iVar5 || ((unsigned int)(local_34) >> 24) & 0xff == 0) {
          cVar8 = '\0';
        }
        *(undefined1 *)(iVar7 + 0x4c) = 0x22;
        *(char *)(iVar7 + 0x4d) = cVar8;
      }
    }
    local_44[0] = '\x10';
    do {
      fn_003531e0(*(undefined4 *)(param_1 + 0x54),local_44,
                   local_40[(char)(local_44[0] + -0x10) + 8]);
      local_44[0] = local_44[0] + '\x01';
    } while (local_44[0] < '\x14');
    *(undefined1 *)(iVar7 + 0x79) = ((unsigned int)(local_30) >> 24) & 0xff;
    if (((unsigned int)(local_30) >> 8) & 0xff != '\0') {
      iVar5 = (int)*(char *)(iVar7 + 0x39);
      if (iVar5 == 0) {
        local_2c = CONCAT31(((unsigned int)(local_2c) >> 8) & 0xffffff,0x20);
        uVar6 = fn_0017484c(DAT_008977e4);
        fn_00175dcc(uVar6,&local_2c);
        iVar5 = fn_001748ec();
      }
      iVar9 = (int)*(char *)(iVar7 + 0x4d);
      if (iVar9 == 0) {
        local_2c = CONCAT31(((unsigned int)(local_2c) >> 8) & 0xffffff,0x22);
        uVar6 = fn_0017484c(DAT_008977e4);
        fn_00175d88(uVar6,&local_2c);
        iVar9 = fn_001748ec();
      }
      bVar12 = iVar5 == iVar9;
      iVar3 = iVar5 - iVar9;
      if (!bVar12) {
        iVar3 = iVar5;
      }
      bVar13 = bVar12 || iVar5 == 0;
      bVar10 = iVar3 < 0;
      bVar11 = bVar12 && SBORROW4(iVar5,iVar9);
      bVar1 = bVar10 != bVar11;
      bVar2 = bVar13 || bVar1;
      if ((!bVar12 && iVar5 != 0) && !bVar1) {
        bVar10 = iVar9 < 0;
        bVar13 = iVar9 == 0;
      }
      if (!bVar13 && bVar10 == (bVar2 && bVar11)) {
        *(char *)(iVar7 + 0x72) = ((unsigned int)(local_30) >> 8) & 0xff;
        *(char *)(iVar7 + 0x70) = (char)iVar5;
        *(char *)(iVar7 + 0x71) = (char)iVar9;
      }
    }
    *(undefined1 *)(iVar7 + 0x76) = ((unsigned int)(local_30) >> 16) & 0xff;
  }
  return;
}



void fn_002d4480(undefined4 param_1,char *param_2,uint param_3,undefined4 param_4)

{
  short sVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  short *psVar7;
  char cVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  char cVar12;
  undefined4 local_28;
  
  local_28 = param_4;
  iVar4 = fn_006a7b78(DAT_008977e4);
  if (0 < *(short *)(param_2 + 0x16)) {
    uVar10 = *(undefined4 *)(param_2 + 0x16);
    if (param_3 == 0) {
      iVar5 = 0x21;
    }
    else {
      iVar5 = 0x20;
    }
    iVar9 = iVar4 + iVar5 * 10;
    sVar1 = (short)uVar10;
    *(short *)(iVar9 + -0x110) = sVar1;
    *(char *)(iVar9 + -0x10d) = (char)((uint)uVar10 >> 0x10);
    *(char *)(iVar9 + -0x10e) = (char)iVar5;
    uVar11 = *(undefined4 *)(DAT_00897804 + 0x14);
    uVar10 = fn_00660f58((int)sVar1);
    fn_002297bc(uVar11,uVar10,1);
  }
  if (0 < *(short *)(param_2 + 0x12)) {
    *(undefined1 *)(iVar4 + 0x34) = 1;
    *(char *)(iVar4 + 0x35) = param_2[0x14];
  }
  if (*param_2 != '\0') {
    if (param_3 == 0) {
      iVar5 = 0x21;
    }
    else {
      iVar5 = 0x20;
    }
    local_28 = CONCAT31(((unsigned int)(local_28) >> 8) & 0xffffff,(char)iVar5);
    uVar10 = fn_0017484c(DAT_008977e4);
    iVar9 = fn_00175dcc(uVar10,&local_28);
    if (iVar9 != 0) {
      iVar9 = fn_001748ec();
      iVar6 = iVar4 + iVar5 * 10;
      *(undefined1 *)(iVar6 + -0x109) = 1;
      cVar8 = *param_2;
      *(char *)(iVar6 + -0x108) = (char)iVar5;
      if (cVar8 == iVar9) {
        cVar8 = '\0';
      }
      *(char *)(iVar6 + -0x107) = cVar8;
    }
  }
  if (param_2[1] != '\0') {
    if (param_3 == 0) {
      iVar5 = 0x23;
    }
    else {
      iVar5 = 0x22;
    }
    local_28 = CONCAT31(((unsigned int)(local_28) >> 8) & 0xffffff,(char)iVar5);
    uVar10 = fn_0017484c(DAT_008977e4);
    iVar9 = fn_00175d88(uVar10,&local_28);
    if (iVar9 != 0) {
      iVar9 = fn_001748ec();
      iVar6 = iVar4 + iVar5 * 10;
      *(undefined1 *)(iVar6 + -0x109) = 1;
      cVar8 = param_2[1];
      *(char *)(iVar6 + -0x108) = (char)iVar5;
      if (cVar8 == iVar9) {
        cVar8 = '\0';
      }
      *(char *)(iVar6 + -0x107) = cVar8;
    }
  }
  if (0 < *(short *)(param_2 + 0x12)) {
    return;
  }
  if (param_3 != 0) {
    cVar8 = '\x10';
    cVar12 = '\x14';
    goto LAB_002d4618;
  }
  cVar8 = '\x14';
  cVar12 = '\x18';
  do {
    cVar3 = cVar8 + -0x14;
    while( true ) {
      psVar7 = (short *)fn_001d4e7c(param_2,(int)cVar3);
      if (0 < *psVar7) {
        iVar5 = iVar4 + cVar8 * 6;
        *(char *)(iVar5 + -0x5d) = cVar8;
        *(short *)(iVar5 + -0x60) = *psVar7;
        *(char *)(iVar5 + -0x5c) = (char)psVar7[1];
      }
      if (-1 < *(char *)((int)psVar7 + 3)) {
        uVar2 = *(undefined1 *)((int)psVar7 + 3);
        iVar5 = fn_00182988(DAT_008977e4);
        if ((param_3 & ~(int)*(char *)(iVar5 + 0x3a3)) == 0) {
          iVar5 = fn_00174828(DAT_008977e4);
          iVar5 = iVar5 + cVar8 * 0x418;
          if (iVar5 != 0x4080) {
            *(undefined1 *)(iVar5 + -0x4026) = uVar2;
          }
        }
      }
      cVar8 = cVar8 + '\x01';
      if (cVar12 <= cVar8) {
        return;
      }
LAB_002d4618:
      if (param_3 == 0) break;
      cVar3 = cVar8 + -0x10;
    }
  } while( true );
}



undefined4 * fn_002d40c8(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  switch(param_2) {
  case 0:
    puVar3 = (undefined4 *)fn_00145b00(8,&DAT_00812c8c);
    puVar2 = (undefined4 *)0x0;
    if (puVar3 != (undefined4 *)0x0) {
      puVar3[1] = *param_1;
      *puVar3 = &DAT_0081d42c;
      return puVar3;
    }
    break;
  case 1:
    iVar1 = fn_00145b00(0x50,&DAT_00812c8c);
    puVar2 = (undefined4 *)0x0;
    if (iVar1 != 0) {
      puVar2 = (undefined4 *)fn_002bc964(iVar1,*param_1);
    }
    *(undefined4 **)(*param_1 + 0x90) = puVar2;
    break;
  case 2:
    *(undefined4 *)(*param_1 + 0x90) = 0;
    puVar3 = (undefined4 *)fn_00145b00(0x20,&DAT_00812c8c);
    puVar2 = (undefined4 *)0x0;
    if (puVar3 != (undefined4 *)0x0) {
      puVar3[1] = *param_1;
      *puVar3 = &DAT_0081e1e0;
      puVar3[2] = puVar3;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      puVar3[6] = 0;
      puVar3[7] = 0;
      return puVar3;
    }
    break;
  case 3:
    puVar3 = (undefined4 *)fn_00145b00(0x10,&DAT_00812c8c);
    puVar2 = (undefined4 *)0x0;
    if (puVar3 != (undefined4 *)0x0) {
      puVar3[1] = *param_1;
      *puVar3 = &DAT_0081d874;
      puVar3[2] = puVar3;
      puVar3[3] = 0;
      return puVar3;
    }
    break;
  case 4:
    puVar3 = (undefined4 *)fn_00145b00(0x14,&DAT_00812c8c);
    puVar2 = (undefined4 *)0x0;
    if (puVar3 != (undefined4 *)0x0) {
      puVar3[1] = *param_1;
      *puVar3 = &DAT_0081d850;
      puVar3[2] = puVar3;
      puVar3[3] = 0;
      puVar3[4] = 0;
      return puVar3;
    }
    break;
  case 5:
    puVar3 = (undefined4 *)fn_00145b00(0x10,&DAT_00812c8c);
    puVar2 = (undefined4 *)0x0;
    if (puVar3 != (undefined4 *)0x0) {
      puVar3[1] = *param_1;
      *puVar3 = &DAT_008276e8;
      puVar3[2] = 0;
      *(undefined1 *)(puVar3 + 3) = 0;
      *(undefined1 *)((int)puVar3 + 0xd) = 0;
      fn_0036ab44();
      return puVar3;
    }
    break;
  case 6:
    puVar3 = (undefined4 *)fn_00145b00(8,&DAT_00812c8c);
    puVar2 = (undefined4 *)0x0;
    if (puVar3 != (undefined4 *)0x0) {
      puVar3[1] = *param_1;
      *puVar3 = &DAT_0081cac8;
      return puVar3;
    }
    break;
  default:
    return (undefined4 *)0x0;
  }
  return puVar2;
}



void fn_002d40b4(int param_1)

{
  if (*(int *)(param_1 + 0x90) == 0) {
    return;
  }
  fn_002b5570();
  return;
}


