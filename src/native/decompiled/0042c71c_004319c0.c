#include "0042c71c_004319c0.h"



undefined4 fn_004319c0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  int *piVar10;
  undefined4 *puVar11;
  uint uVar12;
  undefined4 local_94;
  undefined4 local_90;
  undefined1 local_7e;
  undefined1 local_6a;
  undefined1 local_58;
  undefined1 local_56;
  undefined4 *local_40;
  undefined4 local_3c;
  undefined4 *local_30;
  undefined1 local_2c;
  undefined4 local_28;
  
  uVar12 = *(uint *)(param_1[0x45] + 0xc);
  if ((uVar12 & 1) != 0) {
    param_1[0x49] = *(int *)(param_1[0x45] + 8);
  }
  fn_003808c0(&local_94);
  local_94 = DAT_008946b4;
  local_90 = DAT_008946b8;
  local_7e = 1;
  local_6a = 1;
  local_56 = 1;
  local_58 = 1;
  local_28 = fn_0016ba34(DAT_00897800,DAT_00898228,
                          *(undefined4 *)(&DAT_008946c8 + param_1[0x52] * 4),0);
  iVar1 = fn_00100b58();
  puVar11 = (undefined4 *)0x0;
  if (iVar1 == 0) {
    piVar4 = local_40 + -3;
    iVar1 = *piVar4;
    if (iVar1 == 0) {
      local_40[-1] = 0;
      *(undefined2 *)local_40 = 0;
    }
    else {
      if ((local_40 != &DAT_008f9cf4) &&
         ((iVar1 == -1 || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar1 + -1, iVar1 == 0)))))) {
        fn_001008c4(local_40 + -3,local_40[-2] + 8,0);
      }
      local_40 = &DAT_008f9cf4;
    }
  }
  else {
    fn_00177c88(&local_40,0,local_40[-1],local_28,iVar1,0,iVar1);
  }
  local_3c = 0x46;
  uVar2 = fn_0022f584((char *)&DAT_00431d94,0);
  iVar1 = fn_00100b58();
  if (iVar1 == 0) {
    piVar4 = local_30 + -3;
    iVar1 = *piVar4;
    if (iVar1 == 0) {
      local_30[-1] = 0;
      *(undefined2 *)local_30 = 0;
    }
    else {
      if ((local_30 != &DAT_008f9cf4) &&
         ((iVar1 == -1 || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar1 + -1, iVar1 == 0)))))) {
        fn_001008c4(local_30 + -3,local_30[-2] + 8,0);
      }
      local_30 = &DAT_008f9cf4;
    }
  }
  else {
    fn_00177c88(&local_30,0,local_30[-1],uVar2,iVar1,0,iVar1);
  }
  local_2c = 0;
  if ((uVar12 & 8) != 0) {
    fn_00433bb4(param_1,&local_94);
  }
  fn_0037ffb4(param_1,&local_94);
  iVar1 = fn_00178f9c(param_1[0x20],param_1[0x22]);
  uVar2 = fn_00172c98(iVar1,(char *)&DAT_00431db4);
  iVar3 = fn_00145b00(0x30,&DAT_00812c8c);
  piVar4 = (int *)0x0;
  if (iVar3 != 0) {
    piVar4 = (int *)fn_002b20c0(iVar3,param_1[1],uVar2,1,param_1[0x12],1,0);
  }
  piVar10 = (int *)param_1[0x46];
  if (piVar10 != piVar4) {
    if (piVar10 != (int *)0x0) {
      (**(code **)(*piVar10 + 4))(piVar10);
    }
    param_1[0x46] = (int)piVar4;
  }
  (**(code **)(*(int *)param_1[0x46] + 0x10))();
  fn_002b20a4(param_1[0x46],0);
  fn_0068b14c(param_1[0x46],1);
  uVar2 = fn_00172c98(iVar1,(char *)&DAT_00431dc4);
  iVar3 = fn_00145b00(0x30,&DAT_00812c8c);
  if (iVar3 == 0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)fn_002b20c0(iVar3,param_1[1],uVar2,1,param_1[0x12],1,0);
  }
  piVar10 = (int *)param_1[0x47];
  if (piVar10 != piVar4) {
    if (piVar10 != (int *)0x0) {
      (**(code **)(*piVar10 + 4))();
    }
    param_1[0x47] = (int)piVar4;
  }
  (**(code **)(*(int *)param_1[0x47] + 0x10))();
  fn_002b20a4(param_1[0x47],0);
  fn_0068b14c(param_1[0x47],1);
  iVar3 = fn_00145b00(0xe4,&DAT_00812c8c);
  piVar4 = (int *)0x0;
  if (iVar3 != 0) {
    piVar4 = (int *)fn_001caa80(iVar3,param_1[1],1);
  }
  piVar10 = (int *)param_1[0x48];
  if (piVar10 != piVar4) {
    if (piVar10 != (int *)0x0) {
      (**(code **)(*piVar10 + 4))(piVar10);
    }
    param_1[0x48] = (int)piVar4;
  }
  *(int **)(param_1[0x48] + 8) = param_1;
  (**(code **)(*(int *)param_1[0x48] + 0x24))((int *)param_1[0x48],2,1);
  iVar3 = 0;
  *(undefined1 *)(param_1[0x48] + 0x45) = 0;
  *(undefined1 *)(param_1[0x48] + 0x44) = 1;
  *(undefined4 *)(param_1[0x48] + 0x10) = 0x100094e;
