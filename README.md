# SDL-Smart-Pointer
 This library contains smart pointers with custom deleter. You no longer need to worry about freeing memory with SDL_Destroy / SDL_Free. 

Usage example:
class simple_class {
SDL_TTF_Font_ptr font = nullptr;
SDL_Surface_ptr text_surface = nullptr;
}

void SomeMethod {
    font = SDL_TTF_Font_ptr(TTF_OpenFont(fontPath.c_str(), fontSize));
		text_surface = SDL_Surface_ptr(TTF_RenderText_Solid(font.get(), fontData.c_str(), fontColor));
}
