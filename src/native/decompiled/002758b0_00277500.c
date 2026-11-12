#include "002758b0_00277500.h"



undefined4 fn_00277500(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_90 [128];
  
  uVar1 = 0x1cf;
  if (*(int *)(*(int *)(param_1 + 0x20) + 0x242c) != 0) {
    uVar1 = 0xffffffff;
  }
  fn_00101a50(auStack_90,0x80,L"rom:/data/Mask/%s.bch",param_2);
  fn_002775a0(param_1,uVar1,auStack_90,3,0,0x80,0);
  return uVar1;
}



int fn_002772e4(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_98 [128];
  
  iVar1 = 0xbe;
  do {
    if (*(int *)(*(int *)(param_1 + 0x20) + iVar1 * 0x14) == 0) {
      if (iVar1 == -1) {
        return -1;
      }
      fn_00101a50(auStack_98,0x80,L"rom:/data/Field/Obj/%s.bch",param_2);
      fn_002775a0(param_1,iVar1,auStack_98,0,0,0x80,0);
      fn_00101a50(auStack_98,0x80,L"rom:/data/Field/Obj/%s_F.bin",param_2);
      fn_002775a0(param_1,iVar1 + 1,auStack_98,4,0,0x80,0);
      fn_00101a50(auStack_98,0x80,L"rom:/data/Field/Obj/%s_W.bin",param_2);
      fn_002775a0(param_1,iVar1 + 2,auStack_98,4,0,0x80,0);
      fn_00101a50(auStack_98,0x80,L"rom:/data/Field/Obj/%s_S.bin",param_2);
      fn_002775a0(param_1,iVar1 + 3,auStack_98,4,0,0x80,0);
      return iVar1;
    }
    iVar1 = iVar1 + 4;
  } while (iVar1 < 0x136);
  return -1;
}



undefined4 fn_002770b4(int param_1)

