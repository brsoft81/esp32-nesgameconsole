#include <stddef.h>
#include <stdint.h>
#include <string.h>

#include <rg_system.h>

#define AUDIO_SAMPLE_RATE   (32000)
#define AUDIO_BUFFER_LENGTH (AUDIO_SAMPLE_RATE / 50 + 1)

#define SETTING_WIFI_ENABLE "Enable"
#define SETTING_WIFI_SLOT   "Slot"
#define SETTING_WEBUI       "HTTPFileServer"

#define RG_FILE_LIST_MAX      32
#define RG_FILE_NAME_LEN_MAX  47

#define RG_STARTUP_PARAM_BACK_TO_LAUNCHER "back_to_launcher"

extern uint8_t shared_memory_block_64K[0x10000];

extern const nes_rom_t* nes_romdata;
extern uint32_t nes_part_size;
extern uint32_t nes_part_rom_data_size;

void launcher_main();
void nes_main();

int scanroms_cb(const rg_scandir_t *file, void *arg);
rg_gui_event_t switch_game_cb(rg_gui_option_t *option, rg_gui_event_t event);