LAB_00431e04:
  iVar5 = param_1[0x46];
  do {
    uVar2 = *(undefined4 *)(iVar5 + 0x1c);
    do {
      fn_001c9d44(param_1[0x48],iVar3,uVar2,0);
      iVar3 = iVar3 + 1;
      if (1 < iVar3) {
        *(undefined1 *)(param_1[0x48] + 0x46) = 0;
        fn_00245330(param_1,param_1[0x48]);
        if ((uVar12 & 1) == 0) {
          if ((uVar12 & 0x30) != 0) {
            uVar2 = fn_006b846c(*(undefined4 *)(DAT_00897804 + 0xc));
            fn_003807f4(param_1,uVar2,0);
            uVar2 = fn_006b8600(*(undefined4 *)(DAT_00897804 + 0xc));
            fn_003807f4(param_1,uVar2,0,1);
          }
        }
        else {
          pbVar6 = (byte *)fn_002b0948(*(undefined4 *)(DAT_00897804 + 0x10),param_1[0x49]);
          if ((*pbVar6 & 1) == 0) {
            uVar2 = 0;
          }
          else {
            uVar2 = *(undefined4 *)(pbVar6 + 0x2c);
          }
          fn_003807f4(param_1,uVar2,0);
          if ((*pbVar6 & 1) == 0) {
            uVar2 = 0;
          }
          else {
            uVar2 = *(undefined4 *)(pbVar6 + 0x30);
          }
          fn_003807f4(param_1,uVar2,0,1);
        }
        fn_004318ac(param_1);
        iVar3 = param_1[0x3c];
        *(undefined1 *)(iVar3 + 0x81) = 0;
        fn_0031f3f4(iVar3,0);
        iVar3 = param_1[0x3c];
        *(undefined1 *)(iVar3 + 0x83) = 0;
        fn_0031f954(iVar3,0);
        if ((uVar12 & 8) == 0) goto LAB_00431ff0;
        param_1[0x54] = *(int *)(param_1[0x45] + 0x18);
        puVar7 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1);
        if (puVar7 == (undefined4 *)0x0) goto LAB_00431f7c;
        puVar8 = (undefined4 *)(**(code **)*puVar7)(puVar7);
        goto LAB_00431f60;
      }
      uVar2 = 0;
      if (iVar3 == 0) goto LAB_00431e04;
    } while (iVar3 != 1);
    iVar5 = param_1[0x47];
  } while( true );
  while (puVar8 = (undefined4 *)*puVar8, puVar8 != (undefined4 *)0x0) {
LAB_00431f60:
    if (puVar8 == &DAT_008963ac) {
      puVar11 = puVar7;
      break;
    }
  }
LAB_00431f7c:
  param_1[0x55] = (int)puVar11;
  uVar2 = fn_0022f750((char *)&DAT_00432100);
  fn_0031fe38(param_1[0x3c],uVar2);
  piVar4 = *(int **)(iVar1 + 0x10);
  iVar1 = (**(code **)(*piVar4 + 0x2c))(piVar4,(char *)&DAT_0043211c,1);
  iVar3 = (**(code **)(*piVar4 + 0x2c))(piVar4,(char *)&DAT_0043212c,1);
  *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe;
  *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xfe;
