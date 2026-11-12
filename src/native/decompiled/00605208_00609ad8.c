#include "00605208_00609ad8.h"



void fn_00609ad8(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined1 auStack_15c [4];
  int local_158;
  int local_154;
  short local_150;
  short local_14e;
  undefined4 local_4c;
  undefined1 auStack_48 [40];
  
  uVar5 = 0;
  do {
    uVar2 = fn_005ab500(param_1,uVar5);
    if ((int)uVar2 < *(int *)(param_1 + 0x104)) {
      iVar4 = *(int *)(param_1 + 0xe4);
      uVar1 = (*(int *)(iVar4 + 0x28) - *(int *)(iVar4 + 0x24)) / 0x104;
      if (uVar1 <= uVar2) {
        fn_002ff628(9,&DAT_008c7621,&DAT_008c7621,uVar2,uVar1);
      }
      fn_0017821c(auStack_15c,*(int *)(iVar4 + 0x24) + uVar2 * 0x104,0x104);
      if (local_158 == 0) {
        iVar4 = *(int *)(param_1 + 0x7c) - *(int *)(param_1 + 0x78);
        uVar3 = DAT_00890d38;
      }
      else {
        iVar4 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),local_158);
        if (*(byte *)(iVar4 + 0x2e) < 10) {
          iVar4 = *(int *)(param_1 + 0x7c) - *(int *)(param_1 + 0x78);
          uVar3 = DAT_00890d38;
        }
        else {
          iVar4 = *(int *)(param_1 + 0x7c) - *(int *)(param_1 + 0x78);
          uVar3 = DAT_00890d30;
        }
      }
      if ((uint)(iVar4 >> 2) <= uVar5) {
        fn_002ff628(9,&DAT_008c7653,&DAT_008c7653,uVar5,iVar4 >> 2);
      }
      local_4c = uVar3;
      fn_0031b590(*(undefined4 *)(*(int *)(param_1 + 0x78) + uVar5 * 4),0,&local_4c);
      iVar4 = (int)local_150;
      uVar3 = fn_00661094(iVar4);
      uVar3 = fn_00230e40(uVar3,1);
      fn_0031b78c(param_1,uVar5,8,uVar3);
      uVar3 = fn_0015b064(iVar4);
      fn_0031b78c(param_1,uVar5,0,uVar3);
      if (local_154 == 0) {
        iVar4 = *(int *)(param_1 + 0x7c) - *(int *)(param_1 + 0x78);
        uVar3 = DAT_00890d38;
      }
      else {
        iVar4 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),local_154);
        if (*(byte *)(iVar4 + 0x2e) < 10) {
          iVar4 = *(int *)(param_1 + 0x7c) - *(int *)(param_1 + 0x78);
          uVar3 = DAT_00890d38;
        }
        else {
          iVar4 = *(int *)(param_1 + 0x7c) - *(int *)(param_1 + 0x78);
          uVar3 = DAT_00890d30;
        }
      }
      if ((uint)(iVar4 >> 2) <= uVar5) {
        fn_002ff628(9,&DAT_008c7653,&DAT_008c7653,uVar5,iVar4 >> 2);
      }
      local_4c = uVar3;
      fn_0031b590(*(undefined4 *)(*(int *)(param_1 + 0x78) + uVar5 * 4),6,&local_4c);
      fn_00231700(auStack_48,0x10,(int)local_14e,1);
      fn_0031b78c(param_1,uVar5,6,auStack_48);
    }
    else if (8 < *(int *)(param_1 + 0x104)) {
      uVar2 = *(int *)(param_1 + 0x7c) - *(int *)(param_1 + 0x78) >> 2;
      if (uVar2 <= uVar5) {
        fn_002ff628(9,&DAT_008c7653,&DAT_008c7653,uVar5,uVar2);
      }
      fn_0031b3c4(*(undefined4 *)(*(int *)(param_1 + 0x78) + uVar5 * 4),0xffffffff);
    }
    uVar5 = uVar5 + 1;
  } while ((int)uVar5 < 9);
  return;
}



