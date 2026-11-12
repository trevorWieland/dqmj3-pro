#include "0029cc9c_0029e580.h"



void fn_0029e580(undefined4 param_1,undefined4 param_2,int param_3,char param_4,int param_5)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = fn_00182994(DAT_008977e4);
  iVar3 = fn_00174aec(uVar2,param_2,0);
  if (param_5 == 0 || param_3 == 0) {
    return;
  }
  iVar4 = (int)(short)param_3;
  if (iVar3 != 3) {
    if (iVar3 < 4) {
      if (iVar3 == 1) {
        uVar2 = fn_00182994(DAT_008977e4);
        fn_00155194(uVar2,param_4,iVar4);
        return;
      }
      if (iVar3 == 2) {
        uVar2 = fn_00182994(DAT_008977e4);
        fn_00155240(uVar2,param_4,iVar4);
        return;
      }
      return;
    }
    if (iVar3 == 4) {
      uVar2 = fn_00182994(DAT_008977e4);
      fn_00154d74(uVar2,param_4,iVar4);
      return;
    }
    if (iVar3 != 10) {
      return;
    }
  }
  uVar2 = fn_00182994(DAT_008977e4);
  iVar3 = fn_00155ffc(uVar2,param_2,param_1);
  if (iVar3 != 0) {
    uVar2 = fn_00182994(DAT_008977e4);
    fn_001493b4(uVar2,param_4,iVar4);
    return;
  }
  uVar2 = fn_00182994(DAT_008977e4);
  fn_0016427c(uVar2,param_4,iVar4);
  uVar2 = fn_00182994(DAT_008977e4);
  iVar3 = fn_00164230(uVar2,param_2,param_1);
  if (iVar3 == 0) {
    uVar2 = fn_00182994(DAT_008977e4);
    iVar3 = fn_00164208(uVar2,param_2,param_1);
    if (iVar3 == 0) {
      return;
    }
  }
  uVar2 = fn_00182994(DAT_008977e4);
  sVar1 = fn_001645e0(uVar2,(int)param_4);
  uVar2 = fn_00182994(DAT_008977e4);
  fn_0016427c(uVar2,param_4,(int)(short)(sVar1 + -1));
  return;
}



void fn_0029d9a8(int *param_1)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = (**(code **)(*param_1 + 0xc))(param_1);
  if ((iVar2 == 0) &&
     (iVar2 = fn_006ac638(*(undefined4 *)(DAT_008977e0 + 0x30),param_1[1]), iVar2 != 0)) {
    uVar1 = fn_001c7764(iVar2,param_1 + 2);
    *(undefined1 *)(param_1 + 6) = uVar1;
  }
  return;
}



