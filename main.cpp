//magic template from https://github.com/xem/3DShomebrew/wiki

#include <3ds.h>

int main()
{
  // Initializations
  srvInit();        // services
  aptInit();        // applets
  hidInit(NULL);    // input
  gfxInitDefault(); // graphics
  gfxSet3D(false);  // stereoscopy
  u32 kDown;        // keys down
  u32 kHeld;        // keys pressed
  u32 kUp;          // keys up

  while (aptMainLoop())
  {

    gspWaitForVBlank();

    // Read which buttons are currently pressed or not
    hidScanInput();
    kDown = hidKeysDown();
    kHeld = hidKeysHeld();
    kUp = hidKeysUp();

    if (kDown & KEY_START){
      break;
    }



    // Flush and swap framebuffers
    gfxFlushBuffers();
    gfxSwapBuffers();
  }

  gfxExit();
  hidExit();
  aptExit();
  srvExit();

  return 0;
}