LAB_00431ff0:
  if ((*(uint *)(param_1[0x45] + 0xc) & 8) == 0) {
    if ((*(uint *)(param_1[0x45] + 0xc) & 4) != 0) {
      fn_00433620(param_1);
    }
  }
  else {
    fn_0043243c();
  }
  iVar1 = fn_001588d4(&local_30);
  iVar1 = fn_001588d4(iVar1 + -4);
  iVar1 = fn_001588d4(iVar1 + -0xc);
  uVar9 = *(uint *)(iVar1 + -0x24);
  uVar12 = uVar9;
  if (*(uint *)(iVar1 + -0x20) < uVar9) {
    do {
      uVar12 = uVar12 + 4;
    } while (uVar12 != *(uint *)(iVar1 + -0x20));
  }
  fn_001008c4(uVar9,(int)(*(int *)(iVar1 + -0x1c) - uVar9) >> 2,0);
  uVar9 = *(uint *)(iVar1 + -0x38);
  uVar12 = uVar9;
  if (*(uint *)(iVar1 + -0x34) < uVar9) {
    do {
      uVar12 = uVar12 + 4;
    } while (uVar12 != *(uint *)(iVar1 + -0x34));
  }
  fn_001008c4(uVar9,(int)(*(int *)(iVar1 + -0x30) - uVar9) >> 2,0);
  uVar9 = *(uint *)(iVar1 + -0x4c);
  uVar12 = uVar9;
  if (*(uint *)(iVar1 + -0x48) < uVar9) {
    do {
      uVar12 = uVar12 + 4;
    } while (uVar12 != *(uint *)(iVar1 + -0x48));
  }
  fn_001008c4(uVar9,(int)(*(int *)(iVar1 + -0x44) - uVar9) >> 2,0);
  return 1;
}



