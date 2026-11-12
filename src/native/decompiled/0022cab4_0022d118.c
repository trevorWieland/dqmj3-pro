#include "0022cab4_0022d118.h"



void fn_0022d118(undefined4 *param_1)

{
  *param_1 = &DAT_0081cd10;
  if ((int *)param_1[0x25] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x25] + 4))();
  }
  if ((int *)param_1[0x1e] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x1e] + 4))();
  }
  fn_0068ad5c(param_1);
  return;
}



void fn_0022d114(undefined4 *param_1)

{
  *param_1 = &DAT_0081cd10;
  if ((int *)param_1[0x25] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x25] + 4))();
  }
  if ((int *)param_1[0x1e] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x1e] + 4))();
  }
  fn_0068ad5c(param_1);
  return;
}



undefined4 * fn_0022cfac(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  
  puVar1 = (undefined4 *)fn_0068ab5c();
  *puVar1 = &DAT_0081cd10;
  uVar4 = *(undefined4 *)(param_2 + 8);
  puVar1[0x1a] = 0xffffffff;
  puVar1[0x19] = uVar4;
  puVar1[0x1b] = 0xffffffff;
  puVar1[0x1c] = 0xffffffff;
  puVar1[0x1d] = 0;
  iVar2 = fn_00145b00(0x20,&DAT_00812c8c);
  uVar4 = 0;
  if (iVar2 != 0) {
    uVar4 = fn_00689144();
  }
  puVar1[0x1e] = uVar4;
  puVar1[0x1f] = 0;
  puVar1[0x20] = 1;
  puVar1[0x21] = 0;
  puVar1[0x22] = 0;
  puVar1[0x23] = 0;
  puVar1[0x24] = 0;
  puVar1[0x25] = 0;
  puVar1[0x26] = 0;
  iVar2 = fn_00689b18(puVar1);
  iVar6 = *(int *)(iVar2 + 0x14);
  iVar2 = *(int *)(iVar6 + 0x28);
  do {
    if (iVar2 == **(int **)(iVar6 + 0x28)) {
      return puVar1;
    }
    piVar5 = (int *)**(undefined4 **)(*(int *)(iVar2 + 4) + 8);
    if (piVar5 != (int *)0x0) {
      puVar3 = (undefined4 *)(**(code **)(*piVar5 + 0xc))(piVar5);
      do {
        if (puVar3 == &DAT_008951fc) {
          if (piVar5 != (int *)0x0) {
            iVar2 = piVar5[0x1a];
            puVar1[0x26] = iVar2;
            puVar1[0x22] = *(undefined4 *)(iVar2 + 0x10);
            return puVar1;
          }
          break;
        }
        puVar3 = (undefined4 *)*puVar3;
      } while (puVar3 != (undefined4 *)0x0);
    }
    iVar2 = *(int *)(iVar2 + 4);
  } while( true );
}



void fn_0022cf90(int param_1)

{
  if (*(int *)(param_1 + 0x6c) == -1) {
    return;
  }
  fn_00178eec(*(undefined4 *)(param_1 + 100),*(int *)(param_1 + 0x6c),0);
  return;
}



void fn_0022cf0c(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (0 < *(int *)(*(int *)(param_1 + 0x78) + 0x1c)) {
    fn_006890bc(*(undefined4 *)(param_1 + 0x78));
  }
  if (*(int *)(param_1 + 0x6c) != -1) {
    iVar1 = *(int *)(param_1 + 0x78);
    iVar2 = fn_00178f9c(*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x6c));
    iVar2 = *(int *)(iVar2 + 0x10);
    uVar3 = *(undefined4 *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    *(undefined4 *)(iVar2 + 0x1c) = *(undefined4 *)(iVar1 + 4);
    *(undefined4 *)(iVar2 + 0x20) = uVar3;
    *(undefined4 *)(iVar2 + 0x24) = uVar4;
    *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xef | 0x10;
  }
  if (*(int **)(param_1 + 0x94) == (int *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0022cf84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x94) + 0x14))();
  return;
}



void fn_0022cecc(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x94) == 0) {
    return;
  }
  uVar1 = 0;
  if (*(int *)(param_1 + 0x98) != 0) {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x98) + 0x14);
  }
  fn_0031c810(*(int *)(param_1 + 0x94),*(undefined4 *)(param_1 + 0x88),uVar1,
               *(undefined4 *)(param_1 + 0x84),*(undefined4 *)(param_1 + 0x80));
  return;
}



undefined4 fn_0022ce1c(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  char cVar4;
  uint in_fpscr;
  
  iVar1 = *(int *)(param_1 + 0x98);
  cVar4 = '\x01';
  if (iVar1 != 0) {
    cVar4 = *(char *)(iVar1 + 0x1b);
    *(undefined1 *)(iVar1 + 0x1b) = 1;
  }
  if (*(int *)(param_1 + 0x70) != -1) {
    piVar2 = (int *)fn_001854ac(*(undefined4 *)(param_1 + 100));
    if (cVar4 == '\0') {
      uVar3 = fn_00176970();
      iVar1 = VectorUnsignedToFloat(uVar3,(byte)(in_fpscr >> 0x16) & 3);
      piVar2[4] = iVar1;
    }
    (**(code **)(*piVar2 + 0xc))(piVar2);
    (**(code **)(*piVar2 + 0x14))(piVar2);
    if (((float)piVar2[9] != 0.0) && (*(char *)(param_1 + 0x1d) == '\0')) {
      return 0;
    }
  }
  return 1;
}



undefined4 fn_0022cdf0(int param_1)

