#include "00294788_00294788.h"



undefined4 fn_00294788(undefined1 *param_1,undefined4 *param_2)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  undefined1 uVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  undefined4 local_370;
  undefined4 local_36c;
  undefined4 local_368;
  undefined4 local_364;
  undefined4 local_360;
  undefined1 auStack_35c [4];
  undefined1 auStack_358 [68];
  int local_314;
  undefined1 auStack_110 [14];
  char local_102;
  char *apcStack_f8 [4];
  char *pcStack_e8;
  
  *param_2 = 0;
  switch(*param_1) {
  case 0:
    uVar7 = fn_00144810(DAT_008977e8);
    fn_001cc118(uVar7,0);
                    /* WARNING: Subroutine does not return */
    fn_001638a0();
  case 1:
                    /* WARNING: Subroutine does not return */
    fn_001638a0();
  case 2:
    if (*(int *)(DAT_00897808 + 0x14) != *(int *)(DAT_00897808 + 0xc)) {
      return 0;
    }
    if (*(int *)(DAT_0089780c + 0x14) == *(int *)(DAT_0089780c + 0xc)) {
      fn_0068ca28(DAT_008977e8);
      fn_0068cbec(DAT_008977e8);
      fn_00249d6c(DAT_008977e8);
      fn_00664ac4(DAT_008977e8);
      fn_0068c8d0(DAT_008977e8);
      fn_0068c7e8(DAT_008977e8);
      fn_00120f20();
      *param_1 = 3;
      *(undefined4 *)(param_1 + 4) = 1;
      return 0;
    }
    return 0;
  case 3:
    iVar12 = *(int *)(param_1 + 4);
    *(int *)(param_1 + 4) = iVar12 + -1;
    if (0 < iVar12) {
      return 0;
    }
    uVar7 = fn_001603f8(auStack_110,0);
    fn_00163988(DAT_00897808,uVar7,5);
    uVar7 = fn_001603f8(auStack_110,0);
    fn_00163988(DAT_0089780c,uVar7,5);
    fn_0068c80c(DAT_008977e8);
    fn_0068c2e4(&local_370);
    fn_0068c6c4(DAT_008977e8,&local_370);
    fn_0014481c(DAT_008977e8);
    iVar12 = fn_00263814();
    uVar4 = *(undefined1 *)(iVar12 + 0x104);
    uVar7 = fn_00144810(DAT_008977e8);
    iVar12 = fn_006a88b8(uVar7,uVar4,0);
    if (iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      fn_001638a0();
    }
    uVar4 = 5;
    *(undefined4 *)(param_1 + 4) = 0;
    break;
  case 4:
                    /* WARNING: Subroutine does not return */
    fn_001638a0();
  case 5:
    iVar12 = *(int *)(param_1 + 4);
    *(int *)(param_1 + 4) = iVar12 + 1;
    if (iVar12 < 0x1e) {
      return 0;
    }
    uVar4 = 6;
    break;
  case 6:
    iVar12 = fn_001cce8c();
    if (iVar12 == 0) {
      return 0;
    }
    fn_0068c2e4(&local_370);
    fn_0068c6c4(DAT_008977e8,&local_370);
    fn_00144810(DAT_008977e8);
    uVar8 = fn_006a8694();
    if (uVar8 < 2) {
      fn_0014481c(DAT_008977e8);
      iVar12 = fn_00263814();
      bVar1 = *(byte *)(iVar12 + 0x104);
      uVar7 = fn_00144810(DAT_008977e8);
      uVar8 = fn_006a873c(uVar7,0);
      if ((bVar1 == uVar8) && (0 < local_314)) {
        uVar7 = fn_001603f8(auStack_110,0xff);
        fn_00163988(DAT_0089780c,uVar7,0x1e);
        *param_1 = 7;
        param_1[0x14] = 1;
        return 0;
      }
    }
    uVar7 = fn_001603f8(auStack_110,0xff);
    fn_00163988(DAT_00897808,uVar7,0x1e);
    uVar7 = fn_001603f8(auStack_110,0xff);
    fn_00163988(DAT_0089780c,uVar7,0x1e);
    if (0 < local_314) {
      param_1[0x14] = 1;
    }
    uVar4 = 0xe;
    break;
  case 7:
    if (*(int *)(DAT_0089780c + 0x14) == *(int *)(DAT_0089780c + 0xc)) {
      fn_0068cb5c(DAT_008977e8);
      *param_1 = 8;
      *(undefined4 *)(param_1 + 4) = 1;
      return 0;
    }
    return 0;
  case 8:
    iVar12 = *(int *)(param_1 + 4);
    *(int *)(param_1 + 4) = iVar12 + -1;
    if (0 < iVar12) {
      return 0;
    }
    fn_0068c63c(DAT_008977e8);
    uVar7 = fn_001603f8(&local_370,0);
    fn_00163988(DAT_0089780c,uVar7,0x1e);
    uVar4 = 9;
    break;
  case 9:
    if (*(int *)(DAT_0089780c + 0x14) == *(int *)(DAT_0089780c + 0xc)) {
      fn_0068c2e4(&local_370);
      fn_0068c6c4(DAT_008977e8,&local_370);
      uVar7 = fn_0068e97c(DAT_008977e8);
      fn_0026683c(uVar7,local_314);
      *param_1 = 10;
    }
  case 10:
    fn_0068e97c(DAT_008977e8);
    iVar12 = fn_00267e98();
    if (iVar12 == 0) {
      return 0;
    }
    uVar7 = fn_001603f8(&local_370,0xff);
    fn_00163988(DAT_00897808,uVar7,0x1e);
    uVar7 = fn_001603f8(&local_370,0xff);
    fn_00163988(DAT_0089780c,uVar7,0x1e);
    uVar4 = 0xb;
    break;
  case 0xb:
    if (*(int *)(DAT_00897808 + 0x14) != *(int *)(DAT_00897808 + 0xc)) {
      return 0;
    }
    fn_0068e97c(DAT_008977e8);
    iVar12 = fn_00266868();
    if (iVar12 == 0) {
      uVar4 = 0xe;
    }
    else {
      uVar4 = 0xc;
    }
    *param_1 = uVar4;
    uVar7 = fn_001603f8(&local_370,0);
    fn_00163988(DAT_00897808,uVar7,1);
    fn_00120fd8(DAT_008977e8);
    return 0;
  case 0xc:
    if (*(int *)(param_1 + 0xc) == 0) {
      iVar12 = fn_00145b00(0x2c,&DAT_00812c8c);
      piVar5 = (int *)0x0;
      if (iVar12 != 0) {
        piVar5 = (int *)fn_001f7350(iVar12,0);
      }
      piVar13 = *(int **)(param_1 + 8);
      if (piVar13 != piVar5) {
        if (piVar13 != (int *)0x0) {
          (**(code **)(*piVar13 + 8))(piVar13);
        }
        *(int **)(param_1 + 8) = piVar5;
      }
      iVar12 = *(int *)(param_1 + 8);
      uVar7 = fn_0068c694(DAT_008977e8);
      *(undefined4 *)(iVar12 + 0x10) = uVar7;
      iVar12 = *(int *)(param_1 + 8);
      uVar7 = fn_0068c8c4(DAT_008977e8);
      *(undefined4 *)(iVar12 + 8) = uVar7;
      iVar12 = *(int *)(param_1 + 8);
      uVar7 = fn_0068cb50(DAT_008977e8);
      *(undefined4 *)(iVar12 + 0xc) = uVar7;
      iVar12 = fn_00145b00(0x48,&DAT_00812c8c);
      piVar5 = (int *)0x0;
      if (iVar12 != 0) {
        piVar5 = (int *)fn_00294720(iVar12,*(undefined4 *)(param_1 + 8));
      }
      piVar13 = *(int **)(param_1 + 0xc);
      if (piVar13 != piVar5) {
        if (piVar13 != (int *)0x0) {
          (**(code **)(*piVar13 + 4))(piVar13);
        }
        *(int **)(param_1 + 0xc) = piVar5;
      }
    }
    puVar11 = (undefined4 *)fn_001f74f8(*(undefined4 *)(param_1 + 0xc),0x5a);
    if (puVar11 != (undefined4 *)0x0) {
      puVar6 = (undefined4 *)(**(code **)*puVar11)(puVar11);
      do {
        if (puVar6 == &DAT_00891c90) goto LAB_00294ee0;
        puVar6 = (undefined4 *)*puVar6;
      } while (puVar6 != (undefined4 *)0x0);
    }
    puVar11 = (undefined4 *)0x0;
LAB_00294ee0:
    fn_0068c2e4(&local_370);
    fn_0068c6c4(DAT_008977e8,&local_370);
    puVar11[3] = local_368;
    *(undefined1 *)(puVar11 + 0x41) = 1;
    fn_001f748c(*(undefined4 *)(param_1 + 0xc),0x5a,0,1);
    uVar4 = 0xd;
    break;
  case 0xd:
    (**(code **)(**(int **)(param_1 + 0xc) + 0x18))();
    iVar12 = fn_0028e66c(*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x10));
    if (iVar12 != 0) {
      return 0;
    }
    uVar7 = fn_001603f8(&local_370,0xff);
    fn_00163988(DAT_00897808,uVar7,0x1e);
    uVar7 = fn_001603f8(&local_370,0xff);
    fn_00163988(DAT_0089780c,uVar7,0x1e);
    fn_001f7438(*(undefined4 *)(param_1 + 0xc),0,0);
    uVar4 = 0xe;
    break;
  case 0xe:
    if (*(int *)(DAT_00897808 + 0x14) != *(int *)(DAT_00897808 + 0xc)) {
      return 0;
    }
    if (param_1[0x14] != '\0') {
      fn_0068c2e4(auStack_358);
      fn_0068c6c4(DAT_008977e8,auStack_358);
      fn_0014481c(DAT_008977e8);
      iVar12 = fn_00263814();
      bVar1 = *(byte *)(iVar12 + 0x104);
      uVar7 = fn_00144810(DAT_008977e8);
      uVar8 = fn_006a873c(uVar7,0);
      iVar12 = local_102 * 10;
      if (bVar1 == uVar8) {
        sVar2 = *(short *)(&DAT_007c9a10 + iVar12);
        sVar3 = *(short *)(&DAT_007c9a12 + iVar12);
      }
      else {
        sVar2 = *(short *)(&DAT_007c9a14 + iVar12);
        sVar3 = *(short *)(&DAT_007c9a16 + iVar12);
      }
      iVar12 = (int)sVar2;
      if (*(int *)(param_1 + 0xc) == 0) {
        iVar14 = fn_00145b00(0x2c,&DAT_00812c8c);
        piVar5 = (int *)0x0;
        if (iVar14 != 0) {
          piVar5 = (int *)fn_001f7350(iVar14,0);
        }
        piVar13 = *(int **)(param_1 + 8);
        if (piVar13 != piVar5) {
          if (piVar13 != (int *)0x0) {
            (**(code **)(*piVar13 + 8))(piVar13);
          }
          *(int **)(param_1 + 8) = piVar5;
          piVar13 = piVar5;
        }
        iVar14 = fn_0068c694(DAT_008977e8);
        piVar13[4] = iVar14;
        iVar14 = *(int *)(param_1 + 8);
        uVar7 = fn_0068c8c4(DAT_008977e8);
        *(undefined4 *)(iVar14 + 8) = uVar7;
        iVar14 = *(int *)(param_1 + 8);
        uVar7 = fn_0068cb50(DAT_008977e8);
        *(undefined4 *)(iVar14 + 0xc) = uVar7;
        iVar14 = fn_00145b00(0x48,&DAT_00812c8c);
        piVar5 = (int *)0x0;
        if (iVar14 != 0) {
          piVar5 = (int *)fn_00294720(iVar14,*(undefined4 *)(param_1 + 8));
        }
        piVar13 = *(int **)(param_1 + 0xc);
        if (piVar13 != piVar5) {
          if (piVar13 != (int *)0x0) {
            (**(code **)(*piVar13 + 4))(piVar13);
          }
          *(int **)(param_1 + 0xc) = piVar5;
        }
      }
      if (iVar12 < 1) {
        *param_1 = 0x13;
        uVar7 = fn_001603f8(auStack_35c,0);
        fn_00163988(DAT_0089780c,uVar7,1);
        fn_0068c70c(DAT_008977e8);
        fn_0068cb5c(DAT_008977e8);
        return 0;
      }
      puVar11 = (undefined4 *)fn_001f751c(*(undefined4 *)(param_1 + 0xc),0x48);
      if (puVar11 != (undefined4 *)0x0) {
        puVar6 = (undefined4 *)(**(code **)*puVar11)(puVar11);
        do {
          if (puVar6 == &DAT_008942d0) goto LAB_00295150;
          puVar6 = (undefined4 *)*puVar6;
        } while (puVar6 != (undefined4 *)0x0);
      }
      puVar11 = (undefined4 *)0x0;
LAB_00295150:
      fn_001028d4(apcStack_f8,s_I_04d_008c5052,iVar12);
      uVar7 = fn_0068eb18(DAT_008977e8);
      uVar7 = fn_0025f988(uVar7,apcStack_f8);
      uVar9 = fn_0068eb18(DAT_008977e8);
      fn_0016ba84(uVar9,uVar7);
      uVar7 = fn_0068eb18(DAT_008977e8);
      fn_0016bad4(uVar7,(int)sVar3);
      uVar7 = fn_0068eb18(DAT_008977e8);
      uVar7 = fn_0025f988(uVar7,s_race_result_get_item_008c5058);
      local_36c = 1;
      local_368 = 0;
      local_370 = 1;
      local_364 = 0;
      local_360 = 0;
      fn_0036c5f4(puVar11,uVar7,1,0);
      fn_001f749c(*(undefined4 *)(param_1 + 0xc),0x48,0);
      *(undefined1 *)(puVar11 + 0xc) = 0;
      fn_00229a50(*(undefined4 *)(DAT_00897804 + 0x14),iVar12,(int)sVar3);
                    /* WARNING: Subroutine does not return */
      fn_001638a0();
    }
    goto LAB_00295274;
  case 0xf:
    (**(code **)(**(int **)(param_1 + 0xc) + 0x18))();
    puVar11 = (undefined4 *)fn_001f751c(*(undefined4 *)(param_1 + 0xc),0x48);
    if (puVar11 != (undefined4 *)0x0) {
      puVar11 = (undefined4 *)(**(code **)*puVar11)(puVar11);
      do {
        if (puVar11 == &DAT_008942d0) break;
        puVar11 = (undefined4 *)*puVar11;
      } while (puVar11 != (undefined4 *)0x0);
    }
                    /* WARNING: Subroutine does not return */
    fn_001638a0();
  case 0x10:
    (**(code **)(**(int **)(param_1 + 0xc) + 0x18))();
    puVar11 = (undefined4 *)fn_001f751c(*(undefined4 *)(param_1 + 0xc),0x48);
    if (puVar11 != (undefined4 *)0x0) {
      puVar11 = (undefined4 *)(**(code **)*puVar11)(puVar11);
      do {
        if (puVar11 == &DAT_008942d0) break;
        puVar11 = (undefined4 *)*puVar11;
      } while (puVar11 != (undefined4 *)0x0);
    }
                    /* WARNING: Subroutine does not return */
    fn_001638a0();
  case 0x11:
    (**(code **)(**(int **)(param_1 + 0xc) + 0x18))();
    if (*(int *)(param_1 + 0x10) == 0) {
      return 0;
    }
    iVar12 = fn_002f9da0();
    if (iVar12 == 0) {
      return 0;
    }
    uVar7 = fn_001603f8(&local_370,0xff);
    fn_00163988(DAT_00897808,uVar7,0x1e);
    uVar7 = fn_001603f8(&local_370,0xff);
    fn_00163988(DAT_0089780c,uVar7,0x1e);
    fn_002f9980(*(undefined4 *)(param_1 + 0x10));
    if (*(int *)(param_1 + 0x10) != 0) {
      fn_002feef8(*(int *)(param_1 + 0x10));
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *param_1 = 0x12;
    *(undefined4 *)(param_1 + 4) = 0;
    return 0;
  case 0x12:
    (**(code **)(**(int **)(param_1 + 0xc) + 0x18))();
    if (*(int *)(DAT_00897808 + 0x14) != *(int *)(DAT_00897808 + 0xc)) {
      return 0;
    }
    iVar12 = *(int *)(param_1 + 4);
    *(int *)(param_1 + 4) = iVar12 + 1;
    if (iVar12 < 1) {
      return 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    uVar7 = fn_001603f8(&local_370,0);
    fn_00163988(DAT_00897808,uVar7,1);
    uVar7 = fn_001603f8(&local_370,0);
    fn_00163988(DAT_0089780c,uVar7,1);
    uVar4 = 0x13;
    break;
  case 0x13:
    puVar11 = (undefined4 *)fn_001f751c(*(undefined4 *)(param_1 + 0xc),0x48);
    if (puVar11 != (undefined4 *)0x0) {
      puVar6 = (undefined4 *)(**(code **)*puVar11)(puVar11);
      do {
        if (puVar6 == &DAT_008942d0) goto LAB_002956ec;
        puVar6 = (undefined4 *)*puVar6;
      } while (puVar6 != (undefined4 *)0x0);
    }
    puVar11 = (undefined4 *)0x0;
LAB_002956ec:
    fn_0068c2e4(auStack_358);
    fn_0068c6c4(DAT_008977e8,auStack_358);
    iVar14 = (int)local_102;
    fn_0014481c(DAT_008977e8);
    iVar12 = fn_00263814();
    bVar1 = *(byte *)(iVar12 + 0x104);
    uVar7 = fn_00144810(DAT_008977e8);
    uVar8 = fn_006a873c(uVar7,0);
    if (((bVar1 == uVar8) && (iVar14 != 4)) && (iVar12 = fn_002cf29c(local_102), iVar12 == 0)) {
      apcStack_f8[0] = s_MenuMessageRankC_008c5085;
      apcStack_f8[1] = s_MenuMessageRankB_008c5096;
      apcStack_f8[2] = s_MenuMessageRankA_008c50a7;
      apcStack_f8[3] = s_MenuMessageRankS_008c50b8;
      pcStack_e8 = s_MenuMessageRankSS_008c50c9;
      uVar7 = fn_0068eb18(DAT_008977e8);
      uVar7 = fn_0025f988(uVar7,apcStack_f8[iVar14]);
      uVar9 = fn_0068eb18(DAT_008977e8);
      uVar9 = fn_0025f988(uVar9,apcStack_f8[iVar14 + 1]);
      uVar10 = fn_0068eb18(DAT_008977e8);
      fn_0016ba84(uVar10,uVar7);
      uVar7 = fn_0068eb18(DAT_008977e8);
      fn_0016ba84(uVar7,uVar9);
      uVar7 = fn_0068eb18(DAT_008977e8);
      uVar7 = fn_0025f988(uVar7,s_race_result_rankup_008c50db);
      local_36c = 1;
      local_368 = 0;
      local_370 = 1;
      local_364 = 0;
      local_360 = 0;
      fn_0036c5f4(puVar11,uVar7,1,0);
      fn_001f749c(*(undefined4 *)(param_1 + 0xc),0x48,0);
      *(undefined1 *)(puVar11 + 0xc) = 0;
                    /* WARNING: Subroutine does not return */
      fn_001638a0();
    }
    *param_1 = 0x15;
    *(undefined4 *)(param_1 + 4) = 0;
    return 0;
  case 0x14:
    (**(code **)(**(int **)(param_1 + 0xc) + 0x18))();
    puVar11 = (undefined4 *)fn_001f751c(*(undefined4 *)(param_1 + 0xc),0x48);
    if (puVar11 != (undefined4 *)0x0) {
      puVar11 = (undefined4 *)(**(code **)*puVar11)(puVar11);
      do {
        if (puVar11 == &DAT_008942d0) break;
        puVar11 = (undefined4 *)*puVar11;
      } while (puVar11 != (undefined4 *)0x0);
    }
                    /* WARNING: Subroutine does not return */
    fn_001638a0();
  case 0x15:
    (**(code **)(**(int **)(param_1 + 0xc) + 0x18))();
    iVar12 = *(int *)(param_1 + 4);
    *(int *)(param_1 + 4) = iVar12 + 1;
    if (iVar12 < 1) {
      return 0;
    }
LAB_00295274:
    uVar4 = 0x16;
    break;
  case 0x16:
    fn_0068c754(DAT_008977e8);
  default:
    goto switchD_002947a4_default;
  }
  *param_1 = uVar4;
switchD_002947a4_default:
  return 0;
}


