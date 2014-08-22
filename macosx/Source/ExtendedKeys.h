
#ifndef __EXTENDED_KEYS_H__
#define __EXTENDED_KEYS_H__

enum {
	PSX_FREEZE_KEY = 0xFFBE/*XK_F1*/,
	PSX_NEXT_FREEZE_SLOT_KEY = 0xFFBF/*XK_F2*/,
	PSX_DEFROST_KEY = 0xFFC0/*XK_F3*/,
	PSX_SHOW_FREEZE_PIC_KEY = 0xFFC1/*XK_F4*/,
	PSX_SIO_ALWAYS_ON_KEY = 0xFFC2/*XK_F5*/,
	PSX_BW_MDEC_KEY = 0xFFC3/*XK_F6*/,
	PSX_XA_AUDIO_ON_KEY = 0xFFC4/*XK_F7*/,
	PSX_SNAPSHOT_KEY = 0xFFC5/*XK_F8*/,
	PSX_OPEN_SHELL_KEY = 0xFFC6/*XK_F9*/,
	PSX_CLOSE_SHELL_KEY = 0xFFC7/*XK_F10*/,
	
	PSX_STOP_KEY = 0xFF1B/*XK_Escape*/,
	
	GPU_FULLSCREEN_KEY = 0x0100,
	GPU_FPS_DISPLAY_KEY = 0xFFFF,/*XK_Delete*/
    
    // Fake HotKeys
    GPU_HOTKEYS = 0x020,
    GPU_FAST_FORWARD,
    GPU_FRAME_LIMIT
};

#endif //__EXTENDED_KEYS_H__