{
  undefined4 uVar1;
  undefined1 auStack_98 [128];
  
  uVar1 = 0x17e;
  if (*(int *)(*(int *)(param_1 + 0x20) + 0x1dd8) == 0) {
    fn_00101a50(auStack_98,0x80,L"rom:/data/Field/Obj/%s.bch",(char *)&DAT_007be888);
    fn_002775a0(param_1,0x17e,auStack_98,0,0,0x80,0);
    fn_00101a50(auStack_98,0x80,L"rom:/data/Field/Obj/%s_F.bin",(char *)&DAT_007be888);
    fn_002775a0(param_1,0x17f,auStack_98,4,0,0x80,0);
    fn_00101a50(auStack_98,0x80,L"rom:/data/Field/Obj/%s_W.bin",(char *)&DAT_007be888);
    fn_002775a0(param_1,0x180,auStack_98,4,0,0x80,0);
    fn_00101a50(auStack_98,0x80,L"rom:/data/Field/Obj/%s_S.bin",(char *)&DAT_007be888);
    fn_002775a0(param_1,0x181,auStack_98,4,0,0x80,0);
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



void fn_00276f60(undefined4 *param_1)

{
  *param_1 = &DAT_0081e0a4;
  if (param_1[0xd] != -1) {
    fn_00159f34(param_1[3]);
    param_1[0xd] = 0xffffffff;
  }
  if (param_1[0xc] != -1) {
    fn_0016a43c(param_1[3]);
    param_1[0xc] = 0xffffffff;
  }
  *(undefined1 *)(param_1 + 0xe) = 0;
  fn_00271508(param_1);
  fn_002700fc(param_1);
  fn_001103e0(param_1[3],param_1 + 7);
  fn_001103e0(param_1[3],param_1 + 6);
  fn_001103e0(param_1[3],param_1 + 0x13);
  fn_00110460(param_1[3],param_1 + 5);
                    /* WARNING: Subroutine does not return */
  fn_001482f4(param_1[3],param_1[4]);
}



int fn_00276d70(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  param_1[1] = param_2;
  *param_1 = &DAT_0081e0a4;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)((int)param_1 + 9) = 0;
  iVar1 = fn_00145b00(0x80,&DAT_00812c8c,param_3,param_4,param_4);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = fn_00110518();
  }
  param_1[3] = uVar2;
  param_1[4] = 0xffffffff;
  param_1[5] = 0xffffffff;
  param_1[6] = 0xffffffff;
  param_1[7] = 0xffffffff;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0xffffffff;
  param_1[0xd] = 0xffffffff;
  *(undefined1 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0xffffffff;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  iVar1 = fn_00101a1c(param_1 + 0x1e,&DAT_0026fffc,0x10,3);
  *(undefined4 *)(iVar1 + 0x30) = 0;
  *(undefined4 *)(iVar1 + 0x34) = 0;
  *(undefined4 *)(iVar1 + 0x38) = 0;
  *(undefined4 *)(iVar1 + 0x3c) = 0;
  *(undefined4 *)(iVar1 + 0x40) = 0;
  *(undefined4 *)(iVar1 + 0x44) = 0;
  *(undefined4 *)(iVar1 + 0x48) = 0;
  *(undefined4 *)(iVar1 + 0x4c) = 0;
  *(undefined4 *)(iVar1 + 0x50) = 0;
  *(undefined4 *)(iVar1 + 0x54) = 0;
  *(undefined4 *)(iVar1 + 0x58) = 0;
  *(undefined4 *)(iVar1 + 0x5c) = 0;
  *(undefined4 *)(iVar1 + 0x60) = 0;
  *(undefined4 *)(iVar1 + 100) = 0;
  *(undefined4 *)(iVar1 + 0x68) = 0;
  *(undefined4 *)(iVar1 + 0x6c) = 0;
  *(undefined4 *)(iVar1 + 0x70) = 0;
  *(undefined4 *)(iVar1 + 0x74) = 0;
  *(undefined4 *)(iVar1 + 0x78) = 0;
  *(undefined4 *)(iVar1 + 0x7c) = 0;
  *(undefined4 *)(iVar1 + 0x80) = 0;
  *(undefined4 *)(iVar1 + 0x84) = 0;
  *(undefined4 *)(iVar1 + 0x88) = 0;
  *(undefined4 *)(iVar1 + 0x8c) = 0;
  *(undefined1 *)(iVar1 + 0x90) = 0;
  fn_0011050c(*(undefined4 *)(iVar1 + -0x6c),*(undefined4 *)(DAT_008977e0 + 0x10),
               *(undefined4 *)(DAT_008977e0 + 0x14));
  uVar2 = fn_001481c8(*(undefined4 *)(iVar1 + -0x6c),DAT_0089210c,&DAT_00276f34,1,1);
  *(undefined4 *)(iVar1 + -0x68) = uVar2;
  uVar2 = DAT_00897800;
  fn_00121838(DAT_00897800,DAT_008987a0,1);
  fn_00121838(uVar2,DAT_008987a4,1);
  fn_00121838(uVar2,DAT_00898784,1);
  fn_00121838(uVar2,DAT_008987a8,1);
  return iVar1 + -0x78;
}



void fn_002765e4(int param_1)

{
  longlong lVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (*(char *)(param_1 + 8) != '\x04') {
    fn_00271e64(param_1,(char *)&DAT_00274dac,1);
    fn_00271e64(param_1,(char *)&DAT_00274db8,1);
    piVar2 = (int *)(**(code **)(**(int **)(param_1 + 4) + 0x4c))();
    lVar1 = (longlong)(piVar2[1] - *piVar2) * -0x6db6db6d +
            ((ulonglong)(uint)(piVar2[1] - *piVar2) << 0x20);
    iVar3 = (int)((ulonglong)lVar1 >> 0x20);
    fn_002715b0(param_1,(iVar3 >> 4) - (iVar3 >> 0x1f),(int)lVar1);
    fn_00271e64(param_1,(char *)&DAT_002700d8,0);
    fn_00271e64(param_1,(char *)&DAT_002700e8,0);
    if (*(int *)(param_1 + 0x18) != -1) {
      fn_00159f34(*(undefined4 *)(param_1 + 0xc));
    }
    uVar4 = fn_0010887c(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),DAT_008921c8
                         ,*(undefined4 *)(param_1 + 0x14));
    *(undefined4 *)(param_1 + 0x18) = uVar4;
    *(undefined1 *)(param_1 + 8) = 2;
    fn_002700fc(param_1);
    fn_00159f34(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x18));
    uVar4 = fn_0010887c(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),DAT_008921d0
                         ,*(undefined4 *)(param_1 + 0x14));
    *(undefined4 *)(param_1 + 0x18) = uVar4;
    fn_00159f34(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x1c));
    *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
    if (*(int *)(param_1 + 0x4c) != -1) {
      fn_00159f34(*(undefined4 *)(param_1 + 0xc));
      *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
    }
    *(undefined1 *)(param_1 + 8) = 4;
  }
  return;
}



