#include "00595a58_00595ce0.h"



void fn_00595ce0(int param_1)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  switch(*(undefined1 *)(param_1 + 0x14)) {
  case 0:
    uVar4 = fn_00182994(DAT_008977e4);
    iVar5 = fn_00175044(uVar4,(int)*(char *)(param_1 + 8),0);
    uVar4 = fn_00182994(DAT_008977e4);
    iVar6 = fn_00175044(uVar4,(int)*(char *)(param_1 + 8),1);
    if ((iVar5 != 0) && (*(char *)(param_1 + 0xc) == '\0')) {
      fn_0016c1f4(*(undefined4 *)(param_1 + 4),iVar5);
    }
    if ((iVar6 != 0) && (*(char *)(param_1 + 0xc) == '\0')) {
      fn_0016c1f4(*(undefined4 *)(param_1 + 4),iVar6);
    }
    iVar5 = fn_00145b00(0x20,&DAT_00812c8c);
    puVar2 = (undefined4 *)0x0;
    if (iVar5 != 0) {
      uVar1 = *(undefined1 *)(param_1 + 0xc);
      uVar3 = *(undefined4 *)(param_1 + 8);
      uVar4 = *(undefined4 *)(param_1 + 0x10);
      puVar2 = (undefined4 *)fn_0016a50c();
      *puVar2 = &DAT_00833ed0;
      puVar2[1] = uVar3;
      *(undefined1 *)(puVar2 + 2) = uVar1;
      puVar2[3] = uVar4;
      *(undefined1 *)(puVar2 + 4) = 0;
      *(undefined1 *)((int)puVar2 + 0x11) = 2;
      puVar2[5] = 0;
      puVar2[6] = 0;
      *(undefined1 *)(puVar2 + 7) = 0;
      *(undefined1 *)((int)puVar2 + 0x1d) = 0;
    }
    uVar4 = fn_00182994(DAT_008977e4);
    uVar4 = fn_0015a130(uVar4,puVar2);
    *(undefined4 *)(param_1 + 0x20) = uVar4;
    *(undefined1 *)(param_1 + 0x14) = 7;
    *(undefined1 *)(param_1 + 0x15) = 1;
    break;
  case 1:
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x24);
    *(undefined1 *)(param_1 + 0x14) = 6;
    *(undefined1 *)(param_1 + 0x15) = 2;
    return;
  case 2:
    iVar5 = fn_00145b00(0x18,&DAT_00812c8c);
    puVar2 = (undefined4 *)0x0;
    if (iVar5 != 0) {
      uVar4 = *(undefined4 *)(param_1 + 8);
      puVar2 = (undefined4 *)fn_0016a50c();
      puVar2[3] = 0;
      puVar2[2] = param_1 + 0x1c;
      *puVar2 = &DAT_00833ee8;
      puVar2[1] = uVar4;
      *(undefined1 *)(puVar2 + 4) = 0;
      *(undefined1 *)((int)puVar2 + 0x11) = 0;
      puVar2[5] = 0;
    }
    uVar4 = fn_00182994(DAT_008977e4);
    uVar4 = fn_0015a130(uVar4,puVar2);
    *(undefined4 *)(param_1 + 0x20) = uVar4;
    *(undefined1 *)(param_1 + 0x14) = 7;
    *(undefined1 *)(param_1 + 0x15) = 3;
    return;
  case 3:
    iVar5 = fn_00145b00(0x18,&DAT_00812c8c);
    uVar4 = 0;
    if (iVar5 != 0) {
      uVar4 = fn_0044badc(iVar5,0,*(undefined4 *)(param_1 + 8),param_1 + 0x18);
    }
    uVar3 = fn_00182994(DAT_008977e4);
    uVar4 = fn_0015a130(uVar3,uVar4);
    *(undefined4 *)(param_1 + 0x20) = uVar4;
    *(undefined1 *)(param_1 + 0x14) = 7;
    iVar5 = *(int *)(param_1 + 0x24);
    if (iVar5 != 0) {
      if (*(char *)(param_1 + 0x1c) == '\0') {
        iVar5 = iVar5 / 2;
      }
      if (0 < iVar5) {
        *(undefined1 *)(param_1 + 0x15) = 4;
        return;
      }
    }
    *(undefined1 *)(param_1 + 0x15) = 5;
    return;
  case 4:
    iVar6 = *(int *)(param_1 + 0x24);
    iVar5 = 0;
    if (iVar6 != 0) {
      if (*(char *)(param_1 + 0x1c) == '\0') {
        iVar5 = iVar6 / 2;
      }
      else {
        iVar5 = iVar6;
      }
    }
    *(int *)(param_1 + 0x18) = iVar5;
    *(undefined1 *)(param_1 + 0x14) = 6;
    *(undefined1 *)(param_1 + 0x15) = 5;
    return;
  case 5:
    iVar5 = fn_00145b00(0x18,&DAT_00812c8c);
    uVar4 = 0;
    if (iVar5 != 0) {
      uVar4 = fn_0015c90c(iVar5,*(undefined4 *)(param_1 + 8),0);
    }
    uVar3 = fn_00182994(DAT_008977e4);
    uVar4 = fn_0015a130(uVar3,uVar4);
    *(undefined4 *)(param_1 + 0x20) = uVar4;
    *(undefined1 *)(param_1 + 0x14) = 7;
    *(undefined1 *)(param_1 + 0x15) = 8;
    return;
  case 6:
    iVar5 = *(int *)(param_1 + 0x18) + -1;
    *(int *)(param_1 + 0x18) = iVar5;
    if (iVar5 < 1) goto LAB_00595fe0;
    break;
  case 7:
    uVar4 = fn_00182994(DAT_008977e4);
    iVar5 = fn_00154b54(uVar4,*(undefined4 *)(param_1 + 0x20));
    if (iVar5 == 0) {
      return;
    }
