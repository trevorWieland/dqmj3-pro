#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern undefined4 fn_0012f128(); extern undefined4 fn_0012f7b8(); extern undefined4 fn_0012f8d4(); extern undefined4 fn_0012f970();
extern undefined4 fn_0012fa14(); extern undefined4 fn_0012fab4(); extern undefined4 fn_0012fba8(); extern undefined4 fn_0012fc50(); extern undefined4 fn_0012fcf0(); extern undefined4 fn_0012fd98();
extern undefined4 fn_0012fe8c(); extern undefined4 fn_0012ff80(); extern undefined4 fn_001301a8(); extern undefined4 fn_001302c8(); extern undefined4 fn_001302f4(); extern undefined4 fn_001303ac();
extern undefined4 fn_001304f0(); extern undefined4 fn_001305e4(); extern undefined4 fn_00130678(); extern undefined4 fn_0013070c(); extern undefined4 fn_00130814(); extern undefined4 fn_001308a4();
extern undefined4 fn_0013096c(); extern undefined4 fn_00130a0c(); extern undefined4 fn_00130aac(); extern undefined4 fn_00130ba0(); extern undefined4 fn_00130c94(); extern undefined4 fn_00130d34();
extern undefined4 fn_00130e40(); extern undefined4 fn_00130f34(); extern undefined4 fn_00131028(); extern undefined4 fn_00131128(); extern undefined4 fn_001311bc(); extern undefined4 fn_001312b0();
extern undefined4 fn_001312dc(); extern undefined4 fn_00131380(); extern undefined4 fn_00131424(); extern undefined4 fn_00131518(); extern undefined4 fn_0013160c(); extern undefined4 fn_001316b0();
extern undefined4 fn_00131750(); extern undefined4 fn_00131890(); extern undefined4 fn_00131980(); extern undefined4 fn_00131a24(); extern undefined4 fn_00131b18(); extern undefined4 fn_00131c0c();
extern undefined4 fn_00131cac(); extern undefined4 fn_00131ce4(); extern undefined4 fn_00131dec(); extern undefined4 fn_00131e80(); extern undefined4 fn_00131f24(); extern undefined4 fn_00131f54();
extern undefined4 fn_00132048(); extern undefined4 fn_001320ec(); extern undefined4 fn_00132118(); extern undefined4 fn_001321bc(); extern undefined4 fn_001322f8(); extern undefined4 fn_00132394();
extern undefined4 fn_00132438(); extern undefined4 fn_001324dc(); extern undefined4 fn_00132574(); extern undefined4 fn_0013268c(); extern undefined4 fn_00132774(); extern undefined4 fn_001327a4();
extern undefined4 fn_001328e8(); extern undefined4 fn_00132918(); extern undefined4 fn_001329b4(); extern undefined4 fn_00132a5c(); extern undefined4 fn_00132b00(); extern undefined4 fn_00132b2c();
extern undefined4 fn_00132b58(); extern undefined4 fn_00132cb4(); extern undefined4 fn_00132db4(); extern undefined4 fn_00132ea8(); extern undefined4 fn_00132ed4(); extern undefined4 fn_00132f74();
extern undefined4 fn_00133064(); extern undefined4 fn_00133158(); extern undefined4 fn_001331f0(); extern undefined4 fn_001332f4(); extern undefined4 fn_001333e8(); extern undefined4 fn_001334d0();
extern undefined4 fn_00133564(); extern undefined4 fn_00133590(); extern undefined4 fn_001335bc(); extern undefined4 fn_001335ec(); extern undefined4 fn_00133618(); extern undefined4 fn_0013370c();
extern undefined4 fn_00133800(); extern undefined4 fn_0013389c(); extern undefined4 fn_001338d4(); extern undefined4 fn_001339c8(); extern undefined4 fn_00133af4(); extern undefined4 fn_00134100();
extern undefined4 fn_001341f8(); extern undefined4 fn_001342a0(); extern undefined4 fn_00134344(); extern undefined4 fn_00134480(); extern undefined4 fn_0013463c(); extern undefined4 fn_001346d8();
extern undefined4 fn_00134790(); extern undefined4 fn_001348cc(); extern undefined4 fn_001348f8(); extern undefined4 fn_00134994(); extern undefined4 fn_00134a34(); extern undefined4 fn_00134b2c();
extern undefined4 fn_00134b58(); extern undefined4 fn_00134ba0(); extern undefined4 fn_00134bcc(); extern undefined4 fn_00134c5c(); extern undefined4 fn_00134cf0(); extern undefined4 fn_00134e50();
extern undefined4 fn_00134f64(); extern undefined4 fn_0013506c(); extern undefined4 fn_00135110(); extern undefined4 fn_00135134(); extern undefined4 fn_00135228(); extern undefined4 fn_00135254();
extern undefined4 fn_00135348(); extern undefined4 fn_00135400(); extern undefined4 fn_0013542c(); extern undefined4 fn_001354c4(); extern undefined4 fn_001355c8(); extern undefined4 fn_0013565c();
extern undefined4 fn_00135770(); extern undefined4 fn_00135884(); extern undefined4 fn_001358b0(); extern undefined4 fn_001359a0(); extern undefined4 fn_001359cc(); extern undefined4 fn_00135ac8();
extern undefined4 fn_00135af4(); extern undefined4 fn_00135c2c(); extern undefined4 fn_00135d1c(); extern undefined4 fn_00135e0c(); extern undefined4 fn_00135e38(); extern undefined4 fn_00135ed0();
extern undefined4 fn_00135f64(); extern undefined4 fn_00135ff4(); extern undefined4 fn_00136084(); extern undefined4 fn_00136114(); extern undefined4 fn_00136208(); extern undefined4 fn_001362c0();
extern undefined4 fn_001362ec(); extern undefined4 fn_0013644c(); extern undefined4 fn_00136554(); extern undefined4 fn_0013665c(); extern undefined4 fn_001366ec(); extern undefined4 fn_001367a0();
extern undefined4 fn_001368b0(); extern undefined4 fn_00136948(); extern undefined4 fn_001369e0(); extern undefined4 fn_00136a78(); extern undefined4 fn_00136b08(); extern undefined4 fn_00136ba8();
extern undefined4 fn_00136cbc(); extern undefined4 fn_00136d74(); extern undefined4 fn_00136e18(); extern undefined4 fn_00136f94(); extern undefined4 fn_00137100(); extern undefined4 fn_00137208();
extern undefined4 fn_00137314(); extern undefined4 fn_00137420(); extern undefined4 fn_001374b0(); extern undefined4 fn_00137540(); extern undefined4 fn_0013756c(); extern undefined4 fn_00137724();
extern undefined4 fn_0013782c(); extern undefined4 fn_00137934(); extern undefined4 fn_00137a3c(); extern undefined4 fn_00137b44(); extern undefined4 fn_00137b9c(); extern undefined4 fn_00137c54();
extern undefined4 fn_00137d0c(); extern undefined4 fn_00137d38(); extern undefined4 fn_00137eb0(); extern undefined4 fn_00137fb8(); extern undefined4 fn_001380e0(); extern undefined4 fn_0013810c();
extern undefined4 fn_0013819c(); extern undefined4 fn_0013822c(); extern undefined4 fn_001382c4(); extern undefined4 fn_00138440(); extern undefined4 fn_001384e0(); extern undefined4 fn_00138538();
extern undefined4 fn_00138740(); extern undefined4 fn_0013894c(); extern undefined4 fn_00138b08(); extern undefined4 fn_00138cbc(); extern undefined4 fn_00138dc8(); extern undefined4 fn_00138f18();
extern undefined4 fn_00139074(); extern undefined4 fn_001391d4(); extern undefined4 fn_00139278(); extern undefined4 fn_001392a4(); extern undefined4 fn_00139358(); extern undefined4 fn_001393fc();
extern undefined4 fn_001394ec(); extern undefined4 fn_00139518(); extern undefined4 fn_0013965c(); extern undefined4 fn_001396fc(); extern undefined4 fn_00139738(); extern undefined4 fn_001399d8();
extern undefined4 fn_00139a90(); extern undefined4 fn_00139b84(); extern undefined4 fn_00139c78(); extern undefined4 fn_00139ca4(); extern undefined4 fn_00139da0(); extern undefined4 fn_00139f38();
extern undefined4 fn_00139fe0(); extern undefined4 fn_0013a00c(); extern undefined4 fn_0013a0ac(); extern undefined4 fn_0013a1a0(); extern undefined4 fn_0013a248(); extern undefined4 fn_0013a2e8();
extern undefined4 fn_0013a388(); extern undefined4 fn_0013a3c4(); extern undefined4 fn_0013a4b8(); extern undefined4 fn_0013a5ac(); extern undefined4 fn_0013a5e8(); extern bool fn_00143de8();
extern undefined4 fn_0019bc50(); extern undefined4 fn_002ff628(); extern undefined8 fn_00301a9c();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_0012f8b8(void) { }
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_001340b8(void) { }
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_001340d4(void) { }
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_001340f0(void) { }
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_00134774(void) { }
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_00134b84(void) { }
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_00135100(void) { }
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_00136784(void) { }
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_00136894(void) { }
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_00136f78(void) { }
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_001380d0(void) { }
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_00138424(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0011e9c4; extern undefined4 DAT_0011e9d4; extern undefined4 DAT_0011e9ec; extern undefined4 DAT_0011ea08;
extern undefined4 DAT_0011ea24; extern undefined4 DAT_0011ea44; extern undefined4 DAT_0011ea64; extern undefined4 DAT_0011ea80;
extern undefined4 DAT_0011ea9c; extern undefined4 DAT_0011eab8; extern undefined4 DAT_0011ead4; extern undefined4 DAT_0011eae8;
extern undefined4 DAT_0011eb00; extern undefined4 DAT_0011eb18; extern undefined4 DAT_0011eb34; extern undefined4 DAT_0011eb44;
extern undefined4 DAT_0011eb60; extern undefined4 DAT_0011eb7c; extern undefined4 DAT_0011eb88; extern undefined4 DAT_0011eb94;
extern undefined4 DAT_0011eba8; extern undefined4 DAT_0011ebb4; extern undefined4 DAT_0011ebc0; extern undefined4 DAT_0011ebd0;
extern undefined4 DAT_0011ebe0; extern undefined4 DAT_0011ebfc; extern undefined4 DAT_0011ec0c; extern undefined4 DAT_0011ec28;
extern undefined4 DAT_0011ec3c; extern undefined4 DAT_0011ec4c; extern undefined4 DAT_0011ec64; extern undefined4 DAT_0011ec7c;
extern undefined4 DAT_0011ec90; extern undefined4 DAT_0011eca0; extern undefined4 DAT_0011ecb0; extern undefined4 DAT_0011eccc;
extern undefined4 DAT_0011ece0; extern undefined4 DAT_0011ecf4; extern undefined4 DAT_0011ed08; extern undefined4 DAT_0011ed20;
extern undefined4 DAT_0011ed38; extern undefined4 DAT_0011ed4c; extern undefined4 DAT_0011ed60; extern undefined4 DAT_0011ed74;
extern undefined4 DAT_0011ed88; extern undefined4 DAT_0011f074; extern undefined4 DAT_0011f088; extern undefined4 DAT_0011f0a8;
extern undefined4 DAT_0011f0c0; extern undefined4 DAT_0011f0d8; extern undefined4 DAT_0011f0ec; extern undefined4 DAT_0011f104;
extern undefined4 DAT_0011f120; extern undefined4 DAT_0011f13c; extern undefined4 DAT_0011f154; extern undefined4 DAT_0011f16c;
extern undefined4 DAT_0011f188; extern undefined4 DAT_0011f19c; extern undefined4 DAT_0011f1ac; extern undefined4 DAT_0011f1b8;
extern undefined4 DAT_0011f1d4; extern undefined4 DAT_0011f1f0; extern undefined4 DAT_0011f210; extern undefined4 DAT_0011f224;
extern undefined4 DAT_0011f23c; extern undefined4 DAT_0011f254; extern undefined4 DAT_0011f268; extern undefined4 DAT_0011f27c;
extern undefined4 DAT_0011f290; extern undefined4 DAT_0011f2a0; extern undefined4 DAT_0011f2ac; extern undefined4 DAT_0011f2bc;
extern undefined4 DAT_0011f2cc; extern undefined4 DAT_0011f2d8; extern undefined4 DAT_0011f2e8; extern undefined4 DAT_0011f2f8;
extern undefined4 DAT_0011f308; extern undefined4 DAT_0011f320; extern undefined4 DAT_0011f338; extern undefined4 DAT_0011f348;
extern undefined4 DAT_0011f35c; extern undefined4 DAT_0011f374; extern undefined4 DAT_0011f390; extern undefined4 DAT_0011f3a4;
extern undefined4 DAT_0011f3c0; extern undefined4 DAT_0011f3dc; extern undefined4 DAT_0011f3f8; extern undefined4 DAT_0011f40c;
extern undefined4 DAT_0011f41c; extern undefined4 DAT_0011f440; extern undefined4 DAT_0011f75c; extern undefined4 DAT_0011f778;
extern undefined4 DAT_0011f794; extern undefined4 DAT_0011f7b0; extern undefined4 DAT_0011f7cc; extern undefined4 DAT_0011f7e0;
extern undefined4 DAT_0011f7f4; extern undefined4 DAT_0011f80c; extern undefined4 DAT_0011f828; extern undefined4 DAT_0011f83c;
extern undefined4 DAT_0011f85c; extern undefined4 DAT_0011f870; extern undefined4 DAT_0011f884; extern undefined4 DAT_0011f898;
extern undefined4 DAT_0011f8ac; extern undefined4 DAT_0011f8c0; extern undefined4 DAT_0011f8d4; extern undefined4 DAT_0011f8ec;
extern undefined4 DAT_0011f904; extern undefined4 DAT_0011f918; extern undefined4 DAT_0011f92c; extern undefined4 DAT_0011f940;
extern undefined4 DAT_0011f950; extern undefined4 DAT_0011f968; extern undefined4 DAT_0011f97c; extern undefined4 DAT_0011f990;
extern undefined4 DAT_0011f9a8; extern undefined4 DAT_0011f9c4; extern undefined4 DAT_0011f9d8; extern undefined4 DAT_0011f9ec;
extern undefined4 DAT_0011f9fc; extern undefined4 DAT_0011fa10; extern undefined4 DAT_0011fa20; extern undefined4 DAT_0011fa2c;
extern undefined4 DAT_0011fa38; extern undefined4 DAT_0011fa48; extern undefined4 DAT_0011fa58; extern undefined4 DAT_0011fa68;
extern undefined4 DAT_0011fa74; extern undefined4 DAT_0011fa84; extern undefined4 DAT_0011fa94; extern undefined4 DAT_0011faa4;
extern undefined4 DAT_0011fab4; extern undefined4 DAT_0011fac8; extern undefined4 DAT_0011fadc; extern undefined4 DAT_0011faf0;
extern undefined4 DAT_0011fb04; extern undefined4 DAT_0011fb1c; extern undefined4 DAT_0011fe00; extern undefined4 DAT_0011fe0c;
extern undefined4 DAT_0011fe20; extern undefined4 DAT_0011fe34; extern undefined4 DAT_0011fe44; extern undefined4 DAT_0011fe54;
extern undefined4 DAT_0011fe68; extern undefined4 DAT_0011fe7c; extern undefined4 DAT_0011fe8c; extern undefined4 DAT_0011fea0;
extern undefined4 DAT_0011feb4; extern undefined4 DAT_0011fec8; extern undefined4 DAT_0011fedc; extern undefined4 DAT_0011fef0;
extern undefined4 DAT_0011ff00; extern undefined4 DAT_0011ff10; extern undefined4 DAT_0011ff28; extern undefined4 DAT_0011ff38;
extern undefined4 DAT_0011ff4c; extern undefined4 DAT_0011ff60; extern undefined4 DAT_0011ff74; extern undefined4 DAT_0011ff8c;
extern undefined4 DAT_0011ffa8; extern undefined4 DAT_0011ffc4; extern undefined4 DAT_0011ffdc; extern undefined4 DAT_0011fff4;
extern undefined4 DAT_00120014; extern undefined4 DAT_00120028; extern undefined4 DAT_00120044; extern undefined4 DAT_00120060;
extern undefined4 DAT_00120070; extern undefined4 DAT_00120088; extern undefined4 DAT_001200a4; extern undefined4 DAT_001200bc;
extern undefined4 DAT_001200d4; extern undefined4 DAT_001200e8; extern undefined4 DAT_00120104; extern undefined4 DAT_0012011c;
extern undefined4 DAT_00120134; extern undefined4 DAT_00120150; extern undefined4 DAT_00120168; extern undefined4 DAT_00120180;
extern undefined4 DAT_00120198; extern undefined4 DAT_001201b0; extern undefined4 DAT_001201cc; extern undefined4 DAT_00120448;
extern undefined4 DAT_00120468; extern undefined4 DAT_00120488; extern undefined4 DAT_001204a0; extern undefined4 DAT_001204b8;
extern undefined4 DAT_001204d0; extern undefined4 DAT_001204ec; extern undefined4 DAT_00120504; extern undefined4 DAT_0012051c;
extern undefined4 DAT_00120538; extern undefined4 DAT_0012055c; extern undefined4 DAT_00120578; extern undefined4 DAT_00120594;
extern undefined4 DAT_001205b8; extern undefined4 DAT_001205dc; extern undefined4 DAT_001205f4; extern undefined4 DAT_00120604;
extern undefined4 DAT_0012061c; extern undefined4 DAT_00120634; extern undefined4 DAT_0012064c; extern undefined4 DAT_0012066c;
extern undefined4 DAT_00120684; extern undefined4 DAT_001206ac; extern undefined4 DAT_001206cc; extern undefined4 DAT_001206e8;
extern undefined4 DAT_0012070c; extern undefined4 DAT_0012071c; extern undefined4 DAT_0012072c; extern undefined4 DAT_0012073c;
extern undefined4 DAT_00120750; extern undefined4 DAT_00120764; extern undefined4 DAT_00120774; extern undefined4 DAT_00120784;
extern undefined4 DAT_001207a8; extern undefined4 DAT_001207cc; extern undefined4 DAT_001207f0; extern undefined4 DAT_0012080c;
extern undefined4 DAT_001208d8; extern undefined4 DAT_001208f4; extern undefined4 DAT_0012090c; extern undefined4 DAT_00120924;
extern undefined4 DAT_00120940; extern undefined4 DAT_00120960; extern undefined4 DAT_0012097c; extern undefined4 DAT_0012099c;
extern undefined4 DAT_001209b0; extern undefined4 DAT_001209cc; extern undefined4 DAT_001209e8; extern undefined4 DAT_001300b8;
extern undefined4 DAT_007c8a38; extern undefined4 DAT_008c7611; extern undefined4 DAT_008f9ce8; extern undefined4 DAT_008f9cf4;
