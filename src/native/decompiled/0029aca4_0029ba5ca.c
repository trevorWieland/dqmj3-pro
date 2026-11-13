#include "0029aca4_0029ba5ca.h"



void fn_0029aca4(undefined1 *param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  char *pcVar8;
  short sVar9;
  int iVar10;
  uint uVar11;
  uint in_fpscr;
  undefined4 uVar12;
  int iVar13;
  uint local_40;
  int local_3c;
  int local_38;
  int local_34;
  
  uVar4 = DAT_008977e4;
  iVar7 = *(int *)(param_1 + 0x14);
  iVar5 = *(int *)(param_1 + 0xa0);
  iVar13 = -0x3d380000;
  uVar12 = 0x3f800000;
  pcVar8 = (char *)(iVar7 * 0xc4 + 0xf68 + iVar5);
  switch(param_1[1]) {
  case 0:
    if (*(char *)(iVar5 + 0x15) == '\0') goto LAB_0029ad38;
    if (*(int *)(param_1 + 0x18) < 0x1f) {
      return;
    }
    if (*pcVar8 != '\x04') goto switchD_0029ad58_caseD_0;
    switch(*(undefined2 *)(pcVar8 + 2)) {
    case 1:
    case 2:
    case 10:
    case 0xd:
      fn_0029b548(param_1);
      break;
    case 3:
      uVar4 = fn_00182994(DAT_008977e4);
      fn_00159df4(uVar4,*(undefined4 *)(pcVar8 + 0x14),*(undefined4 *)(pcVar8 + 0x18));
      uVar4 = fn_00182994(DAT_008977e4);
      fn_006adebc(uVar4,pcVar8);
      iVar5 = fn_001667e0(pcVar8 + 10,2);
      if (iVar5 == 0) break;
      fn_0029b844(param_1,(int)pcVar8[5]);
      iVar5 = fn_001c2540(pcVar8 + 10);
      goto joined_r0x0029b20c;
    case 4:
      iVar13 = 0;
      sVar9 = *(short *)(iVar5 + iVar7 * 0xc4 + 0xf6a);
      while (sVar9 == 4) {
        uVar4 = fn_00182994(DAT_008977e4);
        fn_006adebc(uVar4,(*(int *)(param_1 + 0x14) + iVar13) * 0xc4 + 0xf68 +
                           *(int *)(param_1 + 0xa0));
        iVar13 = iVar13 + 1;
        sVar9 = *(short *)(*(int *)(param_1 + 0xa0) +
                          (*(int *)(param_1 + 0x14) + iVar13) * 0xc4 + 0xf6a);
      }
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + iVar13 + -1;
      break;
    case 6:
      uVar4 = fn_00182994(DAT_008977e4);
      fn_00164c80(uVar4,0x17,1);
      fn_0029b548(param_1);
      break;
    case 7:
      uVar4 = fn_00182994(DAT_008977e4);
      fn_00164c80(uVar4,0x18,1);
      fn_0029b548(param_1);
      break;
    case 9:
      cVar1 = pcVar8[6];
      if (cVar1 == '\x03') {
        fn_0029a9e4(param_1,(int)pcVar8[5],(int)*(short *)(pcVar8 + 0x1c));
        uVar4 = fn_001667b8(pcVar8 + 0xc,0);
        local_40 = (uint)(byte)pcVar8[6];
        fn_0029ba5c(param_1,(int)pcVar8[5],(int)*(short *)(pcVar8 + 0x1c),uVar4);
      }
      else if (cVar1 == '\x04') {
        uVar4 = fn_00182994(DAT_008977e4);
        fn_00164c80(uVar4,0x262,1);
        fn_0029a9e4(param_1,(int)pcVar8[5],(int)*(short *)(pcVar8 + 0x1c),pcVar8[6]);
        uVar4 = fn_001667b8(pcVar8 + 0xc,0);
        local_40 = (uint)(byte)pcVar8[6];
        fn_0029ba5c(param_1,(int)pcVar8[5],(int)*(short *)(pcVar8 + 0x1c),uVar4);
      }
      else if (cVar1 == '\t') {
        uVar4 = fn_00182994(DAT_008977e4);
        fn_00164c80(uVar4,0x263,1);
        fn_0029a1cc(param_1,pcVar8);
      }
      uVar4 = fn_00182994(DAT_008977e4);
      fn_006adebc(uVar4,pcVar8);
      uVar4 = fn_00182994(DAT_008977e4);
      fn_00159df4(uVar4,*(undefined4 *)(pcVar8 + 0x14),*(undefined4 *)(pcVar8 + 0x18));
      iVar5 = fn_001667e0(pcVar8 + 10,2);
      if (iVar5 == 0) break;
      fn_0029b844(param_1,(int)pcVar8[5]);
      iVar5 = fn_001c2540(pcVar8 + 10);
joined_r0x0029b20c:
      if (iVar5 != 0) {
        *(undefined4 *)(param_1 + 0x18) = 0;
        param_1[1] = 1;
        return;
      }
      break;
    case 0xb:
      iVar10 = 0;
      if (*(short *)(iVar5 + iVar7 * 0xc4 + 0xf6a) == 0xb) {
        do {
          iVar7 = *(int *)(param_1 + 0xa0) + (*(int *)(param_1 + 0x14) + iVar10) * 0xc4 + 0xf68;
          iVar5 = fn_001667c8(iVar7 + 0x38,1);
          if (iVar5 != 0) {
            uVar4 = fn_00182994(DAT_008977e4);
            fn_00159df4(uVar4,*(undefined4 *)(iVar7 + 0x14),*(undefined4 *)(iVar7 + 0x18));
            uVar4 = fn_00182994(DAT_008977e4);
            cVar1 = fn_001752ec(uVar4,1,(int)*(char *)(iVar7 + 5));
            iVar5 = (int)*(char *)(iVar7 + 5);
            local_40 = CONCAT31(((unsigned int)(local_40) >> 8) & 0xffffff,cVar1 + *(char *)(iVar7 + 0x5a));
            if (*(char *)(iVar7 + 0x5a) < '\x01') {
              uVar11 = 4;
            }
            else {
              uVar11 = 3;
            }
            uVar2 = fn_00182944(1);
            local_3c = CONCAT31(((unsigned int)(local_3c) >> 8) & 0xffffff,uVar2);
            iVar3 = fn_00182924(1);
            local_38 = CONCAT31(((unsigned int)(local_38) >> 8) & 0xffffff,(char)iVar3);
            if (iVar3 < (char)local_3c) {
                    /* WARNING: Subroutine does not return */
              fn_00146590();
            }
            if ((int)(char)local_40 < (int)(char)local_3c) {
              puVar6 = (uint *)&local_3c;
            }
            else {
              puVar6 = &local_40;
            }
            if (iVar3 < (char)*puVar6) {
              puVar6 = (uint *)&local_38;
            }
            local_3c = (int)(char)*puVar6;
            local_40 = uVar11;
            iVar3 = fn_0061be08(iVar5);
            if (iVar3 == 0) {
              iVar5 = (*(int *)(&DAT_0085ae44 + (uint)(byte)param_1[3] * 4) - iVar5) + 0x14;
            }
            else {
              iVar5 = iVar5 + -0x10;
            }
            iVar3 = fn_00174858(DAT_008977e4);
            iVar3 = *(int *)(iVar3 + 0x50);
            local_38 = VectorSignedToFloat(*(undefined4 *)
                                            (&UNK_0085adc4 +
                                            iVar5 * 4 + (uint)(byte)param_1[3] * 0x10),
                                           (byte)(in_fpscr >> 0x16) & 3);
            local_34 = iVar13;
            fn_0016e824(iVar3,&local_38,local_40,local_3c);
            *(undefined4 *)(iVar3 + 0x10) = uVar12;
            uVar4 = fn_00182994(DAT_008977e4);
            fn_006adebc(uVar4,iVar7);
          }
          iVar10 = iVar10 + 1;
        } while (*(short *)(*(int *)(param_1 + 0xa0) +
                           (*(int *)(param_1 + 0x14) + iVar10) * 0xc4 + 0xf6a) ==
                 *(short *)(pcVar8 + 2));
      }
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + iVar10 + -1;
    }
switchD_0029ad58_caseD_0:
    *(undefined4 *)(param_1 + 0x18) = 0;
    param_1[1] = 2;
    return;
  case 1:
    if (10 < *(int *)(param_1 + 0x18)) {
      param_1[1] = 2;
      *(undefined4 *)(param_1 + 0x18) = 0;
      sVar9 = *(short *)(pcVar8 + 0x10);
      cVar1 = pcVar8[5];
      iVar7 = (int)cVar1;
      iVar10 = (int)sVar9;
      uVar4 = fn_00182994(DAT_008977e4);
      fn_00164c80(uVar4,0x1d,2);
      uVar4 = fn_00182994(DAT_008977e4);
      fn_001493b4(uVar4,cVar1,iVar10);
      uVar4 = fn_00182994(DAT_008977e4);
      fn_0015ad60(uVar4,cVar1);
      iVar5 = fn_0061be08(iVar7);
      if (iVar10 < 0) {
        uVar4 = 5;
      }
      else if (iVar5 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = 1;
      }
      if (iVar10 < 0) {
        sVar9 = -sVar9;
      }
      iVar5 = fn_0061be08(iVar7);
      if (iVar5 == 0) {
        iVar7 = (*(int *)(&DAT_0085ae44 + (uint)(byte)param_1[3] * 4) - iVar7) + 0x14;
      }
      else {
        iVar7 = iVar7 + -0x10;
      }
      iVar5 = fn_00174858(DAT_008977e4);
      iVar5 = *(int *)(iVar5 + 0x50);
      local_40 = VectorSignedToFloat(*(undefined4 *)
                                      (&UNK_0085adc4 + iVar7 * 4 + (uint)(byte)param_1[3] * 0x10),
                                     (byte)(in_fpscr >> 0x16) & 3);
      local_3c = iVar13;
      fn_0016e824(iVar5,&local_40,uVar4,(int)sVar9);
      *(undefined4 *)(iVar5 + 0x10) = uVar12;
      fn_0029a8a8(param_1,0x2ee1,cVar1);
      return;
    }
    break;
  case 2:
    if (10 < *(int *)(param_1 + 0x18)) {
      fn_00182994(DAT_008977e4);
      fn_00159ac8();
      param_1[1] = 3;
      *(undefined4 *)(param_1 + 0x18) = 0;
      return;
    }
    break;
  case 3:
    fn_00182994(DAT_008977e4);
    iVar5 = fn_00159d30();
    if (iVar5 == 0) {
      return;
    }
LAB_0029ad38:
    *(undefined4 *)(param_1 + 0x18) = 0;
    param_1[1] = 4;
    break;
  case 4:
    *(int *)(param_1 + 0x14) = iVar7 + 1;
    if (iVar7 + 1 < (int)*(char *)(iVar5 + 0x15)) {
      *(undefined4 *)(param_1 + 0x18) = 0;
      param_1[1] = 0;
      return;
    }
    uVar4 = fn_00182994(uVar4);
    iVar5 = fn_001648dc(uVar4,*(undefined4 *)(param_1 + 8));
    if (iVar5 == 0) {
      *param_1 = 9;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0x14) = 0;
      *(undefined4 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 0xa4) = 0;
      *(undefined4 *)(param_1 + 0xa8) = 0;
      *(undefined4 *)(param_1 + 0xac) = 0;
      *(undefined4 *)(param_1 + 0xb0) = 0;
      return;
    }
    *param_1 = 8;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0xa4) = 0;
    *(undefined4 *)(param_1 + 0xa8) = 0;
    *(undefined4 *)(param_1 + 0xac) = 0;
    *(undefined4 *)(param_1 + 0xb0) = 0;
    return;
  }
  return;
}