{
  undefined4 uVar1;
  
  if ((*(int *)(param_1 + 0x98) == 0) ||
     (*(int *)(param_1 + 0x88) == *(int *)(*(int *)(param_1 + 0x98) + 0x10))) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



void fn_0022cdb4(int param_1,byte param_2)

{
  if (*(int *)(param_1 + 0x8c) != 0) {
    if (*(int *)(param_1 + 0x94) != 0) {
      fn_0031c180();
    }
    *(byte *)(*(int *)(param_1 + 0x8c) + 0x44) =
         *(byte *)(*(int *)(param_1 + 0x8c) + 0x44) & 0xfe | param_2;
  }
  return;
}



void fn_0022cd6c(int *param_1)

{
  int iVar1;
  
  fn_005d2254();
  iVar1 = (**(code **)(*param_1 + 0x11c))(param_1);
  if (iVar1 == 0) {
    *(undefined1 *)(param_1[0x26] + 0x25) = 0;
  }
  fn_004488dc(param_1);
  if (param_1[0x23] != 0) {
    if (param_1[0x25] != 0) {
      fn_0031c180();
    }
    *(byte *)(param_1[0x23] + 0x44) = *(byte *)(param_1[0x23] + 0x44) & 0xfe | 1;
  }
  return;
}



void fn_0022cd58(int param_1)

{
  if (*(int *)(param_1 + 0x94) == 0) {
    return;
  }
  fn_0031c154();
  return;
}



void fn_0022cd44(int param_1)

{
  if (*(int *)(param_1 + 0x94) == 0) {
    return;
  }
  fn_0031c080();
  return;
}



void fn_0022ccb4(int param_1)

{
  if (*(int **)(param_1 + 0x94) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x94) + 0x18))();
    if (*(int **)(param_1 + 0x94) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x94) + 4))();
      *(undefined4 *)(param_1 + 0x94) = 0;
    }
  }
  if (*(int *)(param_1 + 0x70) != -1) {
    fn_00159f34(*(undefined4 *)(param_1 + 100));
    *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x6c) != -1) {
    fn_0016a43c(*(undefined4 *)(param_1 + 100));
    *(undefined4 *)(param_1 + 0x6c) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x68) != -1) {
                    /* WARNING: Subroutine does not return */
    fn_001482f4(*(undefined4 *)(param_1 + 100));
  }
  return;
}



void fn_0022cab4(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  byte bVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  
  if (*(int *)(param_1 + 0x68) == -1) {
    uVar2 = fn_001481c8(*(undefined4 *)(param_1 + 100),param_2,&DAT_0022cc84,1,1);
    *(undefined4 *)(param_1 + 0x68) = uVar2;
  }
  if (*(int *)(param_1 + 0x6c) == -1) {
    uVar2 = fn_001480d0(*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x68),param_3,
                         &DAT_0022cc88,0,1,*(undefined4 *)(param_1 + 0x7c));
    *(undefined4 *)(param_1 + 0x6c) = uVar2;
  }
  if ((*(int *)(param_1 + 0x70) == -1) && (param_4 != 0)) {
    uVar2 = fn_001853ec(*(undefined4 *)(param_1 + 100),param_4,*(undefined4 *)(param_1 + 0x6c));
    *(undefined4 *)(param_1 + 0x70) = uVar2;
    piVar3 = (int *)fn_001854ac(*(undefined4 *)(param_1 + 100),uVar2);
    (**(code **)(*piVar3 + 0x50))(piVar3,0);
  }
  iVar4 = fn_00178f9c(*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x6c));
  *(int *)(param_1 + 0x74) = iVar4;
  uVar7 = *(undefined4 *)(iVar4 + 0x10);
  uVar2 = fn_00689210(uVar7,DAT_00895314);
  *(undefined4 *)(param_1 + 0x8c) = uVar2;
  iVar4 = fn_00689210(uVar7,(char *)&DAT_0022cc94);
  *(int *)(param_1 + 0x90) = iVar4;
  iVar5 = *(int *)(param_1 + 0x98);
  bVar1 = 0;
  if (iVar5 != 0) {
    bVar1 = *(byte *)(iVar5 + 0x1a);
  }
  if (iVar5 != 0 && iVar4 != 0) {
    *(byte *)(iVar4 + 0x44) = bVar1 | *(byte *)(iVar4 + 0x44) & 0xfe;
  }
  iVar4 = fn_00172c98(*(undefined4 *)(param_1 + 0x74),(char *)&DAT_0022cca0);
  if (iVar4 != 0) {
    iVar5 = fn_00145b00(0x2c,&DAT_00812c8c);
    piVar3 = (int *)0x0;
    if (iVar5 != 0) {
      piVar3 = (int *)fn_0031cb44(iVar5,*(undefined4 *)(param_1 + 4),iVar4,1,
                                   *(undefined4 *)(param_1 + 0x48));
    }
    piVar6 = *(int **)(param_1 + 0x94);
    if (piVar6 != piVar3) {
      if (piVar6 != (int *)0x0) {
        (**(code **)(*piVar6 + 4))(piVar6);
      }
      *(int **)(param_1 + 0x94) = piVar3;
    }
    (**(code **)(**(int **)(param_1 + 0x94) + 0x10))();
    if (*(int *)(param_1 + 0x94) != 0) {
      uVar2 = 0;
      if (*(int *)(param_1 + 0x98) != 0) {
        uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x98) + 0x14);
      }
      fn_0031c810(*(int *)(param_1 + 0x94),*(undefined4 *)(param_1 + 0x88),uVar2,
                   *(undefined4 *)(param_1 + 0x84),*(undefined4 *)(param_1 + 0x80));
    }
  }
  return;
}