void fn_0027615c(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0x28);
  for (piVar1 = *(int **)(param_1 + 0x24); piVar1 != piVar2; piVar1 = piVar1 + 1) {
    if (*(char *)(*piVar1 + 0x10) != '\0') {
      fn_00276c78(param_1,*piVar1,0);
      fn_00178eec(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(*piVar1 + 8),0);
    }
  }
  return;
}



void fn_002758b0(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  char **ppcVar10;
  undefined4 uVar11;
  bool bVar12;
  char *local_38;
  uint local_34;
  int local_30;
  int local_2c;
  int local_28;
  
  iVar2 = fn_00178f9c(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x14));
  iVar2 = (**(code **)(**(int **)(iVar2 + 0x10) + 0x2c))(*(int **)(iVar2 + 0x10),(char *)&DAT_00275bc0,1)
  ;
  iVar3 = fn_00178f9c(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x14));
  local_28 = (**(code **)(**(int **)(iVar3 + 0x10) + 0x2c))(*(int **)(iVar3 + 0x10),(char *)&DAT_00275bd0,1);
  iVar3 = fn_00178f9c(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x14));
  local_2c = (**(code **)(**(int **)(iVar3 + 0x10) + 0x2c))
                       (*(int **)(iVar3 + 0x10),(char *)&DAT_00275bd8,1);
  iVar3 = fn_00178f9c(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x14));
  local_30 = (**(code **)(**(int **)(iVar3 + 0x10) + 0x2c))
                       (*(int **)(iVar3 + 0x10),(char *)&DAT_00275be8,1);
  iVar3 = fn_00178f9c(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x14));
  iVar3 = (**(code **)(**(int **)(iVar3 + 0x10) + 0x2c))
                    (*(int **)(iVar3 + 0x10),(char *)&DAT_00275bfc,1);
  iVar4 = fn_00178f9c(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x14));
  iVar4 = (**(code **)(**(int **)(iVar4 + 0x10) + 0x2c))(*(int **)(iVar4 + 0x10),(char *)&DAT_00275c10,1)
  ;
  iVar5 = fn_00178f9c(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x14));
  iVar5 = (**(code **)(**(int **)(iVar5 + 0x10) + 0x2c))(*(int **)(iVar5 + 0x10),(char *)&DAT_00275c20,1)
  ;
  iVar6 = fn_00178f9c(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x14));
  iVar6 = (**(code **)(**(int **)(iVar6 + 0x10) + 0x2c))
                    (*(int **)(iVar6 + 0x10),(char *)&DAT_00275c30,1);
  iVar7 = fn_00178f9c(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x14));
  iVar7 = (**(code **)(**(int **)(iVar7 + 0x10) + 0x2c))
                    (*(int **)(iVar7 + 0x10),(char *)&DAT_00275c44,1);
  iVar8 = fn_00178f9c(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x14));
  iVar8 = (**(code **)(**(int **)(iVar8 + 0x10) + 0x2c))
                    (*(int **)(iVar8 + 0x10),(char *)&DAT_00275c58,1);
  local_38 = (char *)&DAT_00275c6c;
  iVar9 = fn_00178f9c(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x14));
  iVar9 = (**(code **)(**(int **)(iVar9 + 0x10) + 0x2c))(*(int **)(iVar9 + 0x10),local_38,1);
  if (*(char *)(param_1 + 8) == '\x10') {
    local_34 = *(byte *)(iVar2 + 0x45) + 0x18;
    ppcVar10 = (char **)&local_34;
    if (0xff < local_34) {
      ppcVar10 = &local_38;
    }
    local_38 = (char *)0xff;
    cVar1 = (char)*ppcVar10;
    if (cVar1 == -1) goto LAB_00275bb8;
  }
  else {
    local_38 = (char *)(*(byte *)(iVar2 + 0x45) - 0x18);
    local_34 = 0;
    ppcVar10 = &local_38;
    if ((int)local_38 < 0) {
      ppcVar10 = (char **)&local_34;
    }
    cVar1 = (char)*ppcVar10;
    if (cVar1 == '\0') {
LAB_00275bb8:
      bVar12 = true;
      goto LAB_00275ae4;
    }
  }
  bVar12 = false;
