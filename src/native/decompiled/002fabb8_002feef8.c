#include "002fabb8_002feef8.h"



void fn_002feef8(int param_1)

{
  int iVar1;
  int *piVar2;
  
  if (param_1 == 0) {
    return;
  }
  if (DAT_0089a508 == '\0') {
    return;
  }
  iVar1 = fn_00124ffc();
  fn_0014e774(*(undefined4 *)(iVar1 + 4),param_1);
  piVar2 = (int *)fn_00124ffc();
                    /* WARNING: Could not recover jumptable at 0x00143b8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 4))(piVar2,param_1);
  return;
}



void fn_002fecec(undefined4 param_1)

{
  fn_001287dc(param_1,4);
  return;
}



undefined4 * fn_002fdb40(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)fn_0069c2c8();
  *puVar1 = &PTR_FUN_008216ac;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  uVar2 = fn_001bf510();
  puVar1[4] = uVar2;
  iVar3 = fn_00145b00(0x88,&DAT_00812c8c);
  uVar2 = 0;
  if (iVar3 != 0) {
    uVar2 = fn_002a80f8();
  }
  puVar1[5] = uVar2;
  uVar2 = fn_001bcd64();
  puVar1[6] = uVar2;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  return puVar1;
}



void fn_002fd73c(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  
  uVar1 = fn_006f7a9c(DAT_008977e0);
  uVar2 = fn_00277960(uVar1,(char *)&DAT_002fd7c8);
  iVar3 = fn_006b7664(uVar1,uVar2);
  iVar4 = fn_00147e6c(iVar3,&DAT_007bf8e4,4);
  if (iVar4 == 0) {
    *(int *)(param_1 + 0x40) = iVar3 + 4;
    uVar5 = fn_0012a25c(uVar1,uVar2);
    uVar1 = fn_00169c20((uint)uVar5 - 4,(int)((ulonglong)uVar5 >> 0x20) - (uint)((uint)uVar5 < 4),
                         0x1c,0);
    *(undefined4 *)(param_1 + 0x44) = uVar1;
    return;
  }
  fn_00279ae4(uVar1,uVar2);
  return;
}



undefined4 fn_002fc56c(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  
  iVar4 = 0;
  do {
    uVar1 = fn_006f7a9c(DAT_008977e0);
    fn_00279dc0(uVar1,(int)(short)iVar4);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0xf);
  (**(code **)(**(int **)(param_1 + 0x14) + 0x14))();
  uVar1 = fn_006f7a9c(DAT_008977e0);
  uVar2 = fn_00277960(uVar1,(char *)&DAT_002fd7c8);
  iVar4 = fn_006b7664(uVar1,uVar2);
  iVar3 = fn_00147e6c(iVar4,&DAT_007bf8e4,4);
  if (iVar3 == 0) {
    *(int *)(param_1 + 0x40) = iVar4 + 4;
    uVar5 = fn_0012a25c(uVar1,uVar2);
    uVar1 = fn_00169c20((uint)uVar5 - 4,(int)((ulonglong)uVar5 >> 0x20) - (uint)((uint)uVar5 < 4),
                         0x1c,0);
    *(undefined4 *)(param_1 + 0x44) = uVar1;
  }
  else {
    fn_00279ae4(uVar1,uVar2);
  }
  fn_00121838(DAT_00897800,DAT_00898790,1);
  return 1;
}



void fn_002fabb8(int *param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  uint uVar8;
  bool bVar9;
  uint local_900;
  uint local_8fc;
  int local_8f8;
  short local_8a8;
  
  iVar2 = fn_006ba6e0();
  iVar3 = param_1[1];
  if (iVar3 == 7) {
    iVar3 = fn_006c4720(param_1 + 2);
    if ((iVar3 != 1) || (iVar2 = fn_002fafa4(param_1,iVar2), iVar2 == 0)) goto LAB_002fac74;
    uVar8 = 0;
    pcVar5 = (char *)&DAT_002faf08;
    pcVar6 = (char *)((int)param_1 + 0x1e);
    do {
      uVar8 = uVar8 + 1;
      pcVar7 = pcVar6 + 1;
      *pcVar6 = *pcVar5;
      bVar9 = pcVar5[1] == '\0';
      pcVar5 = pcVar5 + 1;
      pcVar6 = pcVar7;
    } while ((bVar9 || uVar8 < 0x40) && (!bVar9 && uVar8 != 0x3f));
  }
  else {
    if (iVar3 != 8) {
      if (iVar3 == 9) {
        iVar3 = fn_006c4168(param_1 + 2);
        if (iVar3 == 1) {
          local_900 = 0;
          local_8fc = 0;
          local_8f8 = 0;
          fn_002cd1dc(param_1,&local_900);
          iVar3 = fn_002fb190(param_1,&local_900);
          uVar8 = local_900;
          if (local_8fc < local_900) {
            do {
              uVar8 = uVar8 + 0xf0;
            } while (uVar8 != local_8fc);
          }
          iVar4 = (int)((longlong)(int)(local_8f8 - local_900) * -0x77777777 +
                        ((ulonglong)(local_8f8 - local_900) << 0x20) >> 0x20);
          fn_001008c4(local_900,(iVar4 >> 7) - (iVar4 >> 0x1f),0);
          if (iVar3 != 0) {
            uVar8 = 0;
            pcVar5 = (char *)&DAT_002faf44;
            pcVar6 = (char *)((int)param_1 + 0x1e);
            do {
              uVar8 = uVar8 + 1;
              pcVar7 = pcVar6 + 1;
              *pcVar6 = *pcVar5;
              bVar9 = pcVar5[1] == '\0';
              pcVar5 = pcVar5 + 1;
              pcVar6 = pcVar7;
            } while ((bVar9 || uVar8 < 0x40) && (!bVar9 && uVar8 != 0x3f));
            goto LAB_002fac60;
          }
          if (iVar2 == 0) {
            local_900 = 0;
            local_8fc = 0;
            local_8f8 = 0;
            fn_002cd288(param_1,&local_900);
            iVar2 = fn_002fb190(param_1,&local_900);
            uVar8 = local_900;
            if (local_8fc < local_900) {
              do {
                uVar8 = uVar8 + 0xf0;
              } while (uVar8 != local_8fc);
            }
            iVar3 = (int)((longlong)(int)(local_8f8 - local_900) * -0x77777777 +
                          ((ulonglong)(local_8f8 - local_900) << 0x20) >> 0x20);
            fn_001008c4(local_900,(iVar3 >> 7) - (iVar3 >> 0x1f),0);
            if (iVar2 != 0) {
              uVar8 = 0;
              pcVar5 = (char *)&DAT_002faf64;
              pcVar6 = (char *)((int)param_1 + 0x1e);
              do {
                uVar8 = uVar8 + 1;
                pcVar7 = pcVar6 + 1;
                *pcVar6 = *pcVar5;
                bVar9 = pcVar5[1] == '\0';
                pcVar5 = pcVar5 + 1;
                pcVar6 = pcVar7;
              } while ((bVar9 || uVar8 < 0x40) && (!bVar9 && uVar8 != 0x3f));
              goto LAB_002fac60;
            }
          }
        }
      }
      else {
        if (iVar3 != 10) {
          switch(param_1[1]) {
          case 0:
            iVar2 = fn_006c4094(param_1 + 2);
            if (((iVar2 == 1) || (iVar2 = fn_006c4094(param_1 + 2), iVar2 == 2)) &&
               (iVar2 = (**(code **)(*param_1 + 0xc))(param_1), iVar2 != 0)) {
              uVar8 = 0;
              pcVar5 = (char *)&DAT_002cc894;
              pcVar6 = (char *)((int)param_1 + 0x1e);
              do {
                uVar8 = uVar8 + 1;
                pcVar7 = pcVar6 + 1;
                *pcVar6 = *pcVar5;
                bVar9 = pcVar5[1] == '\0';
                pcVar5 = pcVar5 + 1;
                pcVar6 = pcVar7;
              } while ((bVar9 || uVar8 < 0x40) && (!bVar9 && uVar8 != 0x3f));
LAB_002cc6d0:
              *pcVar7 = '\0';
              *(undefined1 *)((int)param_1 + 0x5e) = 1;
              *(undefined1 *)((int)param_1 + 0x5f) = 1;
              return;
            }
            break;
          case 1:
            iVar2 = fn_006c4094(param_1 + 2);
            if ((iVar2 == 2) && (iVar2 = fn_002ccdc0(param_1), iVar2 != 0)) {
              uVar8 = 0;
              pcVar5 = (char *)&DAT_002cc8b4;
              pcVar6 = (char *)((int)param_1 + 0x1e);
              do {
                uVar8 = uVar8 + 1;
                pcVar7 = pcVar6 + 1;
                *pcVar6 = *pcVar5;
                bVar9 = pcVar5[1] == '\0';
                pcVar5 = pcVar5 + 1;
                pcVar6 = pcVar7;
              } while ((bVar9 || uVar8 < 0x40) && (!bVar9 && uVar8 != 0x3f));
              goto LAB_002cc6d0;
            }
            break;
          case 2:
            iVar2 = fn_006c4094(param_1 + 2);
            if ((iVar2 == 3) && (iVar2 = fn_002cd088(param_1), iVar2 != 0)) {
              uVar8 = 0;
              pcVar5 = (char *)&DAT_002cc8d4;
              pcVar6 = (char *)((int)param_1 + 0x1e);
              do {
                uVar8 = uVar8 + 1;
                pcVar7 = pcVar6 + 1;
                *pcVar6 = *pcVar5;
                bVar9 = pcVar5[1] == '\0';
                pcVar5 = pcVar5 + 1;
                pcVar6 = pcVar7;
              } while ((bVar9 || uVar8 < 0x40) && (!bVar9 && uVar8 != 0x3f));
              goto LAB_002cc6d0;
            }
            break;
          case 3:
            iVar2 = fn_006c417c(param_1 + 2);
            if ((iVar2 == 1) && (iVar2 = fn_002ccf74(param_1), iVar2 != 0)) {
              uVar8 = 0;
              pcVar5 = (char *)&DAT_002cc8f0;
              pcVar6 = (char *)((int)param_1 + 0x1e);
              do {
                uVar8 = uVar8 + 1;
                pcVar7 = pcVar6 + 1;
                *pcVar6 = *pcVar5;
                bVar9 = pcVar5[1] == '\0';
                pcVar5 = pcVar5 + 1;
                pcVar6 = pcVar7;
              } while ((bVar9 || uVar8 < 0x40) && (!bVar9 && uVar8 != 0x3f));
              *pcVar7 = '\0';
              *(undefined1 *)((int)param_1 + 0x5e) = 1;
              *(undefined1 *)((int)param_1 + 0x5f) = 0;
            }
            break;
          case 4:
            iVar2 = fn_002cc988(param_1);
            if (iVar2 != 0) {
              uVar8 = 0;
              pcVar5 = (char *)&DAT_002cc910;
              pcVar6 = (char *)((int)param_1 + 0x1e);
              do {
                uVar8 = uVar8 + 1;
                pcVar7 = pcVar6 + 1;
                *pcVar6 = *pcVar5;
                bVar9 = pcVar5[1] == '\0';
                pcVar5 = pcVar5 + 1;
                pcVar6 = pcVar7;
              } while ((bVar9 || uVar8 < 0x40) && (!bVar9 && uVar8 != 0x3f));
              goto LAB_002cc6d0;
            }
            break;
          case 5:
            iVar2 = fn_002cc4d0(param_1);
            if (iVar2 != 0) {
              uVar8 = 0;
              pcVar5 = (char *)&DAT_002cc930;
              pcVar6 = (char *)((int)param_1 + 0x1e);
              do {
                uVar8 = uVar8 + 1;
                pcVar7 = pcVar6 + 1;
                *pcVar6 = *pcVar5;
                bVar9 = pcVar5[1] == '\0';
                pcVar5 = pcVar5 + 1;
                pcVar6 = pcVar7;
              } while ((bVar9 || uVar8 < 0x40) && (!bVar9 && uVar8 != 0x3f));
              goto LAB_002cc6d0;
            }
            break;
          default:
            return;
          }
          iVar2 = (**(code **)(*param_1 + 0x10))(param_1,param_1[1]);
          param_1[1] = iVar2;
          return;
        }
        iVar2 = *(int *)(DAT_00897804 + 8);
        fn_00246e68(&local_900);
        fn_00246e00(&local_900);
        iVar2 = fn_006b5424(&local_900,*(undefined4 *)(iVar2 + 4));
        if ((iVar2 != 0) || (iVar2 = fn_001f82ac(), iVar2 != 0)) {
          fn_00246e74(&local_900);
          uVar8 = 0;
          pcVar5 = (char *)&DAT_002faf88;
          pcVar6 = (char *)((int)param_1 + 0x1e);
          do {
            uVar8 = uVar8 + 1;
            pcVar7 = pcVar6 + 1;
            *pcVar6 = *pcVar5;
            bVar9 = pcVar5[1] == '\0';
            pcVar5 = pcVar5 + 1;
            pcVar6 = pcVar7;
          } while ((bVar9 || uVar8 < 0x40) && (!bVar9 && uVar8 != 0x3f));
          goto LAB_002fac60;
        }
        fn_00246e74(&local_900);
      }
LAB_002fac74:
      iVar2 = (**(code **)(*param_1 + 0x10))(param_1,param_1[1]);
      param_1[1] = iVar2;
      return;
    }
    iVar2 = fn_006c410c(param_1 + 2);
    if ((iVar2 != 1) ||
       (sVar1 = *(short *)((int)param_1 + 0x16), fn_002908c8(&local_900), local_8a8 == sVar1))
    goto LAB_002fac74;
    uVar8 = 0;
    pcVar5 = (char *)&DAT_002faf24;
    pcVar6 = (char *)((int)param_1 + 0x1e);
    do {
      uVar8 = uVar8 + 1;
      pcVar7 = pcVar6 + 1;
      *pcVar6 = *pcVar5;
      bVar9 = pcVar5[1] == '\0';
      pcVar5 = pcVar5 + 1;
      pcVar6 = pcVar7;
    } while ((bVar9 || uVar8 < 0x40) && (!bVar9 && uVar8 != 0x3f));
  }
LAB_002fac60:
  *pcVar7 = '\0';
  *(undefined1 *)((int)param_1 + 0x5e) = 1;
  *(undefined1 *)((int)param_1 + 0x5f) = 1;
  return;
}


