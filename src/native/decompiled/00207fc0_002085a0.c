#include "00207fc0_002085a0.h"



void fn_002084d4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined1 auStack_78 [104];
  
  fn_001ce9ec();
  fn_00101a50(&local_f8,0x40,L"rom:/data/Script/Battle/Pos/%s.xbb.gz",(char *)&DAT_00208584);
  fn_001028d4(auStack_78,(char *)&DAT_002062cc,(char *)&DAT_00208584);
  *(undefined4 *)(*(int *)(param_1 + 0x88) + 4) = 0;
  iVar1 = fn_00145b00(8,&DAT_00812c8c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = fn_00692eac();
  }
  *(undefined4 *)(*(int *)(param_1 + 0x94) + 4) = uVar2;
  fn_00238fec(&local_f8,auStack_78,*(int *)(param_1 + 0x88) + 4,uVar2);
  local_e8 = 5;
  local_ec = 0;
  local_f8 = 0;
  uStack_f4 = 0;
  uStack_f0 = 0;
  uVar2 = fn_0011c1b4(L"patch:/data/Script/Battle/Script/BattleConst.nut",0);
  *(undefined4 *)(param_1 + 0xe4) = uVar2;
  return;
}



void fn_002083b4(int param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int local_20;
  
  local_20 = param_4;
  fn_00178b7c();
  fn_001c2b7c(1);
  if (param_2 == 0) {
    iVar3 = fn_00174864(DAT_008977e4);
    puVar2 = *(undefined4 **)(param_1 + 0xa0);
    uVar1 = *(undefined4 *)(iVar3 + 0x3c);
    uVar7 = *(undefined4 *)(iVar3 + 0x40);
    *puVar2 = *(undefined4 *)(iVar3 + 0x38);
    puVar2[1] = uVar1;
    puVar2[2] = uVar7;
    iVar8 = *(int *)(param_1 + 0xa0);
    uVar1 = *(undefined4 *)(iVar3 + 0x48);
    uVar7 = *(undefined4 *)(iVar3 + 0x4c);
    *(undefined4 *)(iVar8 + 0xc) = *(undefined4 *)(iVar3 + 0x44);
    *(undefined4 *)(iVar8 + 0x10) = uVar1;
    *(undefined4 *)(iVar8 + 0x14) = uVar7;
  }
  else {
    uVar1 = fn_00190e98();
    puVar2 = (undefined4 *)fn_00190ed0(uVar1,1);
    uVar1 = puVar2[1];
    uVar7 = puVar2[2];
    puVar5 = *(undefined4 **)(param_1 + 0xa0);
    *puVar5 = *puVar2;
    puVar5[1] = uVar1;
    puVar5[2] = uVar7;
    uVar1 = fn_00190e98(DAT_008977e4);
    puVar2 = (undefined4 *)fn_00190ee0(uVar1,1);
    uVar1 = puVar2[1];
    uVar7 = puVar2[2];
    iVar3 = *(int *)(param_1 + 0xa0);
    *(undefined4 *)(iVar3 + 0xc) = *puVar2;
    *(undefined4 *)(iVar3 + 0x10) = uVar1;
    *(undefined4 *)(iVar3 + 0x14) = uVar7;
  }
  iVar3 = 0x10;
  *(undefined4 *)(param_1 + 0xd1) = 0;
  *(undefined4 *)(param_1 + 0xd5) = 0;
  *(undefined4 *)(param_1 + 0xd9) = 0;
  iVar8 = 0;
  *(undefined4 *)(param_1 + 0xdd) = 0;
  do {
    local_20 = iVar3;
    iVar4 = fn_00164a34(param_1,iVar3);
    if (((iVar4 != 0) && (iVar4 = fn_0017484c(DAT_008977e4), iVar4 != 0)) &&
       (iVar4 = fn_00165bb4(iVar4,&local_20), iVar4 != 0)) {
      iVar6 = param_1 + iVar8 * 2;
      *(undefined1 *)(iVar6 + 0xd1) = *(undefined1 *)(iVar4 + 0x35);
      *(undefined1 *)(iVar6 + 0xd2) = *(undefined1 *)(iVar4 + 0x34);
    }
    iVar8 = iVar8 + 1;
    iVar3 = (int)(char)((char)iVar3 + '\x01');
  } while (iVar3 < 0x18);
  return;
}



void fn_0020838c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_c;
  undefined4 uStack_8;
  
  local_c = param_2;
  uStack_8 = param_3;
  iVar1 = fn_00164a34(param_1,param_2,param_3,param_4,param_1);
  if (iVar1 != 0) {
    fn_001c2ab8(&local_c,param_3);
  }
  return;
}



void fn_00208248(undefined4 param_1,int param_2,int param_3,int param_4)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 uVar3;
  char cVar4;
  undefined4 local_20;
  
  if (param_3 == 0) {
    uVar3 = 0x1e;
    if (param_4 != 0) {
      uVar3 = 0x1d;
    }
  }
  else {
    uVar3 = 0x1c;
    if (param_4 != 0) {
      uVar3 = 0x1b;
    }
  }
  *(undefined1 *)(param_2 + 4) = uVar3;
  local_20 = param_4;
  if (param_3 == 0) {
    iVar2 = fn_00174834(DAT_008977e4);
    uVar3 = *(undefined1 *)(iVar2 + 0x185eef);
    iVar2 = fn_00174834(DAT_008977e4);
    uVar1 = *(undefined1 *)(iVar2 + 0x185ef0);
  }
  else {
    iVar2 = fn_00174834(DAT_008977e4);
    uVar3 = *(undefined1 *)(iVar2 + 0x185eed);
    iVar2 = fn_00174834(DAT_008977e4);
    uVar1 = *(undefined1 *)(iVar2 + 0x185eee);
  }
  if (param_4 != 0) {
    local_20 = (local_20 & ~((unsigned int)0xffff << 0)) | ((unsigned int)(CONCAT11(uVar1,uVar3)) & 0xffff);
    goto LAB_00208320;
  }
  if (param_3 == 0) {
    iVar2 = fn_00174834(DAT_008977e4);
    cVar4 = *(char *)(iVar2 + 0x185eef);
    if (*(char *)(iVar2 + 0x185ef0) < cVar4) goto LAB_00208354;
  }
  else {
    iVar2 = fn_00174834(DAT_008977e4);
    cVar4 = *(char *)(iVar2 + 0x185eed);
    if (*(char *)(iVar2 + 0x185eee) < cVar4) {
LAB_00208354:
      cVar4 = cVar4 + -1;
    }
  }
  local_20 = CONCAT31(((unsigned int)(local_20) >> 8) & 0xffffff,cVar4);