int fn_0060917c(undefined4 *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  float in_s0;
  
  *param_1 = &DAT_0084faa8;
  iVar1 = fn_00101a1c(param_1 + 1,&LAB_00608e88,0x10,2);
  *(undefined4 *)(iVar1 + 0x24) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x28) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x2c) = 0;
  uVar2 = fn_0016dd18(param_2,10);
  *(undefined4 *)(iVar1 + 0x24) = uVar2;
  uVar2 = fn_00313844(param_2,0x10,1,1,(&DAT_007ba890)[(int)in_s0]);
  *(undefined4 *)(iVar1 + 0x28) = uVar2;
  uVar2 = fn_00178f9c(param_2,uVar2);
  *(undefined4 *)(iVar1 + 0x20) = uVar2;
  piVar3 = (int *)fn_0017dd54(uVar2,(char *)&DAT_0085c46c,1);
  *(int **)(iVar1 + 0x30) = piVar3;
  if (param_3 == 0) {
    (**(code **)(*piVar3 + 0x5c))();
  }
  else {
    (**(code **)(*piVar3 + 0x68))();
  }
  uVar6 = 0;
  do {
    piVar3 = *(int **)(*(int *)(iVar1 + 0x20) + 0x10);
    piVar3 = (int *)(**(code **)(*piVar3 + 0x2c))(piVar3,(&DAT_007ba894)[uVar6],1);
    if (piVar3 != (int *)0x0) {
      puVar4 = (undefined4 *)(**(code **)(*piVar3 + 8))(piVar3);
      do {
        if (puVar4 == &DAT_0089a92c) goto LAB_006092ac;
        puVar4 = (undefined4 *)*puVar4;
      } while (puVar4 != (undefined4 *)0x0);
    }
    piVar3 = (int *)0x0;
LAB_006092ac:
    iVar5 = iVar1 + -4 + uVar6 * 0x10;
    *(int **)(iVar5 + 4) = piVar3;
    *(byte *)(piVar3 + 0x11) = *(byte *)(piVar3 + 0x11) & 0xfe;
    piVar3 = *(int **)(*(int *)(iVar1 + 0x20) + 0x10);
    uVar2 = (**(code **)(*piVar3 + 0x2c))(piVar3,(&DAT_007ba89c)[uVar6],1);
    uVar6 = uVar6 + 1;
    *(undefined4 *)(iVar5 + 8) = uVar2;
    *(undefined4 *)(iVar5 + 0xc) = 0;
    if (1 < uVar6) {
      return iVar1 + -4;
    }
  } while( true );
}



