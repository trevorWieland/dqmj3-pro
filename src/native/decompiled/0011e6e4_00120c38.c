#include "0011e6e4_00120c38.h"



void fn_00120c38(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 2;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 2;
  param_1[6] = 1;
  param_1[7] = 1;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}



int fn_00120aa8(undefined4 *param_1,undefined1 param_2,undefined1 param_3,undefined2 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined2 *puVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  
  *param_1 = 0;
  param_1[1] = &DAT_008f9cf4;
  *(undefined1 *)(param_1 + 2) = param_2;
  *(undefined1 *)((int)param_1 + 9) = param_3;
  param_1[3] = 0;
  *(undefined2 *)(param_1 + 4) = param_4;
  param_1[9] = 0;
  iVar1 = fn_0012f128(param_1 + 10);
  piVar7 = (int *)(iVar1 + -0x24);
  *(undefined4 *)(iVar1 + 100) = 0;
  if (*(uint *)(*(int *)(iVar1 + -0x24) + -8) < 0x400) {
    uVar6 = *(uint *)(*(int *)(iVar1 + -0x24) + -4);
    if (0x400 < uVar6) {
      uVar6 = 0x400;
    }
    if (0x400 < uVar6) {
      fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar6,0x400);
    }
    puVar2 = (undefined4 *)fn_00100fc6(0x810,0);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
    }
    puVar4 = (undefined2 *)((int)puVar2 + uVar6 * 2 + 0xc);
    *puVar2 = 0;
    puVar2[1] = 0x400;
    puVar2[2] = uVar6;
    if (puVar4 != (undefined2 *)0x0) {
      *puVar4 = 0;
    }
    fn_00301a9c(puVar2 + 3,*piVar7,*(int *)(*piVar7 + -4) << 1);
    if ((undefined4 *)*piVar7 != &DAT_008f9cf4) {
      piVar3 = (undefined4 *)*piVar7 + -3;
      iVar5 = *piVar3;
      if ((iVar5 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar5 + -1, iVar5 == 0)))) {
        fn_001008c4(*piVar7 + -0xc,*(int *)(*piVar7 + -8) + 8,0);
      }
    }
    *piVar7 = (int)(puVar2 + 3);
  }
  *(undefined4 *)(iVar1 + -0x16) = 0;
  *(undefined4 *)(iVar1 + -0x12) = 0;
  *(undefined4 *)(iVar1 + -0xe) = 0;
  *(undefined4 *)(iVar1 + -10) = 0;
  *(undefined2 *)(iVar1 + -6) = 0;
  return iVar1 + -0x28;
}



void fn_00120a0c(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  fn_0019bc50(param_1 + 2,&DAT_007c8a38);
  fn_0019bc50((int)param_1 + 0xe,&DAT_007c8a38);
  fn_0019bc50(param_1 + 5,&DAT_007c8a38);
  fn_0019bc50((int)param_1 + 0x1a,&DAT_007c8a38);
  fn_0019bc50(param_1 + 8,&DAT_007c8a38);
  fn_0019bc50((int)param_1 + 0x26,&DAT_007c8a38);
  fn_0019bc50(param_1 + 0xb,&DAT_007c8a38);
  fn_0019bc50((int)param_1 + 0x32,&DAT_007c8a38);
  fn_0019bc50(param_1 + 0xe,&DAT_007c8a38);
  fn_0019bc50((int)param_1 + 0x3e,&DAT_007c8a38);
  return;
}



void fn_0011e6e4(undefined4 param_1)