LAB_00208320:
  fn_002d658c(param_2,&local_20);
  return;
}



void fn_002081e8(int param_1,byte *param_2)

{
  int iVar1;
  int iVar2;
  
  *(undefined1 *)(param_1 + 0xf8) = 1;
  *(undefined1 *)(param_1 + 0xf9) = 1;
  iVar2 = 0;
  if (*param_2 != 0) {
    do {
      iVar1 = fn_00207fc0(param_1,param_2,iVar2);
      iVar2 = iVar2 + iVar1;
    } while (iVar2 < (int)(uint)*param_2);
  }
  *(undefined1 *)(param_1 + 0xd0) = 0;
  return;
}



int fn_00207fc0(undefined4 param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_78 [96];
  
  iVar2 = fn_00208778();
  if (iVar2 < 1) {
    iVar2 = fn_00207438(param_1,param_2,param_3);
    if (iVar2 < 1) {
      iVar2 = fn_002072dc(param_1,param_2,param_3);
      if (iVar2 < 1) {
        iVar2 = fn_00208e24(param_1,param_2,param_3);
        if ((iVar2 < 1) && (iVar2 = fn_006ae728(param_1,param_2,param_3), iVar2 < 1)) {
          iVar2 = param_2 + param_3 * 0x266c;
          cVar1 = *(char *)(iVar2 + 4);
          if (cVar1 == '\x0f') {
            fn_002d6598(auStack_78,*(undefined1 *)(iVar2 + 5));
            fn_002d6360(auStack_78,iVar2 + 8);
            fn_00209634(param_1,auStack_78);
            return 1;
          }
          if (cVar1 == '\x11') {
            fn_002d6598(auStack_78,*(undefined1 *)(iVar2 + 5));
            fn_002d63c4(auStack_78,iVar2 + 8);
            fn_00209634(param_1,auStack_78);
            return 1;
          }
          if (cVar1 == '\x14') {
            fn_002d6598(auStack_78,*(undefined1 *)(iVar2 + 5));
            fn_002d6400(auStack_78,iVar2 + 8);
            fn_00209634(param_1,auStack_78);
          }
          else {
            fn_002d6598(auStack_78,*(undefined1 *)(iVar2 + 5));
            fn_002d6388(auStack_78,iVar2 + 4);
            fn_00209634(param_1,auStack_78);
            fn_002062d8(param_1,param_2,param_3,param_3);
          }
          return 1;
        }
        fn_002062d8(param_1,param_2,param_3,param_3 + iVar2 + -1);
      }
      else {
        fn_002085a0(param_1,param_2,param_3,param_3 + iVar2 + -1);
      }
      return iVar2;
    }
    fn_002062d8(param_1,param_2,param_3,param_3 + iVar2 + -1);
  }
  return iVar2;
}



undefined1 * fn_002085a0(undefined1 *param_1,int param_2,int param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_d0 [96];
  int local_70 [22];
  
  if (param_4 < param_3) {
    return param_1;
  }
  do {
    iVar2 = param_2 + param_3 * 0x266c;
    switch(*(undefined1 *)(iVar2 + 4)) {
    default:
      goto switchD_002085c8_caseD_0;
    case 1:
    case 2:
    case 3:
    case 0xc:
    case 0x10:
    case 0x15:
      iVar6 = (int)*(char *)(iVar2 + 0x1d);
      iVar3 = iVar2 + 0xf70;
      break;
    case 5:
      iVar6 = (int)*(char *)(iVar2 + 8);
      iVar3 = iVar2 + 0xc;
      break;
    case 6:
      iVar6 = *(int *)(iVar2 + 0xc);
      iVar3 = iVar2 + 0x10;
      break;
    case 8:
      iVar3 = iVar2 + 0xd0;
      iVar6 = 1;
      iVar4 = 0;
      goto LAB_00208668;
    }
    iVar4 = 0;
    if (0 < iVar6) {
LAB_00208668:
      do {
        bVar1 = *(byte *)(iVar3 + iVar4 * 0xc4);
        if (((bVar1 < 0x11) && (bVar1 == 3)) &&
           (iVar5 = (int)*(short *)(iVar3 + iVar4 * 0xc4 + 2), iVar5 == 0x1f5 || iVar5 == 0x1f6)) {
          fn_002d6598(auStack_d0,*(undefined1 *)(iVar2 + 5));
          local_70[1] = 1;
          local_70[2] = iVar3 + iVar4 * 0xc4;
          local_70[0] = iVar5;
          fn_002d64f4(auStack_d0,local_70);
          fn_00209634(param_1,auStack_d0);
          return auStack_d0;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar6);
    }
switchD_002085c8_caseD_0:
    param_3 = param_3 + 1;
    if (param_4 < param_3) {
      return (undefined1 *)(iVar2 + 4);
    }
  } while( true );
}