LAB_00595fe0:
    *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)(param_1 + 0x15);
    return;
  }
  return;
}



void fn_00595a58(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  switch(*(undefined1 *)(param_1 + 0xe)) {
  case 0:
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    fn_0016c358(*(undefined4 *)(param_1 + 4),param_1 + 0x18,param_1 + 0x1c,0);
    fn_0029f8c0(1,(int)*(char *)(param_1 + 0xd));
    fn_0029f72c((int)*(char *)(param_1 + 0xd));
    fn_00182994(DAT_008977e4);
    fn_0014951c();
    *(undefined4 *)(param_1 + 0x14) = 1;
    *(undefined1 *)(param_1 + 0xe) = 7;
    *(undefined1 *)(param_1 + 0xf) = 1;
    break;
  case 1:
    fn_005954d0(param_1);
    return;
  case 2:
    iVar6 = fn_0029e4e0(*(undefined4 *)(param_1 + 4));
    uVar4 = fn_00182994(DAT_008977e4);
    iVar2 = fn_0016561c(uVar4,(int)*(char *)(param_1 + 4));
    if (*(int *)(param_1 + 0x10) != 0) {
      if ((*(int *)(param_1 + 0x10) == 1) &&
         (iVar2 = *(int *)(param_1 + 0x14) + -1, *(int *)(param_1 + 0x14) = iVar2, iVar2 < 1)) {
        if (iVar6 <= *(int *)(param_1 + 0x24)) {
          *(undefined1 *)(param_1 + 0xe) = 3;
        }
        *(undefined4 *)(param_1 + 0x10) = 0;
      }
      return;
    }
    iVar7 = 0;
    if (0 < iVar2) {
      do {
        uVar4 = fn_00182994(DAT_008977e4);
        uVar1 = fn_001659c0(uVar4,(int)*(char *)(param_1 + 4),(int)(char)iVar7);
        uVar4 = fn_00182994(DAT_008977e4);
        iVar8 = fn_001754ac(uVar4,uVar1);
        if (iVar8 == *(char *)(param_1 + 0xd)) {
          uVar4 = fn_00182994(DAT_008977e4);
          iVar8 = fn_00174a74(uVar4,*(undefined4 *)(param_1 + 4),iVar7);
          if (0 < iVar8) {
            uVar4 = fn_00182994(DAT_008977e4);
            iVar8 = fn_001659c0(uVar4,(int)*(char *)(param_1 + 4),(int)(char)iVar7);
            if (iVar8 != 0) {
              fn_0029eca0(iVar7,1,1,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),0,
                           param_1 + 0x20,param_1 + 0x21);
            }
          }
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar2);
    }
    if (1 < iVar6) {
      *(undefined4 *)(param_1 + 0x14) = 0xf;
    }
    *(undefined4 *)(param_1 + 0x10) = 1;
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
    return;
  case 3:
    uVar4 = fn_00182994(DAT_008977e4);
    iVar6 = fn_0016561c(uVar4,(int)*(char *)(param_1 + 4));
    iVar2 = *(int *)(param_1 + 0x10);
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0x10) = 2;
      if (*(int *)(param_1 + 0x28) < iVar6) {
        do {
          uVar4 = fn_00182994(DAT_008977e4);
          uVar1 = fn_001659c0(uVar4,(int)*(char *)(param_1 + 4),(int)*(char *)(param_1 + 0x28));
          uVar4 = fn_00182994(DAT_008977e4);
          iVar2 = fn_001754ac(uVar4,uVar1);
          if (iVar2 == *(char *)(param_1 + 0xd)) {
            uVar4 = fn_002a0308(*(undefined4 *)(param_1 + 4),0);
            *(undefined4 *)(param_1 + 0x10) = 1;
            *(undefined4 *)(param_1 + 0x14) = uVar4;
            return;
          }
          iVar2 = *(int *)(param_1 + 0x28) + 1;
          *(int *)(param_1 + 0x28) = iVar2;
        } while (iVar2 < iVar6);
        return;
      }
    }
    else {
      if (iVar2 == 1) {
        iVar6 = *(int *)(param_1 + 0x14) + -1;
        *(int *)(param_1 + 0x14) = iVar6;
        if (iVar6 < 1) {
          *(undefined4 *)(param_1 + 0x10) = 2;
        }
        return;
      }
      if (iVar2 == 2) {
        iVar2 = 0;
        if (*(char *)(param_1 + 0xc) == '\x01') {
          iVar7 = 1;
          do {
            iVar8 = 0;
            if (0 < iVar6) {
              do {
                uVar4 = fn_00182994(DAT_008977e4);
                uVar1 = fn_001659c0(uVar4,(int)*(char *)(param_1 + 4),(int)(char)iVar8);
                uVar4 = fn_00182994(DAT_008977e4);
                iVar3 = fn_001754ac(uVar4,uVar1);
                if (iVar3 == *(char *)(param_1 + 0xd)) {
                  uVar4 = fn_00182994(DAT_008977e4);
                  iVar3 = fn_00174c34(uVar4,iVar7,*(undefined4 *)(param_1 + 4),iVar8);
                  if (iVar3 < 1) {
                    if (iVar3 < 0) {
                      iVar2 = fn_0029e540(iVar7);
                    }
                  }
                  else {
                    iVar2 = fn_0029e4bc(iVar7);
                  }
                }
                iVar8 = iVar8 + 1;
              } while (iVar8 < iVar6);
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < 0x61);
          if (iVar2 == 0) {
            uVar4 = *(undefined4 *)(param_1 + 0x1c);
          }
          else {
            uVar4 = *(undefined4 *)(param_1 + 0x18);
          }
          *(undefined4 *)(param_1 + 0x14) = uVar4;
        }
        *(undefined1 *)(param_1 + 0xe) = 7;
        *(undefined1 *)(param_1 + 0xf) = 4;
      }
    }
    return;
  case 4:
    iVar6 = 0;
    iVar7 = 0;
    uVar4 = fn_00182994(DAT_008977e4);
    iVar2 = fn_0016561c(uVar4,(int)*(char *)(param_1 + 4));
    iVar8 = 0;
    if (0 < iVar2) {
      do {
        uVar4 = fn_00182994(DAT_008977e4);
        uVar1 = fn_001659c0(uVar4,(int)*(char *)(param_1 + 4),(int)(char)iVar8);
        uVar4 = fn_00182994(DAT_008977e4);
        iVar3 = fn_001754ac(uVar4,uVar1);
        if (iVar3 == *(char *)(param_1 + 0xd)) {
          iVar7 = fn_0015b414(*(undefined4 *)(param_1 + 4),iVar8);
        }
        if (iVar7 != 0) {
          iVar6 = iVar7;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < iVar2);
      if ((iVar6 != 0) && (*(char *)(param_1 + 0xc) == '\x01')) {
        *(int *)(param_1 + 0x14) = iVar6;
        *(undefined1 *)(param_1 + 0xe) = 7;
        *(undefined4 *)(param_1 + 0x10) = 0;
        *(undefined1 *)(param_1 + 0xf) = 5;
        return;
      }
    }
    *(undefined1 *)(param_1 + 0xe) = 5;
    *(undefined4 *)(param_1 + 0x10) = 0;
    return;
  case 5:
    if (*(int *)(param_1 + 0x10) == 0) {
      iVar6 = fn_00145b00(0x18,&DAT_00812c8c);
      uVar4 = 0;
      if (iVar6 != 0) {
        uVar4 = fn_00587a18(iVar6,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x28),0,0,
                             1);
      }
      uVar5 = fn_00182994(DAT_008977e4);
      uVar4 = fn_0015a130(uVar5,uVar4);
      *(undefined4 *)(param_1 + 0x10) = 1;
      *(undefined4 *)(param_1 + 0x2c) = uVar4;
      return;
    }
    if (*(int *)(param_1 + 0x10) == 1) {
      uVar4 = fn_00182994(DAT_008977e4);
      iVar6 = fn_00154b54(uVar4,*(undefined4 *)(param_1 + 0x2c));
      if (iVar6 != 0) {
        *(undefined1 *)(param_1 + 0xe) = 7;
        *(undefined1 *)(param_1 + 0xf) = 6;
        return;
      }
    }
    break;
  case 7:
    iVar6 = *(int *)(param_1 + 0x14) + -1;
    *(int *)(param_1 + 0x14) = iVar6;
    if (iVar6 < 1) {
      *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_1 + 0xf);
    }
    return;
  }
  return;
}