LAB_00275ae4:
  *(char *)(iVar2 + 0x45) = cVar1;
  *(char *)(iVar3 + 0x45) = cVar1;
  *(char *)(iVar5 + 0x45) = cVar1;
  *(char *)(iVar7 + 0x45) = cVar1;
  *(char *)(iVar9 + 0x45) = cVar1;
  cVar1 = -1 - cVar1;
  *(char *)(local_28 + 0x45) = cVar1;
  *(char *)(local_2c + 0x45) = cVar1;
  *(char *)(local_30 + 0x45) = cVar1;
  *(char *)(iVar4 + 0x45) = cVar1;
  *(char *)(iVar6 + 0x45) = cVar1;
  *(char *)(iVar8 + 0x45) = cVar1;
  if (bVar12) {
    if (*(char *)(param_1 + 8) == '\x10') {
      *(undefined1 *)(param_1 + 8) = 2;
      fn_0027600c(param_1,0);
      fn_00274dcc(param_1,0);
      fn_0027583c(param_1,0);
      fn_00271508(param_1);
    }
    else {
      uVar11 = fn_0010887c(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),
                            DAT_008921f0,*(undefined4 *)(param_1 + 0x14));
      *(undefined4 *)(param_1 + 0x18) = uVar11;
      *(undefined1 *)(param_1 + 8) = 0xc;
      fn_0027600c(param_1,1);
      fn_00274dcc(param_1,1);
      fn_0027583c(param_1,1);
    }
    fn_00273898(param_1);
    return;
  }
  return;
}



void fn_0027600c(int param_1,uint param_2)

{
  fn_00271e64(param_1,(char *)&DAT_002760ec,param_2 ^ 1);
  fn_00271e64(param_1,(char *)&DAT_002760f8,1);
  fn_00271e64(param_1,(char *)&DAT_00276104,1);
  fn_00271e64(param_1,(char *)&DAT_00276110,param_2);
  fn_00271e64(param_1,(char *)&DAT_00276118,param_2);
  if (param_2 != 0) {
    (**(code **)(**(int **)(param_1 + 4) + 0x98))();
  }
  fn_00271e64(param_1,(char *)&DAT_00276128);
  fn_00271e64(param_1,(char *)&DAT_002757ec,param_2);
  if (param_2 == 0) {
    if (*(int *)(param_1 + 0x4c) != -1) {
      fn_00159f34(*(undefined4 *)(param_1 + 0xc));
      *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
    }
  }
  else {
    fn_00273898(param_1);
  }
  fn_00270664(param_1,1);
  return;
}


