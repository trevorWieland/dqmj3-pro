#include "0011a6a8_00120ca8.h"



void fn_00120ca8(undefined4 *param_1)

{
  *param_1 = &DAT_0081d0cc;
  return;
}



void fn_00120c70(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 2;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 2;
  param_1[6] = 1;
  param_1[7] = 1;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}



void fn_00120be4(undefined4 *param_1)

{
  *param_1 = &DAT_00851824;
  param_1[1] = &DAT_00859220;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 10;
  return;
}



void fn_0011c0a8(undefined4 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0011c0c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_0089a7a0 + 0xc))(DAT_0089a7a0,param_1,0);
  return;
}



void fn_0011b76c(void)

{
  int iVar1;
  
  iVar1 = fn_001735cc();
  *(undefined **)(iVar1 + 0x44) = &DAT_008c3dd8;
  *(undefined4 *)(iVar1 + 0x30) = 0x7f7fffff;
  *(undefined4 *)(iVar1 + 0x3c) = 4;
  *(undefined4 *)(iVar1 + 0x40) = 0;
  *(undefined4 *)(iVar1 + 0x34) = 0;
  *(undefined4 *)(iVar1 + 0x38) = 0;
  return;
}



undefined4 fn_0011a6a8(code *param_1,code *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined1 *puVar7;
  int iVar8;
  code *in_r12;
  bool bVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int local_30 [3];
  
  local_30[2] = 1;
  if ((param_1 == (code *)0x0 || param_2 == (code *)0x0) || (DAT_008e3078 != '\0')) {
    return 0;
  }
  fn_00301f50(&DAT_008e3068,0x180);
  DAT_008e3068 = 0xf0;
  DAT_008e306c = 0xf0;
  DAT_008e3070 = 400;
  DAT_008e3074 = 0x140;
  DAT_0089a52c = 1;
  DAT_0089a528 = 1;
  DAT_008e31cc = 0x700;
  DAT_0089a520 = param_1;
  DAT_0089a524 = param_2;
  DAT_0089a530 = (*param_1)(0x10000,0x100,0,0x30fc);
  if (DAT_0089a530 != 0) {
    local_30[0] = DAT_0089a530 + 0x30ec;
    iVar3 = DAT_0089a530 + 0x868;
    iVar4 = DAT_0089a530 + 0x878;
    iVar6 = DAT_0089a530 + 0x10cc;
    iVar8 = DAT_0089a530 + 0x2840;
    iVar2 = fn_0012ab74();
    if ((((-1 < iVar2) && (iVar2 = fn_0012a2e8(iVar3), -1 < iVar2)) &&
        (iVar2 = fn_0012b1c0(iVar4), -1 < iVar2)) &&
       ((iVar2 = fn_0012a32c(iVar6), -1 < iVar2 && (iVar2 = fn_0012b00c(iVar8), -1 < iVar2)))) {
      fn_00146578();
      fn_0012b2f0(local_30[2]);
      puVar1 = DAT_008e3104;
      if (DAT_008e3104 != (undefined4 *)0x0) {
        if (DAT_008e3104[1] != 0) {
          in_r12 = DAT_0089a524;
        }
        if (DAT_008e3104[1] != 0 && in_r12 != (code *)0x0) {
          (*in_r12)(0x10000,0x105,*DAT_008e3104);
        }
        in_r12 = DAT_0089a520;
        if (DAT_0089a520 == (code *)0x0) {
          iVar2 = 0;
        }
        else {
          iVar2 = (*DAT_0089a520)(0x10000,0x105,*puVar1,0x101c0);
        }
        puVar1[3] = 0;
        puVar1[8] = 0;
        puVar1[4] = 0;
        puVar1[10] = 0;
        puVar1[9] = 0;
        puVar1[0xd] = 0;
        puVar1[0xc] = 0;
        puVar1[1] = iVar2;
        puVar1[2] = 0x10000;
        puVar1[6] = iVar2 + 0x10000;
        puVar1[7] = 0x10;
        fn_00301f50(iVar2 + 0x10000,0x1c0);
        DAT_008bf790 = puVar1[1];
        DAT_008bf794 = puVar1[2] + DAT_008bf790;
      }
      if (DAT_008e3104 != (undefined4 *)0x0) {
        DAT_008e3104[0xb] = 0x300;
      }
      iVar2 = fn_00146578();
      if ((iVar2 == 0) && (iVar2 = fn_0012b234(local_30[0]), -1 < iVar2)) {
        uVar5 = 2;
        DAT_0089a534 = DAT_008bf790 - DAT_008e3104[1];
        DAT_008e3104[3] = DAT_0089a534;
        fn_0013dc94();
        iVar2 = fn_0013defc();
        DAT_008e307c = fn_0013df60();
        fn_0013df14(&LAB_0012bfe4,0);
        fn_0013df14(&LAB_0012bfe8,1);
        fn_0013df14(fn_0012bf54,2);
        fn_0013df14(fn_0012bf98,3);
        fn_0013df14(&LAB_0012bfe0,4);
        fn_0013df14(&LAB_0012bf14,5);
        fn_0013df14(&DAT_00146d28,6);
        if (iVar2 == 0) {
          fn_001467fc();
        }
        else {
          local_30[0] = 0;
          fn_0013dd9c(0x401000,local_30,4);
          local_30[0] = 0x12345678;
          fn_0013dd9c(0x401080,local_30,4);
          local_30[0] = -0x10;
          fn_0013dd9c(0x4010c0,local_30,4);
          local_30[0] = 1;
          fn_0013dd9c(0x4010d0,local_30,4);
          local_30[0] = 0x1c2;
          fn_0013dd9c(&DAT_00400400,local_30,4);
          local_30[0] = 0xd1;
          fn_0013dd9c(&DAT_00400404,local_30,4);
          local_30[0] = 0x1c1;
          fn_0013dd9c(&DAT_00400408,local_30,4);
          local_30[0] = 0x1c1;
          fn_0013dd9c(&DAT_0040040c,local_30,4);
          local_30[0] = 0;
          fn_0013dd9c(&DAT_00400410,local_30,4);
          local_30[0] = 0xcf;
          fn_0013dd9c(&DAT_00400414,local_30,4);
          local_30[0] = 0xd1;
          fn_0013dd9c(&DAT_00400418,local_30,4);
          local_30[0] = 0x1c501c1;
          fn_0013dd9c(&DAT_0040041c,local_30,4);
          local_30[0] = 0x10000;
          fn_0013dd9c(&DAT_00400420,local_30,4);
          local_30[0] = 0x19d;
          fn_0013dd9c(&DAT_00400424,local_30,4);
          local_30[0] = 2;
          fn_0013dd9c(&DAT_00400428,local_30,4);
          local_30[0] = 0x192;
          fn_0013dd9c(&DAT_0040042c,local_30,4);
          local_30[0] = 0x192;
          fn_0013dd9c(&DAT_00400430,local_30,4);
          local_30[0] = 0x192;
          fn_0013dd9c(&DAT_00400434,local_30,4);
          local_30[0] = 1;
          fn_0013dd9c(&DAT_00400438,local_30,4);
          local_30[0] = 2;
          fn_0013dd9c(&DAT_0040043c,local_30,4);
          local_30[0] = 0x1960192;
          fn_0013dd9c((char *)&DAT_00400440,local_30,4);
          local_30[0] = 0;
          fn_0013dd9c((char *)&DAT_00400444,local_30,4);
          local_30[0] = 0;
          fn_0013dd9c((char *)&DAT_00400448,local_30,4);
          local_30[0] = 0x19000f0;
          fn_0013dd9c("e",local_30,4);
          local_30[0] = 0x1c100d1;
          fn_0013dd9c(&DAT_00400460,local_30,4);
          local_30[0] = 0x1920002;
          fn_0013dd9c(&DAT_00400464,local_30,4);
          local_30[0] = 0x80340;
          fn_0013dd9c((char *)&DAT_00400470,local_30,4);
          local_30[0] = 0;
          fn_0013dd9c((char *)&DAT_0040049c,local_30,4);
          local_30[0] = 0x1c2;
          fn_0013dd9c(&DAT_00400500,local_30,4);
          local_30[0] = 0xd1;
          fn_0013dd9c(&DAT_00400504,local_30,4);
          local_30[0] = 0x1c1;
          fn_0013dd9c(&DAT_00400508,local_30,4);
          local_30[0] = 0x1c1;
          fn_0013dd9c(&DAT_0040050c,local_30,4);
          local_30[0] = 0xcd;
          fn_0013dd9c(&DAT_00400510,local_30,4);
          local_30[0] = 0xcf;
          fn_0013dd9c(&DAT_00400514,local_30,4);
          local_30[0] = 0xd1;
          fn_0013dd9c(&DAT_00400518,local_30,4);
          local_30[0] = 0x1c501c1;
          fn_0013dd9c(&DAT_0040051c,local_30,4);
          local_30[0] = 0x10000;
          fn_0013dd9c(&DAT_00400520,local_30,4);
          local_30[0] = 0x19d;
          fn_0013dd9c(&DAT_00400524,local_30,4);
          local_30[0] = 0x52;
          fn_0013dd9c(&DAT_00400528,local_30,4);
          local_30[0] = 0x192;
          fn_0013dd9c(&DAT_0040052c,local_30,4);
          local_30[0] = 0x192;
          fn_0013dd9c(&DAT_00400530,local_30,4);
          local_30[0] = 0x4f;
          fn_0013dd9c(&DAT_00400534,local_30,4);
          local_30[0] = 0x50;
          fn_0013dd9c(&DAT_00400538,local_30,4);
          local_30[0] = 0x52;
          fn_0013dd9c(&DAT_0040053c,local_30,4);
          local_30[0] = 0x1980194;
          fn_0013dd9c(&DAT_00400540,local_30,4);
          local_30[0] = 0;
          fn_0013dd9c(&DAT_00400544,local_30,4);
          local_30[0] = 0x11;
          fn_0013dd9c(&DAT_00400548,local_30,4);
          local_30[0] = 0x14000f0;
          fn_0013dd9c(&DAT_0040055c,local_30,4);
          local_30[0] = 0x1c100d1;
          fn_0013dd9c(&DAT_00400560,local_30,4);
          local_30[0] = 0x1920052;
          fn_0013dd9c(&DAT_00400564,local_30,4);
          local_30[0] = 0x80300;
          fn_0013dd9c(&DAT_00400570,local_30,4);
          local_30[0] = 0;
          fn_0013dd9c(&LAB_0040059c,local_30,4);
          local_30[0] = 0x18300000;
          fn_0013dd9c((char *)&DAT_00400468,local_30,4);
          local_30[0] = 0x18300000;
          fn_0013dd9c((char *)&DAT_0040046c,local_30,4);
          local_30[0] = 0x18300000;
          fn_0013dd9c(&DAT_00400568,local_30,4);
          local_30[0] = 0x18300000;
          fn_0013dd9c(&DAT_0040056c,local_30,4);
          local_30[0] = 0x18300000;
          fn_0013dd9c((char *)&DAT_00400494,local_30,4);
          local_30[0] = 0x18300000;
          fn_0013dd9c((char *)&DAT_00400498,local_30,4);
          local_30[0] = 1;
          fn_0013dd9c((char *)&DAT_00400478,local_30,4);
          local_30[0] = 1;
          fn_0013dd9c(&DAT_00400578,local_30,4);
          local_30[1] = 0xff00;
          local_30[0] = 0;
          fn_0013de8c(&PTR_caseD_4_00400c18,local_30,local_30 + 1,4);
          local_30[0] = 0x70100;
          fn_0013dd9c(&DAT_00400004,local_30);
          local_30[0] = 0;
          local_30[1] = 0xff;
          fn_0013de8c(&DAT_0040001c,local_30,local_30 + 1,4);
          local_30[0] = 0;
          local_30[1] = 0xff;
          fn_0013de8c(&DAT_0040002c,local_30,local_30 + 1,4);
          local_30[0] = 0x22221200;
          fn_0013dd9c(&DAT_00400050,local_30,4);
          local_30[0] = 0xff2;
          local_30[1] = 0xffff;
          fn_0013de8c(&DAT_00400054,local_30,local_30 + 1,4);
          local_30[0] = 0x10501;
          fn_0013dd9c((char *)&DAT_00400474,local_30,4);
          local_30[0] = 0x10501;
          fn_0013dd9c(&DAT_00400574,local_30,4);
          fn_001467fc();
          puVar1 = DAT_008e3104;
          puVar7 = (undefined1 *)(DAT_008e3104[6] + DAT_008e3104[8] * 0x1c);
          *puVar7 = 3;
          *(uint *)(puVar7 + 0x14) = *(uint *)(puVar7 + 0x14) & 0xfffffff8 | 4;
          iVar3 = fn_00166a9c(0x30000);
          *(int *)(puVar7 + 4) = iVar3 + -0x7fff;
          if ((DAT_0089a520 == (code *)0x0) ||
             (in_r12 = DAT_0089a520, uVar5 = (*DAT_0089a520)(0x10000,0x100,0,0x8010), uVar5 == 0))
          goto LAB_0011b334;
          *(uint *)(puVar7 + 8) = uVar5;
          if ((uVar5 & 0xf) != 0) {
            *(uint *)(puVar7 + 8) = uVar5 + (0x10 - (uVar5 & 0xf));
          }
          *(undefined2 *)(puVar7 + 0xc) = 0x80;
          *(undefined2 *)(puVar7 + 0xe) = 0x80;
          *(undefined2 *)(puVar7 + 0x10) = 0x80;
          *(undefined2 *)(puVar7 + 0x12) = 0x80;
          *(uint *)(puVar7 + 0x14) = *(uint *)(puVar7 + 0x14) & 0xfffff007 | 0x20;
          puVar1[8] = puVar1[8] + 1;
        }
        if ((DAT_008e3104 != (undefined4 *)0x0) && (DAT_008e3079 == '\0')) {
          DAT_008e3108 = DAT_008e3104;
          DAT_008e307a = 1;
          if (((int)DAT_008e3104[10] < (int)DAT_008e3104[8]) &&
             (DAT_008e3079 = '\x01', DAT_008e3104[0xb] == 0x300)) {
            fn_00150284();
            fn_0016720c();
            fn_00150294();
          }
        }
        uVar10 = 0;
        if (DAT_008e31e4 != 0 || DAT_008e31e0 != 0) {
          uVar10 = fn_00158f10();
        }
        do {
          if (DAT_008e3079 == '\0') {
LAB_0011b294:
            if (iVar2 != 0) {
              in_r12 = DAT_0089a524;
            }
            if (iVar2 != 0 && in_r12 != (code *)0x0) {
              (*in_r12)(0x10000,0x100,0,uVar5);
            }
            puVar1 = DAT_008e3108;
            if (DAT_008e3108 != (undefined4 *)0x0) {
              fn_00150284();
              if (DAT_008e3079 == '\0') {
                DAT_008e307a = 0;
              }
              else {
                *(undefined1 *)(puVar1[6] + puVar1[9] * 0x1c + -0x1a) = 1;
                DAT_008e3080 = 1;
              }
              fn_00150294();
            }
            fn_0012b2f0(0);
            fn_0012b6ec(1,local_30 + 2);
            DAT_008e3078 = 1;
            return 1;
          }
          if (DAT_008e31e0 != 0 || DAT_008e31e4 != 0) {
            uVar11 = fn_00158f10();
            iVar3 = (int)((ulonglong)uVar11 >> 0x20) -
                    ((int)((ulonglong)uVar10 >> 0x20) + (uint)((uint)uVar11 < (uint)uVar10));
            bVar9 = DAT_008e31e0 < (uint)uVar11 - (uint)uVar10;
            if ((int)(DAT_008e31e4 - (iVar3 + (uint)bVar9)) < 0 !=
                (SBORROW4(DAT_008e31e4,iVar3) != SBORROW4(DAT_008e31e4 - iVar3,(uint)bVar9))) {
              if (DAT_008e31d8 != (code *)0x0) {
                (*DAT_008e31d8)();
              }
              goto LAB_0011b294;
            }
          }
          fn_0014fef4();
        } while( true );
      }
    }
  }
LAB_0011b334:
  fn_0012b6ec(1,local_30 + 2);
  return 0;
}