undefined4 fn_0029cc9c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  uint in_fpscr;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  undefined8 in_d8;
  ulonglong in_d9;
  int local_5c;
  int local_58;
  undefined1 local_54 [4];
  undefined1 local_50 [4];
  int local_4c;
  
  fVar14 = (float)((ulonglong)in_d8 >> 0x20);
  uVar1 = fn_00182994(DAT_008977e4);
  iVar2 = fn_0016561c(uVar1,(int)*(char *)(param_1 + 8));
  switch(*(undefined1 *)(param_1 + 1)) {
  case 0:
    fn_0029a6e0(param_1);
    iVar11 = 0;
    if (0 < iVar2) {
      do {
        iVar5 = (int)(char)iVar11;
        iVar9 = (int)*(char *)(param_1 + 8);
        iVar8 = 0;
        do {
          iVar12 = param_1 + iVar8 * 4;
          if (*(int *)(iVar12 + 0x20) != 0) {
            uVar1 = fn_00182994(DAT_008977e4);
            iVar3 = fn_001659c0(uVar1,iVar9,iVar5);
            uVar15 = *(undefined4 *)(iVar12 + 0x20);
            local_50[0] = (undefined1)iVar3;
            local_5c = 0;
            uVar1 = fn_006a7b84(DAT_008977e4);
            iVar12 = fn_00175978(uVar1,uVar15);
            if (iVar12 == -1) {
LAB_0029ce1c:
              local_5c = -1;
            }
            else if (local_5c != -1) {
              uVar1 = fn_0017484c(DAT_008977e4);
              iVar4 = fn_00165bb4(uVar1,local_50);
              if (iVar4 == 0) goto LAB_0029ce1c;
              if (local_5c != -1) {
                local_4c = fn_0017fde4(*(undefined4 *)(iVar4 + 4));
                if (local_4c == 0) {
                  local_5c = -1;
                }
                uVar1 = fn_006a7b84(DAT_008977e4);
                uVar7 = fn_00175944(uVar1,uVar15);
                if ((uVar7 & 0x10) == 0) {
                  uVar1 = fn_006a7b84(DAT_008977e4);
                  local_5c = fn_0016aa48(uVar1,uVar15,local_4c,iVar12);
                }
                else {
                  uVar1 = fn_006a7b84(DAT_008977e4);
                  local_5c = fn_0016a9b0(uVar1,uVar15,local_4c,iVar12);
                }
                if (local_5c != -1) {
                  uVar1 = fn_006a7b84(DAT_008977e4);
                  fn_0023e554(uVar1,local_5c);
                  piVar10 = *(int **)(param_1 + 0x38);
                  if (piVar10 == *(int **)(param_1 + 0x3c)) {
                    fn_0079ce44(param_1 + 0x34,piVar10,&local_5c);
                  }
                  else {
                    *(int **)(param_1 + 0x38) = piVar10 + 1;
                    if (piVar10 != (int *)0x0) {
                      *piVar10 = local_5c;
                    }
                  }
                }
              }
            }
            iVar12 = local_5c;
            if (local_5c != -1) {
              iVar4 = fn_00174828(DAT_008977e4);
              switch(*(undefined1 *)(iVar4 + iVar3 * 0x418 + -0x4027)) {
              case 0:
                break;
              case 1:
                break;
              case 3:
                break;
              case 4:
              }
              uVar1 = fn_006a7b84(DAT_008977e4);
              fn_0023dd30(uVar1,iVar12);
            }
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < 2);
        iVar11 = iVar11 + 1;
      } while (iVar11 < iVar2);
    }
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined1 *)(param_1 + 1) = 1;
    break;
  case 1:
    break;
  case 2:
    if (*(int *)(param_1 + 0x18) < 0xf) {
      return 0;
    }
    if (0 < iVar2) {
      in_d9 = in_d9 & 0xffffffff;
    }
    *(undefined1 *)(param_1 + 1) = 3;
    iVar11 = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    if (iVar2 < 1) {
      return 0;
    }
    do {
      uVar1 = fn_00182994(DAT_008977e4);
      iVar5 = fn_00154ca8(uVar1,*(undefined4 *)(param_1 + 8),iVar11);
      if (iVar5 != 0) {
        uVar1 = fn_00182994(DAT_008977e4);
        uVar6 = fn_001659c0(uVar1,(int)*(char *)(param_1 + 8),(int)(char)iVar11);
        uVar1 = fn_00182994(DAT_008977e4);
        iVar5 = fn_0015532c(uVar1,*(undefined4 *)(param_1 + 8),iVar11);
        uVar1 = fn_00182994(DAT_008977e4);
        fn_00164c80(uVar1,0x1d,2);
        uVar1 = fn_00182994(DAT_008977e4);
        fn_001493b4(uVar1,uVar6 & 0xff,iVar5);
        uVar1 = fn_00182994(DAT_008977e4);
        fn_0015ad60(uVar1,uVar6 & 0xff);
        uVar7 = uVar6 - 0x10;
        bVar13 = uVar7 < 4;
        if (!bVar13) {
          uVar7 = uVar6 - 0x18;
        }
        if ((bVar13 || uVar7 < 4) || (uVar6 == 0x20 || uVar6 == 0x22)) {
          if (*(char *)(param_1 + 0x1c) == '\0') {
            iVar8 = param_1 + (uVar6 - 0x10) * 4;
            iVar9 = *(int *)(iVar8 + 0xa4) * 8 + (*(int *)(iVar8 + 0xa4) / 6) * -0x30;
            uVar1 = *(undefined4 *)(&DAT_007bcf6c + iVar9);
            uVar15 = *(undefined4 *)(&DAT_007bcf70 + iVar9);
            *(int *)(iVar8 + 0xa4) = *(int *)(iVar8 + 0xa4) + 1;
            fVar14 = (float)VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x16) & 3);
            uVar7 = VectorSignedToFloat(uVar15,(byte)(in_fpscr >> 0x16) & 3);
            in_d9 = (ulonglong)uVar7;
          }
        }
        else if (*(char *)(param_1 + 0x1c) != '\0') {
          iVar8 = param_1 + (uVar6 - 0x14) * 4;
          iVar9 = *(int *)(iVar8 + 0xa4) * 8 + (*(int *)(iVar8 + 0xa4) / 6) * -0x30;
          uVar1 = *(undefined4 *)(&DAT_007bcf6c + iVar9);
          uVar15 = *(undefined4 *)(&DAT_007bcf70 + iVar9);
          *(int *)(iVar8 + 0xa4) = *(int *)(iVar8 + 0xa4) + 1;
          fVar14 = (float)VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x16) & 3);
          uVar7 = VectorSignedToFloat(uVar15,(byte)(in_fpscr >> 0x16) & 3);
          in_d9 = (ulonglong)uVar7;
        }
        if (iVar5 < 0) {
          uVar1 = 5;
        }
        else if (*(char *)(param_1 + 0x1c) == '\0') {
          uVar1 = 1;
        }
        else {
          uVar1 = 0;
        }
        uVar15 = fn_00182994(DAT_008977e4);
        if (iVar5 < 0) {
          iVar5 = -iVar5;
        }
        fn_001755cc(uVar15,uVar6 & 0xff,uVar1,iVar5,0,(int)fVar14,(int)(float)in_d9);
        local_54[0] = (undefined1)uVar6;
        local_58 = 0;
        uVar1 = fn_006a7b84(DAT_008977e4);
        iVar5 = fn_00175978(uVar1,0x2ee1);
        if (iVar5 == -1) {
LAB_0029d3c4:
          local_58 = -1;
        }
        else if (local_58 != -1) {
          uVar1 = fn_0017484c(DAT_008977e4);
          iVar9 = fn_00165bb4(uVar1,local_54);
          if (iVar9 == 0) goto LAB_0029d3c4;
          if (local_58 != -1) {
            iVar9 = fn_0017fde4(*(undefined4 *)(iVar9 + 4));
            if (iVar9 == 0) {
              local_58 = -1;
            }
            uVar1 = fn_006a7b84(DAT_008977e4);
            uVar7 = fn_00175944(uVar1,0x2ee1);
            if ((uVar7 & 0x10) == 0) {
              uVar1 = fn_006a7b84(DAT_008977e4);
              local_58 = fn_0016aa48(uVar1,0x2ee1,iVar9,iVar5);
            }
            else {
              uVar1 = fn_006a7b84(DAT_008977e4);
              local_58 = fn_0016a9b0(uVar1,0x2ee1,iVar9,iVar5);
            }
            if (local_58 != -1) {
              uVar1 = fn_006a7b84(DAT_008977e4);
              fn_0023e554(uVar1,local_58);
              piVar10 = *(int **)(param_1 + 0x38);
              if (piVar10 == *(int **)(param_1 + 0x3c)) {
                fn_0079ce44(param_1 + 0x34,piVar10,&local_58);
              }
              else {
                *(int **)(param_1 + 0x38) = piVar10 + 1;
                if (piVar10 != (int *)0x0) {
                  *piVar10 = local_58;
                }
              }
            }
          }
        }
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < iVar2);
  case 3:
    if (*(int *)(param_1 + 0x18) < 0xf) {
      return 0;
    }
    goto LAB_0029d128;
  case 4:
    fVar16 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 0x30),(byte)(in_fpscr >> 0x16) & 3
                                       );
    fVar14 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 0x18),(byte)(in_fpscr >> 0x16) & 3
                                       );
    if (fVar16 * 0.3 <= fVar14) {
      return 1;
    }
  default:
    goto switchD_0029ccdc_default;
  }
  iVar11 = 0;
  iVar5 = 0;
  if (0 < iVar2) {
    do {
      uVar1 = fn_00182994(DAT_008977e4);
      iVar9 = fn_00174a74(uVar1,*(undefined4 *)(param_1 + 8),iVar5);
      if (iVar11 < iVar9) {
        iVar11 = iVar9;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar2);
  }
  fVar14 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 0x30),(byte)(in_fpscr >> 0x16) & 3);
  iVar5 = (int)(fVar14 * 0.7);
  if (*(int *)(param_1 + 0x10) != 0) {
    iVar5 = 7;
  }
  if (iVar5 <= *(int *)(param_1 + 0x18)) {
    iVar5 = 0;
    if (0 < iVar2) {
      do {
        uVar1 = fn_00182994(DAT_008977e4);
        iVar9 = fn_00174a74(uVar1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
        if (*(int *)(param_1 + 0x10) < iVar9) {
          fn_00299f18(param_1);
        }
        iVar5 = iVar5 + 1;
        *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
      } while (iVar5 < iVar2);
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    fn_00174858(DAT_008977e4);
    fn_0015c948();
    iVar5 = fn_005aa150();
    if ((iVar5 != 0) && (iVar11 <= *(int *)(param_1 + 0x10))) {
      uVar7 = 0;
      iVar11 = 0;
      if (0 < iVar2) {
        do {
          *(int *)(param_1 + 0xc) = iVar11;
          iVar9 = *(int *)(param_1 + 0xa0) + iVar11 * 0xc4 + 0x18;
          iVar5 = fn_001667e0(iVar9 + 10,2);
          if (iVar5 == 0) {
            fn_0029a1cc(param_1,*(int *)(param_1 + 0xa0) + *(int *)(param_1 + 0xc) * 0xc4 + 0x18);
            uVar1 = fn_00182994(DAT_008977e4);
            fn_006adebc(uVar1,iVar9);
          }
          else {
            fn_0029b844(param_1,(int)*(char *)(iVar9 + 5));
          }
          uVar1 = fn_00182994(DAT_008977e4);
          uVar6 = fn_00154ca8(uVar1,*(undefined4 *)(param_1 + 8),iVar11);
          iVar11 = iVar11 + 1;
          uVar7 = uVar7 | uVar6;
        } while (iVar11 < iVar2);
        if (uVar7 != 0) {
          *(undefined4 *)(param_1 + 0x18) = 0;
          *(undefined1 *)(param_1 + 1) = 2;
          return 0;
        }
      }
LAB_0029d128:
      *(undefined4 *)(param_1 + 0x18) = 0;
      *(undefined1 *)(param_1 + 1) = 4;
    }
  }
switchD_0029ccdc_default:
  return 0;
}