undefined4 fn_00607cec(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  short *psVar5;
  short *psVar6;
  short *psVar7;
  int iVar8;
  char *pcVar9;
  uint uVar10;
  bool bVar11;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b4;
  undefined1 auStack_ac [12];
  undefined1 auStack_a0 [4];
  undefined4 local_9c;
  undefined4 local_94;
  undefined1 local_90;
  undefined1 auStack_8c [4];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [20];
  undefined1 auStack_6c [36];
  short asStack_48 [20];
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [4];
  
  puVar1 = (undefined4 *)fn_001f74d8(param_1,0x2d);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_008951dc) goto LAB_00607d3c;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_00607d3c:
  *(undefined4 **)(param_1 + 0xe4) = puVar1;
  puVar1 = *(undefined4 **)(param_1 + 0x18);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_008944e4) goto LAB_00607d78;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_00607d78:
  *(undefined4 *)(param_1 + 0xe8) = puVar1[2];
  uVar3 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc));
  fn_0020bbc4(auStack_20,uVar3);
  uVar4 = fn_0028b860(*(undefined4 *)(DAT_00897804 + 0xc),*(undefined4 *)(param_1 + 0xe8));
  psVar5 = (short *)fn_00230a84(uVar4,0);
  fn_00231128(auStack_6c,0x11,uVar3,0);
  uVar10 = 0;
  psVar6 = asStack_48;
  do {
    uVar10 = uVar10 + 1;
    psVar7 = psVar6 + 1;
    *psVar6 = *psVar5;
    bVar11 = psVar5[1] == 0;
    psVar6 = psVar7;
    psVar5 = psVar5 + 1;
  } while ((bVar11 || uVar10 < 0x12) && (!bVar11 && uVar10 != 0x11));
  *psVar7 = 0;
  uVar3 = fn_00100b58(auStack_6c);
  fn_00231d04(asStack_48,0x12,auStack_6c,uVar3);
  iVar8 = fn_006bfffc(auStack_1c);
  if (iVar8 == 0) {
    pcVar9 = (char *)&DAT_00607f30;
  }
  else {
    pcVar9 = (char *)&DAT_00607f1c;
  }
  uVar3 = fn_0022f750(pcVar9);
  fn_00397774(&local_c8);
  local_c8 = DAT_00894650;
  local_c4 = DAT_00894654;
  uVar4 = fn_0022f750((char *)&DAT_00607f44);
  fn_00147974(auStack_ac,uVar4);
  local_bc = 0;
  local_c0 = 2;
  local_b4 = 2;
  local_94 = 2;
  local_9c = 0;
  local_90 = 1;
  fn_00147974(auStack_88,asStack_48);
  fn_00147974(auStack_80,uVar3);
  fn_00397618(param_1,&local_c8);
  fn_00100414(auStack_8c,&LAB_0059e0e0,8,4);
  iVar8 = fn_001588d4(auStack_a0);
  iVar8 = fn_001588d4(iVar8 + -4);
  iVar8 = fn_001588d4(iVar8 + -4);
  fn_001588d4(iVar8 + -4);
  return 1;
}



