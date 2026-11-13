#include "single_00507bf4_r.h"


extern undefined4 SupervisorCall;

undefined8 fn_00507bf4(int param_1,char *param_2,undefined4 param_3,uint param_4)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  bool bVar6;
  
  iVar3 = DAT_008c0630;
  if (*(char *)(param_1 + 0x70) == '\0') {
    cVar1 = *param_2;
    *(char *)(param_1 + 4) = cVar1;
    if ((DAT_008bf4e6 == '\0') && (29000 < *(int *)(param_2 + 0xc) - 1000U)) {
      if (iVar3 != 0) {
        param_2 = &SupervisorCall;
      }
      return CONCAT44(param_2,0xe0e14826);
    }
    bVar6 = *(char *)(DAT_008bf4e8 + 5) != '\0';
    if (bVar6) {
      param_4 = (uint)(byte)param_2[8];
    }
    if (!bVar6) {
      param_4 = 0;
    }
    puVar4 = (undefined1 *)
             (**(code **)(**(int **)(param_1 + 8) + 8))
                       (*(int **)(param_1 + 8),(int)cVar1,*(undefined4 *)(param_2 + 4),param_4,
                        *(undefined4 *)(param_2 + 0xc),*(undefined4 *)(param_2 + 0x10),
                        *(undefined4 *)(param_2 + 0x14),*(undefined4 *)(param_2 + 0x18),
                        (int)param_2[0x20],*(undefined4 *)(param_2 + 0x1c),
                        *(undefined4 *)(param_2 + 0x24),(int)*(char *)(param_1 + 0x134));
    param_2 = (char *)((uint)puVar4 & 0x80000000);
    if (-1 < (int)param_2) {
      *(undefined1 *)(param_1 + 0x70) = 1;
      puVar4 = (undefined1 *)fn_00500fb0(*(undefined4 *)(param_1 + 0xc));
      param_2 = (char *)((uint)puVar4 & 0x80000000);
      if (-1 < (int)param_2) {
        fn_004efcf4(*(undefined4 *)(param_1 + 0xc),0);
        *(undefined1 *)(param_1 + 0x72) = 0;
        puVar2 = *(undefined4 **)(param_1 + 0xd4);
        while (puVar2 != (undefined4 *)(param_1 + 0xd0)) {
          puVar5 = (undefined4 *)puVar2[1];
          *puVar2 = 0;
          puVar2[1] = 0;
          fn_004f0ab4(param_1 + 0xdc,param_1 + 0xe0,*(int *)(param_1 + 0xec) + (int)puVar2);
          puVar2 = puVar5;
        }
        fn_004f0c04(param_1 + 0xcc);
        *(undefined1 *)(DAT_008bf4e0 + 0xa5) = 1;
        return 0x100000000;
      }
    }
  }
  else {
    if (DAT_008c0630 != 0) {
      param_2 = &SupervisorCall;
    }
    puVar4 = &DAT_e0a14827;
  }
  return CONCAT44(param_2,puVar4);
}


