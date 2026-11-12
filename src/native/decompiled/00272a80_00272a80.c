#include "00272a80_00272a80.h"



void fn_00272a80(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  char *pcVar7;
  undefined4 *puVar8;
  char *pcVar9;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 *local_20;
  undefined4 local_1c;
  
  if (*(char *)(param_1 + 8) != '\x03') {
    fn_00271e64(param_1,(char *)&DAT_0027582c,1);
    fn_00271e64(param_1,(char *)&DAT_00275834,1);
    fn_00270664(param_1,1);
    fn_00271e64(param_1,DAT_00892138,0);
    fn_00271e64(param_1,DAT_0089213c,0);
    fn_00271e64(param_1,DAT_00892140,0);
    fn_00271e64(param_1,DAT_00892144,0);
    fn_00271e64(param_1,DAT_00892148,0);
    fn_00271e64(param_1,DAT_0089214c,0);
    fn_00271e64(param_1,DAT_00892150,0);
    fn_00271e64(param_1,DAT_00892154,0);
    fn_00271070(param_1,0);
    puVar8 = (undefined4 *)0x0;
    uVar2 = fn_0016ba34(DAT_00897800,DAT_008987a0,(char *)&DAT_00273b6c);
    uVar3 = fn_0026fcd0(param_1,(char *)&DAT_00273b80);
    fn_00190d50(uVar3,uVar2);
    if (((*(uint *)(param_2 + 0x138) & 0x100) != 0) ||
       ((iVar4 = fn_006a9948(param_2), iVar4 == 0 && (*(float *)(param_2 + 0xf8) == 0.0)))) {
      uVar2 = fn_0016ba34(DAT_00897800,DAT_008987a0,(char *)&DAT_00272d30,0);
      fn_00271fb4(param_1,uVar2,3);
      return;
    }
    switch(*(undefined1 *)(param_2 + 0xdc)) {
    case 1:
      iVar4 = fn_0028b690(*(undefined4 *)(DAT_00897804 + 0xc));
      iVar5 = fn_002aa920(param_2);
      fn_00270814(param_1,(iVar4 * 0xf) / 10 <= iVar5);
      local_40 = 0;
      local_3c = 0;
      local_38 = 0;
      local_34 = 0;
      local_30 = 0;
      local_2c = 0;
      local_28 = 0;
      local_24 = 0;
      local_20 = (undefined4 *)0x0;
      fn_00231700(&local_40,0x11,(int)*(short *)(param_2 + 0x16a),0);
      fn_00271fb4(param_1,&local_40,0);
      fn_00271070(param_1,*(undefined4 *)(param_2 + 0x1c4));
      break;
    case 2:
      piVar6 = (int *)(**(code **)(**(int **)(param_1 + 4) + 0x80))();
      cVar1 = *(char *)(param_2 + 0x17c);
      if (cVar1 != ' ') {
        if (cVar1 == '!') {
          uVar2 = fn_0016ba34(DAT_00897800,DAT_008987a0,(char *)&DAT_002734c4,0);
          fn_00271fb4(param_1,uVar2,2);
          return;
        }
        if (cVar1 == '\"') {
          uVar2 = fn_0016ba34(DAT_00897800,DAT_008987a0,(char *)&DAT_00274c6c,0);
          fn_00271fb4(param_1,uVar2,2);
          iVar4 = fn_00154ac8(0x37);
          if (iVar4 != 0) {
            fn_00271e64(param_1,DAT_00892138,1);
            fn_00271e64(param_1,DAT_00892144,1);
            fn_00271e64(param_1,DAT_00892148,1);
            fn_00271e64(param_1,DAT_0089214c,1);
            fn_0015b0f8((&DAT_007c1238)[*(byte *)(param_2 + 0x1b5)]);
            uVar2 = fn_0016ba34(DAT_00897800,DAT_008987a0,(char *)&DAT_00274c84,0);
            uVar3 = fn_0026fcd0(param_1,DAT_0089214c);
            fn_00190d50(uVar3,uVar2);
            return;
          }
        }
        else {
          if (cVar1 != '#') {
            uVar2 = fn_0016ba34(DAT_00897800,DAT_008987a0,(char *)&DAT_00272d30,0);
            fn_00271fb4(param_1,uVar2,3);
            return;
          }
          cVar1 = *(char *)(param_2 + 0x1b5);
          pcVar7 = (char *)0x0;
          pcVar9 = (char *)0x0;
          if (cVar1 == '\x01') {
            pcVar7 = (char *)&DAT_00274c9c;
            pcVar9 = "Pane_Target_Aura_Gold";
          }
          else if (cVar1 == '\x02') {
            pcVar7 = (char *)&DAT_00274ccc;
            pcVar9 = "Pane_Target_Aura_Item";
          }
          else if (cVar1 == '\x03') {
            pcVar7 = (char *)&DAT_00274cfc;
            pcVar9 = (char *)&DAT_00274d10;
          }
          uVar2 = fn_0016ba34(DAT_00897800,DAT_008987a0,pcVar7,0);
          fn_00271fb4(param_1,uVar2,2);
          iVar4 = fn_00154ac8(0x37);
          if (iVar4 != 0) {
            fn_00271e64(param_1,DAT_00892138,1);
            fn_00271e64(param_1,DAT_00892150,1);
            uVar2 = fn_0016ba34(DAT_00897800,DAT_008987a0,pcVar9,0);
            uVar3 = fn_0026fcd0(param_1,DAT_00892150);
            fn_00190d50(uVar3,uVar2);
            return;
          }
        }
        return;
      }
      if ((*(int *)(param_2 + 0x188) < 0) || (iVar4 = fn_00154ac8(), iVar4 == 0)) {
        iVar4 = (**(code **)(*piVar6 + 0x10))(piVar6,(int)*(short *)(param_2 + 0x188));
        if (iVar4 == 0) {
          uVar2 = fn_0016ba34(DAT_00897800,DAT_008987a0,(char *)&DAT_00274c3c,0);
          fn_00271fb4(param_1,uVar2,2);
          return;
        }
        iVar4 = (**(code **)(**(int **)(param_1 + 4) + 0x68))();
        if (iVar4 == 0) {
          uVar2 = fn_0016ba34(DAT_00897800,DAT_008987a0,(char *)&DAT_00273b8c,0);
        }
        else {
          uVar2 = fn_0016ba34(DAT_00897800,DAT_008987a0,(char *)&DAT_00273b6c,0);
        }
        uVar3 = fn_0026fcd0(param_1,(char *)&DAT_00273b80);
        fn_00190d50(uVar3,uVar2);
        uVar2 = fn_00231388((int)*(short *)(param_2 + 0x188));
        fn_00271fb4(param_1,uVar2,2);
        return;
      }
      if ((piVar6 == (int *)0x0) ||
         (iVar4 = (**(code **)(*piVar6 + 0x10))(piVar6,(int)*(short *)(param_2 + 0x188)), iVar4 == 0
         )) {
        uVar2 = fn_0025f9d8(DAT_00897800,*(undefined4 *)(*(int *)(DAT_008977e0 + 0x30) + 0x80),
                             *(undefined4 *)(param_2 + 400));
        fn_00271fb4(param_1,uVar2,2);
        return;
      }
      uVar2 = fn_00230730((int)*(short *)(param_2 + 0x188));
      fn_00271fb4(param_1,uVar2,2);
      return;
    case 3:
      if (*(char *)(param_2 + 0x18b) == '\0') {
        uVar2 = fn_006f6908(param_2);
        fn_00271fb4(param_1,uVar2,1);
      }
      else {
        local_38 = 0;
        local_34 = 0;
        local_30 = 0;
        local_2c = 0;
        local_28 = 0;
        local_24 = 0;
        local_20 = (undefined4 *)0x0;
        local_1c = 0;
        fn_00231700(&local_38,0x11,(int)*(short *)(param_2 + 0x20c),0);
        fn_00271fb4(param_1,&local_38,0);
        fn_00270814(param_1,1);
      }
      iVar4 = fn_00154ac8(0x22);
      if ((iVar4 == 0) || (*(char *)(param_2 + 0x2f5) == '\0')) {
        return;
      }
      iVar4 = fn_00154ac8(0x22);
      if ((iVar4 == 0) || (iVar4 = (**(code **)(**(int **)(param_1 + 4) + 0x68))(), iVar4 != 0)) {
        uVar2 = fn_0016ba34(DAT_00897800,DAT_008987a0,(char *)&DAT_00273b6c,0);
      }
      else {
        uVar2 = fn_0016ba34(DAT_00897800,DAT_008987a0,(char *)&DAT_00273b8c,0);
      }
      uVar3 = fn_0026fcd0(param_1,(char *)&DAT_00273b80);
      fn_00190d50(uVar3,uVar2);
      return;
    case 4:
      local_20 = puVar8;
      uVar2 = fn_006f7294(param_2);
      switch(uVar2) {
      case 6:
      case 7:
      case 8:
      case 9:
      case 0xc:
        pcVar7 = (char *)&DAT_002734dc;
        break;
      case 10:
        pcVar7 = (char *)&DAT_002734c4;
        break;
      default:
        pcVar7 = (char *)&DAT_00272d30;
      }
      uVar2 = fn_0016ba34(DAT_00897800,DAT_008987a0,pcVar7,0);
      fn_00271fb4(param_1,uVar2,2);
      iVar4 = fn_006f7294(param_2);
      if (((iVar4 != 10) && (iVar4 = fn_00154ac8(0x37), iVar4 != 0)) &&
         (*(char *)(param_2 + 0x169) == '\0')) {
        fn_00271e64(param_1,DAT_00892138,1);
        fn_00271e64(param_1,DAT_0089213c,1);
        iVar4 = fn_006f702c(param_2);
        if (iVar4 == 1000) {
          uVar2 = fn_006f70f0(param_2,1000);
          fn_0016bad4(DAT_00897800,uVar2);
          uVar2 = fn_0016ba34(DAT_00897800,DAT_008987a0,(char *)&DAT_0027351c,0);
          uVar3 = fn_0026fcd0(param_1,DAT_0089213c);
          fn_00190d50(uVar3,uVar2);
          return;
        }
        fn_0023097c(&local_20,iVar4,0);
        puVar8 = local_20;
        uVar2 = fn_0026fcd0(param_1,DAT_0089213c);
        fn_00190d50(uVar2,puVar8);
        if (local_20 != &DAT_008f9cf4) {
          piVar6 = local_20 + -3;
          iVar4 = *piVar6;
          if ((iVar4 == -1) || ((piVar6 != &DAT_008f9ce8 && (*piVar6 = iVar4 + -1, iVar4 == 0)))) {
            fn_001008c4(local_20 + -3,local_20[-2] + 8,0);
          }
        }
      }
      return;
    case 5:
      uVar2 = fn_0016ba34(DAT_00897800,DAT_008987a0,(char *)&DAT_002737d4,0);
      fn_00271fb4(param_1,uVar2,2);
      iVar4 = *(int *)(param_2 + 0x170);
      if ((*(int *)(iVar4 + 0xc) != 0) && (iVar5 = fn_00154ac8(0x37), iVar5 != 0)) {
        fn_00271e64(param_1,DAT_00892138,1);
        fn_00271e64(param_1,DAT_00892140,1);
        fn_00271e64(param_1,DAT_00892148,1);
        fn_00271e64(param_1,DAT_0089214c,1);
        switch(*(undefined4 *)(iVar4 + 0xc)) {
        case 1:
          iVar4 = fn_006a7be0(param_2);
          if (iVar4 == 0) {
            uVar2 = fn_0016ba34(DAT_00897800,DAT_008987a0,(char *)&DAT_00273818,0);
            uVar3 = fn_0026fcd0(param_1,DAT_0089214c);
            fn_00190d50(uVar3,uVar2);
            return;
          }
          uVar2 = fn_0016ba34(DAT_00897800,DAT_008987a0,(char *)&DAT_002737f4,0);
          uVar3 = fn_0026fcd0(param_1,DAT_0089214c);
          fn_00190d50(uVar3,uVar2);
          fn_00271e64(param_1,DAT_00892154,1);
          uVar2 = fn_0015b064((int)(short)*(undefined4 *)(param_2 + 0x180));
          uVar3 = fn_0026fcd0(param_1,DAT_00892158);
          fn_00190d50(uVar3,uVar2);
          return;
        case 2:
          uVar2 = fn_0016ba34(DAT_00897800,DAT_008987a0,(char *)&DAT_00273838,0);
          uVar3 = fn_0026fcd0(param_1,DAT_0089214c);
          fn_00190d50(uVar3,uVar2);
          return;
        case 3:
          uVar2 = fn_0016ba34(DAT_00897800,DAT_008987a0,(char *)&DAT_00273858,0);
          uVar3 = fn_0026fcd0(param_1,DAT_0089214c);
          fn_00190d50(uVar3,uVar2);
          return;
        case 4:
          uVar2 = fn_0016ba34(DAT_00897800,DAT_008987a0,(char *)&DAT_00273878,0);
          uVar3 = fn_0026fcd0(param_1,DAT_0089214c);
          fn_00190d50(uVar3,uVar2);
          return;
        }
      }
      return;
    }
  }
  return;
}


