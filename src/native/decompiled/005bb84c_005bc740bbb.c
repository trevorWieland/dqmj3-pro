#include "005bb84c_005bc740bbb.h"



undefined4 * fn_005bc740(void)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  
  puVar1 = (undefined4 *)fn_005bd400();
  *puVar1 = &DAT_00849518;
  puVar1[0x41] = &DAT_0085a9f4;
  puVar1[0x42] = 0;
  puVar1[0x43] = 0;
  iVar2 = fn_00145b00(0xb4,&DAT_00812c8c);
  if (iVar2 == 0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5 = (undefined4 *)fn_005f62c0();
    puVar5[8] = &DAT_00859420;
    puVar5[9] = 0;
    puVar5[10] = 0;
    puVar5[0xb] = 0;
    puVar5[0xc] = 0;
    puVar5[0xd] = 0;
    *puVar5 = &DAT_00859b38;
    iVar2 = fn_00119b40(puVar5 + 0x10);
    puVar5 = (undefined4 *)(iVar2 + -0x40);
    fn_0066ddbc();
    fn_002fec40(iVar2 + 0x18,s_TaskNexGatheringFindByParticipan_008c71f3);
    piVar6 = (int *)(iVar2 + 0x58);
    *puVar5 = &DAT_0085a240;
    *piVar6 = 0;
    *(undefined4 *)(iVar2 + 0x5c) = 0;
    *(undefined4 *)(iVar2 + 0x60) = 0;
    *(undefined4 *)(iVar2 + 100) = 0;
    *(undefined4 *)(iVar2 + 0x68) = 0;
    *(undefined4 *)(iVar2 + 0x6c) = 0;
    piVar3 = (int *)fn_0015ece0(0xc);
    iVar4 = fn_0015ece0(0x78);
    piVar3[2] = iVar4;
    *piVar3 = *piVar6;
    piVar3[1] = 1;
    *piVar6 = (int)piVar3;
    iVar4 = piVar3[2];
    *(int *)(iVar2 + 0x60) = iVar4;
    *(int *)(iVar2 + 100) = iVar4 + 0x78;
    *(int *)(iVar2 + 0x68) = iVar4;
    *(int *)(iVar2 + 0x60) = iVar4 + 0x78;
    *(int *)iVar4 = iVar4;
    *(int *)(*(int *)(iVar2 + 0x68) + 4) = *(int *)(iVar2 + 0x68);
    *puVar5 = &DAT_0085a790;
    fn_0067b6d4(puVar5);
  }
  puVar1[0x44] = puVar5;
  puVar1[0x45] = 0xfffffffe;
  return puVar1;
}



void fn_005bc600(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x108);
  if ((iVar1 == 0) || (iVar1 != 1 && iVar1 != 2)) {
    iVar1 = fn_006e8f88(param_1);
    iVar2 = fn_0023c2a8();
    fn_004a2190(iVar2 + 0x30,iVar1 + 0x5a8);
    fn_0068ab44(param_1,0x100094b);
    fn_006899f4(param_1,0xf8,0,1);
    *(undefined4 *)(param_1 + 0x108) = 2;
    *(undefined4 *)(param_1 + 0x10c) = 0;
  }
  return;
}