undefined4 fn_0042c71c(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  undefined *puVar8;
  char *pcVar9;
  int *piVar10;
  undefined4 *puVar11;
  uint uVar12;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  
  puVar11 = *(undefined4 **)(param_1 + 0x18);
  if (puVar11 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar11)(puVar11);
    do {
      if (puVar2 == &DAT_008939d8) goto LAB_0042c768;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar11 = (undefined4 *)0x0;
LAB_0042c768:
  *(undefined4 **)(param_1 + 100) = puVar11;
  local_40 = 1;
  uVar3 = fn_001481c8(*(undefined4 *)(param_1 + 0x68),DAT_00893968,&DAT_0042cb18,1);
  *(undefined4 *)(param_1 + 0x6c) = uVar3;
  local_40 = 1;
  local_38 = 0;
  local_3c = 1;
  uVar3 = fn_001480d0(*(undefined4 *)(param_1 + 0x68),uVar3,DAT_0089396c,&DAT_0042cb20);
  *(undefined4 *)(param_1 + 0x70) = uVar3;
  iVar4 = fn_00178f9c(*(undefined4 *)(param_1 + 0x68),uVar3);
  uVar3 = *(undefined4 *)(iVar4 + 0x10);
  uVar12 = 0;
  if (*(int *)(param_1 + 0x78) - *(int *)(param_1 + 0x74) >> 4 != 0) {
    do {
      fn_001028d4(&local_40,(char *)&DAT_0042cb24,uVar12);
      uVar5 = fn_0068897c(uVar3,&local_40);
      *(undefined4 *)(*(int *)(param_1 + 0x74) + uVar12 * 0x10) = uVar5;
      fn_001028d4(&local_40,(char *)&DAT_0042cb34,uVar12);
      uVar5 = fn_0068897c(uVar3,&local_40);
      *(undefined4 *)(*(int *)(param_1 + 0x74) + uVar12 * 0x10 + 4) = uVar5;
      fn_001028d4(&local_40,(char *)&DAT_0042cb44,uVar12);
      uVar5 = fn_0068897c(uVar3,&local_40);
      *(undefined4 *)(*(int *)(param_1 + 0x74) + uVar12 * 0x10 + 8) = uVar5;
      fn_001028d4(&local_40,(char *)&DAT_0042cb54,uVar12);
      uVar5 = fn_0068897c(uVar3,&local_40);
      iVar6 = uVar12 * 0x10;
      uVar12 = uVar12 + 1;
      *(undefined4 *)(*(int *)(param_1 + 0x74) + iVar6 + 0xc) = uVar5;
    } while (uVar12 < (uint)(*(int *)(param_1 + 0x78) - *(int *)(param_1 + 0x74) >> 4));
  }
  iVar6 = fn_00145b00(0x5c,&DAT_00812c8c);
  piVar7 = (int *)0x0;
  if (iVar6 != 0) {
    piVar7 = (int *)fn_0025e920(iVar6,*(undefined4 *)(param_1 + 4),uVar3);
  }
  piVar10 = *(int **)(param_1 + 0x90);
  if (piVar10 != piVar7) {
    if (piVar10 != (int *)0x0) {
      (**(code **)(*piVar10 + 4))(piVar10);
    }
    *(int **)(param_1 + 0x90) = piVar7;
  }
  (**(code **)(**(int **)(param_1 + 0x90) + 0x10))
            (*(int **)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x48));
  uVar3 = fn_00172c98(iVar4,(char *)&DAT_0042cb6c);
  iVar6 = fn_00145b00(0x88,&DAT_00812c8c);
  piVar7 = (int *)0x0;
  if (iVar6 != 0) {
    local_40 = *(undefined4 *)(param_1 + 0x48);
    piVar7 = (int *)fn_0031fee0(iVar6,*(undefined4 *)(param_1 + 4),uVar3,1);
  }
  piVar10 = *(int **)(param_1 + 0x94);
  if (piVar10 != piVar7) {
    if (piVar10 != (int *)0x0) {
      (**(code **)(*piVar10 + 4))(piVar10);
    }
    *(int **)(param_1 + 0x94) = piVar7;
  }
  (**(code **)(**(int **)(param_1 + 0x94) + 0x10))();
  cVar1 = *(char *)(*(int *)(param_1 + 100) + 8);
  if (((cVar1 == '\0') || (cVar1 == '\x01')) || (cVar1 == '\x02')) {
    puVar8 = (undefined *)fn_0022f750();
  }
  else {
    puVar8 = &DAT_0042d048;
  }
  fn_0031fe38(*(undefined4 *)(param_1 + 0x94),puVar8);
  uVar3 = fn_00172c98(iVar4,(char *)&DAT_0042cb8c);
  iVar6 = fn_00145b00(0x30,&DAT_00812c8c);
  piVar7 = (int *)0x0;
  if (iVar6 != 0) {
    local_40 = *(undefined4 *)(param_1 + 0x48);
    local_38 = 0;
    local_3c = 1;
    piVar7 = (int *)fn_002b20c0(iVar6,*(undefined4 *)(param_1 + 4),uVar3,1);
  }
  **(undefined4 **)(param_1 + 0x98) = piVar7;
  (**(code **)(*piVar7 + 0x10))();
  fn_002b20a4(**(undefined4 **)(param_1 + 0x98),0);
  cVar1 = *(char *)(*(int *)(param_1 + 100) + 8);
  if (cVar1 == '\0') {
LAB_0042ca64:
    pcVar9 = (char *)&DAT_006ce1f8;
  }
  else {
    if (cVar1 != '\x01') {
      if (cVar1 != '\x02') {
        puVar8 = &DAT_0042d048;
        goto LAB_0042ca70;
      }
      goto LAB_0042ca64;
    }
    pcVar9 = (char *)&DAT_006ce1ec;
  }
  puVar8 = (undefined *)fn_0022f750(pcVar9);
LAB_0042ca70:
  fn_002b1fa0(**(undefined4 **)(param_1 + 0x98),puVar8,0);
  uVar3 = fn_00172c98(iVar4,(char *)&DAT_0042cba0);
  iVar4 = fn_00145b00(0x30,&DAT_00812c8c);
  piVar7 = (int *)0x0;
  if (iVar4 != 0) {
    local_40 = *(undefined4 *)(param_1 + 0x48);
    local_38 = 0;
    local_3c = 1;
    piVar7 = (int *)fn_002b20c0(iVar4,*(undefined4 *)(param_1 + 4),uVar3,1);
  }
  *(int **)(*(int *)(param_1 + 0x98) + 4) = piVar7;
  (**(code **)(*piVar7 + 0x10))();
  fn_002b20a4(*(undefined4 *)(*(int *)(param_1 + 0x98) + 4),0);
  iVar4 = fn_00145b00(0xe4,&DAT_00812c8c);
  piVar7 = (int *)0x0;
  if (iVar4 != 0) {
    piVar7 = (int *)fn_001caa80(iVar4,*(undefined4 *)(param_1 + 4),0);
  }
  piVar10 = *(int **)(param_1 + 0xa4);
  if (piVar10 != piVar7) {
    if (piVar10 != (int *)0x0) {
      (**(code **)(*piVar10 + 4))(piVar10);
    }
    *(int **)(param_1 + 0xa4) = piVar7;
  }
  *(int *)(*(int *)(param_1 + 0xa4) + 8) = param_1;
  (**(code **)(**(int **)(param_1 + 0xa4) + 0x24))(*(int **)(param_1 + 0xa4),2,1);
  *(undefined1 *)(*(int *)(param_1 + 0xa4) + 0x45) = 0;
  *(undefined1 *)(*(int *)(param_1 + 0xa4) + 0x44) = 1;
  *(undefined4 *)(*(int *)(param_1 + 0xa4) + 0x10) = 0x100094e;
  (**(code **)(**(int **)(param_1 + 0xa4) + 0x2c))(*(int **)(param_1 + 0xa4),0,0);
  uVar12 = 0;
  if (*(int *)(param_1 + 0x9c) - *(int *)(param_1 + 0x98) >> 2 != 0) {
    do {
      fn_001c9d44(*(undefined4 *)(param_1 + 0xa4),uVar12,
                   *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x98) + uVar12 * 4) + 0x1c),0);
      uVar12 = uVar12 + 1;
    } while (uVar12 < (uint)(*(int *)(param_1 + 0x9c) - *(int *)(param_1 + 0x98) >> 2));
  }
  fn_0042c3c0(param_1);
  fn_0042cefc(param_1);
  fn_0042cda0(param_1);
  return 1;
}


