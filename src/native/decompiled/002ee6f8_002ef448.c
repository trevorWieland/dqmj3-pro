#include "002ee6f8_002ef448.h"



int * fn_002ef448(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)fn_00145b00(0x20,&DAT_00812c8c);
  iVar2 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[3] = 0xffffffff;
    iVar2 = fn_00101a1c(puVar1 + 4,&LAB_001ad878,4);
    iVar2 = iVar2 + -0x10;
  }
  *param_1 = iVar2;
  return param_1;
}



void fn_002ef424(int *param_1)

{
  fn_001088e0(*(undefined4 *)*param_1,((undefined4 *)*param_1)[3]);
  fn_00154a6c();
  return;
}



void fn_002ee9c8(undefined4 *param_1,undefined4 param_2,int param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  uint uVar12;
  int *piVar13;
  int iVar14;
  undefined8 uVar15;
  undefined4 *local_ac;
  undefined4 *local_a8;
  undefined4 *local_a4 [4];
  int local_94;
  int local_7c;
  int local_78;
  int local_70 [6];
  undefined1 auStack_58 [52];
  
  *param_1 = param_2;
  uVar3 = fn_001481c8(param_2,DAT_00896e38,&DAT_008c5407,1,1);
  param_1[1] = uVar3;
  local_ac = (undefined4 *)&DAT_00000001;
  local_a8 = (undefined4 *)0x0;
  uVar3 = fn_001480d0(*param_1,uVar3,DAT_00896e3c,&DAT_008c5409,1);
  param_1[2] = uVar3;
  iVar4 = fn_00178f9c(*param_1,uVar3);
  uVar3 = fn_00689280(*(undefined4 *)(iVar4 + 0x10),s_frame_008c540a);
  uVar3 = fn_00689280(uVar3,s_GuideHeader_00_008c5410);
  uVar3 = fn_0068897c(uVar3,s_tb_title_008c541f);
  uVar5 = fn_0068eb18(DAT_008977e8);
  uVar5 = fn_0025f988(uVar5,s_result_title_008c5428);
  fn_00190d50(uVar3,uVar5);
  uVar15 = 0;
  if (param_3 == 0) {
    local_70[0] = 1;
    local_70[1] = 0;
    local_70[2] = 2;
    local_70[3] = 3;
    local_78 = fn_00178f9c(*param_1,param_1[2]);
    local_ac = *(undefined4 **)(local_78 + 0x10);
    uVar12 = 0;
    fn_0014481c(DAT_008977e8);
    iVar4 = fn_006b6bc4();
    if (0 < iVar4) {
      do {
        uVar3 = fn_0014481c(DAT_008977e8);
        uVar3 = fn_006b71a8(uVar3,uVar12 & 0xff);
        uVar5 = fn_0068897c(local_ac,(&PTR_s_name_00_008c5348)[local_70[uVar12]]);
        uVar3 = fn_006f83f4(uVar3);
        fn_00190d50(uVar5,uVar3);
        uVar3 = fn_0068897c(local_ac,(&PTR_s_pts_00_008c5358)[local_70[uVar12]]);
        uVar5 = fn_00144810(DAT_008977e8);
        uVar5 = fn_006a8a34(uVar5,uVar12 & 0xff);
        fn_00688c04(uVar3,uVar5,0);
        uVar3 = fn_0068897c(local_ac,(&PTR_s_pts_04_008c5368)[local_70[uVar12]]);
        uVar5 = fn_0068eb18(DAT_008977e8);
        uVar5 = fn_0025f988(uVar5,s_point_008c53f0);
        fn_00190d50(uVar3,uVar5);
        iVar4 = fn_00145b00(0x10,&DAT_00812c8c);
        if (iVar4 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = fn_00305898();
        }
        iVar8 = param_1[uVar12 + 4];
        if (iVar8 != iVar4) {
          if (iVar8 != 0) {
            fn_002feef8(iVar8);
          }
          param_1[uVar12 + 4] = iVar4;
        }
        uVar3 = fn_00689210(local_ac,*(undefined4 *)(local_70[uVar12] * 4 + 0x8c5338));
        uVar5 = fn_0014481c(DAT_008977e8);
        piVar13 = (int *)fn_006b71a8(uVar5,uVar12 & 0xff);
        uVar5 = (**(code **)(*piVar13 + 0xb8))();
        uVar9 = fn_0014481c(DAT_008977e8);
        iVar4 = fn_006b71a8(uVar9,uVar12 & 0xff);
        fn_001ccd10(param_1[uVar12 + 4],uVar3,*param_1,(int)*(short *)(iVar4 + 0x13c),uVar5);
        uVar12 = uVar12 + 1;
        fn_0014481c(DAT_008977e8);
        iVar4 = fn_006b6bc4();
      } while ((int)uVar12 < iVar4);
    }
    iVar4 = 0;
    fn_0014481c(DAT_008977e8);
    iVar8 = fn_006b6bc4();
    if (0 < iVar8) {
      do {
        iVar8 = fn_00689210(local_ac,(&DAT_00896e68)[iVar4]);
        iVar7 = iVar4 + 1;
        *(byte *)(iVar8 + 0x44) = *(byte *)(iVar8 + 0x44) & 0xfe | 1;
        puVar10 = *(undefined4 **)(iVar8 + 0x20);
        puVar11 = *(undefined4 **)(iVar8 + 0x24);
        local_a4[iVar4 * 3 + -1] = *(undefined4 **)(iVar8 + 0x1c);
        local_a4[iVar4 * 3] = puVar10;
        local_a4[iVar4 * 3 + 1] = puVar11;
        fn_0014481c(DAT_008977e8);
        iVar8 = fn_006b6bc4();
        iVar4 = iVar7;
      } while (iVar7 < iVar8);
    }
    iVar8 = 0;
    fn_0014481c(DAT_008977e8);
    iVar4 = fn_006b6bc4();
    if (0 < iVar4) {
      do {
        uVar3 = fn_00144810(DAT_008977e8);
        uVar12 = fn_006a873c(uVar3,iVar8);
        iVar4 = fn_00689210(local_ac,(&DAT_00896e68)[local_70[uVar12]]);
        puVar10 = local_a4[iVar8 * 3];
        puVar11 = local_a4[iVar8 * 3 + 1];
        *(undefined4 **)(iVar4 + 0x1c) = local_a4[iVar8 * 3 + -1];
        *(undefined4 **)(iVar4 + 0x20) = puVar10;
        *(undefined4 **)(iVar4 + 0x24) = puVar11;
        *(byte *)(iVar4 + 0x44) = *(byte *)(iVar4 + 0x44) & 0xef | 0x10;
        fn_0014481c(DAT_008977e8);
        iVar4 = fn_00263814();
        if (uVar12 == *(byte *)(iVar4 + 0x104)) {
          iVar4 = fn_00689210(local_ac,DAT_00896e48);
          puVar10 = local_a4[iVar8 * 3];
          *(undefined4 *)(iVar4 + 0x1c) = *(undefined4 *)(iVar4 + 0x1c);
          *(undefined4 **)(iVar4 + 0x20) = puVar10;
          *(int *)(iVar4 + 0x24) = (int)uVar15;
          *(byte *)(iVar4 + 0x44) = *(byte *)(iVar4 + 0x44) & 0xef | 0x10;
        }
        iVar8 = iVar8 + 1;
        fn_0014481c(DAT_008977e8);
        iVar4 = fn_006b6bc4();
      } while (iVar8 < iVar4);
    }
    fn_0014481c(DAT_008977e8);
    for (iVar4 = fn_006b6bc4(); iVar4 < 4; iVar4 = iVar4 + 1) {
      fn_006889d8(local_78,(&DAT_00896e68)[iVar4],0);
      fn_006889d8(local_78,(&PTR_s_result_list_01_00896e78)[iVar4],0);
    }
    iVar7 = 1;
    fn_0014481c(DAT_008977e8);
    iVar8 = fn_006b6bc4();
    iVar4 = 0;
    if (1 < iVar8) {
      do {
        uVar3 = fn_00144810(DAT_008977e8);
        uVar3 = fn_006a873c(uVar3,iVar7);
        uVar5 = fn_00144810(DAT_008977e8);
        iVar8 = fn_006a88b8(uVar5,uVar3,0);
        if (iVar8 == iVar4) {
          fn_001028d4(auStack_58,s_result_list__02d_008c53f6,iVar8 + 1);
          fn_00689210(local_ac,auStack_58);
          iVar4 = fn_006892dc();
          fn_001028d4(auStack_58,s_result_list__02d_008c53f6,iVar7 + 1);
          iVar14 = fn_00689210(local_ac,auStack_58);
          *(byte *)(iVar14 + 0x44) = *(byte *)(iVar14 + 0x44) & 0xfe;
          fn_0018a69c(*(undefined4 *)(iVar14 + 0xc),iVar4);
          uVar3 = *(undefined4 *)(iVar14 + 0x20);
          uVar5 = *(undefined4 *)(iVar14 + 0x24);
          *(undefined4 *)(iVar4 + 0x1c) = *(undefined4 *)(iVar14 + 0x1c);
          *(undefined4 *)(iVar4 + 0x20) = uVar3;
          *(undefined4 *)(iVar4 + 0x24) = uVar5;
          *(byte *)(iVar4 + 0x44) = *(byte *)(iVar4 + 0x44) & 0xef | 0x10;
        }
        iVar7 = iVar7 + 1;
        fn_0014481c(DAT_008977e8);
        iVar14 = fn_006b6bc4();
        iVar4 = iVar8;
      } while (iVar7 < iVar14);
    }
    uVar3 = fn_0010887c(*param_1,param_1[1],DAT_00896e40,param_1[2]);
    param_1[3] = uVar3;
    uVar12 = 0;
    do {
      fn_006889d8(local_78,(&DAT_00896e50)[uVar12],0);
      uVar12 = uVar12 + 1;
    } while (uVar12 < 2);
    fn_006889d8(local_78,DAT_00896e4c,0);
    uVar12 = 0;
    do {
      fn_006889d8(local_78,(&DAT_00896e58)[uVar12],0);
      uVar12 = uVar12 + 1;
    } while (uVar12 < 2);
    return;
  }
  local_94 = fn_00178f9c(*param_1,param_1[2]);
  local_a4[1] = *(undefined4 **)(local_94 + 0x10);
  local_7c = 0;
  uVar3 = fn_0014481c(DAT_008977e8);
  iVar4 = fn_006b6754(uVar3,0);
  if (0 < iVar4) {
    do {
      iVar4 = (int)(char)local_7c;
      local_ac = (undefined4 *)0x0;
      local_a8 = (undefined4 *)0x0;
      local_a4[0] = (undefined4 *)0x0;
      puVar6 = (undefined4 *)fn_00100fc6(0x80,0);
      puVar11 = puVar6;
      for (puVar10 = local_ac; puVar2 = local_ac, puVar10 != local_a8; puVar10 = puVar10 + 1) {
        if (puVar11 != (undefined4 *)0x0) {
          *puVar11 = *puVar10;
        }
        puVar11 = puVar11 + 1;
      }
      for (; puVar2 != local_a8; puVar2 = puVar2 + 1) {
      }
      fn_001008c4(local_ac,(int)local_a4[0] - (int)local_ac >> 2,0);
      local_a8 = (undefined4 *)(((int)local_a8 - (int)local_ac & 0xfffffffcU) + (int)puVar6);
      local_a4[0] = puVar6 + 0x20;
      local_ac = puVar6;
      uVar3 = fn_0014481c(DAT_008977e8);
      fn_00144ac0(uVar3,iVar4,&local_ac);
      uVar3 = fn_0068897c(local_a4[1],*(undefined4 *)(&DAT_008c5448 + local_7c * 4));
      uVar5 = fn_006f83f4(*local_ac);
      fn_00190d50(uVar3,uVar5);
      uVar12 = 0;
      if ((int)local_a8 - (int)local_ac >> 2 != 0) {
        do {
          piVar13 = (int *)local_ac[uVar12];
          iVar14 = iVar4 * ((int)local_a8 - (int)local_ac >> 2) + uVar12;
          iVar7 = fn_00145b00(0x10,&DAT_00812c8c);
          iVar8 = 0;
          if (iVar7 != 0) {
            iVar8 = fn_00305898();
          }
          iVar7 = param_1[iVar14 + 4];
          if (iVar7 != iVar8) {
            if (iVar7 != 0) {
              fn_002feef8(iVar7);
            }
            param_1[iVar14 + 4] = iVar8;
          }
          uVar3 = fn_00689210(local_a4[1],(&PTR_s_face_04_008c5438)[iVar14]);
          uVar5 = (**(code **)(*piVar13 + 0xb8))(piVar13);
          fn_001ccd10(param_1[iVar14 + 4],uVar3,*param_1,(int)(short)piVar13[0x4f],uVar5);
          uVar12 = uVar12 + 1;
        } while (uVar12 < (uint)((int)local_a8 - (int)local_ac >> 2));
      }
      uVar3 = fn_0068897c(local_a4[1],*(undefined4 *)(&DAT_008c5450 + iVar4 * 4));
      uVar5 = fn_00144810(DAT_008977e8);
      uVar5 = fn_006a8a10(uVar5,iVar4);
      fn_00688c04(uVar3,uVar5,0);
      uVar3 = fn_0068897c(local_a4[1],*(undefined4 *)(&DAT_008c5458 + iVar4 * 4));
      uVar5 = fn_0068eb18(DAT_008977e8);
      uVar5 = fn_0025f988(uVar5,s_point_008c54ac);
      fn_00190d50(uVar3,uVar5);
      fn_0014481c(DAT_008977e8);
      iVar8 = fn_00263814();
      uVar1 = *(undefined1 *)(iVar8 + 0x104);
      uVar3 = fn_0014481c(DAT_008977e8);
      iVar8 = fn_006b70fc(uVar3,uVar1,0);
      if (iVar8 == iVar4) {
        iVar8 = fn_00689210(local_a4[1],DAT_00896e4c);
        *(undefined4 *)(iVar8 + 0x1c) = *(undefined4 *)(iVar8 + 0x1c);
        *(undefined4 *)(iVar8 + 0x20) = *(undefined4 *)(iVar8 + 0x20);
        *(int *)(iVar8 + 0x24) = (int)uVar15;
        *(byte *)(iVar8 + 0x44) = *(byte *)(iVar8 + 0x44) & 0xef | 0x10;
      }
      uVar3 = fn_00144810(DAT_008977e8);
      iVar8 = fn_0014495c(uVar3,0);
      uVar3 = fn_00178f9c(*param_1,param_1[2]);
      fn_006889d8(uVar3,(&DAT_00896e58)[iVar4],iVar8 == iVar4);
      for (puVar10 = local_ac; puVar10 != local_a8; puVar10 = puVar10 + 1) {
      }
      fn_001008c4(local_ac,(int)local_a4[0] - (int)local_ac >> 2,0);
      local_7c = local_7c + 1;
      uVar3 = fn_0014481c(DAT_008977e8);
      iVar4 = fn_006b6754(uVar3,0);
    } while (local_7c < iVar4);
  }
  uVar3 = fn_0010887c(*param_1,param_1[1],DAT_00896e44,param_1[2]);
  param_1[3] = uVar3;
  iVar4 = 0;
  do {
    fn_006889d8(local_94,(&DAT_00896e68)[iVar4],0);
    fn_006889d8(local_94,(&PTR_s_result_list_01_00896e78)[iVar4],0);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 4);
  fn_006889d8(local_94,DAT_00896e48,0);
  return;
}



void fn_002ee6f8(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = &DAT_0082122c;
  uVar1 = param_1[0x10];
  uVar2 = uVar1;
  if ((uint)param_1[0x11] < uVar1) {
    do {
      uVar2 = uVar2 + 4;
    } while (uVar2 != param_1[0x11]);
  }
  fn_001008c4(uVar1,(int)(param_1[0x12] - uVar1) >> 2,0);
  fn_0023ed44(param_1);
  fn_002feef8();
  return;
}


