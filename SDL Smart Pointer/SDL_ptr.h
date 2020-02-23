#ifndef SDL_PTR_H
#define SDL_PTR_H

#include <SDL.h>
#include <memory>

namespace SDL_Deleter
{
	struct SDL_Surface_Deleter {
		void operator()(SDL_Surface* surface) {
			SDL_FreeSurface(surface);
		}
	};

	struct SDL_Texture_Deleter {
		void operator()(SDL_Texture* texture) {
			SDL_DestroyTexture(texture);
		}
	};

	struct SDL_Window_Deleter {
		void operator()(SDL_Window* window) {
			SDL_DestroyWindow(window);
		}
	};

	struct SDL_Renderer_Deleter {
		void operator()(SDL_Renderer* renderer) {
			SDL_DestroyRenderer(renderer);
		}
	};

	struct SDL_mutex_Deleter {
		void operator()(SDL_mutex* mutex) {
			SDL_DestroyMutex(mutex);
		}
	};

	struct SDL_cond_Deleter {
		void operator()(SDL_cond* cond) {
			SDL_DestroyCond(cond);
		}
	};

	struct SDL_sem_Deleter {
		void operator()(SDL_sem* sem) {
			SDL_DestroySemaphore(sem);
		}
	};

	struct SDL_Cursor_Deleter {
		void operator()(SDL_Cursor* cursor) {
			SDL_FreeCursor(cursor);
		}
	};

	struct SDL_PixelFormat_Deleter {
		void operator()(SDL_PixelFormat* format) {
			SDL_FreeFormat(format);
		}
	};

	struct SDL_Palette_Deleter {
		void operator()(SDL_Palette* palette) {
			SDL_FreePalette(palette);
		}
	};

	struct SDL_RWops_Deleter {
		void operator()(SDL_RWops* area) {
			SDL_FreeRW(area);
		}
	};
	
	struct SDL_Unit8_WAV_Deleter {
		void operator()(Uint8* audio_buf) {
			SDL_FreeWAV(audio_buf);
		}
	};
}

using namespace SDL_Deleter;



using SDL_Surface_ptr = std::unique_ptr<SDL_Surface, SDL_Surface_Deleter>;

using SDL_Texture_ptr = std::unique_ptr<SDL_Texture, SDL_Texture_Deleter>;

using SDL_Window_ptr = std::unique_ptr<SDL_Window, SDL_Window_Deleter>;

using SDL_Renderer_ptr = std::unique_ptr<SDL_Renderer, SDL_Renderer_Deleter>;

using SDL_mutex_ptr = std::unique_ptr<SDL_mutex, SDL_mutex_Deleter>;

using SDL_cond_ptr = std::unique_ptr<SDL_cond, SDL_cond_Deleter>;

using SDL_sem_ptr = std::unique_ptr<SDL_sem, SDL_sem_Deleter>;

using SDL_Cursor_ptr = std::unique_ptr<SDL_Cursor, SDL_Cursor_Deleter>;

using SDL_PixelFormat_ptr = std::unique_ptr<SDL_PixelFormat, SDL_PixelFormat_Deleter>;

using SDL_Palette_ptr = std::unique_ptr<SDL_Palette, SDL_Palette_Deleter>;

using SDL_RWops_ptr = std::unique_ptr<SDL_RWops, SDL_RWops_Deleter>;

using SDL_Uint8_WAV_ptr = std::unique_ptr<Uint8, SDL_Unit8_WAV_Deleter>;


#endif // !SDL_PTR_H