{
  fn_00143de8(param_1,(char *)&DAT_0011e9c4,fn_0012f7b8);
  fn_00143de8(param_1,(char *)&DAT_0011e9d4,fn_00134790);
  fn_00143de8(param_1,(char *)&DAT_0011e9ec,fn_001374b0);
  fn_00143de8(param_1,(char *)&DAT_0011ea08,fn_00137420);
  fn_00143de8(param_1,(char *)&DAT_0011ea24,fn_0013819c);
  fn_00143de8(param_1,(char *)&DAT_0011ea44,fn_0013810c);
  fn_00143de8(param_1,(char *)&DAT_0011ea64,fn_00136084);
  fn_00143de8(param_1,(char *)&DAT_0011ea80,fn_00135f64);
  fn_00143de8(param_1,(char *)&DAT_0011ea9c,fn_00135ff4);
  fn_00143de8(param_1,(char *)&DAT_0011eab8,fn_00136a78);
  fn_00143de8(param_1,(char *)&DAT_0011ead4,fn_00131cac);
  fn_00143de8(param_1,(char *)&DAT_0011eae8,fn_0013389c);
  fn_00143de8(param_1,(char *)&DAT_0011eb00,fn_00134bcc);
  fn_00143de8(param_1,(char *)&DAT_0011eb18,fn_0013665c);
  fn_00143de8(param_1,(char *)&DAT_0011eb34,fn_0013070c);
  fn_00143de8(param_1,(char *)&DAT_0011eb44,fn_00136f94);
  fn_00143de8(param_1,(char *)&DAT_0011eb60,fn_00136554);
  fn_00143de8(param_1,(char *)&DAT_0011eb7c,fn_001399d8);
  fn_00143de8(param_1,(char *)&DAT_0011eb88,fn_001392a4);
  fn_00143de8(param_1,(char *)&DAT_0011eb94,fn_00131028);
  fn_00143de8(param_1,(char *)&DAT_0011eba8,fn_001396fc);
  fn_00143de8(param_1,(char *)&DAT_0011ebb4,fn_001391d4);
  fn_00143de8(param_1,(char *)&DAT_0011ebc0,fn_0013a5ac);
  fn_00143de8(param_1,(char *)&DAT_0011ebd0,fn_00139f38);
  fn_00143de8(param_1,(char *)&DAT_0011ebe0,fn_0013644c);
  fn_00143de8(param_1,(char *)&DAT_0011ebfc,fn_0012ff80);
  fn_00143de8(param_1,(char *)&DAT_0011ec0c,fn_00135af4);
  fn_00143de8(param_1,(char *)&DAT_0011ec28,fn_001331f0);
  fn_00143de8(param_1,(char *)&DAT_0011ec3c,fn_0012f970);
  fn_00143de8(param_1,(char *)&DAT_0011ec4c,fn_001354c4);
  fn_00143de8(param_1,(char *)&DAT_0011ec64,fn_001339c8);
  fn_00143de8(param_1,(char *)&DAT_0011ec7c,fn_001329b4);
  fn_00143de8(param_1,(char *)&DAT_0011ec90,fn_0013a388);
  fn_00143de8(param_1,(char *)&DAT_0011eca0,fn_0013a5e8);
  fn_00143de8(param_1,(char *)&DAT_0011ecb0,fn_00135ed0);
  fn_00143de8(param_1,(char *)&DAT_0011eccc,fn_00131f24);
  fn_00143de8(param_1,(char *)&DAT_0011ece0,fn_001328e8);
  fn_00143de8(param_1,(char *)&DAT_0011ecf4,fn_00132774);
  fn_00143de8(param_1,(char *)&DAT_0011ed08,fn_001335bc);
  fn_00143de8(param_1,(char *)&DAT_0011ed20,fn_001342a0);
  fn_00143de8(param_1,(char *)&DAT_0011ed38,fn_00132118);
  fn_00143de8(param_1,(char *)&DAT_0011ed4c,fn_00131980);
  fn_00143de8(param_1,(char *)&DAT_0011ed60,fn_00132a5c);
  fn_00143de8(param_1,(char *)&DAT_0011ed74,fn_00132394);
  fn_00143de8(param_1,(char *)&DAT_0011ed88,fn_00135c2c);
  fn_00143de8(param_1,(char *)&DAT_0011f074,fn_00132574);
  fn_00143de8(param_1,(char *)&DAT_0011f088,fn_00137d38);
  fn_00143de8(param_1,(char *)&DAT_0011f0a8,fn_00134994);
  fn_00143de8(param_1,(char *)&DAT_0011f0c0,fn_001348f8);
  fn_00143de8(param_1,(char *)&DAT_0011f0d8,fn_001324dc);
  fn_00143de8(param_1,(char *)&DAT_0011f0ec,fn_00133590);
  fn_00143de8(param_1,(char *)&DAT_0011f104,fn_001359cc);
  fn_00143de8(param_1,(char *)&DAT_0011f120,fn_00136114);
  fn_00143de8(param_1,(char *)&DAT_0011f13c,fn_00134100);
  fn_00143de8(param_1,(char *)&DAT_0011f154,fn_00134a34);
  fn_00143de8(param_1,(char *)&DAT_0011f16c,fn_00136d74);
  fn_00143de8(param_1,(char *)&DAT_0011f188,fn_00133564);
  fn_00143de8(param_1,(char *)&DAT_0011f19c,fn_001305e4);
  fn_00143de8(param_1,(char *)&DAT_0011f1ac,fn_00139278);
  fn_00143de8(param_1,(char *)&DAT_0011f1b8,fn_00135e0c);
  fn_00143de8(param_1,(char *)&DAT_0011f1d4,fn_00137724);
  fn_00143de8(param_1,(char *)&DAT_0011f1f0,fn_00137eb0);
  fn_00143de8(param_1,(char *)&DAT_0011f210,fn_00132b2c);
  fn_00143de8(param_1,(char *)&DAT_0011f224,fn_001348cc);
  fn_00143de8(param_1,(char *)&DAT_0011f23c,fn_001341f8);
  fn_00143de8(param_1,(char *)&DAT_0011f254,fn_001312dc);
  fn_00143de8(param_1,(char *)&DAT_0011f268,fn_00132048);
  fn_00143de8(param_1,(char *)&DAT_0011f27c,fn_00132918);
  fn_00143de8(param_1,(char *)&DAT_0011f290,fn_0012f8d4);
  fn_00143de8(param_1,(char *)&DAT_0011f2a0,fn_00139738);
  fn_00143de8(param_1,(char *)&DAT_0011f2ac,fn_001301a8);
  fn_00143de8(param_1,(char *)&DAT_0011f2bc,fn_001302f4);
  fn_00143de8(param_1,(char *)&DAT_0011f2cc,fn_00139358);
  fn_00143de8(param_1,(char *)&DAT_0011f2d8,fn_0012fba8);
  fn_00143de8(param_1,(char *)&DAT_0011f2e8,fn_0013a1a0);
  fn_00143de8(param_1,(char *)&DAT_0011f2f8,fn_0012fcf0);
  fn_00143de8(param_1,(char *)&DAT_0011f308,fn_00133800);
  fn_00143de8(param_1,(char *)&DAT_0011f320,fn_00134ba0);
  fn_00143de8(param_1,(char *)&DAT_0011f338,fn_00130678);
  fn_00143de8(param_1,(char *)&DAT_0011f348,fn_00131128);
  fn_00143de8(param_1,(char *)&DAT_0011f35c,fn_00135110);
  fn_00143de8(param_1,(char *)&DAT_0011f374,fn_00135ac8);
  fn_00143de8(param_1,(char *)&DAT_0011f390,fn_001334d0);
  fn_00143de8(param_1,(char *)&DAT_0011f3a4,fn_0013782c);
  fn_00143de8(param_1,(char *)&DAT_0011f3c0,fn_00137100);
  fn_00143de8(param_1,(char *)&DAT_0011f3dc,fn_00137934);
  fn_00143de8(param_1,(char *)&DAT_0011f3f8,fn_00131ce4);
  fn_00143de8(param_1,(char *)&DAT_0011f40c,fn_00130814);
  fn_00143de8(param_1,(char *)&DAT_0011f41c,fn_00138cbc);
  fn_00143de8(param_1,(char *)&DAT_0011f440,fn_00131dec);
  fn_00143de8(param_1,(char *)&DAT_0011f75c,fn_00136948);
  fn_00143de8(param_1,(char *)&DAT_0011f778,fn_00135e38);
  fn_00143de8(param_1,(char *)&DAT_0011f794,fn_001369e0);
  fn_00143de8(param_1,(char *)&DAT_0011f7b0,fn_00135884);
  fn_00143de8(param_1,(char *)&DAT_0011f7cc,fn_00132b58);
  fn_00143de8(param_1,(char *)&DAT_0011f7e0,fn_001321bc);
  fn_00143de8(param_1,(char *)&DAT_0011f7f4,fn_00134344);
  fn_00143de8(param_1,(char *)&DAT_0011f80c,fn_00136ba8);
  fn_00143de8(param_1,(char *)&DAT_0011f828,fn_00131380);
  fn_00143de8(param_1,(char *)&DAT_0011f83c,fn_001380e0);
  fn_00143de8(param_1,(char *)&DAT_0011f85c,fn_0013096c);
  fn_00143de8(param_1,(char *)&DAT_0011f870,fn_00131f54);
  fn_00143de8(param_1,(char *)&DAT_0011f884,fn_001322f8);
  fn_00143de8(param_1,(char *)&DAT_0011f898,fn_00131e80);
  fn_00143de8(param_1,(char *)&DAT_0011f8ac,fn_00132cb4);
  fn_00143de8(param_1,(char *)&DAT_0011f8c0,fn_001327a4);
  fn_00143de8(param_1,(char *)&DAT_0011f8d4,fn_00135254);
  fn_00143de8(param_1,(char *)&DAT_0011f8ec,fn_00133618);
  fn_00143de8(param_1,(char *)&DAT_0011f904,fn_0013160c);
  fn_00143de8(param_1,(char *)&DAT_0011f918,fn_001312b0);
  fn_00143de8(param_1,(char *)&DAT_0011f92c,fn_001311bc);
  fn_00143de8(param_1,(char *)&DAT_0011f940,fn_0013a00c);
  fn_00143de8(param_1,(char *)&DAT_0011f950,fn_001335ec);
  fn_00143de8(param_1,(char *)&DAT_0011f968,fn_001320ec);
  fn_00143de8(param_1,(char *)&DAT_0011f97c,fn_00132b00);
  fn_00143de8(param_1,(char *)&DAT_0011f990,fn_00135134);
  fn_00143de8(param_1,(char *)&DAT_0011f9a8,fn_001358b0);
  fn_00143de8(param_1,(char *)&DAT_0011f9c4,fn_00131424);
  fn_00143de8(param_1,(char *)&DAT_0011f9d8,fn_00131518);
  fn_00143de8(param_1,(char *)&DAT_0011f9ec,fn_001302c8);
  fn_00143de8(param_1,(char *)&DAT_0011f9fc,fn_00132ed4);
  fn_00143de8(param_1,(char *)&DAT_0011fa10,fn_001303ac);
  fn_00143de8(param_1,(char *)&DAT_0011fa20,fn_00139518);
  fn_00143de8(param_1,(char *)&DAT_0011fa2c,fn_001393fc);
  fn_00143de8(param_1,(char *)&DAT_0011fa38,fn_00139b84);
  fn_00143de8(param_1,(char *)&DAT_0011fa48,fn_0013a0ac);
  fn_00143de8(param_1,(char *)&DAT_0011fa58,fn_0012fd98);
  fn_00143de8(param_1,(char *)&DAT_0011fa68,fn_001394ec);
  fn_00143de8(param_1,(char *)&DAT_0011fa74,fn_0012fe8c);
  fn_00143de8(param_1,(char *)&DAT_0011fa84,fn_001304f0);
  fn_00143de8(param_1,(char *)&DAT_0011fa94,fn_00139a90);
  fn_00143de8(param_1,(char *)&DAT_0011faa4,fn_0012fab4);
  fn_00143de8(param_1,(char *)&DAT_0011fab4,fn_00131890);
  fn_00143de8(param_1,(char *)&DAT_0011fac8,fn_00130aac);
  fn_00143de8(param_1,(char *)&DAT_0011fadc,fn_00130ba0);
  fn_00143de8(param_1,(char *)&DAT_0011faf0,fn_00131750);
  fn_00143de8(param_1,(char *)&DAT_0011fb04,fn_0013370c);
  fn_00143de8(param_1,(char *)&DAT_0011fb1c,fn_00132db4);
  fn_00143de8(param_1,(char *)&DAT_0011fe00,fn_0013965c);
  fn_00143de8(param_1,(char *)&DAT_0011fe0c,fn_00132438);
  fn_00143de8(param_1,(char *)&DAT_0011fe20,fn_00131b18);
  fn_00143de8(param_1,(char *)&DAT_0011fe34,fn_0013a248);
  fn_00143de8(param_1,(char *)&DAT_0011fe44,fn_0012fc50);
  fn_00143de8(param_1,(char *)&DAT_0011fe54,fn_00130c94);
  fn_00143de8(param_1,(char *)&DAT_0011fe68,fn_001316b0);
  fn_00143de8(param_1,(char *)&DAT_0011fe7c,fn_0013a2e8);
  fn_00143de8(param_1,(char *)&DAT_0011fe8c,fn_00131c0c);
  fn_00143de8(param_1,(char *)&DAT_0011fea0,fn_00130e40);
  fn_00143de8(param_1,(char *)&DAT_0011feb4,fn_00130f34);
  fn_00143de8(param_1,(char *)&DAT_0011fec8,fn_00133064);
  fn_00143de8(param_1,(char *)&DAT_0011fedc,fn_001332f4);
  fn_00143de8(param_1,(char *)&DAT_0011fef0,fn_0013a3c4);
  fn_00143de8(param_1,(char *)&DAT_0011ff00,fn_0013a4b8);
  fn_00143de8(param_1,(char *)&DAT_0011ff10,fn_001338d4);
  fn_00143de8(param_1,(char *)&DAT_0011ff28,fn_00139ca4);
  fn_00143de8(param_1,(char *)&DAT_0011ff38,fn_00133158);
  fn_00143de8(param_1,(char *)&DAT_0011ff4c,fn_00132f74);
  fn_00143de8(param_1,(char *)&DAT_0011ff60,fn_001333e8);
  fn_00143de8(param_1,(char *)&DAT_0011ff74,fn_00134c5c);
  fn_00143de8(param_1,(char *)&DAT_0011ff8c,&LAB_00136894);
  fn_00143de8(param_1,(char *)&DAT_0011ffa8,fn_001368b0);
  fn_00143de8(param_1,(char *)&DAT_0011ffc4,&LAB_00134b84);
  fn_00143de8(param_1,(char *)&DAT_0011ffdc,fn_0013542c);
  fn_00143de8(param_1,(char *)&DAT_0011fff4,fn_0013822c);
  fn_00143de8(param_1,(char *)&DAT_00120014,fn_0013268c);
  fn_00143de8(param_1,(char *)&DAT_00120028,&LAB_00136784);
  fn_00143de8(param_1,(char *)&DAT_00120044,fn_001362c0);
  fn_00143de8(param_1,(char *)&DAT_00120060,fn_00139c78);
  fn_00143de8(param_1,(char *)&DAT_00120070,fn_00134b58);
  fn_00143de8(param_1,(char *)&DAT_00120088,fn_001359a0);
  fn_00143de8(param_1,(char *)&DAT_001200a4,fn_00134b2c);
  fn_00143de8(param_1,(char *)&DAT_001200bc,fn_00135400);
  fn_00143de8(param_1,(char *)&DAT_001200d4,fn_00132ea8);
  fn_00143de8(param_1,(char *)&DAT_001200e8,fn_00137540);
  fn_00143de8(param_1,(char *)&DAT_00120104,&LAB_001340b8);
  fn_00143de8(param_1,(char *)&DAT_0012011c,&LAB_001340d4);
  fn_00143de8(param_1,(char *)&DAT_00120134,fn_001366ec);
  fn_00143de8(param_1,(char *)&DAT_00120150,&LAB_00134774);
  fn_00143de8(param_1,(char *)&DAT_00120168,fn_00135228);
  fn_00143de8(param_1,(char *)&DAT_00120180,fn_001355c8);
  fn_00143de8(param_1,(char *)&DAT_00120198,fn_0013506c);
  fn_00143de8(param_1,(char *)&DAT_001201b0,&LAB_00136f78);
  fn_00143de8(param_1,(char *)&DAT_001201cc,&LAB_00138424);
  fn_00143de8(param_1,(char *)&DAT_00120448,fn_00137d0c);
  fn_00143de8(param_1,(char *)&DAT_00120468,&LAB_001380d0);
  fn_00143de8(param_1,(char *)&DAT_00120488,&LAB_00135100);
  fn_00143de8(param_1,(char *)&DAT_001204a0,&LAB_001340f0);
  fn_00143de8(param_1,(char *)&DAT_001204b8,fn_00134f64);
  fn_00143de8(param_1,(char *)&DAT_001204d0,fn_00137a3c);
  fn_00143de8(param_1,(char *)&DAT_001204ec,fn_0013463c);
  fn_00143de8(param_1,(char *)&DAT_00120504,fn_001346d8);
  fn_00143de8(param_1,(char *)&DAT_0012051c,fn_00137b44);
  fn_00143de8(param_1,(char *)&DAT_00120538,fn_001384e0);
  fn_00143de8(param_1,(char *)&DAT_0012055c,fn_00137208);
  fn_00143de8(param_1,(char *)&DAT_00120578,fn_00137314);
  fn_00143de8(param_1,(char *)&DAT_00120594,fn_00138538);
  fn_00143de8(param_1,(char *)&DAT_001205b8,fn_00138740);
  fn_00143de8(param_1,(char *)&DAT_001205dc,fn_00133af4);
  fn_00143de8(param_1,(char *)&DAT_001205f4,fn_001308a4);
  fn_00143de8(param_1,(char *)&DAT_00120604,fn_00135770);
  fn_00143de8(param_1,(char *)&DAT_0012061c,fn_00134e50);
  fn_00143de8(param_1,(char *)&DAT_00120634,fn_00134cf0);
  fn_00143de8(param_1,(char *)&DAT_0012064c,fn_001382c4);
  fn_00143de8(param_1,(char *)&DAT_0012066c,fn_0013565c);
  fn_00143de8(param_1,(char *)&DAT_00120684,fn_00139074);
  fn_00143de8(param_1,(char *)&DAT_001206ac,fn_00137fb8);
  fn_00143de8(param_1,(char *)&DAT_001206cc,fn_001367a0);
  fn_00143de8(param_1,(char *)&DAT_001206e8,fn_00138dc8);
  fn_00143de8(param_1,(char *)&DAT_0012070c,fn_00139da0);
  fn_00143de8(param_1,(char *)&DAT_0012071c,&LAB_0012f8b8);
  fn_00143de8(param_1,(char *)&DAT_0012072c,fn_00139fe0);
  fn_00143de8(param_1,(char *)&DAT_0012073c,fn_00130d34);
  fn_00143de8(param_1,(char *)&DAT_00120750,fn_00130a0c);
  fn_00143de8(param_1,(char *)&DAT_00120764,&DAT_001300b8);
  fn_00143de8(param_1,(char *)&DAT_00120774,fn_0012fa14);
  fn_00143de8(param_1,(char *)&DAT_00120784,fn_00138440);
  fn_00143de8(param_1,(char *)&DAT_001207a8,fn_00138b08);
  fn_00143de8(param_1,(char *)&DAT_001207cc,fn_0013894c);
  fn_00143de8(param_1,(char *)&DAT_001207f0,fn_001362ec);
  fn_00143de8(param_1,(char *)&DAT_0012080c,fn_0013756c);
  fn_00143de8(param_1,(char *)&DAT_001208d8,fn_00136e18);
  fn_00143de8(param_1,(char *)&DAT_001208f4,fn_00134480);
  fn_00143de8(param_1,(char *)&DAT_0012090c,fn_00135348);
  fn_00143de8(param_1,(char *)&DAT_00120924,fn_00136cbc);
  fn_00143de8(param_1,(char *)&DAT_00120940,fn_00137b9c);
  fn_00143de8(param_1,(char *)&DAT_00120960,fn_00136208);
  fn_00143de8(param_1,(char *)&DAT_0012097c,fn_00137c54);
  fn_00143de8(param_1,(char *)&DAT_0012099c,fn_00131a24);
  fn_00143de8(param_1,(char *)&DAT_001209b0,fn_00136b08);
  fn_00143de8(param_1,(char *)&DAT_001209cc,fn_00135d1c);
  fn_00143de8(param_1,(char *)&DAT_001209e8,fn_00138f18);
  return;
}