void fn_00605208(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  cVar1 = *(char *)(param_1 + 0xe);
  if (cVar1 == '\0') {
    iVar3 = *(int *)(param_1 + 0x14);
    while (iVar3 < 0x61) {
      if (iVar3 == 0xc || iVar3 == 0xd) {
        uVar2 = fn_00182994(DAT_008977e4);
        iVar3 = fn_00174c34(uVar2,*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 4),
                             *(undefined4 *)(param_1 + 8));
        if (iVar3 != 0) {
          uVar2 = fn_00182994(DAT_008977e4);
          iVar3 = fn_00174b40(uVar2,*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 4),
                               *(undefined4 *)(param_1 + 8));
          if (iVar3 != 0) {
            *(undefined4 *)(param_1 + 0x10) = 0x1e;
            *(undefined1 *)(param_1 + 0xe) = 1;
            return;
          }
          uVar2 = fn_00182994(DAT_008977e4);
          iVar3 = fn_0017591c(uVar2,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
          if (iVar3 == 0) goto LAB_00605354;
LAB_006053c0:
          fn_002a1480(*(undefined4 *)(param_1 + 8),(int)*(char *)(param_1 + 0xc),
                       *(undefined4 *)(param_1 + 4));
        }
      }
      else if (iVar3 == 0x19) {
        iVar5 = 0;
        uVar2 = fn_00182994(DAT_008977e4);
        iVar3 = fn_00174c34(uVar2,*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 4),
                             *(undefined4 *)(param_1 + 8));
        if (iVar3 != 0) {
          uVar2 = fn_00182994(DAT_008977e4);
          iVar5 = fn_00174b40(uVar2,*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 4),
                               *(undefined4 *)(param_1 + 8));
        }
        uVar2 = fn_00182994(DAT_008977e4);
        iVar4 = fn_00174d30(uVar2,*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 4),
                             *(undefined4 *)(param_1 + 8));
        if (iVar4 == 0) {
          if ((iVar3 != 0) && (iVar5 == 0)) {
            uVar2 = fn_00182994(DAT_008977e4);
            iVar5 = fn_0017591c(uVar2,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
            if (iVar5 == 0) {
              if (iVar3 < 1) {
                iVar3 = fn_0029f0d8(*(undefined4 *)(param_1 + 0x14));
              }
              else {
                iVar3 = fn_0029eac4();
              }
              if (iVar3 != 0) {
                uVar2 = fn_00182994(DAT_008977e4);
                uVar2 = fn_001659c0(uVar2,(int)*(char *)(param_1 + 4),(int)*(char *)(param_1 + 8));
                fn_0017a270(uVar2,0);
              }
            }
            else {
              uVar2 = fn_00182994(DAT_008977e4);
              iVar3 = fn_0017591c(uVar2,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
              if (iVar3 != 0) goto LAB_006053c0;
            }
          }
        }
        else {
LAB_00605354:
          fn_0029fc58(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),
                       (int)*(char *)(param_1 + 0xc),(int)*(char *)(param_1 + 0xd));
        }
      }
      iVar3 = *(int *)(param_1 + 0x14) + 1;
      *(int *)(param_1 + 0x14) = iVar3;
    }
    goto LAB_006053e4;
  }
  if (cVar1 == '\x01') {
    iVar3 = *(int *)(param_1 + 0x10) + -1;
    *(int *)(param_1 + 0x10) = iVar3;
    if (iVar3 < 1) {
      *(undefined1 *)(param_1 + 0xe) = 2;
    }
    return;
  }
  if (cVar1 != '\x02') {
    return;
  }
  uVar2 = fn_00182994(DAT_008977e4);
  iVar3 = fn_00174c34(uVar2,*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 4),
                       *(undefined4 *)(param_1 + 8));
  if (*(int *)(param_1 + 8) == 0) {
    iVar4 = *(int *)(param_1 + 0x14);
    bVar6 = iVar4 == 0xc;
    iVar5 = iVar4 + -0xc;
    if (!bVar6) {
      iVar5 = iVar3;
    }
    if ((!bVar6 && iVar3 != 0) && iVar5 < 0 == (bVar6 && SBORROW4(iVar4,0xc))) {
      iVar3 = fn_002a0564(iVar4,*(undefined4 *)(param_1 + 4));
      if (iVar3 != 0) {
        fn_0029f9cc(*(int *)(param_1 + 0x14) + 100);
      }
      goto LAB_00605500;
    }
    if (-1 < iVar3) goto LAB_006054f8;
    iVar3 = fn_002a0820(iVar4,*(undefined4 *)(param_1 + 4));
    if (iVar3 != 0) {
      fn_0029f9cc(*(int *)(param_1 + 0x14) + 300);
    }
LAB_00605520:
    iVar3 = fn_0029e540(*(undefined4 *)(param_1 + 0x14));
    if (iVar3 == 0) goto LAB_0060553c;
LAB_00605534:
    **(int **)(param_1 + 0x18) = iVar3;
  }
  else {
LAB_006054f8:
    if (iVar3 < 1) {
      if (iVar3 < 0) goto LAB_00605520;
    }
    else {
LAB_00605500:
      iVar3 = fn_0029e4bc(*(undefined4 *)(param_1 + 0x14));
      if (iVar3 != 0) goto LAB_00605534;
    }
  }
LAB_0060553c:
  if (*(int *)(param_1 + 0x14) == 0xc) {
    fn_0029f9cc(0x70);
  }
  uVar2 = fn_00182994(DAT_008977e4);
  iVar3 = fn_0017591c(uVar2,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
  if (iVar3 == 0) {
    fn_0029fc58(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),
                 (int)*(char *)(param_1 + 0xc),(int)*(char *)(param_1 + 0xd));
  }
  else {
    fn_002a1480(*(undefined4 *)(param_1 + 8),(int)*(char *)(param_1 + 0xc),
                 *(undefined4 *)(param_1 + 4));
  }
  iVar3 = *(int *)(param_1 + 0x14) + 1;
  *(int *)(param_1 + 0x14) = iVar3;
  if (iVar3 < 0x61) {
    *(undefined1 *)(param_1 + 0xe) = 0;
    return;
  }
LAB_006053e4:
  *(undefined1 *)(param_1 + 0xe) = 3;
  return;
}


